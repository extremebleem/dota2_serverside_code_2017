// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_silver_edge.cpp:27
class CDOTA_Item_Recipe_Silver_Edge : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Silver_Edge(CDOTA_Item_Recipe_Silver_Edge &);
	CDOTA_Item_Recipe_Silver_Edge(CDOTA_Item_Recipe_Silver_Edge &);
	CDOTA_Item_Recipe_Silver_Edge();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Silver_Edge();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_silver_edge.cpp:40
class CDOTA_Item_Silver_Edge : public CDOTA_Item {
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
	CDOTA_Item_Silver_Edge(CDOTA_Item_Silver_Edge &);
	CDOTA_Item_Silver_Edge(CDOTA_Item_Silver_Edge &);
	CDOTA_Item_Silver_Edge();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_Silver_Edge();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_silver_edge.cpp:69
class CDOTA_Modifier_Item_Silver_Edge : public CDOTA_Buff_Item {
public:

private:

	int bonus_attack_speed;  // +0xba8
	int bonus_damage;  // +0xbac
	int bonus_all_stats;  // +0xbb0
	float backstab_duration;  // +0xbb4
	CDOTA_Modifier_Item_Silver_Edge();
	ModifierVariant_t GetModifierBonusStats_All(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual int GetPriority();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Silver_Edge();

	// vtable[6] GetPriority
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3024
};

// src/game/shared/dota/items/dota_item_silver_edge.cpp:191
class CDOTA_Modifier_Silver_Edge_WindWalk : public CDOTA_Modifier_Invisible {
public:

private:

	int windwalk_bonus_damage;  // +0xbb4
	int windwalk_movement_speed;  // +0xbb8
	CDOTA_Modifier_Silver_Edge_WindWalk();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamagePostCrit(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Silver_Edge_WindWalk();

	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// sizeof = 3008
};

// src/game/shared/dota/items/dota_item_silver_edge.cpp:258
class CDOTA_Modifier_Silver_Edge_Debuff : public CDOTA_Buff {
public:

private:

	int backstab_reduction;  // +0xba8
	CDOTA_Modifier_Silver_Edge_Debuff();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	ModifierVariant_t GetModifierTotalDamageOutgoing_Percentage(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Silver_Edge_Debuff();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Silver_Edge::~CDOTA_Item_Recipe_Silver_Edge  (line 27, @0x0000000002df3aa0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Silver_Edge::~CDOTA_Item_Recipe_Silver_Edge(
        CDOTA_Item_Recipe_Silver_Edge *const this)
{
  this->_vptr_IHandleEntity = &off_47679F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Silver_Edge::~CDOTA_Item_Recipe_Silver_Edge  (line 27, @0x0000000002df3ac0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Silver_Edge
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Silver_Edge::~CDOTA_Item_Recipe_Silver_Edge(
        CDOTA_Item_Recipe_Silver_Edge *const this)
{
  this->_vptr_IHandleEntity = &off_47679F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Silver_Edge::Schema_DynamicBinding  (line 29, @0x0000000002defdd0, libserver.so)
// globals: CDOTA_Item_Recipe_Silver_Edge::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Silver_Edge::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Silver_Edge *const this)
{
  return CDOTA_Item_Recipe_Silver_Edge::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002defde0, libserver.so)
// globals: CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002defdf0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Silver_Edge>
void __fastcall CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002defe10, libserver.so)
void __fastcall CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002defe30, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002defe40, libserver.so)
// globals: CDOTA_Item_Recipe_Silver_Edge::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Silver_Edge::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002df1440, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002df2510, libserver.so)  // inlines: CDOTA_Item_Recipe_Silver_Edge, Construct<CDOTA_Item_Recipe_Silver_Edge>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47679F0;
  }
  return p;
}


// CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002df5cb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002df5cd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInternal  (line 29, @0x0000000002dfe850, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "item_recipe_silver_edge", "CDOTA_Item_Recipe_Silver_Edge"
// globals: `guard variable for'CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClass, CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClass, __dso_handle, CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClassInfo, CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClass);
    CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClass._vptr_CEntityClass = off_4767970;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Silver_EdgeClass != 0 )
    return &CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClassInfo,
      "CDOTA_Item_Recipe_Silver_Edge",
      "item_recipe_silver_edge",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClassInfo);
  }
  CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClass.m_pClassInfo = &CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClassInfo;
  CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Silver_EdgeClass = &CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClass;
  CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClassInfo.m_pClass = &CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClass;
  CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Silver_EdgeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Silver_EdgeClass;
}


// CDOTA_Item_Silver_Edge::~CDOTA_Item_Silver_Edge  (line 40, @0x0000000002df3af0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Silver_Edge::~CDOTA_Item_Silver_Edge(CDOTA_Item_Silver_Edge *const this)
{
  this->_vptr_IHandleEntity = &off_47685F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Silver_Edge::~CDOTA_Item_Silver_Edge  (line 40, @0x0000000002df3b10, libserver.so)  // inlines: ~CDOTA_Item_Silver_Edge
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Silver_Edge::~CDOTA_Item_Silver_Edge(CDOTA_Item_Silver_Edge *const this)
{
  this->_vptr_IHandleEntity = &off_47685F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Silver_Edge::Schema_DynamicBinding  (line 42, @0x0000000002defe50, libserver.so)
// globals: CDOTA_Item_Silver_Edge::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Silver_Edge::Schema_DynamicBinding(
        const CDOTA_Item_Silver_Edge *const this)
{
  return CDOTA_Item_Silver_Edge::s_pSchemaBinding;
}


// CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 42, @0x0000000002defe60, libserver.so)
// globals: CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::DestructInstance  (line 42, @0x0000000002defe70, libserver.so)  // inlines: Destruct<CDOTA_Item_Silver_Edge>
void __fastcall CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::FreeInstance  (line 42, @0x0000000002defe90, libserver.so)
void __fastcall CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::CanAllocate  (line 42, @0x0000000002defeb0, libserver.so)
bool __fastcall CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 42, @0x0000000002defec0, libserver.so)
// globals: CDOTA_Item_Silver_Edge::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Silver_Edge::s_pSchemaBinding;
}


// CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::AllocateInstance  (line 42, @0x0000000002df1480, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::ConstructInstance  (line 42, @0x0000000002df2540, libserver.so)  // inlines: CDOTA_Item_Silver_Edge, Construct<CDOTA_Item_Silver_Edge>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47685F0;
  }
  return p;
}


// CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002df5d00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002df5d20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Silver_Edge::GetEntityClassInternal  (line 42, @0x0000000002dfe9a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "CDOTA_Item_Silver_Edge"
// globals: `guard variable for'CDOTA_Item_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Silver_EdgeClass, CDOTA_Item_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Silver_EdgeClass, __dso_handle, CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Silver_Edge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Silver_EdgeClassInfo, CDOTA_Item_Silver_Edge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Silver_EdgeClassInfo
CEntityClass *__cdecl CDOTA_Item_Silver_Edge::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Silver_EdgeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Silver_EdgeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Silver_EdgeClass);
    CDOTA_Item_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Silver_EdgeClass._vptr_CEntityClass = off_4768570;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Silver_EdgeClass);
    __cxa_atexit(
      CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Silver_EdgeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Silver_EdgeClass != 0 )
    return &CDOTA_Item_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Silver_EdgeClass;
  if ( `guard variable for'CDOTA_Item_Silver_Edge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Silver_EdgeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Silver_Edge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Silver_EdgeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Silver_Edge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Silver_EdgeClassInfo,
      "CDOTA_Item_Silver_Edge",
      "item_silver_edge",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Silver_Edge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Silver_EdgeClassInfo);
  }
  CDOTA_Item_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Silver_EdgeClass.m_pClassInfo = &CDOTA_Item_Silver_Edge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Silver_EdgeClassInfo;
  CDOTA_Item_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Silver_EdgeClass.m_pBaseClassInfo = CDOTA_Item_Silver_Edge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Silver_EdgeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Silver_EdgeClass = &CDOTA_Item_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Silver_EdgeClass;
  CDOTA_Item_Silver_Edge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Silver_EdgeClassInfo.m_pClass = &CDOTA_Item_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Silver_EdgeClass;
  CDOTA_Item_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Silver_EdgeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Silver_EdgeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Silver_Edge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Silver_EdgeClass;
}


// CDOTA_Item_Silver_Edge::GetIntrinsicModifierName  (line 44, @0x0000000002defed0, libserver.so)
// strings: "modifier_item_silver_edge"
const char *__fastcall CDOTA_Item_Silver_Edge::GetIntrinsicModifierName(CDOTA_Item_Silver_Edge *const this)
{
  return "modifier_item_silver_edge";
}


// CDOTA_Item_Silver_Edge::OnSpellStart  (line 53, @0x0000000002ded920, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "CDOTA_Item_Silver_Edge::OnSpellStart", "windwalk_fade_time", "fadetime", "windwalk_duration", "modifier_item_silver_edge_windwalk", "DOTA_Item.InvisibilitySword.Activate"
void __fastcall CDOTA_Item_Silver_Edge::OnSpellStart(CDOTA_Item_Silver_Edge *const this)
{
  float v2; // xmm1_4
  float v3; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "CDOTA_Item_Silver_Edge::OnSpellStart");
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "windwalk_fade_time", -1, 0);
  KeyValues::SetFloat(&kv, "fadetime", v2);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "windwalk_duration", -1, 0);
  KeyValues::SetFloat(&kv, "duration", v3);
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v5, Caster, this, "modifier_item_silver_edge_windwalk", &kv, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "DOTA_Item.InvisibilitySword.Activate", v6);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Item_Silver_Edge::~CDOTA_Modifier_Item_Silver_Edge  (line 69, @0x0000000002df4fa0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Buff_Item, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Item_Silver_Edge::~CDOTA_Modifier_Item_Silver_Edge(
        CDOTA_Modifier_Item_Silver_Edge *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_47691B0;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_InFlightAttackRecords.m_Memory;
    CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory);
    if ( (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(p_m_Memory);
  }
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Silver_Edge::~CDOTA_Modifier_Item_Silver_Edge  (line 69, @0x0000000002df5010, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Silver_Edge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Item_Silver_Edge::~CDOTA_Modifier_Item_Silver_Edge(
        CDOTA_Modifier_Item_Silver_Edge *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_47691B0;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_InFlightAttackRecords.m_Memory;
    CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory);
    if ( (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(p_m_Memory);
  }
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Silver_Edge::GetPriority  (line 81, @0x0000000002defee0, libserver.so)
int __fastcall CDOTA_Modifier_Item_Silver_Edge::GetPriority(CDOTA_Modifier_Item_Silver_Edge *const this)
{
  return 2;
}


// CDOTA_Modifier_Item_Silver_Edge::DeclareFunctions  (line 97, @0x0000000002de47c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Silver_Edge::GetModifierBonusStats_All(CModifierParams const&), CDOTA_Modifier_Item_Silver_Edge::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Item_Silver_Edge::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_Silver_Edge::OnAttack(CModifierParams const&), CDOTA_Modifier_Item_Silver_Edge::OnAttackFail(CModifierParams const&), CDOTA_Modifier_Item_Silver_Edge::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Silver_Edge::DeclareFunctions(CDOTA_Modifier_Item_Silver_Edge *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Silver_Edge::GetModifierBonusStats_All;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_Silver_Edge::GetModifierBonusStats_All;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Silver_Edge::GetModifierBonusStats_All;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_Silver_Edge::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Silver_Edge::GetModifierPreAttack_BonusDamage;
  this->m_Functions[120].__pfn = CDOTA_Modifier_Item_Silver_Edge::OnAttack;
  this->m_Functions[122].__pfn = CDOTA_Modifier_Item_Silver_Edge::OnAttackFail;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[122].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Item_Silver_Edge::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Item_Silver_Edge::GetModifierBonusStats_All  (line 109, @0x0000000002de4880, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Silver_Edge::GetModifierBonusStats_All(
        CDOTA_Modifier_Item_Silver_Edge *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Silver_Edge::OnAttackLanded  (line 114, @0x0000000002dec010, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::RemoveModifierByName, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_silver_edge_debuff", "DOTA_Item.SilverEdge.Target", "modifier_item_silver_edge_windwalk"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Silver_Edge::OnAttackLanded(
        CDOTA_Modifier_Item_Silver_Edge *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  unsigned __int64 v10; // rax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rax
  CEntityInstance *v13; // r13
  int m_Id; // eax
  float v15; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *Parent; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hattacker.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && params->nDamageCategory == 1 )
        {
          v9 = params->htarget.m_Index;
          if ( v9 + 2 <= 1
            || (v10 = params->htarget.m_Index & 0x7FFF,
                (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9)]) == 0)
            || (v12 = &v11[v10 & 0x1FF]) == 0
            || v9 != v12->m_EHandle.m_Index
            || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
            || BYTE3(v13[7]._vptr_IHandleEntity) == 0 )
          {
            v13 = 0;
          }
          if ( CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(
                 &this->m_InFlightAttackRecords,
                 &params->iRecord)
            && (BYTE1(v13[58]._vptr_IHandleEntity) & 2) == 0 )
          {
            m_Id = v13[43].m_iszPrivateVScripts.u.m_Id;
            if ( (m_Id & 0x10) == 0 && (m_Id & 0x193) != 0 )
            {
              KeyValues::KeyValues(&kv, "modifier_silver_edge_debuff");
              KeyValues::SetFloat(&kv, "duration", v15);
              Ability = CDOTA_Buff::GetAbility(this);
              Caster = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(v13, Caster, Ability, "modifier_silver_edge_debuff", &kv, 0);
              CDOTA_BaseNPC::UnitEmitSound(v13, "DOTA_Item.SilverEdge.Target", 0.0, 0, 0);
              Parent = CDOTA_Buff::GetParent(this);
              CDOTA_BaseNPC::RemoveModifierByName(Parent, "modifier_item_silver_edge_windwalk");
              KeyValues::~KeyValues(&kv);
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_Silver_Edge::OnAttackFail  (line 140, @0x0000000002dec230, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Silver_Edge::OnAttackFail(
        CDOTA_Modifier_Item_Silver_Edge *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  m_pInstance = 0;
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hattacker.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
    CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord);
  return 1uLL;
}


// CDOTA_Modifier_Item_Silver_Edge::OnAttack  (line 151, @0x0000000002dee4f0, libserver.so)  // inlines: AddToTail, AttackerNPC, CopyConstruct<short int>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CUtlMemory<short int, int>::Grow
// strings: "modifier_item_silver_edge_windwalk"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Silver_Edge::OnAttack(
        CDOTA_Modifier_Item_Silver_Edge *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Parent; // rax
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  __int64 m_Size; // rbx
  int v14; // edx
  __int16 *v15; // rdx
  CDOTA_AttackRecord *pAttackRecord; // [rsp+8h] [rbp-28h]

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hattacker.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          Parent = CDOTA_Buff::GetParent(this);
          if ( Parent == m_pInstance
            && CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_item_silver_edge_windwalk", 0) != 0 )
          {
            iRecord = params->iRecord;
            AttackRecordsManager = GetAttackRecordsManager();
            RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
            m_Size = this->m_InFlightAttackRecords.m_Size;
            v14 = this->m_InFlightAttackRecords.m_Size;
            if ( m_Size == this->m_InFlightAttackRecords.m_Memory.m_nAllocationCount )
            {
              pAttackRecord = RecordByIndex;
              CUtlMemory<short,int>::Grow(&this->m_InFlightAttackRecords.m_Memory, 1);
              v14 = this->m_InFlightAttackRecords.m_Size;
              RecordByIndex = pAttackRecord;
            }
            this->m_InFlightAttackRecords.m_Size = v14 + 1;
            v15 = &this->m_InFlightAttackRecords.m_Memory.m_pMemory[m_Size];
            if ( v15 != 0 )
              *v15 = RecordByIndex->m_iRecord;
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_Silver_Edge::GetModifierAttackSpeedBonus_Constant  (line 167, @0x0000000002de48a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Silver_Edge::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_Silver_Edge *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Silver_Edge::GetModifierPreAttack_BonusDamage  (line 172, @0x0000000002de48c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Silver_Edge::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Silver_Edge *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Silver_Edge::OnCreated  (line 178, @0x0000000002dedd50, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bonus_all_stats", "backstab_duration"
void __fastcall CDOTA_Modifier_Item_Silver_Edge::OnCreated(CDOTA_Modifier_Item_Silver_Edge *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_attack_speed, "bonus_attack_speed");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_damage, "bonus_damage");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->bonus_all_stats, "bonus_all_stats");
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->backstab_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "backstab_duration", -1, 0);
  else
    this->backstab_duration = 0.0;
}


// CDOTA_Modifier_Silver_Edge_WindWalk::~CDOTA_Modifier_Silver_Edge_WindWalk  (line 191, @0x0000000002df1510, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Silver_Edge_WindWalk::~CDOTA_Modifier_Silver_Edge_WindWalk(
        CDOTA_Modifier_Silver_Edge_WindWalk *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Silver_Edge_WindWalk::~CDOTA_Modifier_Silver_Edge_WindWalk  (line 191, @0x0000000002df1530, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible, ~CDOTA_Modifier_Silver_Edge_WindWalk
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Silver_Edge_WindWalk::~CDOTA_Modifier_Silver_Edge_WindWalk(
        CDOTA_Modifier_Silver_Edge_WindWalk *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Silver_Edge_WindWalk::IsHidden  (line 203, @0x0000000002defef0, libserver.so)
bool __fastcall CDOTA_Modifier_Silver_Edge_WindWalk::IsHidden(CDOTA_Modifier_Silver_Edge_WindWalk *const this)
{
  return 0;
}


// CDOTA_Modifier_Silver_Edge_WindWalk::CheckState  (line 213, @0x0000000002de55f0, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Invisible::CheckState
void __fastcall CDOTA_Modifier_Silver_Edge_WindWalk::CheckState(
        CDOTA_Modifier_Silver_Edge_WindWalk *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  CDOTA_Modifier_Invisible::CheckState(this, buffState);
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2010000uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFDFEFFFFLL;
}


// CDOTA_Modifier_Silver_Edge_WindWalk::DeclareFunctions  (line 221, @0x0000000002de5620, libserver.so)  // inlines: SetFunction
// calls: CDOTA_Modifier_Invisible::DeclareFunctions
// globals: CDOTA_Modifier_Silver_Edge_WindWalk::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Silver_Edge_WindWalk::GetModifierPreAttack_BonusDamagePostCrit(CModifierParams const&)
void __fastcall CDOTA_Modifier_Silver_Edge_WindWalk::DeclareFunctions(CDOTA_Modifier_Silver_Edge_WindWalk *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Silver_Edge_WindWalk::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[2].__delta = 0;
  this->m_Functions[2].__pfn = CDOTA_Modifier_Silver_Edge_WindWalk::GetModifierPreAttack_BonusDamagePostCrit;
  CDOTA_Modifier_Invisible::DeclareFunctions(this);
}


// CDOTA_Modifier_Silver_Edge_WindWalk::OnCreated  (line 229, @0x0000000002decf00, libserver.so)
// calls: CDOTA_Modifier_Invisible::OnCreated, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
// strings: "windwalk_bonus_damage", "windwalk_movement_speed"
void __fastcall CDOTA_Modifier_Silver_Edge_WindWalk::OnCreated(
        CDOTA_Modifier_Silver_Edge_WindWalk *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  CDOTA_Modifier_Invisible::OnCreated(this, pKV);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->windwalk_bonus_damage, "windwalk_bonus_damage");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->windwalk_movement_speed, "windwalk_movement_speed");
}


// CDOTA_Modifier_Silver_Edge_WindWalk::GetModifierMoveSpeedBonus_Percentage  (line 237, @0x0000000002de48e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Silver_Edge_WindWalk::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Silver_Edge_WindWalk *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->windwalk_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Silver_Edge_WindWalk::GetModifierPreAttack_BonusDamagePostCrit  (line 242, @0x0000000002de7370, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Silver_Edge_WindWalk::GetModifierPreAttack_BonusDamagePostCrit(
        CDOTA_Modifier_Silver_Edge_WindWalk *const this,
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


// CDOTA_Modifier_Silver_Edge_Debuff::~CDOTA_Modifier_Silver_Edge_Debuff  (line 258, @0x0000000002df14c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Silver_Edge_Debuff::~CDOTA_Modifier_Silver_Edge_Debuff(
        CDOTA_Modifier_Silver_Edge_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4769810;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Silver_Edge_Debuff::~CDOTA_Modifier_Silver_Edge_Debuff  (line 258, @0x0000000002df14e0, libserver.so)  // inlines: ~CDOTA_Modifier_Silver_Edge_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Silver_Edge_Debuff::~CDOTA_Modifier_Silver_Edge_Debuff(
        CDOTA_Modifier_Silver_Edge_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4769810;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Silver_Edge_Debuff::IsDebuff  (line 265, @0x0000000002deff00, libserver.so)
bool __fastcall CDOTA_Modifier_Silver_Edge_Debuff::IsDebuff(CDOTA_Modifier_Silver_Edge_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_Silver_Edge_Debuff::IsPurgable  (line 266, @0x0000000002deff10, libserver.so)
bool __fastcall CDOTA_Modifier_Silver_Edge_Debuff::IsPurgable(CDOTA_Modifier_Silver_Edge_Debuff *const this)
{
  return 0;
}


// CDOTA_Modifier_Silver_Edge_Debuff::GetEffectName  (line 272, @0x0000000002deff20, libserver.so)
// strings: "particles/items3_fx/silver_edge.vpcf"
const char *__fastcall CDOTA_Modifier_Silver_Edge_Debuff::GetEffectName(CDOTA_Modifier_Silver_Edge_Debuff *const this)
{
  return "particles/items3_fx/silver_edge.vpcf";
}


// CDOTA_Modifier_Silver_Edge_Debuff::DeclareFunctions  (line 282, @0x0000000002de4900, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Silver_Edge_Debuff::GetModifierTotalDamageOutgoing_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Silver_Edge_Debuff::DeclareFunctions(CDOTA_Modifier_Silver_Edge_Debuff *const this)
{
  this->m_Functions[30].__pfn = CDOTA_Modifier_Silver_Edge_Debuff::GetModifierTotalDamageOutgoing_Percentage;
  this->m_Functions[30].__delta = 0;
}


// CDOTA_Modifier_Silver_Edge_Debuff::OnCreated  (line 287, @0x0000000002decf60, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
// strings: "backstab_reduction"
void __fastcall CDOTA_Modifier_Silver_Edge_Debuff::OnCreated(
        CDOTA_Modifier_Silver_Edge_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->backstab_reduction, "backstab_reduction");
}


// CDOTA_Modifier_Silver_Edge_Debuff::GetModifierTotalDamageOutgoing_Percentage  (line 294, @0x0000000002de4920, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Silver_Edge_Debuff::GetModifierTotalDamageOutgoing_Percentage(
        CDOTA_Modifier_Silver_Edge_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->backstab_reduction;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Silver_Edge_Debuff::CheckState  (line 301, @0x0000000002de4940, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Silver_Edge_Debuff::CheckState(
        CDOTA_Modifier_Silver_Edge_Debuff *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x10000000uLL;
  buffState->m_nDisabledStateMask &= ~0x10000000uLL;
}


