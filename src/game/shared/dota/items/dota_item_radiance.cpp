// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_radiance.cpp:28
class CDOTA_Item_Recipe_Radiance : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Radiance(CDOTA_Item_Recipe_Radiance &);
	CDOTA_Item_Recipe_Radiance(CDOTA_Item_Recipe_Radiance &);
	CDOTA_Item_Recipe_Radiance();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Radiance();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_radiance.cpp:39
class CDOTA_Item_Radiance : public CDOTA_Item {
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
	CDOTA_Item_Radiance(CDOTA_Item_Radiance &);
	CDOTA_Item_Radiance(CDOTA_Item_Radiance &);
	CDOTA_Item_Radiance();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual bool ResetToggleOnRespawn();
	virtual void OnToggle();
	virtual ~CDOTA_Item_Radiance();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[281] ResetToggleOnRespawn
	// vtable[270] OnToggle
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_radiance.cpp:58
class C_CDOTA_Item_Radiance_MapInstall {
	C_CDOTA_Item_Radiance_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_radiance.cpp:104
class CDOTA_Modifier_Item_Radiance : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	int aura_radius;  // +0xbac
	bool m_bLastToggleState;  // +0xbb0
	CDOTA_Modifier_Item_Radiance();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual int GetAuraApplyPriority();
	virtual void OnIntervalThink();
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual bool AvoidFilter(CDOTA_BaseNPC *);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsPersistentAvoidance();
	virtual ~CDOTA_Modifier_Item_Radiance();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[48] GetAuraApplyPriority
	// vtable[56] OnIntervalThink
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[76] AvoidFilter
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[81] IsPersistentAvoidance
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_radiance.cpp:202
class CDOTA_Modifier_Item_Radiance_Debuff : public CDOTA_Buff {
public:

private:

	int aura_damage;  // +0xbb0
	int aura_damage_illusions;  // +0xbb4
	int blind_pct;  // +0xbb8
	CDOTA_Modifier_Item_Radiance_Debuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMiss_Percentage(const CModifierParams &);
	virtual int GetAttributes();
	virtual int GetPriority();
	virtual ~CDOTA_Modifier_Item_Radiance_Debuff();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMiss_Percentage
	// vtable[7] GetAttributes
	// vtable[6] GetPriority
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Radiance::~CDOTA_Item_Recipe_Radiance  (line 28, @0x0000000002df2f60, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Radiance::~CDOTA_Item_Recipe_Radiance(CDOTA_Item_Recipe_Radiance *const this)
{
  this->_vptr_IHandleEntity = &off_4743490;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Radiance::~CDOTA_Item_Recipe_Radiance  (line 28, @0x0000000002df2f80, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Radiance
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Radiance::~CDOTA_Item_Recipe_Radiance(CDOTA_Item_Recipe_Radiance *const this)
{
  this->_vptr_IHandleEntity = &off_4743490;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Radiance::Schema_DynamicBinding  (line 30, @0x0000000002dee6e0, libserver.so)
// globals: CDOTA_Item_Recipe_Radiance::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Radiance::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Radiance *const this)
{
  return CDOTA_Item_Recipe_Radiance::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002dee6f0, libserver.so)
// globals: CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002dee700, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Radiance>
void __fastcall CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002dee720, libserver.so)
void __fastcall CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002dee740, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002dee750, libserver.so)
// globals: CDOTA_Item_Recipe_Radiance::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Radiance::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002df0b40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002df1fa0, libserver.so)  // inlines: CDOTA_Item_Recipe_Radiance, Construct<CDOTA_Item_Recipe_Radiance>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4743490;
  }
  return p;
}


// CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002df5170, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002df5190, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Radiance::GetEntityClassInternal  (line 30, @0x0000000002df8ef0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "item_recipe_radiance", "CDOTA_Item_Recipe_Radiance"
// globals: `guard variable for'CDOTA_Item_Recipe_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RadianceClass, CDOTA_Item_Recipe_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RadianceClass, __dso_handle, CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Radiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RadianceClassInfo, CDOTA_Item_Recipe_Radiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RadianceClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Radiance::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RadianceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RadianceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RadianceClass);
    CDOTA_Item_Recipe_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RadianceClass._vptr_CEntityClass = off_4743410;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RadianceClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RadianceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_RadianceClass != 0 )
    return &CDOTA_Item_Recipe_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RadianceClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Radiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RadianceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Radiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RadianceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Radiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RadianceClassInfo,
      "CDOTA_Item_Recipe_Radiance",
      "item_recipe_radiance",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Radiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RadianceClassInfo);
  }
  CDOTA_Item_Recipe_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RadianceClass.m_pClassInfo = &CDOTA_Item_Recipe_Radiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RadianceClassInfo;
  CDOTA_Item_Recipe_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RadianceClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Radiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RadianceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_RadianceClass = &CDOTA_Item_Recipe_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RadianceClass;
  CDOTA_Item_Recipe_Radiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RadianceClassInfo.m_pClass = &CDOTA_Item_Recipe_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RadianceClass;
  CDOTA_Item_Recipe_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RadianceClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_RadianceClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RadianceClass;
}


