// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_manta_style.cpp:31
class CDOTA_Item_Recipe_MantaStyle : public CDOTA_Item {
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
	CDOTA_Item_Recipe_MantaStyle(CDOTA_Item_Recipe_MantaStyle &);
	CDOTA_Item_Recipe_MantaStyle(CDOTA_Item_Recipe_MantaStyle &);
	CDOTA_Item_Recipe_MantaStyle();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_MantaStyle();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_manta_style.cpp:44
class CDOTA_Item_MantaStyle : public CDOTA_Item {
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
	CDOTA_Item_MantaStyle(CDOTA_Item_MantaStyle &);
	CDOTA_Item_MantaStyle(CDOTA_Item_MantaStyle &);
	CDOTA_Item_MantaStyle();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual float GetCooldown(int);
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_MantaStyle();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[242] GetCooldown
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_manta_style.cpp:57
class C_CDOTA_Item_MantaStyle_MapInstall {
	C_CDOTA_Item_MantaStyle_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_manta_style.cpp:103
class CDOTA_Modifier_Item_MantaStyle : public CDOTA_Buff_Item {
public:

private:

	int bonus_attack_speed;  // +0xba8
	int bonus_strength;  // +0xbac
	int bonus_agility;  // +0xbb0
	int bonus_intellect;  // +0xbb4
	int bonus_movement_speed;  // +0xbb8
	CDOTA_Modifier_Item_MantaStyle();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage_Unique(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_MantaStyle();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3008
};

// src/game/shared/dota/items/dota_item_manta_style.cpp:200
class CDOTA_Modifier_Manta_Phase : public CDOTA_Buff {
public:

	CDOTA_Modifier_Manta_Phase();
	virtual bool IsHidden();
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Manta_Phase();

	// vtable[11] IsHidden
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[67] GetEffectName
	// sizeof = 2984
};

// src/game/shared/dota/items/dota_item_manta_style.cpp:300
class CDOTA_Modifier_Manta : public CDOTA_Buff {
public:

