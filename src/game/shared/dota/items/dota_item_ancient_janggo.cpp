// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_ancient_janggo.cpp:28
class CDOTA_Item_Recipe_Ancient_Janggo : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Ancient_Janggo(CDOTA_Item_Recipe_Ancient_Janggo &);
	CDOTA_Item_Recipe_Ancient_Janggo(CDOTA_Item_Recipe_Ancient_Janggo &);
	CDOTA_Item_Recipe_Ancient_Janggo();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Ancient_Janggo();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_ancient_janggo.cpp:40
class CDOTA_Item_Ancient_Janggo : public CDOTA_Item {
public:

private:

	int radius;  // +0x3e8
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
	CDOTA_Item_Ancient_Janggo(CDOTA_Item_Ancient_Janggo &);
	CDOTA_Item_Ancient_Janggo(CDOTA_Item_Ancient_Janggo &);
	CDOTA_Item_Ancient_Janggo();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual bool ProRatesChargesWhenSelling();
	virtual void OnSpellStart();
	virtual void OnPurchase(int, const char *);
	virtual ~CDOTA_Item_Ancient_Janggo();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[339] ProRatesChargesWhenSelling
	// vtable[266] OnSpellStart
	// vtable[335] OnPurchase
	// sizeof = 1008
};

// src/game/shared/dota/items/dota_item_ancient_janggo.cpp:66
class C_CDOTA_Item_Ancient_Janggo_MapInstall {
	C_CDOTA_Item_Ancient_Janggo_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_ancient_janggo.cpp:129
class CDOTA_Modifier_Item_Ancient_Janggo : public CDOTA_Buff_Item {
public:

private:

	int radius;  // +0xba8
	int bonus_int;  // +0xbac
	int bonus_str;  // +0xbb0
	int bonus_agi;  // +0xbb4
	int bonus_damage;  // +0xbb8
	int bonus_mana_regen;  // +0xbbc
	CDOTA_Modifier_Item_Ancient_Janggo();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierBonusStats_Int(const CModifierParams &);
	virtual ModifierVariant_t GetModifierBonusStats_Str(const CModifierParams &);
	virtual ModifierVariant_t GetModifierBonusStats_Agi(const CModifierParams &);
	virtual ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	ModifierVariant_t OnRespawn(const CModifierParams &);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Item_Ancient_Janggo();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[90] GetModifierBonusStats_Int
	// vtable[91] GetModifierBonusStats_Str
	// vtable[92] GetModifierBonusStats_Agi
	// vtable[93] GetModifierPreAttack_BonusDamage
	// vtable[94] GetModifierPercentageManaRegen
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// sizeof = 3008
};

// src/game/shared/dota/items/dota_item_ancient_janggo.cpp:263
class CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect : public CDOTA_Buff {
public:

private:

	int bonus_aura_movement_speed;  // +0xba8
	CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Constant(const CModifierParams &);
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[7] GetAttributes
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_ancient_janggo.cpp:308
class CDOTA_Modifier_Item_Ancient_Janggo_Active : public CDOTA_Buff {
public:

private:

	int bonus_attack_speed_pct;  // +0xba8
	int bonus_movement_speed_pct;  // +0xbac
	CDOTA_Modifier_Item_Ancient_Janggo_Active();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Item_Ancient_Janggo_Active();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[7] GetAttributes
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Ancient_Janggo::~CDOTA_Item_Recipe_Ancient_Janggo  (line 28, @0x0000000002d64260, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Ancient_Janggo::~CDOTA_Item_Recipe_Ancient_Janggo(
        CDOTA_Item_Recipe_Ancient_Janggo *const this)
{
  this->_vptr_IHandleEntity = &off_46852F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Ancient_Janggo::~CDOTA_Item_Recipe_Ancient_Janggo  (line 28, @0x0000000002d64280, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Ancient_Janggo
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Ancient_Janggo::~CDOTA_Item_Recipe_Ancient_Janggo(
        CDOTA_Item_Recipe_Ancient_Janggo *const this)
{
  this->_vptr_IHandleEntity = &off_46852F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Ancient_Janggo::Schema_DynamicBinding  (line 30, @0x0000000002d60690, libserver.so)
// globals: CDOTA_Item_Recipe_Ancient_Janggo::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Ancient_Janggo::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Ancient_Janggo *const this)
{
  return CDOTA_Item_Recipe_Ancient_Janggo::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002d606a0, libserver.so)
// globals: CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002d606b0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Ancient_Janggo>
void __fastcall CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002d606d0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002d606f0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002d60700, libserver.so)
// globals: CDOTA_Item_Recipe_Ancient_Janggo::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Ancient_Janggo::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002d62330, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002d63540, libserver.so)  // inlines: CDOTA_Item_Recipe_Ancient_Janggo, Construct<CDOTA_Item_Recipe_Ancient_Janggo>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46852F0;
  }
  return p;
}


// CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002d66180, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002d661a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInternal  (line 30, @0x0000000002d6a290, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "item_recipe_ancient_janggo", "CDOTA_Item_Recipe_Ancient_Janggo"
// globals: `guard variable for'CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClass, CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClass, __dso_handle, CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClassInfo, CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClass);
    CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClass._vptr_CEntityClass = off_4685270;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Ancient_JanggoClass != 0 )
    return &CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClassInfo,
      "CDOTA_Item_Recipe_Ancient_Janggo",
      "item_recipe_ancient_janggo",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClassInfo);
  }
  CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClass.m_pClassInfo = &CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClassInfo;
  CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Ancient_JanggoClass = &CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClass;
  CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClassInfo.m_pClass = &CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClass;
  CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Ancient_JanggoClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ancient_JanggoClass;
}


// CDOTA_Item_Ancient_Janggo::~CDOTA_Item_Ancient_Janggo  (line 40, @0x0000000002d642b0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Ancient_Janggo::~CDOTA_Item_Ancient_Janggo(CDOTA_Item_Ancient_Janggo *const this)
{
  this->_vptr_IHandleEntity = &off_4685EF0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Ancient_Janggo::~CDOTA_Item_Ancient_Janggo  (line 40, @0x0000000002d642d0, libserver.so)  // inlines: ~CDOTA_Item_Ancient_Janggo
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Ancient_Janggo::~CDOTA_Item_Ancient_Janggo(CDOTA_Item_Ancient_Janggo *const this)
{
  this->_vptr_IHandleEntity = &off_4685EF0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Ancient_Janggo::Schema_DynamicBinding  (line 42, @0x0000000002d60710, libserver.so)
// globals: CDOTA_Item_Ancient_Janggo::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Ancient_Janggo::Schema_DynamicBinding(
        const CDOTA_Item_Ancient_Janggo *const this)
{
  return CDOTA_Item_Ancient_Janggo::s_pSchemaBinding;
}


// CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 42, @0x0000000002d60720, libserver.so)
// globals: CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::DestructInstance  (line 42, @0x0000000002d60730, libserver.so)  // inlines: Destruct<CDOTA_Item_Ancient_Janggo>
void __fastcall CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::FreeInstance  (line 42, @0x0000000002d60750, libserver.so)
void __fastcall CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::CanAllocate  (line 42, @0x0000000002d60770, libserver.so)
bool __fastcall CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 42, @0x0000000002d60780, libserver.so)
// globals: CDOTA_Item_Ancient_Janggo::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Ancient_Janggo::s_pSchemaBinding;
}


// CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::AllocateInstance  (line 42, @0x0000000002d62370, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1008);
  memset(v1, 0, 0x3F0u);
  return v1;
}


// CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::ConstructInstance  (line 42, @0x0000000002d63570, libserver.so)  // inlines: CDOTA_Item_Ancient_Janggo, Construct<CDOTA_Item_Ancient_Janggo>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4685EF0;
  }
  return p;
}


// CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002d661d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002d661f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Ancient_Janggo::GetEntityClassInternal  (line 42, @0x0000000002d6a3e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "CDOTA_Item_Ancient_Janggo"
// globals: `guard variable for'CDOTA_Item_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ancient_JanggoClass, CDOTA_Item_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ancient_JanggoClass, __dso_handle, CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Ancient_Janggo::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ancient_JanggoClassInfo, CDOTA_Item_Ancient_Janggo::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ancient_JanggoClassInfo
CEntityClass *__cdecl CDOTA_Item_Ancient_Janggo::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ancient_JanggoClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ancient_JanggoClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ancient_JanggoClass);
    CDOTA_Item_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ancient_JanggoClass._vptr_CEntityClass = off_4685E70;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ancient_JanggoClass);
    __cxa_atexit(
      CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ancient_JanggoClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Ancient_JanggoClass != 0 )
    return &CDOTA_Item_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ancient_JanggoClass;
  if ( `guard variable for'CDOTA_Item_Ancient_Janggo::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ancient_JanggoClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Ancient_Janggo::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ancient_JanggoClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Ancient_Janggo::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ancient_JanggoClassInfo,
      "CDOTA_Item_Ancient_Janggo",
      "item_ancient_janggo",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Ancient_Janggo::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ancient_JanggoClassInfo);
  }
  CDOTA_Item_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ancient_JanggoClass.m_pClassInfo = &CDOTA_Item_Ancient_Janggo::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ancient_JanggoClassInfo;
  CDOTA_Item_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ancient_JanggoClass.m_pBaseClassInfo = CDOTA_Item_Ancient_Janggo::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ancient_JanggoClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Ancient_JanggoClass = &CDOTA_Item_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ancient_JanggoClass;
  CDOTA_Item_Ancient_Janggo::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ancient_JanggoClassInfo.m_pClass = &CDOTA_Item_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ancient_JanggoClass;
  CDOTA_Item_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ancient_JanggoClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Ancient_JanggoClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Ancient_Janggo::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ancient_JanggoClass;
}


// CDOTA_Item_Ancient_Janggo::GetIntrinsicModifierName  (line 46, @0x0000000002d60790, libserver.so)
// strings: "modifier_item_ancient_janggo"
const char *__fastcall CDOTA_Item_Ancient_Janggo::GetIntrinsicModifierName(CDOTA_Item_Ancient_Janggo *const this)
{
  return "modifier_item_ancient_janggo";
}


// CDOTA_Item_Ancient_Janggo::ProRatesChargesWhenSelling  (line 48, @0x0000000002d607a0, libserver.so)
bool __fastcall CDOTA_Item_Ancient_Janggo::ProRatesChargesWhenSelling(CDOTA_Item_Ancient_Janggo *const this)
{
  return 0;
}


// CDOTA_Item_Ancient_Janggo::YouForgotToImplementOrDeclareServerClass  (line 66, @0x0000000002d53bd0, libserver.so)
int __fastcall CDOTA_Item_Ancient_Janggo::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_Ancient_Janggo *const this)
{
  return 0;
}


// CDOTA_Item_Ancient_Janggo::GetServerClass  (line 66, @0x0000000002d588f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Ancient_Janggo::GetServerClass(CDOTA_Item_Ancient_Janggo *const this)
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


// CDOTA_Item_Ancient_Janggo::OnSpellStart  (line 75, @0x0000000002d5e440, libserver.so)  // inlines: CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Item::SpendCharge, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, CUtlMemory<CHandle<CBaseEntity>, int>::Purge (15 total)
// strings: "modifier_item_ancient_janggo_bonus", "modifier_item_ancient_janggo_active", "DOTA_Item.DoE.Activate"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_Ancient_Janggo::OnSpellStart(CDOTA_Item_Ancient_Janggo *const this)
{
  int LevelSpecialValue; // r12d
  float v3; // xmm1_4
  __m128i v4; // xmm1
  float v5; // r12d
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v9; // rax
  __int64 v10; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *m_pInstance; // r13
  unsigned __int16 v18; // dx
  int v19; // esi
  int v20; // eax
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  if ( this->m_iCurrentCharges.m_Value != 0 )
  {
    CDOTA_Item::SpendCharge(this);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_item_ancient_janggo_bonus");
    KeyValues::SetFloat(&kv, "duration", v3);
    *v4.m128i_i32 = LevelSpecialValue;
    hUnits.m_Size = 0;
    hUnits.m_Memory.m_pMemory = 0;
    hUnits.m_Memory.m_nAllocationCount = 0;
    hUnits.m_Memory.m_nGrowSize = 0;
    v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    Caster = CDOTABaseAbility::GetCaster(this);
    v7 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
    v9 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v9->m_iTeamNum.m_Value, AbsOrigin, Caster, v5, &hUnits, 1, 3, 64, 0, 0);
    v10 = 0;
    for ( i = 0; hUnits.m_Size > i; ++v10 )
    {
      v12 = &hUnits.m_Memory.m_pMemory[v10];
      m_Index = hUnits.m_Memory.m_pMemory[v10].m_Index;
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
              if ( HIDWORD(m_pInstance[11].m_pEntity) == -1 )
              {
                v18 = 0x7FFF;
                v19 = 0x7FFF;
              }
              else
              {
                v18 = WORD2(m_pInstance[11].m_pEntity) & 0x7FFF;
                v19 = v18;
              }
              v20 = (HIDWORD(m_pInstance[11].m_pEntity) >> 15 << 15) | v18 & 0x7FFF;
              if ( (v20 + 2) > 1 )
              {
                v21 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v19 >> 9];
                if ( v21 != 0 )
                {
                  v22 = &v21[v19 & 0x1FF];
                  if ( v22 != 0 && v20 == v22->m_EHandle.m_Index && v22->m_pInstance != 0 )
                  {
                    v23 = CDOTABaseAbility::GetCaster(this);
                    CDOTA_BaseNPC::AddNewModifier(m_pInstance, v23, this, "modifier_item_ancient_janggo_active", &kv, 0);
                  }
                }
              }
            }
          }
        }
      }
      ++i;
    }
    v24 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "DOTA_Item.DoE.Activate", v24);
    hUnits.m_Size = 0;
    if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) != 0
      || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory), (hUnits.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
    {
      KeyValues::~KeyValues(&kv);
    }
    else
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Item_Ancient_Janggo::OnPurchase  (line 111, @0x0000000002d56ba0, libserver.so)  // inlines: NetworkStateChanged, Set, SetAssembledTime, operator=<float>
// calls: CDOTA_Item::OnPurchase
void __fastcall CDOTA_Item_Ancient_Janggo::OnPurchase(
        CDOTA_Item_Ancient_Janggo *const this,
        int nCombineType,
        const char *pszRecipeItemName)
{
  if ( nCombineType > 0 && this->m_flAssembledTime.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 968, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
    this->m_flAssembledTime.m_Value = 0.0;
  }
  CDOTA_Item::OnPurchase(this, nCombineType, 0);
}


// CDOTA_Modifier_Item_Ancient_Janggo::~CDOTA_Modifier_Item_Ancient_Janggo  (line 129, @0x0000000002d62fd0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Ancient_Janggo::~CDOTA_Modifier_Item_Ancient_Janggo(
        CDOTA_Modifier_Item_Ancient_Janggo *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Ancient_Janggo::~CDOTA_Modifier_Item_Ancient_Janggo  (line 129, @0x0000000002d62ff0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Ancient_Janggo
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Ancient_Janggo::~CDOTA_Modifier_Item_Ancient_Janggo(
        CDOTA_Modifier_Item_Ancient_Janggo *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Ancient_Janggo::IsAura  (line 146, @0x0000000002d607b0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Ancient_Janggo::IsAura(CDOTA_Modifier_Item_Ancient_Janggo *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Ancient_Janggo::GetModifierAura  (line 147, @0x0000000002d607c0, libserver.so)
// strings: "modifier_item_ancient_janggo_aura_effect"
const char *__fastcall CDOTA_Modifier_Item_Ancient_Janggo::GetModifierAura(
        CDOTA_Modifier_Item_Ancient_Janggo *const this)
{
  return "modifier_item_ancient_janggo_aura_effect";
}


// CDOTA_Modifier_Item_Ancient_Janggo::GetAuraSearchTeam  (line 148, @0x0000000002d607d0, libserver.so)
int __fastcall CDOTA_Modifier_Item_Ancient_Janggo::GetAuraSearchTeam(CDOTA_Modifier_Item_Ancient_Janggo *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Ancient_Janggo::GetAuraSearchType  (line 149, @0x0000000002d607e0, libserver.so)
int __fastcall CDOTA_Modifier_Item_Ancient_Janggo::GetAuraSearchType(CDOTA_Modifier_Item_Ancient_Janggo *const this)
{
  return 3;
}


// CDOTA_Modifier_Item_Ancient_Janggo::GetAuraSearchFlags  (line 150, @0x0000000002d607f0, libserver.so)
int __fastcall CDOTA_Modifier_Item_Ancient_Janggo::GetAuraSearchFlags(CDOTA_Modifier_Item_Ancient_Janggo *const this)
{
  return 64;
}


// CDOTA_Modifier_Item_Ancient_Janggo::GetAuraRadius  (line 151, @0x0000000002d60800, libserver.so)
int __fastcall CDOTA_Modifier_Item_Ancient_Janggo::GetAuraRadius(CDOTA_Modifier_Item_Ancient_Janggo *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Item_Ancient_Janggo::OnCreated  (line 168, @0x0000000002d5f910, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_int", "bonus_str", "bonus_agi", "bonus_mana_regen"
void __fastcall CDOTA_Modifier_Item_Ancient_Janggo::OnCreated(
        CDOTA_Modifier_Item_Ancient_Janggo *const this,
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
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_int = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_int", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->bonus_int = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_str = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_str", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  this->bonus_str = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_agi = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_agi", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->bonus_damage = 0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
    goto LABEL_13;
  }
LABEL_11:
  this->bonus_agi = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "bonus_damage", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
LABEL_7:
    this->bonus_mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "bonus_mana_regen", -1, 0);
    return;
  }
LABEL_13:
  this->bonus_mana_regen = 0;
}


// CDOTA_Modifier_Item_Ancient_Janggo::OnDeath  (line 187, @0x0000000002d57380, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ancient_Janggo::OnDeath(
        CDOTA_Modifier_Item_Ancient_Janggo *const this,
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


// CDOTA_Modifier_Item_Ancient_Janggo::OnRespawn  (line 199, @0x0000000002d572f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ancient_Janggo::OnRespawn(
        CDOTA_Modifier_Item_Ancient_Janggo *const this,
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


// CDOTA_Modifier_Item_Ancient_Janggo::DeclareFunctions  (line 213, @0x0000000002d53be0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Ancient_Janggo::OnDeath(CModifierParams const&), CDOTA_Modifier_Item_Ancient_Janggo::OnRespawn(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Ancient_Janggo::DeclareFunctions(CDOTA_Modifier_Item_Ancient_Janggo *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_Item_Ancient_Janggo::OnDeath;
  this->m_Functions[64].__pfn = (&stru_10 + 713);
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__pfn = (&stru_10 + 721);
  this->m_Functions[65].__delta = 0;
  this->m_Functions[66].__pfn = (&stru_10 + 705);
  this->m_Functions[66].__delta = 0;
  this->m_Functions[0].__pfn = (&stru_10 + 729);
  this->m_Functions[0].__delta = 0;
  this->m_Functions[54].__pfn = (&stru_10 + 737);
  this->m_Functions[54].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[139].__pfn = CDOTA_Modifier_Item_Ancient_Janggo::OnRespawn;
  this->m_Functions[139].__delta = 0;
}


// CDOTA_Modifier_Item_Ancient_Janggo::GetModifierBonusStats_Int  (line 228, @0x0000000002d53c90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ancient_Janggo::GetModifierBonusStats_Int(
        CDOTA_Modifier_Item_Ancient_Janggo *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_int;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Ancient_Janggo::GetModifierBonusStats_Str  (line 235, @0x0000000002d53cb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ancient_Janggo::GetModifierBonusStats_Str(
        CDOTA_Modifier_Item_Ancient_Janggo *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_str;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Ancient_Janggo::GetModifierBonusStats_Agi  (line 242, @0x0000000002d53cd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ancient_Janggo::GetModifierBonusStats_Agi(
        CDOTA_Modifier_Item_Ancient_Janggo *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agi;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Ancient_Janggo::GetModifierPreAttack_BonusDamage  (line 249, @0x0000000002d53cf0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ancient_Janggo::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Ancient_Janggo *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Ancient_Janggo::GetModifierPercentageManaRegen  (line 254, @0x0000000002d53d10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ancient_Janggo::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_Ancient_Janggo *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect::~CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect  (line 263, @0x0000000002d63390, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect::~CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect(
        CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_4686E10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect::~CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect  (line 263, @0x0000000002d633b0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect::~CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect(
        CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_4686E10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect::GetAttributes  (line 273, @0x0000000002d640b0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect::GetAttributes(
        CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 4;
}


// CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect::OnCreated  (line 284, @0x0000000002d5eda0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_aura_movement_speed"
void __fastcall CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect::OnCreated(
        CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_aura_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        Ability,
                                        "bonus_aura_movement_speed",
                                        -1,
                                        0);
  else
    this->bonus_aura_movement_speed = 0;
}


// CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect::DeclareFunctions  (line 291, @0x0000000002d53d30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect::GetModifierMoveSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect::DeclareFunctions(
        CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect *const this)
{
  this->m_Functions[11].__pfn = CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect::GetModifierMoveSpeedBonus_Constant;
  this->m_Functions[11].__delta = 0;
}


// CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect::GetModifierMoveSpeedBonus_Constant  (line 298, @0x0000000002d53d50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect::GetModifierMoveSpeedBonus_Constant(
        CDOTA_Modifier_Item_Ancient_Janggo_Aura_Effect *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_aura_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Ancient_Janggo_Active::~CDOTA_Modifier_Item_Ancient_Janggo_Active  (line 308, @0x0000000002d63340, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Ancient_Janggo_Active::~CDOTA_Modifier_Item_Ancient_Janggo_Active(
        CDOTA_Modifier_Item_Ancient_Janggo_Active *const this)
{
  this->_vptr_CDOTA_Buff = &off_4687130;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Ancient_Janggo_Active::~CDOTA_Modifier_Item_Ancient_Janggo_Active  (line 308, @0x0000000002d63360, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Ancient_Janggo_Active
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Ancient_Janggo_Active::~CDOTA_Modifier_Item_Ancient_Janggo_Active(
        CDOTA_Modifier_Item_Ancient_Janggo_Active *const this)
{
  this->_vptr_CDOTA_Buff = &off_4687130;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Ancient_Janggo_Active::GetEffectName  (line 319, @0x0000000002d60810, libserver.so)
// strings: "particles/items_fx/drum_of_endurance_buff.vpcf"
const char *__fastcall CDOTA_Modifier_Item_Ancient_Janggo_Active::GetEffectName(
        CDOTA_Modifier_Item_Ancient_Janggo_Active *const this)
{
  return "particles/items_fx/drum_of_endurance_buff.vpcf";
}


// CDOTA_Modifier_Item_Ancient_Janggo_Active::GetAttributes  (line 321, @0x0000000002d640c0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Item_Ancient_Janggo_Active::GetAttributes(
        CDOTA_Modifier_Item_Ancient_Janggo_Active *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 4;
}


// CDOTA_Modifier_Item_Ancient_Janggo_Active::OnCreated  (line 333, @0x0000000002d5f2b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_attack_speed_pct", "bonus_movement_speed_pct"
void __fastcall CDOTA_Modifier_Item_Ancient_Janggo_Active::OnCreated(
        CDOTA_Modifier_Item_Ancient_Janggo_Active *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_attack_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                     Ability,
                                     "bonus_attack_speed_pct",
                                     -1,
                                     0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         v4,
                                         "bonus_movement_speed_pct",
                                         -1,
                                         0);
      return;
    }
  }
  else
  {
    this->bonus_attack_speed_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_movement_speed_pct = 0;
}


// CDOTA_Modifier_Item_Ancient_Janggo_Active::DeclareFunctions  (line 341, @0x0000000002d53d70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Ancient_Janggo_Active::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Item_Ancient_Janggo_Active::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Ancient_Janggo_Active::DeclareFunctions(
        CDOTA_Modifier_Item_Ancient_Janggo_Active *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Item_Ancient_Janggo_Active::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_Ancient_Janggo_Active::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_Item_Ancient_Janggo_Active::GetModifierMoveSpeedBonus_Percentage  (line 349, @0x0000000002d53db0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ancient_Janggo_Active::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Item_Ancient_Janggo_Active *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speed_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Ancient_Janggo_Active::GetModifierAttackSpeedBonus_Constant  (line 356, @0x0000000002d53dd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ancient_Janggo_Active::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_Ancient_Janggo_Active *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


