// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_headdress.cpp:27
class CDOTA_Item_Recipe_Headdress : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Headdress(CDOTA_Item_Recipe_Headdress &);
	CDOTA_Item_Recipe_Headdress(CDOTA_Item_Recipe_Headdress &);
	CDOTA_Item_Recipe_Headdress();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Headdress();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_headdress.cpp:39
class CDOTA_Item_Headdress : public CDOTA_Item {
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
	CDOTA_Item_Headdress(CDOTA_Item_Headdress &);
	CDOTA_Item_Headdress(CDOTA_Item_Headdress &);
	CDOTA_Item_Headdress();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Headdress();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_headdress.cpp:51
class CDOTA_Modifier_Item_Headdress : public CDOTA_Buff_Item {
public:

private:

	int bonus_all_stats;  // +0xba8
	int aura_radius;  // +0xbac
	CDOTA_Modifier_Item_Headdress();
	virtual void OnCreated(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Headdress();

	// vtable[57] OnCreated
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_headdress.cpp:121
class CDOTA_Modifier_Item_Headdress_Aura : public CDOTA_Buff {
public:

private:

	int aura_health_regen;  // +0xba8
	CDOTA_Modifier_Item_Headdress_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Headdress_Aura();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Headdress::~CDOTA_Item_Recipe_Headdress  (line 27, @0x0000000002da2080, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Headdress::~CDOTA_Item_Recipe_Headdress(CDOTA_Item_Recipe_Headdress *const this)
{
  this->_vptr_IHandleEntity = &off_46EF910;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Headdress::~CDOTA_Item_Recipe_Headdress  (line 27, @0x0000000002da20a0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Headdress
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Headdress::~CDOTA_Item_Recipe_Headdress(CDOTA_Item_Recipe_Headdress *const this)
{
  this->_vptr_IHandleEntity = &off_46EF910;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Headdress::Schema_DynamicBinding  (line 29, @0x0000000002d9f6f0, libserver.so)
// globals: CDOTA_Item_Recipe_Headdress::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Headdress::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Headdress *const this)
{
  return CDOTA_Item_Recipe_Headdress::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002d9f700, libserver.so)
// globals: CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002d9f710, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Headdress>
void __fastcall CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002d9f730, libserver.so)
void __fastcall CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002d9f750, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002d9f760, libserver.so)
// globals: CDOTA_Item_Recipe_Headdress::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Headdress::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002da0930, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002da1820, libserver.so)  // inlines: CDOTA_Item_Recipe_Headdress, Construct<CDOTA_Item_Recipe_Headdress>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46EF910;
  }
  return p;
}


// CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002da3fe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002da4000, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Headdress::GetEntityClassInternal  (line 29, @0x0000000002da9a80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "item_recipe_headdress", "CDOTA_Item_Recipe_Headdress"
// globals: `guard variable for'CDOTA_Item_Recipe_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeaddressClass, CDOTA_Item_Recipe_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeaddressClass, __dso_handle, CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Headdress::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeaddressClassInfo, CDOTA_Item_Recipe_Headdress::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeaddressClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Headdress::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeaddressClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeaddressClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeaddressClass);
    CDOTA_Item_Recipe_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeaddressClass._vptr_CEntityClass = off_46EF890;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeaddressClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeaddressClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_HeaddressClass != 0 )
    return &CDOTA_Item_Recipe_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeaddressClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Headdress::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeaddressClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Headdress::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeaddressClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Headdress::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeaddressClassInfo,
      "CDOTA_Item_Recipe_Headdress",
      "item_recipe_headdress",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Headdress::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeaddressClassInfo);
  }
  CDOTA_Item_Recipe_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeaddressClass.m_pClassInfo = &CDOTA_Item_Recipe_Headdress::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeaddressClassInfo;
  CDOTA_Item_Recipe_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeaddressClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Headdress::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeaddressClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_HeaddressClass = &CDOTA_Item_Recipe_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeaddressClass;
  CDOTA_Item_Recipe_Headdress::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeaddressClassInfo.m_pClass = &CDOTA_Item_Recipe_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeaddressClass;
  CDOTA_Item_Recipe_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeaddressClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_HeaddressClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeaddressClass;
}


