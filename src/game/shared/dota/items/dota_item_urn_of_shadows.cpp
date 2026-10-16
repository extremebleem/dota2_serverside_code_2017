// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_urn_of_shadows.cpp:27
class CDOTA_Item_Recipe_Urn_Of_Shadows : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Urn_Of_Shadows(CDOTA_Item_Recipe_Urn_Of_Shadows &);
	CDOTA_Item_Recipe_Urn_Of_Shadows(CDOTA_Item_Recipe_Urn_Of_Shadows &);
	CDOTA_Item_Recipe_Urn_Of_Shadows();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Urn_Of_Shadows();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_urn_of_shadows.cpp:39
class CDOTA_Item_Urn_Of_Shadows : public CDOTA_Item {
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
	CDOTA_Item_Urn_Of_Shadows(CDOTA_Item_Urn_Of_Shadows &);
	CDOTA_Item_Urn_Of_Shadows(CDOTA_Item_Urn_Of_Shadows &);
	CDOTA_Item_Urn_Of_Shadows();
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
	virtual void OnHeroDiedNearby(KeyValues *);
	virtual ~CDOTA_Item_Urn_Of_Shadows();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[279] OnHeroDiedNearby
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_urn_of_shadows.cpp:50
class C_CDOTA_Item_Urn_Of_Shadows_MapInstall {
	C_CDOTA_Item_Urn_Of_Shadows_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_urn_of_shadows.cpp:156
class CDOTA_Modifier_Item_Urn_Of_Shadows : public CDOTA_Buff_Item {
public:

private:

	int mana_regen;  // +0xba8
	int bonus_strength;  // +0xbac
	CDOTA_Modifier_Item_Urn_Of_Shadows();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Urn_Of_Shadows();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_urn_of_shadows.cpp:208
class CDOTA_Modifier_Item_Urn_Heal : public CDOTA_Buff {
public:

private:

	int soul_heal_amount;  // +0xba8
	float soul_heal_duration;  // +0xbac
	float soul_heal_interval;  // +0xbb0
	CDOTA_Modifier_Item_Urn_Heal();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	ModifierVariant_t Tooltip(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Item_Urn_Heal();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_urn_of_shadows.cpp:288
class CDOTA_Modifier_Item_Urn_Damage : public CDOTA_Buff {
public:

private:

	int soul_damage_amount;  // +0xba8
	float soul_damage_duration;  // +0xbac
	CDOTA_Modifier_Item_Urn_Damage();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Item_Urn_Damage();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Urn_Of_Shadows::~CDOTA_Item_Recipe_Urn_Of_Shadows  (line 27, @0x0000000002e0f620, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Urn_Of_Shadows::~CDOTA_Item_Recipe_Urn_Of_Shadows(
        CDOTA_Item_Recipe_Urn_Of_Shadows *const this)
{
  this->_vptr_IHandleEntity = &off_4782970;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Urn_Of_Shadows::~CDOTA_Item_Recipe_Urn_Of_Shadows  (line 27, @0x0000000002e0f640, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Urn_Of_Shadows
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Urn_Of_Shadows::~CDOTA_Item_Recipe_Urn_Of_Shadows(
        CDOTA_Item_Recipe_Urn_Of_Shadows *const this)
{
  this->_vptr_IHandleEntity = &off_4782970;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Urn_Of_Shadows::Schema_DynamicBinding  (line 29, @0x0000000002e0c320, libserver.so)
// globals: CDOTA_Item_Recipe_Urn_Of_Shadows::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Urn_Of_Shadows::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Urn_Of_Shadows *const this)
{
  return CDOTA_Item_Recipe_Urn_Of_Shadows::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002e0c330, libserver.so)
// globals: CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002e0c340, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Urn_Of_Shadows>
void __fastcall CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002e0c360, libserver.so)
void __fastcall CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002e0c380, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002e0c390, libserver.so)
// globals: CDOTA_Item_Recipe_Urn_Of_Shadows::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Urn_Of_Shadows::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002e0d8c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002e0e7d0, libserver.so)  // inlines: CDOTA_Item_Recipe_Urn_Of_Shadows, Construct<CDOTA_Item_Recipe_Urn_Of_Shadows>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4782970;
  }
  return p;
}


// CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002e112d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002e112f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInternal  (line 29, @0x0000000002e17370, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "item_recipe_urn_of_shadows", "CDOTA_Item_Recipe_Urn_Of_Shadows"
// globals: `guard variable for'CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClass, CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClass, __dso_handle, CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClassInfo, CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClass);
    CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClass._vptr_CEntityClass = off_47828F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Urn_Of_ShadowsClass != 0 )
    return &CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClassInfo,
      "CDOTA_Item_Recipe_Urn_Of_Shadows",
      "item_recipe_urn_of_shadows",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClassInfo);
  }
  CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClass.m_pClassInfo = &CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClassInfo;
  CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Urn_Of_ShadowsClass = &CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClass;
  CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClassInfo.m_pClass = &CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClass;
  CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Urn_Of_ShadowsClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Urn_Of_ShadowsClass;
}


// CDOTA_Item_Urn_Of_Shadows::~CDOTA_Item_Urn_Of_Shadows  (line 39, @0x0000000002e0f670, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Urn_Of_Shadows::~CDOTA_Item_Urn_Of_Shadows(CDOTA_Item_Urn_Of_Shadows *const this)
{
  this->_vptr_IHandleEntity = &off_4783570;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Urn_Of_Shadows::~CDOTA_Item_Urn_Of_Shadows  (line 39, @0x0000000002e0f690, libserver.so)  // inlines: ~CDOTA_Item_Urn_Of_Shadows
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Urn_Of_Shadows::~CDOTA_Item_Urn_Of_Shadows(CDOTA_Item_Urn_Of_Shadows *const this)
{
  this->_vptr_IHandleEntity = &off_4783570;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Urn_Of_Shadows::Schema_DynamicBinding  (line 41, @0x0000000002e0c3a0, libserver.so)
// globals: CDOTA_Item_Urn_Of_Shadows::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Urn_Of_Shadows::Schema_DynamicBinding(
        const CDOTA_Item_Urn_Of_Shadows *const this)
{
  return CDOTA_Item_Urn_Of_Shadows::s_pSchemaBinding;
}


// CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002e0c3b0, libserver.so)
// globals: CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002e0c3c0, libserver.so)  // inlines: Destruct<CDOTA_Item_Urn_Of_Shadows>
void __fastcall CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002e0c3e0, libserver.so)
void __fastcall CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002e0c400, libserver.so)
bool __fastcall CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002e0c410, libserver.so)
// globals: CDOTA_Item_Urn_Of_Shadows::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Urn_Of_Shadows::s_pSchemaBinding;
}


// CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002e0d900, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002e0e800, libserver.so)  // inlines: CDOTA_Item_Urn_Of_Shadows, Construct<CDOTA_Item_Urn_Of_Shadows>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4783570;
  }
  return p;
}


// CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002e11320, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002e11340, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Urn_Of_Shadows::GetEntityClassInternal  (line 41, @0x0000000002e174c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "CDOTA_Item_Urn_Of_Shadows"
// globals: `guard variable for'CDOTA_Item_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClass, CDOTA_Item_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClass, __dso_handle, CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Urn_Of_Shadows::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClassInfo, CDOTA_Item_Urn_Of_Shadows::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClassInfo
CEntityClass *__cdecl CDOTA_Item_Urn_Of_Shadows::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClass);
    CDOTA_Item_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClass._vptr_CEntityClass = off_47834F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClass);
    __cxa_atexit(
      CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Urn_Of_ShadowsClass != 0 )
    return &CDOTA_Item_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClass;
  if ( `guard variable for'CDOTA_Item_Urn_Of_Shadows::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Urn_Of_Shadows::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Urn_Of_Shadows::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClassInfo,
      "CDOTA_Item_Urn_Of_Shadows",
      "item_urn_of_shadows",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Urn_Of_Shadows::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClassInfo);
  }
  CDOTA_Item_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClass.m_pClassInfo = &CDOTA_Item_Urn_Of_Shadows::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClassInfo;
  CDOTA_Item_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClass.m_pBaseClassInfo = CDOTA_Item_Urn_Of_Shadows::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Urn_Of_ShadowsClass = &CDOTA_Item_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClass;
  CDOTA_Item_Urn_Of_Shadows::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClassInfo.m_pClass = &CDOTA_Item_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClass;
  CDOTA_Item_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Urn_Of_ShadowsClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Urn_Of_Shadows::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Urn_Of_ShadowsClass;
}


// CDOTA_Item_Urn_Of_Shadows::GetIntrinsicModifierName  (line 44, @0x0000000002e0c420, libserver.so)
// strings: "modifier_item_urn_of_shadows"
const char *__fastcall CDOTA_Item_Urn_Of_Shadows::GetIntrinsicModifierName(CDOTA_Item_Urn_Of_Shadows *const this)
{
  return "modifier_item_urn_of_shadows";
}


// CDOTA_Item_Urn_Of_Shadows::YouForgotToImplementOrDeclareServerClass  (line 50, @0x0000000002dffa30, libserver.so)
int __fastcall CDOTA_Item_Urn_Of_Shadows::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_Urn_Of_Shadows *const this)
{
  return 0;
}


// CDOTA_Item_Urn_Of_Shadows::GetServerClass  (line 50, @0x0000000002e02d90, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Urn_Of_Shadows::GetServerClass(CDOTA_Item_Urn_Of_Shadows *const this)
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


// CDOTA_Item_Urn_Of_Shadows::OnSpellStart  (line 59, @0x0000000002e08c30, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetTeamNumber, QueueConcept, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_Item::SpendCharge, KeyValues::~KeyValues, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (17 total)
// strings: "soul_damage_duration", "modifier_item_urn_damage", "particles/items2_fx/urn_of_shadows.vpcf", "attach_hitloc", "DOTA_Item.UrnOfShadows.Activate", "soul_heal_duration" (7 total)
void __fastcall CDOTA_Item_Urn_Of_Shadows::OnSpellStart(CDOTA_Item_Urn_Of_Shadows *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  unsigned __int8 m_Value; // r13
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_BaseNPC *v9; // r15
  CDOTA_ParticleManager *v10; // rax
  __int64 v11; // r14
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  float v16; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  vec_t soul_heal_duration; // [rsp+1Ch] [rbp-54h]
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-38h]
  Vector v22; // 0:xmm0_8.8,8:xmm1_4.4

  v21 = __readfsqword(0x28u);
  if ( this->m_iCurrentCharges.m_Value != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    v3 = CursorTarget;
    if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
    {
      m_Value = CursorTarget->m_iTeamNum.m_Value;
      if ( m_Value == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      {
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "soul_heal_duration", -1, 0);
        KeyValues::KeyValues(&kv, "modifier_item_urn_heal");
        KeyValues::SetFloat(&kv, "duration", v16);
        Caster = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_item_urn_heal", &kv, 0);
        CDOTA_Item::SpendCharge(this);
        if ( v3 != CDOTABaseAbility::GetCaster(this) )
        {
          m_pSpeech = v3->m_Speech.m_pSpeech;
          if ( m_pSpeech != 0 )
            CDOTA_Speech::QueueConcept(m_pSpeech, 26, 0.25, 0, 0, 1, 0, 0, 0);
        }
      }
      else
      {
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "soul_damage_duration", -1, 0);
        KeyValues::KeyValues(&kv, "modifier_item_urn_damage");
        KeyValues::SetFloat(&kv, "duration", v5);
        v6 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, v6, this, "modifier_item_urn_damage", &kv, 0);
        CDOTA_Item::SpendCharge(this);
      }
      KeyValues::~KeyValues(&kv);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/items2_fx/urn_of_shadows.vpcf",
                   2,
                   0,
                   0,
                   0);
      v9 = CDOTABaseAbility::GetCaster(this);
      v10 = GetParticleManager();
      v11 = *&vec3_invalid.x;
      soul_heal_duration = vec3_invalid.z;
      CDOTA_ParticleManager::SetParticleControlEnt(v10, Particle, 0, v9, 5, "attach_hitloc", vec3_invalid, 1);
      v12 = GetParticleManager();
      *&v22.x = v11;
      v22.z = soul_heal_duration;
      CDOTA_ParticleManager::SetParticleControlEnt(v12, Particle, 1, v3, 5, "attach_hitloc", v22, 1);
      v13 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v13, Particle);
      v14 = CDOTABaseAbility::GetCaster(this);
      DOTA_EmitSound(8, "DOTA_Item.UrnOfShadows.Activate", v14);
      v15 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::InterruptChannel(v15);
    }
  }
}


// CDOTA_Item_Urn_Of_Shadows::OnHeroDiedNearby  (line 112, @0x0000000002e07990, libserver.so)  // inlines: GetBool, GetLevelSpecialValueFor<int>, GetTeamNumber, SetBool, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCaster, KeyValues::GetPtr, KeyValues::GetInt, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::IsEntityInRange, CDOTA_Item::AddCharges, KeyValues::SetInt
// strings: "urn_of_shadows_used", "soul_radius", "soul_initial_charge", "soul_additional_charges"
void __fastcall CDOTA_Item_Urn_Of_Shadows::OnHeroDiedNearby(CDOTA_Item_Urn_Of_Shadows *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Ptr; // rax
  CDOTA_BaseNPC *v5; // r13
  unsigned __int8 m_Value; // r14
  int LevelSpecialValue; // r14d
  CDOTA_BaseNPC *Caster; // rax
  float v9; // xmm1_4
  const char *v10; // rsi
  int v11; // eax

  if ( !CDOTABaseAbility::GetCaster(this)->m_bIsIllusion.m_Value )
  {
    Ptr = KeyValues::GetPtr(pKV, "unit", 0);
    if ( Ptr != 0 && Ptr->m_bIsDOTANPC )
      v5 = Ptr;
    else
      v5 = 0;
    if ( KeyValues::GetInt(pKV, "urn_of_shadows_used", 0) == 0 )
    {
      m_Value = v5->m_iTeamNum.m_Value;
      if ( m_Value != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      {
        LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "soul_radius", -1, 0);
        Caster = CDOTABaseAbility::GetCaster(this);
        if ( CDOTA_BaseNPC::IsEntityInRange(Caster, v5, LevelSpecialValue, v9) )
        {
          v10 = "soul_initial_charge";
          if ( this->m_iCurrentCharges.m_Value != 0 )
            v10 = "soul_additional_charges";
          v11 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, v10, -1, 0);
          CDOTA_Item::AddCharges(this, v11);
          KeyValues::SetInt(pKV, "urn_of_shadows_used", 1);
        }
      }
    }
  }
}


// CDOTA_Modifier_Item_Urn_Of_Shadows::~CDOTA_Modifier_Item_Urn_Of_Shadows  (line 156, @0x0000000002e0dc00, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Urn_Of_Shadows::~CDOTA_Modifier_Item_Urn_Of_Shadows(
        CDOTA_Modifier_Item_Urn_Of_Shadows *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Urn_Of_Shadows::~CDOTA_Modifier_Item_Urn_Of_Shadows  (line 156, @0x0000000002e0dc20, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Urn_Of_Shadows
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Urn_Of_Shadows::~CDOTA_Modifier_Item_Urn_Of_Shadows(
        CDOTA_Modifier_Item_Urn_Of_Shadows *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Urn_Of_Shadows::OnCreated  (line 177, @0x0000000002e07e80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_Urn_Of_Shadows::OnCreated(
        CDOTA_Modifier_Item_Urn_Of_Shadows *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "mana_regen", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_strength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_strength", -1, 0);
      return;
    }
  }
  else
  {
    this->mana_regen = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_strength = 0;
}


// CDOTA_Modifier_Item_Urn_Of_Shadows::DeclareFunctions  (line 185, @0x0000000002dffa40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Urn_Of_Shadows::GetModifierPercentageManaRegen(CModifierParams const&), CDOTA_Modifier_Item_Urn_Of_Shadows::GetModifierBonusStats_Strength(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Urn_Of_Shadows::DeclareFunctions(CDOTA_Modifier_Item_Urn_Of_Shadows *const this)
{
  this->m_Functions[54].__pfn = CDOTA_Modifier_Item_Urn_Of_Shadows::GetModifierPercentageManaRegen;
  this->m_Functions[54].__delta = 0;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Urn_Of_Shadows::GetModifierBonusStats_Strength;
}


// CDOTA_Modifier_Item_Urn_Of_Shadows::GetModifierPercentageManaRegen  (line 193, @0x0000000002dffa80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Urn_Of_Shadows::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_Urn_Of_Shadows *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->mana_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Urn_Of_Shadows::GetModifierBonusStats_Strength  (line 200, @0x0000000002dffaa0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Urn_Of_Shadows::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Urn_Of_Shadows *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Urn_Heal::~CDOTA_Modifier_Item_Urn_Heal  (line 208, @0x0000000002e0e100, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Urn_Heal::~CDOTA_Modifier_Item_Urn_Heal(CDOTA_Modifier_Item_Urn_Heal *const this)
{
  this->_vptr_CDOTA_Buff = &off_4784450;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Urn_Heal::~CDOTA_Modifier_Item_Urn_Heal  (line 208, @0x0000000002e0e120, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Urn_Heal
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Urn_Heal::~CDOTA_Modifier_Item_Urn_Heal(CDOTA_Modifier_Item_Urn_Heal *const this)
{
  this->_vptr_CDOTA_Buff = &off_4784450;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Urn_Heal::GetEffectName  (line 219, @0x0000000002e0c430, libserver.so)
// strings: "particles/items2_fx/urn_of_shadows_heal.vpcf"
const char *__fastcall CDOTA_Modifier_Item_Urn_Heal::GetEffectName(CDOTA_Modifier_Item_Urn_Heal *const this)
{
  return "particles/items2_fx/urn_of_shadows_heal.vpcf";
}


// CDOTA_Modifier_Item_Urn_Heal::OnCreated  (line 231, @0x0000000002e09bc0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "soul_heal_amount", "soul_heal_duration", "soul_heal_interval"
void __fastcall CDOTA_Modifier_Item_Urn_Heal::OnCreated(CDOTA_Modifier_Item_Urn_Heal *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  float v8; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->soul_heal_amount = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "soul_heal_amount", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->soul_heal_duration = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->soul_heal_amount = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->soul_heal_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "soul_heal_duration", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "soul_heal_interval", -1, 0);
    this->soul_heal_interval = LevelSpecialValue;
    CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v8);
    return;
  }
LABEL_7:
  this->soul_heal_interval = 0.0;
  CDOTA_Buff::StartIntervalThink(this, 0.0, v6);
}


// CDOTA_Modifier_Item_Urn_Heal::DeclareFunctions  (line 245, @0x0000000002dffac0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Urn_Heal::OnTakeDamage(CModifierParams const&), CDOTA_Modifier_Item_Urn_Heal::Tooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Urn_Heal::DeclareFunctions(CDOTA_Modifier_Item_Urn_Heal *const this)
{
  this->m_Functions[134].__pfn = CDOTA_Modifier_Item_Urn_Heal::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[151].__delta = 0;
  this->m_Functions[151].__pfn = CDOTA_Modifier_Item_Urn_Heal::Tooltip;
}


// CDOTA_Modifier_Item_Urn_Heal::OnTakeDamage  (line 253, @0x0000000002e02370, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsOwnedByAnyPlayer, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Urn_Heal::OnTakeDamage(
        CDOTA_Modifier_Item_Urn_Heal *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *v11; // r13
  int m_Id; // eax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hunit.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[params->hattacker.m_Index & 0x1FF];
      if ( v9 != 0 && v7 == v9->m_EHandle.m_Index )
      {
        v11 = v9->m_pInstance;
        if ( v9->m_pInstance != 0
          && BYTE3(v11[7]._vptr_IHandleEntity) != 0
          && m_pInstance != 0
          && params->fDamage > 0.0
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && (v11[61].m_hPrivateScope.m_hScope != 0
           || ((m_Id = v11[43].m_iszPrivateVScripts.u.m_Id) & 1) != 0
           || (m_Id & 0x800) != 0) )
        {
          CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_Urn_Heal::Tooltip  (line 270, @0x0000000002dffb00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Urn_Heal::Tooltip(
        CDOTA_Modifier_Item_Urn_Heal *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = this->soul_heal_amount / this->soul_heal_duration;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Urn_Heal::OnIntervalThink  (line 277, @0x0000000002e00490, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_BaseNPC::Heal
void __fastcall CDOTA_Modifier_Item_Urn_Heal::OnIntervalThink(CDOTA_Modifier_Item_Urn_Heal *const this)
{
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *Parent; // rax
  float v4; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  v4 = (this->soul_heal_amount * this->soul_heal_interval) / this->soul_heal_duration;
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::Heal(Parent, v4, Ability, 0, 1);
}


// CDOTA_Modifier_Item_Urn_Damage::~CDOTA_Modifier_Item_Urn_Damage  (line 288, @0x0000000002e0e0b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Urn_Damage::~CDOTA_Modifier_Item_Urn_Damage(
        CDOTA_Modifier_Item_Urn_Damage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4784770;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Urn_Damage::~CDOTA_Modifier_Item_Urn_Damage  (line 288, @0x0000000002e0e0d0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Urn_Damage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Urn_Damage::~CDOTA_Modifier_Item_Urn_Damage(
        CDOTA_Modifier_Item_Urn_Damage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4784770;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Urn_Damage::GetEffectName  (line 295, @0x0000000002e0c440, libserver.so)
// strings: "particles/items2_fx/urn_of_shadows_damage.vpcf"
const char *__fastcall CDOTA_Modifier_Item_Urn_Damage::GetEffectName(CDOTA_Modifier_Item_Urn_Damage *const this)
{
  return "particles/items2_fx/urn_of_shadows_damage.vpcf";
}


// CDOTA_Modifier_Item_Urn_Damage::OnCreated  (line 307, @0x0000000002e09b20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "soul_damage_amount", "soul_damage_duration"
void __fastcall CDOTA_Modifier_Item_Urn_Damage::OnCreated(CDOTA_Modifier_Item_Urn_Damage *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->soul_damage_amount = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->soul_damage_duration = 0.0;
    goto LABEL_4;
  }
  this->soul_damage_amount = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "soul_damage_amount", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->soul_damage_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "soul_damage_duration", -1, 0);
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, 1.0, v5);
}


// CDOTA_Modifier_Item_Urn_Damage::OnIntervalThink  (line 319, @0x0000000002e004f0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
void __fastcall CDOTA_Modifier_Item_Urn_Damage::OnIntervalThink(CDOTA_Modifier_Item_Urn_Damage *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  flDamage = this->soul_damage_amount / this->soul_damage_duration;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, flDamage, 4, 0);
}


