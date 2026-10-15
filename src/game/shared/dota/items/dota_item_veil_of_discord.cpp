// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_veil_of_discord.cpp:26
class CDOTA_Item_Recipe_Veil_Of_Discord : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Veil_Of_Discord(CDOTA_Item_Recipe_Veil_Of_Discord &);
	CDOTA_Item_Recipe_Veil_Of_Discord(CDOTA_Item_Recipe_Veil_Of_Discord &);
	CDOTA_Item_Recipe_Veil_Of_Discord();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Item_Recipe_Veil_Of_Discord();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_veil_of_discord.cpp:33
class C_CDOTA_Item_Recipe_Veil_Of_Discord_MapInstall {
	C_CDOTA_Item_Recipe_Veil_Of_Discord_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_veil_of_discord.cpp:44
class CDOTA_Item_Veil_Of_Discord : public CDOTA_Item {
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
	CDOTA_Item_Veil_Of_Discord(CDOTA_Item_Veil_Of_Discord &);
	CDOTA_Item_Veil_Of_Discord(CDOTA_Item_Veil_Of_Discord &);
	CDOTA_Item_Veil_Of_Discord();
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
	virtual ~CDOTA_Item_Veil_Of_Discord();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_veil_of_discord.cpp:65
class C_CDOTA_Item_Veil_Of_Discord_MapInstall {
	C_CDOTA_Item_Veil_Of_Discord_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_veil_of_discord.cpp:114
class CDOTA_Modifier_Item_Veil_Of_Discord : public CDOTA_Buff_Item {
public:

private:

	int bonus_str;  // +0xba8
	int bonus_agi;  // +0xbac
	int bonus_int;  // +0xbb0
	int bonus_armor;  // +0xbb4
	int bonus_health_regen;  // +0xbb8
	int bonus_damage;  // +0xbbc
	CDOTA_Modifier_Item_Veil_Of_Discord();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierBonusStats_Agi(const CModifierParams &);
	virtual ModifierVariant_t GetModifierBonusStats_Int(const CModifierParams &);
	virtual ModifierVariant_t GetModifierBonusStats_Str(const CModifierParams &);
	virtual ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	virtual ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Veil_Of_Discord();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[90] GetModifierBonusStats_Agi
	// vtable[91] GetModifierBonusStats_Int
	// vtable[92] GetModifierBonusStats_Str
	// vtable[93] GetModifierPhysicalArmorBonus
	// vtable[94] GetModifierConstantHealthRegen
	// vtable[95] GetModifierPreAttack_BonusDamage
	// sizeof = 3008
};

// src/game/shared/dota/items/dota_item_veil_of_discord.cpp:195
class CDOTA_Modifier_Item_Veil_Of_Discord_Debuff : public CDOTA_Buff {
public:

private:

	int resist_debuff;  // +0xba8
	CDOTA_Modifier_Item_Veil_Of_Discord_Debuff();
	virtual bool IsDebuff();
	ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Item_Veil_Of_Discord_Debuff();

