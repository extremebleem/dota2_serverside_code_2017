// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_mekansm.cpp:27
class CDOTA_Item_Recipe_Mekansm : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Mekansm(CDOTA_Item_Recipe_Mekansm &);
	CDOTA_Item_Recipe_Mekansm(CDOTA_Item_Recipe_Mekansm &);
	CDOTA_Item_Recipe_Mekansm();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Mekansm();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_mekansm.cpp:39
class CDOTA_Item_Mekansm : public CDOTA_Item {
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
	CDOTA_Item_Mekansm(CDOTA_Item_Mekansm &);
	CDOTA_Item_Mekansm(CDOTA_Item_Mekansm &);
	CDOTA_Item_Mekansm();
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
	virtual ~CDOTA_Item_Mekansm();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_mekansm.cpp:54
class C_CDOTA_Item_Mekansm_MapInstall {
	C_CDOTA_Item_Mekansm_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_mekansm.cpp:116
class CDOTA_Modifier_Item_Mekansm : public CDOTA_Buff_Item {
public:

private:

	int aura_radius;  // +0xba8
	int bonus_all_stats;  // +0xbac
	int bonus_armor;  // +0xbb0
	CDOTA_Modifier_Item_Mekansm();
	virtual void OnCreated(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Mekansm();

	// vtable[57] OnCreated
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_mekansm.cpp:197
class CDOTA_Modifier_Item_Mekansm_Aura : public CDOTA_Buff {
public:

private:

	int aura_health_regen;  // +0xba8
	CDOTA_Modifier_Item_Mekansm_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Mekansm_Aura();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_mekansm.cpp:239
class CDOTA_Modifier_Item_Mekansm_Spell : public CDOTA_Buff {
public:

private:

	int heal_bonus_armor;  // +0xba8
	CDOTA_Modifier_Item_Mekansm_Spell();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonusUniqueActive(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Mekansm_Spell();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_mekansm.cpp:286
class CDOTA_Modifier_Item_Mekansm_Noheal : public CDOTA_Buff {
public:

	CDOTA_Modifier_Item_Mekansm_Noheal(CDOTA_Modifier_Item_Mekansm_Noheal &);
	CDOTA_Modifier_Item_Mekansm_Noheal(const CDOTA_Modifier_Item_Mekansm_Noheal &);
	CDOTA_Modifier_Item_Mekansm_Noheal();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Item_Mekansm_Noheal();

	// vtable[14] IsPurgable
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Mekansm::~CDOTA_Item_Recipe_Mekansm  (line 27, @0x0000000002dbce00, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Mekansm::~CDOTA_Item_Recipe_Mekansm(CDOTA_Item_Recipe_Mekansm *const this)
{
  this->_vptr_IHandleEntity = &off_4717230;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Mekansm::~CDOTA_Item_Recipe_Mekansm  (line 27, @0x0000000002dbce20, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Mekansm
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Mekansm::~CDOTA_Item_Recipe_Mekansm(CDOTA_Item_Recipe_Mekansm *const this)
{
  this->_vptr_IHandleEntity = &off_4717230;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Mekansm::Schema_DynamicBinding  (line 29, @0x0000000002db9730, libserver.so)
// globals: CDOTA_Item_Recipe_Mekansm::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Mekansm::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Mekansm *const this)
{
  return CDOTA_Item_Recipe_Mekansm::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002db9740, libserver.so)
// globals: CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002db9750, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Mekansm>
void __fastcall CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002db9770, libserver.so)
void __fastcall CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002db9790, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002db97a0, libserver.so)
// globals: CDOTA_Item_Recipe_Mekansm::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Mekansm::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002dbaa80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002dbbc70, libserver.so)  // inlines: CDOTA_Item_Recipe_Mekansm, Construct<CDOTA_Item_Recipe_Mekansm>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4717230;
  }
  return p;
}


// CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dbf000, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dbf020, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Mekansm::GetEntityClassInternal  (line 29, @0x0000000002dc6600, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_recipe_mekansm", "CDOTA_Item_Recipe_Mekansm"
// globals: `guard variable for'CDOTA_Item_Recipe_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MekansmClass, CDOTA_Item_Recipe_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MekansmClass, __dso_handle, CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Mekansm::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MekansmClassInfo, CDOTA_Item_Recipe_Mekansm::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MekansmClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Mekansm::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MekansmClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MekansmClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MekansmClass);
    CDOTA_Item_Recipe_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MekansmClass._vptr_CEntityClass = off_47171B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MekansmClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MekansmClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_MekansmClass != 0 )
    return &CDOTA_Item_Recipe_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MekansmClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Mekansm::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MekansmClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Mekansm::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MekansmClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Mekansm::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MekansmClassInfo,
      "CDOTA_Item_Recipe_Mekansm",
      "item_recipe_mekansm",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Mekansm::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MekansmClassInfo);
  }
  CDOTA_Item_Recipe_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MekansmClass.m_pClassInfo = &CDOTA_Item_Recipe_Mekansm::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MekansmClassInfo;
  CDOTA_Item_Recipe_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MekansmClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Mekansm::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MekansmClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_MekansmClass = &CDOTA_Item_Recipe_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MekansmClass;
  CDOTA_Item_Recipe_Mekansm::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MekansmClassInfo.m_pClass = &CDOTA_Item_Recipe_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MekansmClass;
  CDOTA_Item_Recipe_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MekansmClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_MekansmClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MekansmClass;
}


// CDOTA_Item_Mekansm::~CDOTA_Item_Mekansm  (line 39, @0x0000000002dbce50, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Mekansm::~CDOTA_Item_Mekansm(CDOTA_Item_Mekansm *const this)
{
  this->_vptr_IHandleEntity = &off_4717E30;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Mekansm::~CDOTA_Item_Mekansm  (line 39, @0x0000000002dbce70, libserver.so)  // inlines: ~CDOTA_Item_Mekansm
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Mekansm::~CDOTA_Item_Mekansm(CDOTA_Item_Mekansm *const this)
{
  this->_vptr_IHandleEntity = &off_4717E30;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Mekansm::Schema_DynamicBinding  (line 41, @0x0000000002db97b0, libserver.so)
// globals: CDOTA_Item_Mekansm::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Mekansm::Schema_DynamicBinding(
        const CDOTA_Item_Mekansm *const this)
{
  return CDOTA_Item_Mekansm::s_pSchemaBinding;
}


// CDOTA_Item_Mekansm::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002db97c0, libserver.so)
// globals: CDOTA_Item_Mekansm::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Mekansm::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Mekansm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Mekansm::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Mekansm::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002db97d0, libserver.so)  // inlines: Destruct<CDOTA_Item_Mekansm>
void __fastcall CDOTA_Item_Mekansm::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Mekansm::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Mekansm::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002db97f0, libserver.so)
void __fastcall CDOTA_Item_Mekansm::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Mekansm::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Mekansm::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002db9810, libserver.so)
bool __fastcall CDOTA_Item_Mekansm::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Mekansm::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Mekansm::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002db9820, libserver.so)
// globals: CDOTA_Item_Mekansm::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Mekansm::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Mekansm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Mekansm::s_pSchemaBinding;
}


// CDOTA_Item_Mekansm::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002dbaac0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Mekansm::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Mekansm::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Mekansm::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002dbbca0, libserver.so)  // inlines: CDOTA_Item_Mekansm, Construct<CDOTA_Item_Mekansm>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Mekansm::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Mekansm::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4717E30;
  }
  return p;
}


