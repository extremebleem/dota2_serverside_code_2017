// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_satanic.cpp:27
class CDOTA_Item_Recipe_Satanic : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Satanic(CDOTA_Item_Recipe_Satanic &);
	CDOTA_Item_Recipe_Satanic(CDOTA_Item_Recipe_Satanic &);
	CDOTA_Item_Recipe_Satanic();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Satanic();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_satanic.cpp:39
class CDOTA_Item_Satanic : public CDOTA_Item {
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
	CDOTA_Item_Satanic(CDOTA_Item_Satanic &);
	CDOTA_Item_Satanic(CDOTA_Item_Satanic &);
	CDOTA_Item_Satanic();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_Satanic();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_satanic.cpp:72
class CDOTA_Orb_Satanic : public CDOTA_Orb {
public:

private:

	int lifesteal_percent;  // +0x18
	CDOTA_Orb_Satanic(CDOTA_Orb_Satanic &);
	CDOTA_Orb_Satanic(const CDOTA_Orb_Satanic &);
	CDOTA_Orb_Satanic(CDOTA_AttackRecord *, KeyValues *, CDOTA_BaseNPC *, CDOTABaseAbility *);
	virtual const char * GetProjectileName();
	virtual int GetOrbLabel();
	virtual void OnOrbImpact(const CModifierParams &);
	virtual ~CDOTA_Orb_Satanic();

	// vtable[3] GetProjectileName
	// vtable[4] GetOrbLabel
	// vtable[8] OnOrbImpact
	// sizeof = 32
};

// src/game/shared/dota/items/dota_item_satanic.cpp:117
class CDOTA_Modifier_Item_Satanic : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	int bonus_strength;  // +0xbac
	int lifesteal_percent;  // +0xbb0
	int unholy_lifesteal_percent;  // +0xbb4
	CDOTA_Modifier_Item_Satanic();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual bool IsPurgable();
	virtual int GetOrbPriority(CDOTA_AttackRecord *);
	virtual int GetOrbLabel(CDOTA_AttackRecord *);
	virtual CDOTA_Orb * GetCustomOrb(CDOTA_AttackRecord *);
	virtual ~CDOTA_Modifier_Item_Satanic();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[50] GetOrbPriority
	// vtable[51] GetOrbLabel
	// vtable[49] GetCustomOrb
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_satanic.cpp:203
class CDOTA_Modifier_Item_Satanic_Unholy : public CDOTA_Buff {
public:

	CDOTA_Modifier_Item_Satanic_Unholy(CDOTA_Modifier_Item_Satanic_Unholy &);
	CDOTA_Modifier_Item_Satanic_Unholy(const CDOTA_Modifier_Item_Satanic_Unholy &);
	CDOTA_Modifier_Item_Satanic_Unholy();
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Item_Satanic_Unholy();

	// vtable[67] GetEffectName
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Satanic::~CDOTA_Item_Recipe_Satanic  (line 27, @0x0000000002df37d0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Satanic::~CDOTA_Item_Recipe_Satanic(CDOTA_Item_Recipe_Satanic *const this)
{
  this->_vptr_IHandleEntity = &off_475DBF0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Satanic::~CDOTA_Item_Recipe_Satanic  (line 27, @0x0000000002df37f0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Satanic
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Satanic::~CDOTA_Item_Recipe_Satanic(CDOTA_Item_Recipe_Satanic *const this)
{
  this->_vptr_IHandleEntity = &off_475DBF0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Satanic::Schema_DynamicBinding  (line 29, @0x0000000002def780, libserver.so)
// globals: CDOTA_Item_Recipe_Satanic::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Satanic::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Satanic *const this)
{
  return CDOTA_Item_Recipe_Satanic::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002def790, libserver.so)
// globals: CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002def7a0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Satanic>
void __fastcall CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002def7c0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002def7e0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002def7f0, libserver.so)
// globals: CDOTA_Item_Recipe_Satanic::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Satanic::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002df1200, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002df2360, libserver.so)  // inlines: CDOTA_Item_Recipe_Satanic, Construct<CDOTA_Item_Recipe_Satanic>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_475DBF0;
  }
  return p;
}


// CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002df59e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002df5a00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Satanic::GetEntityClassInternal  (line 29, @0x0000000002dfd1d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "item_recipe_satanic", "CDOTA_Item_Recipe_Satanic"
// globals: `guard variable for'CDOTA_Item_Recipe_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SatanicClass, CDOTA_Item_Recipe_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SatanicClass, __dso_handle, CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Satanic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SatanicClassInfo, CDOTA_Item_Recipe_Satanic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SatanicClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Satanic::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SatanicClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SatanicClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SatanicClass);
    CDOTA_Item_Recipe_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SatanicClass._vptr_CEntityClass = off_475DB70;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SatanicClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SatanicClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_SatanicClass != 0 )
    return &CDOTA_Item_Recipe_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SatanicClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Satanic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SatanicClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Satanic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SatanicClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Satanic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SatanicClassInfo,
      "CDOTA_Item_Recipe_Satanic",
      "item_recipe_satanic",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Satanic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SatanicClassInfo);
  }
  CDOTA_Item_Recipe_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SatanicClass.m_pClassInfo = &CDOTA_Item_Recipe_Satanic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SatanicClassInfo;
  CDOTA_Item_Recipe_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SatanicClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Satanic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SatanicClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_SatanicClass = &CDOTA_Item_Recipe_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SatanicClass;
  CDOTA_Item_Recipe_Satanic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SatanicClassInfo.m_pClass = &CDOTA_Item_Recipe_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SatanicClass;
  CDOTA_Item_Recipe_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SatanicClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_SatanicClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SatanicClass;
}


