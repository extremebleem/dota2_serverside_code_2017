// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_desolator.cpp:28
class CDOTA_Item_Recipe_Desolator : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Desolator(CDOTA_Item_Recipe_Desolator &);
	CDOTA_Item_Recipe_Desolator(CDOTA_Item_Recipe_Desolator &);
	CDOTA_Item_Recipe_Desolator();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Desolator();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_desolator.cpp:40
class CDOTA_Item_Desolator : public CDOTA_Item {
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
	CDOTA_Item_Desolator(CDOTA_Item_Desolator &);
	CDOTA_Item_Desolator(CDOTA_Item_Desolator &);
	CDOTA_Item_Desolator();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Desolator();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_desolator.cpp:52
class CDOTA_Orb_Desolator : public CDOTA_Orb {
public:

private:

	int corruption_duration;  // +0x18
	CDOTA_Orb_Desolator(CDOTA_Orb_Desolator &);
	CDOTA_Orb_Desolator(const CDOTA_Orb_Desolator &);
	CDOTA_Orb_Desolator(CDOTA_AttackRecord *, KeyValues *, CDOTA_BaseNPC *, CDOTABaseAbility *);
	virtual const char * GetProjectileName();
	virtual void OnOrbPreImpact(const CModifierParams &);
	virtual ~CDOTA_Orb_Desolator();

	// vtable[3] GetProjectileName
	// vtable[7] OnOrbPreImpact
	// sizeof = 32
};

// src/game/shared/dota/items/dota_item_desolator.cpp:91
class CDOTA_Modifier_Item_Desolator : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	float corruption_duration;  // +0xbac
	CDOTA_Modifier_Item_Desolator();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual int GetOrbPriority(CDOTA_AttackRecord *);
	virtual CDOTA_Orb * GetCustomOrb(CDOTA_AttackRecord *);
	virtual ~CDOTA_Modifier_Item_Desolator();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[50] GetOrbPriority
	// vtable[49] GetCustomOrb
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_desolator.cpp:165
class CDOTA_Modifier_Desolator_Corruption : public CDOTA_Buff {
public:

private:

	int corruption_armor;  // +0xba8
	CDOTA_Modifier_Desolator_Corruption();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual bool IsDebuff();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Desolator_Corruption();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[12] IsDebuff
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Desolator::~CDOTA_Item_Recipe_Desolator  (line 28, @0x0000000002d865e0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Desolator::~CDOTA_Item_Recipe_Desolator(CDOTA_Item_Recipe_Desolator *const this)
{
  this->_vptr_IHandleEntity = &off_46CDC90;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Desolator::~CDOTA_Item_Recipe_Desolator  (line 28, @0x0000000002d86600, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Desolator
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Desolator::~CDOTA_Item_Recipe_Desolator(CDOTA_Item_Recipe_Desolator *const this)
{
  this->_vptr_IHandleEntity = &off_46CDC90;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Desolator::Schema_DynamicBinding  (line 30, @0x0000000002d81a30, libserver.so)
// globals: CDOTA_Item_Recipe_Desolator::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Desolator::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Desolator *const this)
{
  return CDOTA_Item_Recipe_Desolator::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002d81a40, libserver.so)
// globals: CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002d81a50, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Desolator>
void __fastcall CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002d81a70, libserver.so)
void __fastcall CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002d81a90, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002d81aa0, libserver.so)
// globals: CDOTA_Item_Recipe_Desolator::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Desolator::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002d83bf0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002d85040, libserver.so)  // inlines: CDOTA_Item_Recipe_Desolator, Construct<CDOTA_Item_Recipe_Desolator>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46CDC90;
  }
  return p;
}


// CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002d88c50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002d88c70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Desolator::GetEntityClassInternal  (line 30, @0x0000000002d92670, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_recipe_desolator", "CDOTA_Item_Recipe_Desolator"
// globals: `guard variable for'CDOTA_Item_Recipe_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DesolatorClass, CDOTA_Item_Recipe_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DesolatorClass, __dso_handle, CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Desolator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DesolatorClassInfo, CDOTA_Item_Recipe_Desolator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DesolatorClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Desolator::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DesolatorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DesolatorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DesolatorClass);
    CDOTA_Item_Recipe_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DesolatorClass._vptr_CEntityClass = off_46CDC10;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DesolatorClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DesolatorClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_DesolatorClass != 0 )
    return &CDOTA_Item_Recipe_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DesolatorClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Desolator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DesolatorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Desolator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DesolatorClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Desolator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DesolatorClassInfo,
      "CDOTA_Item_Recipe_Desolator",
      "item_recipe_desolator",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Desolator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DesolatorClassInfo);
  }
  CDOTA_Item_Recipe_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DesolatorClass.m_pClassInfo = &CDOTA_Item_Recipe_Desolator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DesolatorClassInfo;
  CDOTA_Item_Recipe_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DesolatorClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Desolator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DesolatorClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_DesolatorClass = &CDOTA_Item_Recipe_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DesolatorClass;
  CDOTA_Item_Recipe_Desolator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DesolatorClassInfo.m_pClass = &CDOTA_Item_Recipe_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DesolatorClass;
  CDOTA_Item_Recipe_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DesolatorClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_DesolatorClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DesolatorClass;
}


