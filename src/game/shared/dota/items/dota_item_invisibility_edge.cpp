// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_invisibility_edge.cpp:29
class CDOTA_Item_Recipe_InvisibilityEdge : public CDOTA_Item {
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
	CDOTA_Item_Recipe_InvisibilityEdge(CDOTA_Item_Recipe_InvisibilityEdge &);
	CDOTA_Item_Recipe_InvisibilityEdge(CDOTA_Item_Recipe_InvisibilityEdge &);
	CDOTA_Item_Recipe_InvisibilityEdge();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_InvisibilityEdge();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_invisibility_edge.cpp:42
class CDOTA_Item_InvisibilityEdge : public CDOTA_Item {
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
	CDOTA_Item_InvisibilityEdge(CDOTA_Item_InvisibilityEdge &);
	CDOTA_Item_InvisibilityEdge(CDOTA_Item_InvisibilityEdge &);
	CDOTA_Item_InvisibilityEdge();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_InvisibilityEdge();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_invisibility_edge.cpp:71
class CDOTA_Modifier_Item_InvisibilityEdge : public CDOTA_Buff_Item {
public:

private:

	int bonus_attack_speed;  // +0xba8
	int bonus_damage;  // +0xbac
	CDOTA_Modifier_Item_InvisibilityEdge();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_InvisibilityEdge();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_invisibility_edge.cpp:116
class CDOTA_Modifier_InvisibilityEdge_WindWalk : public CDOTA_Modifier_Invisible {
public:

private:

