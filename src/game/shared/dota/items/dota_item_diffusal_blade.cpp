// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_diffusal_blade.cpp:30
class CDOTA_Item_Recipe_Diffusal_Blade : public CDOTA_Item {
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

public:

private:

	CDOTA_Item_Recipe_Diffusal_Blade(CDOTA_Item_Recipe_Diffusal_Blade &);
	CDOTA_Item_Recipe_Diffusal_Blade(CDOTA_Item_Recipe_Diffusal_Blade &);
	CDOTA_Item_Recipe_Diffusal_Blade();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Diffusal_Blade();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_diffusal_blade.cpp:37
class CDOTA_Item_Recipe_Diffusal_Blade2 : public CDOTA_Item_Recipe_Diffusal_Blade {
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
	CDOTA_Item_Recipe_Diffusal_Blade2(CDOTA_Item_Recipe_Diffusal_Blade2 &);
	CDOTA_Item_Recipe_Diffusal_Blade2(CDOTA_Item_Recipe_Diffusal_Blade2 &);
	CDOTA_Item_Recipe_Diffusal_Blade2();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Diffusal_Blade2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_diffusal_blade.cpp:44
class CDOTA_Item_Diffusal_Blade : public CDOTA_Item {
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

public:

private:

	CDOTA_Item_Diffusal_Blade(CDOTA_Item_Diffusal_Blade &);
	CDOTA_Item_Diffusal_Blade(CDOTA_Item_Diffusal_Blade &);
	CDOTA_Item_Diffusal_Blade();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual void OnPurchase(int, const char *);
	virtual bool ProRatesChargesWhenSelling();
	virtual void OnSpellStart();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual ~CDOTA_Item_Diffusal_Blade();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[335] OnPurchase
	// vtable[339] ProRatesChargesWhenSelling
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_diffusal_blade.cpp:62
class C_CDOTA_Item_Diffusal_Blade_MapInstall {
	C_CDOTA_Item_Diffusal_Blade_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_diffusal_blade.cpp:170
class CDOTA_Item_Diffusal_Blade_Level2 : public CDOTA_Item_Diffusal_Blade {
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
	CDOTA_Item_Diffusal_Blade_Level2(CDOTA_Item_Diffusal_Blade_Level2 &);
	CDOTA_Item_Diffusal_Blade_Level2(CDOTA_Item_Diffusal_Blade_Level2 &);
	CDOTA_Item_Diffusal_Blade_Level2();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Item_Diffusal_Blade_Level2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_diffusal_blade.cpp:181
class C_CDOTA_Item_Diffusal_Blade_Level2_MapInstall {
	C_CDOTA_Item_Diffusal_Blade_Level2_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_diffusal_blade.cpp:192
class CDOTA_Modifier_Item_Diffusal_Blade : public CDOTA_Buff_Item {
public:

private:

	int bonus_agility;  // +0xba8
	int bonus_intellect;  // +0xbac
	float damage_per_burn;  // +0xbb0
	int feedback_mana_burn;  // +0xbb4
	int feedback_mana_burn_illusion_melee;  // +0xbb8
	int feedback_mana_burn_illusion_ranged;  // +0xbbc
	CDOTA_Modifier_Item_Diffusal_Blade();
	virtual void OnCreated(KeyValues *);
	virtual void OnItemCombine();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierProcAttack_Feedback(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Diffusal_Blade();

	// vtable[57] OnCreated
	// vtable[89] OnItemCombine
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/items/dota_item_diffusal_blade.cpp:319
class CDOTA_Modifier_Item_Diffusal_Blade_Slow : public CDOTA_Buff {
public:

private:

	int purge_rate;  // +0xba8
	CDOTA_Modifier_Item_Diffusal_Blade_Slow();
	virtual void OnCreated(KeyValues *);
	virtual bool IsDebuff();
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Diffusal_Blade_Slow();

	// vtable[57] OnCreated
	// vtable[12] IsDebuff
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Diffusal_Blade::~CDOTA_Item_Recipe_Diffusal_Blade  (line 30, @0x0000000002d86680, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Diffusal_Blade::~CDOTA_Item_Recipe_Diffusal_Blade(
        CDOTA_Item_Recipe_Diffusal_Blade *const this)
{
  this->_vptr_IHandleEntity = &off_46CFDB0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Diffusal_Blade::~CDOTA_Item_Recipe_Diffusal_Blade  (line 30, @0x0000000002d866a0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Diffusal_Blade
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Diffusal_Blade::~CDOTA_Item_Recipe_Diffusal_Blade(
        CDOTA_Item_Recipe_Diffusal_Blade *const this)
{
  this->_vptr_IHandleEntity = &off_46CFDB0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Diffusal_Blade::Schema_DynamicBinding  (line 32, @0x0000000002d81b70, libserver.so)
// globals: CDOTA_Item_Recipe_Diffusal_Blade::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Diffusal_Blade::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Diffusal_Blade *const this)
{
  return CDOTA_Item_Recipe_Diffusal_Blade::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x0000000002d81b80, libserver.so)
// globals: CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x0000000002d81b90, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Diffusal_Blade>
void __fastcall CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x0000000002d81bb0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x0000000002d81bd0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x0000000002d81be0, libserver.so)
// globals: CDOTA_Item_Recipe_Diffusal_Blade::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Diffusal_Blade::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x0000000002d83c70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x0000000002d850a0, libserver.so)  // inlines: CDOTA_Item_Recipe_Diffusal_Blade, Construct<CDOTA_Item_Recipe_Diffusal_Blade>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46CFDB0;
  }
  return p;
}


// CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002d88cf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002d88d10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo  (line 32, @0x0000000002d929f0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInternal
// strings: "item_recipe_diffusal_blade", "CDOTA_Item_Recipe_Diffusal_Blade", "dota_item", "CDOTA_Item", "dota_base_ability", "CDOTABaseAbility"
// globals: `guard variable for'CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClassInfo, CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClassInfo, `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo
CEntityClassInfo *__cdecl CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClassInfo != 0 )
    return &CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClassInfo) == 0 )
    return &CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClassInfo;
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
    &CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClassInfo,
    "CDOTA_Item_Recipe_Diffusal_Blade",
    "item_recipe_diffusal_blade",
    0,
    &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClassInfo);
  return &CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClassInfo;
}


// CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInternal  (line 32, @0x0000000002d92b00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_recipe_diffusal_blade", "CDOTA_Item_Recipe_Diffusal_Blade"
// globals: `guard variable for'CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClass, CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClass, __dso_handle, CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClassInfo, CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClass);
    CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClass._vptr_CEntityClass = off_46CFD30;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Diffusal_BladeClass != 0 )
    return &CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClassInfo,
      "CDOTA_Item_Recipe_Diffusal_Blade",
      "item_recipe_diffusal_blade",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClassInfo);
  }
  CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClass.m_pClassInfo = &CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClassInfo;
  CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Diffusal_BladeClass = &CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClass;
  CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClassInfo.m_pClass = &CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClass;
  CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Diffusal_BladeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_BladeClass;
}


// CDOTA_Item_Recipe_Diffusal_Blade2::Schema_DynamicBinding  (line 37, @0x0000000002d81bf0, libserver.so)
// globals: CDOTA_Item_Recipe_Diffusal_Blade2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Diffusal_Blade2::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Diffusal_Blade2 *const this)
{
  return CDOTA_Item_Recipe_Diffusal_Blade2::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 37, @0x0000000002d81c00, libserver.so)
// globals: CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::DestructInstance  (line 37, @0x0000000002d81c10, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Diffusal_Blade2>
void __fastcall CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::FreeInstance  (line 37, @0x0000000002d81c30, libserver.so)
void __fastcall CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::CanAllocate  (line 37, @0x0000000002d81c50, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 37, @0x0000000002d81c60, libserver.so)
// globals: CDOTA_Item_Recipe_Diffusal_Blade2::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Diffusal_Blade2::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::AllocateInstance  (line 37, @0x0000000002d83cb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::ConstructInstance  (line 37, @0x0000000002d850d0, libserver.so)  // inlines: CDOTA_Item_Recipe_Diffusal_Blade, CDOTA_Item_Recipe_Diffusal_Blade2, Construct<CDOTA_Item_Recipe_Diffusal_Blade2>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46D09B0;
  }
  return p;
}