// CDOTA_Item_Desolator::~CDOTA_Item_Desolator  (line 40, @0x0000000002d86630, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Desolator::~CDOTA_Item_Desolator(CDOTA_Item_Desolator *const this)
{
  this->_vptr_IHandleEntity = &off_46CE890;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Desolator::~CDOTA_Item_Desolator  (line 40, @0x0000000002d86650, libserver.so)  // inlines: ~CDOTA_Item_Desolator
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Desolator::~CDOTA_Item_Desolator(CDOTA_Item_Desolator *const this)
{
  this->_vptr_IHandleEntity = &off_46CE890;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Desolator::Schema_DynamicBinding  (line 42, @0x0000000002d81ab0, libserver.so)
// globals: CDOTA_Item_Desolator::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Desolator::Schema_DynamicBinding(
        const CDOTA_Item_Desolator *const this)
{
  return CDOTA_Item_Desolator::s_pSchemaBinding;
}


// CDOTA_Item_Desolator::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 42, @0x0000000002d81ac0, libserver.so)
// globals: CDOTA_Item_Desolator::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Desolator::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Desolator::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Desolator::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Desolator::CEntityInstanceEntityClass::DestructInstance  (line 42, @0x0000000002d81ad0, libserver.so)  // inlines: Destruct<CDOTA_Item_Desolator>
void __fastcall CDOTA_Item_Desolator::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Desolator::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Desolator::CEntityInstanceEntityClass::FreeInstance  (line 42, @0x0000000002d81af0, libserver.so)
void __fastcall CDOTA_Item_Desolator::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Desolator::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Desolator::CEntityInstanceEntityClass::CanAllocate  (line 42, @0x0000000002d81b10, libserver.so)
bool __fastcall CDOTA_Item_Desolator::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Desolator::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Desolator::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 42, @0x0000000002d81b20, libserver.so)
// globals: CDOTA_Item_Desolator::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Desolator::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Desolator::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Desolator::s_pSchemaBinding;
}


// CDOTA_Item_Desolator::CEntityInstanceEntityClass::AllocateInstance  (line 42, @0x0000000002d83c30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Desolator::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Desolator::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Desolator::CEntityInstanceEntityClass::ConstructInstance  (line 42, @0x0000000002d85070, libserver.so)  // inlines: CDOTA_Item_Desolator, Construct<CDOTA_Item_Desolator>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Desolator::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Desolator::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46CE890;
  }
  return p;
}


