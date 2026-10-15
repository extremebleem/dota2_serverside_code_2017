// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_pipe.cpp:28
class CDOTA_Item_Recipe_Pipe : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Pipe(CDOTA_Item_Recipe_Pipe &);
	CDOTA_Item_Recipe_Pipe(CDOTA_Item_Recipe_Pipe &);
	CDOTA_Item_Recipe_Pipe();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Pipe();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_pipe.cpp:40
class CDOTA_Item_Pipe : public CDOTA_Item {
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
	CDOTA_Item_Pipe(CDOTA_Item_Pipe &);
	CDOTA_Item_Pipe(CDOTA_Item_Pipe &);
	CDOTA_Item_Pipe();
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
	virtual ~CDOTA_Item_Pipe();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_pipe.cpp:55
class C_CDOTA_Item_Pipe_MapInstall {
	C_CDOTA_Item_Pipe_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_pipe.cpp:107
class CDOTA_Modifier_Item_Pipe : public CDOTA_Buff_Item {
public:

private:

	int bonus_all_stats;  // +0xba8
	int health_regen;  // +0xbac
	int magic_resistance;  // +0xbb0
	int aura_radius;  // +0xbb4
	CDOTA_Modifier_Item_Pipe();
	virtual void OnCreated(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Pipe();

	// vtable[57] OnCreated
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_pipe.cpp:198
class CDOTA_Modifier_Item_Pipe_Aura : public CDOTA_Buff {
public:

private:

	int aura_health_regen;  // +0xba8
	int magic_resistance_aura;  // +0xbac
	CDOTA_Modifier_Item_Pipe_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Pipe_Aura();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_pipe.cpp:253
class CDOTA_Modifier_Item_Pipe_Barrier : public CDOTA_Buff {
public:

private:

	int barrier_amount;  // +0xba8
	int barrier_block;  // +0xbac
	int barrier_block_creep;  // +0xbb0
	CDOTA_Modifier_Item_Pipe_Barrier();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierIncomingSpellDamageConstant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Pipe_Barrier();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_pipe.cpp:359
class CDOTA_Modifier_Item_Pipe_Debuff : public CDOTA_Buff {
public:

	CDOTA_Modifier_Item_Pipe_Debuff(CDOTA_Modifier_Item_Pipe_Debuff &);
	CDOTA_Modifier_Item_Pipe_Debuff(const CDOTA_Modifier_Item_Pipe_Debuff &);
	CDOTA_Modifier_Item_Pipe_Debuff();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Item_Pipe_Debuff();

	// vtable[14] IsPurgable
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Pipe::~CDOTA_Item_Recipe_Pipe  (line 28, @0x0000000002dd8230, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Pipe::~CDOTA_Item_Recipe_Pipe(CDOTA_Item_Recipe_Pipe *const this)
{
  this->_vptr_IHandleEntity = &off_4739250;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Pipe::~CDOTA_Item_Recipe_Pipe  (line 28, @0x0000000002dd8250, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Pipe
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Pipe::~CDOTA_Item_Recipe_Pipe(CDOTA_Item_Recipe_Pipe *const this)
{
  this->_vptr_IHandleEntity = &off_4739250;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Pipe::Schema_DynamicBinding  (line 30, @0x0000000002dd4810, libserver.so)
// globals: CDOTA_Item_Recipe_Pipe::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Pipe::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Pipe *const this)
{
  return CDOTA_Item_Recipe_Pipe::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002dd4820, libserver.so)
// globals: CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002dd4830, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Pipe>
void __fastcall CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002dd4850, libserver.so)
void __fastcall CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002dd4870, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002dd4880, libserver.so)
// globals: CDOTA_Item_Recipe_Pipe::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Pipe::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002dd60f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002dd7190, libserver.so)  // inlines: CDOTA_Item_Recipe_Pipe, Construct<CDOTA_Item_Recipe_Pipe>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4739250;
  }
  return p;
}


// CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002dda160, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002dda180, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Pipe::GetEntityClassInternal  (line 30, @0x0000000002de2510, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_recipe_pipe", "CDOTA_Item_Recipe_Pipe", "dota_item", "CDOTA_Item", "dota_base_ability", "CDOTABaseAbility" (8 total)
// globals: `guard variable for'CDOTA_Item_Recipe_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PipeClass, CDOTA_Item_Recipe_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PipeClass, __dso_handle, CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Pipe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PipeClassInfo, CDOTA_Item_Recipe_Pipe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PipeClassInfo, `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo (14 total)
CEntityClass *__cdecl CDOTA_Item_Recipe_Pipe::GetEntityClassInternal()
{
  if ( `guard variable for'CDOTA_Item_Recipe_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PipeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PipeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PipeClass);
    CDOTA_Item_Recipe_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PipeClass._vptr_CEntityClass = off_47391D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PipeClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PipeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_PipeClass != 0 )
    return &CDOTA_Item_Recipe_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PipeClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Pipe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PipeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Pipe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PipeClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo) != 0 )
    {
      if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) != 0 )
      {
        if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
          && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
        {
          if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
            && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
          {
            CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
              &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
              "CGameEntity",
              0,
              0,
              &g_EntityRootClassInfo);
            __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
          }
          CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
            &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
            "CBaseEntity",
            0,
            0,
            &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
          __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
        }
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
          "CDOTABaseAbility",
          "dota_base_ability",
          0,
          &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
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
      &CDOTA_Item_Recipe_Pipe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PipeClassInfo,
      "CDOTA_Item_Recipe_Pipe",
      "item_recipe_pipe",
      0,
      &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Pipe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PipeClassInfo);
  }
  CDOTA_Item_Recipe_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PipeClass.m_pClassInfo = &CDOTA_Item_Recipe_Pipe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PipeClassInfo;
  CDOTA_Item_Recipe_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PipeClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Pipe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PipeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_PipeClass = &CDOTA_Item_Recipe_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PipeClass;
  CDOTA_Item_Recipe_Pipe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PipeClassInfo.m_pClass = &CDOTA_Item_Recipe_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PipeClass;
  CDOTA_Item_Recipe_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PipeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_PipeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PipeClass;
}


// CDOTA_Item_Pipe::~CDOTA_Item_Pipe  (line 40, @0x0000000002dd8280, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Pipe::~CDOTA_Item_Pipe(CDOTA_Item_Pipe *const this)
{
  this->_vptr_IHandleEntity = &off_4739E50;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Pipe::~CDOTA_Item_Pipe  (line 40, @0x0000000002dd82a0, libserver.so)  // inlines: ~CDOTA_Item_Pipe
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Pipe::~CDOTA_Item_Pipe(CDOTA_Item_Pipe *const this)
{
  this->_vptr_IHandleEntity = &off_4739E50;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Pipe::Schema_DynamicBinding  (line 42, @0x0000000002dd4890, libserver.so)
// globals: CDOTA_Item_Pipe::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Pipe::Schema_DynamicBinding(const CDOTA_Item_Pipe *const this)
{
  return CDOTA_Item_Pipe::s_pSchemaBinding;
}


// CDOTA_Item_Pipe::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 42, @0x0000000002dd48a0, libserver.so)
// globals: CDOTA_Item_Pipe::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Pipe::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Pipe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Pipe::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Pipe::CEntityInstanceEntityClass::DestructInstance  (line 42, @0x0000000002dd48b0, libserver.so)  // inlines: Destruct<CDOTA_Item_Pipe>
void __fastcall CDOTA_Item_Pipe::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Pipe::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Pipe::CEntityInstanceEntityClass::FreeInstance  (line 42, @0x0000000002dd48d0, libserver.so)
void __fastcall CDOTA_Item_Pipe::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Pipe::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Pipe::CEntityInstanceEntityClass::CanAllocate  (line 42, @0x0000000002dd48f0, libserver.so)
bool __fastcall CDOTA_Item_Pipe::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Pipe::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Pipe::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 42, @0x0000000002dd4900, libserver.so)
// globals: CDOTA_Item_Pipe::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Pipe::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Pipe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Pipe::s_pSchemaBinding;
}


// CDOTA_Item_Pipe::CEntityInstanceEntityClass::AllocateInstance  (line 42, @0x0000000002dd6130, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Pipe::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Pipe::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Pipe::CEntityInstanceEntityClass::ConstructInstance  (line 42, @0x0000000002dd71c0, libserver.so)  // inlines: CDOTA_Item_Pipe, Construct<CDOTA_Item_Pipe>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Pipe::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Pipe::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4739E50;
  }
  return p;
}


// CDOTA_Item_Pipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002dda1b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Pipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Pipe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Pipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002dda1d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Pipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Pipe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Pipe::GetEntityClassInternal  (line 42, @0x0000000002de2780, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "CDOTA_Item_Pipe"
// globals: `guard variable for'CDOTA_Item_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PipeClass, CDOTA_Item_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PipeClass, __dso_handle, CDOTA_Item_Pipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Pipe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PipeClassInfo, CDOTA_Item_Pipe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PipeClassInfo
CEntityClass *__cdecl CDOTA_Item_Pipe::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PipeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PipeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PipeClass);
    CDOTA_Item_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PipeClass._vptr_CEntityClass = off_4739DD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PipeClass);
    __cxa_atexit(
      CDOTA_Item_Pipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PipeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_PipeClass != 0 )
    return &CDOTA_Item_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PipeClass;
  if ( `guard variable for'CDOTA_Item_Pipe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PipeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Pipe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PipeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Pipe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PipeClassInfo,
      "CDOTA_Item_Pipe",
      "item_pipe",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Pipe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PipeClassInfo);
  }
  CDOTA_Item_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PipeClass.m_pClassInfo = &CDOTA_Item_Pipe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PipeClassInfo;
  CDOTA_Item_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PipeClass.m_pBaseClassInfo = CDOTA_Item_Pipe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PipeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_PipeClass = &CDOTA_Item_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PipeClass;
  CDOTA_Item_Pipe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PipeClassInfo.m_pClass = &CDOTA_Item_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PipeClass;
  CDOTA_Item_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PipeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_PipeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Pipe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PipeClass;
}


// CDOTA_Item_Pipe::GetIntrinsicModifierName  (line 46, @0x0000000002dd4910, libserver.so)
// strings: "modifier_item_pipe"
const char *__fastcall CDOTA_Item_Pipe::GetIntrinsicModifierName(CDOTA_Item_Pipe *const this)
{
  return "modifier_item_pipe";
}


// CDOTA_Item_Pipe::YouForgotToImplementOrDeclareServerClass  (line 55, @0x0000000002dc7570, libserver.so)
int __fastcall CDOTA_Item_Pipe::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Pipe *const this)
{
  return 0;
}


// CDOTA_Item_Pipe::GetServerClass  (line 55, @0x0000000002dca960, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Pipe::GetServerClass(CDOTA_Item_Pipe *const this)
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


// CDOTA_Item_Pipe::OnSpellStart  (line 64, @0x0000000002dd1fb0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::GetModelRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle (22 total)
// strings: "barrier_radius", "barrier_duration", "barrier_debuff_duration", "modifier_item_pipe_barrier", "particles/items2_fx/pipe_of_insight_launch.vpcf", "DOTA_Item.Pipe.Activate"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_Pipe::OnSpellStart(CDOTA_Item_Pipe *const this)
{
  __m128i v2; // xmm2
  float v3; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // r12
  int v9; // ebx
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  float v16; // xmm1_4
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v21; // r12
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  double vecRadius; // [rsp+30h] [rbp-80h]
  float vecRadius_8; // [rsp+38h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  entities.m_Size = 0;
  *v2.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "barrier_radius", -1, 0);
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Caster, v3, &entities, 1, 19, 16, 0, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "barrier_duration", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "barrier_debuff_duration", -1, 0);
  if ( entities.m_Size > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      while ( 1 )
      {
        v10 = &entities.m_Memory.m_pMemory[v8];
        m_Index = entities.m_Memory.m_pMemory[v8].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v12 = v10->m_Index;
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[v12 & 0x1FF];
            if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
            {
              m_pInstance = v14->m_pInstance;
              if ( v14->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        ++v9;
        ++v8;
        if ( entities.m_Size <= v9 )
          goto LABEL_11;
      }
      KeyValues::KeyValues(&kv, "modifier_item_pipe_barrier");
      KeyValues::SetFloat(&kv, "duration", v16);
      v17 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v17, this, "modifier_item_pipe_barrier", &kv, 0);
      ++v9;
      ++v8;
      KeyValues::~KeyValues(&kv);
    }
    while ( entities.m_Size > v9 );
  }
LABEL_11:
  HIDWORD(vecRadius) = LODWORD(vec3_origin.y);
  vecRadius_8 = vec3_origin.z;
  v18 = CDOTABaseAbility::GetCaster(this);
  if ( v18 == 0 || !v18->m_bIsDOTANPC )
    v18 = 0;
  LODWORD(vecRadius) = CDOTA_BaseNPC::GetModelRadius(v18);
  v19 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v19) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/items2_fx/pipe_of_insight_launch.vpcf",
                   7,
                   v19,
                   0,
                   0);
  v21 = CDOTABaseAbility::GetCaster(this);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v22, v19, 1, v21, 1, 0, vec3_invalid, 1);
  v23 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v23, v19, 2, vecRadius, vecRadius_8);
  v24 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v24, v19);
  v25 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(4, "DOTA_Item.Pipe.Activate", v25);
  v26 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::InterruptChannel(v26);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
}


// CDOTA_Modifier_Item_Pipe::~CDOTA_Modifier_Item_Pipe  (line 107, @0x0000000002dd6480, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Pipe::~CDOTA_Modifier_Item_Pipe(CDOTA_Modifier_Item_Pipe *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Pipe::~CDOTA_Modifier_Item_Pipe  (line 107, @0x0000000002dd64a0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Pipe
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Pipe::~CDOTA_Modifier_Item_Pipe(CDOTA_Modifier_Item_Pipe *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Pipe::IsAura  (line 114, @0x0000000002dd4920, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Pipe::IsAura(CDOTA_Modifier_Item_Pipe *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Pipe::GetModifierAura  (line 115, @0x0000000002dd4930, libserver.so)
// strings: "modifier_item_pipe_aura"
const char *__fastcall CDOTA_Modifier_Item_Pipe::GetModifierAura(CDOTA_Modifier_Item_Pipe *const this)
{
  return "modifier_item_pipe_aura";
}


// CDOTA_Modifier_Item_Pipe::GetAuraSearchTeam  (line 117, @0x0000000002dd4940, libserver.so)
int __fastcall CDOTA_Modifier_Item_Pipe::GetAuraSearchTeam(CDOTA_Modifier_Item_Pipe *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Pipe::GetAuraSearchType  (line 118, @0x0000000002dd4950, libserver.so)
int __fastcall CDOTA_Modifier_Item_Pipe::GetAuraSearchType(CDOTA_Modifier_Item_Pipe *const this)
{
  return 19;
}


// CDOTA_Modifier_Item_Pipe::GetAuraSearchFlags  (line 119, @0x0000000002dd4960, libserver.so)
int __fastcall CDOTA_Modifier_Item_Pipe::GetAuraSearchFlags(CDOTA_Modifier_Item_Pipe *const this)
{
  return 16;
}


// CDOTA_Modifier_Item_Pipe::GetAuraRadius  (line 120, @0x0000000002dd4970, libserver.so)
int __fastcall CDOTA_Modifier_Item_Pipe::GetAuraRadius(CDOTA_Modifier_Item_Pipe *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_Item_Pipe::OnCreated  (line 141, @0x0000000002dd1260, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_all_stats"
void __fastcall CDOTA_Modifier_Item_Pipe::OnCreated(CDOTA_Modifier_Item_Pipe *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_all_stats = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_all_stats", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_all_stats = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "health_regen", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->magic_resistance = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->health_regen = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->magic_resistance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "magic_resistance", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "aura_radius", -1, 0);
    return;
  }
LABEL_9:
  this->aura_radius = 0;
}


// CDOTA_Modifier_Item_Pipe::DeclareFunctions  (line 151, @0x0000000002dc7580, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Pipe::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Item_Pipe::GetModifierMagicalResistanceBonus(CModifierParams const&), CDOTA_Modifier_Item_Pipe::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_Pipe::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_Pipe::GetModifierBonusStats_Intellect(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Pipe::DeclareFunctions(CDOTA_Modifier_Item_Pipe *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_Pipe::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[49].__delta = 0;
  this->m_Functions[49].__pfn = CDOTA_Modifier_Item_Pipe::GetModifierMagicalResistanceBonus;
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Pipe::GetModifierBonusStats_Strength;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_Pipe::GetModifierBonusStats_Agility;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Pipe::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_Item_Pipe::GetModifierConstantHealthRegen  (line 162, @0x0000000002dc7610, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Pipe::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Pipe *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Pipe::GetModifierMagicalResistanceBonus  (line 169, @0x0000000002dc7630, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Pipe::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_Item_Pipe *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->magic_resistance;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Pipe::GetModifierBonusStats_Strength  (line 176, @0x0000000002dc7650, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Pipe::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Pipe *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Pipe::GetModifierBonusStats_Agility  (line 183, @0x0000000002dc7670, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Pipe::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_Pipe *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Pipe::GetModifierBonusStats_Intellect  (line 190, @0x0000000002dc7690, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Pipe::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Pipe *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Pipe_Aura::~CDOTA_Modifier_Item_Pipe_Aura  (line 198, @0x0000000002dd68e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Pipe_Aura::~CDOTA_Modifier_Item_Pipe_Aura(
        CDOTA_Modifier_Item_Pipe_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_473AD30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Pipe_Aura::~CDOTA_Modifier_Item_Pipe_Aura  (line 198, @0x0000000002dd6900, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Pipe_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Pipe_Aura::~CDOTA_Modifier_Item_Pipe_Aura(
        CDOTA_Modifier_Item_Pipe_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_473AD30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Pipe_Aura::OnCreated  (line 219, @0x0000000002dd0c50, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "aura_health_regen", "magic_resistance_aura"
void __fastcall CDOTA_Modifier_Item_Pipe_Aura::OnCreated(CDOTA_Modifier_Item_Pipe_Aura *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->aura_health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_health_regen", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->magic_resistance_aura = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "magic_resistance_aura", -1, 0);
      return;
    }
  }
  else
  {
    this->aura_health_regen = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->magic_resistance_aura = 0;
}


// CDOTA_Modifier_Item_Pipe_Aura::DeclareFunctions  (line 227, @0x0000000002dc76b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Pipe_Aura::GetModifierMagicalResistanceBonus(CModifierParams const&), CDOTA_Modifier_Item_Pipe_Aura::GetModifierConstantHealthRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Pipe_Aura::DeclareFunctions(CDOTA_Modifier_Item_Pipe_Aura *const this)
{
  this->m_Functions[49].__pfn = CDOTA_Modifier_Item_Pipe_Aura::GetModifierMagicalResistanceBonus;
  this->m_Functions[49].__delta = 0;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_Pipe_Aura::GetModifierConstantHealthRegen;
}


// CDOTA_Modifier_Item_Pipe_Aura::GetModifierMagicalResistanceBonus  (line 235, @0x0000000002dc76f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Pipe_Aura::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_Item_Pipe_Aura *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->magic_resistance_aura;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Pipe_Aura::GetModifierConstantHealthRegen  (line 242, @0x0000000002dc7710, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Pipe_Aura::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Pipe_Aura *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->aura_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Pipe_Barrier::~CDOTA_Modifier_Item_Pipe_Barrier  (line 253, @0x0000000002dd6890, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Pipe_Barrier::~CDOTA_Modifier_Item_Pipe_Barrier(
        CDOTA_Modifier_Item_Pipe_Barrier *const this)
{
  this->_vptr_CDOTA_Buff = &off_473B050;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Pipe_Barrier::~CDOTA_Modifier_Item_Pipe_Barrier  (line 253, @0x0000000002dd68b0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Pipe_Barrier
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Pipe_Barrier::~CDOTA_Modifier_Item_Pipe_Barrier(
        CDOTA_Modifier_Item_Pipe_Barrier *const this)
{
  this->_vptr_CDOTA_Buff = &off_473B050;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Pipe_Barrier::IsPurgable  (line 260, @0x0000000002dd4980, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Pipe_Barrier::IsPurgable(CDOTA_Modifier_Item_Pipe_Barrier *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Pipe_Barrier::OnCreated  (line 275, @0x0000000002dd0200, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::GetModelRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle
// strings: "barrier_block", "barrier_block_creep", "particles/items2_fx/pipe_of_insight.vpcf"
void __fastcall CDOTA_Modifier_Item_Pipe_Barrier::OnCreated(
        CDOTA_Modifier_Item_Pipe_Barrier *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  int barrier_block_creep; // eax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v7; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v9; // r13
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  double vecRadius; // [rsp+10h] [rbp-30h]
  float vecRadius_8; // [rsp+18h] [rbp-28h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->barrier_block, "barrier_block");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->barrier_block_creep, "barrier_block_creep");
  if ( SLOBYTE(CDOTA_Buff::GetParent(this)->m_iUnitType) >= 0 )
    barrier_block_creep = this->barrier_block_creep;
  else
    barrier_block_creep = this->barrier_block;
  this->barrier_amount = barrier_block_creep;
  HIDWORD(vecRadius) = LODWORD(vec3_origin.y);
  vecRadius_8 = vec3_origin.z;
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent == 0 || !Parent->m_bIsDOTANPC )
    Parent = 0;
  LODWORD(vecRadius) = CDOTA_BaseNPC::GetModelRadius(Parent);
  v7 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(v7) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/items2_fx/pipe_of_insight.vpcf",
                  7,
                  v7,
                  0,
                  0);
  v9 = CDOTA_Buff::GetParent(this);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v10, v7, 1, v9, 1, 0, vec3_invalid, 1);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, v7, 2, vecRadius, vecRadius_8);
  CDOTA_Buff::AddParticle(this, v7, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Item_Pipe_Barrier::OnRefresh  (line 302, @0x0000000002dd0fb0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent
// strings: "barrier_block", "barrier_block_creep"
void __fastcall CDOTA_Modifier_Item_Pipe_Barrier::OnRefresh(
        CDOTA_Modifier_Item_Pipe_Barrier *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  int barrier_block; // eax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->barrier_block = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "barrier_block", -1, 0);
  else
    this->barrier_block = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->barrier_block_creep = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "barrier_block_creep", -1, 0);
  else
    this->barrier_block_creep = 0;
  if ( SLOBYTE(CDOTA_Buff::GetParent(this)->m_iUnitType) < 0 )
    barrier_block = this->barrier_block;
  else
    barrier_block = this->barrier_block_creep;
  this->barrier_amount = barrier_block;
}


// CDOTA_Modifier_Item_Pipe_Barrier::DeclareFunctions  (line 319, @0x0000000002dc7730, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Pipe_Barrier::GetModifierIncomingSpellDamageConstant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Pipe_Barrier::DeclareFunctions(CDOTA_Modifier_Item_Pipe_Barrier *const this)
{
  this->m_Functions[39].__pfn = CDOTA_Modifier_Item_Pipe_Barrier::GetModifierIncomingSpellDamageConstant;
  this->m_Functions[39].__delta = 0;
}


// CDOTA_Modifier_Item_Pipe_Barrier::GetModifierIncomingSpellDamageConstant  (line 326, @0x0000000002dc7f90, libserver.so)  // inlines: ModifierVariant_t
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_CombatLog::AddHeroSavedEvent, CDOTA_Buff::Destroy
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Pipe_Barrier::GetModifierIncomingSpellDamageConstant(
        CDOTA_Modifier_Item_Pipe_Barrier *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm3
  CDOTA_BaseNPC *Parent; // rax
  float barrier_amount; // xmm0_4
  int v8; // eax
  __m128i v9; // xmm0
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // r13
  CDOTA_BaseNPC *Caster; // r12
  CDOTABaseAbility *Ability; // rax
  float fDamage; // [rsp+8h] [rbp-28h]
  float v15; // [rsp+8h] [rbp-28h]
  float flDamage; // [rsp+Ch] [rbp-24h]
  ModifierVariant_t result; // 0:rax.16

  if ( params->bTooltip )
  {
    *v2.m128i_i32 = this->barrier_amount;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  }
  else
  {
    flDamage = params->fDamage;
    if ( CDOTA_Buff::GetParent(this) != 0 )
    {
      fDamage = params->fDamage;
      Parent = CDOTA_Buff::GetParent(this);
      if ( fDamage >= CBaseEntity::GetHealth(Parent) )
      {
        v15 = params->fDamage - this->barrier_amount;
        v10 = CDOTA_Buff::GetParent(this);
        if ( CBaseEntity::GetHealth(v10) > v15 )
        {
          v11 = CDOTA_Buff::GetParent(this);
          Caster = CDOTA_Buff::GetCaster(this);
          Ability = CDOTA_Buff::GetAbility(this);
          CDOTA_CombatLog::AddHeroSavedEvent(&g_DOTACombatLog, Ability, Caster, v11, 0);
        }
      }
    }
    barrier_amount = this->barrier_amount;
    if ( flDamage >= barrier_amount )
    {
      CDOTA_Buff::Destroy(this, 0, 0, 0);
      *v9.m128i_i32 = -this->barrier_amount;
    }
    else
    {
      v8 = (barrier_amount - flDamage);
      v9 = _mm_xor_ps(LODWORD(flDamage), 0x80000000);
      this->barrier_amount = v8;
    }
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v9) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Item_Pipe_Debuff::~CDOTA_Modifier_Item_Pipe_Debuff  (line 359, @0x0000000002dd6c00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Pipe_Debuff::~CDOTA_Modifier_Item_Pipe_Debuff(
        CDOTA_Modifier_Item_Pipe_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_473B330;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Pipe_Debuff::~CDOTA_Modifier_Item_Pipe_Debuff  (line 359, @0x0000000002dd6c20, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Pipe_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Pipe_Debuff::~CDOTA_Modifier_Item_Pipe_Debuff(
        CDOTA_Modifier_Item_Pipe_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_473B330;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Pipe_Debuff::IsPurgable  (line 364, @0x0000000002dd4990, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Pipe_Debuff::IsPurgable(CDOTA_Modifier_Item_Pipe_Debuff *const this)
{
  return 0;
}