// CDOTA_Item_Mekansm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002dbf050, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Mekansm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Mekansm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Mekansm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002dbf070, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Mekansm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Mekansm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Mekansm::GetEntityClassInternal  (line 41, @0x0000000002dc6750, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "CDOTA_Item_Mekansm"
// globals: `guard variable for'CDOTA_Item_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MekansmClass, CDOTA_Item_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MekansmClass, __dso_handle, CDOTA_Item_Mekansm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Mekansm::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MekansmClassInfo, CDOTA_Item_Mekansm::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MekansmClassInfo
CEntityClass *__cdecl CDOTA_Item_Mekansm::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MekansmClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MekansmClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MekansmClass);
    CDOTA_Item_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MekansmClass._vptr_CEntityClass = off_4717DB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MekansmClass);
    __cxa_atexit(
      CDOTA_Item_Mekansm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MekansmClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_MekansmClass != 0 )
    return &CDOTA_Item_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MekansmClass;
  if ( `guard variable for'CDOTA_Item_Mekansm::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MekansmClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Mekansm::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MekansmClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Mekansm::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MekansmClassInfo,
      "CDOTA_Item_Mekansm",
      "item_mekansm",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Mekansm::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MekansmClassInfo);
  }
  CDOTA_Item_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MekansmClass.m_pClassInfo = &CDOTA_Item_Mekansm::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MekansmClassInfo;
  CDOTA_Item_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MekansmClass.m_pBaseClassInfo = CDOTA_Item_Mekansm::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MekansmClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_MekansmClass = &CDOTA_Item_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MekansmClass;
  CDOTA_Item_Mekansm::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MekansmClassInfo.m_pClass = &CDOTA_Item_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MekansmClass;
  CDOTA_Item_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MekansmClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_MekansmClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Mekansm::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MekansmClass;
}


// CDOTA_Item_Mekansm::GetIntrinsicModifierName  (line 45, @0x0000000002db9830, libserver.so)
// strings: "modifier_item_mekansm"
const char *__fastcall CDOTA_Item_Mekansm::GetIntrinsicModifierName(CDOTA_Item_Mekansm *const this)
{
  return "modifier_item_mekansm";
}


// CDOTA_Item_Mekansm::YouForgotToImplementOrDeclareServerClass  (line 54, @0x0000000002dab880, libserver.so)
int __fastcall CDOTA_Item_Mekansm::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Mekansm *const this)
{
  return 0;
}


// CDOTA_Item_Mekansm::GetServerClass  (line 54, @0x0000000002daec30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Mekansm::GetServerClass(CDOTA_Item_Mekansm *const this)
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


// CDOTA_Item_Mekansm::OnSpellStart  (line 63, @0x0000000002db6340, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FindModifierByName, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, CDOTA_BaseNPC::AddNewModifier, GetParticleManager (22 total)
// strings: "heal_radius", "heal_armor_duration", "modifier_item_mekansm_spell", "modifier_item_mekansm_noheal", "particles/items2_fx/mekanism.vpcf", "DOTA_Item.Mekansm.Activate" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_Mekansm::OnSpellStart(CDOTA_Item_Mekansm *const this)
{
  int LevelSpecialValue; // ebx
  float v3; // xmm1_4
  __m128i v4; // xmm1
  float v5; // ebx
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v9; // rax
  __int64 v10; // rbx
  CHandle<CBaseEntity> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CModifieractoryDictionary *v17; // rax
  IModifierFactory *Factory; // rax
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTAPlayer *v27; // rax
  CDOTAPlayer *v28; // rax
  int heal_amount; // [rsp+2Ch] [rbp-74h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+68h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "heal_radius", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "heal_armor_duration", -1, 0);
  heal_amount = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "heal_amount", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_item_mekansm_spell");
  KeyValues::SetFloat(&kv, "duration", v3);
  *v4.m128i_i32 = LevelSpecialValue;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  Caster = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  v9 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v9->m_iTeamNum.m_Value, AbsOrigin, Caster, v5, &entities, 1, 19, &stru_40050, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v10 = 0;
    do
    {
      while ( 1 )
      {
        v11 = &entities.m_Memory.m_pMemory[v10];
        m_Index = v11->m_Index;
        if ( v11->m_Index + 2 > 1 )
        {
          v13 = v11->m_Index;
          v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F];
          if ( v14 != 0 )
          {
            v15 = &v14[v13 & 0x1FF];
            if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
            {
              m_pInstance = v15->m_pInstance;
              if ( v15->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        if ( entities.m_Size <= ++v10 )
          goto LABEL_12;
      }
      v17 = ModifierFactoryDictionary();
      Factory = CModifieractoryDictionary::FindFactory(v17, "modifier_item_mekansm_noheal");
      if ( CDOTA_ModifierManager::FindModifierByName(
             &m_pInstance->m_ModifierManager,
             Factory,
             "modifier_item_mekansm_noheal",
             0) == 0 )
      {
        CDOTA_BaseNPC::Heal(m_pInstance, heal_amount, this, 0, 1);
        v25 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v25, this, "modifier_item_mekansm_noheal", &kv, 0);
        v26 = CDOTABaseAbility::GetCaster(this);
        v27 = (*(v26->_vptr_IHandleEntity + 413))(v26);
        SendOverheadEventMessage(v27, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, m_pInstance, heal_amount, 0);
        if ( CDOTABaseAbility::GetCaster(this) != m_pInstance )
        {
          v28 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
          SendOverheadEventMessage(v28, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, m_pInstance, heal_amount, 0);
          DOTA_EmitSound(10, "DOTA_Item.Mekansm.Target", m_pInstance);
        }
      }
      v19 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v19, this, "modifier_item_mekansm_spell", &kv, 0);
      ++v10;
    }
    while ( entities.m_Size > v10 );
  }
LABEL_12:
  v20 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v20) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/items2_fx/mekanism.vpcf",
                   1,
                   v20,
                   0,
                   0);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v22, v20);
  v23 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "DOTA_Item.Mekansm.Activate", v23);
  v24 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::InterruptChannel(v24);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Item_Mekansm::~CDOTA_Modifier_Item_Mekansm  (line 116, @0x0000000002dbaba0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Mekansm::~CDOTA_Modifier_Item_Mekansm(CDOTA_Modifier_Item_Mekansm *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Mekansm::~CDOTA_Modifier_Item_Mekansm  (line 116, @0x0000000002dbabc0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Mekansm
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Mekansm::~CDOTA_Modifier_Item_Mekansm(CDOTA_Modifier_Item_Mekansm *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Mekansm::IsAura  (line 123, @0x0000000002db9840, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Mekansm::IsAura(CDOTA_Modifier_Item_Mekansm *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Mekansm::GetModifierAura  (line 124, @0x0000000002db9850, libserver.so)
// strings: "modifier_item_mekansm_aura"
const char *__fastcall CDOTA_Modifier_Item_Mekansm::GetModifierAura(CDOTA_Modifier_Item_Mekansm *const this)
{
  return "modifier_item_mekansm_aura";
}


// CDOTA_Modifier_Item_Mekansm::GetAuraSearchTeam  (line 126, @0x0000000002db9860, libserver.so)
int __fastcall CDOTA_Modifier_Item_Mekansm::GetAuraSearchTeam(CDOTA_Modifier_Item_Mekansm *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Mekansm::GetAuraSearchType  (line 127, @0x0000000002db9870, libserver.so)
int __fastcall CDOTA_Modifier_Item_Mekansm::GetAuraSearchType(CDOTA_Modifier_Item_Mekansm *const this)
{
  return 19;
}


// CDOTA_Modifier_Item_Mekansm::GetAuraRadius  (line 128, @0x0000000002db9880, libserver.so)
int __fastcall CDOTA_Modifier_Item_Mekansm::GetAuraRadius(CDOTA_Modifier_Item_Mekansm *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_Item_Mekansm::OnCreated  (line 148, @0x0000000002db4b70, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_all_stats"
void __fastcall CDOTA_Modifier_Item_Mekansm::OnCreated(CDOTA_Modifier_Item_Mekansm *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_all_stats = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->aura_radius = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_all_stats = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_all_stats", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_armor", -1, 0);
    return;
  }
LABEL_7:
  this->bonus_armor = 0;
}


// CDOTA_Modifier_Item_Mekansm::DeclareFunctions  (line 157, @0x0000000002dab890, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Mekansm::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_Mekansm::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_Mekansm::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_Mekansm::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Mekansm::DeclareFunctions(CDOTA_Modifier_Item_Mekansm *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Mekansm::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_Mekansm::GetModifierBonusStats_Agility;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Mekansm::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_Mekansm::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Item_Mekansm::GetModifierBonusStats_Strength  (line 167, @0x0000000002dab900, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Mekansm::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Mekansm *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Mekansm::GetModifierBonusStats_Agility  (line 174, @0x0000000002dab920, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Mekansm::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_Mekansm *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Mekansm::GetModifierBonusStats_Intellect  (line 181, @0x0000000002dab940, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Mekansm::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Mekansm *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Mekansm::GetModifierPhysicalArmorBonus  (line 188, @0x0000000002dab960, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Mekansm::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Mekansm *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Mekansm_Aura::~CDOTA_Modifier_Item_Mekansm_Aura  (line 197, @0x0000000002dbab50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Mekansm_Aura::~CDOTA_Modifier_Item_Mekansm_Aura(
        CDOTA_Modifier_Item_Mekansm_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4718D10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Mekansm_Aura::~CDOTA_Modifier_Item_Mekansm_Aura  (line 197, @0x0000000002dbab70, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Mekansm_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Mekansm_Aura::~CDOTA_Modifier_Item_Mekansm_Aura(
        CDOTA_Modifier_Item_Mekansm_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4718D10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Mekansm_Aura::OnCreated  (line 216, @0x0000000002db4470, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "aura_health_regen"
void __fastcall CDOTA_Modifier_Item_Mekansm_Aura::OnCreated(
        CDOTA_Modifier_Item_Mekansm_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_health_regen", -1, 0);
  else
    this->aura_health_regen = 0;
}


// CDOTA_Modifier_Item_Mekansm_Aura::DeclareFunctions  (line 223, @0x0000000002dab980, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Mekansm_Aura::GetModifierConstantHealthRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Mekansm_Aura::DeclareFunctions(CDOTA_Modifier_Item_Mekansm_Aura *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_Mekansm_Aura::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
}


// CDOTA_Modifier_Item_Mekansm_Aura::GetModifierConstantHealthRegen  (line 230, @0x0000000002dab9a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Mekansm_Aura::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Mekansm_Aura *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->aura_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Mekansm_Spell::~CDOTA_Modifier_Item_Mekansm_Spell  (line 239, @0x0000000002dbab00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Mekansm_Spell::~CDOTA_Modifier_Item_Mekansm_Spell(
        CDOTA_Modifier_Item_Mekansm_Spell *const this)
{
  this->_vptr_CDOTA_Buff = &off_4719030;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Mekansm_Spell::~CDOTA_Modifier_Item_Mekansm_Spell  (line 239, @0x0000000002dbab20, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Mekansm_Spell
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Mekansm_Spell::~CDOTA_Modifier_Item_Mekansm_Spell(
        CDOTA_Modifier_Item_Mekansm_Spell *const this)
{
  this->_vptr_CDOTA_Buff = &off_4719030;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Mekansm_Spell::OnCreated  (line 258, @0x0000000002db45f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "heal_bonus_armor"
void __fastcall CDOTA_Modifier_Item_Mekansm_Spell::OnCreated(
        CDOTA_Modifier_Item_Mekansm_Spell *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->heal_bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "heal_bonus_armor", -1, 0);
  else
    this->heal_bonus_armor = 0;
}


// CDOTA_Modifier_Item_Mekansm_Spell::DeclareFunctions  (line 270, @0x0000000002dab9c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Mekansm_Spell::GetModifierPhysicalArmorBonusUniqueActive(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Mekansm_Spell::DeclareFunctions(CDOTA_Modifier_Item_Mekansm_Spell *const this)
{
  this->m_Functions[47].__pfn = CDOTA_Modifier_Item_Mekansm_Spell::GetModifierPhysicalArmorBonusUniqueActive;
  this->m_Functions[47].__delta = 0;
}


// CDOTA_Modifier_Item_Mekansm_Spell::GetModifierPhysicalArmorBonusUniqueActive  (line 277, @0x0000000002dab9e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Mekansm_Spell::GetModifierPhysicalArmorBonusUniqueActive(
        CDOTA_Modifier_Item_Mekansm_Spell *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->heal_bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Mekansm_Noheal::~CDOTA_Modifier_Item_Mekansm_Noheal  (line 286, @0x0000000002dbb630, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Mekansm_Noheal::~CDOTA_Modifier_Item_Mekansm_Noheal(
        CDOTA_Modifier_Item_Mekansm_Noheal *const this)
{
  this->_vptr_CDOTA_Buff = &off_4719310;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Mekansm_Noheal::~CDOTA_Modifier_Item_Mekansm_Noheal  (line 286, @0x0000000002dbb650, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Mekansm_Noheal
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Mekansm_Noheal::~CDOTA_Modifier_Item_Mekansm_Noheal(
        CDOTA_Modifier_Item_Mekansm_Noheal *const this)
{
  this->_vptr_CDOTA_Buff = &off_4719310;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Mekansm_Noheal::IsPurgable  (line 291, @0x0000000002db9890, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Mekansm_Noheal::IsPurgable(CDOTA_Modifier_Item_Mekansm_Noheal *const this)
{
  return 0;
}


