// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_ethereal_blade.cpp:28
class CDOTA_Item_Recipe_Ethereal_Blade : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Ethereal_Blade(CDOTA_Item_Recipe_Ethereal_Blade &);
	CDOTA_Item_Recipe_Ethereal_Blade(CDOTA_Item_Recipe_Ethereal_Blade &);
	CDOTA_Item_Recipe_Ethereal_Blade();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Ethereal_Blade();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_ethereal_blade.cpp:40
class CDOTA_Item_Ethereal_Blade : public CDOTA_Item {
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
	CDOTA_Item_Ethereal_Blade(CDOTA_Item_Ethereal_Blade &);
	CDOTA_Item_Ethereal_Blade(CDOTA_Item_Ethereal_Blade &);
	CDOTA_Item_Ethereal_Blade();
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
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual ~CDOTA_Item_Ethereal_Blade();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_ethereal_blade.cpp:53
class C_CDOTA_Item_Ethereal_Blade_MapInstall {
	C_CDOTA_Item_Ethereal_Blade_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_ethereal_blade.cpp:161
class CDOTA_Modifier_Item_Ethereal_Blade : public CDOTA_Buff_Item {
public:

private:

	int bonus_strength;  // +0xba8
	int bonus_agility;  // +0xbac
	int bonus_intellect;  // +0xbb0
	CDOTA_Modifier_Item_Ethereal_Blade();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Ethereal_Blade();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_ethereal_blade.cpp:225
class CDOTA_Modifier_Ethereal_Blade_Ethereal : public CDOTA_Buff {
public:

private:

	int ethereal_damage_bonus;  // +0xba8
	CDOTA_Modifier_Ethereal_Blade_Ethereal();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ModifierVariant_t GetModifierInvisibilityLevel(const CModifierParams &);
	virtual ModifierVariant_t GetAbsoluteNoDamagePhysical(const CModifierParams &);
	virtual ModifierVariant_t GetModifierMagicalResistanceDecrepifyUnique(const CModifierParams &);
	virtual ~CDOTA_Modifier_Ethereal_Blade_Ethereal();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[5] CheckState
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[89] GetModifierInvisibilityLevel
	// vtable[90] GetAbsoluteNoDamagePhysical
	// vtable[91] GetModifierMagicalResistanceDecrepifyUnique
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_ethereal_blade.cpp:300
class CDOTA_Modifier_Item_Ethereal_Blade_Slow : public CDOTA_Buff {
public:

private:

	int blast_movement_slow;  // +0xba8
	CDOTA_Modifier_Item_Ethereal_Blade_Slow();
	virtual void OnCreated(KeyValues *);
	virtual bool IsDebuff();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Ethereal_Blade_Slow();