	CDOTA_Modifier_Manta(CDOTA_Modifier_Manta &);
	CDOTA_Modifier_Manta(const CDOTA_Modifier_Manta &);
	CDOTA_Modifier_Manta();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Manta();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_MantaStyle::~CDOTA_Item_Recipe_MantaStyle  (line 31, @0x0000000002dbcb80, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_MantaStyle::~CDOTA_Item_Recipe_MantaStyle(CDOTA_Item_Recipe_MantaStyle *const this)
{
  this->_vptr_IHandleEntity = &off_470E810;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_MantaStyle::~CDOTA_Item_Recipe_MantaStyle  (line 31, @0x0000000002dbcba0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_MantaStyle
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_MantaStyle::~CDOTA_Item_Recipe_MantaStyle(CDOTA_Item_Recipe_MantaStyle *const this)
{
  this->_vptr_IHandleEntity = &off_470E810;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_MantaStyle::Schema_DynamicBinding  (line 33, @0x0000000002db91f0, libserver.so)
// globals: CDOTA_Item_Recipe_MantaStyle::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_MantaStyle::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_MantaStyle *const this)
{
  return CDOTA_Item_Recipe_MantaStyle::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 33, @0x0000000002db9200, libserver.so)
// globals: CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::DestructInstance  (line 33, @0x0000000002db9210, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_MantaStyle>
void __fastcall CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::FreeInstance  (line 33, @0x0000000002db9230, libserver.so)
void __fastcall CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::CanAllocate  (line 33, @0x0000000002db9250, libserver.so)
bool __fastcall CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 33, @0x0000000002db9260, libserver.so)
// globals: CDOTA_Item_Recipe_MantaStyle::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_MantaStyle::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::AllocateInstance  (line 33, @0x0000000002dba880, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::ConstructInstance  (line 33, @0x0000000002dbbaf0, libserver.so)  // inlines: CDOTA_Item_Recipe_MantaStyle, Construct<CDOTA_Item_Recipe_MantaStyle>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_470E810;
  }
  return p;
}


// CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000002dbed80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000002dbeda0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_MantaStyle::GetEntityClassInternal  (line 33, @0x0000000002dc5280, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_recipe_manta", "CDOTA_Item_Recipe_MantaStyle"
// globals: `guard variable for'CDOTA_Item_Recipe_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClass, CDOTA_Item_Recipe_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClass, __dso_handle, CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_MantaStyle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClassInfo, CDOTA_Item_Recipe_MantaStyle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_MantaStyle::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClass);
    CDOTA_Item_Recipe_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClass._vptr_CEntityClass = off_470E790;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_MantaStyleClass != 0 )
    return &CDOTA_Item_Recipe_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClass;
  if ( `guard variable for'CDOTA_Item_Recipe_MantaStyle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_MantaStyle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_MantaStyle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClassInfo,
      "CDOTA_Item_Recipe_MantaStyle",
      "item_recipe_manta",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_MantaStyle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClassInfo);
  }
  CDOTA_Item_Recipe_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClass.m_pClassInfo = &CDOTA_Item_Recipe_MantaStyle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClassInfo;
  CDOTA_Item_Recipe_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClass.m_pBaseClassInfo = CDOTA_Item_Recipe_MantaStyle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_MantaStyleClass = &CDOTA_Item_Recipe_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClass;
  CDOTA_Item_Recipe_MantaStyle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClassInfo.m_pClass = &CDOTA_Item_Recipe_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClass;
  CDOTA_Item_Recipe_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_MantaStyleClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MantaStyleClass;
}


// CDOTA_Item_MantaStyle::~CDOTA_Item_MantaStyle  (line 44, @0x0000000002dbcbd0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_MantaStyle::~CDOTA_Item_MantaStyle(CDOTA_Item_MantaStyle *const this)
{
  this->_vptr_IHandleEntity = &off_470F410;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_MantaStyle::~CDOTA_Item_MantaStyle  (line 44, @0x0000000002dbcbf0, libserver.so)  // inlines: ~CDOTA_Item_MantaStyle
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_MantaStyle::~CDOTA_Item_MantaStyle(CDOTA_Item_MantaStyle *const this)
{
  this->_vptr_IHandleEntity = &off_470F410;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_MantaStyle::Schema_DynamicBinding  (line 46, @0x0000000002db9270, libserver.so)
// globals: CDOTA_Item_MantaStyle::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_MantaStyle::Schema_DynamicBinding(
        const CDOTA_Item_MantaStyle *const this)
{
  return CDOTA_Item_MantaStyle::s_pSchemaBinding;
}


// CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 46, @0x0000000002db9280, libserver.so)
// globals: CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_MantaStyle::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::DestructInstance  (line 46, @0x0000000002db9290, libserver.so)  // inlines: Destruct<CDOTA_Item_MantaStyle>
void __fastcall CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_MantaStyle::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::FreeInstance  (line 46, @0x0000000002db92b0, libserver.so)
void __fastcall CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_MantaStyle::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::CanAllocate  (line 46, @0x0000000002db92d0, libserver.so)
bool __fastcall CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_MantaStyle::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 46, @0x0000000002db92e0, libserver.so)
// globals: CDOTA_Item_MantaStyle::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_MantaStyle::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_MantaStyle::s_pSchemaBinding;
}


// CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::AllocateInstance  (line 46, @0x0000000002dba8c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_MantaStyle::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::ConstructInstance  (line 46, @0x0000000002dbbb20, libserver.so)  // inlines: CDOTA_Item_MantaStyle, Construct<CDOTA_Item_MantaStyle>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_MantaStyle::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_470F410;
  }
  return p;
}


// CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 46, @0x0000000002dbedd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_MantaStyle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 46, @0x0000000002dbedf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_MantaStyle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_MantaStyle::GetEntityClassInternal  (line 46, @0x0000000002dc53d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_manta", "CDOTA_Item_MantaStyle"
// globals: `guard variable for'CDOTA_Item_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantaStyleClass, CDOTA_Item_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantaStyleClass, __dso_handle, CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_MantaStyle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MantaStyleClassInfo, CDOTA_Item_MantaStyle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MantaStyleClassInfo
CEntityClass *__cdecl CDOTA_Item_MantaStyle::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantaStyleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantaStyleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantaStyleClass);
    CDOTA_Item_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantaStyleClass._vptr_CEntityClass = off_470F390;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantaStyleClass);
    __cxa_atexit(
      CDOTA_Item_MantaStyle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantaStyleClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_MantaStyleClass != 0 )
    return &CDOTA_Item_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantaStyleClass;
  if ( `guard variable for'CDOTA_Item_MantaStyle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MantaStyleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_MantaStyle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MantaStyleClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_MantaStyle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MantaStyleClassInfo,
      "CDOTA_Item_MantaStyle",
      "item_manta",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_MantaStyle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MantaStyleClassInfo);
  }
  CDOTA_Item_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantaStyleClass.m_pClassInfo = &CDOTA_Item_MantaStyle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MantaStyleClassInfo;
  CDOTA_Item_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantaStyleClass.m_pBaseClassInfo = CDOTA_Item_MantaStyle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MantaStyleClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_MantaStyleClass = &CDOTA_Item_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantaStyleClass;
  CDOTA_Item_MantaStyle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MantaStyleClassInfo.m_pClass = &CDOTA_Item_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantaStyleClass;
  CDOTA_Item_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantaStyleClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_MantaStyleClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_MantaStyle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantaStyleClass;
}


// CDOTA_Item_MantaStyle::GetIntrinsicModifierName  (line 50, @0x0000000002db92f0, libserver.so)
// strings: "modifier_item_manta_style"
const char *__fastcall CDOTA_Item_MantaStyle::GetIntrinsicModifierName(CDOTA_Item_MantaStyle *const this)
{
  return "modifier_item_manta_style";
}


// CDOTA_Item_MantaStyle::YouForgotToImplementOrDeclareServerClass  (line 57, @0x0000000002dab470, libserver.so)
int __fastcall CDOTA_Item_MantaStyle::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_MantaStyle *const this)
{
  return 0;
}


// CDOTA_Item_MantaStyle::GetServerClass  (line 57, @0x0000000002daecf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_MantaStyle::GetServerClass(CDOTA_Item_MantaStyle *const this)
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


// CDOTA_Item_MantaStyle::GetCooldown  (line 66, @0x0000000002db6200, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "cooldown_melee"
float __fastcall CDOTA_Item_MantaStyle::GetCooldown(CDOTA_Item_MantaStyle *const this, int iLevel)
{
  if ( CDOTABaseAbility::GetCaster(this) != 0
    && (CDOTABaseAbility::GetCaster(this)->m_iAttackCapabilities.m_Value & 2) != 0 )
  {
    return CDOTABaseAbility::GetCooldown(this, iLevel);
  }
  else
  {
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_melee", -1, 0);
  }
}


// CDOTA_Item_MantaStyle::OnSpellStart  (line 80, @0x0000000002db5dd0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, Set
// calls: CDOTABaseAbility::GetCaster, CDOTA_ProjectileManager::ProjectileDodge, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::AddTempViewer, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// strings: "invuln_duration", "modifier_manta_phase", "DOTA_Item.Manta.Activate"
void __fastcall CDOTA_Item_MantaStyle::OnSpellStart(CDOTA_Item_MantaStyle *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  __m128i v5; // xmm0
  float v6; // r14d
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v10; // rax
  float v11; // xmm1_4
  CDOTA_BaseNPC *v12; // r13
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  EHANDLE hTarget; // [rsp+0h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-28h]

  v17 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  hTarget.m_Index = -1;
  if ( Caster != 0 )
  {
    m_pEntity = Caster->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
  *v5.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "invuln_duration", -1, 0);
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "vision_radius", -1, 0);
  v8 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  v10 = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_MANTASTYLE,
    v10->m_iTeamNum.m_Value,
    AbsOrigin,
    LevelSpecialValue,
    v6,
    1);
  KeyValues::KeyValues(&kv, "modifier_manta_phase");
  KeyValues::SetFloat(&kv, "duration", v11);
  v12 = CDOTABaseAbility::GetCaster(this);
  v13 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v13, v12, this, "modifier_manta_phase", &kv, 0);
  v14 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "DOTA_Item.Manta.Activate", v14);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Item_MantaStyle::~CDOTA_Modifier_Item_MantaStyle  (line 103, @0x0000000002dbad30, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_MantaStyle::~CDOTA_Modifier_Item_MantaStyle(
        CDOTA_Modifier_Item_MantaStyle *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_MantaStyle::~CDOTA_Modifier_Item_MantaStyle  (line 103, @0x0000000002dbad50, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_MantaStyle
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_MantaStyle::~CDOTA_Modifier_Item_MantaStyle(
        CDOTA_Modifier_Item_MantaStyle *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_MantaStyle::DeclareFunctions  (line 128, @0x0000000002dab480, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_MantaStyle::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_MantaStyle::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_MantaStyle::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_MantaStyle::GetModifierMoveSpeedBonus_Percentage_Unique(CModifierParams const&), CDOTA_Modifier_Item_MantaStyle::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_MantaStyle::DeclareFunctions(CDOTA_Modifier_Item_MantaStyle *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_MantaStyle::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_MantaStyle::GetModifierBonusStats_Agility;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_MantaStyle::GetModifierBonusStats_Intellect;
  this->m_Functions[14].__pfn = CDOTA_Modifier_Item_MantaStyle::GetModifierMoveSpeedBonus_Percentage_Unique;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[14].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_MantaStyle::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Item_MantaStyle::GetModifierAttackSpeedBonus_Constant  (line 137, @0x0000000002dab510, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_MantaStyle::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_MantaStyle *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_MantaStyle::GetModifierMoveSpeedBonus_Percentage_Unique  (line 142, @0x0000000002dab530, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_MantaStyle::GetModifierMoveSpeedBonus_Percentage_Unique(
        CDOTA_Modifier_Item_MantaStyle *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_MantaStyle::GetModifierBonusStats_Strength  (line 147, @0x0000000002dab550, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_MantaStyle::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_MantaStyle *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_MantaStyle::GetModifierBonusStats_Agility  (line 152, @0x0000000002dab570, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_MantaStyle::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_MantaStyle *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agility;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_MantaStyle::GetModifierBonusStats_Intellect  (line 157, @0x0000000002dab590, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_MantaStyle::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_MantaStyle *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_MantaStyle::OnCreated  (line 162, @0x0000000002db54e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_agility", "bonus_intellect"
void __fastcall CDOTA_Modifier_Item_MantaStyle::OnCreated(CDOTA_Modifier_Item_MantaStyle *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_attack_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_strength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_strength", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  this->bonus_strength = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_agility = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_agility", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_10:
    this->bonus_intellect = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_11;
  }
LABEL_9:
  this->bonus_agility = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->bonus_intellect = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_intellect", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "bonus_movement_speed", -1, 0);
    return;
  }
LABEL_11:
  this->bonus_movement_speed = 0;
}


// CDOTA_Modifier_Manta_Phase::~CDOTA_Modifier_Manta_Phase  (line 200, @0x0000000002dbb280, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Manta_Phase::~CDOTA_Modifier_Manta_Phase(CDOTA_Modifier_Manta_Phase *const this)
{
  this->_vptr_CDOTA_Buff = &off_47102F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Manta_Phase::~CDOTA_Modifier_Manta_Phase  (line 200, @0x0000000002dbb2a0, libserver.so)  // inlines: ~CDOTA_Modifier_Manta_Phase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Manta_Phase::~CDOTA_Modifier_Manta_Phase(CDOTA_Modifier_Manta_Phase *const this)
{
  this->_vptr_CDOTA_Buff = &off_47102F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Manta_Phase::IsHidden  (line 205, @0x0000000002db9300, libserver.so)
bool __fastcall CDOTA_Modifier_Manta_Phase::IsHidden(CDOTA_Modifier_Manta_Phase *const this)
{
  return 1;
}


// CDOTA_Modifier_Manta_Phase::GetEffectName  (line 211, @0x0000000002db9310, libserver.so)
// strings: "particles/items2_fx/manta_phase.vpcf"
const char *__fastcall CDOTA_Modifier_Manta_Phase::GetEffectName(CDOTA_Modifier_Manta_Phase *const this)
{
  return "particles/items2_fx/manta_phase.vpcf";
}


// CDOTA_Modifier_Manta_Phase::OnDestroy  (line 219, @0x0000000002db3de0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPaddedCollisionRadius, GetSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, FindUnitsInRadius, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::ForceKill, CDOTA_BaseNPC::Interrupt, CDOTA_Buff::GetAbility, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::SetInt, DOTA_CreateIllusions, CDOTA_BaseNPC::AddNewModifier (17 total)
// strings: "modifier_manta", "modifier_illusion", "images_do_damage_percent_melee", "images_take_damage_percent_melee", "images_count", "manta_" (8 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Manta_Phase::OnDestroy(CDOTA_Modifier_Manta_Phase *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  __int64 v3; // r12
  int v4; // ebx
  CHandle<CBaseEntity> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_BaseNPC *v12; // r15
  CDOTA_BaseNPC *v13; // rax
  float v14; // xmm1_4
  CDOTABaseAbility *v15; // rax
  int v16; // eax
  CDOTABaseAbility *v17; // rax
  int v18; // eax
  CDOTA_BaseNPC *v19; // rax
  float v20; // xmm0_4
  int v21; // ebx
  CDOTABaseAbility *v22; // rax
  int v23; // r12d
  CDOTA_BaseNPC *v24; // rax
  __int64 v25; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v27; // rdx
  uint32 v28; // eax
  __int16 v29; // cx
  CEntityIdentity *v30; // rdx
  CEntityIdentity *v31; // rdx
  CDOTA_BaseNPC *v32; // r13
  CDOTABaseAbility *v33; // r15
  CDOTA_BaseNPC *v34; // rax
  CDOTABaseAbility *v35; // rbx
  CDOTA_BaseNPC *v36; // rax
  CDOTABaseAbility *Ability; // rax
  int LevelSpecialValue; // eax
  CDOTABaseAbility *v39; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hExistingIllusions; // [rsp+40h] [rbp-B0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hIllusions; // [rsp+60h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-70h] BYREF
  KeyValues kv_manta; // [rsp+A0h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+B8h] [rbp-38h]

  hExistingIllusions.m_Size = 0;
  v44 = __readfsqword(0x28u);
  hExistingIllusions.m_Memory.m_pMemory = 0;
  hExistingIllusions.m_Memory.m_nAllocationCount = 0;
  hExistingIllusions.m_Memory.m_nGrowSize = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, &vec3_origin, 0, -1.0, &hExistingIllusions, 1, 1, 0, 0, 0);
  if ( hExistingIllusions.m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = &hExistingIllusions.m_Memory.m_pMemory[v3];
        m_Index = hExistingIllusions.m_Memory.m_pMemory[v3].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v7 = v5->m_Index;
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
          if ( v8 != 0 )
          {
            v9 = &v8[v7 & 0x1FF];
            if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
            {
              m_pInstance = v9->m_pInstance;
              if ( v9->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && m_pInstance->m_bIsIllusion.m_Value )
              {
                ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_manta", 0);
                if ( ModifierByName != 0 )
                {
                  v12 = CDOTA_Buff::GetCaster(ModifierByName);
                  if ( v12 != 0 && v12 == CDOTA_Buff::GetCaster(this) )
                    break;
                }
              }
            }
          }
        }
        ++v4;
        ++v3;
        if ( hExistingIllusions.m_Size <= v4 )
          goto LABEL_15;
      }
      CDOTA_BaseNPC::ForceKill(m_pInstance, 0);
      ++v4;
      ++v3;
    }
    while ( hExistingIllusions.m_Size > v4 );
  }
LABEL_15:
  v13 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::Interrupt(v13);
  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_illusion");
    KeyValues::SetFloat(&kv, "duration", v14);
    if ( (CDOTA_Buff::GetCaster(this)->m_iAttackCapabilities.m_Value & 2) != 0 )
    {
      Ability = CDOTA_Buff::GetAbility(this);
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                            Ability,
                            "images_do_damage_percent_ranged",
                            0,
                            0);
      KeyValues::SetInt(&kv, "outgoing_damage", LevelSpecialValue);
      v39 = CDOTA_Buff::GetAbility(this);
      v18 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v39, "images_take_damage_percent_ranged", 0, 0);
    }
    else
    {
      v15 = CDOTA_Buff::GetAbility(this);
      v16 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v15, "images_do_damage_percent_melee", 0, 0);
      KeyValues::SetInt(&kv, "outgoing_damage", v16);
      v17 = CDOTA_Buff::GetAbility(this);
      v18 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v17, "images_take_damage_percent_melee", 0, 0);
    }
    KeyValues::SetInt(&kv, "incoming_damage", v18);
    hIllusions.m_Size = 0;
    hIllusions.m_Memory.m_pMemory = 0;
    hIllusions.m_Memory.m_nAllocationCount = 0;
    hIllusions.m_Memory.m_nGrowSize = 0;
    v19 = CDOTA_Buff::GetCaster(this);
    v20 = v19->m_flHullRadius + v19->m_flCollisionPadding;
    v21 = (v20 + v20);
    v22 = CDOTA_Buff::GetAbility(this);
    v23 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v22, "images_count", 0, 0);
    v24 = CDOTA_Buff::GetCaster(this);
    DOTA_CreateIllusions(v24, v23, v21, 1, &kv, &hIllusions, 0, "manta_", 1);
    KeyValues::KeyValues(&kv_manta, "modifier_manta");
    v25 = 0;
    for ( i = 0; hIllusions.m_Size > i; ++v25 )
    {
      while ( 1 )
      {
        v27 = &hIllusions.m_Memory.m_pMemory[v25];
        v28 = hIllusions.m_Memory.m_pMemory[v25].m_Index;
        if ( v28 + 2 > 1 )
        {
          v29 = v27->m_Index;
          v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v27->m_Index) >> 9) & 0x3F];
          if ( v30 != 0 )
          {
            v31 = &v30[v29 & 0x1FF];
            if ( v31 != 0 && v28 == v31->m_EHandle.m_Index )
            {
              v32 = v31->m_pInstance;
              if ( v31->m_pInstance != 0 && v32->m_bIsDOTANPC )
                break;
            }
          }
        }
        ++i;
        ++v25;
        if ( hIllusions.m_Size <= i )
          goto LABEL_28;
      }
      v33 = CDOTA_Buff::GetAbility(this);
      v34 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v32, v34, v33, "modifier_manta", &kv, 0);
      ++i;
    }
LABEL_28:
    KeyValues::~KeyValues(&kv_manta);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hIllusions);
    KeyValues::~KeyValues(&kv);
  }
  v35 = CDOTA_Buff::GetAbility(this);
  v36 = CDOTA_Buff::GetCaster(this);
  Purge(v36, v35, 4);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hExistingIllusions);
}


// CDOTA_Modifier_Manta_Phase::CheckState  (line 283, @0x0000000002dab5b0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Manta_Phase::CheckState(
        CDOTA_Modifier_Manta_Phase *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x80804320uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7F7FBCDFLL;
}


// CDOTA_Modifier_Manta::~CDOTA_Modifier_Manta  (line 300, @0x0000000002dbb680, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Manta::~CDOTA_Modifier_Manta(CDOTA_Modifier_Manta *const this)
{
  this->_vptr_CDOTA_Buff = &off_47105D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Manta::~CDOTA_Modifier_Manta  (line 300, @0x0000000002dbb6a0, libserver.so)  // inlines: ~CDOTA_Modifier_Manta
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Manta::~CDOTA_Modifier_Manta(CDOTA_Modifier_Manta *const this)
{
  this->_vptr_CDOTA_Buff = &off_47105D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Manta::IsHidden  (line 305, @0x0000000002db9320, libserver.so)
bool __fastcall CDOTA_Modifier_Manta::IsHidden(CDOTA_Modifier_Manta *const this)
{
  return 1;
}


// CDOTA_Modifier_Manta::IsPurgable  (line 306, @0x0000000002db9330, libserver.so)
bool __fastcall CDOTA_Modifier_Manta::IsPurgable(CDOTA_Modifier_Manta *const this)
{
  return 0;
}


