// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_scepter_of_cyclone.cpp:30
class CDOTA_Item_Recipe_Cyclone : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Cyclone(CDOTA_Item_Recipe_Cyclone &);
	CDOTA_Item_Recipe_Cyclone(CDOTA_Item_Recipe_Cyclone &);
	CDOTA_Item_Recipe_Cyclone();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Cyclone();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_scepter_of_cyclone.cpp:41
class CDOTA_Item_Cyclone : public CDOTA_Item {
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
	CDOTA_Item_Cyclone(CDOTA_Item_Cyclone &);
	CDOTA_Item_Cyclone(CDOTA_Item_Cyclone &);
	CDOTA_Item_Cyclone();
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
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual ~CDOTA_Item_Cyclone();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_scepter_of_cyclone.cpp:55
class C_CDOTA_Item_Cyclone_MapInstall {
	C_CDOTA_Item_Cyclone_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_scepter_of_cyclone.cpp:111
class CDOTA_Modifier_Item_Cyclone : public CDOTA_Buff_Item {
public:

private:

	int bonus_intellect;  // +0xba8
	int bonus_mana_regen;  // +0xbac
	int bonus_movement_speed;  // +0xbb0
	CDOTA_Modifier_Item_Cyclone();
	ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Constant(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Cyclone();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_scepter_of_cyclone.cpp:174
class CDOTA_Modifier_Eul_Cyclone : public CDOTA_Modifier_Cyclone {
public:

	CDOTA_Modifier_Eul_Cyclone();
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Eul_Cyclone();

	// vtable[60] OnDestroy
	// sizeof = 3040
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Cyclone::~CDOTA_Item_Recipe_Cyclone  (line 30, @0x0000000002df3870, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Cyclone::~CDOTA_Item_Recipe_Cyclone(CDOTA_Item_Recipe_Cyclone *const this)
{
  this->_vptr_IHandleEntity = &off_475FD10;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Cyclone::~CDOTA_Item_Recipe_Cyclone  (line 30, @0x0000000002df3890, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Cyclone
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Cyclone::~CDOTA_Item_Recipe_Cyclone(CDOTA_Item_Recipe_Cyclone *const this)
{
  this->_vptr_IHandleEntity = &off_475FD10;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Cyclone::Schema_DynamicBinding  (line 32, @0x0000000002def8f0, libserver.so)
// globals: CDOTA_Item_Recipe_Cyclone::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Cyclone::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Cyclone *const this)
{
  return CDOTA_Item_Recipe_Cyclone::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x0000000002def900, libserver.so)
// globals: CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x0000000002def910, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Cyclone>
void __fastcall CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x0000000002def930, libserver.so)
void __fastcall CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x0000000002def950, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x0000000002def960, libserver.so)
// globals: CDOTA_Item_Recipe_Cyclone::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Cyclone::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x0000000002df1280, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x0000000002df23c0, libserver.so)  // inlines: CDOTA_Item_Recipe_Cyclone, Construct<CDOTA_Item_Recipe_Cyclone>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_475FD10;
  }
  return p;
}


// CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002df5a80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002df5aa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Cyclone::GetEntityClassInternal  (line 32, @0x0000000002dfd6b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "item_recipe_cyclone", "CDOTA_Item_Recipe_Cyclone"
// globals: `guard variable for'CDOTA_Item_Recipe_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CycloneClass, CDOTA_Item_Recipe_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CycloneClass, __dso_handle, CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_CycloneClassInfo, CDOTA_Item_Recipe_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_CycloneClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Cyclone::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CycloneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CycloneClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CycloneClass);
    CDOTA_Item_Recipe_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CycloneClass._vptr_CEntityClass = off_475FC90;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CycloneClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CycloneClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_CycloneClass != 0 )
    return &CDOTA_Item_Recipe_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CycloneClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_CycloneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_CycloneClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_CycloneClassInfo,
      "CDOTA_Item_Recipe_Cyclone",
      "item_recipe_cyclone",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_CycloneClassInfo);
  }
  CDOTA_Item_Recipe_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CycloneClass.m_pClassInfo = &CDOTA_Item_Recipe_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_CycloneClassInfo;
  CDOTA_Item_Recipe_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CycloneClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_CycloneClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_CycloneClass = &CDOTA_Item_Recipe_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CycloneClass;
  CDOTA_Item_Recipe_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_CycloneClassInfo.m_pClass = &CDOTA_Item_Recipe_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CycloneClass;
  CDOTA_Item_Recipe_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CycloneClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_CycloneClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CycloneClass;
}


// CDOTA_Item_Cyclone::~CDOTA_Item_Cyclone  (line 41, @0x0000000002df38c0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Cyclone::~CDOTA_Item_Cyclone(CDOTA_Item_Cyclone *const this)
{
  this->_vptr_IHandleEntity = &off_4760910;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Cyclone::~CDOTA_Item_Cyclone  (line 41, @0x0000000002df38e0, libserver.so)  // inlines: ~CDOTA_Item_Cyclone
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Cyclone::~CDOTA_Item_Cyclone(CDOTA_Item_Cyclone *const this)
{
  this->_vptr_IHandleEntity = &off_4760910;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Cyclone::Schema_DynamicBinding  (line 43, @0x0000000002def970, libserver.so)
// globals: CDOTA_Item_Cyclone::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Cyclone::Schema_DynamicBinding(
        const CDOTA_Item_Cyclone *const this)
{
  return CDOTA_Item_Cyclone::s_pSchemaBinding;
}


// CDOTA_Item_Cyclone::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 43, @0x0000000002def980, libserver.so)
// globals: CDOTA_Item_Cyclone::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Cyclone::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Cyclone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Cyclone::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Cyclone::CEntityInstanceEntityClass::DestructInstance  (line 43, @0x0000000002def990, libserver.so)  // inlines: Destruct<CDOTA_Item_Cyclone>
void __fastcall CDOTA_Item_Cyclone::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Cyclone::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Cyclone::CEntityInstanceEntityClass::FreeInstance  (line 43, @0x0000000002def9b0, libserver.so)
void __fastcall CDOTA_Item_Cyclone::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Cyclone::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Cyclone::CEntityInstanceEntityClass::CanAllocate  (line 43, @0x0000000002def9d0, libserver.so)
bool __fastcall CDOTA_Item_Cyclone::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Cyclone::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Cyclone::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 43, @0x0000000002def9e0, libserver.so)
// globals: CDOTA_Item_Cyclone::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Cyclone::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Cyclone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Cyclone::s_pSchemaBinding;
}