// CDOTA_Item_Headdress::~CDOTA_Item_Headdress  (line 39, @0x0000000002da20d0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Headdress::~CDOTA_Item_Headdress(CDOTA_Item_Headdress *const this)
{
  this->_vptr_IHandleEntity = &off_46F0510;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Headdress::~CDOTA_Item_Headdress  (line 39, @0x0000000002da20f0, libserver.so)  // inlines: ~CDOTA_Item_Headdress
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Headdress::~CDOTA_Item_Headdress(CDOTA_Item_Headdress *const this)
{
  this->_vptr_IHandleEntity = &off_46F0510;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Headdress::Schema_DynamicBinding  (line 41, @0x0000000002d9f770, libserver.so)
// globals: CDOTA_Item_Headdress::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Headdress::Schema_DynamicBinding(
        const CDOTA_Item_Headdress *const this)
{
  return CDOTA_Item_Headdress::s_pSchemaBinding;
}


// CDOTA_Item_Headdress::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002d9f780, libserver.so)
// globals: CDOTA_Item_Headdress::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Headdress::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Headdress::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Headdress::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Headdress::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002d9f790, libserver.so)  // inlines: Destruct<CDOTA_Item_Headdress>
void __fastcall CDOTA_Item_Headdress::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Headdress::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Headdress::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002d9f7b0, libserver.so)
void __fastcall CDOTA_Item_Headdress::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Headdress::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Headdress::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002d9f7d0, libserver.so)
bool __fastcall CDOTA_Item_Headdress::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Headdress::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Headdress::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002d9f7e0, libserver.so)
// globals: CDOTA_Item_Headdress::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Headdress::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Headdress::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Headdress::s_pSchemaBinding;
}


// CDOTA_Item_Headdress::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002da0970, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Headdress::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Headdress::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Headdress::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002da1850, libserver.so)  // inlines: CDOTA_Item_Headdress, Construct<CDOTA_Item_Headdress>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Headdress::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Headdress::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46F0510;
  }
  return p;
}