// CDOTA_Item_Desolator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002d88ca0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Desolator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Desolator::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Desolator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002d88cc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Desolator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Desolator::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Desolator::GetEntityClassInternal  (line 42, @0x0000000002d927c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "CDOTA_Item_Desolator"
// globals: `guard variable for'CDOTA_Item_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DesolatorClass, CDOTA_Item_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DesolatorClass, __dso_handle, CDOTA_Item_Desolator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Desolator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DesolatorClassInfo, CDOTA_Item_Desolator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DesolatorClassInfo
CEntityClass *__cdecl CDOTA_Item_Desolator::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DesolatorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DesolatorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DesolatorClass);
    CDOTA_Item_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DesolatorClass._vptr_CEntityClass = off_46CE810;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DesolatorClass);
    __cxa_atexit(
      CDOTA_Item_Desolator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DesolatorClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_DesolatorClass != 0 )
    return &CDOTA_Item_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DesolatorClass;
  if ( `guard variable for'CDOTA_Item_Desolator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DesolatorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Desolator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DesolatorClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Desolator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DesolatorClassInfo,
      "CDOTA_Item_Desolator",
      "item_desolator",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Desolator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DesolatorClassInfo);
  }
  CDOTA_Item_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DesolatorClass.m_pClassInfo = &CDOTA_Item_Desolator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DesolatorClassInfo;
  CDOTA_Item_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DesolatorClass.m_pBaseClassInfo = CDOTA_Item_Desolator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DesolatorClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_DesolatorClass = &CDOTA_Item_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DesolatorClass;
  CDOTA_Item_Desolator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DesolatorClassInfo.m_pClass = &CDOTA_Item_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DesolatorClass;
  CDOTA_Item_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DesolatorClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_DesolatorClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Desolator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DesolatorClass;
}


// CDOTA_Item_Desolator::GetIntrinsicModifierName  (line 45, @0x0000000002d81b30, libserver.so)
// strings: "modifier_item_desolator"
const char *__fastcall CDOTA_Item_Desolator::GetIntrinsicModifierName(CDOTA_Item_Desolator *const this)
{
  return "modifier_item_desolator";
}


// CDOTA_Orb_Desolator::~CDOTA_Orb_Desolator  (line 52, @0x0000000002d81fe0, libserver.so)  // inlines: ~CDOTA_Orb
void __fastcall CDOTA_Orb_Desolator::~CDOTA_Orb_Desolator(CDOTA_Orb_Desolator *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
}


// CDOTA_Orb_Desolator::~CDOTA_Orb_Desolator  (line 52, @0x0000000002d830d0, libserver.so)  // inlines: ~CDOTA_Orb, ~CDOTA_Orb_Desolator
// calls: operator delete
void __fastcall CDOTA_Orb_Desolator::~CDOTA_Orb_Desolator(CDOTA_Orb_Desolator *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
  operator delete(this);
}


// CDOTA_Orb_Desolator::GetProjectileName  (line 62, @0x0000000002d81b40, libserver.so)
// strings: "particles/items_fx/desolator_projectile.vpcf"
const char *__fastcall CDOTA_Orb_Desolator::GetProjectileName(CDOTA_Orb_Desolator *const this)
{
  return "particles/items_fx/desolator_projectile.vpcf";
}


// CDOTA_Orb_Desolator::OnOrbPreImpact  (line 63, @0x0000000002d88fd0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTAAbility, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume, CDOTA_BaseNPC::AddNewModifier, __dynamic_cast
// strings: "modifier_desolator_buff"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Orb_Desolator::OnOrbPreImpact(
        CDOTA_Orb_Desolator *const this,
        const CModifierParams *const params)
{
  int m_iFailType; // eax
  float v5; // xmm1_4
  uint32 m_Index; // eax
  CConcreteEntityList *v7; // r14
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *v14; // rax
  uint32 v15; // ecx
  CDOTABaseAbility *v16; // rdx
  unsigned __int64 v17; // rax
  CEntityIdentity *v18; // rdx
  __int64 v19; // rax
  bool v20; // zf
  CEntityIdentity *v21; // rax
  uint32 v22; // eax
  CBaseEntity *v23; // rsi
  CEntityIdentity *v24; // rcx
  CEntityIdentity *v25; // rcx
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+18h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  m_iFailType = this->m_pRecord->m_iFailType;
  if ( m_iFailType == 6 || m_iFailType == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_desolator_buff");
    KeyValues::SetFloat(&kv, "duration", v5);
    m_Index = params->htarget.m_Index;
    v7 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v9 = &v8[params->htarget.m_Index & 0x1FF]) == 0
      || m_Index != v9->m_EHandle.m_Index
      || (m_pInstance = v9->m_pInstance, v9->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    v11 = params->hattacker.m_Index;
    if ( v11 + 2 > 1 )
    {
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[params->hattacker.m_Index & 0x1FF];
        if ( v13 != 0 && v11 == v13->m_EHandle.m_Index )
        {
          v14 = v13->m_pInstance;
          if ( v13->m_pInstance != 0
            && BYTE3(v14[7]._vptr_IHandleEntity) != 0
            && m_pInstance != 0
            && LOBYTE(v14[71].m_pEntity) == 0 )
          {
            v15 = this->m_hAbility.m_Index;
            v16 = 0;
            if ( v15 + 2 > 1 )
            {
              v17 = this->m_hAbility.m_Index & 0x7FFF;
              v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v17 >> 9)];
              if ( v18 != 0 )
              {
                v19 = v17 & 0x1FF;
                v20 = &v18[v19] == 0;
                v21 = &v18[v19];
                v16 = 0;
                if ( !v20 && v15 == v21->m_EHandle.m_Index && v21->m_pInstance != 0 )
                  v16 = __dynamic_cast(v21->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
              }
              else
              {
                v16 = 0;
              }
            }
            v22 = this->m_hCaster.m_Index;
            v23 = 0;
            if ( v22 + 2 > 1 )
            {
              v24 = v7->m_pIdentityChunks[(LOWORD(this->m_hCaster.m_Index) >> 9) & 0x3F];
              if ( v24 != 0 )
              {
                v25 = &v24[this->m_hCaster.m_Index & 0x1FF];
                if ( v25 != 0 && v22 == v25->m_EHandle.m_Index )
                  v23 = v25->m_pInstance;
              }
            }
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, v23, v16, "modifier_desolator_buff", &kv, 0);
          }
        }
      }
    }
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Item_Desolator::~CDOTA_Modifier_Item_Desolator  (line 91, @0x0000000002d83f60, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Desolator::~CDOTA_Modifier_Item_Desolator(
        CDOTA_Modifier_Item_Desolator *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Desolator::~CDOTA_Modifier_Item_Desolator  (line 91, @0x0000000002d83f80, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Desolator
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Desolator::~CDOTA_Modifier_Item_Desolator(
        CDOTA_Modifier_Item_Desolator *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Desolator::GetOrbPriority  (line 100, @0x0000000002d81b50, libserver.so)
int __fastcall CDOTA_Modifier_Item_Desolator::GetOrbPriority(
        CDOTA_Modifier_Item_Desolator *const this,
        CDOTA_AttackRecord *pRecord)
{
  return 2;
}


// CDOTA_Modifier_Item_Desolator::GetCustomOrb  (line 101, @0x0000000002d87bc0, libserver.so)  // inlines: CDOTA_Orb_Desolator, ~CDOTA_Orb
// calls: KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, operator new, CDOTA_Orb::CDOTA_Orb, KeyValues::GetFloat, KeyValues::~KeyValues, __stack_chk_fail, operator delete, _Unwind_Resume
// strings: "corruption_duration"
CDOTA_Orb *__fastcall CDOTA_Modifier_Item_Desolator::GetCustomOrb(
        CDOTA_Modifier_Item_Desolator *const this,
        CDOTA_AttackRecord *pRecord)
{
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // r14
  CDOTABaseAbility *Ability; // r15
  CDOTA_Orb *v7; // r12
  float v8; // xmm1_4
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "orb");
  KeyValues::SetFloat(&kv, "corruption_duration", v4);
  Caster = CDOTA_Buff::GetCaster(this);
  Ability = CDOTA_Buff::GetAbility(this);
  v7 = operator new(0x20u);
  CDOTA_Orb::CDOTA_Orb(v7, pRecord, &kv, Caster, Ability);
  v7->_vptr_CDOTA_Orb = &off_46CF410;
  LODWORD(v7[1]._vptr_CDOTA_Orb) = KeyValues::GetFloat(&kv, "corruption_duration", v8);
  KeyValues::~KeyValues(&kv);
  return v7;
}


// CDOTA_Modifier_Item_Desolator::OnCreated  (line 123, @0x0000000002d7d720, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "corruption_duration"
void __fastcall CDOTA_Modifier_Item_Desolator::OnCreated(CDOTA_Modifier_Item_Desolator *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->corruption_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "corruption_duration", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->corruption_duration = 0.0;
}


// CDOTA_Modifier_Item_Desolator::DeclareFunctions  (line 131, @0x0000000002d6f4c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Desolator::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_Desolator::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Desolator::DeclareFunctions(CDOTA_Modifier_Item_Desolator *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Desolator::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Item_Desolator::OnAttackLanded;
}


// CDOTA_Modifier_Item_Desolator::GetModifierPreAttack_BonusDamage  (line 139, @0x0000000002d6f500, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Desolator::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Desolator *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Desolator::OnAttackLanded  (line 144, @0x0000000002d73350, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "Item_Desolator.Target"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Desolator::OnAttackLanded(
        CDOTA_Modifier_Item_Desolator *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v11; // rdi
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *v15; // rax

  m_pInstance = 0;
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[params->hattacker.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
  {
    v8 = params->htarget.m_Index;
    if ( v8 + 2 <= 1
      || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v10 = &v9[params->htarget.m_Index & 0x1FF]) == 0
      || v8 != v10->m_EHandle.m_Index
      || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
      || !v11->m_bIsDOTANPC )
    {
      v11 = 0;
    }
    v12 = params->hattacker.m_Index;
    if ( v12 + 2 > 1 )
    {
      v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v13 != 0 )
      {
        v14 = &v13[params->hattacker.m_Index & 0x1FF];
        if ( v14 != 0 && v12 == v14->m_EHandle.m_Index )
        {
          v15 = v14->m_pInstance;
          if ( v14->m_pInstance != 0
            && BYTE3(v15[7]._vptr_IHandleEntity) != 0
            && v11 != 0
            && v11->m_iTeamNum.m_Value != HIBYTE(v15[7].m_CScriptComponent) )
          {
            CDOTA_BaseNPC::UnitEmitSound(v11, "Item_Desolator.Target", 0.0, 0, 0);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Desolator_Corruption::~CDOTA_Modifier_Desolator_Corruption  (line 165, @0x0000000002d845a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Desolator_Corruption::~CDOTA_Modifier_Desolator_Corruption(
        CDOTA_Modifier_Desolator_Corruption *const this)
{
  this->_vptr_CDOTA_Buff = &off_46CF7D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Desolator_Corruption::~CDOTA_Modifier_Desolator_Corruption  (line 165, @0x0000000002d845c0, libserver.so)  // inlines: ~CDOTA_Modifier_Desolator_Corruption
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Desolator_Corruption::~CDOTA_Modifier_Desolator_Corruption(
        CDOTA_Modifier_Desolator_Corruption *const this)
{
  this->_vptr_CDOTA_Buff = &off_46CF7D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Desolator_Corruption::IsDebuff  (line 173, @0x0000000002d81b60, libserver.so)
bool __fastcall CDOTA_Modifier_Desolator_Corruption::IsDebuff(CDOTA_Modifier_Desolator_Corruption *const this)
{
  return 1;
}


// CDOTA_Modifier_Desolator_Corruption::DeclareFunctions  (line 186, @0x0000000002d6f520, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Desolator_Corruption::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Desolator_Corruption::DeclareFunctions(CDOTA_Modifier_Desolator_Corruption *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Desolator_Corruption::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Desolator_Corruption::OnCreated  (line 191, @0x0000000002d7b950, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "corruption_armor"
void __fastcall CDOTA_Modifier_Desolator_Corruption::OnCreated(
        CDOTA_Modifier_Desolator_Corruption *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->corruption_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "corruption_armor", -1, 0);
  else
    this->corruption_armor = 0;
}


// CDOTA_Modifier_Desolator_Corruption::GetModifierPhysicalArmorBonus  (line 196, @0x0000000002d6f540, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Desolator_Corruption::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Desolator_Corruption *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->corruption_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