// CDOTA_Item_Satanic::~CDOTA_Item_Satanic  (line 39, @0x0000000002df3820, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Satanic::~CDOTA_Item_Satanic(CDOTA_Item_Satanic *const this)
{
  this->_vptr_IHandleEntity = &off_475E7F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Satanic::~CDOTA_Item_Satanic  (line 39, @0x0000000002df3840, libserver.so)  // inlines: ~CDOTA_Item_Satanic
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Satanic::~CDOTA_Item_Satanic(CDOTA_Item_Satanic *const this)
{
  this->_vptr_IHandleEntity = &off_475E7F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Satanic::Schema_DynamicBinding  (line 41, @0x0000000002def800, libserver.so)
// globals: CDOTA_Item_Satanic::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Satanic::Schema_DynamicBinding(
        const CDOTA_Item_Satanic *const this)
{
  return CDOTA_Item_Satanic::s_pSchemaBinding;
}


// CDOTA_Item_Satanic::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002def810, libserver.so)
// globals: CDOTA_Item_Satanic::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Satanic::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Satanic::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Satanic::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Satanic::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002def820, libserver.so)  // inlines: Destruct<CDOTA_Item_Satanic>
void __fastcall CDOTA_Item_Satanic::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Satanic::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Satanic::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002def840, libserver.so)
void __fastcall CDOTA_Item_Satanic::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Satanic::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Satanic::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002def860, libserver.so)
bool __fastcall CDOTA_Item_Satanic::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Satanic::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Satanic::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002def870, libserver.so)
// globals: CDOTA_Item_Satanic::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Satanic::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Satanic::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Satanic::s_pSchemaBinding;
}


// CDOTA_Item_Satanic::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002df1240, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Satanic::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Satanic::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Satanic::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002df2390, libserver.so)  // inlines: CDOTA_Item_Satanic, Construct<CDOTA_Item_Satanic>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Satanic::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Satanic::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_475E7F0;
  }
  return p;
}