// CDOTA_Item_Radiance::~CDOTA_Item_Radiance  (line 39, @0x0000000002df2fb0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Radiance::~CDOTA_Item_Radiance(CDOTA_Item_Radiance *const this)
{
  this->_vptr_IHandleEntity = &off_4744090;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Radiance::~CDOTA_Item_Radiance  (line 39, @0x0000000002df2fd0, libserver.so)  // inlines: ~CDOTA_Item_Radiance
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Radiance::~CDOTA_Item_Radiance(CDOTA_Item_Radiance *const this)
{
  this->_vptr_IHandleEntity = &off_4744090;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Radiance::Schema_DynamicBinding  (line 41, @0x0000000002dee760, libserver.so)
// globals: CDOTA_Item_Radiance::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Radiance::Schema_DynamicBinding(
        const CDOTA_Item_Radiance *const this)
{
  return CDOTA_Item_Radiance::s_pSchemaBinding;
}


// CDOTA_Item_Radiance::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002dee770, libserver.so)
// globals: CDOTA_Item_Radiance::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Radiance::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Radiance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Radiance::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Radiance::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002dee780, libserver.so)  // inlines: Destruct<CDOTA_Item_Radiance>
void __fastcall CDOTA_Item_Radiance::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Radiance::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Radiance::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002dee7a0, libserver.so)
void __fastcall CDOTA_Item_Radiance::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Radiance::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Radiance::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002dee7c0, libserver.so)
bool __fastcall CDOTA_Item_Radiance::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Radiance::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Radiance::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002dee7d0, libserver.so)
// globals: CDOTA_Item_Radiance::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Radiance::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Radiance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Radiance::s_pSchemaBinding;
}


// CDOTA_Item_Radiance::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002df0b80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Radiance::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Radiance::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Radiance::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002df1fd0, libserver.so)  // inlines: CDOTA_Item_Radiance, Construct<CDOTA_Item_Radiance>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Radiance::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Radiance::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4744090;
  }
  return p;
}


