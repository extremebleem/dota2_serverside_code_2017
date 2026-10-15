// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_glimmer_cape.cpp:29
class CDOTA_Item_Recipe_GlimmerCape : public CDOTA_Item {
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
	CDOTA_Item_Recipe_GlimmerCape(CDOTA_Item_Recipe_GlimmerCape &);
	CDOTA_Item_Recipe_GlimmerCape(CDOTA_Item_Recipe_GlimmerCape &);
	CDOTA_Item_Recipe_GlimmerCape();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_GlimmerCape();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_glimmer_cape.cpp:42
class CDOTA_Item_GlimmerCape : public CDOTA_Item {
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
	CDOTA_Item_GlimmerCape(CDOTA_Item_GlimmerCape &);
	CDOTA_Item_GlimmerCape(CDOTA_Item_GlimmerCape &);
	CDOTA_Item_GlimmerCape();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetIntrinsicModifierName();
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	virtual ~CDOTA_Item_GlimmerCape();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[280] GetIntrinsicModifierName
	// vtable[248] OnSaveState
	// vtable[249] OnLoadState
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_glimmer_cape.cpp:119
class CDOTA_Modifier_Item_GlimmerCape : public CDOTA_Buff_Item {
public:

private:

	int bonus_attack_speed;  // +0xba8
	int bonus_magical_armor;  // +0xbac
	CDOTA_Modifier_Item_GlimmerCape();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Item_GlimmerCape();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_glimmer_cape.cpp:169
class CDOTA_Modifier_GlimmerCape_Fade : public CDOTA_Modifier_PersistentInvisibility {
public:

private:

	int active_magical_armor;  // +0xbb4
	CDOTA_Modifier_GlimmerCape_Fade();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	virtual ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_GlimmerCape_Fade();

