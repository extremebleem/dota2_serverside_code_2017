// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_vladmir.cpp:26
class CDOTA_Item_Recipe_Vladmir : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Vladmir(CDOTA_Item_Recipe_Vladmir &);
	CDOTA_Item_Recipe_Vladmir(CDOTA_Item_Recipe_Vladmir &);
	CDOTA_Item_Recipe_Vladmir();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Vladmir();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_vladmir.cpp:37
class CDOTA_Item_Vladmir : public CDOTA_Item {
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
	CDOTA_Item_Vladmir(CDOTA_Item_Vladmir &);
	CDOTA_Item_Vladmir(CDOTA_Item_Vladmir &);
	CDOTA_Item_Vladmir();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Vladmir();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_vladmir.cpp:50
class C_CDOTA_Item_Vladmir_MapInstall {
	C_CDOTA_Item_Vladmir_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_vladmir.cpp:60
class CDOTA_Modifier_Item_Vladmir : public CDOTA_Buff_Item {
public:

private:

	int bonus_all_stats;  // +0xba8
	int aura_radius;  // +0xbac
	CDOTA_Modifier_Item_Vladmir();
	virtual void OnCreated(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Vladmir();

	// vtable[57] OnCreated
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_vladmir.cpp:129
class CDOTA_Modifier_Item_Vladmir_Aura : public CDOTA_Buff {
public:

private:

	int vampiric_aura;  // +0xba8
	int vampiric_aura_ranged;  // +0xbac
	int damage_aura;  // +0xbb0
	int armor_aura;  // +0xbb4
	float mana_regen_aura;  // +0xbb8
	int hp_regen;  // +0xbbc
	CDOTA_Modifier_Item_Vladmir_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttacked(const CModifierParams &);
	ModifierVariant_t GetModifierBaseDamageOutgoing_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonusUnique(const CModifierParams &);
	ModifierVariant_t GetModifierConstantManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	ModifierVariant_t OnRespawn(const CModifierParams &);
	ModifierVariant_t Tooltip(const CModifierParams &);
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Item_Vladmir_Aura();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[7] GetAttributes
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Vladmir::~CDOTA_Item_Recipe_Vladmir  (line 26, @0x0000000002e0f800, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Vladmir::~CDOTA_Item_Recipe_Vladmir(CDOTA_Item_Recipe_Vladmir *const this)
{
  this->_vptr_IHandleEntity = &off_4788BF0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Vladmir::~CDOTA_Item_Recipe_Vladmir  (line 26, @0x0000000002e0f820, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Vladmir
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Vladmir::~CDOTA_Item_Recipe_Vladmir(CDOTA_Item_Recipe_Vladmir *const this)
{
  this->_vptr_IHandleEntity = &off_4788BF0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Vladmir::Schema_DynamicBinding  (line 28, @0x0000000002e0c6d0, libserver.so)
// globals: CDOTA_Item_Recipe_Vladmir::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Vladmir::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Vladmir *const this)
{
  return CDOTA_Item_Recipe_Vladmir::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002e0c6e0, libserver.so)
// globals: CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002e0c6f0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Vladmir>
void __fastcall CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002e0c710, libserver.so)
void __fastcall CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002e0c730, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002e0c740, libserver.so)
// globals: CDOTA_Item_Recipe_Vladmir::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Vladmir::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002e0da40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002e0e8f0, libserver.so)  // inlines: CDOTA_Item_Recipe_Vladmir, Construct<CDOTA_Item_Recipe_Vladmir>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4788BF0;
  }
  return p;
}


// CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e114b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e114d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Vladmir::GetEntityClassInternal  (line 28, @0x0000000002e18210, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "item_recipe_vladmir", "CDOTA_Item_Recipe_Vladmir"
// globals: `guard variable for'CDOTA_Item_Recipe_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VladmirClass, CDOTA_Item_Recipe_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VladmirClass, __dso_handle, CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Vladmir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_VladmirClassInfo, CDOTA_Item_Recipe_Vladmir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_VladmirClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Vladmir::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VladmirClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VladmirClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VladmirClass);
    CDOTA_Item_Recipe_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VladmirClass._vptr_CEntityClass = off_4788B70;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VladmirClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VladmirClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_VladmirClass != 0 )
    return &CDOTA_Item_Recipe_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VladmirClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Vladmir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_VladmirClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Vladmir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_VladmirClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Vladmir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_VladmirClassInfo,
      "CDOTA_Item_Recipe_Vladmir",
      "item_recipe_vladmir",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Vladmir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_VladmirClassInfo);
  }
  CDOTA_Item_Recipe_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VladmirClass.m_pClassInfo = &CDOTA_Item_Recipe_Vladmir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_VladmirClassInfo;
  CDOTA_Item_Recipe_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VladmirClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Vladmir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_VladmirClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_VladmirClass = &CDOTA_Item_Recipe_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VladmirClass;
  CDOTA_Item_Recipe_Vladmir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_VladmirClassInfo.m_pClass = &CDOTA_Item_Recipe_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VladmirClass;
  CDOTA_Item_Recipe_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VladmirClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_VladmirClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VladmirClass;
}


// CDOTA_Item_Vladmir::~CDOTA_Item_Vladmir  (line 37, @0x0000000002e0f850, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Vladmir::~CDOTA_Item_Vladmir(CDOTA_Item_Vladmir *const this)
{
  this->_vptr_IHandleEntity = &off_47897F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Vladmir::~CDOTA_Item_Vladmir  (line 37, @0x0000000002e0f870, libserver.so)  // inlines: ~CDOTA_Item_Vladmir
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Vladmir::~CDOTA_Item_Vladmir(CDOTA_Item_Vladmir *const this)
{
  this->_vptr_IHandleEntity = &off_47897F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Vladmir::Schema_DynamicBinding  (line 39, @0x0000000002e0c750, libserver.so)
// globals: CDOTA_Item_Vladmir::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Vladmir::Schema_DynamicBinding(
        const CDOTA_Item_Vladmir *const this)
{
  return CDOTA_Item_Vladmir::s_pSchemaBinding;
}


// CDOTA_Item_Vladmir::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002e0c760, libserver.so)
// globals: CDOTA_Item_Vladmir::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Vladmir::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Vladmir::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Vladmir::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Vladmir::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002e0c770, libserver.so)  // inlines: Destruct<CDOTA_Item_Vladmir>
void __fastcall CDOTA_Item_Vladmir::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Vladmir::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Vladmir::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002e0c790, libserver.so)
void __fastcall CDOTA_Item_Vladmir::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Vladmir::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Vladmir::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002e0c7b0, libserver.so)
bool __fastcall CDOTA_Item_Vladmir::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Vladmir::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Vladmir::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002e0c7c0, libserver.so)
// globals: CDOTA_Item_Vladmir::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Vladmir::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Vladmir::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Vladmir::s_pSchemaBinding;
}