	// vtable[12] IsDebuff
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Veil_Of_Discord::~CDOTA_Item_Recipe_Veil_Of_Discord  (line 26, @0x0000000002e0f760, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Veil_Of_Discord::~CDOTA_Item_Recipe_Veil_Of_Discord(
        CDOTA_Item_Recipe_Veil_Of_Discord *const this)
{
  this->_vptr_IHandleEntity = &off_4786AF0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Veil_Of_Discord::~CDOTA_Item_Recipe_Veil_Of_Discord  (line 26, @0x0000000002e0f780, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Veil_Of_Discord
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Veil_Of_Discord::~CDOTA_Item_Recipe_Veil_Of_Discord(
        CDOTA_Item_Recipe_Veil_Of_Discord *const this)
{
  this->_vptr_IHandleEntity = &off_4786AF0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Veil_Of_Discord::Schema_DynamicBinding  (line 28, @0x0000000002e0c560, libserver.so)
// globals: CDOTA_Item_Recipe_Veil_Of_Discord::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Veil_Of_Discord::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Veil_Of_Discord *const this)
{
  return CDOTA_Item_Recipe_Veil_Of_Discord::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002e0c570, libserver.so)
// globals: CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002e0c580, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Veil_Of_Discord>
void __fastcall CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002e0c5a0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002e0c5c0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002e0c5d0, libserver.so)
// globals: CDOTA_Item_Recipe_Veil_Of_Discord::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Veil_Of_Discord::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002e0d9c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002e0e890, libserver.so)  // inlines: CDOTA_Item_Recipe_Veil_Of_Discord, Construct<CDOTA_Item_Recipe_Veil_Of_Discord>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4786AF0;
  }
  return p;
}


// CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e11410, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e11430, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInternal  (line 28, @0x0000000002e17d30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "item_recipe_veil_of_discord", "CDOTA_Item_Recipe_Veil_Of_Discord"
// globals: `guard variable for'CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClass, CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClass, __dso_handle, CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClassInfo, CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClass);
    CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClass._vptr_CEntityClass = off_4786A70;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Veil_Of_DiscordClass != 0 )
    return &CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClassInfo,
      "CDOTA_Item_Recipe_Veil_Of_Discord",
      "item_recipe_veil_of_discord",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClassInfo);
  }
  CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClass.m_pClassInfo = &CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClassInfo;
  CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Veil_Of_DiscordClass = &CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClass;
  CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClassInfo.m_pClass = &CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClass;
  CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Veil_Of_DiscordClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Veil_Of_DiscordClass;
}


// CDOTA_Item_Recipe_Veil_Of_Discord::YouForgotToImplementOrDeclareServerClass  (line 33, @0x0000000002dffbd0, libserver.so)
int __fastcall CDOTA_Item_Recipe_Veil_Of_Discord::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_Recipe_Veil_Of_Discord *const this)
{
  return 0;
}


// CDOTA_Item_Recipe_Veil_Of_Discord::GetServerClass  (line 33, @0x0000000002e02e10, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Recipe_Veil_Of_Discord::GetServerClass(
        CDOTA_Item_Recipe_Veil_Of_Discord *const this)
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


// CDOTA_Item_Veil_Of_Discord::~CDOTA_Item_Veil_Of_Discord  (line 44, @0x0000000002e0f7b0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Veil_Of_Discord::~CDOTA_Item_Veil_Of_Discord(CDOTA_Item_Veil_Of_Discord *const this)
{
  this->_vptr_IHandleEntity = &off_47876F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Veil_Of_Discord::~CDOTA_Item_Veil_Of_Discord  (line 44, @0x0000000002e0f7d0, libserver.so)  // inlines: ~CDOTA_Item_Veil_Of_Discord
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Veil_Of_Discord::~CDOTA_Item_Veil_Of_Discord(CDOTA_Item_Veil_Of_Discord *const this)
{
  this->_vptr_IHandleEntity = &off_47876F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Veil_Of_Discord::Schema_DynamicBinding  (line 46, @0x0000000002e0c5e0, libserver.so)
// globals: CDOTA_Item_Veil_Of_Discord::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Veil_Of_Discord::Schema_DynamicBinding(
        const CDOTA_Item_Veil_Of_Discord *const this)
{
  return CDOTA_Item_Veil_Of_Discord::s_pSchemaBinding;
}


// CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 46, @0x0000000002e0c5f0, libserver.so)
// globals: CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::DestructInstance  (line 46, @0x0000000002e0c600, libserver.so)  // inlines: Destruct<CDOTA_Item_Veil_Of_Discord>
void __fastcall CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::FreeInstance  (line 46, @0x0000000002e0c620, libserver.so)
void __fastcall CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::CanAllocate  (line 46, @0x0000000002e0c640, libserver.so)
bool __fastcall CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 46, @0x0000000002e0c650, libserver.so)
// globals: CDOTA_Item_Veil_Of_Discord::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Veil_Of_Discord::s_pSchemaBinding;
}


// CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::AllocateInstance  (line 46, @0x0000000002e0da00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::ConstructInstance  (line 46, @0x0000000002e0e8c0, libserver.so)  // inlines: CDOTA_Item_Veil_Of_Discord, Construct<CDOTA_Item_Veil_Of_Discord>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47876F0;
  }
  return p;
}


// CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 46, @0x0000000002e11460, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 46, @0x0000000002e11480, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Veil_Of_Discord::GetEntityClassInternal  (line 46, @0x0000000002e17e80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "CDOTA_Item_Veil_Of_Discord"
// globals: `guard variable for'CDOTA_Item_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClass, CDOTA_Item_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClass, __dso_handle, CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Veil_Of_Discord::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClassInfo, CDOTA_Item_Veil_Of_Discord::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClassInfo
CEntityClass *__cdecl CDOTA_Item_Veil_Of_Discord::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClass);
    CDOTA_Item_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClass._vptr_CEntityClass = off_4787670;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClass);
    __cxa_atexit(
      CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Veil_Of_DiscordClass != 0 )
    return &CDOTA_Item_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClass;
  if ( `guard variable for'CDOTA_Item_Veil_Of_Discord::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Veil_Of_Discord::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Veil_Of_Discord::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClassInfo,
      "CDOTA_Item_Veil_Of_Discord",
      "item_veil_of_discord",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Veil_Of_Discord::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClassInfo);
  }
  CDOTA_Item_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClass.m_pClassInfo = &CDOTA_Item_Veil_Of_Discord::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClassInfo;
  CDOTA_Item_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClass.m_pBaseClassInfo = CDOTA_Item_Veil_Of_Discord::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Veil_Of_DiscordClass = &CDOTA_Item_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClass;
  CDOTA_Item_Veil_Of_Discord::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClassInfo.m_pClass = &CDOTA_Item_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClass;
  CDOTA_Item_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Veil_Of_DiscordClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Veil_Of_Discord::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Veil_Of_DiscordClass;
}


// CDOTA_Item_Veil_Of_Discord::GetIntrinsicModifierName  (line 60, @0x0000000002e0c660, libserver.so)
// strings: "modifier_item_veil_of_discord"
const char *__fastcall CDOTA_Item_Veil_Of_Discord::GetIntrinsicModifierName(CDOTA_Item_Veil_Of_Discord *const this)
{
  return "modifier_item_veil_of_discord";
}


// CDOTA_Item_Veil_Of_Discord::YouForgotToImplementOrDeclareServerClass  (line 65, @0x0000000002dffbe0, libserver.so)
int __fastcall CDOTA_Item_Veil_Of_Discord::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_Veil_Of_Discord *const this)
{
  return 0;
}


// CDOTA_Item_Veil_Of_Discord::GetServerClass  (line 65, @0x0000000002e02cd0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Veil_Of_Discord::GetServerClass(CDOTA_Item_Veil_Of_Discord *const this)
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


// CDOTA_Item_Veil_Of_Discord::OnSpellStart  (line 75, @0x0000000002e097f0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::AddNewModifier (18 total)
// strings: "debuff_radius", "resist_debuff_duration", "modifier_item_veil_of_discord_debuff", "particles/items2_fx/veil_of_discord.vpcf", "DOTA_Item.VeilOfDiscord.Activate"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_Veil_Of_Discord::OnSpellStart(CDOTA_Item_Veil_Of_Discord *const this)
{
  int LevelSpecialValue; // ebx
  __m128i v3; // xmm2
  float v4; // ebx
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v6; // rax
  float v7; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  __int64 v13; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  double v23; // [rsp+20h] [rbp-90h]
  Vector vPosition; // [rsp+30h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "debuff_radius", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "resist_debuff_duration", -1, 0);
  *v3.m128i_i32 = LevelSpecialValue;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  Caster = CDOTABaseAbility::GetCaster(this);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v6->m_iTeamNum.m_Value, &vPosition, Caster, v4, &entities, 2, 19, 16, 0, 0);
  KeyValues::KeyValues(&kv, "modifier_item_veil_of_discord_debuff");
  KeyValues::SetFloat(&kv, "duration", v7);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/items2_fx/veil_of_discord.vpcf",
               2,
               0,
               0,
               0);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v10, Particle, 0, *&vPosition.x, vPosition.z);
  *&v23 = v4;
  *(&v23 + 1) = v4;
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, Particle, 1, v23, v4);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v12, Particle);
  v13 = 0;
  for ( i = 0; entities.m_Size > i; ++v13 )
  {
    while ( 1 )
    {
      v15 = &entities.m_Memory.m_pMemory[v13];
      m_Index = entities.m_Memory.m_pMemory[v13].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v17 = v15->m_Index;
        v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
        if ( v18 != 0 )
        {
          v19 = &v18[v17 & 0x1FF];
          if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
          {
            m_pInstance = v19->m_pInstance;
            if ( v19->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              break;
          }
        }
      }
      ++i;
      ++v13;
      if ( entities.m_Size <= i )
        goto LABEL_11;
    }
    v21 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, v21, this, "modifier_item_veil_of_discord_debuff", &kv, 0);
    ++i;
  }
LABEL_11:
  v22 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "DOTA_Item.VeilOfDiscord.Activate", v22);
  KeyValues::~KeyValues(&kv);
  entities.m_Size = 0;
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
}


// CDOTA_Modifier_Item_Veil_Of_Discord::~CDOTA_Modifier_Item_Veil_Of_Discord  (line 114, @0x0000000002e0db60, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Veil_Of_Discord::~CDOTA_Modifier_Item_Veil_Of_Discord(
        CDOTA_Modifier_Item_Veil_Of_Discord *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Veil_Of_Discord::~CDOTA_Modifier_Item_Veil_Of_Discord  (line 114, @0x0000000002e0db80, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Veil_Of_Discord
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Veil_Of_Discord::~CDOTA_Modifier_Item_Veil_Of_Discord(
        CDOTA_Modifier_Item_Veil_Of_Discord *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Veil_Of_Discord::OnCreated  (line 142, @0x0000000002e08640, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_str", "bonus_agi", "bonus_int", "bonus_health_regen"
void __fastcall CDOTA_Modifier_Item_Veil_Of_Discord::OnCreated(
        CDOTA_Modifier_Item_Veil_Of_Discord *const this,
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
    this->bonus_str = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_str", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_str = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_agi = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_agi", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->bonus_agi = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_int = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_int", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  this->bonus_int = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_armor", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->bonus_health_regen = 0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
    goto LABEL_13;
  }
LABEL_11:
  this->bonus_armor = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->bonus_health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "bonus_health_regen", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
LABEL_7:
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "bonus_damage", -1, 0);
    return;
  }
LABEL_13:
  this->bonus_damage = 0;
}


// CDOTA_Modifier_Item_Veil_Of_Discord::DeclareFunctions  (line 152, @0x0000000002dffbf0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Item_Veil_Of_Discord::DeclareFunctions(CDOTA_Modifier_Item_Veil_Of_Discord *const this)
{
  this->m_Functions[66].__pfn = (&stru_10 + 713);
  this->m_Functions[66].__delta = 0;
  this->m_Functions[64].__pfn = (&stru_10 + 721);
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__pfn = (&stru_10 + 705);
  this->m_Functions[65].__delta = 0;
  this->m_Functions[45].__pfn = (&stru_10 + 729);
  this->m_Functions[45].__delta = 0;
  this->m_Functions[56].__pfn = (&stru_10 + 737);
  this->m_Functions[56].__delta = 0;
  this->m_Functions[0].__pfn = (&stru_10 + 745);
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Item_Veil_Of_Discord::GetModifierPreAttack_BonusDamage  (line 162, @0x0000000002dffc80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Veil_Of_Discord::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Veil_Of_Discord *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Veil_Of_Discord::GetModifierBonusStats_Str  (line 167, @0x0000000002dffca0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Veil_Of_Discord::GetModifierBonusStats_Str(
        CDOTA_Modifier_Item_Veil_Of_Discord *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_str;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Veil_Of_Discord::GetModifierBonusStats_Agi  (line 172, @0x0000000002dffcc0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Veil_Of_Discord::GetModifierBonusStats_Agi(
        CDOTA_Modifier_Item_Veil_Of_Discord *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agi;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Veil_Of_Discord::GetModifierBonusStats_Int  (line 177, @0x0000000002dffce0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Veil_Of_Discord::GetModifierBonusStats_Int(
        CDOTA_Modifier_Item_Veil_Of_Discord *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_int;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Veil_Of_Discord::GetModifierPhysicalArmorBonus  (line 182, @0x0000000002dffd00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Veil_Of_Discord::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Veil_Of_Discord *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Veil_Of_Discord::GetModifierConstantHealthRegen  (line 187, @0x0000000002dffd20, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Veil_Of_Discord::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Veil_Of_Discord *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::~CDOTA_Modifier_Item_Veil_Of_Discord_Debuff  (line 195, @0x0000000002e0e060, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::~CDOTA_Modifier_Item_Veil_Of_Discord_Debuff(
        CDOTA_Modifier_Item_Veil_Of_Discord_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4788610;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::~CDOTA_Modifier_Item_Veil_Of_Discord_Debuff  (line 195, @0x0000000002e0e080, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Veil_Of_Discord_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::~CDOTA_Modifier_Item_Veil_Of_Discord_Debuff(
        CDOTA_Modifier_Item_Veil_Of_Discord_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4788610;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::IsDebuff  (line 200, @0x0000000002e0c670, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::IsDebuff(
        CDOTA_Modifier_Item_Veil_Of_Discord_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::GetEffectName  (line 207, @0x0000000002e0c680, libserver.so)
// strings: "particles/items2_fx/veil_of_discord_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::GetEffectName(
        CDOTA_Modifier_Item_Veil_Of_Discord_Debuff *const this)
{
  const char *result; // rax

  result = 0;
  if ( (*(&this->CDOTA_Buff + 138) & 0x10) == 0 )
    return "particles/items2_fx/veil_of_discord_debuff.vpcf";
  return result;
}


// CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::GetStatusEffectName  (line 215, @0x0000000002e0c6a0, libserver.so)
// strings: "particles/status_fx/status_effect_veil.vpcf"
const char *__fastcall CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::GetStatusEffectName(
        CDOTA_Modifier_Item_Veil_Of_Discord_Debuff *const this)
{
  const char *result; // rax

  result = 0;
  if ( (*(&this->CDOTA_Buff + 138) & 0x10) == 0 )
    return "particles/status_fx/status_effect_veil.vpcf";
  return result;
}


// CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::StatusEffectPriority  (line 223, @0x0000000002e0c6c0, libserver.so)
int __fastcall CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::StatusEffectPriority(
        CDOTA_Modifier_Item_Veil_Of_Discord_Debuff *const this)
{
  return 7;
}


// CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::OnCreated  (line 234, @0x0000000002e07bd0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "resist_debuff"
void __fastcall CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::OnCreated(
        CDOTA_Modifier_Item_Veil_Of_Discord_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->resist_debuff = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "resist_debuff", -1, 0);
  else
    this->resist_debuff = 0;
}


// CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::DeclareFunctions  (line 241, @0x0000000002dffd40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::GetModifierMagicalResistanceBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::DeclareFunctions(
        CDOTA_Modifier_Item_Veil_Of_Discord_Debuff *const this)
{
  this->m_Functions[49].__pfn = CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::GetModifierMagicalResistanceBonus;
  this->m_Functions[49].__delta = 0;
}


// CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::GetModifierMagicalResistanceBonus  (line 248, @0x0000000002dffd60, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Veil_Of_Discord_Debuff::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_Item_Veil_Of_Discord_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->resist_debuff;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


