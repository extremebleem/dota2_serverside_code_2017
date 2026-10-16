// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_hood_of_defiance.cpp:27
class CDOTA_Item_Recipe_Hood_Of_Defiance : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Hood_Of_Defiance(CDOTA_Item_Recipe_Hood_Of_Defiance &);
	CDOTA_Item_Recipe_Hood_Of_Defiance(CDOTA_Item_Recipe_Hood_Of_Defiance &);
	CDOTA_Item_Recipe_Hood_Of_Defiance();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Hood_Of_Defiance();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_hood_of_defiance.cpp:39
class CDOTA_Item_Hood_Of_Defiance : public CDOTA_Item {
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
	CDOTA_Item_Hood_Of_Defiance(CDOTA_Item_Hood_Of_Defiance &);
	CDOTA_Item_Hood_Of_Defiance(CDOTA_Item_Hood_Of_Defiance &);
	CDOTA_Item_Hood_Of_Defiance();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_Hood_Of_Defiance();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_hood_of_defiance.cpp:74
class CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier : public CDOTA_Buff {
public:

private:

	int barrier_block;  // +0xba8
	CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierIncomingSpellDamageConstant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_hood_of_defiance.cpp:147
class CDOTA_Modifier_Item_Hood_Of_Defiance : public CDOTA_Buff_Item {
public:

private:

	int bonus_spell_resist;  // +0xba8
	int bonus_health_regen;  // +0xbac
	CDOTA_Modifier_Item_Hood_Of_Defiance();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Hood_Of_Defiance();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Hood_Of_Defiance::~CDOTA_Item_Recipe_Hood_Of_Defiance  (line 27, @0x0000000002dbc590, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Hood_Of_Defiance::~CDOTA_Item_Recipe_Hood_Of_Defiance(
        CDOTA_Item_Recipe_Hood_Of_Defiance *const this)
{
  this->_vptr_IHandleEntity = &off_46FA9D0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Hood_Of_Defiance::~CDOTA_Item_Recipe_Hood_Of_Defiance  (line 27, @0x0000000002dbc5b0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Hood_Of_Defiance
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Hood_Of_Defiance::~CDOTA_Item_Recipe_Hood_Of_Defiance(
        CDOTA_Item_Recipe_Hood_Of_Defiance *const this)
{
  this->_vptr_IHandleEntity = &off_46FA9D0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Hood_Of_Defiance::Schema_DynamicBinding  (line 29, @0x0000000002db85f0, libserver.so)
// globals: CDOTA_Item_Recipe_Hood_Of_Defiance::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Hood_Of_Defiance::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Hood_Of_Defiance *const this)
{
  return CDOTA_Item_Recipe_Hood_Of_Defiance::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002db8600, libserver.so)
// globals: CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002db8610, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Hood_Of_Defiance>
void __fastcall CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002db8630, libserver.so)
void __fastcall CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002db8650, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002db8660, libserver.so)
// globals: CDOTA_Item_Recipe_Hood_Of_Defiance::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Hood_Of_Defiance::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002dba3c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002dbb760, libserver.so)  // inlines: CDOTA_Item_Recipe_Hood_Of_Defiance, Construct<CDOTA_Item_Recipe_Hood_Of_Defiance>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46FA9D0;
  }
  return p;
}


// CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dbe790, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dbe7b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInternal  (line 29, @0x0000000002dc2430, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_recipe_hood_of_defiance", "CDOTA_Item_Recipe_Hood_Of_Defiance"
// globals: `guard variable for'CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClass, CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClass, __dso_handle, CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClassInfo, CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClass);
    CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClass._vptr_CEntityClass = off_46FA950;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Hood_Of_DefianceClass != 0 )
    return &CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClassInfo,
      "CDOTA_Item_Recipe_Hood_Of_Defiance",
      "item_recipe_hood_of_defiance",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClassInfo);
  }
  CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClass.m_pClassInfo = &CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClassInfo;
  CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Hood_Of_DefianceClass = &CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClass;
  CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClassInfo.m_pClass = &CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClass;
  CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Hood_Of_DefianceClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hood_Of_DefianceClass;
}