// CDOTA_Item_Vladmir::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002e0da80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Vladmir::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Vladmir::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Vladmir::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002e0e920, libserver.so)  // inlines: CDOTA_Item_Vladmir, Construct<CDOTA_Item_Vladmir>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Vladmir::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Vladmir::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47897F0;
  }
  return p;
}


// CDOTA_Item_Vladmir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002e11500, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Vladmir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Vladmir::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Vladmir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002e11520, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Vladmir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Vladmir::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Vladmir::GetEntityClassInternal  (line 39, @0x0000000002e18360, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "CDOTA_Item_Vladmir"
// globals: `guard variable for'CDOTA_Item_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VladmirClass, CDOTA_Item_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VladmirClass, __dso_handle, CDOTA_Item_Vladmir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Vladmir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VladmirClassInfo, CDOTA_Item_Vladmir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VladmirClassInfo
CEntityClass *__cdecl CDOTA_Item_Vladmir::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VladmirClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VladmirClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VladmirClass);
    CDOTA_Item_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VladmirClass._vptr_CEntityClass = off_4789770;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VladmirClass);
    __cxa_atexit(
      CDOTA_Item_Vladmir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VladmirClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_VladmirClass != 0 )
    return &CDOTA_Item_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VladmirClass;
  if ( `guard variable for'CDOTA_Item_Vladmir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VladmirClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Vladmir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VladmirClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Vladmir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VladmirClassInfo,
      "CDOTA_Item_Vladmir",
      "item_vladmir",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Vladmir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VladmirClassInfo);
  }
  CDOTA_Item_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VladmirClass.m_pClassInfo = &CDOTA_Item_Vladmir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VladmirClassInfo;
  CDOTA_Item_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VladmirClass.m_pBaseClassInfo = CDOTA_Item_Vladmir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VladmirClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_VladmirClass = &CDOTA_Item_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VladmirClass;
  CDOTA_Item_Vladmir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VladmirClassInfo.m_pClass = &CDOTA_Item_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VladmirClass;
  CDOTA_Item_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VladmirClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_VladmirClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Vladmir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VladmirClass;
}


// CDOTA_Item_Vladmir::GetIntrinsicModifierName  (line 43, @0x0000000002e0c7d0, libserver.so)
// strings: "modifier_item_vladmir"
const char *__fastcall CDOTA_Item_Vladmir::GetIntrinsicModifierName(CDOTA_Item_Vladmir *const this)
{
  return "modifier_item_vladmir";
}


// CDOTA_Item_Vladmir::YouForgotToImplementOrDeclareServerClass  (line 50, @0x0000000002dffd80, libserver.so)
int __fastcall CDOTA_Item_Vladmir::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Vladmir *const this)
{
  return 0;
}


// CDOTA_Item_Vladmir::GetServerClass  (line 50, @0x0000000002e02d50, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Vladmir::GetServerClass(CDOTA_Item_Vladmir *const this)
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


// CDOTA_Modifier_Item_Vladmir::~CDOTA_Modifier_Item_Vladmir  (line 60, @0x0000000002e0db10, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Vladmir::~CDOTA_Modifier_Item_Vladmir(CDOTA_Modifier_Item_Vladmir *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Vladmir::~CDOTA_Modifier_Item_Vladmir  (line 60, @0x0000000002e0db30, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Vladmir
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Vladmir::~CDOTA_Modifier_Item_Vladmir(CDOTA_Modifier_Item_Vladmir *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Vladmir::IsAura  (line 67, @0x0000000002e0c7e0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Vladmir::IsAura(CDOTA_Modifier_Item_Vladmir *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Vladmir::GetModifierAura  (line 68, @0x0000000002e0c7f0, libserver.so)
// strings: "modifier_item_vladmir_aura"
const char *__fastcall CDOTA_Modifier_Item_Vladmir::GetModifierAura(CDOTA_Modifier_Item_Vladmir *const this)
{
  return "modifier_item_vladmir_aura";
}


// CDOTA_Modifier_Item_Vladmir::GetAuraSearchTeam  (line 70, @0x0000000002e0c800, libserver.so)
int __fastcall CDOTA_Modifier_Item_Vladmir::GetAuraSearchTeam(CDOTA_Modifier_Item_Vladmir *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Vladmir::GetAuraSearchType  (line 71, @0x0000000002e0c810, libserver.so)
int __fastcall CDOTA_Modifier_Item_Vladmir::GetAuraSearchType(CDOTA_Modifier_Item_Vladmir *const this)
{
  return 19;
}


// CDOTA_Modifier_Item_Vladmir::GetAuraSearchFlags  (line 72, @0x0000000002e0c820, libserver.so)
int __fastcall CDOTA_Modifier_Item_Vladmir::GetAuraSearchFlags(CDOTA_Modifier_Item_Vladmir *const this)
{
  return 80;
}


// CDOTA_Modifier_Item_Vladmir::GetAuraRadius  (line 73, @0x0000000002e0c830, libserver.so)
int __fastcall CDOTA_Modifier_Item_Vladmir::GetAuraRadius(CDOTA_Modifier_Item_Vladmir *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_Item_Vladmir::OnCreated  (line 89, @0x0000000002e07f10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_all_stats"
void __fastcall CDOTA_Modifier_Item_Vladmir::OnCreated(CDOTA_Modifier_Item_Vladmir *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_all_stats = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_all_stats", -1, 0);
      return;
    }
  }
  else
  {
    this->aura_radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_all_stats = 0;
}


// CDOTA_Modifier_Item_Vladmir::DeclareFunctions  (line 97, @0x0000000002dffd90, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Vladmir::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_Vladmir::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_Vladmir::GetModifierBonusStats_Intellect(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Vladmir::DeclareFunctions(CDOTA_Modifier_Item_Vladmir *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Vladmir::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_Vladmir::GetModifierBonusStats_Agility;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Vladmir::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_Item_Vladmir::GetModifierBonusStats_Strength  (line 106, @0x0000000002dffdf0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vladmir::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Vladmir *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Vladmir::GetModifierBonusStats_Agility  (line 113, @0x0000000002dffe10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vladmir::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_Vladmir *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Vladmir::GetModifierBonusStats_Intellect  (line 120, @0x0000000002dffe30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vladmir::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Vladmir *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Vladmir_Aura::~CDOTA_Modifier_Item_Vladmir_Aura  (line 129, @0x0000000002e0dac0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Vladmir_Aura::~CDOTA_Modifier_Item_Vladmir_Aura(
        CDOTA_Modifier_Item_Vladmir_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_478A6D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Vladmir_Aura::~CDOTA_Modifier_Item_Vladmir_Aura  (line 129, @0x0000000002e0dae0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Vladmir_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Vladmir_Aura::~CDOTA_Modifier_Item_Vladmir_Aura(
        CDOTA_Modifier_Item_Vladmir_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_478A6D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Vladmir_Aura::GetAttributes  (line 145, @0x0000000002e0e970, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Item_Vladmir_Aura::GetAttributes(CDOTA_Modifier_Item_Vladmir_Aura *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 4;
}


// CDOTA_Modifier_Item_Vladmir_Aura::OnCreated  (line 160, @0x0000000002e09fb0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "vampiric_aura_ranged", "damage_aura", "mana_regen_aura"
void __fastcall CDOTA_Modifier_Item_Vladmir_Aura::OnCreated(
        CDOTA_Modifier_Item_Vladmir_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->vampiric_aura = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "vampiric_aura", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->vampiric_aura = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->vampiric_aura_ranged = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "vampiric_aura_ranged", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->vampiric_aura_ranged = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->damage_aura = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage_aura", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  this->damage_aura = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->armor_aura = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "armor_aura", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->mana_regen_aura = 0.0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
    goto LABEL_13;
  }
LABEL_11:
  this->armor_aura = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->mana_regen_aura = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "mana_regen_aura", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
LABEL_7:
    this->hp_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "hp_regen", -1, 0);
    return;
  }
LABEL_13:
  this->hp_regen = 0;
}


// CDOTA_Modifier_Item_Vladmir_Aura::OnDeath  (line 177, @0x0000000002e02160, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vladmir_Aura::OnDeath(
        CDOTA_Modifier_Item_Vladmir_Aura *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  if ( v4->m_pInstance != 0 && BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) != 0 )
    CDOTA_Buff::GetParent(this);
  return 1uLL;
}


// CDOTA_Modifier_Item_Vladmir_Aura::OnRespawn  (line 189, @0x0000000002e021f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vladmir_Aura::OnRespawn(
        CDOTA_Modifier_Item_Vladmir_Aura *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  if ( v4->m_pInstance != 0 && BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) != 0 )
    CDOTA_Buff::GetParent(this);
  return 1uLL;
}


// CDOTA_Modifier_Item_Vladmir_Aura::DeclareFunctions  (line 202, @0x0000000002dffe50, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Vladmir_Aura::OnAttacked(CModifierParams const&), CDOTA_Modifier_Item_Vladmir_Aura::GetModifierBaseDamageOutgoing_Percentage(CModifierParams const&), CDOTA_Modifier_Item_Vladmir_Aura::GetModifierPhysicalArmorBonusUnique(CModifierParams const&), CDOTA_Modifier_Item_Vladmir_Aura::GetModifierConstantManaRegen(CModifierParams const&), CDOTA_Modifier_Item_Vladmir_Aura::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Item_Vladmir_Aura::OnDeath(CModifierParams const&), CDOTA_Modifier_Item_Vladmir_Aura::OnRespawn(CModifierParams const&), CDOTA_Modifier_Item_Vladmir_Aura::Tooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Vladmir_Aura::DeclareFunctions(CDOTA_Modifier_Item_Vladmir_Aura *const this)
{
  this->m_Functions[137].__pfn = CDOTA_Modifier_Item_Vladmir_Aura::OnAttacked;
  this->m_Functions[137].__delta = 0;
  this->m_Functions[34].__delta = 0;
  this->m_Functions[34].__pfn = CDOTA_Modifier_Item_Vladmir_Aura::GetModifierBaseDamageOutgoing_Percentage;
  this->m_Functions[46].__pfn = CDOTA_Modifier_Item_Vladmir_Aura::GetModifierPhysicalArmorBonusUnique;
  this->m_Functions[53].__pfn = CDOTA_Modifier_Item_Vladmir_Aura::GetModifierConstantManaRegen;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_Vladmir_Aura::GetModifierConstantHealthRegen;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Item_Vladmir_Aura::OnDeath;
  this->m_Functions[139].__pfn = CDOTA_Modifier_Item_Vladmir_Aura::OnRespawn;
  this->m_Functions[46].__delta = 0;
  this->m_Functions[53].__delta = 0;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[139].__delta = 0;
  this->m_Functions[151].__pfn = CDOTA_Modifier_Item_Vladmir_Aura::Tooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Item_Vladmir_Aura::GetModifierConstantHealthRegen  (line 216, @0x0000000002dfff20, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vladmir_Aura::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Vladmir_Aura *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->hp_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Vladmir_Aura::GetModifierBaseDamageOutgoing_Percentage  (line 222, @0x0000000002dfff40, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vladmir_Aura::GetModifierBaseDamageOutgoing_Percentage(
        CDOTA_Modifier_Item_Vladmir_Aura *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->damage_aura;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Vladmir_Aura::GetModifierPhysicalArmorBonusUnique  (line 229, @0x0000000002dfff60, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vladmir_Aura::GetModifierPhysicalArmorBonusUnique(
        CDOTA_Modifier_Item_Vladmir_Aura *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->armor_aura;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Vladmir_Aura::GetModifierConstantManaRegen  (line 235, @0x0000000002dfff80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vladmir_Aura::GetModifierConstantManaRegen(
        CDOTA_Modifier_Item_Vladmir_Aura *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->mana_regen_aura) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Vladmir_Aura::OnAttacked  (line 241, @0x0000000002e029d0, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Heal
// strings: "particles/generic_gameplay/generic_lifesteal_lanecreeps.vpcf", "particles/generic_gameplay/generic_lifesteal.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vladmir_Aura::OnAttacked(
        CDOTA_Modifier_Item_Vladmir_Aura *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *v12; // r13
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *v16; // r14
  int m_Id; // eax
  int vampiric_aura_ranged; // r15d
  CDOTA_BaseNPC *Parent; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v22; // rax
  CDOTABaseAbility *Ability; // rbx
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // rbx
  CDOTA_ParticleManager *v26; // rax
  float fDamage; // [rsp+Ch] [rbp-34h]
  float Health; // [rsp+Ch] [rbp-34h]

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
  {
    v9 = params->htarget.m_Index;
    if ( v9 + 2 <= 1
      || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v11 = &v10[params->htarget.m_Index & 0x1FF]) == 0
      || v9 != v11->m_EHandle.m_Index
      || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
      || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
    {
      v12 = 0;
    }
    v13 = params->hattacker.m_Index;
    if ( v13 + 2 <= 1
      || (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
      || (v15 = &v14[params->hattacker.m_Index & 0x1FF]) == 0
      || v13 != v15->m_EHandle.m_Index
      || (v16 = v15->m_pInstance, v15->m_pInstance == 0)
      || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
    {
      v16 = 0;
    }
    if ( (v12 == 0 || ((m_Id = v12[43].m_iszPrivateVScripts.u.m_Id) & 0x10) == 0 && (m_Id & 0x193) != 0)
      && params->bProcessProcs )
    {
      vampiric_aura_ranged = this->vampiric_aura_ranged;
      if ( (*(&v16[50].m_worldGroupId + 1) & 2) == 0 )
        vampiric_aura_ranged = this->vampiric_aura;
      fDamage = params->fDamage;
      if ( CBaseEntity::GetHealth(v12) <= fDamage )
        Health = CBaseEntity::GetHealth(v12);
      else
        Health = params->fDamage;
      if ( HIBYTE(v16[7].m_CScriptComponent) != HIBYTE(v12[7].m_CScriptComponent) )
      {
        if ( (v16[43].m_iszPrivateVScripts.u.m_Id & 0x400) != 0 )
        {
          Parent = CDOTA_Buff::GetParent(this);
          ParticleManager = GetParticleManager();
          Particle = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/generic_gameplay/generic_lifesteal_lanecreeps.vpcf",
                       1,
                       Parent,
                       0,
                       0);
        }
        else
        {
          v25 = CDOTA_Buff::GetParent(this);
          v26 = GetParticleManager();
          Particle = CDOTA_ParticleManager::CreateParticle(
                       v26,
                       "particles/generic_gameplay/generic_lifesteal.vpcf",
                       1,
                       v25,
                       0,
                       0);
        }
        v22 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v22, Particle);
        if ( LOBYTE(v12[71].m_pEntity) == 0 && LOBYTE(v16[71].m_pEntity) == 0 )
        {
          Ability = CDOTA_Buff::GetAbility(this);
          v24 = CDOTA_Buff::GetParent(this);
          CDOTA_BaseNPC::Heal(v24, (vampiric_aura_ranged * Health) / 100.0, Ability, 1, 1);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_Vladmir_Aura::Tooltip  (line 287, @0x0000000002e001a0, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vladmir_Aura::Tooltip(
        CDOTA_Modifier_Item_Vladmir_Aura *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  __m128i v4; // xmm0
  int vampiric_aura_ranged; // edx
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  vampiric_aura_ranged = this->vampiric_aura_ranged;
  if ( (Parent->m_iAttackCapabilities.m_Value & 2) == 0 )
    vampiric_aura_ranged = this->vampiric_aura;
  *v4.m128i_i32 = vampiric_aura_ranged;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