// CDOTA_Item_Recipe_Diffusal_Blade2::~CDOTA_Item_Recipe_Diffusal_Blade2  (line 37, @0x0000000002d866d0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Diffusal_Blade
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Diffusal_Blade2::~CDOTA_Item_Recipe_Diffusal_Blade2(
        CDOTA_Item_Recipe_Diffusal_Blade2 *const this)
{
  this->_vptr_IHandleEntity = &off_46CFDB0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Diffusal_Blade2::~CDOTA_Item_Recipe_Diffusal_Blade2  (line 37, @0x0000000002d866f0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Diffusal_Blade, ~CDOTA_Item_Recipe_Diffusal_Blade2
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Diffusal_Blade2::~CDOTA_Item_Recipe_Diffusal_Blade2(
        CDOTA_Item_Recipe_Diffusal_Blade2 *const this)
{
  this->_vptr_IHandleEntity = &off_46CFDB0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000002d88d40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000002d88d60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInternal  (line 37, @0x0000000002d92c50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_recipe_diffusal_blade_2", "CDOTA_Item_Recipe_Diffusal_Blade2"
// globals: `guard variable for'CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2Class, CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2Class, __dso_handle, CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2ClassInfo, CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2ClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2Class);
    CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2Class._vptr_CEntityClass = off_46D0930;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2Class);
    __cxa_atexit(
      CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Diffusal_Blade2Class != 0 )
    return &CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2Class;
  if ( `guard variable for'CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item_Recipe_Diffusal_Blade::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2ClassInfo,
      "CDOTA_Item_Recipe_Diffusal_Blade2",
      "item_recipe_diffusal_blade_2",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2ClassInfo);
  }
  CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2Class.m_pClassInfo = &CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2ClassInfo;
  CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2Class.m_pBaseClassInfo = CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Diffusal_Blade2Class = &CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2Class;
  CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2ClassInfo.m_pClass = &CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2Class;
  CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2Class.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Diffusal_Blade2Class->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Diffusal_Blade2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Diffusal_Blade2Class;
}


// CDOTA_Item_Diffusal_Blade::~CDOTA_Item_Diffusal_Blade  (line 44, @0x0000000002d86720, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Diffusal_Blade::~CDOTA_Item_Diffusal_Blade(CDOTA_Item_Diffusal_Blade *const this)
{
  this->_vptr_IHandleEntity = &off_46D15B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Diffusal_Blade::~CDOTA_Item_Diffusal_Blade  (line 44, @0x0000000002d86740, libserver.so)  // inlines: ~CDOTA_Item_Diffusal_Blade
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Diffusal_Blade::~CDOTA_Item_Diffusal_Blade(CDOTA_Item_Diffusal_Blade *const this)
{
  this->_vptr_IHandleEntity = &off_46D15B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Diffusal_Blade::Schema_DynamicBinding  (line 46, @0x0000000002d81c70, libserver.so)
// globals: CDOTA_Item_Diffusal_Blade::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Diffusal_Blade::Schema_DynamicBinding(
        const CDOTA_Item_Diffusal_Blade *const this)
{
  return CDOTA_Item_Diffusal_Blade::s_pSchemaBinding;
}


// CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 46, @0x0000000002d81c80, libserver.so)
// globals: CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::DestructInstance  (line 46, @0x0000000002d81c90, libserver.so)  // inlines: Destruct<CDOTA_Item_Diffusal_Blade>
void __fastcall CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::FreeInstance  (line 46, @0x0000000002d81cb0, libserver.so)
void __fastcall CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::CanAllocate  (line 46, @0x0000000002d81cd0, libserver.so)
bool __fastcall CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 46, @0x0000000002d81ce0, libserver.so)
// globals: CDOTA_Item_Diffusal_Blade::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Diffusal_Blade::s_pSchemaBinding;
}


// CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::AllocateInstance  (line 46, @0x0000000002d83cf0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::ConstructInstance  (line 46, @0x0000000002d85100, libserver.so)  // inlines: CDOTA_Item_Diffusal_Blade, Construct<CDOTA_Item_Diffusal_Blade>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46D15B0;
  }
  return p;
}


// CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 46, @0x0000000002d88d90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 46, @0x0000000002d88db0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Diffusal_Blade::GetEntityClassInfo  (line 46, @0x0000000002d92da0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInternal
// strings: "CDOTA_Item_Diffusal_Blade", "dota_item", "CDOTA_Item", "dota_base_ability", "CDOTABaseAbility"
// globals: `guard variable for'CDOTA_Item_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_BladeClassInfo, CDOTA_Item_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_BladeClassInfo, `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo
CEntityClassInfo *__cdecl CDOTA_Item_Diffusal_Blade::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_BladeClassInfo != 0 )
    return &CDOTA_Item_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_BladeClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_BladeClassInfo) == 0 )
    return &CDOTA_Item_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_BladeClassInfo;
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
    &CDOTA_Item_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_BladeClassInfo,
    "CDOTA_Item_Diffusal_Blade",
    "item_diffusal_blade",
    0,
    &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Item_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_BladeClassInfo);
  return &CDOTA_Item_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_BladeClassInfo;
}