// CDOTA_Item_Satanic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002df5a30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Satanic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Satanic::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Satanic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002df5a50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Satanic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Satanic::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Satanic::GetEntityClassInternal  (line 41, @0x0000000002dfd320, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "CDOTA_Item_Satanic"
// globals: `guard variable for'CDOTA_Item_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SatanicClass, CDOTA_Item_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SatanicClass, __dso_handle, CDOTA_Item_Satanic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Satanic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SatanicClassInfo, CDOTA_Item_Satanic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SatanicClassInfo
CEntityClass *__cdecl CDOTA_Item_Satanic::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SatanicClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SatanicClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SatanicClass);
    CDOTA_Item_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SatanicClass._vptr_CEntityClass = off_475E770;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SatanicClass);
    __cxa_atexit(
      CDOTA_Item_Satanic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SatanicClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_SatanicClass != 0 )
    return &CDOTA_Item_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SatanicClass;
  if ( `guard variable for'CDOTA_Item_Satanic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SatanicClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Satanic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SatanicClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Satanic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SatanicClassInfo,
      "CDOTA_Item_Satanic",
      "item_satanic",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Satanic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SatanicClassInfo);
  }
  CDOTA_Item_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SatanicClass.m_pClassInfo = &CDOTA_Item_Satanic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SatanicClassInfo;
  CDOTA_Item_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SatanicClass.m_pBaseClassInfo = CDOTA_Item_Satanic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SatanicClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_SatanicClass = &CDOTA_Item_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SatanicClass;
  CDOTA_Item_Satanic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SatanicClassInfo.m_pClass = &CDOTA_Item_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SatanicClass;
  CDOTA_Item_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SatanicClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_SatanicClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Satanic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SatanicClass;
}


// CDOTA_Item_Satanic::GetIntrinsicModifierName  (line 44, @0x0000000002def880, libserver.so)
// strings: "modifier_item_satanic"
const char *__fastcall CDOTA_Item_Satanic::GetIntrinsicModifierName(CDOTA_Item_Satanic *const this)
{
  return "modifier_item_satanic";
}


// CDOTA_Item_Satanic::OnSpellStart  (line 51, @0x0000000002ded410, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "unholy_duration", "modifier_item_satanic_unholy", "DOTA_Item.Satanic.Activate"
void __fastcall CDOTA_Item_Satanic::OnSpellStart(CDOTA_Item_Satanic *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "unholy_duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_item_satanic_unholy");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_item_satanic_unholy", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "DOTA_Item.Satanic.Activate", v5);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Orb_Satanic::~CDOTA_Orb_Satanic  (line 72, @0x0000000002deff30, libserver.so)  // inlines: ~CDOTA_Orb
void __fastcall CDOTA_Orb_Satanic::~CDOTA_Orb_Satanic(CDOTA_Orb_Satanic *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
}


// CDOTA_Orb_Satanic::~CDOTA_Orb_Satanic  (line 72, @0x0000000002df0b20, libserver.so)  // inlines: ~CDOTA_Orb, ~CDOTA_Orb_Satanic
// calls: operator delete
void __fastcall CDOTA_Orb_Satanic::~CDOTA_Orb_Satanic(CDOTA_Orb_Satanic *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
  operator delete(this);
}


// CDOTA_Orb_Satanic::GetProjectileName  (line 82, @0x0000000002def890, libserver.so)
const char *__fastcall CDOTA_Orb_Satanic::GetProjectileName(CDOTA_Orb_Satanic *const this)
{
  return 0;
}


// CDOTA_Orb_Satanic::GetOrbLabel  (line 84, @0x0000000002def8a0, libserver.so)
int __fastcall CDOTA_Orb_Satanic::GetOrbLabel(CDOTA_Orb_Satanic *const this)
{
  return 2;
}


// CDOTA_Orb_Satanic::OnOrbImpact  (line 86, @0x0000000002df8ce0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::Heal
// strings: "particles/generic_gameplay/generic_lifesteal.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Orb_Satanic::OnOrbImpact(CDOTA_Orb_Satanic *const this, const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  const CBaseEntity *v11; // r14
  float Health; // xmm0_4
  uint32 v13; // eax
  int lifesteal_percent; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v17; // rax
  CBaseEntity *v18; // rax
  float flDamagea; // [rsp+Ch] [rbp-34h]
  float flDamage; // [rsp+Ch] [rbp-34h]

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v8 = params->htarget.m_Index;
  if ( v8 + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[params->htarget.m_Index & 0x1FF];
      if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
      {
        v11 = v10->m_pInstance;
        if ( v10->m_pInstance != 0 && v11->m_bIsDOTANPC && m_pInstance != 0 )
        {
          flDamagea = params->fDamage;
          if ( CBaseEntity::GetHealth(v10->m_pInstance) <= flDamagea )
            Health = CBaseEntity::GetHealth(v11);
          else
            Health = params->fDamage;
          v13 = v11[2].m_hEffectEntity.m_Value.m_Index;
          lifesteal_percent = this->lifesteal_percent;
          if ( (v13 & 0x10) == 0 && (v13 & 0x193) != 0 && m_pInstance->m_iTeamNum.m_Value != v11->m_iTeamNum.m_Value )
          {
            flDamage = Health;
            ParticleManager = GetParticleManager();
            Particle = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/generic_gameplay/generic_lifesteal.vpcf",
                         1,
                         m_pInstance,
                         0,
                         0);
            v17 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v17, Particle);
            if ( LOBYTE(v11[4].m_pfnMoveDone.__delta) == 0 && !m_pInstance->m_bIsIllusion.m_Value )
            {
              v18 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
              CDOTA_BaseNPC::Heal(m_pInstance, ((lifesteal_percent * flDamage) / 100.0), v18, 1, 1);
            }
          }
        }
      }
    }
  }
}


// CDOTA_Modifier_Item_Satanic::~CDOTA_Modifier_Item_Satanic  (line 117, @0x0000000002df16a0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Satanic::~CDOTA_Modifier_Item_Satanic(CDOTA_Modifier_Item_Satanic *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Satanic::~CDOTA_Modifier_Item_Satanic  (line 117, @0x0000000002df16c0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Satanic
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Satanic::~CDOTA_Modifier_Item_Satanic(CDOTA_Modifier_Item_Satanic *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Satanic::IsPurgable  (line 130, @0x0000000002def8b0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Satanic::IsPurgable(CDOTA_Modifier_Item_Satanic *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Satanic::GetOrbPriority  (line 131, @0x0000000002def8c0, libserver.so)
int __fastcall CDOTA_Modifier_Item_Satanic::GetOrbPriority(
        CDOTA_Modifier_Item_Satanic *const this,
        CDOTA_AttackRecord *pRecord)
{
  return 2;
}


// CDOTA_Modifier_Item_Satanic::GetOrbLabel  (line 133, @0x0000000002def8d0, libserver.so)
int __fastcall CDOTA_Modifier_Item_Satanic::GetOrbLabel(
        CDOTA_Modifier_Item_Satanic *const this,
        CDOTA_AttackRecord *pRecord)
{
  return 2;
}


// CDOTA_Modifier_Item_Satanic::OnCreated  (line 150, @0x0000000002decc70, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
// strings: "unholy_lifesteal_percent"
void __fastcall CDOTA_Modifier_Item_Satanic::OnCreated(CDOTA_Modifier_Item_Satanic *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_damage, "bonus_damage");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_strength, "bonus_strength");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->lifesteal_percent, "lifesteal_percent");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->unholy_lifesteal_percent, "unholy_lifesteal_percent");
}


// CDOTA_Modifier_Item_Satanic::DeclareFunctions  (line 161, @0x0000000002de4350, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Satanic::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_Satanic::GetModifierBonusStats_Strength(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Satanic::DeclareFunctions(CDOTA_Modifier_Item_Satanic *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Satanic::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Satanic::GetModifierBonusStats_Strength;
}


// CDOTA_Modifier_Item_Satanic::GetModifierPreAttack_BonusDamage  (line 169, @0x0000000002de4390, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Satanic::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Satanic *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Satanic::GetModifierBonusStats_Strength  (line 176, @0x0000000002de43b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Satanic::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Satanic *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Satanic::GetCustomOrb  (line 183, @0x0000000002de6e70, libserver.so)  // inlines: CDOTA_Orb_Satanic, ~CDOTA_Orb
// calls: KeyValues::KeyValues, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, KeyValues::SetInt, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, operator new, CDOTA_Orb::CDOTA_Orb, KeyValues::GetInt, KeyValues::~KeyValues, __stack_chk_fail, operator delete (13 total)
// strings: "modifier_item_mask_of_death_orb", "modifier_item_satanic_unholy"
CDOTA_Orb *__fastcall CDOTA_Modifier_Item_Satanic::GetCustomOrb(
        CDOTA_Modifier_Item_Satanic *const this,
        CDOTA_AttackRecord *pRecord)
{
  int lifesteal_percent; // r13d
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *Caster; // r13
  CDOTABaseAbility *Ability; // r15
  CDOTA_Orb *v8; // r12
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_item_mask_of_death_orb");
  lifesteal_percent = this->lifesteal_percent;
  Parent = CDOTA_Buff::GetParent(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_item_satanic_unholy", 0) != 0 )
    lifesteal_percent += this->unholy_lifesteal_percent;
  KeyValues::SetInt(&kv, "lifesteal_percent", lifesteal_percent);
  Caster = CDOTA_Buff::GetCaster(this);
  Ability = CDOTA_Buff::GetAbility(this);
  v8 = operator new(0x20u);
  CDOTA_Orb::CDOTA_Orb(v8, pRecord, &kv, Caster, Ability);
  v8->_vptr_CDOTA_Orb = &off_475F370;
  LODWORD(v8[1]._vptr_CDOTA_Orb) = KeyValues::GetInt(&kv, "lifesteal_percent", 0);
  KeyValues::~KeyValues(&kv);
  return v8;
}


// CDOTA_Modifier_Item_Satanic_Unholy::~CDOTA_Modifier_Item_Satanic_Unholy  (line 203, @0x0000000002df1f50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Satanic_Unholy::~CDOTA_Modifier_Item_Satanic_Unholy(
        CDOTA_Modifier_Item_Satanic_Unholy *const this)
{
  this->_vptr_CDOTA_Buff = &off_475F6F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Satanic_Unholy::~CDOTA_Modifier_Item_Satanic_Unholy  (line 203, @0x0000000002df1f70, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Satanic_Unholy
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Satanic_Unholy::~CDOTA_Modifier_Item_Satanic_Unholy(
        CDOTA_Modifier_Item_Satanic_Unholy *const this)
{
  this->_vptr_CDOTA_Buff = &off_475F6F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Satanic_Unholy::GetEffectName  (line 208, @0x0000000002def8e0, libserver.so)
// strings: "particles/items2_fx/satanic_buff.vpcf"
const char *__fastcall CDOTA_Modifier_Item_Satanic_Unholy::GetEffectName(
        CDOTA_Modifier_Item_Satanic_Unholy *const this)
{
  return "particles/items2_fx/satanic_buff.vpcf";
}