	int windwalk_bonus_damage;  // +0xbb4
	int windwalk_movement_speed;  // +0xbb8
	CDOTA_Modifier_InvisibilityEdge_WindWalk();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamagePostCrit(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_InvisibilityEdge_WindWalk();

	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_InvisibilityEdge::~CDOTA_Item_Recipe_InvisibilityEdge  (line 29, @0x0000000002dbc770, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_InvisibilityEdge::~CDOTA_Item_Recipe_InvisibilityEdge(
        CDOTA_Item_Recipe_InvisibilityEdge *const this)
{
  this->_vptr_IHandleEntity = &off_4701310;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_InvisibilityEdge::~CDOTA_Item_Recipe_InvisibilityEdge  (line 29, @0x0000000002dbc790, libserver.so)  // inlines: ~CDOTA_Item_Recipe_InvisibilityEdge
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_InvisibilityEdge::~CDOTA_Item_Recipe_InvisibilityEdge(
        CDOTA_Item_Recipe_InvisibilityEdge *const this)
{
  this->_vptr_IHandleEntity = &off_4701310;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_InvisibilityEdge::Schema_DynamicBinding  (line 31, @0x0000000002db8a40, libserver.so)
// globals: CDOTA_Item_Recipe_InvisibilityEdge::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_InvisibilityEdge::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_InvisibilityEdge *const this)
{
  return CDOTA_Item_Recipe_InvisibilityEdge::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 31, @0x0000000002db8a50, libserver.so)
// globals: CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::DestructInstance  (line 31, @0x0000000002db8a60, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_InvisibilityEdge>
void __fastcall CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::FreeInstance  (line 31, @0x0000000002db8a80, libserver.so)
void __fastcall CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::CanAllocate  (line 31, @0x0000000002db8aa0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 31, @0x0000000002db8ab0, libserver.so)
// globals: CDOTA_Item_Recipe_InvisibilityEdge::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_InvisibilityEdge::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::AllocateInstance  (line 31, @0x0000000002dba540, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::ConstructInstance  (line 31, @0x0000000002dbb880, libserver.so)  // inlines: CDOTA_Item_Recipe_InvisibilityEdge, Construct<CDOTA_Item_Recipe_InvisibilityEdge>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4701310;
  }
  return p;
}


// CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002dbe970, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002dbe990, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInternal  (line 31, @0x0000000002dc32d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_recipe_invis_sword", "CDOTA_Item_Recipe_InvisibilityEdge"
// globals: `guard variable for'CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClass, CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClass, __dso_handle, CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClassInfo, CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClass);
    CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClass._vptr_CEntityClass = off_4701290;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_InvisibilityEdgeClass != 0 )
    return &CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClass;
  if ( `guard variable for'CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClassInfo,
      "CDOTA_Item_Recipe_InvisibilityEdge",
      "item_recipe_invis_sword",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClassInfo);
  }
  CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClass.m_pClassInfo = &CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClassInfo;
  CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClass.m_pBaseClassInfo = CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_InvisibilityEdgeClass = &CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClass;
  CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClassInfo.m_pClass = &CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClass;
  CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_InvisibilityEdgeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_InvisibilityEdgeClass;
}


// CDOTA_Item_InvisibilityEdge::~CDOTA_Item_InvisibilityEdge  (line 42, @0x0000000002dbc7c0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_InvisibilityEdge::~CDOTA_Item_InvisibilityEdge(CDOTA_Item_InvisibilityEdge *const this)
{
  this->_vptr_IHandleEntity = &off_4701F10;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_InvisibilityEdge::~CDOTA_Item_InvisibilityEdge  (line 42, @0x0000000002dbc7e0, libserver.so)  // inlines: ~CDOTA_Item_InvisibilityEdge
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_InvisibilityEdge::~CDOTA_Item_InvisibilityEdge(CDOTA_Item_InvisibilityEdge *const this)
{
  this->_vptr_IHandleEntity = &off_4701F10;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_InvisibilityEdge::Schema_DynamicBinding  (line 44, @0x0000000002db8ac0, libserver.so)
// globals: CDOTA_Item_InvisibilityEdge::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_InvisibilityEdge::Schema_DynamicBinding(
        const CDOTA_Item_InvisibilityEdge *const this)
{
  return CDOTA_Item_InvisibilityEdge::s_pSchemaBinding;
}


// CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 44, @0x0000000002db8ad0, libserver.so)
// globals: CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::DestructInstance  (line 44, @0x0000000002db8ae0, libserver.so)  // inlines: Destruct<CDOTA_Item_InvisibilityEdge>
void __fastcall CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::FreeInstance  (line 44, @0x0000000002db8b00, libserver.so)
void __fastcall CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::CanAllocate  (line 44, @0x0000000002db8b20, libserver.so)
bool __fastcall CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 44, @0x0000000002db8b30, libserver.so)
// globals: CDOTA_Item_InvisibilityEdge::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_InvisibilityEdge::s_pSchemaBinding;
}


// CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::AllocateInstance  (line 44, @0x0000000002dba580, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::ConstructInstance  (line 44, @0x0000000002dbb8b0, libserver.so)  // inlines: CDOTA_Item_InvisibilityEdge, Construct<CDOTA_Item_InvisibilityEdge>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4701F10;
  }
  return p;
}


// CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002dbe9c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002dbe9e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_InvisibilityEdge::GetEntityClassInternal  (line 44, @0x0000000002dc3420, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_invis_sword", "CDOTA_Item_InvisibilityEdge"
// globals: `guard variable for'CDOTA_Item_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_InvisibilityEdgeClass, CDOTA_Item_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_InvisibilityEdgeClass, __dso_handle, CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_InvisibilityEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_InvisibilityEdgeClassInfo, CDOTA_Item_InvisibilityEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_InvisibilityEdgeClassInfo
CEntityClass *__cdecl CDOTA_Item_InvisibilityEdge::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_InvisibilityEdgeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_InvisibilityEdgeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_InvisibilityEdgeClass);
    CDOTA_Item_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_InvisibilityEdgeClass._vptr_CEntityClass = off_4701E90;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_InvisibilityEdgeClass);
    __cxa_atexit(
      CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_InvisibilityEdgeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_InvisibilityEdgeClass != 0 )
    return &CDOTA_Item_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_InvisibilityEdgeClass;
  if ( `guard variable for'CDOTA_Item_InvisibilityEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_InvisibilityEdgeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_InvisibilityEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_InvisibilityEdgeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_InvisibilityEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_InvisibilityEdgeClassInfo,
      "CDOTA_Item_InvisibilityEdge",
      "item_invis_sword",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_InvisibilityEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_InvisibilityEdgeClassInfo);
  }
  CDOTA_Item_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_InvisibilityEdgeClass.m_pClassInfo = &CDOTA_Item_InvisibilityEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_InvisibilityEdgeClassInfo;
  CDOTA_Item_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_InvisibilityEdgeClass.m_pBaseClassInfo = CDOTA_Item_InvisibilityEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_InvisibilityEdgeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_InvisibilityEdgeClass = &CDOTA_Item_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_InvisibilityEdgeClass;
  CDOTA_Item_InvisibilityEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_InvisibilityEdgeClassInfo.m_pClass = &CDOTA_Item_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_InvisibilityEdgeClass;
  CDOTA_Item_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_InvisibilityEdgeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_InvisibilityEdgeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_InvisibilityEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_InvisibilityEdgeClass;
}


// CDOTA_Item_InvisibilityEdge::GetIntrinsicModifierName  (line 46, @0x0000000002db8b40, libserver.so)
// strings: "modifier_item_invisibility_edge"
const char *__fastcall CDOTA_Item_InvisibilityEdge::GetIntrinsicModifierName(CDOTA_Item_InvisibilityEdge *const this)
{
  return "modifier_item_invisibility_edge";
}


// CDOTA_Item_InvisibilityEdge::OnSpellStart  (line 55, @0x0000000002db6100, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "CDOTA_Item_InvisibilityEdge::OnSpellStart", "windwalk_fade_time", "fadetime", "windwalk_duration", "modifier_item_invisibility_edge_windwalk", "DOTA_Item.InvisibilitySword.Activate"
void __fastcall CDOTA_Item_InvisibilityEdge::OnSpellStart(CDOTA_Item_InvisibilityEdge *const this)
{
  float v2; // xmm1_4
  float v3; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "CDOTA_Item_InvisibilityEdge::OnSpellStart");
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "windwalk_fade_time", -1, 0);
  KeyValues::SetFloat(&kv, "fadetime", v2);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "windwalk_duration", -1, 0);
  KeyValues::SetFloat(&kv, "duration", v3);
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v5, Caster, this, "modifier_item_invisibility_edge_windwalk", &kv, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "DOTA_Item.InvisibilitySword.Activate", v6);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Item_InvisibilityEdge::~CDOTA_Modifier_Item_InvisibilityEdge  (line 71, @0x0000000002dbaf60, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_InvisibilityEdge::~CDOTA_Modifier_Item_InvisibilityEdge(
        CDOTA_Modifier_Item_InvisibilityEdge *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_InvisibilityEdge::~CDOTA_Modifier_Item_InvisibilityEdge  (line 71, @0x0000000002dbaf80, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_InvisibilityEdge
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_InvisibilityEdge::~CDOTA_Modifier_Item_InvisibilityEdge(
        CDOTA_Modifier_Item_InvisibilityEdge *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_InvisibilityEdge::DeclareFunctions  (line 89, @0x0000000002daaf50, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_InvisibilityEdge::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Item_InvisibilityEdge::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_InvisibilityEdge::DeclareFunctions(
        CDOTA_Modifier_Item_InvisibilityEdge *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_InvisibilityEdge::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_InvisibilityEdge::GetModifierPreAttack_BonusDamage;
}


// CDOTA_Modifier_Item_InvisibilityEdge::GetModifierAttackSpeedBonus_Constant  (line 95, @0x0000000002daaf90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_InvisibilityEdge::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_InvisibilityEdge *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_InvisibilityEdge::GetModifierPreAttack_BonusDamage  (line 100, @0x0000000002daafb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_InvisibilityEdge::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_InvisibilityEdge *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_InvisibilityEdge::OnCreated  (line 105, @0x0000000002db4800, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_InvisibilityEdge::OnCreated(
        CDOTA_Modifier_Item_InvisibilityEdge *const this,
        KeyValues *pKV)
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
      this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_damage", -1, 0);
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
  this->bonus_damage = 0;
}


// CDOTA_Modifier_InvisibilityEdge_WindWalk::~CDOTA_Modifier_InvisibilityEdge_WindWalk  (line 116, @0x0000000002dbb3c0, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_InvisibilityEdge_WindWalk::~CDOTA_Modifier_InvisibilityEdge_WindWalk(
        CDOTA_Modifier_InvisibilityEdge_WindWalk *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_InvisibilityEdge_WindWalk::~CDOTA_Modifier_InvisibilityEdge_WindWalk  (line 116, @0x0000000002dbb3e0, libserver.so)  // inlines: ~CDOTA_Modifier_InvisibilityEdge_WindWalk, ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_InvisibilityEdge_WindWalk::~CDOTA_Modifier_InvisibilityEdge_WindWalk(
        CDOTA_Modifier_InvisibilityEdge_WindWalk *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_InvisibilityEdge_WindWalk::IsHidden  (line 128, @0x0000000002db8b50, libserver.so)
bool __fastcall CDOTA_Modifier_InvisibilityEdge_WindWalk::IsHidden(
        CDOTA_Modifier_InvisibilityEdge_WindWalk *const this)
{
  return 0;
}


// CDOTA_Modifier_InvisibilityEdge_WindWalk::CheckState  (line 138, @0x0000000002dac310, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Invisible::CheckState
void __fastcall CDOTA_Modifier_InvisibilityEdge_WindWalk::CheckState(
        CDOTA_Modifier_InvisibilityEdge_WindWalk *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_Modifier_Invisible::CheckState(this, buffState);
  if ( (*(this->_vptr_CDOTA_Buff + 93))(this) != 0 )
  {
    buffState->m_nEnabledStateMask |= 0x2000000uLL;
    buffState->m_nDisabledStateMask &= ~0x2000000uLL;
  }
}


// CDOTA_Modifier_InvisibilityEdge_WindWalk::DeclareFunctions  (line 148, @0x0000000002dabf20, libserver.so)  // inlines: SetFunction
// calls: CDOTA_Modifier_Invisible::DeclareFunctions
// globals: CDOTA_Modifier_InvisibilityEdge_WindWalk::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_InvisibilityEdge_WindWalk::GetModifierPreAttack_BonusDamagePostCrit(CModifierParams const&)
void __fastcall CDOTA_Modifier_InvisibilityEdge_WindWalk::DeclareFunctions(
        CDOTA_Modifier_InvisibilityEdge_WindWalk *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_InvisibilityEdge_WindWalk::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[2].__delta = 0;
  this->m_Functions[2].__pfn = CDOTA_Modifier_InvisibilityEdge_WindWalk::GetModifierPreAttack_BonusDamagePostCrit;
  CDOTA_Modifier_Invisible::DeclareFunctions(this);
}


// CDOTA_Modifier_InvisibilityEdge_WindWalk::OnCreated  (line 156, @0x0000000002db4ad0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Modifier_Invisible::OnCreated, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "windwalk_bonus_damage", "windwalk_movement_speed"
void __fastcall CDOTA_Modifier_InvisibilityEdge_WindWalk::OnCreated(
        CDOTA_Modifier_InvisibilityEdge_WindWalk *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  CDOTA_Modifier_Invisible::OnCreated(this, pKV);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->windwalk_bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "windwalk_bonus_damage",
                                    -1,
                                    0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->windwalk_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        v4,
                                        "windwalk_movement_speed",
                                        -1,
                                        0);
      return;
    }
  }
  else
  {
    this->windwalk_bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->windwalk_movement_speed = 0;
}


// CDOTA_Modifier_InvisibilityEdge_WindWalk::GetModifierMoveSpeedBonus_Percentage  (line 164, @0x0000000002daafd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_InvisibilityEdge_WindWalk::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_InvisibilityEdge_WindWalk *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->windwalk_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_InvisibilityEdge_WindWalk::GetModifierPreAttack_BonusDamagePostCrit  (line 169, @0x0000000002dadd30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_InvisibilityEdge_WindWalk::GetModifierPreAttack_BonusDamagePostCrit(
        CDOTA_Modifier_InvisibilityEdge_WindWalk *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rax
  int m_Id; // eax
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[params->htarget.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    return 1uLL;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1uLL;
  m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
  if ( (m_Id & 0x10) != 0 || (m_Id & 0x193) == 0 )
    return 1uLL;
  *v2.m128i_i32 = this->windwalk_bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