// CDOTA_Item_Diffusal_Blade::GetEntityClassInternal  (line 46, @0x0000000002d92eb0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "CDOTA_Item_Diffusal_Blade"
// globals: `guard variable for'CDOTA_Item_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_BladeClass, CDOTA_Item_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_BladeClass, __dso_handle, CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_BladeClassInfo, CDOTA_Item_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_BladeClassInfo
CEntityClass *__cdecl CDOTA_Item_Diffusal_Blade::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_BladeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_BladeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_BladeClass);
    CDOTA_Item_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_BladeClass._vptr_CEntityClass = off_46D1530;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_BladeClass);
    __cxa_atexit(
      CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_BladeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Diffusal_BladeClass != 0 )
    return &CDOTA_Item_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_BladeClass;
  if ( `guard variable for'CDOTA_Item_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_BladeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_BladeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_BladeClassInfo,
      "CDOTA_Item_Diffusal_Blade",
      "item_diffusal_blade",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_BladeClassInfo);
  }
  CDOTA_Item_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_BladeClass.m_pClassInfo = &CDOTA_Item_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_BladeClassInfo;
  CDOTA_Item_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_BladeClass.m_pBaseClassInfo = CDOTA_Item_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_BladeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Diffusal_BladeClass = &CDOTA_Item_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_BladeClass;
  CDOTA_Item_Diffusal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_BladeClassInfo.m_pClass = &CDOTA_Item_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_BladeClass;
  CDOTA_Item_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_BladeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Diffusal_BladeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Diffusal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_BladeClass;
}


// CDOTA_Item_Diffusal_Blade::GetIntrinsicModifierName  (line 50, @0x0000000002d81cf0, libserver.so)
// strings: "modifier_item_diffusal_blade"
const char *__fastcall CDOTA_Item_Diffusal_Blade::GetIntrinsicModifierName(CDOTA_Item_Diffusal_Blade *const this)
{
  return "modifier_item_diffusal_blade";
}


// CDOTA_Item_Diffusal_Blade::ProRatesChargesWhenSelling  (line 54, @0x0000000002d81d00, libserver.so)
bool __fastcall CDOTA_Item_Diffusal_Blade::ProRatesChargesWhenSelling(CDOTA_Item_Diffusal_Blade *const this)
{
  return 0;
}


// CDOTA_Item_Diffusal_Blade::YouForgotToImplementOrDeclareServerClass  (line 62, @0x0000000002d6f560, libserver.so)
int __fastcall CDOTA_Item_Diffusal_Blade::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_Diffusal_Blade *const this)
{
  return 0;
}


// CDOTA_Item_Diffusal_Blade::GetServerClass  (line 62, @0x0000000002d73b10, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Diffusal_Blade::GetServerClass(CDOTA_Item_Diffusal_Blade *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDOTA_Item_Diffusal_Blade::OnPurchase  (line 71, @0x0000000002d7b260, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, NetworkStateChanged, Set, SetAssembledTime, operator=<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Item::SetCurrentCharges, CDOTA_Item::OnPurchase
// strings: "initial_charges"
void __fastcall CDOTA_Item_Diffusal_Blade::OnPurchase(
        CDOTA_Item_Diffusal_Blade *const this,
        int nCombineType,
        const char *pszRecipeItemName)
{
  int LevelSpecialValue; // eax

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "initial_charges", -1, 0);
  CDOTA_Item::SetCurrentCharges(this, LevelSpecialValue);
  if ( nCombineType > 0 && this->m_flAssembledTime.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 968, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
    this->m_flAssembledTime.m_Value = 0.0;
  }
  CDOTA_Item::OnPurchase(this, nCombineType, 0);
}


// CDOTA_Item_Diffusal_Blade::CastFilterResult  (line 90, @0x0000000002d70170, libserver.so)  // inlines: InState, IsMagicImmune
// calls: CDOTABaseAbility::GetCaster, UnitFilter
int __fastcall CDOTA_Item_Diffusal_Blade::CastFilterResult(
        CDOTA_Item_Diffusal_Blade *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int result; // eax

  Caster = CDOTABaseAbility::GetCaster(this);
  result = UnitFilter(pTarget, 2, 19, 80, Caster->m_iTeamNum.m_Value);
  if ( result == 0 )
    return ((LODWORD(pTarget->m_nUnitState64.m_Value) << 22) >> 31) & 0x17;
  return result;
}


// CDOTA_Item_Diffusal_Blade::GetCustomCastError  (line 104, @0x0000000002d6f570, libserver.so)
// strings: "#dota_hud_error_target_magic_immune"
const char *__fastcall CDOTA_Item_Diffusal_Blade::GetCustomCastError(
        CDOTA_Item_Diffusal_Blade *const this,
        CDOTA_BaseNPC *pTarget)
{
  const char *result; // rax

  result = "#dota_hud_error_target_magic_immune";
  if ( (pTarget->m_nUnitState64.m_Value & 0x200) == 0 )
    return "";
  return result;
}


// CDOTA_Item_Diffusal_Blade::OnSpellStart  (line 115, @0x0000000002d7cd60, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetParent, GetTeamNumber, IsConsideredHero, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_Item::SpendCharge, CDOTABaseAbility::GetCaster, DOTA_EmitSound, CDOTA_BaseNPC::TriggerSpellAbsorb, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, Purge, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat (17 total)
// strings: "DOTA_Item.DiffusalBlade.Activate", "particles/generic_gameplay/generic_purge.vpcf", "purge_root_duration", "modifier_rooted", "DOTA_Item.DiffusalBlade.Target", "purge_slow_duration" (7 total)
void __fastcall CDOTA_Item_Diffusal_Blade::OnSpellStart(CDOTA_Item_Diffusal_Blade *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_ParticleManager *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  float v9; // xmm1_4
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rsi
  float v12; // xmm1_4
  CGameSceneNode *v13; // rdi
  CBaseEntity *v14; // rsi
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  if ( this->m_iCurrentCharges.m_Value != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    v3 = CursorTarget;
    if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
    {
      CDOTA_Item::SpendCharge(this);
      Caster = CDOTABaseAbility::GetCaster(this);
      DOTA_EmitSound(10, "DOTA_Item.DiffusalBlade.Activate", Caster);
      if ( !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
      {
        ParticleManager = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/generic_gameplay/generic_purge.vpcf",
                     1,
                     v3,
                     0,
                     0);
        v7 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v7, Particle);
        LOBYTE(Particle) = v3->m_iTeamNum.m_Value;
        if ( Particle == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
        {
          Purge(v3, this, 4);
        }
        else
        {
          Purge(v3, this, 2);
          if ( (BYTE1(v3[3].m_vecVelocity.m_Value.x) & 2) == 0 )
          {
            if ( (v3[2].m_hEffectEntity.m_Value.m_Index & 3) == 0
              && BYTE1(v3[2].m_DamageModifiers.m_LastAlloc.index) == 0 )
            {
              CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "purge_root_duration", -1, 0);
              KeyValues::KeyValues(&kv, "modifier_rooted");
              KeyValues::SetFloat(&kv, "duration", v9);
              m_pParent = this->m_pGameSceneNode->m_pParent;
              if ( m_pParent != 0 )
                OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
              else
                OwnerEntity = 0;
              CDOTA_BaseNPC::AddNewModifier(v3, OwnerEntity, this, "modifier_rooted", &kv, 0);
              DOTA_EmitSound(10, "DOTA_Item.DiffusalBlade.Target", v3);
              KeyValues::~KeyValues(&kv);
            }
            CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "purge_slow_duration", -1, 0);
            KeyValues::KeyValues(&kv, "modifier_item_diffusal_blade_slow");
            KeyValues::SetFloat(&kv, "duration", v12);
            v13 = this->m_pGameSceneNode->m_pParent;
            if ( v13 != 0 )
              v14 = CGameSceneNode::GetOwnerEntity(v13);
            else
              v14 = 0;
            CDOTA_BaseNPC::AddNewModifier(v3, v14, this, "modifier_item_diffusal_blade_slow", &kv, 0);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
    else
    {
      CDOTA_Item::SpendCharge(this);
      v8 = CDOTABaseAbility::GetCaster(this);
      DOTA_EmitSound(10, "DOTA_Item.DiffusalBlade.Activate", v8);
    }
  }
}


// CDOTA_Item_Diffusal_Blade_Level2::~CDOTA_Item_Diffusal_Blade_Level2  (line 170, @0x0000000002d86770, libserver.so)  // inlines: ~CDOTA_Item_Diffusal_Blade
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Diffusal_Blade_Level2::~CDOTA_Item_Diffusal_Blade_Level2(
        CDOTA_Item_Diffusal_Blade_Level2 *const this)
{
  this->_vptr_IHandleEntity = &off_46D15B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Diffusal_Blade_Level2::~CDOTA_Item_Diffusal_Blade_Level2  (line 170, @0x0000000002d86790, libserver.so)  // inlines: ~CDOTA_Item_Diffusal_Blade, ~CDOTA_Item_Diffusal_Blade_Level2
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Diffusal_Blade_Level2::~CDOTA_Item_Diffusal_Blade_Level2(
        CDOTA_Item_Diffusal_Blade_Level2 *const this)
{
  this->_vptr_IHandleEntity = &off_46D15B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Diffusal_Blade_Level2::Schema_DynamicBinding  (line 172, @0x0000000002d81d10, libserver.so)
// globals: CDOTA_Item_Diffusal_Blade_Level2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Diffusal_Blade_Level2::Schema_DynamicBinding(
        const CDOTA_Item_Diffusal_Blade_Level2 *const this)
{
  return CDOTA_Item_Diffusal_Blade_Level2::s_pSchemaBinding;
}


// CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 172, @0x0000000002d81d20, libserver.so)
// globals: CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::DestructInstance  (line 172, @0x0000000002d81d30, libserver.so)  // inlines: Destruct<CDOTA_Item_Diffusal_Blade_Level2>
void __fastcall CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::FreeInstance  (line 172, @0x0000000002d81d50, libserver.so)
void __fastcall CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::CanAllocate  (line 172, @0x0000000002d81d70, libserver.so)
bool __fastcall CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 172, @0x0000000002d81d80, libserver.so)
// globals: CDOTA_Item_Diffusal_Blade_Level2::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Diffusal_Blade_Level2::s_pSchemaBinding;
}


// CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::AllocateInstance  (line 172, @0x0000000002d83d30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::ConstructInstance  (line 172, @0x0000000002d85130, libserver.so)  // inlines: CDOTA_Item_Diffusal_Blade, CDOTA_Item_Diffusal_Blade_Level2, Construct<CDOTA_Item_Diffusal_Blade_Level2>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46D21B0;
  }
  return p;
}


// CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 172, @0x0000000002d88de0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 172, @0x0000000002d88e00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInternal  (line 172, @0x0000000002d93000, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item_Diffusal_Blade::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_diffusal_blade_2", "CDOTA_Item_Diffusal_Blade_Level2"
// globals: `guard variable for'CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2Class, CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2Class, __dso_handle, CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2ClassInfo, CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2ClassInfo
CEntityClass *__cdecl CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2Class);
    CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2Class._vptr_CEntityClass = off_46D2130;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2Class);
    __cxa_atexit(
      CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Diffusal_Blade_Level2Class != 0 )
    return &CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2Class;
  if ( `guard variable for'CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item_Diffusal_Blade::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2ClassInfo,
      "CDOTA_Item_Diffusal_Blade_Level2",
      "item_diffusal_blade_2",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2ClassInfo);
  }
  CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2Class.m_pClassInfo = &CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2ClassInfo;
  CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2Class.m_pBaseClassInfo = CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Diffusal_Blade_Level2Class = &CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2Class;
  CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2ClassInfo.m_pClass = &CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2Class;
  CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2Class.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Diffusal_Blade_Level2Class->m_pComponentOverrides = 0;
  return &CDOTA_Item_Diffusal_Blade_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Diffusal_Blade_Level2Class;
}


// CDOTA_Item_Diffusal_Blade_Level2::YouForgotToImplementOrDeclareServerClass  (line 181, @0x0000000002d6f590, libserver.so)
int __fastcall CDOTA_Item_Diffusal_Blade_Level2::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_Diffusal_Blade_Level2 *const this)
{
  return 0;
}


// CDOTA_Item_Diffusal_Blade_Level2::GetServerClass  (line 181, @0x0000000002d73b60, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Diffusal_Blade_Level2::GetServerClass(CDOTA_Item_Diffusal_Blade_Level2 *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDOTA_Modifier_Item_Diffusal_Blade::~CDOTA_Modifier_Item_Diffusal_Blade  (line 192, @0x0000000002d83f10, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Diffusal_Blade::~CDOTA_Modifier_Item_Diffusal_Blade(
        CDOTA_Modifier_Item_Diffusal_Blade *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Diffusal_Blade::~CDOTA_Modifier_Item_Diffusal_Blade  (line 192, @0x0000000002d83f30, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Diffusal_Blade
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Diffusal_Blade::~CDOTA_Modifier_Item_Diffusal_Blade(
        CDOTA_Modifier_Item_Diffusal_Blade *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Diffusal_Blade::OnCreated  (line 220, @0x0000000002d7d830, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bonus_agility", "bonus_intellect", "damage_per_burn", "feedback_mana_burn", "feedback_mana_burn_illusion_melee", "feedback_mana_burn_illusion_ranged"
void __fastcall CDOTA_Modifier_Item_Diffusal_Blade::OnCreated(
        CDOTA_Modifier_Item_Diffusal_Blade *const this,
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
    this->bonus_agility = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_agility", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_agility = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_intellect = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_intellect", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->bonus_intellect = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->damage_per_burn = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "damage_per_burn", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  this->damage_per_burn = 0.0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->feedback_mana_burn = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "feedback_mana_burn", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->feedback_mana_burn_illusion_melee = 0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
    goto LABEL_13;
  }
LABEL_11:
  this->feedback_mana_burn = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->feedback_mana_burn_illusion_melee = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                              v7,
                                              "feedback_mana_burn_illusion_melee",
                                              -1,
                                              0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
LABEL_7:
    this->feedback_mana_burn_illusion_ranged = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                                 v8,
                                                 "feedback_mana_burn_illusion_ranged",
                                                 -1,
                                                 0);
    return;
  }
LABEL_13:
  this->feedback_mana_burn_illusion_ranged = 0;
}


// CDOTA_Modifier_Item_Diffusal_Blade::OnItemCombine  (line 243, @0x0000000002d7bb90, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_agility", "bonus_intellect"
void __fastcall CDOTA_Modifier_Item_Diffusal_Blade::OnItemCombine(CDOTA_Modifier_Item_Diffusal_Blade *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v3; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_agility = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_agility", -1, 0);
    v3 = CDOTA_Buff::GetAbility(this);
    if ( v3 != 0 )
    {
LABEL_3:
      this->bonus_intellect = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v3, "bonus_intellect", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_agility = 0;
    v3 = CDOTA_Buff::GetAbility(this);
    if ( v3 != 0 )
      goto LABEL_3;
  }
  this->bonus_intellect = 0;
}


// CDOTA_Modifier_Item_Diffusal_Blade::DeclareFunctions  (line 251, @0x0000000002d6f5a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Diffusal_Blade::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_Diffusal_Blade::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_Diffusal_Blade::GetModifierProcAttack_Feedback(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Diffusal_Blade::DeclareFunctions(CDOTA_Modifier_Item_Diffusal_Blade *const this)
{
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_Diffusal_Blade::GetModifierBonusStats_Agility;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Diffusal_Blade::GetModifierBonusStats_Intellect;
  this->m_Functions[7].__pfn = CDOTA_Modifier_Item_Diffusal_Blade::GetModifierProcAttack_Feedback;
  this->m_Functions[7].__delta = 0;
}


// CDOTA_Modifier_Item_Diffusal_Blade::GetModifierBonusStats_Agility  (line 260, @0x0000000002d6f600, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Diffusal_Blade::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_Diffusal_Blade *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agility;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Diffusal_Blade::GetModifierBonusStats_Intellect  (line 267, @0x0000000002d6f620, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Diffusal_Blade::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Diffusal_Blade *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Diffusal_Blade::GetModifierProcAttack_Feedback  (line 274, @0x0000000002d727f0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetMana, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::ReduceMana, CDOTA_Buff::GetAbility, CDOTA_CombatLog::AddManaDamageEvent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/generic_gameplay/generic_manaburn.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Diffusal_Blade::GetModifierProcAttack_Feedback(
        CDOTA_Modifier_Item_Diffusal_Blade *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r13
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *v10; // rbx
  char m_CScriptComponent_high; // r14
  int feedback_mana_burn; // eax
  float v14; // xmm0_4
  int v15; // r13d
  CDOTABaseAbility *Ability; // rax
  int v17; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v20; // rax
  __m128i v21; // xmm2
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v7 = params->htarget.m_Index;
  if ( v7 + 2 <= 1
    || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v9 = &v8[params->htarget.m_Index & 0x1FF]) == 0
    || v7 != v9->m_EHandle.m_Index
    || (v10 = v9->m_pInstance, v9->m_pInstance == 0)
    || BYTE3(v10[7]._vptr_IHandleEntity) == 0 )
  {
    v10 = 0;
  }
  if ( params->bDiffusalApplied )
    return 1uLL;
  params->bDiffusalApplied = 1;
  if ( v10 == 0 )
    return 1uLL;
  if ( m_pInstance == 0 )
    return 1uLL;
  m_CScriptComponent_high = HIBYTE(v10[7].m_CScriptComponent);
  if ( m_CScriptComponent_high == CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value
    || *&v10[44].m_worldGroupId.m_nHashCode <= 0.0
    || (BYTE1(v10[58]._vptr_IHandleEntity) & 2) != 0 )
  {
    return 1uLL;
  }
  feedback_mana_burn = this->feedback_mana_burn;
  if ( LOBYTE(m_pInstance[71].m_pEntity) != 0 )
  {
    if ( (*(&m_pInstance[50].m_worldGroupId + 1) & 2) != 0 )
      feedback_mana_burn = this->feedback_mana_burn_illusion_ranged;
    else
      feedback_mana_burn = this->feedback_mana_burn_illusion_melee;
  }
  v14 = *&v10[44].m_iszPrivateVScripts.u.m_Id;
  if ( feedback_mana_burn <= v14 )
    v15 = feedback_mana_burn;
  else
    v15 = v14;
  CDOTA_BaseNPC::ReduceMana(v10, v15, v15);
  Ability = CDOTA_Buff::GetAbility(this);
  CDOTA_CombatLog::AddManaDamageEvent(&g_DOTACombatLog, Ability, v10, v15);
  v17 = (v15 * this->damage_per_burn);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/generic_gameplay/generic_manaburn.vpcf",
               1,
               v10,
               0,
               0);
  v20 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v20, Particle);
  *v21.m128i_i32 = v17;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v21) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Diffusal_Blade_Slow::~CDOTA_Modifier_Item_Diffusal_Blade_Slow  (line 319, @0x0000000002d84550, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Diffusal_Blade_Slow::~CDOTA_Modifier_Item_Diffusal_Blade_Slow(
        CDOTA_Modifier_Item_Diffusal_Blade_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_46D3090;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Diffusal_Blade_Slow::~CDOTA_Modifier_Item_Diffusal_Blade_Slow  (line 319, @0x0000000002d84570, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Diffusal_Blade_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Diffusal_Blade_Slow::~CDOTA_Modifier_Item_Diffusal_Blade_Slow(
        CDOTA_Modifier_Item_Diffusal_Blade_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_46D3090;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Diffusal_Blade_Slow::IsDebuff  (line 326, @0x0000000002d81d90, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Diffusal_Blade_Slow::IsDebuff(CDOTA_Modifier_Item_Diffusal_Blade_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Diffusal_Blade_Slow::GetEffectName  (line 328, @0x0000000002d81da0, libserver.so)
// strings: "particles/items_fx/diffusal_slow.vpcf"
const char *__fastcall CDOTA_Modifier_Item_Diffusal_Blade_Slow::GetEffectName(
        CDOTA_Modifier_Item_Diffusal_Blade_Slow *const this)
{
  return "particles/items_fx/diffusal_slow.vpcf";
}


// CDOTA_Modifier_Item_Diffusal_Blade_Slow::OnCreated  (line 343, @0x0000000002d7b8f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "purge_rate"
void __fastcall CDOTA_Modifier_Item_Diffusal_Blade_Slow::OnCreated(
        CDOTA_Modifier_Item_Diffusal_Blade_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->purge_rate = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "purge_rate", -1, 0);
  else
    this->purge_rate = 0;
}


// CDOTA_Modifier_Item_Diffusal_Blade_Slow::DeclareFunctions  (line 350, @0x0000000002d6f640, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Diffusal_Blade_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Diffusal_Blade_Slow::DeclareFunctions(
        CDOTA_Modifier_Item_Diffusal_Blade_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Item_Diffusal_Blade_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Item_Diffusal_Blade_Slow::GetModifierMoveSpeedBonus_Percentage  (line 357, @0x0000000002d6f660, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Diffusal_Blade_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Item_Diffusal_Blade_Slow *const this,
        const CModifierParams *const params)
{
  float v3; // xmm0_4
  float v4; // xmm3_4
  float v5; // xmm0_4
  float purge_rate; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  __m128 v9; // xmm0
  __m128i v10; // xmm0
  __m128 v11; // xmm0
  float flCurrentTime; // [rsp+Ch] [rbp-14h]
  float flCurrentTimea; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  flCurrentTime = (*(this->_vptr_CDOTA_Buff + 31))(this, params);
  (*(this->_vptr_CDOTA_Buff + 30))(this);
  v4 = 0.0;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  flCurrentTimea = flCurrentTime - (v3 - v4);
  v5 = (*(this->_vptr_CDOTA_Buff + 31))(this);
  purge_rate = this->purge_rate;
  v7 = v5 / purge_rate;
  if ( v7 > flCurrentTimea )
  {
    v10 = 0xC2C80000;
  }
  else if ( (v7 + v7) > flCurrentTimea )
  {
    v11 = 0x42C80000u;
    v11.m128_f32[0] = 100.0 - (100.0 / purge_rate);
    v10 = _mm_xor_ps(v11, 0x80000000);
  }
  else
  {
    if ( (3.0 * v7) > flCurrentTimea )
    {
      v8 = 200.0;
    }
    else if ( (v7 * 4.0) > flCurrentTimea )
    {
      v8 = 300.0;
    }
    else
    {
      v8 = 400.0;
    }
    v9 = 0x42C80000u;
    v9.m128_f32[0] = 100.0 - (v8 / purge_rate);
    v10 = _mm_xor_ps(v9, 0x80000000);
  }
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v10) << 32) | 1;
  return result;
}


