// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_guardian_greaves.cpp:24
class CDOTA_Item_Recipe_Guardian_Greaves : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Guardian_Greaves(CDOTA_Item_Recipe_Guardian_Greaves &);
	CDOTA_Item_Recipe_Guardian_Greaves(CDOTA_Item_Recipe_Guardian_Greaves &);
	CDOTA_Item_Recipe_Guardian_Greaves();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Item_Recipe_Guardian_Greaves();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_guardian_greaves.cpp:31
class C_CDOTA_Item_Recipe_Guardian_Greaves_MapInstall {
	C_CDOTA_Item_Recipe_Guardian_Greaves_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_guardian_greaves.cpp:42
class CDOTA_Item_Guardian_Greaves : public CDOTA_Item {
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
	CDOTA_Item_Guardian_Greaves(CDOTA_Item_Guardian_Greaves &);
	CDOTA_Item_Guardian_Greaves(CDOTA_Item_Guardian_Greaves &);
	CDOTA_Item_Guardian_Greaves();
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
	virtual ~CDOTA_Item_Guardian_Greaves();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_guardian_greaves.cpp:57
class C_CDOTA_Item_Guardian_Greaves_MapInstall {
	C_CDOTA_Item_Guardian_Greaves_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_guardian_greaves.cpp:131
class CDOTA_Modifier_Item_Guardian_Greaves : public CDOTA_Buff_Item {
public:

private:

	int bonus_movement;  // +0xba8
	int bonus_mana;  // +0xbac
	int bonus_all_stats;  // +0xbb0
	int bonus_armor;  // +0xbb4
	int aura_radius;  // +0xbb8
	CDOTA_Modifier_Item_Guardian_Greaves();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Special_Boots(const CModifierParams &);
	ModifierVariant_t GetModifierManaBonus(const CModifierParams &);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Item_Guardian_Greaves();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// sizeof = 3008
};

// src/game/shared/dota/items/dota_item_guardian_greaves.cpp:219
class CDOTA_Modifier_Item_Guardian_Greaves_Aura : public CDOTA_Buff {
public:

private:

	int aura_health_regen;  // +0xba8
	int aura_armor;  // +0xbac
	int aura_health_regen_bonus;  // +0xbb0
	int aura_armor_bonus;  // +0xbb4
	int aura_bonus_threshold;  // +0xbb8
	CDOTA_Modifier_Item_Guardian_Greaves_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Guardian_Greaves_Aura();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Guardian_Greaves::~CDOTA_Item_Recipe_Guardian_Greaves  (line 24, @0x0000000002da1f40, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Guardian_Greaves::~CDOTA_Item_Recipe_Guardian_Greaves(
        CDOTA_Item_Recipe_Guardian_Greaves *const this)
{
  this->_vptr_IHandleEntity = &off_46EBAB0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Guardian_Greaves::~CDOTA_Item_Recipe_Guardian_Greaves  (line 24, @0x0000000002da1f60, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Guardian_Greaves
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Guardian_Greaves::~CDOTA_Item_Recipe_Guardian_Greaves(
        CDOTA_Item_Recipe_Guardian_Greaves *const this)
{
  this->_vptr_IHandleEntity = &off_46EBAB0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Guardian_Greaves::Schema_DynamicBinding  (line 26, @0x0000000002d9f480, libserver.so)
// globals: CDOTA_Item_Recipe_Guardian_Greaves::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Guardian_Greaves::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Guardian_Greaves *const this)
{
  return CDOTA_Item_Recipe_Guardian_Greaves::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 26, @0x0000000002d9f490, libserver.so)
// globals: CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::DestructInstance  (line 26, @0x0000000002d9f4a0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Guardian_Greaves>
void __fastcall CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::FreeInstance  (line 26, @0x0000000002d9f4c0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::CanAllocate  (line 26, @0x0000000002d9f4e0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 26, @0x0000000002d9f4f0, libserver.so)
// globals: CDOTA_Item_Recipe_Guardian_Greaves::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Guardian_Greaves::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::AllocateInstance  (line 26, @0x0000000002da0830, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::ConstructInstance  (line 26, @0x0000000002da1760, libserver.so)  // inlines: CDOTA_Item_Recipe_Guardian_Greaves, Construct<CDOTA_Item_Recipe_Guardian_Greaves>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46EBAB0;
  }
  return p;
}


// CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 26, @0x0000000002da3ea0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 26, @0x0000000002da3ec0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInternal  (line 26, @0x0000000002da90c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "item_recipe_guardian_greaves", "CDOTA_Item_Recipe_Guardian_Greaves"
// globals: `guard variable for'CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClass, CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClass, __dso_handle, CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClassInfo, CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClass);
    CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClass._vptr_CEntityClass = off_46EBA30;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Guardian_GreavesClass != 0 )
    return &CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClassInfo,
      "CDOTA_Item_Recipe_Guardian_Greaves",
      "item_recipe_guardian_greaves",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClassInfo);
  }
  CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClass.m_pClassInfo = &CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClassInfo;
  CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Guardian_GreavesClass = &CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClass;
  CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClassInfo.m_pClass = &CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClass;
  CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Guardian_GreavesClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Guardian_GreavesClass;
}


// CDOTA_Item_Recipe_Guardian_Greaves::YouForgotToImplementOrDeclareServerClass  (line 31, @0x0000000002d94400, libserver.so)
int __fastcall CDOTA_Item_Recipe_Guardian_Greaves::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_Recipe_Guardian_Greaves *const this)
{
  return 0;
}


// CDOTA_Item_Recipe_Guardian_Greaves::GetServerClass  (line 31, @0x0000000002d97bd0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Recipe_Guardian_Greaves::GetServerClass(
        CDOTA_Item_Recipe_Guardian_Greaves *const this)
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


// CDOTA_Item_Guardian_Greaves::~CDOTA_Item_Guardian_Greaves  (line 42, @0x0000000002da1f90, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Guardian_Greaves::~CDOTA_Item_Guardian_Greaves(CDOTA_Item_Guardian_Greaves *const this)
{
  this->_vptr_IHandleEntity = &off_46EC6B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Guardian_Greaves::~CDOTA_Item_Guardian_Greaves  (line 42, @0x0000000002da1fb0, libserver.so)  // inlines: ~CDOTA_Item_Guardian_Greaves
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Guardian_Greaves::~CDOTA_Item_Guardian_Greaves(CDOTA_Item_Guardian_Greaves *const this)
{
  this->_vptr_IHandleEntity = &off_46EC6B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Guardian_Greaves::Schema_DynamicBinding  (line 44, @0x0000000002d9f500, libserver.so)
// globals: CDOTA_Item_Guardian_Greaves::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Guardian_Greaves::Schema_DynamicBinding(
        const CDOTA_Item_Guardian_Greaves *const this)
{
  return CDOTA_Item_Guardian_Greaves::s_pSchemaBinding;
}


// CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 44, @0x0000000002d9f510, libserver.so)
// globals: CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::DestructInstance  (line 44, @0x0000000002d9f520, libserver.so)  // inlines: Destruct<CDOTA_Item_Guardian_Greaves>
void __fastcall CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::FreeInstance  (line 44, @0x0000000002d9f540, libserver.so)
void __fastcall CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::CanAllocate  (line 44, @0x0000000002d9f560, libserver.so)
bool __fastcall CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 44, @0x0000000002d9f570, libserver.so)
// globals: CDOTA_Item_Guardian_Greaves::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Guardian_Greaves::s_pSchemaBinding;
}


// CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::AllocateInstance  (line 44, @0x0000000002da0870, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::ConstructInstance  (line 44, @0x0000000002da1790, libserver.so)  // inlines: CDOTA_Item_Guardian_Greaves, Construct<CDOTA_Item_Guardian_Greaves>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46EC6B0;
  }
  return p;
}


// CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002da3ef0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002da3f10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Guardian_Greaves::GetEntityClassInternal  (line 44, @0x0000000002da9210, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "item_guardian_greaves", "CDOTA_Item_Guardian_Greaves"
// globals: `guard variable for'CDOTA_Item_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Guardian_GreavesClass, CDOTA_Item_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Guardian_GreavesClass, __dso_handle, CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Guardian_Greaves::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Guardian_GreavesClassInfo, CDOTA_Item_Guardian_Greaves::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Guardian_GreavesClassInfo
CEntityClass *__cdecl CDOTA_Item_Guardian_Greaves::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Guardian_GreavesClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Guardian_GreavesClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Guardian_GreavesClass);
    CDOTA_Item_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Guardian_GreavesClass._vptr_CEntityClass = off_46EC630;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Guardian_GreavesClass);
    __cxa_atexit(
      CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Guardian_GreavesClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Guardian_GreavesClass != 0 )
    return &CDOTA_Item_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Guardian_GreavesClass;
  if ( `guard variable for'CDOTA_Item_Guardian_Greaves::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Guardian_GreavesClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Guardian_Greaves::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Guardian_GreavesClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Guardian_Greaves::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Guardian_GreavesClassInfo,
      "CDOTA_Item_Guardian_Greaves",
      "item_guardian_greaves",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Guardian_Greaves::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Guardian_GreavesClassInfo);
  }
  CDOTA_Item_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Guardian_GreavesClass.m_pClassInfo = &CDOTA_Item_Guardian_Greaves::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Guardian_GreavesClassInfo;
  CDOTA_Item_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Guardian_GreavesClass.m_pBaseClassInfo = CDOTA_Item_Guardian_Greaves::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Guardian_GreavesClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Guardian_GreavesClass = &CDOTA_Item_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Guardian_GreavesClass;
  CDOTA_Item_Guardian_Greaves::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Guardian_GreavesClassInfo.m_pClass = &CDOTA_Item_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Guardian_GreavesClass;
  CDOTA_Item_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Guardian_GreavesClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Guardian_GreavesClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Guardian_Greaves::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Guardian_GreavesClass;
}


// CDOTA_Item_Guardian_Greaves::GetIntrinsicModifierName  (line 48, @0x0000000002d9f580, libserver.so)
// strings: "modifier_item_guardian_greaves"
const char *__fastcall CDOTA_Item_Guardian_Greaves::GetIntrinsicModifierName(CDOTA_Item_Guardian_Greaves *const this)
{
  return "modifier_item_guardian_greaves";
}


// CDOTA_Item_Guardian_Greaves::YouForgotToImplementOrDeclareServerClass  (line 57, @0x0000000002d94410, libserver.so)
int __fastcall CDOTA_Item_Guardian_Greaves::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_Guardian_Greaves *const this)
{
  return 0;
}


// CDOTA_Item_Guardian_Greaves::GetServerClass  (line 57, @0x0000000002d97c10, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Guardian_Greaves::GetServerClass(CDOTA_Item_Guardian_Greaves *const this)
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


// CDOTA_Item_Guardian_Greaves::OnSpellStart  (line 65, @0x0000000002d9e000, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FindModifierByName, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::GiveMana, SendOverheadEventMessage, DOTA_EmitSound, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory (23 total)
// strings: "replenish_health", "replenish_mana", "replenish_radius", "modifier_item_mekansm_noheal", "Item.GuardianGreaves.Target", "particles/items3_fx/warmage_recipient.vpcf" (9 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_Guardian_Greaves::OnSpellStart(CDOTA_Item_Guardian_Greaves *const this)
{
  int LevelSpecialValue; // r12d
  float v3; // xmm1_4
  __m128i v4; // xmm1
  float v5; // r12d
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v9; // rax
  __int64 v10; // r13
  int v11; // r12d
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *m_pInstance; // rbx
  CDOTA_BaseNPC *v18; // rax
  CDOTAPlayer *v19; // rax
  CDOTAPlayer *v20; // rax
  CModifieractoryDictionary *v21; // rax
  IModifierFactory *Factory; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  int v26; // r15d
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  CDOTAPlayer *v29; // rax
  CDOTAPlayer *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC *v32; // rbx
  CDOTA_ParticleManager *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  CDOTA_ParticleManager *v36; // rax
  float replenish_health; // [rsp+28h] [rbp-78h]
  float replenish_mana; // [rsp+2Ch] [rbp-74h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v41; // [rsp+68h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  replenish_health = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "replenish_health", -1, 0);
  replenish_mana = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "replenish_mana", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "replenish_radius", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_item_mekansm_noheal");
  (*(this->_vptr_IHandleEntity + 244))(this, 0xFFFFFFFFLL);
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
  FindUnitsInRadius(v9->m_iTeamNum.m_Value, AbsOrigin, Caster, v5, &entities, 1, 19, 262208, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      while ( 1 )
      {
        v12 = &entities.m_Memory.m_pMemory[v10];
        m_Index = entities.m_Memory.m_pMemory[v10].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v14 = v12->m_Index;
          v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
          if ( v15 != 0 )
          {
            v16 = &v15[v14 & 0x1FF];
            if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
            {
              m_pInstance = v16->m_pInstance;
              if ( v16->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
              {
                CDOTA_BaseNPC::GiveMana(m_pInstance, replenish_mana, this, 1);
                v18 = CDOTABaseAbility::GetCaster(this);
                v19 = (*(v18->_vptr_IHandleEntity + 413))(v18);
                SendOverheadEventMessage(
                  v19,
                  DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MANA_ADD,
                  m_pInstance,
                  replenish_mana,
                  0);
                if ( CDOTABaseAbility::GetCaster(this) != m_pInstance )
                {
                  v20 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
                  SendOverheadEventMessage(
                    v20,
                    DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MANA_ADD,
                    m_pInstance,
                    replenish_mana,
                    0);
                  DOTA_EmitSound(10, "Item.GuardianGreaves.Target", m_pInstance);
                }
                v21 = ModifierFactoryDictionary();
                Factory = CModifieractoryDictionary::FindFactory(v21, "modifier_item_mekansm_noheal");
                if ( CDOTA_ModifierManager::FindModifierByName(
                       &m_pInstance[64].m_worldGroupId,
                       Factory,
                       "modifier_item_mekansm_noheal",
                       0) == 0 )
                {
                  v23 = CDOTABaseAbility::GetCaster(this);
                  CDOTA_BaseNPC::AddNewModifier(m_pInstance, v23, this, "modifier_item_mekansm_noheal", &kv, 0);
                  CDOTA_BaseNPC::Heal(m_pInstance, replenish_health, this, 0, 1);
                  if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  {
                    ParticleManager = GetParticleManager();
                    Particle = CDOTA_ParticleManager::CreateParticle(
                                 ParticleManager,
                                 "particles/items3_fx/warmage_recipient.vpcf",
                                 1,
                                 m_pInstance,
                                 0,
                                 0);
                  }
                  else
                  {
                    v36 = GetParticleManager();
                    Particle = CDOTA_ParticleManager::CreateParticle(
                                 v36,
                                 "particles/items3_fx/warmage_recipient_nonhero.vpcf",
                                 1,
                                 m_pInstance,
                                 0,
                                 0);
                  }
                  v26 = Particle;
                  v27 = GetParticleManager();
                  CDOTA_ParticleManager::ReleaseParticleIndex(v27, v26);
                  v28 = CDOTABaseAbility::GetCaster(this);
                  v29 = (*(v28->_vptr_IHandleEntity + 413))(v28);
                  SendOverheadEventMessage(
                    v29,
                    DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL,
                    m_pInstance,
                    replenish_health,
                    0);
                  if ( CDOTABaseAbility::GetCaster(this) != m_pInstance )
                    break;
                }
              }
            }
          }
        }
        ++v11;
        ++v10;
        if ( entities.m_Size <= v11 )
          goto LABEL_17;
      }
      v30 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
      SendOverheadEventMessage(v30, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, m_pInstance, replenish_health, 0);
      ++v11;
      ++v10;
    }
    while ( entities.m_Size > v11 );
  }
LABEL_17:
  v31 = CDOTABaseAbility::GetCaster(this);
  Purge(v31, this, 4);
  v32 = CDOTABaseAbility::GetCaster(this);
  v33 = GetParticleManager();
  LODWORD(v32) = CDOTA_ParticleManager::CreateParticle(v33, "particles/items3_fx/warmage.vpcf", 1, v32, 0, 0);
  v34 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v34, v32);
  v35 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Item.GuardianGreaves.Activate", v35);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Item_Guardian_Greaves::~CDOTA_Modifier_Item_Guardian_Greaves  (line 131, @0x0000000002da0c90, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Guardian_Greaves::~CDOTA_Modifier_Item_Guardian_Greaves(
        CDOTA_Modifier_Item_Guardian_Greaves *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Guardian_Greaves::~CDOTA_Modifier_Item_Guardian_Greaves  (line 131, @0x0000000002da0cb0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Guardian_Greaves
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Guardian_Greaves::~CDOTA_Modifier_Item_Guardian_Greaves(
        CDOTA_Modifier_Item_Guardian_Greaves *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Guardian_Greaves::IsAura  (line 147, @0x0000000002d9f590, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Guardian_Greaves::IsAura(CDOTA_Modifier_Item_Guardian_Greaves *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Guardian_Greaves::GetModifierAura  (line 148, @0x0000000002d9f5a0, libserver.so)
// strings: "modifier_item_guardian_greaves_aura"
const char *__fastcall CDOTA_Modifier_Item_Guardian_Greaves::GetModifierAura(
        CDOTA_Modifier_Item_Guardian_Greaves *const this)
{
  return "modifier_item_guardian_greaves_aura";
}


// CDOTA_Modifier_Item_Guardian_Greaves::GetAuraSearchTeam  (line 149, @0x0000000002d9f5b0, libserver.so)
int __fastcall CDOTA_Modifier_Item_Guardian_Greaves::GetAuraSearchTeam(
        CDOTA_Modifier_Item_Guardian_Greaves *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Guardian_Greaves::GetAuraSearchType  (line 150, @0x0000000002d9f5c0, libserver.so)
int __fastcall CDOTA_Modifier_Item_Guardian_Greaves::GetAuraSearchType(
        CDOTA_Modifier_Item_Guardian_Greaves *const this)
{
  return 19;
}


// CDOTA_Modifier_Item_Guardian_Greaves::GetAuraRadius  (line 151, @0x0000000002d9f5d0, libserver.so)
int __fastcall CDOTA_Modifier_Item_Guardian_Greaves::GetAuraRadius(CDOTA_Modifier_Item_Guardian_Greaves *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_Item_Guardian_Greaves::OnCreated  (line 164, @0x0000000002d9ce80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_movement", "bonus_mana", "bonus_all_stats"
void __fastcall CDOTA_Modifier_Item_Guardian_Greaves::OnCreated(
        CDOTA_Modifier_Item_Guardian_Greaves *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_movement = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movement", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_movement = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_mana = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_mana", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  this->bonus_mana = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_all_stats = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_all_stats", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_10:
    this->bonus_armor = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_11;
  }
LABEL_9:
  this->bonus_all_stats = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_armor", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "aura_radius", -1, 0);
    return;
  }
LABEL_11:
  this->aura_radius = 0;
}


// CDOTA_Modifier_Item_Guardian_Greaves::DeclareFunctions  (line 173, @0x0000000002d94420, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Guardian_Greaves::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_Guardian_Greaves::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_Guardian_Greaves::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_Guardian_Greaves::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Item_Guardian_Greaves::GetModifierMoveSpeedBonus_Special_Boots(CModifierParams const&), CDOTA_Modifier_Item_Guardian_Greaves::GetModifierManaBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Guardian_Greaves::DeclareFunctions(
        CDOTA_Modifier_Item_Guardian_Greaves *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Guardian_Greaves::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_Guardian_Greaves::GetModifierBonusStats_Agility;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Guardian_Greaves::GetModifierBonusStats_Intellect;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_Guardian_Greaves::GetModifierPhysicalArmorBonus;
  this->m_Functions[16].__pfn = CDOTA_Modifier_Item_Guardian_Greaves::GetModifierMoveSpeedBonus_Special_Boots;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[16].__delta = 0;
  this->m_Functions[59].__pfn = CDOTA_Modifier_Item_Guardian_Greaves::GetModifierManaBonus;
  this->m_Functions[59].__delta = 0;
}


// CDOTA_Modifier_Item_Guardian_Greaves::GetModifierBonusStats_Strength  (line 183, @0x0000000002d944c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Guardian_Greaves::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Guardian_Greaves *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Guardian_Greaves::GetModifierBonusStats_Agility  (line 188, @0x0000000002d944e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Guardian_Greaves::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_Guardian_Greaves *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Guardian_Greaves::GetModifierBonusStats_Intellect  (line 193, @0x0000000002d94500, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Guardian_Greaves::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Guardian_Greaves *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Guardian_Greaves::GetModifierPhysicalArmorBonus  (line 198, @0x0000000002d94520, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Guardian_Greaves::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Guardian_Greaves *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Guardian_Greaves::GetModifierMoveSpeedBonus_Special_Boots  (line 203, @0x0000000002d94540, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Guardian_Greaves::GetModifierMoveSpeedBonus_Special_Boots(
        CDOTA_Modifier_Item_Guardian_Greaves *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Guardian_Greaves::GetModifierManaBonus  (line 208, @0x0000000002d94560, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Guardian_Greaves::GetModifierManaBonus(
        CDOTA_Modifier_Item_Guardian_Greaves *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Guardian_Greaves_Aura::~CDOTA_Modifier_Item_Guardian_Greaves_Aura  (line 219, @0x0000000002da10f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Guardian_Greaves_Aura::~CDOTA_Modifier_Item_Guardian_Greaves_Aura(
        CDOTA_Modifier_Item_Guardian_Greaves_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_46ED590;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Guardian_Greaves_Aura::~CDOTA_Modifier_Item_Guardian_Greaves_Aura  (line 219, @0x0000000002da1110, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Guardian_Greaves_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Guardian_Greaves_Aura::~CDOTA_Modifier_Item_Guardian_Greaves_Aura(
        CDOTA_Modifier_Item_Guardian_Greaves_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_46ED590;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Guardian_Greaves_Aura::OnCreated  (line 242, @0x0000000002d9cd00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "aura_health_regen", "aura_armor", "aura_health_regen_bonus", "aura_armor_bonus", "aura_bonus_threshold"
void __fastcall CDOTA_Modifier_Item_Guardian_Greaves_Aura::OnCreated(
        CDOTA_Modifier_Item_Guardian_Greaves_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->aura_health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_health_regen", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->aura_health_regen = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->aura_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "aura_armor", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  this->aura_armor = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->aura_health_regen_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "aura_health_regen_bonus", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_10:
    this->aura_armor_bonus = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_11;
  }
LABEL_9:
  this->aura_health_regen_bonus = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->aura_armor_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "aura_armor_bonus", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->aura_bonus_threshold = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "aura_bonus_threshold", -1, 0);
    return;
  }
LABEL_11:
  this->aura_bonus_threshold = 0;
}


// CDOTA_Modifier_Item_Guardian_Greaves_Aura::DeclareFunctions  (line 253, @0x0000000002d94580, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Guardian_Greaves_Aura::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Item_Guardian_Greaves_Aura::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Guardian_Greaves_Aura::DeclareFunctions(
        CDOTA_Modifier_Item_Guardian_Greaves_Aura *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_Guardian_Greaves_Aura::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_Guardian_Greaves_Aura::GetModifierPhysicalArmorBonus;
}


// CDOTA_Modifier_Item_Guardian_Greaves_Aura::GetModifierConstantHealthRegen  (line 261, @0x0000000002d96b20, libserver.so)  // inlines: GetHealthPercent
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Guardian_Greaves_Aura::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Guardian_Greaves_Aura *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // r12
  __int64 v4; // r13
  int v5; // eax
  __m128i v6; // xmm0
  __int64 v7; // rcx
  __m128i v9; // xmm1
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  v4 = 100LL * CBaseEntity::GetHealth(Parent);
  v5 = (*(Parent->_vptr_IHandleEntity + 156))(Parent);
  v7 = 1;
  if ( v5 > 0 )
    v7 = v5;
  if ( this->aura_bonus_threshold > (v4 / v7) && (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
  {
    *v9.m128i_i32 = this->aura_health_regen_bonus;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v9) << 32) | 1;
  }
  else
  {
    *v6.m128i_i32 = this->aura_health_regen;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v6) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Item_Guardian_Greaves_Aura::GetModifierPhysicalArmorBonus  (line 271, @0x0000000002d95460, libserver.so)  // inlines: GetHealthPercent
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Guardian_Greaves_Aura::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Guardian_Greaves_Aura *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // r12
  __int64 v4; // r13
  int v5; // eax
  __m128i v6; // xmm0
  __int64 v7; // rcx
  __m128i v9; // xmm1
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  v4 = 100LL * CBaseEntity::GetHealth(Parent);
  v5 = (*(Parent->_vptr_IHandleEntity + 156))(Parent);
  v7 = 1;
  if ( v5 > 0 )
    v7 = v5;
  if ( this->aura_bonus_threshold > (v4 / v7) && (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
  {
    *v9.m128i_i32 = this->aura_armor_bonus;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v9) << 32) | 1;
  }
  else
  {
    *v6.m128i_i32 = this->aura_armor;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v6) << 32) | 1;
  }
  return result;
}