// CDOTA_Item_Cyclone::CEntityInstanceEntityClass::AllocateInstance  (line 43, @0x0000000002df12c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Cyclone::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Cyclone::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Cyclone::CEntityInstanceEntityClass::ConstructInstance  (line 43, @0x0000000002df23f0, libserver.so)  // inlines: CDOTA_Item_Cyclone, Construct<CDOTA_Item_Cyclone>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Cyclone::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Cyclone::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4760910;
  }
  return p;
}


// CDOTA_Item_Cyclone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002df5ad0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Cyclone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Cyclone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Cyclone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002df5af0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Cyclone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Cyclone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Cyclone::GetEntityClassInternal  (line 43, @0x0000000002dfd800, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "CDOTA_Item_Cyclone", "dota_item", "CDOTA_Item", "dota_base_ability", "CDOTABaseAbility"
// globals: `guard variable for'CDOTA_Item_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CycloneClass, CDOTA_Item_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CycloneClass, __dso_handle, CDOTA_Item_Cyclone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CycloneClassInfo, CDOTA_Item_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CycloneClassInfo, `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo (10 total)
CEntityClass *__cdecl CDOTA_Item_Cyclone::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CycloneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CycloneClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CycloneClass);
    CDOTA_Item_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CycloneClass._vptr_CEntityClass = off_4760890;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CycloneClass);
    __cxa_atexit(
      CDOTA_Item_Cyclone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CycloneClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_CycloneClass != 0 )
    return &CDOTA_Item_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CycloneClass;
  if ( `guard variable for'CDOTA_Item_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CycloneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CycloneClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo) != 0 )
    {
      if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) != 0 )
      {
        EntityClassInfo = CBaseEntity::GetEntityClassInfo();
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
          "CDOTABaseAbility",
          "dota_base_ability",
          0,
          EntityClassInfo);
        __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo,
        "CDOTA_Item",
        "dota_item",
        0,
        &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CycloneClassInfo,
      "CDOTA_Item_Cyclone",
      "item_cyclone",
      0,
      &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CycloneClassInfo);
  }
  CDOTA_Item_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CycloneClass.m_pClassInfo = &CDOTA_Item_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CycloneClassInfo;
  CDOTA_Item_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CycloneClass.m_pBaseClassInfo = CDOTA_Item_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CycloneClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_CycloneClass = &CDOTA_Item_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CycloneClass;
  CDOTA_Item_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CycloneClassInfo.m_pClass = &CDOTA_Item_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CycloneClass;
  CDOTA_Item_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CycloneClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_CycloneClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CycloneClass;
}


// CDOTA_Item_Cyclone::GetIntrinsicModifierName  (line 47, @0x0000000002def9f0, libserver.so)
// strings: "modifier_item_cyclone"
const char *__fastcall CDOTA_Item_Cyclone::GetIntrinsicModifierName(CDOTA_Item_Cyclone *const this)
{
  return "modifier_item_cyclone";
}


// CDOTA_Item_Cyclone::YouForgotToImplementOrDeclareServerClass  (line 55, @0x0000000002de43d0, libserver.so)
int __fastcall CDOTA_Item_Cyclone::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Cyclone *const this)
{
  return 0;
}


// CDOTA_Item_Cyclone::GetServerClass  (line 55, @0x0000000002de7d60, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Cyclone::GetServerClass(CDOTA_Item_Cyclone *const this)
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


// CDOTA_Item_Cyclone::OnSpellStart  (line 64, @0x0000000002ded660, libserver.so)  // inlines: GetTeamNumber, InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, Purge, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "CDOTA_Item_Cyclone::OnSpellStart", "cyclone_duration", "modifier_eul_cyclone", "DOTA_Item.Cyclone.Activate"
void __fastcall CDOTA_Item_Cyclone::OnSpellStart(CDOTA_Item_Cyclone *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  __int64 v4; // rax
  CBaseEntity *v5; // rax
  CDOTA_BaseNPC *v6; // r12
  float v7; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  unsigned __int8 m_Value; // r14
  CDOTA_BaseNPC *v10; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0
      && ((v4 & 0x200) == 0 || v3 == CDOTABaseAbility::GetCaster(this))
      && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      v5 = CDOTABaseAbility::GetCursorTarget(this);
      if ( v5 == 0 || (v6 = v5, !v5->m_bIsDOTANPC) )
        v6 = 0;
      KeyValues::KeyValues(&kv, "CDOTA_Item_Cyclone::OnSpellStart");
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cyclone_duration", -1, 0);
      KeyValues::SetFloat(&kv, "duration", v7);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v6, Caster, this, "modifier_eul_cyclone", &kv, 0);
      m_Value = v6->m_iTeamNum.m_Value;
      v10 = CDOTABaseAbility::GetCaster(this);
      Purge(v6, this, 2 * (m_Value == v10->m_iTeamNum.m_Value) + 2);
      DOTA_EmitSound(10, "DOTA_Item.Cyclone.Activate", v6);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Item_Cyclone::CastFilterResult  (line 86, @0x0000000002de53b0, libserver.so)  // inlines: FStrEq, GetUnitName, String, ToCStr, _V_strcmp
// calls: CDOTABaseAbility::GetCaster, UnitFilter, strcmp
int __fastcall CDOTA_Item_Cyclone::CastFilterResult(CDOTA_Item_Cyclone *const this, CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int result; // eax
  const char *m_pAsString; // rsi
  const char *v7; // r14
  const char *v8; // rdi
  int v9; // edx

  Caster = CDOTABaseAbility::GetCaster(this);
  result = UnitFilter(pTarget, 3, 19, 0, Caster->m_iTeamNum.m_Value);
  if ( result == 0 )
  {
    if ( CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value == pTarget->m_iTeamNum.m_Value )
    {
      m_pAsString = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
      if ( m_pAsString == 0 )
        m_pAsString = "";
      v7 = m_pAsString;
      v8 = CDOTABaseAbility::GetCaster(this)->m_iszUnitName.m_Value.u.m_pAsString;
      if ( v8 == 0 )
        v8 = "";
      if ( v7 == v8 || (v9 = strcmp(v8, v7), result = 23, v9 == 0) )
      {
        result = 23;
        if ( !pTarget->m_bIsIllusion.m_Value )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// CDOTA_Item_Cyclone::GetCustomCastError  (line 100, @0x0000000002de49c0, libserver.so)
// calls: CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_cant_cast_on_ally"
const char *__fastcall CDOTA_Item_Cyclone::GetCustomCastError(CDOTA_Item_Cyclone *const this, CDOTA_BaseNPC *pTarget)
{
  if ( CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value != pTarget->m_iTeamNum.m_Value
    || pTarget == CDOTABaseAbility::GetCaster(this) )
  {
    return "";
  }
  else
  {
    return "#dota_hud_error_cant_cast_on_ally";
  }
}


// CDOTA_Modifier_Item_Cyclone::~CDOTA_Modifier_Item_Cyclone  (line 111, @0x0000000002df1650, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Cyclone::~CDOTA_Modifier_Item_Cyclone(CDOTA_Modifier_Item_Cyclone *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Cyclone::~CDOTA_Modifier_Item_Cyclone  (line 111, @0x0000000002df1670, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Cyclone
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Cyclone::~CDOTA_Modifier_Item_Cyclone(CDOTA_Modifier_Item_Cyclone *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Cyclone::DeclareFunctions  (line 132, @0x0000000002de43e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Cyclone::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_Cyclone::GetModifierPercentageManaRegen(CModifierParams const&), CDOTA_Modifier_Item_Cyclone::GetModifierMoveSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Cyclone::DeclareFunctions(CDOTA_Modifier_Item_Cyclone *const this)
{
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Cyclone::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[54].__delta = 0;
  this->m_Functions[54].__pfn = CDOTA_Modifier_Item_Cyclone::GetModifierPercentageManaRegen;
  this->m_Functions[11].__pfn = CDOTA_Modifier_Item_Cyclone::GetModifierMoveSpeedBonus_Constant;
  this->m_Functions[11].__delta = 0;
}


// CDOTA_Modifier_Item_Cyclone::OnCreated  (line 139, @0x0000000002decd00, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
// strings: "bonus_intellect", "bonus_mana_regen"
void __fastcall CDOTA_Modifier_Item_Cyclone::OnCreated(CDOTA_Modifier_Item_Cyclone *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_intellect, "bonus_intellect");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_mana_regen, "bonus_mana_regen");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->bonus_movement_speed, "bonus_movement_speed");
}


// CDOTA_Modifier_Item_Cyclone::GetModifierBonusStats_Intellect  (line 149, @0x0000000002de4440, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Cyclone::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Cyclone *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Cyclone::GetModifierPercentageManaRegen  (line 154, @0x0000000002de4460, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Cyclone::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_Cyclone *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Cyclone::GetModifierMoveSpeedBonus_Constant  (line 159, @0x0000000002de4480, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Cyclone::GetModifierMoveSpeedBonus_Constant(
        CDOTA_Modifier_Item_Cyclone *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Eul_Cyclone::~CDOTA_Modifier_Eul_Cyclone  (line 174, @0x0000000002df1ce0, libserver.so)  // inlines: ~CDOTA_Modifier_Cyclone
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Eul_Cyclone::~CDOTA_Modifier_Eul_Cyclone(CDOTA_Modifier_Eul_Cyclone *const this)
{
  this->_vptr_CDOTA_Buff = &off_41260F0;
  this->_vptr_CHorizontalMotionController = &off_41263F8;
  this->_vptr_CVerticalMotionController = &off_4126438;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Eul_Cyclone::~CDOTA_Modifier_Eul_Cyclone  (line 174, @0x0000000002df1d20, libserver.so)  // inlines: ~CDOTA_Modifier_Cyclone, ~CDOTA_Modifier_Eul_Cyclone
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Eul_Cyclone::~CDOTA_Modifier_Eul_Cyclone(CDOTA_Modifier_Eul_Cyclone *const this)
{
  this->_vptr_CDOTA_Buff = &off_41260F0;
  this->_vptr_CHorizontalMotionController = &off_41263F8;
  this->_vptr_CVerticalMotionController = &off_4126438;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Eul_Cyclone::OnDestroy  (line 185, @0x0000000002de5480, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, ApplyDamage, CDOTA_Modifier_Cyclone::OnDestroy
void __fastcall CDOTA_Modifier_Eul_Cyclone::OnDestroy(CDOTA_Modifier_Eul_Cyclone *const this)
{
  unsigned __int8 m_Value; // r12
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax

  m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
  if ( m_Value != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, Parent, Ability, 50.0, 2, 4);
  }
  CDOTA_Modifier_Cyclone::OnDestroy(this);
}


