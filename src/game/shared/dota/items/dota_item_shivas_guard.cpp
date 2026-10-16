// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_shivas_guard.cpp:27
class CDOTA_Item_Recipe_Shivas_Guard : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Shivas_Guard(CDOTA_Item_Recipe_Shivas_Guard &);
	CDOTA_Item_Recipe_Shivas_Guard(CDOTA_Item_Recipe_Shivas_Guard &);
	CDOTA_Item_Recipe_Shivas_Guard();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Shivas_Guard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_shivas_guard.cpp:39
class CDOTA_Item_Shivas_Guard : public CDOTA_Item {
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
	CDOTA_Item_Shivas_Guard(CDOTA_Item_Shivas_Guard &);
	CDOTA_Item_Shivas_Guard(CDOTA_Item_Shivas_Guard &);
	CDOTA_Item_Shivas_Guard();
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
	virtual ~CDOTA_Item_Shivas_Guard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_shivas_guard.cpp:55
class C_CDOTA_Item_Shivas_Guard_MapInstall {
	C_CDOTA_Item_Shivas_Guard_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_shivas_guard.cpp:75
class CDOTA_Modifier_Item_Shivas_Guard : public CDOTA_Buff_Item {
public:

private:

	int bonus_intellect;  // +0xba8
	int bonus_armor;  // +0xbac
	int aura_radius;  // +0xbb0
	CDOTA_Modifier_Item_Shivas_Guard();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	virtual ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	ModifierVariant_t OnRespawn(const CModifierParams &);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Item_Shivas_Guard();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[90] GetModifierBonusStats_Intellect
	// vtable[91] GetModifierPhysicalArmorBonus
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_shivas_guard.cpp:164
class CDOTA_Modifier_Item_Shivas_Guard_Aura : public CDOTA_Buff {
public:

private:

	int aura_attack_speed;  // +0xba8
	CDOTA_Modifier_Item_Shivas_Guard_Aura();
	virtual bool IsDebuff();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Shivas_Guard_Aura();

	// vtable[12] IsDebuff
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_shivas_guard.cpp:212
class CDOTA_Modifier_Item_Shivas_Guard_Thinker : public CDOTA_Buff {
public:

private:

	float m_fCurRadius;  // +0xba8
	float m_fLastThink;  // +0xbac

	int blast_speed;  // +0xbe0
	int blast_radius;  // +0xbe4
	int blast_damage;  // +0xbe8
	float blast_debuff_duration;  // +0xbec
	CDOTA_Modifier_Item_Shivas_Guard_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Item_Shivas_Guard_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// vtable[5] CheckState
	// sizeof = 3056
};

// src/game/shared/dota/items/dota_item_shivas_guard.cpp:346
class CDOTA_Modifier_Item_Shivas_Guard_Blast : public CDOTA_Buff {
public:

private:

	int blast_movement_speed;  // +0xba8
	CDOTA_Modifier_Item_Shivas_Guard_Blast();
	virtual bool IsDebuff();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Item_Shivas_Guard_Blast();