	// vtable[5] CheckState
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[93] GetModifierMagicalResistanceBonus
	// vtable[94] OnTakeDamage
	// vtable[67] GetEffectName
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_GlimmerCape::~CDOTA_Item_Recipe_GlimmerCape  (line 29, @0x0000000002da1e50, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_GlimmerCape::~CDOTA_Item_Recipe_GlimmerCape(
        CDOTA_Item_Recipe_GlimmerCape *const this)
{
  this->_vptr_IHandleEntity = &off_46E8950;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_GlimmerCape::~CDOTA_Item_Recipe_GlimmerCape  (line 29, @0x0000000002da1e70, libserver.so)  // inlines: ~CDOTA_Item_Recipe_GlimmerCape
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_GlimmerCape::~CDOTA_Item_Recipe_GlimmerCape(
        CDOTA_Item_Recipe_GlimmerCape *const this)
{
  this->_vptr_IHandleEntity = &off_46E8950;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_GlimmerCape::Schema_DynamicBinding  (line 31, @0x0000000002d9f2b0, libserver.so)
// globals: CDOTA_Item_Recipe_GlimmerCape::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_GlimmerCape::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_GlimmerCape *const this)
{
  return CDOTA_Item_Recipe_GlimmerCape::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 31, @0x0000000002d9f2c0, libserver.so)
// globals: CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::DestructInstance  (line 31, @0x0000000002d9f2d0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_GlimmerCape>
void __fastcall CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::FreeInstance  (line 31, @0x0000000002d9f2f0, libserver.so)
void __fastcall CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::CanAllocate  (line 31, @0x0000000002d9f310, libserver.so)
bool __fastcall CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 31, @0x0000000002d9f320, libserver.so)
// globals: CDOTA_Item_Recipe_GlimmerCape::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_GlimmerCape::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::AllocateInstance  (line 31, @0x0000000002da0770, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::ConstructInstance  (line 31, @0x0000000002da16d0, libserver.so)  // inlines: CDOTA_Item_Recipe_GlimmerCape, Construct<CDOTA_Item_Recipe_GlimmerCape>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46E8950;
  }
  return p;
}


// CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002da3db0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002da3dd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInternal  (line 31, @0x0000000002da88e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "item_recipe_glimmer_cape", "CDOTA_Item_Recipe_GlimmerCape"
// globals: `guard variable for'CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClass, CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClass, __dso_handle, CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClassInfo, CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClass);
    CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClass._vptr_CEntityClass = off_46E88D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_GlimmerCapeClass != 0 )
    return &CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClass;
  if ( `guard variable for'CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClassInfo,
      "CDOTA_Item_Recipe_GlimmerCape",
      "item_recipe_glimmer_cape",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClassInfo);
  }
  CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClass.m_pClassInfo = &CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClassInfo;
  CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClass.m_pBaseClassInfo = CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_GlimmerCapeClass = &CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClass;
  CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClassInfo.m_pClass = &CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClass;
  CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_GlimmerCapeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GlimmerCapeClass;
}


// CDOTA_Item_GlimmerCape::~CDOTA_Item_GlimmerCape  (line 42, @0x0000000002da1ea0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_GlimmerCape::~CDOTA_Item_GlimmerCape(CDOTA_Item_GlimmerCape *const this)
{
  this->_vptr_IHandleEntity = &off_46E9550;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_GlimmerCape::~CDOTA_Item_GlimmerCape  (line 42, @0x0000000002da1ec0, libserver.so)  // inlines: ~CDOTA_Item_GlimmerCape
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_GlimmerCape::~CDOTA_Item_GlimmerCape(CDOTA_Item_GlimmerCape *const this)
{
  this->_vptr_IHandleEntity = &off_46E9550;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_GlimmerCape::Schema_DynamicBinding  (line 44, @0x0000000002d9f330, libserver.so)
// globals: CDOTA_Item_GlimmerCape::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_GlimmerCape::Schema_DynamicBinding(
        const CDOTA_Item_GlimmerCape *const this)
{
  return CDOTA_Item_GlimmerCape::s_pSchemaBinding;
}


// CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 44, @0x0000000002d9f340, libserver.so)
// globals: CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::DestructInstance  (line 44, @0x0000000002d9f350, libserver.so)  // inlines: Destruct<CDOTA_Item_GlimmerCape>
void __fastcall CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::FreeInstance  (line 44, @0x0000000002d9f370, libserver.so)
void __fastcall CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::CanAllocate  (line 44, @0x0000000002d9f390, libserver.so)
bool __fastcall CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 44, @0x0000000002d9f3a0, libserver.so)
// globals: CDOTA_Item_GlimmerCape::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_GlimmerCape::s_pSchemaBinding;
}


// CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::AllocateInstance  (line 44, @0x0000000002da07b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::ConstructInstance  (line 44, @0x0000000002da1700, libserver.so)  // inlines: CDOTA_Item_GlimmerCape, Construct<CDOTA_Item_GlimmerCape>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46E9550;
  }
  return p;
}


// CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002da3e00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002da3e20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_GlimmerCape::GetEntityClassInternal  (line 44, @0x0000000002da8a30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "CDOTA_Item_GlimmerCape"
// globals: `guard variable for'CDOTA_Item_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlimmerCapeClass, CDOTA_Item_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlimmerCapeClass, __dso_handle, CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_GlimmerCape::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GlimmerCapeClassInfo, CDOTA_Item_GlimmerCape::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GlimmerCapeClassInfo
CEntityClass *__cdecl CDOTA_Item_GlimmerCape::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlimmerCapeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlimmerCapeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlimmerCapeClass);
    CDOTA_Item_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlimmerCapeClass._vptr_CEntityClass = off_46E94D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlimmerCapeClass);
    __cxa_atexit(
      CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlimmerCapeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_GlimmerCapeClass != 0 )
    return &CDOTA_Item_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlimmerCapeClass;
  if ( `guard variable for'CDOTA_Item_GlimmerCape::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GlimmerCapeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_GlimmerCape::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GlimmerCapeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_GlimmerCape::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GlimmerCapeClassInfo,
      "CDOTA_Item_GlimmerCape",
      "item_glimmer_cape",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_GlimmerCape::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GlimmerCapeClassInfo);
  }
  CDOTA_Item_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlimmerCapeClass.m_pClassInfo = &CDOTA_Item_GlimmerCape::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GlimmerCapeClassInfo;
  CDOTA_Item_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlimmerCapeClass.m_pBaseClassInfo = CDOTA_Item_GlimmerCape::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GlimmerCapeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_GlimmerCapeClass = &CDOTA_Item_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlimmerCapeClass;
  CDOTA_Item_GlimmerCape::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GlimmerCapeClassInfo.m_pClass = &CDOTA_Item_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlimmerCapeClass;
  CDOTA_Item_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlimmerCapeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_GlimmerCapeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_GlimmerCape::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlimmerCapeClass;
}


// CDOTA_Item_GlimmerCape::GetIntrinsicModifierName  (line 48, @0x0000000002d9f3b0, libserver.so)
// strings: "modifier_item_glimmer_cape"
const char *__fastcall CDOTA_Item_GlimmerCape::GetIntrinsicModifierName(CDOTA_Item_GlimmerCape *const this)
{
  return "modifier_item_glimmer_cape";
}


// CDOTA_Item_GlimmerCape::OnSpellStart  (line 58, @0x0000000002d9d800, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex (15 total)
// strings: "modifier_item_glimmer_cape_fade", "Item.GlimmerCape.Activate", "particles/items3_fx/glimmer_cape_initial_flash.vpcf"
void __fastcall CDOTA_Item_GlimmerCape::OnSpellStart(CDOTA_Item_GlimmerCape *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  const Vector *AbsOrigin; // rbx
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_item_glimmer_cape_fade");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_item_glimmer_cape_fade", &kv, 0);
    DOTA_EmitSound(10, "Item.GlimmerCape.Activate", v3);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/items3_fx/glimmer_cape_initial_flash.vpcf",
                 2,
                 0,
                 0,
                 0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    v9 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v9, Particle, 0, *&AbsOrigin->x, AbsOrigin->z);
    v10 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v10, Particle);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Item_GlimmerCape::OnSaveState  (line 83, @0x0000000002d94a70, libserver.so)  // inlines: SetBool
// calls: CDOTA_Item::OnSaveState, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, KeyValues::SetInt
// strings: "modifier_item_glimmer_cape_fade", "faded"
bool __fastcall CDOTA_Item_GlimmerCape::OnSaveState(CDOTA_Item_GlimmerCape *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTA_Item::OnSaveState(this, pKV);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_item_glimmer_cape_fade", 0) != 0 )
    KeyValues::SetInt(pKV, "faded", 1);
  return 1;
}


// CDOTA_Item_GlimmerCape::OnLoadState  (line 99, @0x0000000002d949a0, libserver.so)  // inlines: GetBool
// calls: CDOTA_Item::OnLoadState, KeyValues::GetInt, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "faded", "modifier_item_glimmer_cape_fade"
bool __fastcall CDOTA_Item_GlimmerCape::OnLoadState(CDOTA_Item_GlimmerCape *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CDOTA_Item::OnLoadState(this, pKV);
  if ( KeyValues::GetInt(pKV, "faded", 0) != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_item_glimmer_cape_fade");
    Caster = CDOTABaseAbility::GetCaster(this);
    v6 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v6, Caster, this, "modifier_item_glimmer_cape_fade", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  return 1;
}


// CDOTA_Modifier_Item_GlimmerCape::~CDOTA_Modifier_Item_GlimmerCape  (line 119, @0x0000000002da0d30, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_GlimmerCape::~CDOTA_Modifier_Item_GlimmerCape(
        CDOTA_Modifier_Item_GlimmerCape *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_GlimmerCape::~CDOTA_Modifier_Item_GlimmerCape  (line 119, @0x0000000002da0d50, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_GlimmerCape
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_GlimmerCape::~CDOTA_Modifier_Item_GlimmerCape(
        CDOTA_Modifier_Item_GlimmerCape *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_GlimmerCape::IsHidden  (line 130, @0x0000000002d9f3c0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_GlimmerCape::IsHidden(CDOTA_Modifier_Item_GlimmerCape *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_GlimmerCape::DeclareFunctions  (line 140, @0x0000000002d94340, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_GlimmerCape::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Item_GlimmerCape::GetModifierMagicalResistanceBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_GlimmerCape::DeclareFunctions(CDOTA_Modifier_Item_GlimmerCape *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_GlimmerCape::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[49].__delta = 0;
  this->m_Functions[49].__pfn = CDOTA_Modifier_Item_GlimmerCape::GetModifierMagicalResistanceBonus;
}


// CDOTA_Modifier_Item_GlimmerCape::GetModifierAttackSpeedBonus_Constant  (line 146, @0x0000000002d94380, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_GlimmerCape::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_GlimmerCape *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_GlimmerCape::GetModifierMagicalResistanceBonus  (line 151, @0x0000000002d943a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_GlimmerCape::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_Item_GlimmerCape *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_magical_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_GlimmerCape::OnCreated  (line 156, @0x0000000002d9c650, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_magical_armor"
void __fastcall CDOTA_Modifier_Item_GlimmerCape::OnCreated(CDOTA_Modifier_Item_GlimmerCape *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_magical_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_magical_armor", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_attack_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_magical_armor = 0;
}


// CDOTA_Modifier_GlimmerCape_Fade::~CDOTA_Modifier_GlimmerCape_Fade  (line 169, @0x0000000002da1140, libserver.so)  // inlines: ~CDOTA_Modifier_PersistentInvisibility
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_GlimmerCape_Fade::~CDOTA_Modifier_GlimmerCape_Fade(
        CDOTA_Modifier_GlimmerCape_Fade *const this)
{
  this->_vptr_CDOTA_Buff = &off_411D6D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_GlimmerCape_Fade::~CDOTA_Modifier_GlimmerCape_Fade  (line 169, @0x0000000002da1160, libserver.so)  // inlines: ~CDOTA_Modifier_GlimmerCape_Fade, ~CDOTA_Modifier_PersistentInvisibility
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_GlimmerCape_Fade::~CDOTA_Modifier_GlimmerCape_Fade(
        CDOTA_Modifier_GlimmerCape_Fade *const this)
{
  this->_vptr_CDOTA_Buff = &off_411D6D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_GlimmerCape_Fade::IsPurgable  (line 176, @0x0000000002d9f3d0, libserver.so)
bool __fastcall CDOTA_Modifier_GlimmerCape_Fade::IsPurgable(CDOTA_Modifier_GlimmerCape_Fade *const this)
{
  return 1;
}


// CDOTA_Modifier_GlimmerCape_Fade::GetEffectName  (line 184, @0x0000000002d9f3e0, libserver.so)
// strings: "particles/items3_fx/glimmer_cape_initial.vpcf"
const char *__fastcall CDOTA_Modifier_GlimmerCape_Fade::GetEffectName(CDOTA_Modifier_GlimmerCape_Fade *const this)
{
  return "particles/items3_fx/glimmer_cape_initial.vpcf";
}


// CDOTA_Modifier_GlimmerCape_Fade::OnCreated  (line 192, @0x0000000002d9c570, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Modifier_PersistentInvisibility::OnCreated
// strings: "active_magical_armor"
void __fastcall CDOTA_Modifier_GlimmerCape_Fade::OnCreated(CDOTA_Modifier_GlimmerCape_Fade *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->active_magical_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "active_magical_armor", -1, 0);
  else
    this->active_magical_armor = 0;
  CDOTA_Modifier_PersistentInvisibility::OnCreated(this, pKV);
}


// CDOTA_Modifier_GlimmerCape_Fade::CheckState  (line 200, @0x0000000002d956d0, libserver.so)  // inlines: Enable
// calls: CDOTA_Buff::GetParent
void __fastcall CDOTA_Modifier_GlimmerCape_Fade::CheckState(
        CDOTA_Modifier_GlimmerCape_Fade *const this,
        CDOTABuffState *const buffState)
{
  if ( SLOBYTE(CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value) < 0 )
  {
    buffState->m_nEnabledStateMask |= 0x2000000uLL;
    buffState->m_nDisabledStateMask &= ~0x2000000uLL;
  }
}


// CDOTA_Modifier_GlimmerCape_Fade::DeclareFunctions  (line 210, @0x0000000002d95130, libserver.so)  // inlines: SetFunction
// calls: CDOTA_Modifier_PersistentInvisibility::DeclareFunctions
void __fastcall CDOTA_Modifier_GlimmerCape_Fade::DeclareFunctions(CDOTA_Modifier_GlimmerCape_Fade *const this)
{
  CDOTA_Modifier_PersistentInvisibility::DeclareFunctions(this);
  this->m_Functions[49].__pfn = (&stru_10 + 729);
  this->m_Functions[49].__delta = 0;
  this->m_Functions[134].__pfn = (&stru_10 + 737);
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_GlimmerCape_Fade::GetModifierMagicalResistanceBonus  (line 220, @0x0000000002d953c0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::HasInvisibilityBuff
ModifierVariant_t __fastcall CDOTA_Modifier_GlimmerCape_Fade::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_GlimmerCape_Fade *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  bool HasInvisibilityBuff; // al
  __m128i v5; // xmm0
  unsigned __int64 v6; // rdx

  Parent = CDOTA_Buff::GetParent(this);
  HasInvisibilityBuff = CDOTA_BaseNPC::HasInvisibilityBuff(Parent);
  v6 = 1;
  if ( HasInvisibilityBuff )
  {
    *v5.m128i_i32 = this->active_magical_armor;
    return ((_mm_cvtsi128_si32(v5) << 32) | 1);
  }
  return v6;
}


// CDOTA_Modifier_GlimmerCape_Fade::OnTakeDamage  (line 230, @0x0000000002d96f80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_CombatLog::AddHeroSavedEvent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_GlimmerCape_Fade::OnTakeDamage(
        CDOTA_Modifier_GlimmerCape_Fade *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  float fOriginalDamage; // r13d
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  int v13; // ebx
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // r13
  CDOTA_BaseNPC *Caster; // rbx
  CDOTABaseAbility *Ability; // rax

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
        if ( v5->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && params->nDamageType == 2 )
        {
          fOriginalDamage = params->fOriginalDamage;
          Parent = CDOTA_Buff::GetParent(this);
          if ( fOriginalDamage >= CBaseEntity::GetHealth(Parent) )
          {
            v11 = CDOTA_Buff::GetParent(this);
            if ( (*(v11->_vptr_IHandleEntity + 408))(v11) != 0 )
            {
              v12 = CDOTA_Buff::GetParent(this);
              v13 = (params->fOriginalDamage - (1.0 - ((*(v12->_vptr_IHandleEntity + 425))(v12) / 100.0)));
              v14 = CDOTA_Buff::GetParent(this);
              if ( v13 >= CBaseEntity::GetHealth(v14) )
              {
                v15 = CDOTA_Buff::GetParent(this);
                Caster = CDOTA_Buff::GetCaster(this);
                Ability = CDOTA_Buff::GetAbility(this);
                CDOTA_CombatLog::AddHeroSavedEvent(&g_DOTACombatLog, Ability, Caster, v15, 0);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