// CDOTA_Item_Radiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002df51c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Radiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Radiance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Radiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002df51e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Radiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Radiance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Radiance::GetEntityClassInternal  (line 41, @0x0000000002df9040, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "CDOTA_Item_Radiance"
// globals: `guard variable for'CDOTA_Item_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RadianceClass, CDOTA_Item_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RadianceClass, __dso_handle, CDOTA_Item_Radiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Radiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RadianceClassInfo, CDOTA_Item_Radiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RadianceClassInfo
CEntityClass *__cdecl CDOTA_Item_Radiance::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RadianceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RadianceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RadianceClass);
    CDOTA_Item_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RadianceClass._vptr_CEntityClass = off_4744010;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RadianceClass);
    __cxa_atexit(
      CDOTA_Item_Radiance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RadianceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_RadianceClass != 0 )
    return &CDOTA_Item_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RadianceClass;
  if ( `guard variable for'CDOTA_Item_Radiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RadianceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Radiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RadianceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Radiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RadianceClassInfo,
      "CDOTA_Item_Radiance",
      "item_radiance",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Radiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RadianceClassInfo);
  }
  CDOTA_Item_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RadianceClass.m_pClassInfo = &CDOTA_Item_Radiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RadianceClassInfo;
  CDOTA_Item_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RadianceClass.m_pBaseClassInfo = CDOTA_Item_Radiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RadianceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_RadianceClass = &CDOTA_Item_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RadianceClass;
  CDOTA_Item_Radiance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RadianceClassInfo.m_pClass = &CDOTA_Item_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RadianceClass;
  CDOTA_Item_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RadianceClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_RadianceClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Radiance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RadianceClass;
}


// CDOTA_Item_Radiance::GetIntrinsicModifierName  (line 45, @0x0000000002dee7e0, libserver.so)
// strings: "modifier_item_radiance"
const char *__fastcall CDOTA_Item_Radiance::GetIntrinsicModifierName(CDOTA_Item_Radiance *const this)
{
  return "modifier_item_radiance";
}


// CDOTA_Item_Radiance::ResetToggleOnRespawn  (line 47, @0x0000000002dee7f0, libserver.so)
bool __fastcall CDOTA_Item_Radiance::ResetToggleOnRespawn(CDOTA_Item_Radiance *const this)
{
  return 0;
}


// CDOTA_Item_Radiance::YouForgotToImplementOrDeclareServerClass  (line 58, @0x0000000002de3ad0, libserver.so)
int __fastcall CDOTA_Item_Radiance::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Radiance *const this)
{
  return 0;
}


// CDOTA_Item_Radiance::GetServerClass  (line 58, @0x0000000002de7ce0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Radiance::GetServerClass(CDOTA_Item_Radiance *const this)
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


// CDOTA_Item_Radiance::OnToggle  (line 67, @0x0000000002de4960, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::OnToggle
void __fastcall CDOTA_Item_Radiance::OnToggle(CDOTA_Item_Radiance *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  if ( CDOTABaseAbility::GetCaster(this) == 0
    || (Caster = CDOTABaseAbility::GetCaster(this), (*(Caster->_vptr_IHandleEntity + 408))(Caster) != 0) )
  {
    CDOTABaseAbility::OnToggle(this);
    (*(this->_vptr_IHandleEntity + 297))(this);
  }
}


// CDOTA_Modifier_Item_Radiance::~CDOTA_Modifier_Item_Radiance  (line 104, @0x0000000002df1b50, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Radiance::~CDOTA_Modifier_Item_Radiance(CDOTA_Modifier_Item_Radiance *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Radiance::~CDOTA_Modifier_Item_Radiance  (line 104, @0x0000000002df1b70, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Radiance
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Radiance::~CDOTA_Modifier_Item_Radiance(CDOTA_Modifier_Item_Radiance *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Radiance::IsAura  (line 113, @0x0000000002df2730, libserver.so)
// calls: CDOTA_Buff_Item::GetItem
bool __fastcall CDOTA_Modifier_Item_Radiance::IsAura(CDOTA_Modifier_Item_Radiance *const this)
{
  CDOTA_Item *Item; // rax
  bool v3; // dl

  Item = CDOTA_Buff_Item::GetItem(this);
  v3 = 0;
  if ( Item != 0 )
    return !CDOTA_Buff_Item::GetItem(this)->m_bToggleState.m_Value;
  return v3;
}


// CDOTA_Modifier_Item_Radiance::GetModifierAura  (line 117, @0x0000000002dee800, libserver.so)
// strings: "modifier_item_radiance_debuff"
const char *__fastcall CDOTA_Modifier_Item_Radiance::GetModifierAura(CDOTA_Modifier_Item_Radiance *const this)
{
  return "modifier_item_radiance_debuff";
}


// CDOTA_Modifier_Item_Radiance::GetAuraSearchTeam  (line 119, @0x0000000002dee810, libserver.so)
int __fastcall CDOTA_Modifier_Item_Radiance::GetAuraSearchTeam(CDOTA_Modifier_Item_Radiance *const this)
{
  return 2;
}


// CDOTA_Modifier_Item_Radiance::GetAuraSearchType  (line 120, @0x0000000002dee820, libserver.so)
int __fastcall CDOTA_Modifier_Item_Radiance::GetAuraSearchType(CDOTA_Modifier_Item_Radiance *const this)
{
  return 3;
}


// CDOTA_Modifier_Item_Radiance::GetAuraSearchFlags  (line 121, @0x0000000002dee830, libserver.so)
int __fastcall CDOTA_Modifier_Item_Radiance::GetAuraSearchFlags(CDOTA_Modifier_Item_Radiance *const this)
{
  return 512;
}


// CDOTA_Modifier_Item_Radiance::GetAuraRadius  (line 122, @0x0000000002dee840, libserver.so)
int __fastcall CDOTA_Modifier_Item_Radiance::GetAuraRadius(CDOTA_Modifier_Item_Radiance *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_Item_Radiance::GetAuraApplyPriority  (line 123, @0x0000000002df27c0, libserver.so)
// calls: CDOTA_Buff::GetParent
int __fastcall CDOTA_Modifier_Item_Radiance::GetAuraApplyPriority(CDOTA_Modifier_Item_Radiance *const this)
{
  return !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value;
}


// CDOTA_Modifier_Item_Radiance::GetNumAvoidLocations  (line 130, @0x0000000002dee850, libserver.so)
int __fastcall CDOTA_Modifier_Item_Radiance::GetNumAvoidLocations(CDOTA_Modifier_Item_Radiance *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Radiance::GetAvoidLocation  (line 131, @0x0000000002df2770, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_Item_Radiance::GetAvoidLocation(CDOTA_Modifier_Item_Radiance *const this, int iAvoid)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CDOTA_Modifier_Item_Radiance::AvoidFilter  (line 132, @0x0000000002df27a0, libserver.so)
// calls: CDOTA_Buff::GetParent
bool __fastcall CDOTA_Modifier_Item_Radiance::AvoidFilter(
        CDOTA_Modifier_Item_Radiance *const this,
        CDOTA_BaseNPC *pEntity)
{
  return CDOTA_Buff::GetParent(this) != pEntity;
}


// CDOTA_Modifier_Item_Radiance::AvoidStrength  (line 133, @0x0000000002df5d50, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Modifier_Item_Radiance::AvoidStrength(CDOTA_Modifier_Item_Radiance *const this, CDOTA_Bot *pBot)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rdi
  float v6; // xmm1_4
  float result; // xmm0_4

  m_Index = pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v6 = (CBaseEntity::GetHealth(m_pInstance) - 100.0) / 700.0;
  if ( v6 < 0.0 )
    return 1.0;
  result = 0.5;
  if ( v6 <= 1.0 )
    return (v6 * -0.5) + 1.0;
  return result;
}


// CDOTA_Modifier_Item_Radiance::GetAvoidRadius  (line 134, @0x0000000002dee860, libserver.so)
float __fastcall CDOTA_Modifier_Item_Radiance::GetAvoidRadius(CDOTA_Modifier_Item_Radiance *const this, int iAvoid)
{
  return this->aura_radius + 100.0;
}


// CDOTA_Modifier_Item_Radiance::IsAvoidMagical  (line 135, @0x0000000002dee880, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Radiance::IsAvoidMagical(CDOTA_Modifier_Item_Radiance *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Radiance::IsPersistentAvoidance  (line 136, @0x0000000002dee890, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Radiance::IsPersistentAvoidance(CDOTA_Modifier_Item_Radiance *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Radiance::DeclareFunctions  (line 151, @0x0000000002de3ae0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Radiance::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Radiance::DeclareFunctions(CDOTA_Modifier_Item_Radiance *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Radiance::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Item_Radiance::GetModifierPreAttack_BonusDamage  (line 156, @0x0000000002de3b00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Radiance::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Radiance *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Radiance::OnCreated  (line 161, @0x0000000002dec710, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Item_Radiance::OnCreated(CDOTA_Modifier_Item_Radiance *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_damage, "bonus_damage");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->aura_radius, "aura_radius");
  this->m_bLastToggleState = 1;
  CDOTA_Buff::StartIntervalThink(this, 0.2, v5);
}


// CDOTA_Modifier_Item_Radiance::OnIntervalThink  (line 174, @0x0000000002de4b50, libserver.so)  // inlines: GetToggleState
// calls: CDOTA_Buff_Item::GetItem, CDOTA_Buff::GetParent, CDOTA_Buff::DestroyParticles, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::AddParticle
// strings: "particles/items2_fx/radiance_owner.vpcf"
void __fastcall CDOTA_Modifier_Item_Radiance::OnIntervalThink(CDOTA_Modifier_Item_Radiance *const this)
{
  bool m_Value; // r12
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax

  m_Value = CDOTA_Buff_Item::GetItem(this)->m_bToggleState.m_Value;
  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) == 0 )
  {
    if ( this->m_bLastToggleState )
      return;
    goto LABEL_3;
  }
  if ( this->m_bLastToggleState != m_Value )
  {
    if ( !m_Value )
    {
      Caster = CDOTA_Buff::GetCaster(this);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/items2_fx/radiance_owner.vpcf",
                   1,
                   Caster,
                   0,
                   0);
      CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
      this->m_bLastToggleState = 0;
      return;
    }
LABEL_3:
    CDOTA_Buff::DestroyParticles(this, 0);
    this->m_bLastToggleState = 1;
  }
}


// CDOTA_Modifier_Item_Radiance_Debuff::~CDOTA_Modifier_Item_Radiance_Debuff  (line 202, @0x0000000002df1f00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Radiance_Debuff::~CDOTA_Modifier_Item_Radiance_Debuff(
        CDOTA_Modifier_Item_Radiance_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4744F70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Radiance_Debuff::~CDOTA_Modifier_Item_Radiance_Debuff  (line 202, @0x0000000002df1f20, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Radiance_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Radiance_Debuff::~CDOTA_Modifier_Item_Radiance_Debuff(
        CDOTA_Modifier_Item_Radiance_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4744F70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Radiance_Debuff::GetAttributes  (line 212, @0x0000000002df2800, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Item_Radiance_Debuff::GetAttributes(CDOTA_Modifier_Item_Radiance_Debuff *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 8;
}


// CDOTA_Modifier_Item_Radiance_Debuff::GetPriority  (line 213, @0x0000000002df27e0, libserver.so)
// calls: CDOTA_Buff::GetCaster
int __fastcall CDOTA_Modifier_Item_Radiance_Debuff::GetPriority(CDOTA_Modifier_Item_Radiance_Debuff *const this)
{
  return !CDOTA_Buff::GetCaster(this)->m_bIsIllusion.m_Value;
}


// CDOTA_Modifier_Item_Radiance_Debuff::OnCreated  (line 224, @0x0000000002dec780, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, DOTA_EmitSound
// strings: "aura_damage", "aura_damage_illusions", "blind_pct", "DOTA_Item.Radiance.Target.Loop"
void __fastcall CDOTA_Modifier_Item_Radiance_Debuff::OnCreated(
        CDOTA_Modifier_Item_Radiance_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->aura_damage, "aura_damage");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->aura_damage_illusions, "aura_damage_illusions");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->blind_pct, "blind_pct");
  CDOTA_Buff::StartIntervalThink(this, 1.0, v6);
  Parent = CDOTA_Buff::GetParent(this);
  this->m_nRadianceLoop = DOTA_EmitSound(1, "DOTA_Item.Radiance.Target.Loop", Parent);
}


// CDOTA_Modifier_Item_Radiance_Debuff::OnIntervalThink  (line 247, @0x0000000002de4c50, libserver.so)
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetTeam, CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, ApplyDamage, CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Item_Radiance_Debuff::OnIntervalThink(CDOTA_Modifier_Item_Radiance_Debuff *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CTeam *Team; // r12
  CDOTA_BaseNPC *v4; // rax
  float aura_damage_illusions; // xmm0_4
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v8; // rax
  float v9; // [rsp+Ch] [rbp-24h]

  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster == 0
    || (Team = CBaseEntity::GetTeam(Caster), v4 = CDOTA_Buff::GetParent(this), Team == CBaseEntity::GetTeam(v4)) )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  else
  {
    if ( CDOTA_Buff::GetCaster(this)->m_bIsIllusion.m_Value )
      aura_damage_illusions = this->aura_damage_illusions;
    else
      aura_damage_illusions = this->aura_damage;
    v9 = aura_damage_illusions;
    Ability = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    v8 = CDOTA_Buff::GetCaster(this);
    ApplyDamage(v8, Parent, Ability, v9, 2, 0);
  }
}


// CDOTA_Modifier_Item_Radiance_Debuff::OnDestroy  (line 263, @0x0000000002de7e40, libserver.so)
// calls: CSoundOpGameSystem::StopSoundEvent
void __fastcall CDOTA_Modifier_Item_Radiance_Debuff::OnDestroy(CDOTA_Modifier_Item_Radiance_Debuff *const this)
{
  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nRadianceLoop);
}


// CDOTA_Modifier_Item_Radiance_Debuff::DeclareFunctions  (line 272, @0x0000000002de3b20, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Item_Radiance_Debuff::DeclareFunctions(CDOTA_Modifier_Item_Radiance_Debuff *const this)
{
  this->m_Functions[44].__pfn = (&stru_10 + 697);
  this->m_Functions[44].__delta = 0;
}


// CDOTA_Modifier_Item_Radiance_Debuff::GetModifierMiss_Percentage  (line 279, @0x0000000002de3b40, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Radiance_Debuff::GetModifierMiss_Percentage(
        CDOTA_Modifier_Item_Radiance_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->blind_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