	// vtable[12] IsDebuff
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Shivas_Guard::~CDOTA_Item_Recipe_Shivas_Guard  (line 27, @0x0000000002df3a00, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Shivas_Guard::~CDOTA_Item_Recipe_Shivas_Guard(
        CDOTA_Item_Recipe_Shivas_Guard *const this)
{
  this->_vptr_IHandleEntity = &off_47652D0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Shivas_Guard::~CDOTA_Item_Recipe_Shivas_Guard  (line 27, @0x0000000002df3a20, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Shivas_Guard
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Shivas_Guard::~CDOTA_Item_Recipe_Shivas_Guard(
        CDOTA_Item_Recipe_Shivas_Guard *const this)
{
  this->_vptr_IHandleEntity = &off_47652D0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Shivas_Guard::Schema_DynamicBinding  (line 29, @0x0000000002defc00, libserver.so)
// globals: CDOTA_Item_Recipe_Shivas_Guard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Shivas_Guard::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Shivas_Guard *const this)
{
  return CDOTA_Item_Recipe_Shivas_Guard::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002defc10, libserver.so)
// globals: CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002defc20, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Shivas_Guard>
void __fastcall CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002defc40, libserver.so)
void __fastcall CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002defc60, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002defc70, libserver.so)
// globals: CDOTA_Item_Recipe_Shivas_Guard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Shivas_Guard::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002df13c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002df24b0, libserver.so)  // inlines: CDOTA_Item_Recipe_Shivas_Guard, Construct<CDOTA_Item_Recipe_Shivas_Guard>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47652D0;
  }
  return p;
}


// CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002df5c10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002df5c30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInternal  (line 29, @0x0000000002dfe370, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "item_recipe_shivas_guard", "CDOTA_Item_Recipe_Shivas_Guard"
// globals: `guard variable for'CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClass, CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClass, __dso_handle, CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClassInfo, CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClass);
    CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClass._vptr_CEntityClass = off_4765250;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Shivas_GuardClass != 0 )
    return &CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClassInfo,
      "CDOTA_Item_Recipe_Shivas_Guard",
      "item_recipe_shivas_guard",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClassInfo);
  }
  CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClass.m_pClassInfo = &CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClassInfo;
  CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Shivas_GuardClass = &CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClass;
  CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClassInfo.m_pClass = &CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClass;
  CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Shivas_GuardClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Shivas_GuardClass;
}


// CDOTA_Item_Shivas_Guard::~CDOTA_Item_Shivas_Guard  (line 39, @0x0000000002df3a50, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Shivas_Guard::~CDOTA_Item_Shivas_Guard(CDOTA_Item_Shivas_Guard *const this)
{
  this->_vptr_IHandleEntity = &off_4765ED0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Shivas_Guard::~CDOTA_Item_Shivas_Guard  (line 39, @0x0000000002df3a70, libserver.so)  // inlines: ~CDOTA_Item_Shivas_Guard
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Shivas_Guard::~CDOTA_Item_Shivas_Guard(CDOTA_Item_Shivas_Guard *const this)
{
  this->_vptr_IHandleEntity = &off_4765ED0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Shivas_Guard::Schema_DynamicBinding  (line 41, @0x0000000002defc80, libserver.so)
// globals: CDOTA_Item_Shivas_Guard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Shivas_Guard::Schema_DynamicBinding(
        const CDOTA_Item_Shivas_Guard *const this)
{
  return CDOTA_Item_Shivas_Guard::s_pSchemaBinding;
}


// CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002defc90, libserver.so)
// globals: CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002defca0, libserver.so)  // inlines: Destruct<CDOTA_Item_Shivas_Guard>
void __fastcall CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002defcc0, libserver.so)
void __fastcall CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002defce0, libserver.so)
bool __fastcall CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002defcf0, libserver.so)
// globals: CDOTA_Item_Shivas_Guard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Shivas_Guard::s_pSchemaBinding;
}


// CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002df1400, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002df24e0, libserver.so)  // inlines: CDOTA_Item_Shivas_Guard, Construct<CDOTA_Item_Shivas_Guard>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4765ED0;
  }
  return p;
}


// CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002df5c60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002df5c80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Shivas_Guard::GetEntityClassInternal  (line 41, @0x0000000002dfe4c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "CDOTA_Item_Shivas_Guard"
// globals: `guard variable for'CDOTA_Item_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Shivas_GuardClass, CDOTA_Item_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Shivas_GuardClass, __dso_handle, CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Shivas_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Shivas_GuardClassInfo, CDOTA_Item_Shivas_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Shivas_GuardClassInfo
CEntityClass *__cdecl CDOTA_Item_Shivas_Guard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Shivas_GuardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Shivas_GuardClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Shivas_GuardClass);
    CDOTA_Item_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Shivas_GuardClass._vptr_CEntityClass = off_4765E50;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Shivas_GuardClass);
    __cxa_atexit(
      CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Shivas_GuardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Shivas_GuardClass != 0 )
    return &CDOTA_Item_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Shivas_GuardClass;
  if ( `guard variable for'CDOTA_Item_Shivas_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Shivas_GuardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Shivas_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Shivas_GuardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Shivas_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Shivas_GuardClassInfo,
      "CDOTA_Item_Shivas_Guard",
      "item_shivas_guard",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Shivas_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Shivas_GuardClassInfo);
  }
  CDOTA_Item_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Shivas_GuardClass.m_pClassInfo = &CDOTA_Item_Shivas_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Shivas_GuardClassInfo;
  CDOTA_Item_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Shivas_GuardClass.m_pBaseClassInfo = CDOTA_Item_Shivas_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Shivas_GuardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Shivas_GuardClass = &CDOTA_Item_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Shivas_GuardClass;
  CDOTA_Item_Shivas_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Shivas_GuardClassInfo.m_pClass = &CDOTA_Item_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Shivas_GuardClass;
  CDOTA_Item_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Shivas_GuardClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Shivas_GuardClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Shivas_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Shivas_GuardClass;
}


// CDOTA_Item_Shivas_Guard::GetIntrinsicModifierName  (line 45, @0x0000000002defd00, libserver.so)
// strings: "modifier_item_shivas_guard"
const char *__fastcall CDOTA_Item_Shivas_Guard::GetIntrinsicModifierName(CDOTA_Item_Shivas_Guard *const this)
{
  return "modifier_item_shivas_guard";
}


// CDOTA_Item_Shivas_Guard::YouForgotToImplementOrDeclareServerClass  (line 55, @0x0000000002de4660, libserver.so)
int __fastcall CDOTA_Item_Shivas_Guard::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Shivas_Guard *const this)
{
  return 0;
}


// CDOTA_Item_Shivas_Guard::GetServerClass  (line 55, @0x0000000002de7da0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Shivas_Guard::GetServerClass(CDOTA_Item_Shivas_Guard *const this)
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


// CDOTA_Item_Shivas_Guard::OnSpellStart  (line 62, @0x0000000002de5500, libserver.so)  // inlines: GetTeamNumber
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, Thinker_Create, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_item_shivas_guard_thinker", "DOTA_Item.ShivasGuard.Activate"
void __fastcall CDOTA_Item_Shivas_Guard::OnSpellStart(CDOTA_Item_Shivas_Guard *const this)
{
  int m_Value; // r14d
  CDOTA_BaseNPC *Caster; // rax
  Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_item_shivas_guard_thinker");
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v5 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v5, this, "modifier_item_shivas_guard_thinker", &kv, *AbsOrigin, m_Value, 0, 0, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "DOTA_Item.ShivasGuard.Activate", v6);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Item_Shivas_Guard::~CDOTA_Modifier_Item_Shivas_Guard  (line 75, @0x0000000002df1560, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Shivas_Guard::~CDOTA_Modifier_Item_Shivas_Guard(
        CDOTA_Modifier_Item_Shivas_Guard *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Shivas_Guard::~CDOTA_Modifier_Item_Shivas_Guard  (line 75, @0x0000000002df1580, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Shivas_Guard
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Shivas_Guard::~CDOTA_Modifier_Item_Shivas_Guard(
        CDOTA_Modifier_Item_Shivas_Guard *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Shivas_Guard::IsAura  (line 88, @0x0000000002defd10, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Shivas_Guard::IsAura(CDOTA_Modifier_Item_Shivas_Guard *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Shivas_Guard::GetModifierAura  (line 89, @0x0000000002defd20, libserver.so)
// strings: "modifier_item_shivas_guard_aura"
const char *__fastcall CDOTA_Modifier_Item_Shivas_Guard::GetModifierAura(CDOTA_Modifier_Item_Shivas_Guard *const this)
{
  return "modifier_item_shivas_guard_aura";
}


// CDOTA_Modifier_Item_Shivas_Guard::GetAuraSearchTeam  (line 90, @0x0000000002defd30, libserver.so)
int __fastcall CDOTA_Modifier_Item_Shivas_Guard::GetAuraSearchTeam(CDOTA_Modifier_Item_Shivas_Guard *const this)
{
  return 2;
}


// CDOTA_Modifier_Item_Shivas_Guard::GetAuraSearchType  (line 91, @0x0000000002defd40, libserver.so)
int __fastcall CDOTA_Modifier_Item_Shivas_Guard::GetAuraSearchType(CDOTA_Modifier_Item_Shivas_Guard *const this)
{
  return 19;
}


// CDOTA_Modifier_Item_Shivas_Guard::GetAuraSearchFlags  (line 92, @0x0000000002defd50, libserver.so)
int __fastcall CDOTA_Modifier_Item_Shivas_Guard::GetAuraSearchFlags(CDOTA_Modifier_Item_Shivas_Guard *const this)
{
  return 16;
}


// CDOTA_Modifier_Item_Shivas_Guard::GetAuraRadius  (line 93, @0x0000000002defd60, libserver.so)
int __fastcall CDOTA_Modifier_Item_Shivas_Guard::GetAuraRadius(CDOTA_Modifier_Item_Shivas_Guard *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_Item_Shivas_Guard::OnCreated  (line 104, @0x0000000002dece30, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
// strings: "bonus_intellect"
void __fastcall CDOTA_Modifier_Item_Shivas_Guard::OnCreated(
        CDOTA_Modifier_Item_Shivas_Guard *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_intellect, "bonus_intellect");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_armor, "bonus_armor");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->aura_radius, "aura_radius");
}


// CDOTA_Modifier_Item_Shivas_Guard::OnDeath  (line 118, @0x0000000002de7540, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Shivas_Guard::OnDeath(
        CDOTA_Modifier_Item_Shivas_Guard *const this,
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


// CDOTA_Modifier_Item_Shivas_Guard::OnRespawn  (line 130, @0x0000000002de74b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Shivas_Guard::OnRespawn(
        CDOTA_Modifier_Item_Shivas_Guard *const this,
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


// CDOTA_Modifier_Item_Shivas_Guard::DeclareFunctions  (line 142, @0x0000000002de4670, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Shivas_Guard::OnDeath(CModifierParams const&), CDOTA_Modifier_Item_Shivas_Guard::OnRespawn(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Shivas_Guard::DeclareFunctions(CDOTA_Modifier_Item_Shivas_Guard *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_Item_Shivas_Guard::OnDeath;
  this->m_Functions[66].__pfn = (&stru_10 + 705);
  this->m_Functions[66].__delta = 0;
  this->m_Functions[45].__pfn = (&stru_10 + 713);
  this->m_Functions[45].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[139].__pfn = CDOTA_Modifier_Item_Shivas_Guard::OnRespawn;
  this->m_Functions[139].__delta = 0;
}


// CDOTA_Modifier_Item_Shivas_Guard::GetModifierBonusStats_Intellect  (line 151, @0x0000000002de46e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Shivas_Guard::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Shivas_Guard *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Shivas_Guard::GetModifierPhysicalArmorBonus  (line 156, @0x0000000002de4700, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Shivas_Guard::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Shivas_Guard *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Shivas_Guard_Aura::~CDOTA_Modifier_Item_Shivas_Guard_Aura  (line 164, @0x0000000002df1bf0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Shivas_Guard_Aura::~CDOTA_Modifier_Item_Shivas_Guard_Aura(
        CDOTA_Modifier_Item_Shivas_Guard_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4766DD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Shivas_Guard_Aura::~CDOTA_Modifier_Item_Shivas_Guard_Aura  (line 164, @0x0000000002df1c10, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Shivas_Guard_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Shivas_Guard_Aura::~CDOTA_Modifier_Item_Shivas_Guard_Aura(
        CDOTA_Modifier_Item_Shivas_Guard_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4766DD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Shivas_Guard_Aura::IsDebuff  (line 169, @0x0000000002defd70, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Shivas_Guard_Aura::IsDebuff(CDOTA_Modifier_Item_Shivas_Guard_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Shivas_Guard_Aura::OnCreated  (line 193, @0x0000000002decea0, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
// strings: "aura_attack_speed"
void __fastcall CDOTA_Modifier_Item_Shivas_Guard_Aura::OnCreated(
        CDOTA_Modifier_Item_Shivas_Guard_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->aura_attack_speed, "aura_attack_speed");
}


// CDOTA_Modifier_Item_Shivas_Guard_Aura::DeclareFunctions  (line 198, @0x0000000002de4720, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Shivas_Guard_Aura::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Shivas_Guard_Aura::DeclareFunctions(
        CDOTA_Modifier_Item_Shivas_Guard_Aura *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_Shivas_Guard_Aura::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Item_Shivas_Guard_Aura::GetModifierAttackSpeedBonus_Constant  (line 203, @0x0000000002de4740, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Shivas_Guard_Aura::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_Shivas_Guard_Aura *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->aura_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Shivas_Guard_Thinker::~CDOTA_Modifier_Item_Shivas_Guard_Thinker  (line 212, @0x0000000002df5090, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Item_Shivas_Guard_Thinker::~CDOTA_Modifier_Item_Shivas_Guard_Thinker(
        CDOTA_Modifier_Item_Shivas_Guard_Thinker *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_entitiesHit.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_47670F0;
  this->m_entitiesHit.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_entitiesHit.m_Memory,
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_entitiesHit.m_Memory),
        (this->m_entitiesHit.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Item_Shivas_Guard_Thinker::~CDOTA_Modifier_Item_Shivas_Guard_Thinker  (line 212, @0x0000000002df5100, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Item_Shivas_Guard_Thinker, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Item_Shivas_Guard_Thinker::~CDOTA_Modifier_Item_Shivas_Guard_Thinker(
        CDOTA_Modifier_Item_Shivas_Guard_Thinker *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_entitiesHit.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_47670F0;
  this->m_entitiesHit.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_entitiesHit.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_entitiesHit.m_Memory);
    if ( (this->m_entitiesHit.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Shivas_Guard_Thinker::IsHidden  (line 220, @0x0000000002defd80, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Shivas_Guard_Thinker::IsHidden(
        CDOTA_Modifier_Item_Shivas_Guard_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Shivas_Guard_Thinker::OnCreated  (line 244, @0x0000000002decf90, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, GetGameTime, GetLevelSpecialValueFor<float>, NetworkStateChanged, Set, Start, Vector, operator=<float>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CountdownTimer::Now, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "blast_speed", "blast_radius", "blast_damage", "blast_debuff_duration", "particles/items2_fx/shivas_guard_active.vpcf"
void __fastcall CDOTA_Modifier_Item_Shivas_Guard_Thinker::OnCreated(
        CDOTA_Modifier_Item_Shivas_Guard_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  float v14; // [rsp+Ch] [rbp-24h]
  double v15; // [rsp+10h] [rbp-20h]
  float blast_speed; // [rsp+18h] [rbp-18h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->blast_speed, "blast_speed");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->blast_radius, "blast_radius");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->blast_damage, "blast_damage");
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->blast_debuff_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "blast_debuff_duration", -1, 0);
  else
    this->blast_debuff_duration = 0.0;
  CDOTA_Buff::StartIntervalThink(this, 0.0, v7);
  v8 = 0.0;
  this->m_fCurRadius = 0.0;
  if ( g_pGameRules != 0 )
    v8 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fLastThink = v8;
  v9 = CountdownTimer::Now(&this->m_ViewerTimer) + 0.2;
  if ( v9 != this->m_ViewerTimer.m_timestamp.m_Value )
  {
    v14 = v9;
    (*(this->m_ViewerTimer._vptr_CountdownTimer + 2))(&this->m_ViewerTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ViewerTimer.m_timestamp.m_Value = v14;
  }
  if ( this->m_ViewerTimer.m_duration.m_Value != 0.2 )
  {
    (*(this->m_ViewerTimer._vptr_CountdownTimer + 2))(&this->m_ViewerTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ViewerTimer.m_duration.m_Value = 0.2;
  }
  Caster = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/items2_fx/shivas_guard_active.vpcf",
                      1,
                      Caster,
                      0,
                      0);
  *&v15 = this->blast_radius;
  HIDWORD(v15) = LODWORD(this->blast_debuff_duration);
  blast_speed = this->blast_speed;
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v12, Caster, 1, v15, blast_speed);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v13, Caster);
}


// CDOTA_Modifier_Item_Shivas_Guard_Thinker::OnIntervalThink  (line 265, @0x0000000002dedf10, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetTeamNumber, GrowMemory, IndexToIdentity, IsElapsed, IsValid, LookupEntity, NetworkStateChanged, Purge, RemoveAll, Reset, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=<float>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CountdownTimer::Now, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, CBaseEntity::SetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, UTIL_Remove, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTAFogOfWarSystem::AddTempViewer, __stack_chk_fail (24 total)
// strings: "modifier_item_shivas_guard_blast", "particles/items2_fx/shivas_guard_impact.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Item_Shivas_Guard_Thinker::OnIntervalThink(
        CDOTA_Modifier_Item_Shivas_Guard_Thinker *const this)
{
  float blast_speed; // xmm1_4
  CGameRules *v3; // rax
  float v4; // xmm0_4
  float v5; // xmm1_4
  float blast_radius; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Modifier_Item_Shivas_Guard_Thinker *v8; // rdi
  CDOTA_BaseNPC *v9; // rax
  const Vector *v10; // rbx
  CDOTA_BaseNPC *v11; // rax
  float m_fCurRadius; // r14d
  CDOTA_BaseNPC *v13; // r12
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // rbx
  CDOTA_BaseNPC *v16; // rax
  __int64 v17; // rbx
  int v18; // r12d
  CHandle<CBaseEntity> *v19; // r15
  __m128i v20; // xmm3
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  __int64 m_Size; // r14
  int v24; // eax
  CHandle<CBaseEntity> *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  float v27; // xmm0_4
  CDOTA_BaseNPC *v28; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC *Parent; // rax
  float v33; // xmm0_4
  float v34; // r14d
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v36; // rax
  float v37; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v39; // r14
  CDOTA_ParticleManager *v40; // rax
  CDOTA_ParticleManager *v41; // rax
  CDOTABaseAbility *v42; // r14
  CDOTA_BaseNPC *v43; // rax
  bool bKillThinker; // [rsp+2Fh] [rbp-91h]
  CDOTA_BaseNPC *pTarget; // [rsp+38h] [rbp-88h]
  float v46; // [rsp+48h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v49; // [rsp+88h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  blast_speed = this->blast_speed;
  v3 = g_pGameRules;
  if ( g_pGameRules != 0 )
  {
    v4 = ((*&g_pGameRules[18].m_szQuestName[20] - this->m_fLastThink) * blast_speed) + this->m_fCurRadius;
    this->m_fCurRadius = v4;
    v5 = *&v3[18].m_szQuestName[20];
  }
  else
  {
    v33 = (0.0 - this->m_fLastThink) * blast_speed;
    v5 = 0.0;
    v4 = v33 + this->m_fCurRadius;
    this->m_fCurRadius = v4;
  }
  this->m_fLastThink = v5;
  blast_radius = this->blast_radius;
  if ( v4 <= blast_radius )
  {
    bKillThinker = 0;
  }
  else
  {
    this->m_fCurRadius = blast_radius;
    bKillThinker = 1;
  }
  if ( CountdownTimer::Now(&this->m_ViewerTimer) < this->m_ViewerTimer.m_timestamp.m_Value )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    v8 = this;
    if ( Caster != 0 )
      goto LABEL_7;
LABEL_29:
    Parent = CDOTA_Buff::GetParent(v8);
    UTIL_Remove(Parent);
    return;
  }
  v27 = CountdownTimer::Now(&this->m_ViewerTimer) + this->m_ViewerTimer.m_duration.m_Value;
  if ( v27 != this->m_ViewerTimer.m_timestamp.m_Value )
  {
    v46 = v27;
    (*(this->m_ViewerTimer._vptr_CountdownTimer + 2))(&this->m_ViewerTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ViewerTimer.m_timestamp.m_Value = v46;
  }
  v28 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v28);
  v30 = CDOTA_Buff::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_SHIVA,
    v30->m_iTeamNum.m_Value,
    AbsOrigin,
    800.0,
    2.0,
    0);
  v31 = CDOTA_Buff::GetCaster(this);
  v8 = this;
  if ( v31 == 0 )
    goto LABEL_29;
LABEL_7:
  v9 = CDOTA_Buff::GetCaster(v8);
  v10 = CBaseEntity::GetAbsOrigin(v9);
  v11 = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetAbsOrigin(v11, v10);
  entities.m_Size = 0;
  m_fCurRadius = this->m_fCurRadius;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v13 = CDOTA_Buff::GetCaster(this);
  v14 = CDOTA_Buff::GetCaster(this);
  v15 = CBaseEntity::GetAbsOrigin(v14);
  v16 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v16->m_iTeamNum.m_Value, v15, v13, m_fCurRadius, &entities, 2, 19, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v17 = 0;
    v18 = 0;
    do
    {
      while ( 1 )
      {
        v19 = &entities.m_Memory.m_pMemory[v17];
        if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
               &this->m_entitiesHit,
               &entities.m_Memory.m_pMemory[v17]) == -1 )
        {
          if ( v19->m_Index + 2 > 1 )
          {
            v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v19->m_Index) >> 9) & 0x3F];
            if ( v21 != 0 )
            {
              v22 = &v21[v19->m_Index & 0x1FF];
              if ( v22 != 0 && v19->m_Index == v22->m_EHandle.m_Index )
              {
                pTarget = v22->m_pInstance;
                if ( v22->m_pInstance != 0 && BYTE3(v22->m_pInstance[7]._vptr_IHandleEntity) != 0 )
                {
                  *v20.m128i_i32 = this->blast_damage;
                  v34 = COERCE_FLOAT(_mm_cvtsi128_si32(v20));
                  Ability = CDOTA_Buff::GetAbility(this);
                  v36 = CDOTA_Buff::GetCaster(this);
                  ApplyDamage(v36, pTarget, Ability, v34, 2, 0);
                  KeyValues::KeyValues(&kv, "modifier_item_shivas_guard_blast");
                  KeyValues::SetFloat(&kv, "duration", v37);
                  ParticleManager = GetParticleManager();
                  LODWORD(Ability) = CDOTA_ParticleManager::CreateParticle(
                                       ParticleManager,
                                       "particles/items2_fx/shivas_guard_impact.vpcf",
                                       1,
                                       pTarget,
                                       0,
                                       0);
                  v39 = CDOTA_Buff::GetCaster(this);
                  v40 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(v40, Ability, 1, v39, 1, 0, vec3_invalid, 1);
                  v41 = GetParticleManager();
                  CDOTA_ParticleManager::ReleaseParticleIndex(v41, Ability);
                  v42 = CDOTA_Buff::GetAbility(this);
                  v43 = CDOTA_Buff::GetCaster(this);
                  CDOTA_BaseNPC::AddNewModifier(pTarget, v43, v42, "modifier_item_shivas_guard_blast", &kv, 0);
                  KeyValues::~KeyValues(&kv);
                  v19 = &entities.m_Memory.m_pMemory[v17];
                }
              }
            }
          }
          m_Size = this->m_entitiesHit.m_Size;
          v24 = this->m_entitiesHit.m_Size;
          if ( m_Size == this->m_entitiesHit.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_entitiesHit.m_Memory, 1);
            v24 = this->m_entitiesHit.m_Size;
          }
          this->m_entitiesHit.m_Size = v24 + 1;
          v25 = &this->m_entitiesHit.m_Memory.m_pMemory[m_Size];
          if ( v25 != 0 )
            break;
        }
        ++v18;
        ++v17;
        if ( entities.m_Size <= v18 )
          goto LABEL_19;
      }
      ++v18;
      ++v17;
      v25->m_Index = v19->m_Index;
    }
    while ( entities.m_Size > v18 );
  }
LABEL_19:
  if ( bKillThinker )
  {
    v26 = CDOTA_Buff::GetParent(this);
    UTIL_Remove(v26);
    entities.m_Size = 0;
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return;
  }
  else
  {
    entities.m_Size = 0;
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return;
  }
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
}


// CDOTA_Modifier_Item_Shivas_Guard_Thinker::CheckState  (line 331, @0x0000000002de4760, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Item_Shivas_Guard_Thinker::CheckState(
        CDOTA_Modifier_Item_Shivas_Guard_Thinker *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x800187uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFF7FFE78LL;
}


// CDOTA_Modifier_Item_Shivas_Guard_Blast::~CDOTA_Modifier_Item_Shivas_Guard_Blast  (line 346, @0x0000000002df1ba0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Shivas_Guard_Blast::~CDOTA_Modifier_Item_Shivas_Guard_Blast(
        CDOTA_Modifier_Item_Shivas_Guard_Blast *const this)
{
  this->_vptr_CDOTA_Buff = &off_4767410;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Shivas_Guard_Blast::~CDOTA_Modifier_Item_Shivas_Guard_Blast  (line 346, @0x0000000002df1bc0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Shivas_Guard_Blast
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Shivas_Guard_Blast::~CDOTA_Modifier_Item_Shivas_Guard_Blast(
        CDOTA_Modifier_Item_Shivas_Guard_Blast *const this)
{
  this->_vptr_CDOTA_Buff = &off_4767410;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Shivas_Guard_Blast::IsDebuff  (line 351, @0x0000000002defd90, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Shivas_Guard_Blast::IsDebuff(CDOTA_Modifier_Item_Shivas_Guard_Blast *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Shivas_Guard_Blast::GetEffectName  (line 358, @0x0000000002defda0, libserver.so)
// strings: "particles/generic_gameplay/generic_slowed_cold.vpcf"
const char *__fastcall CDOTA_Modifier_Item_Shivas_Guard_Blast::GetEffectName(
        CDOTA_Modifier_Item_Shivas_Guard_Blast *const this)
{
  return "particles/generic_gameplay/generic_slowed_cold.vpcf";
}


// CDOTA_Modifier_Item_Shivas_Guard_Blast::GetStatusEffectName  (line 359, @0x0000000002defdb0, libserver.so)
// strings: "particles/status_fx/status_effect_frost.vpcf"
const char *__fastcall CDOTA_Modifier_Item_Shivas_Guard_Blast::GetStatusEffectName(
        CDOTA_Modifier_Item_Shivas_Guard_Blast *const this)
{
  return "particles/status_fx/status_effect_frost.vpcf";
}


// CDOTA_Modifier_Item_Shivas_Guard_Blast::StatusEffectPriority  (line 360, @0x0000000002defdc0, libserver.so)
int __fastcall CDOTA_Modifier_Item_Shivas_Guard_Blast::StatusEffectPriority(
        CDOTA_Modifier_Item_Shivas_Guard_Blast *const this)
{
  return 10;
}


// CDOTA_Modifier_Item_Shivas_Guard_Blast::OnCreated  (line 371, @0x0000000002deced0, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
// strings: "blast_movement_speed"
void __fastcall CDOTA_Modifier_Item_Shivas_Guard_Blast::OnCreated(
        CDOTA_Modifier_Item_Shivas_Guard_Blast *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->blast_movement_speed, "blast_movement_speed");
}


// CDOTA_Modifier_Item_Shivas_Guard_Blast::DeclareFunctions  (line 378, @0x0000000002de4780, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Shivas_Guard_Blast::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Shivas_Guard_Blast::DeclareFunctions(
        CDOTA_Modifier_Item_Shivas_Guard_Blast *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Item_Shivas_Guard_Blast::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Item_Shivas_Guard_Blast::GetModifierMoveSpeedBonus_Percentage  (line 385, @0x0000000002de47a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Shivas_Guard_Blast::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Item_Shivas_Guard_Blast *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->blast_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