// CDOTA_Item_Headdress::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002da4030, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Headdress::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Headdress::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Headdress::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002da4050, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Headdress::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Headdress::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Headdress::GetEntityClassInternal  (line 41, @0x0000000002da9bd0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "CDOTA_Item_Headdress"
// globals: `guard variable for'CDOTA_Item_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeaddressClass, CDOTA_Item_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeaddressClass, __dso_handle, CDOTA_Item_Headdress::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Headdress::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeaddressClassInfo, CDOTA_Item_Headdress::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeaddressClassInfo
CEntityClass *__cdecl CDOTA_Item_Headdress::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeaddressClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeaddressClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeaddressClass);
    CDOTA_Item_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeaddressClass._vptr_CEntityClass = off_46F0490;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeaddressClass);
    __cxa_atexit(
      CDOTA_Item_Headdress::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeaddressClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_HeaddressClass != 0 )
    return &CDOTA_Item_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeaddressClass;
  if ( `guard variable for'CDOTA_Item_Headdress::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeaddressClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Headdress::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeaddressClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Headdress::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeaddressClassInfo,
      "CDOTA_Item_Headdress",
      "item_headdress",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Headdress::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeaddressClassInfo);
  }
  CDOTA_Item_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeaddressClass.m_pClassInfo = &CDOTA_Item_Headdress::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeaddressClassInfo;
  CDOTA_Item_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeaddressClass.m_pBaseClassInfo = CDOTA_Item_Headdress::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeaddressClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_HeaddressClass = &CDOTA_Item_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeaddressClass;
  CDOTA_Item_Headdress::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeaddressClassInfo.m_pClass = &CDOTA_Item_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeaddressClass;
  CDOTA_Item_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeaddressClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_HeaddressClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Headdress::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeaddressClass;
}


// CDOTA_Item_Headdress::GetIntrinsicModifierName  (line 43, @0x0000000002d9f7f0, libserver.so)
// strings: "modifier_item_headdress"
const char *__fastcall CDOTA_Item_Headdress::GetIntrinsicModifierName(CDOTA_Item_Headdress *const this)
{
  return "modifier_item_headdress";
}


// CDOTA_Modifier_Item_Headdress::~CDOTA_Modifier_Item_Headdress  (line 51, @0x0000000002da0bf0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Headdress::~CDOTA_Modifier_Item_Headdress(
        CDOTA_Modifier_Item_Headdress *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Headdress::~CDOTA_Modifier_Item_Headdress  (line 51, @0x0000000002da0c10, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Headdress
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Headdress::~CDOTA_Modifier_Item_Headdress(
        CDOTA_Modifier_Item_Headdress *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Headdress::IsAura  (line 58, @0x0000000002d9f800, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Headdress::IsAura(CDOTA_Modifier_Item_Headdress *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Headdress::GetModifierAura  (line 59, @0x0000000002d9f810, libserver.so)
// strings: "modifier_item_headdress_aura"
const char *__fastcall CDOTA_Modifier_Item_Headdress::GetModifierAura(CDOTA_Modifier_Item_Headdress *const this)
{
  return "modifier_item_headdress_aura";
}


// CDOTA_Modifier_Item_Headdress::GetAuraSearchTeam  (line 61, @0x0000000002d9f820, libserver.so)
int __fastcall CDOTA_Modifier_Item_Headdress::GetAuraSearchTeam(CDOTA_Modifier_Item_Headdress *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Headdress::GetAuraSearchType  (line 62, @0x0000000002d9f830, libserver.so)
int __fastcall CDOTA_Modifier_Item_Headdress::GetAuraSearchType(CDOTA_Modifier_Item_Headdress *const this)
{
  return 19;
}


// CDOTA_Modifier_Item_Headdress::GetAuraSearchFlags  (line 63, @0x0000000002d9f840, libserver.so)
int __fastcall CDOTA_Modifier_Item_Headdress::GetAuraSearchFlags(CDOTA_Modifier_Item_Headdress *const this)
{
  return 16;
}


// CDOTA_Modifier_Item_Headdress::GetAuraRadius  (line 64, @0x0000000002d9f850, libserver.so)
int __fastcall CDOTA_Modifier_Item_Headdress::GetAuraRadius(CDOTA_Modifier_Item_Headdress *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_Item_Headdress::OnCreated  (line 82, @0x0000000002d9c800, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_all_stats"
void __fastcall CDOTA_Modifier_Item_Headdress::OnCreated(CDOTA_Modifier_Item_Headdress *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_all_stats = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_all_stats", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "aura_radius", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_all_stats = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->aura_radius = 0;
}


// CDOTA_Modifier_Item_Headdress::DeclareFunctions  (line 90, @0x0000000002d94620, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Headdress::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_Headdress::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_Headdress::GetModifierBonusStats_Intellect(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Headdress::DeclareFunctions(CDOTA_Modifier_Item_Headdress *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Headdress::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_Headdress::GetModifierBonusStats_Agility;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Headdress::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_Item_Headdress::GetModifierBonusStats_Strength  (line 99, @0x0000000002d94680, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Headdress::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Headdress *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Headdress::GetModifierBonusStats_Agility  (line 106, @0x0000000002d946a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Headdress::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_Headdress *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Headdress::GetModifierBonusStats_Intellect  (line 113, @0x0000000002d946c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Headdress::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Headdress *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Headdress_Aura::~CDOTA_Modifier_Item_Headdress_Aura  (line 121, @0x0000000002da10a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Headdress_Aura::~CDOTA_Modifier_Item_Headdress_Aura(
        CDOTA_Modifier_Item_Headdress_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_46F13F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Headdress_Aura::~CDOTA_Modifier_Item_Headdress_Aura  (line 121, @0x0000000002da10c0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Headdress_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Headdress_Aura::~CDOTA_Modifier_Item_Headdress_Aura(
        CDOTA_Modifier_Item_Headdress_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_46F13F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Headdress_Aura::OnCreated  (line 140, @0x0000000002d9c390, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "aura_health_regen"
void __fastcall CDOTA_Modifier_Item_Headdress_Aura::OnCreated(
        CDOTA_Modifier_Item_Headdress_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_health_regen", -1, 0);
  else
    this->aura_health_regen = 0;
}


// CDOTA_Modifier_Item_Headdress_Aura::DeclareFunctions  (line 147, @0x0000000002d946e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Headdress_Aura::GetModifierConstantHealthRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Headdress_Aura::DeclareFunctions(CDOTA_Modifier_Item_Headdress_Aura *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_Headdress_Aura::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
}


// CDOTA_Modifier_Item_Headdress_Aura::GetModifierConstantHealthRegen  (line 154, @0x0000000002d94700, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Headdress_Aura::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Headdress_Aura *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->aura_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


