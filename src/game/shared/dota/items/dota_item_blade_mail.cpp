// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_blade_mail.cpp:27
class CDOTA_Item_Recipe_Blade_Mail : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Blade_Mail(CDOTA_Item_Recipe_Blade_Mail &);
	CDOTA_Item_Recipe_Blade_Mail(CDOTA_Item_Recipe_Blade_Mail &);
	CDOTA_Item_Recipe_Blade_Mail();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Blade_Mail();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_blade_mail.cpp:39
class CDOTA_Item_Blade_Mail : public CDOTA_Item {
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
	CDOTA_Item_Blade_Mail(CDOTA_Item_Blade_Mail &);
	CDOTA_Item_Blade_Mail(CDOTA_Item_Blade_Mail &);
	CDOTA_Item_Blade_Mail();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_Blade_Mail();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_blade_mail.cpp:68
class CDOTA_Modifier_Item_Blade_Mail_Reflect : public CDOTA_Buff {
public:

	CDOTA_Modifier_Item_Blade_Mail_Reflect();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Item_Blade_Mail_Reflect();

	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/items/dota_item_blade_mail.cpp:109
class CDOTA_Modifier_Item_Blade_Mail : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	int bonus_armor;  // +0xbac
	int bonus_intellect;  // +0xbb0
	CDOTA_Modifier_Item_Blade_Mail();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Blade_Mail();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Blade_Mail::~CDOTA_Item_Recipe_Blade_Mail  (line 27, @0x0000000002d64710, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Blade_Mail::~CDOTA_Item_Recipe_Blade_Mail(CDOTA_Item_Recipe_Blade_Mail *const this)
{
  this->_vptr_IHandleEntity = &off_4694BF0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Blade_Mail::~CDOTA_Item_Recipe_Blade_Mail  (line 27, @0x0000000002d64730, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Blade_Mail
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Blade_Mail::~CDOTA_Item_Recipe_Blade_Mail(CDOTA_Item_Recipe_Blade_Mail *const this)
{
  this->_vptr_IHandleEntity = &off_4694BF0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Blade_Mail::Schema_DynamicBinding  (line 29, @0x0000000002d60fa0, libserver.so)
// globals: CDOTA_Item_Recipe_Blade_Mail::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Blade_Mail::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Blade_Mail *const this)
{
  return CDOTA_Item_Recipe_Blade_Mail::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002d60fb0, libserver.so)
// globals: CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002d60fc0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Blade_Mail>
void __fastcall CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002d60fe0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002d61000, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002d61010, libserver.so)
// globals: CDOTA_Item_Recipe_Blade_Mail::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Blade_Mail::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002d626f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002d63810, libserver.so)  // inlines: CDOTA_Item_Recipe_Blade_Mail, Construct<CDOTA_Item_Recipe_Blade_Mail>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4694BF0;
  }
  return p;
}


// CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002d66630, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002d66650, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInternal  (line 29, @0x0000000002d6c720, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "item_recipe_blade_mail", "CDOTA_Item_Recipe_Blade_Mail"
// globals: `guard variable for'CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClass, CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClass, __dso_handle, CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClassInfo, CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClass);
    CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClass._vptr_CEntityClass = off_4694B70;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Blade_MailClass != 0 )
    return &CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClassInfo,
      "CDOTA_Item_Recipe_Blade_Mail",
      "item_recipe_blade_mail",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClassInfo);
  }
  CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClass.m_pClassInfo = &CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClassInfo;
  CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Blade_MailClass = &CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClass;
  CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClassInfo.m_pClass = &CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClass;
  CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Blade_MailClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Blade_MailClass;
}


// CDOTA_Item_Blade_Mail::~CDOTA_Item_Blade_Mail  (line 39, @0x0000000002d64760, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Blade_Mail::~CDOTA_Item_Blade_Mail(CDOTA_Item_Blade_Mail *const this)
{
  this->_vptr_IHandleEntity = &off_46957F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Blade_Mail::~CDOTA_Item_Blade_Mail  (line 39, @0x0000000002d64780, libserver.so)  // inlines: ~CDOTA_Item_Blade_Mail
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Blade_Mail::~CDOTA_Item_Blade_Mail(CDOTA_Item_Blade_Mail *const this)
{
  this->_vptr_IHandleEntity = &off_46957F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Blade_Mail::Schema_DynamicBinding  (line 41, @0x0000000002d61020, libserver.so)
// globals: CDOTA_Item_Blade_Mail::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Blade_Mail::Schema_DynamicBinding(
        const CDOTA_Item_Blade_Mail *const this)
{
  return CDOTA_Item_Blade_Mail::s_pSchemaBinding;
}


// CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002d61030, libserver.so)
// globals: CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002d61040, libserver.so)  // inlines: Destruct<CDOTA_Item_Blade_Mail>
void __fastcall CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002d61060, libserver.so)
void __fastcall CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002d61080, libserver.so)
bool __fastcall CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002d61090, libserver.so)
// globals: CDOTA_Item_Blade_Mail::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Blade_Mail::s_pSchemaBinding;
}


// CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002d62730, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002d63840, libserver.so)  // inlines: CDOTA_Item_Blade_Mail, Construct<CDOTA_Item_Blade_Mail>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46957F0;
  }
  return p;
}


// CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d66680, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d666a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Blade_Mail::GetEntityClassInternal  (line 41, @0x0000000002d6c870, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "CDOTA_Item_Blade_Mail"
// globals: `guard variable for'CDOTA_Item_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blade_MailClass, CDOTA_Item_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blade_MailClass, __dso_handle, CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Blade_Mail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Blade_MailClassInfo, CDOTA_Item_Blade_Mail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Blade_MailClassInfo
CEntityClass *__cdecl CDOTA_Item_Blade_Mail::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blade_MailClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blade_MailClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blade_MailClass);
    CDOTA_Item_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blade_MailClass._vptr_CEntityClass = off_4695770;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blade_MailClass);
    __cxa_atexit(
      CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blade_MailClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Blade_MailClass != 0 )
    return &CDOTA_Item_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blade_MailClass;
  if ( `guard variable for'CDOTA_Item_Blade_Mail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Blade_MailClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Blade_Mail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Blade_MailClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Blade_Mail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Blade_MailClassInfo,
      "CDOTA_Item_Blade_Mail",
      "item_blade_mail",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Blade_Mail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Blade_MailClassInfo);
  }
  CDOTA_Item_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blade_MailClass.m_pClassInfo = &CDOTA_Item_Blade_Mail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Blade_MailClassInfo;
  CDOTA_Item_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blade_MailClass.m_pBaseClassInfo = CDOTA_Item_Blade_Mail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Blade_MailClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Blade_MailClass = &CDOTA_Item_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blade_MailClass;
  CDOTA_Item_Blade_Mail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Blade_MailClassInfo.m_pClass = &CDOTA_Item_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blade_MailClass;
  CDOTA_Item_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blade_MailClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Blade_MailClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Blade_Mail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blade_MailClass;
}


// CDOTA_Item_Blade_Mail::GetIntrinsicModifierName  (line 43, @0x0000000002d610a0, libserver.so)
// strings: "modifier_item_blade_mail"
const char *__fastcall CDOTA_Item_Blade_Mail::GetIntrinsicModifierName(CDOTA_Item_Blade_Mail *const this)
{
  return "modifier_item_blade_mail";
}


// CDOTA_Item_Blade_Mail::OnSpellStart  (line 48, @0x0000000002d5cbc0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_item_blade_mail_reflect", "DOTA_Item.BladeMail.Activate"
void __fastcall CDOTA_Item_Blade_Mail::OnSpellStart(CDOTA_Item_Blade_Mail *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_item_blade_mail_reflect");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_item_blade_mail_reflect", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "DOTA_Item.BladeMail.Activate", v5);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Item_Blade_Mail_Reflect::~CDOTA_Modifier_Item_Blade_Mail_Reflect  (line 68, @0x0000000002d631b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Blade_Mail_Reflect::~CDOTA_Modifier_Item_Blade_Mail_Reflect(
        CDOTA_Modifier_Item_Blade_Mail_Reflect *const this)
{
  this->_vptr_CDOTA_Buff = &off_46963B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Blade_Mail_Reflect::~CDOTA_Modifier_Item_Blade_Mail_Reflect  (line 68, @0x0000000002d631d0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Blade_Mail_Reflect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Blade_Mail_Reflect::~CDOTA_Modifier_Item_Blade_Mail_Reflect(
        CDOTA_Modifier_Item_Blade_Mail_Reflect *const this)
{
  this->_vptr_CDOTA_Buff = &off_46963B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Blade_Mail_Reflect::GetEffectName  (line 75, @0x0000000002d610b0, libserver.so)
// strings: "particles/items_fx/blademail.vpcf"
const char *__fastcall CDOTA_Modifier_Item_Blade_Mail_Reflect::GetEffectName(
        CDOTA_Modifier_Item_Blade_Mail_Reflect *const this)
{
  return "particles/items_fx/blademail.vpcf";
}


// CDOTA_Modifier_Item_Blade_Mail_Reflect::GetEffectAttachType  (line 76, @0x0000000002d610c0, libserver.so)
int __fastcall CDOTA_Modifier_Item_Blade_Mail_Reflect::GetEffectAttachType(
        CDOTA_Modifier_Item_Blade_Mail_Reflect *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Blade_Mail_Reflect::GetStatusEffectName  (line 77, @0x0000000002d610d0, libserver.so)
// strings: "particles/status_fx/status_effect_blademail.vpcf"
const char *__fastcall CDOTA_Modifier_Item_Blade_Mail_Reflect::GetStatusEffectName(
        CDOTA_Modifier_Item_Blade_Mail_Reflect *const this)
{
  return "particles/status_fx/status_effect_blademail.vpcf";
}


// CDOTA_Modifier_Item_Blade_Mail_Reflect::StatusEffectPriority  (line 78, @0x0000000002d610e0, libserver.so)
int __fastcall CDOTA_Modifier_Item_Blade_Mail_Reflect::StatusEffectPriority(
        CDOTA_Modifier_Item_Blade_Mail_Reflect *const this)
{
  return 30;
}


// CDOTA_Modifier_Item_Blade_Mail_Reflect::IsPurgable  (line 79, @0x0000000002d610f0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Blade_Mail_Reflect::IsPurgable(CDOTA_Modifier_Item_Blade_Mail_Reflect *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Blade_Mail_Reflect::DeclareFunctions  (line 84, @0x0000000002d544e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Blade_Mail_Reflect::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Blade_Mail_Reflect::DeclareFunctions(
        CDOTA_Modifier_Item_Blade_Mail_Reflect *const this)
{
  this->m_Functions[134].__pfn = CDOTA_Modifier_Item_Blade_Mail_Reflect::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Item_Blade_Mail_Reflect::OnTakeDamage  (line 89, @0x0000000002d57de0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, ApplyDamage, DOTA_EmitSound
// strings: "DOTA_Item.BladeMail.Damage"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Blade_Mail_Reflect::OnTakeDamage(
        CDOTA_Modifier_Item_Blade_Mail_Reflect *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // r13
  uint32 m_iUnitType; // eax
  unsigned __int8 m_Value; // r14
  int nDamageType; // r14d
  CDOTABaseAbility *Ability; // rbx
  CDOTA_BaseNPC *Parent; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  m_pInstance = 0;
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hunit.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
  {
    v9 = params->hattacker.m_Index;
    if ( v9 + 2 > 1 )
    {
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[params->hattacker.m_Index & 0x1FF];
        if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        {
          v12 = v11->m_pInstance;
          if ( v11->m_pInstance != 0 && v12->m_bIsDOTANPC )
          {
            m_iUnitType = v12->m_iUnitType;
            if ( (m_iUnitType & 0x10) == 0 && (m_iUnitType & 0x193) != 0 && (params->nDamageflags & 0x10) == 0 )
            {
              m_Value = v12->m_iTeamNum.m_Value;
              if ( m_Value != CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
              {
                nDamageType = params->nDamageType;
                flDamage = params->fOriginalDamage;
                Ability = CDOTA_Buff::GetAbility(this);
                Parent = CDOTA_Buff::GetParent(this);
                ApplyDamage(Parent, v12, Ability, flDamage, nDamageType, 16);
                DOTA_EmitSound(1, "DOTA_Item.BladeMail.Damage", v12);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_Blade_Mail::~CDOTA_Modifier_Item_Blade_Mail  (line 109, @0x0000000002d62d00, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Blade_Mail::~CDOTA_Modifier_Item_Blade_Mail(
        CDOTA_Modifier_Item_Blade_Mail *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Blade_Mail::~CDOTA_Modifier_Item_Blade_Mail  (line 109, @0x0000000002d62d20, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Blade_Mail
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Blade_Mail::~CDOTA_Modifier_Item_Blade_Mail(
        CDOTA_Modifier_Item_Blade_Mail *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Blade_Mail::OnCreated  (line 130, @0x0000000002d5f340, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_intellect"
void __fastcall CDOTA_Modifier_Item_Blade_Mail::OnCreated(CDOTA_Modifier_Item_Blade_Mail *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_armor = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_damage = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_armor", -1, 0);
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


// CDOTA_Modifier_Item_Blade_Mail::DeclareFunctions  (line 137, @0x0000000002d54500, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Blade_Mail::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_Blade_Mail::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Item_Blade_Mail::GetModifierBonusStats_Intellect(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Blade_Mail::DeclareFunctions(CDOTA_Modifier_Item_Blade_Mail *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Blade_Mail::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_Blade_Mail::GetModifierPhysicalArmorBonus;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Blade_Mail::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_Item_Blade_Mail::GetModifierPreAttack_BonusDamage  (line 144, @0x0000000002d54560, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Blade_Mail::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Blade_Mail *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Blade_Mail::GetModifierPhysicalArmorBonus  (line 149, @0x0000000002d54580, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Blade_Mail::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Blade_Mail *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Blade_Mail::GetModifierBonusStats_Intellect  (line 154, @0x0000000002d545a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Blade_Mail::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Blade_Mail *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


