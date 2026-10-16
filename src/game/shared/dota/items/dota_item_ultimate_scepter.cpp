// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_ultimate_scepter.cpp:26
class CDOTA_Item_Recipe_UltimateScepter : public CDOTA_Item {
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
	CDOTA_Item_Recipe_UltimateScepter(CDOTA_Item_Recipe_UltimateScepter &);
	CDOTA_Item_Recipe_UltimateScepter(CDOTA_Item_Recipe_UltimateScepter &);
	CDOTA_Item_Recipe_UltimateScepter();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_UltimateScepter();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_ultimate_scepter.cpp:37
class CDOTA_Item_UltimateScepter : public CDOTA_Item {
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
	CDOTA_Item_UltimateScepter(CDOTA_Item_UltimateScepter &);
	CDOTA_Item_UltimateScepter(CDOTA_Item_UltimateScepter &);
	CDOTA_Item_UltimateScepter();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual void OnSpellStart();
	virtual int GetBehavior();
	virtual ~CDOTA_Item_UltimateScepter();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[266] OnSpellStart
	// vtable[251] GetBehavior
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_ultimate_scepter.cpp:52
class C_CDOTA_Item_UltimateScepter_MapInstall {
	C_CDOTA_Item_UltimateScepter_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_ultimate_scepter.cpp:137
class CDOTA_Modifier_Item_UltimateScepter : public CDOTA_Buff_Item {
public:

private:

	int bonus_all_stats;  // +0xba8
	int bonus_health;  // +0xbac
	int bonus_mana;  // +0xbb0
	CDOTA_Modifier_Item_UltimateScepter();
	ModifierVariant_t GetModifierBonusStats_All(const CModifierParams &);
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	ModifierVariant_t GetModifierManaBonus(const CModifierParams &);
	ModifierVariant_t GetModifierScepter(const CModifierParams &);
	ModifierVariant_t GetModifierTranslateActivityModifiers(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Item_UltimateScepter();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_ultimate_scepter.cpp:261
class CDOTA_Modifier_Item_UltimateScepter_Consumed : public CDOTA_Buff_Item {
public:

private:

	int bonus_all_stats;  // +0xba8
	int bonus_health;  // +0xbac
	int bonus_mana;  // +0xbb0
	CDOTA_Modifier_Item_UltimateScepter_Consumed();
	ModifierVariant_t GetModifierBonusStats_All(const CModifierParams &);
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	ModifierVariant_t GetModifierManaBonus(const CModifierParams &);
	ModifierVariant_t GetModifierScepter(const CModifierParams &);
	ModifierVariant_t GetModifierTranslateActivityModifiers(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool RemoveOnDeath();
	virtual const char * GetTexture();
	virtual bool AllowIllusionDuplicate();
	virtual EMatchPermanentBuff GetMatchPermanentBuff();
	virtual ~CDOTA_Modifier_Item_UltimateScepter_Consumed();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[54] RemoveOnDeath
	// vtable[32] GetTexture
	// vtable[18] AllowIllusionDuplicate
	// vtable[53] GetMatchPermanentBuff
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_UltimateScepter::~CDOTA_Item_Recipe_UltimateScepter  (line 26, @0x0000000002e0f580, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_UltimateScepter::~CDOTA_Item_Recipe_UltimateScepter(
        CDOTA_Item_Recipe_UltimateScepter *const this)
{
  this->_vptr_IHandleEntity = &off_47808B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_UltimateScepter::~CDOTA_Item_Recipe_UltimateScepter  (line 26, @0x0000000002e0f5a0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_UltimateScepter
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_UltimateScepter::~CDOTA_Item_Recipe_UltimateScepter(
        CDOTA_Item_Recipe_UltimateScepter *const this)
{
  this->_vptr_IHandleEntity = &off_47808B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_UltimateScepter::Schema_DynamicBinding  (line 28, @0x0000000002e0c1b0, libserver.so)
// globals: CDOTA_Item_Recipe_UltimateScepter::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_UltimateScepter::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_UltimateScepter *const this)
{
  return CDOTA_Item_Recipe_UltimateScepter::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002e0c1c0, libserver.so)
// globals: CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002e0c1d0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_UltimateScepter>
void __fastcall CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002e0c1f0, libserver.so)
void __fastcall CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002e0c210, libserver.so)
bool __fastcall CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002e0c220, libserver.so)
// globals: CDOTA_Item_Recipe_UltimateScepter::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_UltimateScepter::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002e0d840, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002e0e770, libserver.so)  // inlines: CDOTA_Item_Recipe_UltimateScepter, Construct<CDOTA_Item_Recipe_UltimateScepter>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47808B0;
  }
  return p;
}


// CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e11230, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e11250, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInternal  (line 28, @0x0000000002e16e90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "item_recipe_ultimate_scepter", "CDOTA_Item_Recipe_UltimateScepter"
// globals: `guard variable for'CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClass, CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClass, __dso_handle, CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClassInfo, CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClass);
    CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClass._vptr_CEntityClass = off_4780830;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_UltimateScepterClass != 0 )
    return &CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClass;
  if ( `guard variable for'CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClassInfo,
      "CDOTA_Item_Recipe_UltimateScepter",
      "item_recipe_ultimate_scepter",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClassInfo);
  }
  CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClass.m_pClassInfo = &CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClassInfo;
  CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClass.m_pBaseClassInfo = CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_UltimateScepterClass = &CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClass;
  CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClassInfo.m_pClass = &CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClass;
  CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_UltimateScepterClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_UltimateScepterClass;
}


// CDOTA_Item_UltimateScepter::~CDOTA_Item_UltimateScepter  (line 37, @0x0000000002e0f5d0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_UltimateScepter::~CDOTA_Item_UltimateScepter(CDOTA_Item_UltimateScepter *const this)
{
  this->_vptr_IHandleEntity = &off_47814B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_UltimateScepter::~CDOTA_Item_UltimateScepter  (line 37, @0x0000000002e0f5f0, libserver.so)  // inlines: ~CDOTA_Item_UltimateScepter
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_UltimateScepter::~CDOTA_Item_UltimateScepter(CDOTA_Item_UltimateScepter *const this)
{
  this->_vptr_IHandleEntity = &off_47814B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_UltimateScepter::Schema_DynamicBinding  (line 39, @0x0000000002e0c230, libserver.so)
// globals: CDOTA_Item_UltimateScepter::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_UltimateScepter::Schema_DynamicBinding(
        const CDOTA_Item_UltimateScepter *const this)
{
  return CDOTA_Item_UltimateScepter::s_pSchemaBinding;
}


// CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002e0c240, libserver.so)
// globals: CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002e0c250, libserver.so)  // inlines: Destruct<CDOTA_Item_UltimateScepter>
void __fastcall CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002e0c270, libserver.so)
void __fastcall CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002e0c290, libserver.so)
bool __fastcall CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002e0c2a0, libserver.so)
// globals: CDOTA_Item_UltimateScepter::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_UltimateScepter::s_pSchemaBinding;
}


// CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002e0d880, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002e0e7a0, libserver.so)  // inlines: CDOTA_Item_UltimateScepter, Construct<CDOTA_Item_UltimateScepter>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47814B0;
  }
  return p;
}


// CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002e11280, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002e112a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_UltimateScepter::GetEntityClassInternal  (line 39, @0x0000000002e16fe0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "item_ultimate_scepter", "CDOTA_Item_UltimateScepter"
// globals: `guard variable for'CDOTA_Item_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateScepterClass, CDOTA_Item_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateScepterClass, __dso_handle, CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_UltimateScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UltimateScepterClassInfo, CDOTA_Item_UltimateScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UltimateScepterClassInfo
CEntityClass *__cdecl CDOTA_Item_UltimateScepter::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateScepterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateScepterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateScepterClass);
    CDOTA_Item_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateScepterClass._vptr_CEntityClass = off_4781430;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateScepterClass);
    __cxa_atexit(
      CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateScepterClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_UltimateScepterClass != 0 )
    return &CDOTA_Item_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateScepterClass;
  if ( `guard variable for'CDOTA_Item_UltimateScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UltimateScepterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_UltimateScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UltimateScepterClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_UltimateScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UltimateScepterClassInfo,
      "CDOTA_Item_UltimateScepter",
      "item_ultimate_scepter",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_UltimateScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UltimateScepterClassInfo);
  }
  CDOTA_Item_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateScepterClass.m_pClassInfo = &CDOTA_Item_UltimateScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UltimateScepterClassInfo;
  CDOTA_Item_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateScepterClass.m_pBaseClassInfo = CDOTA_Item_UltimateScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UltimateScepterClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_UltimateScepterClass = &CDOTA_Item_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateScepterClass;
  CDOTA_Item_UltimateScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UltimateScepterClassInfo.m_pClass = &CDOTA_Item_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateScepterClass;
  CDOTA_Item_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateScepterClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_UltimateScepterClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_UltimateScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateScepterClass;
}


// CDOTA_Item_UltimateScepter::GetIntrinsicModifierName  (line 42, @0x0000000002e0c2b0, libserver.so)
// strings: "modifier_item_ultimate_scepter"
const char *__fastcall CDOTA_Item_UltimateScepter::GetIntrinsicModifierName(CDOTA_Item_UltimateScepter *const this)
{
  return "modifier_item_ultimate_scepter";
}


// CDOTA_Item_UltimateScepter::YouForgotToImplementOrDeclareServerClass  (line 52, @0x0000000002dff750, libserver.so)
int __fastcall CDOTA_Item_UltimateScepter::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_UltimateScepter *const this)
{
  return 0;
}


// CDOTA_Item_UltimateScepter::GetServerClass  (line 52, @0x0000000002e02dd0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_UltimateScepter::GetServerClass(CDOTA_Item_UltimateScepter *const this)
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


// CDOTA_Item_UltimateScepter::CastFilterResult  (line 61, @0x0000000002e020d0, libserver.so)  // inlines: GetModifier_Constant_First, IsListeningToEvent, IsTempestDouble
// calls: CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::CastFilterResult
// strings: "modifier_item_ultimate_scepter_consumed"
int __fastcall CDOTA_Item_UltimateScepter::CastFilterResult(
        CDOTA_Item_UltimateScepter *const this,
        CDOTA_BaseNPC *pTarget)
{
  __int64 v3; // rax
  int result; // eax
  CDOTA_Buff *ModifierByName; // rdx

  if ( pTarget == 0 )
    return 8;
  v3 = pTarget->m_ModifierManager.m_buffsForModifiers[166];
  if ( v3 != 0xFF
    && pTarget->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v3].m_Size > 0
    && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
         &pTarget->m_ModifierManager,
         modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
         &CModifierParams::s_Default) == 1.0 )
  {
    return 8;
  }
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_item_ultimate_scepter_consumed", 0);
  result = 23;
  if ( ModifierByName == 0 )
    return CDOTABaseAbility::CastFilterResult(this, pTarget);
  return result;
}


// CDOTA_Item_UltimateScepter::GetCustomCastError  (line 78, @0x0000000002dff760, libserver.so)
// strings: "#dota_hud_error_cant_cast_scepter_buff"
const char *__fastcall CDOTA_Item_UltimateScepter::GetCustomCastError(
        CDOTA_Item_UltimateScepter *const this,
        CDOTA_BaseNPC *pTarget)
{
  return "#dota_hud_error_cant_cast_scepter_buff";
}


// CDOTA_Item_UltimateScepter::GetBehavior  (line 85, @0x0000000002e00110, libserver.so)  // inlines: FStrEq, GetUnitName, String, ToCStr, _V_strcmp
// calls: CDOTABaseAbility::GetCaster
// strings: "npc_dota_hero_alchemist"
int __fastcall CDOTA_Item_UltimateScepter::GetBehavior(CDOTA_Item_UltimateScepter *const this)
{
  const char *m_pAsString; // rsi
  int result; // eax

  if ( CDOTABaseAbility::GetCaster(this) == 0 )
    return 2;
  m_pAsString = CDOTABaseAbility::GetCaster(this)->m_iszUnitName.m_Value.u.m_pAsString;
  if ( m_pAsString == 0 )
    return 2;
  result = 8;
  if ( m_pAsString != "npc_dota_hero_alchemist" && strcmp(m_pAsString, "npc_dota_hero_alchemist") != 0 )
    return 2;
  return result;
}


// CDOTA_Item_UltimateScepter::OnSpellStart  (line 97, @0x0000000002e07760, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, NetworkStateChanged, QueueConcept, Set, SetPlayerOwnerID, ToDOTABaseNPC, ToDOTABaseNPCHero, operator=<int>
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::FindModifierByName, CDOTA_Speech::QueueConcept, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, CDOTA_Item::RemoveItem, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// strings: "modifier_item_ultimate_scepter_consumed", "Hero_Alchemist.Scepter.Cast", "bonus_all_stats", "bonus_health", "bonus_mana"
void __fastcall CDOTA_Item_UltimateScepter::OnSpellStart(CDOTA_Item_UltimateScepter *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  CDOTA_Speech *m_pSpeech; // rdi
  int v5; // r13d
  int LevelSpecialValue; // r15d
  int v7; // r14d
  float v8; // xmm1_4
  int bonus_mana; // [rsp+1Ch] [rbp-54h]
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && (CursorTarget[2].m_hEffectEntity.m_Value.m_Index & 1) != 0
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__delta) == 0
    && (*(CursorTarget->_vptr_IHandleEntity + 390))(CursorTarget) == 0 )
  {
    if ( CDOTA_BaseNPC::FindModifierByName(v3, "modifier_item_ultimate_scepter_consumed", 0) == 0 )
    {
      v5 = (*(v3->_vptr_IHandleEntity + 414))(v3);
      if ( v5 != this->m_iPlayerOwnerID.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 988, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_iPlayerOwnerID.m_Value = v5;
      }
      (*(v3->_vptr_IHandleEntity + 479))(v3, this);
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_all_stats", -1, 0);
      v7 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_health", -1, 0);
      bonus_mana = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_mana", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_item_ultimate_scepter_consumed");
      KeyValues::SetFloat(&kv, "duration", v8);
      KeyValues::SetInt(&kv, "bonus_all_stats", LevelSpecialValue);
      KeyValues::SetInt(&kv, "bonus_health", v7);
      KeyValues::SetInt(&kv, "bonus_mana", bonus_mana);
      CDOTA_BaseNPC::AddNewModifier(v3, v3, this, "modifier_item_ultimate_scepter_consumed", &kv, 0);
      CDOTA_Item::RemoveItem(this);
      KeyValues::~KeyValues(&kv);
    }
    m_pSpeech = v3->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::QueueConcept(m_pSpeech, 26, 0.5, 0, 0, 1, 0, 0, 0);
    CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Alchemist.Scepter.Cast", 0.0, 0, 0);
  }
}


// CDOTA_Modifier_Item_UltimateScepter::~CDOTA_Modifier_Item_UltimateScepter  (line 137, @0x0000000002e0dca0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_UltimateScepter::~CDOTA_Modifier_Item_UltimateScepter(
        CDOTA_Modifier_Item_UltimateScepter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_UltimateScepter::~CDOTA_Modifier_Item_UltimateScepter  (line 137, @0x0000000002e0dcc0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_UltimateScepter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_UltimateScepter::~CDOTA_Modifier_Item_UltimateScepter(
        CDOTA_Modifier_Item_UltimateScepter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_UltimateScepter::DeclareFunctions  (line 161, @0x0000000002dff770, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_UltimateScepter::GetModifierBonusStats_All(CModifierParams const&), CDOTA_Modifier_Item_UltimateScepter::GetModifierHealthBonus(CModifierParams const&), CDOTA_Modifier_Item_UltimateScepter::GetModifierManaBonus(CModifierParams const&), CDOTA_Modifier_Item_UltimateScepter::GetModifierScepter(CModifierParams const&), CDOTA_Modifier_Item_UltimateScepter::GetModifierTranslateActivityModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_UltimateScepter::DeclareFunctions(CDOTA_Modifier_Item_UltimateScepter *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_UltimateScepter::GetModifierBonusStats_All;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_UltimateScepter::GetModifierBonusStats_All;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_UltimateScepter::GetModifierBonusStats_All;
  this->m_Functions[58].__pfn = CDOTA_Modifier_Item_UltimateScepter::GetModifierHealthBonus;
  this->m_Functions[59].__pfn = CDOTA_Modifier_Item_UltimateScepter::GetModifierManaBonus;
  this->m_Functions[154].__pfn = CDOTA_Modifier_Item_UltimateScepter::GetModifierScepter;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[58].__delta = 0;
  this->m_Functions[59].__delta = 0;
  this->m_Functions[154].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Item_UltimateScepter::GetModifierTranslateActivityModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Item_UltimateScepter::OnCreated  (line 175, @0x0000000002e08030, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_all_stats", "bonus_health", "bonus_mana"
void __fastcall CDOTA_Modifier_Item_UltimateScepter::OnCreated(
        CDOTA_Modifier_Item_UltimateScepter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_all_stats = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_all_stats", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_health = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_all_stats = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_health = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_health", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_mana = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_mana", -1, 0);
    return;
  }
LABEL_7:
  this->bonus_mana = 0;
}


// CDOTA_Modifier_Item_UltimateScepter::OnDestroy  (line 210, @0x0000000002dff820, libserver.so)
void __fastcall CDOTA_Modifier_Item_UltimateScepter::OnDestroy(CDOTA_Modifier_Item_UltimateScepter *const this)
{
  ;
}


// CDOTA_Modifier_Item_UltimateScepter::GetModifierBonusStats_All  (line 232, @0x0000000002dff830, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_UltimateScepter::GetModifierBonusStats_All(
        CDOTA_Modifier_Item_UltimateScepter *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_UltimateScepter::GetModifierHealthBonus  (line 237, @0x0000000002dff850, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_UltimateScepter::GetModifierHealthBonus(
        CDOTA_Modifier_Item_UltimateScepter *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_UltimateScepter::GetModifierManaBonus  (line 242, @0x0000000002dff870, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_UltimateScepter::GetModifierManaBonus(
        CDOTA_Modifier_Item_UltimateScepter *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_UltimateScepter::GetModifierScepter  (line 247, @0x0000000002dff890, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_UltimateScepter::GetModifierScepter(
        CDOTA_Modifier_Item_UltimateScepter *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Item_UltimateScepter::GetModifierTranslateActivityModifiers  (line 252, @0x0000000002dff8b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_UltimateScepter::GetModifierTranslateActivityModifiers(
        CDOTA_Modifier_Item_UltimateScepter *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "ultimate_scepter";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Item_UltimateScepter_Consumed::~CDOTA_Modifier_Item_UltimateScepter_Consumed  (line 261, @0x0000000002e0dc50, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_UltimateScepter_Consumed::~CDOTA_Modifier_Item_UltimateScepter_Consumed(
        CDOTA_Modifier_Item_UltimateScepter_Consumed *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_UltimateScepter_Consumed::~CDOTA_Modifier_Item_UltimateScepter_Consumed  (line 261, @0x0000000002e0dc70, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_UltimateScepter_Consumed
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_UltimateScepter_Consumed::~CDOTA_Modifier_Item_UltimateScepter_Consumed(
        CDOTA_Modifier_Item_UltimateScepter_Consumed *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_UltimateScepter_Consumed::IsHidden  (line 276, @0x0000000002e0c2c0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_UltimateScepter_Consumed::IsHidden(
        CDOTA_Modifier_Item_UltimateScepter_Consumed *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_UltimateScepter_Consumed::IsPurgable  (line 277, @0x0000000002e0c2d0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_UltimateScepter_Consumed::IsPurgable(
        CDOTA_Modifier_Item_UltimateScepter_Consumed *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_UltimateScepter_Consumed::RemoveOnDeath  (line 278, @0x0000000002e0c2e0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_UltimateScepter_Consumed::RemoveOnDeath(
        CDOTA_Modifier_Item_UltimateScepter_Consumed *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_UltimateScepter_Consumed::GetTexture  (line 279, @0x0000000002e0c2f0, libserver.so)
// strings: "item_ultimate_scepter"
const char *__fastcall CDOTA_Modifier_Item_UltimateScepter_Consumed::GetTexture(
        CDOTA_Modifier_Item_UltimateScepter_Consumed *const this)
{
  return "item_ultimate_scepter";
}


// CDOTA_Modifier_Item_UltimateScepter_Consumed::AllowIllusionDuplicate  (line 280, @0x0000000002e0c300, libserver.so)
bool __fastcall CDOTA_Modifier_Item_UltimateScepter_Consumed::AllowIllusionDuplicate(
        CDOTA_Modifier_Item_UltimateScepter_Consumed *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_UltimateScepter_Consumed::GetMatchPermanentBuff  (line 281, @0x0000000002e0c310, libserver.so)
EMatchPermanentBuff __fastcall CDOTA_Modifier_Item_UltimateScepter_Consumed::GetMatchPermanentBuff(
        CDOTA_Modifier_Item_UltimateScepter_Consumed *const this)
{
  return EMatchPermanentBuff::MATCH_PERMANENT_BUFF_ULTIMATE_SCEPTER;
}


// CDOTA_Modifier_Item_UltimateScepter_Consumed::DeclareFunctions  (line 292, @0x0000000002dff8d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierBonusStats_All(CModifierParams const&), CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierHealthBonus(CModifierParams const&), CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierManaBonus(CModifierParams const&), CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierScepter(CModifierParams const&), CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierTranslateActivityModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_UltimateScepter_Consumed::DeclareFunctions(
        CDOTA_Modifier_Item_UltimateScepter_Consumed *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierBonusStats_All;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierBonusStats_All;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierBonusStats_All;
  this->m_Functions[58].__pfn = CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierHealthBonus;
  this->m_Functions[59].__pfn = CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierManaBonus;
  this->m_Functions[154].__pfn = CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierScepter;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[58].__delta = 0;
  this->m_Functions[59].__delta = 0;
  this->m_Functions[154].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierTranslateActivityModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Item_UltimateScepter_Consumed::OnCreated  (line 305, @0x0000000002dfffa0, libserver.so)
// calls: KeyValues::GetInt
// strings: "bonus_all_stats", "bonus_health", "bonus_mana"
void __fastcall CDOTA_Modifier_Item_UltimateScepter_Consumed::OnCreated(
        CDOTA_Modifier_Item_UltimateScepter_Consumed *const this,
        KeyValues *pKV)
{
  this->bonus_all_stats = KeyValues::GetInt(pKV, "bonus_all_stats", 0);
  this->bonus_health = KeyValues::GetInt(pKV, "bonus_health", 0);
  this->bonus_mana = KeyValues::GetInt(pKV, "bonus_mana", 0);
}


// CDOTA_Modifier_Item_UltimateScepter_Consumed::OnDestroy  (line 341, @0x0000000002dff980, libserver.so)
void __fastcall CDOTA_Modifier_Item_UltimateScepter_Consumed::OnDestroy(
        CDOTA_Modifier_Item_UltimateScepter_Consumed *const this)
{
  ;
}


// CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierBonusStats_All  (line 364, @0x0000000002dff990, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierBonusStats_All(
        CDOTA_Modifier_Item_UltimateScepter_Consumed *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierHealthBonus  (line 369, @0x0000000002dff9b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierHealthBonus(
        CDOTA_Modifier_Item_UltimateScepter_Consumed *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierManaBonus  (line 374, @0x0000000002dff9d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierManaBonus(
        CDOTA_Modifier_Item_UltimateScepter_Consumed *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierScepter  (line 379, @0x0000000002dff9f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierScepter(
        CDOTA_Modifier_Item_UltimateScepter_Consumed *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierTranslateActivityModifiers  (line 384, @0x0000000002dffa10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_UltimateScepter_Consumed::GetModifierTranslateActivityModifiers(
        CDOTA_Modifier_Item_UltimateScepter_Consumed *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "ultimate_scepter";
  *&result.m_eType = 2;
  return result;
}