// CDOTA_Item_Hood_Of_Defiance::~CDOTA_Item_Hood_Of_Defiance  (line 39, @0x0000000002dbc5e0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Hood_Of_Defiance::~CDOTA_Item_Hood_Of_Defiance(CDOTA_Item_Hood_Of_Defiance *const this)
{
  this->_vptr_IHandleEntity = &off_46FB5D0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Hood_Of_Defiance::~CDOTA_Item_Hood_Of_Defiance  (line 39, @0x0000000002dbc600, libserver.so)  // inlines: ~CDOTA_Item_Hood_Of_Defiance
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Hood_Of_Defiance::~CDOTA_Item_Hood_Of_Defiance(CDOTA_Item_Hood_Of_Defiance *const this)
{
  this->_vptr_IHandleEntity = &off_46FB5D0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Hood_Of_Defiance::Schema_DynamicBinding  (line 41, @0x0000000002db8670, libserver.so)
// globals: CDOTA_Item_Hood_Of_Defiance::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Hood_Of_Defiance::Schema_DynamicBinding(
        const CDOTA_Item_Hood_Of_Defiance *const this)
{
  return CDOTA_Item_Hood_Of_Defiance::s_pSchemaBinding;
}


// CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002db8680, libserver.so)
// globals: CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002db8690, libserver.so)  // inlines: Destruct<CDOTA_Item_Hood_Of_Defiance>
void __fastcall CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002db86b0, libserver.so)
void __fastcall CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002db86d0, libserver.so)
bool __fastcall CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002db86e0, libserver.so)
// globals: CDOTA_Item_Hood_Of_Defiance::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Hood_Of_Defiance::s_pSchemaBinding;
}


// CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002dba400, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002dbb790, libserver.so)  // inlines: CDOTA_Item_Hood_Of_Defiance, Construct<CDOTA_Item_Hood_Of_Defiance>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46FB5D0;
  }
  return p;
}


// CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002dbe7e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002dbe800, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Hood_Of_Defiance::GetEntityClassInternal  (line 41, @0x0000000002dc2580, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_hood_of_defiance", "CDOTA_Item_Hood_Of_Defiance"
// globals: `guard variable for'CDOTA_Item_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClass, CDOTA_Item_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClass, __dso_handle, CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Hood_Of_Defiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClassInfo, CDOTA_Item_Hood_Of_Defiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClassInfo
CEntityClass *__cdecl CDOTA_Item_Hood_Of_Defiance::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClass);
    CDOTA_Item_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClass._vptr_CEntityClass = off_46FB550;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClass);
    __cxa_atexit(
      CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Hood_Of_DefianceClass != 0 )
    return &CDOTA_Item_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClass;
  if ( `guard variable for'CDOTA_Item_Hood_Of_Defiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Hood_Of_Defiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Hood_Of_Defiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClassInfo,
      "CDOTA_Item_Hood_Of_Defiance",
      "item_hood_of_defiance",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Hood_Of_Defiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClassInfo);
  }
  CDOTA_Item_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClass.m_pClassInfo = &CDOTA_Item_Hood_Of_Defiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClassInfo;
  CDOTA_Item_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClass.m_pBaseClassInfo = CDOTA_Item_Hood_Of_Defiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Hood_Of_DefianceClass = &CDOTA_Item_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClass;
  CDOTA_Item_Hood_Of_Defiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClassInfo.m_pClass = &CDOTA_Item_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClass;
  CDOTA_Item_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Hood_Of_DefianceClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Hood_Of_Defiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hood_Of_DefianceClass;
}


// CDOTA_Item_Hood_Of_Defiance::GetIntrinsicModifierName  (line 43, @0x0000000002db86f0, libserver.so)
// strings: "modifier_item_hood_of_defiance"
const char *__fastcall CDOTA_Item_Hood_Of_Defiance::GetIntrinsicModifierName(CDOTA_Item_Hood_Of_Defiance *const this)
{
  return "modifier_item_hood_of_defiance";
}


// CDOTA_Item_Hood_Of_Defiance::OnSpellStart  (line 52, @0x0000000002db5ab0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, CDOTA_BaseNPC::InterruptChannel, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "barrier_duration", "modifier_item_hood_of_defiance_barrier", "DOTA_Item.Pipe.Activate"
void __fastcall CDOTA_Item_Hood_Of_Defiance::OnSpellStart(CDOTA_Item_Hood_Of_Defiance *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "barrier_duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_item_hood_of_defiance_barrier");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_item_hood_of_defiance_barrier", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(4, "DOTA_Item.Pipe.Activate", v5);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::InterruptChannel(v6);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier::~CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier  (line 74, @0x0000000002dbb540, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier::~CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier(
        CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier *const this)
{
  this->_vptr_CDOTA_Buff = &off_46FC190;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier::~CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier  (line 74, @0x0000000002dbb560, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier::~CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier(
        CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier *const this)
{
  this->_vptr_CDOTA_Buff = &off_46FC190;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier::IsPurgable  (line 81, @0x0000000002db8700, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier::IsPurgable(
        CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier::OnCreated  (line 94, @0x0000000002db5960, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, ToDOTABaseNPC
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::GetModelRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle
// strings: "barrier_block", "particles/items2_fx/pipe_of_insight.vpcf"
void __fastcall CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier::OnCreated(
        CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v5; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // r13
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  double vecRadius; // [rsp+10h] [rbp-30h]
  float vecRadius_8; // [rsp+18h] [rbp-28h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->barrier_block = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "barrier_block", -1, 0);
  else
    this->barrier_block = 0;
  HIDWORD(vecRadius) = LODWORD(vec3_origin.y);
  vecRadius_8 = vec3_origin.z;
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent == 0 || !Parent->m_bIsDOTANPC )
    Parent = 0;
  LODWORD(vecRadius) = CDOTA_BaseNPC::GetModelRadius(Parent);
  v5 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(v5) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/items2_fx/pipe_of_insight.vpcf",
                  7,
                  v5,
                  0,
                  0);
  v7 = CDOTA_Buff::GetParent(this);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v8, v5, 1, v7, 1, 0, vec3_invalid, 1);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v9, v5, 2, vecRadius, vecRadius_8);
  CDOTA_Buff::AddParticle(this, v5, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier::OnRefresh  (line 111, @0x0000000002db4410, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "barrier_block"
void __fastcall CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier::OnRefresh(
        CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->barrier_block = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "barrier_block", -1, 0);
  else
    this->barrier_block = 0;
}


// CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier::DeclareFunctions  (line 118, @0x0000000002daab70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier::GetModifierIncomingSpellDamageConstant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier::DeclareFunctions(
        CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier *const this)
{
  this->m_Functions[39].__pfn = CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier::GetModifierIncomingSpellDamageConstant;
  this->m_Functions[39].__delta = 0;
}


// CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier::GetModifierIncomingSpellDamageConstant  (line 125, @0x0000000002dac230, libserver.so)
// calls: CDOTA_Buff::Destroy
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier::GetModifierIncomingSpellDamageConstant(
        CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm2
  float barrier_block; // xmm1_4
  __int64 fDamage_low; // xmm0_8
  __m128i v7; // xmm3
  ModifierVariant_t result; // 0:rax.16

  if ( params->bTooltip )
  {
    *v2.m128i_i32 = this->barrier_block;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  }
  else
  {
    barrier_block = this->barrier_block;
    fDamage_low = LODWORD(params->fDamage);
    if ( *&fDamage_low >= barrier_block )
    {
      CDOTA_Buff::Destroy(this, 0, 0, 0);
      result.m_szVal = 0;
      *v7.m128i_i32 = -this->barrier_block;
      *&result.m_eType = (_mm_cvtsi128_si32(v7) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      this->barrier_block = (barrier_block - *&fDamage_low);
      *&result.m_eType = ((fDamage_low ^ 0x80000000LL) << 32) | 1;
    }
  }
  return result;
}


// CDOTA_Modifier_Item_Hood_Of_Defiance::~CDOTA_Modifier_Item_Hood_Of_Defiance  (line 147, @0x0000000002dbb0a0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Hood_Of_Defiance::~CDOTA_Modifier_Item_Hood_Of_Defiance(
        CDOTA_Modifier_Item_Hood_Of_Defiance *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Hood_Of_Defiance::~CDOTA_Modifier_Item_Hood_Of_Defiance  (line 147, @0x0000000002dbb0c0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Hood_Of_Defiance
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Hood_Of_Defiance::~CDOTA_Modifier_Item_Hood_Of_Defiance(
        CDOTA_Modifier_Item_Hood_Of_Defiance *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Hood_Of_Defiance::OnCreated  (line 166, @0x0000000002db49b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_spell_resist", "bonus_health_regen"
void __fastcall CDOTA_Modifier_Item_Hood_Of_Defiance::OnCreated(
        CDOTA_Modifier_Item_Hood_Of_Defiance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_spell_resist = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_spell_resist", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_health_regen", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_spell_resist = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_health_regen = 0;
}


// CDOTA_Modifier_Item_Hood_Of_Defiance::DeclareFunctions  (line 183, @0x0000000002daab90, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Hood_Of_Defiance::GetModifierMagicalResistanceBonus(CModifierParams const&), CDOTA_Modifier_Item_Hood_Of_Defiance::GetModifierConstantHealthRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Hood_Of_Defiance::DeclareFunctions(
        CDOTA_Modifier_Item_Hood_Of_Defiance *const this)
{
  this->m_Functions[49].__pfn = CDOTA_Modifier_Item_Hood_Of_Defiance::GetModifierMagicalResistanceBonus;
  this->m_Functions[49].__delta = 0;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_Hood_Of_Defiance::GetModifierConstantHealthRegen;
}


// CDOTA_Modifier_Item_Hood_Of_Defiance::GetModifierMagicalResistanceBonus  (line 189, @0x0000000002daabd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Hood_Of_Defiance::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_Item_Hood_Of_Defiance *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_spell_resist;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Hood_Of_Defiance::GetModifierConstantHealthRegen  (line 194, @0x0000000002daabf0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Hood_Of_Defiance::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Hood_Of_Defiance *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