	// vtable[57] OnCreated
	// vtable[12] IsDebuff
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Ethereal_Blade::~CDOTA_Item_Recipe_Ethereal_Blade  (line 28, @0x0000000002da1b80, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Ethereal_Blade::~CDOTA_Item_Recipe_Ethereal_Blade(
        CDOTA_Item_Recipe_Ethereal_Blade *const this)
{
  this->_vptr_IHandleEntity = &off_46DEF30;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Ethereal_Blade::~CDOTA_Item_Recipe_Ethereal_Blade  (line 28, @0x0000000002da1ba0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Ethereal_Blade
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Ethereal_Blade::~CDOTA_Item_Recipe_Ethereal_Blade(
        CDOTA_Item_Recipe_Ethereal_Blade *const this)
{
  this->_vptr_IHandleEntity = &off_46DEF30;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Ethereal_Blade::Schema_DynamicBinding  (line 30, @0x0000000002d9ec50, libserver.so)
// globals: CDOTA_Item_Recipe_Ethereal_Blade::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Ethereal_Blade::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Ethereal_Blade *const this)
{
  return CDOTA_Item_Recipe_Ethereal_Blade::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002d9ec60, libserver.so)
// globals: CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002d9ec70, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Ethereal_Blade>
void __fastcall CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002d9ec90, libserver.so)
void __fastcall CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002d9ecb0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002d9ecc0, libserver.so)
// globals: CDOTA_Item_Recipe_Ethereal_Blade::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Ethereal_Blade::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002da0530, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002da1520, libserver.so)  // inlines: CDOTA_Item_Recipe_Ethereal_Blade, Construct<CDOTA_Item_Recipe_Ethereal_Blade>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46DEF30;
  }
  return p;
}


// CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002da3ae0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002da3b00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInternal  (line 30, @0x0000000002da72f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "item_recipe_ethereal_blade", "CDOTA_Item_Recipe_Ethereal_Blade"
// globals: `guard variable for'CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClass, CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClass, __dso_handle, CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClassInfo, CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClass);
    CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClass._vptr_CEntityClass = off_46DEEB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Ethereal_BladeClass != 0 )
    return &CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClassInfo,
      "CDOTA_Item_Recipe_Ethereal_Blade",
      "item_recipe_ethereal_blade",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClassInfo);
  }
  CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClass.m_pClassInfo = &CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClassInfo;
  CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Ethereal_BladeClass = &CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClass;
  CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClassInfo.m_pClass = &CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClass;
  CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Ethereal_BladeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ethereal_BladeClass;
}


// CDOTA_Item_Ethereal_Blade::~CDOTA_Item_Ethereal_Blade  (line 40, @0x0000000002da1bd0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Ethereal_Blade::~CDOTA_Item_Ethereal_Blade(CDOTA_Item_Ethereal_Blade *const this)
{
  this->_vptr_IHandleEntity = &off_46DFB30;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Ethereal_Blade::~CDOTA_Item_Ethereal_Blade  (line 40, @0x0000000002da1bf0, libserver.so)  // inlines: ~CDOTA_Item_Ethereal_Blade
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Ethereal_Blade::~CDOTA_Item_Ethereal_Blade(CDOTA_Item_Ethereal_Blade *const this)
{
  this->_vptr_IHandleEntity = &off_46DFB30;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Ethereal_Blade::Schema_DynamicBinding  (line 42, @0x0000000002d9ecd0, libserver.so)
// globals: CDOTA_Item_Ethereal_Blade::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Ethereal_Blade::Schema_DynamicBinding(
        const CDOTA_Item_Ethereal_Blade *const this)
{
  return CDOTA_Item_Ethereal_Blade::s_pSchemaBinding;
}


// CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 42, @0x0000000002d9ece0, libserver.so)
// globals: CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::DestructInstance  (line 42, @0x0000000002d9ecf0, libserver.so)  // inlines: Destruct<CDOTA_Item_Ethereal_Blade>
void __fastcall CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::FreeInstance  (line 42, @0x0000000002d9ed10, libserver.so)
void __fastcall CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::CanAllocate  (line 42, @0x0000000002d9ed30, libserver.so)
bool __fastcall CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 42, @0x0000000002d9ed40, libserver.so)
// globals: CDOTA_Item_Ethereal_Blade::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Ethereal_Blade::s_pSchemaBinding;
}


// CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::AllocateInstance  (line 42, @0x0000000002da0570, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::ConstructInstance  (line 42, @0x0000000002da1550, libserver.so)  // inlines: CDOTA_Item_Ethereal_Blade, Construct<CDOTA_Item_Ethereal_Blade>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46DFB30;
  }
  return p;
}


// CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002da3b30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002da3b50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Ethereal_Blade::GetEntityClassInternal  (line 42, @0x0000000002da7440, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "CDOTA_Item_Ethereal_Blade"
// globals: `guard variable for'CDOTA_Item_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ethereal_BladeClass, CDOTA_Item_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ethereal_BladeClass, __dso_handle, CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Ethereal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ethereal_BladeClassInfo, CDOTA_Item_Ethereal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ethereal_BladeClassInfo
CEntityClass *__cdecl CDOTA_Item_Ethereal_Blade::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ethereal_BladeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ethereal_BladeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ethereal_BladeClass);
    CDOTA_Item_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ethereal_BladeClass._vptr_CEntityClass = off_46DFAB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ethereal_BladeClass);
    __cxa_atexit(
      CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ethereal_BladeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Ethereal_BladeClass != 0 )
    return &CDOTA_Item_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ethereal_BladeClass;
  if ( `guard variable for'CDOTA_Item_Ethereal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ethereal_BladeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Ethereal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ethereal_BladeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Ethereal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ethereal_BladeClassInfo,
      "CDOTA_Item_Ethereal_Blade",
      "item_ethereal_blade",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Ethereal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ethereal_BladeClassInfo);
  }
  CDOTA_Item_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ethereal_BladeClass.m_pClassInfo = &CDOTA_Item_Ethereal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ethereal_BladeClassInfo;
  CDOTA_Item_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ethereal_BladeClass.m_pBaseClassInfo = CDOTA_Item_Ethereal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ethereal_BladeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Ethereal_BladeClass = &CDOTA_Item_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ethereal_BladeClass;
  CDOTA_Item_Ethereal_Blade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ethereal_BladeClassInfo.m_pClass = &CDOTA_Item_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ethereal_BladeClass;
  CDOTA_Item_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ethereal_BladeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Ethereal_BladeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Ethereal_Blade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ethereal_BladeClass;
}


// CDOTA_Item_Ethereal_Blade::GetIntrinsicModifierName  (line 46, @0x0000000002d9ed50, libserver.so)
// strings: "modifier_item_ethereal_blade"
const char *__fastcall CDOTA_Item_Ethereal_Blade::GetIntrinsicModifierName(CDOTA_Item_Ethereal_Blade *const this)
{
  return "modifier_item_ethereal_blade";
}


// CDOTA_Item_Ethereal_Blade::YouForgotToImplementOrDeclareServerClass  (line 53, @0x0000000002d93e30, libserver.so)
int __fastcall CDOTA_Item_Ethereal_Blade::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_Ethereal_Blade *const this)
{
  return 0;
}


// CDOTA_Item_Ethereal_Blade::GetServerClass  (line 53, @0x0000000002d97b10, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Ethereal_Blade::GetServerClass(CDOTA_Item_Ethereal_Blade *const this)
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


// CDOTA_Item_Ethereal_Blade::OnSpellStart  (line 62, @0x0000000002d9d210, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, InState, IsInvulnerable, Set, ToDOTABaseNPC, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_ProjectileManager::CreateTrackingProjectile, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "duration_ally", "modifier_item_etheral_blade", "particles/items_fx/ethereal_blade.vpcf", "DOTA_Item.EtherealBlade.Activate"
void __fastcall CDOTA_Item_Ethereal_Blade::OnSpellStart(CDOTA_Item_Ethereal_Blade *const this)
{
  CBaseEntity *CursorTarget; // rax
  float v3; // xmm1_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // cx
  CBaseEntity *v10; // rax
  CEntityIdentity *v11; // rdx
  int v12; // eax
  __int16 v13; // cx
  CDOTA_BaseNPC *v14; // rax
  KeyValues kv; // [rsp+10h] [rbp-B0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+30h] [rbp-90h] BYREF
  unsigned __int64 v17; // [rsp+98h] [rbp-28h]

  v17 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0 )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration_ally", -1, 0);
    CDOTABaseAbility::GetCaster(this);
    KeyValues::KeyValues(&kv, "modifier_item_etheral_blade");
    KeyValues::SetFloat(&kv, "duration", v3);
    info.bProvidesVision = 0;
    info.hSource.m_Index = -1;
    info.hTarget.m_Index = -1;
    info.colorGemColor = 0;
    info.pAttackRecord = 0;
    info.vSourceLoc.x = vec3_origin.x;
    y = vec3_origin.y;
    info.iMoveSpeed = 0;
    info.vSourceLoc.y = y;
    z = vec3_origin.z;
    info.iSourceAttachment = 1;
    info.vSourceLoc.z = z;
    info.iVisionTeamNumber = -1;
    info.iVisionRadius = 0;
    info.bDrawsOnMinimap = 0;
    info.bDodgeable = 1;
    info.bIsAttack = 0;
    info.bVisibleToEnemies = 1;
    info.pKVExtraData = 0;
    info.bReplaceExisting = 0;
    info.flExpireTime = 0.0;
    info.flMaxImpactTime = 0.0;
    info.bServerOnly = 0;
    info.pszEffectName = "particles/items_fx/ethereal_blade.vpcf";
    info.pAbility = this;
    info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "projectile_speed", -1, 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
    {
      v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v9 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hSource.m_Index) = v9 | info.hSource.m_Index & 0x8000;
      info.hSource.m_Index = (v8 << 15) | info.hSource.m_Index & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    v10 = CDOTABaseAbility::GetCursorTarget(this);
    if ( v10 != 0 && (v11 = v10->m_pEntity) != 0 )
    {
      v12 = (v11->m_EHandle.m_Index >> 15) - (v11->m_flags & 1);
      v13 = 0x7FFF;
      if ( v11->m_EHandle.m_Index != -1 )
        v13 = v11->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hTarget.m_Index) = v13 | info.hTarget.m_Index & 0x8000;
      info.hTarget.m_Index = (v12 << 15) | info.hTarget.m_Index & 0x7FFF;
    }
    else
    {
      info.hTarget.m_Index = -1;
    }
    info.iSourceAttachment = 3;
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    v14 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "DOTA_Item.EtherealBlade.Activate", v14);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Item_Ethereal_Blade::OnProjectileHit  (line 108, @0x0000000002d9d520, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, IsWaitingToSpawn, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC_Hero::GetPrimaryStatValue, ApplyDamage, DOTA_EmitSound, KeyValues::~KeyValues (13 total)
// strings: "blast_agility_multiplier", "blast_damage_base", "duration_ally", "modifier_item_etheral_blade", "modifier_item_ethereal_blade_ethereal", "modifier_item_ethereal_blade_slow" (7 total)
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Item_Ethereal_Blade::OnProjectileHit(
        CDOTA_Item_Ethereal_Blade *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  unsigned int m_bIsDOTANPC; // ebx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  unsigned __int64 m_Value; // rax
  unsigned __int8 v10; // r14
  int LevelSpecialValue; // r15d
  float v12; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v14; // rax
  float PrimaryStatValue; // xmm0_4
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  float blast_agility_multiplier; // [rsp+4h] [rbp-5Ch]
  float duration; // [rsp+Ch] [rbp-54h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( (*hTarget + 2) > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      m_bIsDOTANPC = 1;
      v6 = &v4[*hTarget & 0x1FF];
      if ( v6 == 0 )
        return m_bIsDOTANPC;
      if ( *hTarget != v6->m_EHandle.m_Index )
        return m_bIsDOTANPC;
      m_pInstance = v6->m_pInstance;
      if ( v6->m_pInstance == 0 )
        return m_bIsDOTANPC;
      m_bIsDOTANPC = m_pInstance->m_bIsDOTANPC;
      if ( m_bIsDOTANPC != 0 )
      {
        if ( m_pInstance->m_bIsWaitingToSpawn.m_Value )
        {
          return m_pInstance->m_bIsWaitingToSpawn.m_Value;
        }
        else
        {
          m_Value = m_pInstance->m_nUnitState64.m_Value;
          if ( (m_Value & 0x100) != 0 )
          {
            return 1;
          }
          else if ( (m_Value & 0x200) == 0 )
          {
            v10 = m_pInstance->m_iTeamNum.m_Value;
            if ( v10 == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
              || !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
            {
              blast_agility_multiplier = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                           this,
                                           "blast_agility_multiplier",
                                           -1,
                                           0);
              LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "blast_damage_base", -1, 0);
              CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
              CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration_ally", -1, 0);
              CDOTABaseAbility::GetCaster(this);
              KeyValues::KeyValues(&kv, "modifier_item_etheral_blade");
              KeyValues::SetFloat(&kv, "duration", v12);
              Caster = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_item_ethereal_blade_ethereal", &kv, 0);
              if ( CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value != m_pInstance->m_iTeamNum.m_Value )
              {
                if ( (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 1) != 0 )
                {
                  v14 = CDOTABaseAbility::GetCaster(this);
                  PrimaryStatValue = CDOTA_BaseNPC_Hero::GetPrimaryStatValue(v14);
                }
                else
                {
                  PrimaryStatValue = 0.0;
                }
                duration = (PrimaryStatValue * blast_agility_multiplier) + LevelSpecialValue;
                v16 = CDOTABaseAbility::GetCaster(this);
                ApplyDamage(v16, m_pInstance, this, duration, 2, 0);
                v17 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(m_pInstance, v17, this, "modifier_item_ethereal_blade_slow", &kv, 0);
              }
              DOTA_EmitSound(10, "DOTA_Item.EtherealBlade.Target", m_pInstance);
              KeyValues::~KeyValues(&kv);
            }
            else
            {
              return 0;
            }
          }
        }
        return m_bIsDOTANPC;
      }
    }
  }
  return 1;
}


// CDOTA_Modifier_Item_Ethereal_Blade::~CDOTA_Modifier_Item_Ethereal_Blade  (line 161, @0x0000000002da0f10, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Ethereal_Blade::~CDOTA_Modifier_Item_Ethereal_Blade(
        CDOTA_Modifier_Item_Ethereal_Blade *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Ethereal_Blade::~CDOTA_Modifier_Item_Ethereal_Blade  (line 161, @0x0000000002da0f30, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Ethereal_Blade
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Ethereal_Blade::~CDOTA_Modifier_Item_Ethereal_Blade(
        CDOTA_Modifier_Item_Ethereal_Blade *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Ethereal_Blade::OnCreated  (line 184, @0x0000000002d9c9f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_agility", "bonus_intellect"
void __fastcall CDOTA_Modifier_Item_Ethereal_Blade::OnCreated(
        CDOTA_Modifier_Item_Ethereal_Blade *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_strength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_strength", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_agility = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_strength = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_agility = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_agility", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_intellect = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_intellect", -1, 0);
    return;
  }
LABEL_7:
  this->bonus_intellect = 0;
}


// CDOTA_Modifier_Item_Ethereal_Blade::DeclareFunctions  (line 193, @0x0000000002d93e40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Ethereal_Blade::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_Ethereal_Blade::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_Ethereal_Blade::GetModifierBonusStats_Intellect(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Ethereal_Blade::DeclareFunctions(CDOTA_Modifier_Item_Ethereal_Blade *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Ethereal_Blade::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_Ethereal_Blade::GetModifierBonusStats_Agility;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Ethereal_Blade::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_Item_Ethereal_Blade::GetModifierBonusStats_Strength  (line 202, @0x0000000002d93ea0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ethereal_Blade::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Ethereal_Blade *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Ethereal_Blade::GetModifierBonusStats_Agility  (line 209, @0x0000000002d93ec0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ethereal_Blade::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_Ethereal_Blade *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agility;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Ethereal_Blade::GetModifierBonusStats_Intellect  (line 216, @0x0000000002d93ee0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ethereal_Blade::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Ethereal_Blade *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Ethereal_Blade_Ethereal::~CDOTA_Modifier_Ethereal_Blade_Ethereal  (line 225, @0x0000000002da12f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Ethereal_Blade_Ethereal::~CDOTA_Modifier_Ethereal_Blade_Ethereal(
        CDOTA_Modifier_Ethereal_Blade_Ethereal *const this)
{
  this->_vptr_CDOTA_Buff = &off_46E0A10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Ethereal_Blade_Ethereal::~CDOTA_Modifier_Ethereal_Blade_Ethereal  (line 225, @0x0000000002da1310, libserver.so)  // inlines: ~CDOTA_Modifier_Ethereal_Blade_Ethereal
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Ethereal_Blade_Ethereal::~CDOTA_Modifier_Ethereal_Blade_Ethereal(
        CDOTA_Modifier_Ethereal_Blade_Ethereal *const this)
{
  this->_vptr_CDOTA_Buff = &off_46E0A10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Ethereal_Blade_Ethereal::GetEffectName  (line 234, @0x0000000002d9ed60, libserver.so)
// strings: "particles/items_fx/ghost.vpcf"
const char *__fastcall CDOTA_Modifier_Ethereal_Blade_Ethereal::GetEffectName(
        CDOTA_Modifier_Ethereal_Blade_Ethereal *const this)
{
  return "particles/items_fx/ghost.vpcf";
}


// CDOTA_Modifier_Ethereal_Blade_Ethereal::GetStatusEffectName  (line 235, @0x0000000002d9ed70, libserver.so)
// strings: "particles/status_fx/status_effect_ghost.vpcf"
const char *__fastcall CDOTA_Modifier_Ethereal_Blade_Ethereal::GetStatusEffectName(
        CDOTA_Modifier_Ethereal_Blade_Ethereal *const this)
{
  return "particles/status_fx/status_effect_ghost.vpcf";
}


// CDOTA_Modifier_Ethereal_Blade_Ethereal::StatusEffectPriority  (line 236, @0x0000000002d9ed80, libserver.so)
int __fastcall CDOTA_Modifier_Ethereal_Blade_Ethereal::StatusEffectPriority(
        CDOTA_Modifier_Ethereal_Blade_Ethereal *const this)
{
  return 20;
}


// CDOTA_Modifier_Ethereal_Blade_Ethereal::OnCreated  (line 250, @0x0000000002d9c210, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "ethereal_damage_bonus"
void __fastcall CDOTA_Modifier_Ethereal_Blade_Ethereal::OnCreated(
        CDOTA_Modifier_Ethereal_Blade_Ethereal *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->ethereal_damage_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "ethereal_damage_bonus",
                                    -1,
                                    0);
  else
    this->ethereal_damage_bonus = 0;
}


// CDOTA_Modifier_Ethereal_Blade_Ethereal::DeclareFunctions  (line 257, @0x0000000002d93f00, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Ethereal_Blade_Ethereal::DeclareFunctions(
        CDOTA_Modifier_Ethereal_Blade_Ethereal *const this)
{
  this->m_Functions[9].__pfn = (&stru_10 + 697);
  this->m_Functions[9].__delta = 0;
  this->m_Functions[103].__pfn = (&stru_10 + 705);
  this->m_Functions[103].__delta = 0;
  this->m_Functions[50].__pfn = (&stru_10 + 713);
  this->m_Functions[50].__delta = 0;
}


// CDOTA_Modifier_Ethereal_Blade_Ethereal::GetAbsoluteNoDamagePhysical  (line 266, @0x0000000002d93f50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Ethereal_Blade_Ethereal::GetAbsoluteNoDamagePhysical(
        CDOTA_Modifier_Ethereal_Blade_Ethereal *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Ethereal_Blade_Ethereal::GetModifierMagicalResistanceDecrepifyUnique  (line 273, @0x0000000002d93f70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Ethereal_Blade_Ethereal::GetModifierMagicalResistanceDecrepifyUnique(
        CDOTA_Modifier_Ethereal_Blade_Ethereal *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->ethereal_damage_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Ethereal_Blade_Ethereal::GetModifierInvisibilityLevel  (line 280, @0x0000000002d96cb0, libserver.so)  // inlines: RemapValClamped, clamp<float, float>, curtime
// calls: sinf
ModifierVariant_t __fastcall CDOTA_Modifier_Ethereal_Blade_Ethereal::GetModifierInvisibilityLevel(
        CDOTA_Modifier_Ethereal_Blade_Ethereal *const this,
        const CModifierParams *const params)
{
  CGlobalVars *v2; // rbx
  float v3; // xmm0_4
  __m128i v4; // xmm1
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  ModifierVariant_t result; // 0:rax.16

  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, params);
    }
    v3 = (sinf(6.0 * v2->m_flCurrentTime) + 5.0) / 10.0;
    if ( v3 < 0.0 )
    {
      v4 = 0x3E800000u;
    }
    else
    {
      v4 = 0x3E99999Au;
      if ( v3 <= 1.0 )
      {
        v4 = 0x3D4CCCD0u;
        *v4.m128i_i32 = (0.050000012 * v3) + 0.25;
      }
    }
  }
  else
  {
    v4 = 0x3E8CCCCDu;
  }
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Ethereal_Blade_Ethereal::CheckState  (line 289, @0x0000000002d93f90, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Ethereal_Blade_Ethereal::CheckState(
        CDOTA_Modifier_Ethereal_Blade_Ethereal *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 6uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFF9LL;
}


// CDOTA_Modifier_Item_Ethereal_Blade_Slow::~CDOTA_Modifier_Item_Ethereal_Blade_Slow  (line 300, @0x0000000002da12a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Ethereal_Blade_Slow::~CDOTA_Modifier_Item_Ethereal_Blade_Slow(
        CDOTA_Modifier_Item_Ethereal_Blade_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_46E0D50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Ethereal_Blade_Slow::~CDOTA_Modifier_Item_Ethereal_Blade_Slow  (line 300, @0x0000000002da12c0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Ethereal_Blade_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Ethereal_Blade_Slow::~CDOTA_Modifier_Item_Ethereal_Blade_Slow(
        CDOTA_Modifier_Item_Ethereal_Blade_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_46E0D50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Ethereal_Blade_Slow::IsDebuff  (line 307, @0x0000000002d9ed90, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Ethereal_Blade_Slow::IsDebuff(CDOTA_Modifier_Item_Ethereal_Blade_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Ethereal_Blade_Slow::OnCreated  (line 321, @0x0000000002d9c2d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "blast_movement_slow"
void __fastcall CDOTA_Modifier_Item_Ethereal_Blade_Slow::OnCreated(
        CDOTA_Modifier_Item_Ethereal_Blade_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->blast_movement_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "blast_movement_slow", -1, 0);
  else
    this->blast_movement_slow = 0;
}


// CDOTA_Modifier_Item_Ethereal_Blade_Slow::DeclareFunctions  (line 328, @0x0000000002d93fb0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Ethereal_Blade_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Ethereal_Blade_Slow::DeclareFunctions(
        CDOTA_Modifier_Item_Ethereal_Blade_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Item_Ethereal_Blade_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Item_Ethereal_Blade_Slow::GetModifierMoveSpeedBonus_Percentage  (line 335, @0x0000000002d93fd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ethereal_Blade_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Item_Ethereal_Blade_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->blast_movement_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


