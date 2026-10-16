// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_helm_of_the_dominator.cpp:27
class CDOTA_Item_Recipe_HelmOfTheDominator : public CDOTA_Item {
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
	CDOTA_Item_Recipe_HelmOfTheDominator(CDOTA_Item_Recipe_HelmOfTheDominator &);
	CDOTA_Item_Recipe_HelmOfTheDominator(CDOTA_Item_Recipe_HelmOfTheDominator &);
	CDOTA_Item_Recipe_HelmOfTheDominator();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_HelmOfTheDominator();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_helm_of_the_dominator.cpp:39
class CDOTA_Item_HelmOfTheDominator : public CDOTA_Item {
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
	CDOTA_Item_HelmOfTheDominator(CDOTA_Item_HelmOfTheDominator &);
	CDOTA_Item_HelmOfTheDominator(CDOTA_Item_HelmOfTheDominator &);
	CDOTA_Item_HelmOfTheDominator();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual void UpdateOnRemove();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual ~CDOTA_Item_HelmOfTheDominator();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[11] UpdateOnRemove
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_helm_of_the_dominator.cpp:163
class CDOTA_Modifier_Item_HelmOfTheDominator : public CDOTA_Buff_Item {
public:

private:

	int bonus_stats;  // +0xba8
	int attack_speed;  // +0xbac
	int aura_radius;  // +0xbb0
	CDOTA_Modifier_Item_HelmOfTheDominator();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Item_HelmOfTheDominator();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_helm_of_the_dominator.cpp:238
class CDOTA_Modifier_Item_HelmOfTheDominator_Aura : public CDOTA_Buff {
public:

private:

	int hp_regen_aura;  // +0xba8
	int attack_speed_aura;  // +0xbac
	CDOTA_Modifier_Item_HelmOfTheDominator_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_HelmOfTheDominator_Aura();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_helm_of_the_dominator.cpp:294
class CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth : public CDOTA_Buff {
public:

private:

	int health_min;  // +0xba8
	int new_max;  // +0xbac
	int health_bonus;  // +0xbb0
	CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_HelmOfTheDominator::~CDOTA_Item_Recipe_HelmOfTheDominator  (line 27, @0x0000000002dbc4f0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_HelmOfTheDominator::~CDOTA_Item_Recipe_HelmOfTheDominator(
        CDOTA_Item_Recipe_HelmOfTheDominator *const this)
{
  this->_vptr_IHandleEntity = &off_46F85F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_HelmOfTheDominator::~CDOTA_Item_Recipe_HelmOfTheDominator  (line 27, @0x0000000002dbc510, libserver.so)  // inlines: ~CDOTA_Item_Recipe_HelmOfTheDominator
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_HelmOfTheDominator::~CDOTA_Item_Recipe_HelmOfTheDominator(
        CDOTA_Item_Recipe_HelmOfTheDominator *const this)
{
  this->_vptr_IHandleEntity = &off_46F85F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_HelmOfTheDominator::Schema_DynamicBinding  (line 29, @0x0000000002db8470, libserver.so)
// globals: CDOTA_Item_Recipe_HelmOfTheDominator::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_HelmOfTheDominator::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_HelmOfTheDominator *const this)
{
  return CDOTA_Item_Recipe_HelmOfTheDominator::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002db8480, libserver.so)
// globals: CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002db8490, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_HelmOfTheDominator>
void __fastcall CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002db84b0, libserver.so)
void __fastcall CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002db84d0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002db84e0, libserver.so)
// globals: CDOTA_Item_Recipe_HelmOfTheDominator::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_HelmOfTheDominator::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002dba340, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002dbb700, libserver.so)  // inlines: CDOTA_Item_Recipe_HelmOfTheDominator, Construct<CDOTA_Item_Recipe_HelmOfTheDominator>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46F85F0;
  }
  return p;
}


// CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dbe6f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dbe710, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInternal  (line 29, @0x0000000002dc1f50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_recipe_helm_of_the_dominator", "CDOTA_Item_Recipe_HelmOfTheDominator"
// globals: `guard variable for'CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClass, CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClass, __dso_handle, CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClassInfo, CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClass);
    CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClass._vptr_CEntityClass = off_46F8570;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_HelmOfTheDominatorClass != 0 )
    return &CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClass;
  if ( `guard variable for'CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClassInfo,
      "CDOTA_Item_Recipe_HelmOfTheDominator",
      "item_recipe_helm_of_the_dominator",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClassInfo);
  }
  CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClass.m_pClassInfo = &CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClassInfo;
  CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClass.m_pBaseClassInfo = CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_HelmOfTheDominatorClass = &CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClass;
  CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClassInfo.m_pClass = &CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClass;
  CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_HelmOfTheDominatorClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HelmOfTheDominatorClass;
}


// CDOTA_Item_HelmOfTheDominator::~CDOTA_Item_HelmOfTheDominator  (line 39, @0x0000000002dbc540, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_HelmOfTheDominator::~CDOTA_Item_HelmOfTheDominator(
        CDOTA_Item_HelmOfTheDominator *const this)
{
  this->_vptr_IHandleEntity = &off_46F91F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_HelmOfTheDominator::~CDOTA_Item_HelmOfTheDominator  (line 39, @0x0000000002dbc560, libserver.so)  // inlines: ~CDOTA_Item_HelmOfTheDominator
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_HelmOfTheDominator::~CDOTA_Item_HelmOfTheDominator(
        CDOTA_Item_HelmOfTheDominator *const this)
{
  this->_vptr_IHandleEntity = &off_46F91F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_HelmOfTheDominator::Schema_DynamicBinding  (line 41, @0x0000000002db84f0, libserver.so)
// globals: CDOTA_Item_HelmOfTheDominator::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_HelmOfTheDominator::Schema_DynamicBinding(
        const CDOTA_Item_HelmOfTheDominator *const this)
{
  return CDOTA_Item_HelmOfTheDominator::s_pSchemaBinding;
}


// CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002db8500, libserver.so)
// globals: CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002db8510, libserver.so)  // inlines: Destruct<CDOTA_Item_HelmOfTheDominator>
void __fastcall CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002db8530, libserver.so)
void __fastcall CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002db8550, libserver.so)
bool __fastcall CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002db8560, libserver.so)
// globals: CDOTA_Item_HelmOfTheDominator::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_HelmOfTheDominator::s_pSchemaBinding;
}


// CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002dba380, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002dbb730, libserver.so)  // inlines: CDOTA_Item_HelmOfTheDominator, Construct<CDOTA_Item_HelmOfTheDominator>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46F91F0;
  }
  return p;
}


// CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002dbe740, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002dbe760, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_HelmOfTheDominator::GetEntityClassInternal  (line 41, @0x0000000002dc20a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_helm_of_the_dominator", "CDOTA_Item_HelmOfTheDominator"
// globals: `guard variable for'CDOTA_Item_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClass, CDOTA_Item_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClass, __dso_handle, CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_HelmOfTheDominator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClassInfo, CDOTA_Item_HelmOfTheDominator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClassInfo
CEntityClass *__cdecl CDOTA_Item_HelmOfTheDominator::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClass);
    CDOTA_Item_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClass._vptr_CEntityClass = off_46F9170;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClass);
    __cxa_atexit(
      CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_HelmOfTheDominatorClass != 0 )
    return &CDOTA_Item_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClass;
  if ( `guard variable for'CDOTA_Item_HelmOfTheDominator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_HelmOfTheDominator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_HelmOfTheDominator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClassInfo,
      "CDOTA_Item_HelmOfTheDominator",
      "item_helm_of_the_dominator",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_HelmOfTheDominator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClassInfo);
  }
  CDOTA_Item_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClass.m_pClassInfo = &CDOTA_Item_HelmOfTheDominator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClassInfo;
  CDOTA_Item_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClass.m_pBaseClassInfo = CDOTA_Item_HelmOfTheDominator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_HelmOfTheDominatorClass = &CDOTA_Item_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClass;
  CDOTA_Item_HelmOfTheDominator::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClassInfo.m_pClass = &CDOTA_Item_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClass;
  CDOTA_Item_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_HelmOfTheDominatorClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_HelmOfTheDominator::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfTheDominatorClass;
}


// CDOTA_Item_HelmOfTheDominator::GetIntrinsicModifierName  (line 43, @0x0000000002db8570, libserver.so)
// strings: "modifier_item_helm_of_the_dominator"
const char *__fastcall CDOTA_Item_HelmOfTheDominator::GetIntrinsicModifierName(
        CDOTA_Item_HelmOfTheDominator *const this)
{
  return "modifier_item_helm_of_the_dominator";
}


// CDOTA_Item_HelmOfTheDominator::CastFilterResult  (line 57, @0x0000000002daba70, libserver.so)
// calls: CDOTABaseAbility::GetCaster, UnitFilter
int __fastcall CDOTA_Item_HelmOfTheDominator::CastFilterResult(
        CDOTA_Item_HelmOfTheDominator *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int result; // eax

  Caster = CDOTABaseAbility::GetCaster(this);
  result = UnitFilter(pTarget, 2, 2, 528, Caster->m_iTeamNum.m_Value);
  if ( result == 0 )
    return !pTarget->m_bCanBeDominated.m_Value ? 0x17 : 0;
  return result;
}


// CDOTA_Item_HelmOfTheDominator::GetCustomCastError  (line 71, @0x0000000002daa9a0, libserver.so)
// strings: "#dota_hud_error_cannot_dominate"
const char *__fastcall CDOTA_Item_HelmOfTheDominator::GetCustomCastError(
        CDOTA_Item_HelmOfTheDominator *const this,
        CDOTA_BaseNPC *pTarget)
{
  const char *result; // rax

  result = "#dota_hud_error_cannot_dominate";
  if ( pTarget->m_bCanBeDominated.m_Value )
    return "";
  return result;
}


// CDOTA_Item_HelmOfTheDominator::OnSpellStart  (line 81, @0x0000000002db3910, libserver.so)  // inlines: CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetLevelSpecialValueFor<int>, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, SetBaseMoveSpeed, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=<int>, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::ForceKill, Purge, CDOTA_BaseNPC::Interrupt, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::ResetPlayerControls, CDOTA_BaseNPC::SetControllableByPlayer, KeyValues::KeyValues (18 total)
// strings: "modifier_item_helm_of_the_dominator_bonushealth", "speed_base", "modifier_kill", "modifier_dominated", "DOTA_Item.HotD.Activate"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_HelmOfTheDominator::OnSpellStart(CDOTA_Item_HelmOfTheDominator *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v6; // rax
  __int64 v7; // r12
  int v8; // ebx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  __int64 v15; // r14
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rbx
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  unsigned __int16 v20; // cx
  int v21; // esi
  int v22; // eax
  CEntityIdentity *v23; // rcx
  CEntityIdentity *v24; // rdx
  CDOTA_BaseNPC *v25; // rax
  int LevelSpecialValue; // r12d
  CDOTA_BaseNPC *v27; // r14
  int v28; // eax
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *pTarget; // [rsp+20h] [rbp-B0h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+98h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  pTarget = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    Caster = CDOTABaseAbility::GetCaster(this);
    v4 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
    v6 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v6->m_iTeamNum.m_Value, AbsOrigin, Caster, -1.0, &entities, 1, 2, &stru_40440, 0, 0);
    if ( entities.m_Size > 0 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        while ( 1 )
        {
          v9 = &entities.m_Memory.m_pMemory[v7];
          m_Index = entities.m_Memory.m_pMemory[v7].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v11 = v9->m_Index;
            v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
            if ( v12 != 0 )
            {
              v13 = &v12[v11 & 0x1FF];
              if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
              {
                m_pInstance = v13->m_pInstance;
                if ( v13->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                {
                  v15 = (*(m_pInstance->_vptr_IHandleEntity + 413))(v13->m_pInstance);
                  v16 = CDOTABaseAbility::GetCaster(this);
                  if ( v15 == (*(v16->_vptr_IHandleEntity + 413))(v16)
                    && CDOTA_BaseNPC::FindModifierByName(
                         m_pInstance,
                         "modifier_item_helm_of_the_dominator_bonushealth",
                         0) != 0 )
                  {
                    break;
                  }
                }
              }
            }
          }
          ++v8;
          ++v7;
          if ( entities.m_Size <= v8 )
            goto LABEL_15;
        }
        CDOTA_BaseNPC::ForceKill(m_pInstance, 0);
        ++v8;
        ++v7;
      }
      while ( entities.m_Size > v8 );
    }
LABEL_15:
    Purge(pTarget, this, 6);
    CDOTA_BaseNPC::Interrupt(pTarget);
    v17 = CDOTABaseAbility::GetCaster(this);
    v18 = CDOTABaseAbility::GetCaster(this);
    if ( v18 != 0 && (v18->m_iUnitType & 1) != 0 )
      goto LABEL_27;
    v19 = CDOTABaseAbility::GetCaster(this);
    if ( v19->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v20 = 0x7FFF;
      v21 = 0x7FFF;
    }
    else
    {
      v20 = v19->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v21 = v20;
    }
    v22 = (v19->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v20 & 0x7FFF;
    if ( (v22 + 2) > 1
      && (v23 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v21 >> 9]) != 0
      && (v24 = &v23[v21 & 0x1FF]) != 0
      && v22 == v24->m_EHandle.m_Index
      && (v25 = v24->m_pInstance, v24->m_pInstance != 0)
      && v25->m_bIsDOTANPC
      && (v25->m_iUnitType & 1) != 0 )
    {
      v17 = v24->m_pInstance;
    }
    else
    {
LABEL_27:
      if ( v17 == 0 )
      {
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
        return;
      }
    }
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed_base", -1, 0);
    if ( LevelSpecialValue != pTarget->m_iMoveSpeed.m_Value )
    {
      (*(pTarget->_vptr_IHandleEntity + 22))(pTarget, 2280, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pTarget->m_iMoveSpeed.m_Value = LevelSpecialValue;
    }
    v27 = pTarget;
    (*(pTarget->_vptr_IHandleEntity + 70))(pTarget, v17->m_iTeamNum.m_Value);
    CDOTA_BaseNPC::ResetPlayerControls(pTarget);
    v28 = (*(v17->_vptr_IHandleEntity + 414))(v17);
    CDOTA_BaseNPC::SetControllableByPlayer(pTarget, v28, 0);
    (*(v27->_vptr_IHandleEntity + 40))(v27, v17);
    (*(v27->_vptr_IHandleEntity + 389))(v27);
    KeyValues::KeyValues(&kv, "modifier_kill");
    v29 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(pTarget, v29, this, "modifier_dominated", &kv, 0);
    KeyValues::KeyValues(&kv2, "modifier_item_helm_of_the_dominator_bonushealth");
    v30 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(pTarget, v30, this, "modifier_item_helm_of_the_dominator_bonushealth", &kv2, 0);
    DOTA_EmitSound(10, "DOTA_Item.HotD.Activate", pTarget);
    KeyValues::~KeyValues(&kv2);
    KeyValues::~KeyValues(&kv);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Item_HelmOfTheDominator::UpdateOnRemove  (line 141, @0x0000000002db2720, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::ForceKill, CDOTA_Item::UpdateOnRemove, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "modifier_item_helm_of_the_dominator_bonushealth"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_HelmOfTheDominator::UpdateOnRemove(CDOTA_Item_HelmOfTheDominator *const this)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v3; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v5; // rax
  __int64 v6; // r12
  int v7; // ebx
  CHandle<CBaseEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  __int64 v14; // r14
  CDOTA_BaseNPC *v15; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-50h] BYREF

  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
  v5 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v5->m_iTeamNum.m_Value, AbsOrigin, Caster, -1.0, &entities, 1, 2, &stru_40440, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v8 = &entities.m_Memory.m_pMemory[v6];
        m_Index = entities.m_Memory.m_pMemory[v6].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v10 = v8->m_Index;
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[v10 & 0x1FF];
            if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
            {
              m_pInstance = v12->m_pInstance;
              if ( v12->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                v14 = (*(m_pInstance->_vptr_IHandleEntity + 413))(v12->m_pInstance);
                v15 = CDOTABaseAbility::GetCaster(this);
                if ( v14 == (*(v15->_vptr_IHandleEntity + 413))(v15)
                  && CDOTA_BaseNPC::FindModifierByName(
                       m_pInstance,
                       "modifier_item_helm_of_the_dominator_bonushealth",
                       0) != 0 )
                {
                  break;
                }
              }
            }
          }
        }
        ++v7;
        ++v6;
        if ( entities.m_Size <= v7 )
          goto LABEL_13;
      }
      CDOTA_BaseNPC::ForceKill(m_pInstance, 0);
      ++v7;
      ++v6;
    }
    while ( entities.m_Size > v7 );
  }
LABEL_13:
  CDOTA_Item::UpdateOnRemove(this);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Item_HelmOfTheDominator::~CDOTA_Modifier_Item_HelmOfTheDominator  (line 163, @0x0000000002dbb0f0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_HelmOfTheDominator::~CDOTA_Modifier_Item_HelmOfTheDominator(
        CDOTA_Modifier_Item_HelmOfTheDominator *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_HelmOfTheDominator::~CDOTA_Modifier_Item_HelmOfTheDominator  (line 163, @0x0000000002dbb110, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_HelmOfTheDominator
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_HelmOfTheDominator::~CDOTA_Modifier_Item_HelmOfTheDominator(
        CDOTA_Modifier_Item_HelmOfTheDominator *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_HelmOfTheDominator::IsAura  (line 176, @0x0000000002db8580, libserver.so)
bool __fastcall CDOTA_Modifier_Item_HelmOfTheDominator::IsAura(CDOTA_Modifier_Item_HelmOfTheDominator *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_HelmOfTheDominator::GetModifierAura  (line 177, @0x0000000002db8590, libserver.so)
// strings: "modifier_item_helm_of_the_dominator_aura"
const char *__fastcall CDOTA_Modifier_Item_HelmOfTheDominator::GetModifierAura(
        CDOTA_Modifier_Item_HelmOfTheDominator *const this)
{
  return "modifier_item_helm_of_the_dominator_aura";
}


// CDOTA_Modifier_Item_HelmOfTheDominator::GetAuraSearchTeam  (line 179, @0x0000000002db85a0, libserver.so)
int __fastcall CDOTA_Modifier_Item_HelmOfTheDominator::GetAuraSearchTeam(
        CDOTA_Modifier_Item_HelmOfTheDominator *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_HelmOfTheDominator::GetAuraSearchType  (line 180, @0x0000000002db85b0, libserver.so)
int __fastcall CDOTA_Modifier_Item_HelmOfTheDominator::GetAuraSearchType(
        CDOTA_Modifier_Item_HelmOfTheDominator *const this)
{
  return 19;
}


// CDOTA_Modifier_Item_HelmOfTheDominator::GetAuraRadius  (line 181, @0x0000000002db85c0, libserver.so)
int __fastcall CDOTA_Modifier_Item_HelmOfTheDominator::GetAuraRadius(
        CDOTA_Modifier_Item_HelmOfTheDominator *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_Item_HelmOfTheDominator::OnCreated  (line 194, @0x0000000002db4f80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_stats"
void __fastcall CDOTA_Modifier_Item_HelmOfTheDominator::OnCreated(
        CDOTA_Modifier_Item_HelmOfTheDominator *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_stats = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_stats", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->attack_speed = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_stats = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "attack_speed", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "aura_radius", -1, 0);
    return;
  }
LABEL_7:
  this->aura_radius = 0;
}


// CDOTA_Modifier_Item_HelmOfTheDominator::DeclareFunctions  (line 203, @0x0000000002daa9c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_HelmOfTheDominator::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_HelmOfTheDominator::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_HelmOfTheDominator::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_HelmOfTheDominator::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_HelmOfTheDominator::DeclareFunctions(
        CDOTA_Modifier_Item_HelmOfTheDominator *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_HelmOfTheDominator::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_HelmOfTheDominator::GetModifierBonusStats_Agility;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_HelmOfTheDominator::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_HelmOfTheDominator::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Item_HelmOfTheDominator::GetModifierBonusStats_Strength  (line 211, @0x0000000002daaa30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_HelmOfTheDominator::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_HelmOfTheDominator *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_HelmOfTheDominator::GetModifierBonusStats_Agility  (line 216, @0x0000000002daaa50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_HelmOfTheDominator::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_HelmOfTheDominator *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_HelmOfTheDominator::GetModifierBonusStats_Intellect  (line 221, @0x0000000002daaa70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_HelmOfTheDominator::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_HelmOfTheDominator *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_HelmOfTheDominator::GetModifierAttackSpeedBonus_Constant  (line 226, @0x0000000002daaa90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_HelmOfTheDominator::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_HelmOfTheDominator *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_HelmOfTheDominator_Aura::~CDOTA_Modifier_Item_HelmOfTheDominator_Aura  (line 238, @0x0000000002dbb5e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_HelmOfTheDominator_Aura::~CDOTA_Modifier_Item_HelmOfTheDominator_Aura(
        CDOTA_Modifier_Item_HelmOfTheDominator_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_46FA0D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_HelmOfTheDominator_Aura::~CDOTA_Modifier_Item_HelmOfTheDominator_Aura  (line 238, @0x0000000002dbb600, libserver.so)  // inlines: ~CDOTA_Modifier_Item_HelmOfTheDominator_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_HelmOfTheDominator_Aura::~CDOTA_Modifier_Item_HelmOfTheDominator_Aura(
        CDOTA_Modifier_Item_HelmOfTheDominator_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_46FA0D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_HelmOfTheDominator_Aura::OnCreated  (line 259, @0x0000000002db4770, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "hp_regen_aura", "attack_speed_aura"
void __fastcall CDOTA_Modifier_Item_HelmOfTheDominator_Aura::OnCreated(
        CDOTA_Modifier_Item_HelmOfTheDominator_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->hp_regen_aura = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "hp_regen_aura", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->attack_speed_aura = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "attack_speed_aura", -1, 0);
      return;
    }
  }
  else
  {
    this->hp_regen_aura = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->attack_speed_aura = 0;
}


// CDOTA_Modifier_Item_HelmOfTheDominator_Aura::DeclareFunctions  (line 267, @0x0000000002daaab0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_HelmOfTheDominator_Aura::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Item_HelmOfTheDominator_Aura::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_HelmOfTheDominator_Aura::DeclareFunctions(
        CDOTA_Modifier_Item_HelmOfTheDominator_Aura *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_HelmOfTheDominator_Aura::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_HelmOfTheDominator_Aura::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_Item_HelmOfTheDominator_Aura::GetModifierConstantHealthRegen  (line 275, @0x0000000002daaaf0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_HelmOfTheDominator_Aura::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_HelmOfTheDominator_Aura *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->hp_regen_aura;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_HelmOfTheDominator_Aura::GetModifierAttackSpeedBonus_Constant  (line 282, @0x0000000002daab10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_HelmOfTheDominator_Aura::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_HelmOfTheDominator_Aura *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->attack_speed_aura;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth::~CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth  (line 294, @0x0000000002dbb590, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth::~CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth(
        CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth *const this)
{
  this->_vptr_CDOTA_Buff = &off_46FA3F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth::~CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth  (line 294, @0x0000000002dbb5b0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth::~CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth(
        CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth *const this)
{
  this->_vptr_CDOTA_Buff = &off_46FA3F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth::IsHidden  (line 300, @0x0000000002db85d0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth::IsHidden(
        CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth::IsPurgable  (line 302, @0x0000000002db85e0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth::IsPurgable(
        CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth::OnCreated  (line 318, @0x0000000002db5050, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, SetBaseMaxHealth
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::Heal
// strings: "health_min"
void __fastcall CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth::OnCreated(
        CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  int v5; // eax
  int health_min; // edx
  int v7; // r12d
  CDOTA_BaseNPC *v8; // rax
  int v9; // eax
  __m128i v10; // xmm1
  CDOTABaseAbility *v11; // r12
  CDOTA_BaseNPC *v12; // rax
  float health_bonus; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->health_min = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "health_min", -1, 0);
  else
    this->health_min = 0;
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) == 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    v5 = (*(Parent->_vptr_IHandleEntity + 156))(Parent);
    health_min = this->health_min;
    if ( v5 >= health_min )
      health_min = v5;
    this->new_max = health_min;
    v7 = health_min;
    v8 = CDOTA_Buff::GetParent(this);
    v9 = (*(v8->_vptr_IHandleEntity + 156))(v8);
    *v10.m128i_i32 = this->new_max;
    this->health_bonus = v7 - v9;
    LODWORD(CDOTA_Buff::GetParent(this)->m_flBaseMaxHealth) = _mm_cvtsi128_si32(v10);
    v11 = CDOTA_Buff::GetAbility(this);
    health_bonus = this->health_bonus;
    v12 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::Heal(v12, health_bonus, v11, 0, 1);
  }
}


// CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth::DeclareFunctions  (line 334, @0x0000000002daab30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth::GetModifierHealthBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth::DeclareFunctions(
        CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth *const this)
{
  this->m_Functions[58].__pfn = CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth::GetModifierHealthBonus;
  this->m_Functions[58].__delta = 0;
}


// CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth::GetModifierHealthBonus  (line 341, @0x0000000002daab50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth::GetModifierHealthBonus(
        CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->health_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


