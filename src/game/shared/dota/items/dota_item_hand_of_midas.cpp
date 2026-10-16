// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_hand_of_midas.cpp:26
class CDOTA_Item_Recipe_HandOfMidas : public CDOTA_Item {
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
	CDOTA_Item_Recipe_HandOfMidas(CDOTA_Item_Recipe_HandOfMidas &);
	CDOTA_Item_Recipe_HandOfMidas(CDOTA_Item_Recipe_HandOfMidas &);
	CDOTA_Item_Recipe_HandOfMidas();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_HandOfMidas();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_hand_of_midas.cpp:37
class CDOTA_Item_HandOfMidas : public CDOTA_Item {
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
	CDOTA_Item_HandOfMidas(CDOTA_Item_HandOfMidas &);
	CDOTA_Item_HandOfMidas(CDOTA_Item_HandOfMidas &);
	CDOTA_Item_HandOfMidas();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual ~CDOTA_Item_HandOfMidas();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_hand_of_midas.cpp:97
class CDOTA_Modifier_Item_HandOfMidas : public CDOTA_Buff_Item {
public:

private:

	int bonus_attack_speed;  // +0xba8
	CDOTA_Modifier_Item_HandOfMidas();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_HandOfMidas();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_HandOfMidas::~CDOTA_Item_Recipe_HandOfMidas  (line 26, @0x0000000002da1fe0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_HandOfMidas::~CDOTA_Item_Recipe_HandOfMidas(
        CDOTA_Item_Recipe_HandOfMidas *const this)
{
  this->_vptr_IHandleEntity = &off_46EDB70;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_HandOfMidas::~CDOTA_Item_Recipe_HandOfMidas  (line 26, @0x0000000002da2000, libserver.so)  // inlines: ~CDOTA_Item_Recipe_HandOfMidas
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_HandOfMidas::~CDOTA_Item_Recipe_HandOfMidas(
        CDOTA_Item_Recipe_HandOfMidas *const this)
{
  this->_vptr_IHandleEntity = &off_46EDB70;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_HandOfMidas::Schema_DynamicBinding  (line 28, @0x0000000002d9f5e0, libserver.so)
// globals: CDOTA_Item_Recipe_HandOfMidas::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_HandOfMidas::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_HandOfMidas *const this)
{
  return CDOTA_Item_Recipe_HandOfMidas::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d9f5f0, libserver.so)
// globals: CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d9f600, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_HandOfMidas>
void __fastcall CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d9f620, libserver.so)
void __fastcall CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d9f640, libserver.so)
bool __fastcall CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d9f650, libserver.so)
// globals: CDOTA_Item_Recipe_HandOfMidas::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_HandOfMidas::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002da08b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002da17c0, libserver.so)  // inlines: CDOTA_Item_Recipe_HandOfMidas, Construct<CDOTA_Item_Recipe_HandOfMidas>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46EDB70;
  }
  return p;
}


// CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002da3f40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002da3f60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInternal  (line 28, @0x0000000002da95a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "item_recipe_hand_of_midas", "CDOTA_Item_Recipe_HandOfMidas"
// globals: `guard variable for'CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClass, CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClass, __dso_handle, CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClassInfo, CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClass);
    CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClass._vptr_CEntityClass = off_46EDAF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_HandOfMidasClass != 0 )
    return &CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClass;
  if ( `guard variable for'CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClassInfo,
      "CDOTA_Item_Recipe_HandOfMidas",
      "item_recipe_hand_of_midas",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClassInfo);
  }
  CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClass.m_pClassInfo = &CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClassInfo;
  CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClass.m_pBaseClassInfo = CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_HandOfMidasClass = &CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClass;
  CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClassInfo.m_pClass = &CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClass;
  CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_HandOfMidasClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HandOfMidasClass;
}


// CDOTA_Item_HandOfMidas::~CDOTA_Item_HandOfMidas  (line 37, @0x0000000002da2030, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_HandOfMidas::~CDOTA_Item_HandOfMidas(CDOTA_Item_HandOfMidas *const this)
{
  this->_vptr_IHandleEntity = &off_46EE770;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_HandOfMidas::~CDOTA_Item_HandOfMidas  (line 37, @0x0000000002da2050, libserver.so)  // inlines: ~CDOTA_Item_HandOfMidas
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_HandOfMidas::~CDOTA_Item_HandOfMidas(CDOTA_Item_HandOfMidas *const this)
{
  this->_vptr_IHandleEntity = &off_46EE770;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_HandOfMidas::Schema_DynamicBinding  (line 39, @0x0000000002d9f660, libserver.so)
// globals: CDOTA_Item_HandOfMidas::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_HandOfMidas::Schema_DynamicBinding(
        const CDOTA_Item_HandOfMidas *const this)
{
  return CDOTA_Item_HandOfMidas::s_pSchemaBinding;
}


// CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002d9f670, libserver.so)
// globals: CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002d9f680, libserver.so)  // inlines: Destruct<CDOTA_Item_HandOfMidas>
void __fastcall CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002d9f6a0, libserver.so)
void __fastcall CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002d9f6c0, libserver.so)
bool __fastcall CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002d9f6d0, libserver.so)
// globals: CDOTA_Item_HandOfMidas::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_HandOfMidas::s_pSchemaBinding;
}


// CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002da08f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002da17f0, libserver.so)  // inlines: CDOTA_Item_HandOfMidas, Construct<CDOTA_Item_HandOfMidas>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46EE770;
  }
  return p;
}


// CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002da3f90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002da3fb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_HandOfMidas::GetEntityClassInternal  (line 39, @0x0000000002da96f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "CDOTA_Item_HandOfMidas"
// globals: `guard variable for'CDOTA_Item_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HandOfMidasClass, CDOTA_Item_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HandOfMidasClass, __dso_handle, CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_HandOfMidas::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HandOfMidasClassInfo, CDOTA_Item_HandOfMidas::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HandOfMidasClassInfo
CEntityClass *__cdecl CDOTA_Item_HandOfMidas::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HandOfMidasClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HandOfMidasClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HandOfMidasClass);
    CDOTA_Item_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HandOfMidasClass._vptr_CEntityClass = off_46EE6F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HandOfMidasClass);
    __cxa_atexit(
      CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HandOfMidasClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_HandOfMidasClass != 0 )
    return &CDOTA_Item_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HandOfMidasClass;
  if ( `guard variable for'CDOTA_Item_HandOfMidas::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HandOfMidasClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_HandOfMidas::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HandOfMidasClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_HandOfMidas::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HandOfMidasClassInfo,
      "CDOTA_Item_HandOfMidas",
      "item_hand_of_midas",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_HandOfMidas::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HandOfMidasClassInfo);
  }
  CDOTA_Item_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HandOfMidasClass.m_pClassInfo = &CDOTA_Item_HandOfMidas::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HandOfMidasClassInfo;
  CDOTA_Item_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HandOfMidasClass.m_pBaseClassInfo = CDOTA_Item_HandOfMidas::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HandOfMidasClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_HandOfMidasClass = &CDOTA_Item_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HandOfMidasClass;
  CDOTA_Item_HandOfMidas::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HandOfMidasClassInfo.m_pClass = &CDOTA_Item_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HandOfMidasClass;
  CDOTA_Item_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HandOfMidasClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_HandOfMidasClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_HandOfMidas::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HandOfMidasClass;
}


// CDOTA_Item_HandOfMidas::GetIntrinsicModifierName  (line 41, @0x0000000002d9f6e0, libserver.so)
// strings: "modifier_item_hand_of_midas"
const char *__fastcall CDOTA_Item_HandOfMidas::GetIntrinsicModifierName(CDOTA_Item_HandOfMidas *const this)
{
  return "modifier_item_hand_of_midas";
}


// CDOTA_Item_HandOfMidas::CastFilterResult  (line 53, @0x0000000002d95180, libserver.so)
// calls: CDOTABaseAbility::GetCaster, UnitFilter
int __fastcall CDOTA_Item_HandOfMidas::CastFilterResult(CDOTA_Item_HandOfMidas *const this, CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int result; // eax

  Caster = CDOTABaseAbility::GetCaster(this);
  result = UnitFilter(pTarget, 2, 2, 528, Caster->m_iTeamNum.m_Value);
  if ( result == 0 )
    return !pTarget->m_bCanBeDominated.m_Value ? 0x17 : 0;
  return result;
}


// CDOTA_Item_HandOfMidas::GetCustomCastError  (line 67, @0x0000000002d945c0, libserver.so)
// strings: "#dota_hud_error_cannot_transmute"
const char *__fastcall CDOTA_Item_HandOfMidas::GetCustomCastError(
        CDOTA_Item_HandOfMidas *const this,
        CDOTA_BaseNPC *pTarget)
{
  const char *result; // rax

  result = "#dota_hud_error_cannot_transmute";
  if ( pTarget->m_bCanBeDominated.m_Value )
    return "";
  return result;
}


// CDOTA_Item_HandOfMidas::OnSpellStart  (line 75, @0x0000000002d951d0, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::Kill, DOTA_EmitSound
// strings: "particles/items2_fx/hand_of_midas.vpcf", "attach_hitloc", "DOTA_Item.Hand_Of_Midas"
void __fastcall CDOTA_Item_HandOfMidas::OnSpellStart(CDOTA_Item_HandOfMidas *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *v9; // r14
  CDOTA_BaseNPC *v10; // r15
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && BYTE1(CursorTarget[2].m_DamageModifiers.m_LastAlloc.index) == 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                        ParticleManager,
                        "particles/items2_fx/hand_of_midas.vpcf",
                        2,
                        0,
                        0,
                        Caster);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    v7 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v7, Caster, 0, v3, 1, 0, *AbsOrigin, 1);
    v8 = CDOTABaseAbility::GetCaster(this);
    v9 = CBaseEntity::GetAbsOrigin(v8);
    v10 = CDOTABaseAbility::GetCaster(this);
    v11 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v11, Caster, 1, v10, 5, "attach_hitloc", *v9, 1);
    v12 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v12, Caster);
    v13 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::Kill(v3, this, v13, 0.0, 0);
    v14 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "DOTA_Item.Hand_Of_Midas", v14);
  }
}


// CDOTA_Modifier_Item_HandOfMidas::~CDOTA_Modifier_Item_HandOfMidas  (line 97, @0x0000000002da0c40, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_HandOfMidas::~CDOTA_Modifier_Item_HandOfMidas(
        CDOTA_Modifier_Item_HandOfMidas *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_HandOfMidas::~CDOTA_Modifier_Item_HandOfMidas  (line 97, @0x0000000002da0c60, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_HandOfMidas
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_HandOfMidas::~CDOTA_Modifier_Item_HandOfMidas(
        CDOTA_Modifier_Item_HandOfMidas *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_HandOfMidas::OnCreated  (line 113, @0x0000000002d9c270, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_HandOfMidas::OnCreated(CDOTA_Modifier_Item_HandOfMidas *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_speed", -1, 0);
  else
    this->bonus_attack_speed = 0;
}


// CDOTA_Modifier_Item_HandOfMidas::DeclareFunctions  (line 120, @0x0000000002d945e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_HandOfMidas::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_HandOfMidas::DeclareFunctions(CDOTA_Modifier_Item_HandOfMidas *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_HandOfMidas::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Item_HandOfMidas::GetModifierAttackSpeedBonus_Constant  (line 125, @0x0000000002d94600, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_HandOfMidas::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_HandOfMidas *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


