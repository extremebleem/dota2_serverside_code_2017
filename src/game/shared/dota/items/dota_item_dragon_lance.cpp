// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_dragon_lance.cpp:26
class CDOTA_Item_Recipe_DragonLance : public CDOTA_Item {
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
	CDOTA_Item_Recipe_DragonLance(CDOTA_Item_Recipe_DragonLance &);
	CDOTA_Item_Recipe_DragonLance(CDOTA_Item_Recipe_DragonLance &);
	CDOTA_Item_Recipe_DragonLance();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_DragonLance();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_dragon_lance.cpp:38
class CDOTA_Item_DragonLance : public CDOTA_Item {
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
	CDOTA_Item_DragonLance(CDOTA_Item_DragonLance &);
	CDOTA_Item_DragonLance(CDOTA_Item_DragonLance &);
	CDOTA_Item_DragonLance();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_DragonLance();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_dragon_lance.cpp:50
class CDOTA_Modifier_Item_DragonLance : public CDOTA_Buff_Item {
public:

private:

	int bonus_agility;  // +0xba8
	int bonus_strength;  // +0xbac
	int base_attack_range;  // +0xbb0
	CDOTA_Modifier_Item_DragonLance();
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierAttackRangeBonusUnique(const CModifierParams &);
	ModifierVariant_t GetModifierCastRangeBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_DragonLance();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_DragonLance::~CDOTA_Item_Recipe_DragonLance  (line 26, @0x0000000002d86860, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_DragonLance::~CDOTA_Item_Recipe_DragonLance(
        CDOTA_Item_Recipe_DragonLance *const this)
{
  this->_vptr_IHandleEntity = &off_46D5690;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_DragonLance::~CDOTA_Item_Recipe_DragonLance  (line 26, @0x0000000002d86880, libserver.so)  // inlines: ~CDOTA_Item_Recipe_DragonLance
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_DragonLance::~CDOTA_Item_Recipe_DragonLance(
        CDOTA_Item_Recipe_DragonLance *const this)
{
  this->_vptr_IHandleEntity = &off_46D5690;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_DragonLance::Schema_DynamicBinding  (line 28, @0x0000000002d81ed0, libserver.so)
// globals: CDOTA_Item_Recipe_DragonLance::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_DragonLance::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_DragonLance *const this)
{
  return CDOTA_Item_Recipe_DragonLance::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d81ee0, libserver.so)
// globals: CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d81ef0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_DragonLance>
void __fastcall CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d81f10, libserver.so)
void __fastcall CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d81f30, libserver.so)
bool __fastcall CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d81f40, libserver.so)
// globals: CDOTA_Item_Recipe_DragonLance::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_DragonLance::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002d83df0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002d851c0, libserver.so)  // inlines: CDOTA_Item_Recipe_DragonLance, Construct<CDOTA_Item_Recipe_DragonLance>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46D5690;
  }
  return p;
}


// CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d88ed0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d88ef0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_DragonLance::GetEntityClassInternal  (line 28, @0x0000000002d93690, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_recipe_dragon_lance", "CDOTA_Item_Recipe_DragonLance"
// globals: `guard variable for'CDOTA_Item_Recipe_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClass, CDOTA_Item_Recipe_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClass, __dso_handle, CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_DragonLance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClassInfo, CDOTA_Item_Recipe_DragonLance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_DragonLance::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClass);
    CDOTA_Item_Recipe_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClass._vptr_CEntityClass = off_46D5610;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_DragonLanceClass != 0 )
    return &CDOTA_Item_Recipe_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClass;
  if ( `guard variable for'CDOTA_Item_Recipe_DragonLance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_DragonLance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_DragonLance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClassInfo,
      "CDOTA_Item_Recipe_DragonLance",
      "item_recipe_dragon_lance",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_DragonLance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClassInfo);
  }
  CDOTA_Item_Recipe_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClass.m_pClassInfo = &CDOTA_Item_Recipe_DragonLance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClassInfo;
  CDOTA_Item_Recipe_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClass.m_pBaseClassInfo = CDOTA_Item_Recipe_DragonLance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_DragonLanceClass = &CDOTA_Item_Recipe_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClass;
  CDOTA_Item_Recipe_DragonLance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClassInfo.m_pClass = &CDOTA_Item_Recipe_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClass;
  CDOTA_Item_Recipe_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_DragonLanceClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DragonLanceClass;
}


// CDOTA_Item_DragonLance::~CDOTA_Item_DragonLance  (line 38, @0x0000000002d868b0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_DragonLance::~CDOTA_Item_DragonLance(CDOTA_Item_DragonLance *const this)
{
  this->_vptr_IHandleEntity = &off_46D6290;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_DragonLance::~CDOTA_Item_DragonLance  (line 38, @0x0000000002d868d0, libserver.so)  // inlines: ~CDOTA_Item_DragonLance
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_DragonLance::~CDOTA_Item_DragonLance(CDOTA_Item_DragonLance *const this)
{
  this->_vptr_IHandleEntity = &off_46D6290;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_DragonLance::Schema_DynamicBinding  (line 40, @0x0000000002d81f50, libserver.so)
// globals: CDOTA_Item_DragonLance::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_DragonLance::Schema_DynamicBinding(
        const CDOTA_Item_DragonLance *const this)
{
  return CDOTA_Item_DragonLance::s_pSchemaBinding;
}


// CDOTA_Item_DragonLance::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002d81f60, libserver.so)
// globals: CDOTA_Item_DragonLance::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_DragonLance::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_DragonLance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_DragonLance::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_DragonLance::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002d81f70, libserver.so)  // inlines: Destruct<CDOTA_Item_DragonLance>
void __fastcall CDOTA_Item_DragonLance::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_DragonLance::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_DragonLance::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002d81f90, libserver.so)
void __fastcall CDOTA_Item_DragonLance::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_DragonLance::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_DragonLance::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002d81fb0, libserver.so)
bool __fastcall CDOTA_Item_DragonLance::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_DragonLance::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_DragonLance::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002d81fc0, libserver.so)
// globals: CDOTA_Item_DragonLance::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_DragonLance::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_DragonLance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_DragonLance::s_pSchemaBinding;
}


// CDOTA_Item_DragonLance::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002d83e30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_DragonLance::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_DragonLance::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_DragonLance::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002d851f0, libserver.so)  // inlines: CDOTA_Item_DragonLance, Construct<CDOTA_Item_DragonLance>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_DragonLance::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_DragonLance::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46D6290;
  }
  return p;
}


// CDOTA_Item_DragonLance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002d88f20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_DragonLance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_DragonLance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_DragonLance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002d88f40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_DragonLance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_DragonLance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_DragonLance::GetEntityClassInternal  (line 40, @0x0000000002d937e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "CDOTA_Item_DragonLance"
// globals: `guard variable for'CDOTA_Item_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DragonLanceClass, CDOTA_Item_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DragonLanceClass, __dso_handle, CDOTA_Item_DragonLance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_DragonLance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DragonLanceClassInfo, CDOTA_Item_DragonLance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DragonLanceClassInfo
CEntityClass *__cdecl CDOTA_Item_DragonLance::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DragonLanceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DragonLanceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DragonLanceClass);
    CDOTA_Item_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DragonLanceClass._vptr_CEntityClass = off_46D6210;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DragonLanceClass);
    __cxa_atexit(
      CDOTA_Item_DragonLance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DragonLanceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_DragonLanceClass != 0 )
    return &CDOTA_Item_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DragonLanceClass;
  if ( `guard variable for'CDOTA_Item_DragonLance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DragonLanceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_DragonLance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DragonLanceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_DragonLance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DragonLanceClassInfo,
      "CDOTA_Item_DragonLance",
      "item_dragon_lance",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_DragonLance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DragonLanceClassInfo);
  }
  CDOTA_Item_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DragonLanceClass.m_pClassInfo = &CDOTA_Item_DragonLance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DragonLanceClassInfo;
  CDOTA_Item_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DragonLanceClass.m_pBaseClassInfo = CDOTA_Item_DragonLance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DragonLanceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_DragonLanceClass = &CDOTA_Item_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DragonLanceClass;
  CDOTA_Item_DragonLance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DragonLanceClassInfo.m_pClass = &CDOTA_Item_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DragonLanceClass;
  CDOTA_Item_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DragonLanceClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_DragonLanceClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_DragonLance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DragonLanceClass;
}


// CDOTA_Item_DragonLance::GetIntrinsicModifierName  (line 42, @0x0000000002d81fd0, libserver.so)
// strings: "modifier_item_dragon_lance"
const char *__fastcall CDOTA_Item_DragonLance::GetIntrinsicModifierName(CDOTA_Item_DragonLance *const this)
{
  return "modifier_item_dragon_lance";
}


// CDOTA_Modifier_Item_DragonLance::~CDOTA_Modifier_Item_DragonLance  (line 50, @0x0000000002d83e70, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_DragonLance::~CDOTA_Modifier_Item_DragonLance(
        CDOTA_Modifier_Item_DragonLance *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_DragonLance::~CDOTA_Modifier_Item_DragonLance  (line 50, @0x0000000002d83e90, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_DragonLance
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_DragonLance::~CDOTA_Modifier_Item_DragonLance(
        CDOTA_Modifier_Item_DragonLance *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_DragonLance::DeclareFunctions  (line 70, @0x0000000002d6f7c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_DragonLance::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_DragonLance::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_DragonLance::GetModifierAttackRangeBonusUnique(CModifierParams const&), CDOTA_Modifier_Item_DragonLance::GetModifierCastRangeBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_DragonLance::DeclareFunctions(CDOTA_Modifier_Item_DragonLance *const this)
{
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_DragonLance::GetModifierBonusStats_Agility;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_DragonLance::GetModifierBonusStats_Strength;
  this->m_Functions[70].__pfn = CDOTA_Modifier_Item_DragonLance::GetModifierAttackRangeBonusUnique;
  this->m_Functions[70].__delta = 0;
  this->m_Functions[67].__pfn = CDOTA_Modifier_Item_DragonLance::GetModifierCastRangeBonus;
  this->m_Functions[67].__delta = 0;
}


// CDOTA_Modifier_Item_DragonLance::GetModifierBonusStats_Strength  (line 78, @0x0000000002d6f830, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_DragonLance::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_DragonLance *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_DragonLance::GetModifierBonusStats_Agility  (line 83, @0x0000000002d6f850, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_DragonLance::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_DragonLance *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agility;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_DragonLance::GetModifierAttackRangeBonusUnique  (line 88, @0x0000000002d70130, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Item_DragonLance::GetModifierAttackRangeBonusUnique(
        CDOTA_Modifier_Item_DragonLance *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  __m128i v4; // xmm0
  unsigned __int64 v5; // rdx

  Parent = CDOTA_Buff::GetParent(this);
  v5 = 1;
  if ( (Parent->m_iAttackCapabilities.m_Value & 2) != 0 )
  {
    *v4.m128i_i32 = this->base_attack_range;
    return ((_mm_cvtsi128_si32(v4) << 32) | 1);
  }
  return v5;
}


// CDOTA_Modifier_Item_DragonLance::GetModifierCastRangeBonus  (line 96, @0x0000000002d72530, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CDOTABaseAbility*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_DragonLance::GetModifierCastRangeBonus(
        CDOTA_Modifier_Item_DragonLance *const this,
        const CModifierParams *const params)
{
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r12
  __m128i v7; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( params->ability.m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[params->ability.m_Index & 0x1FF]) == 0
    || params->ability.m_Index != v4->m_EHandle.m_Index )
  {
    CDOTA_Buff::GetParent(this);
    return 1uLL;
  }
  m_pInstance = v4->m_pInstance;
  if ( (CDOTA_Buff::GetParent(this)->m_iAttackCapabilities.m_Value & 2) == 0
    || m_pInstance == 0
    || ((*(m_pInstance->_vptr_IHandleEntity + 251))(m_pInstance) & 0x20000) == 0 )
  {
    return 1uLL;
  }
  *v7.m128i_i32 = this->base_attack_range;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v7) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_DragonLance::OnCreated  (line 108, @0x0000000002d7bc20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_agility", "base_attack_range"
void __fastcall CDOTA_Modifier_Item_DragonLance::OnCreated(CDOTA_Modifier_Item_DragonLance *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_agility = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_agility", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_strength = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_agility = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_strength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_strength", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->base_attack_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "base_attack_range", -1, 0);
    return;
  }
LABEL_7:
  this->base_attack_range = 0;
}


