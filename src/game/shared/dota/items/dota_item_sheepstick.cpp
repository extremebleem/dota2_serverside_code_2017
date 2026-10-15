// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_sheepstick.cpp:29
class CDOTA_Item_Recipe_SheepStick : public CDOTA_Item {
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
	CDOTA_Item_Recipe_SheepStick(CDOTA_Item_Recipe_SheepStick &);
	CDOTA_Item_Recipe_SheepStick(CDOTA_Item_Recipe_SheepStick &);
	CDOTA_Item_Recipe_SheepStick();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_SheepStick();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_sheepstick.cpp:41
class CDOTA_Item_SheepStick : public CDOTA_Item {
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
	CDOTA_Item_SheepStick(CDOTA_Item_SheepStick &);
	CDOTA_Item_SheepStick(CDOTA_Item_SheepStick &);
	CDOTA_Item_SheepStick();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_SheepStick();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_sheepstick.cpp:81
class CDOTA_Modifier_Item_SheepStick : public CDOTA_Buff_Item {
public:

private:

	int bonus_strength;  // +0xba8
	int bonus_agility;  // +0xbac
	int bonus_intellect;  // +0xbb0
	int bonus_mana_regen;  // +0xbb4
	CDOTA_Modifier_Item_SheepStick();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_SheepStick();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_sheepstick.cpp:158
class CDOTA_Modifier_SheepStick_Debuff : public CDOTA_Modifier_Hexed {
public:

private:

	float sheep_movement_speed;  // +0xba8
	CDOTA_Modifier_SheepStick_Debuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual const char * GetEffectName();
	virtual const char * GetHexType();
	virtual float GetMoveSpeedModifier();
	virtual ~CDOTA_Modifier_SheepStick_Debuff();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[67] GetEffectName
	// vtable[89] GetHexType
	// vtable[92] GetMoveSpeedModifier
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_SheepStick::~CDOTA_Item_Recipe_SheepStick  (line 29, @0x0000000002df3960, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_SheepStick::~CDOTA_Item_Recipe_SheepStick(CDOTA_Item_Recipe_SheepStick *const this)
{
  this->_vptr_IHandleEntity = &off_47631F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_SheepStick::~CDOTA_Item_Recipe_SheepStick  (line 29, @0x0000000002df3980, libserver.so)  // inlines: ~CDOTA_Item_Recipe_SheepStick
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_SheepStick::~CDOTA_Item_Recipe_SheepStick(CDOTA_Item_Recipe_SheepStick *const this)
{
  this->_vptr_IHandleEntity = &off_47631F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_SheepStick::Schema_DynamicBinding  (line 31, @0x0000000002defac0, libserver.so)
// globals: CDOTA_Item_Recipe_SheepStick::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_SheepStick::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_SheepStick *const this)
{
  return CDOTA_Item_Recipe_SheepStick::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 31, @0x0000000002defad0, libserver.so)
// globals: CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::DestructInstance  (line 31, @0x0000000002defae0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_SheepStick>
void __fastcall CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::FreeInstance  (line 31, @0x0000000002defb00, libserver.so)
void __fastcall CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::CanAllocate  (line 31, @0x0000000002defb20, libserver.so)
bool __fastcall CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 31, @0x0000000002defb30, libserver.so)
// globals: CDOTA_Item_Recipe_SheepStick::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_SheepStick::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::AllocateInstance  (line 31, @0x0000000002df1340, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::ConstructInstance  (line 31, @0x0000000002df2450, libserver.so)  // inlines: CDOTA_Item_Recipe_SheepStick, Construct<CDOTA_Item_Recipe_SheepStick>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47631F0;
  }
  return p;
}


// CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002df5b70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002df5b90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_SheepStick::GetEntityClassInternal  (line 31, @0x0000000002dfde90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "item_recipe_sheepstick", "CDOTA_Item_Recipe_SheepStick"
// globals: `guard variable for'CDOTA_Item_Recipe_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SheepStickClass, CDOTA_Item_Recipe_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SheepStickClass, __dso_handle, CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_SheepStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SheepStickClassInfo, CDOTA_Item_Recipe_SheepStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SheepStickClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_SheepStick::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SheepStickClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SheepStickClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SheepStickClass);
    CDOTA_Item_Recipe_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SheepStickClass._vptr_CEntityClass = off_4763170;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SheepStickClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SheepStickClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_SheepStickClass != 0 )
    return &CDOTA_Item_Recipe_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SheepStickClass;
  if ( `guard variable for'CDOTA_Item_Recipe_SheepStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SheepStickClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_SheepStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SheepStickClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_SheepStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SheepStickClassInfo,
      "CDOTA_Item_Recipe_SheepStick",
      "item_recipe_sheepstick",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_SheepStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SheepStickClassInfo);
  }
  CDOTA_Item_Recipe_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SheepStickClass.m_pClassInfo = &CDOTA_Item_Recipe_SheepStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SheepStickClassInfo;
  CDOTA_Item_Recipe_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SheepStickClass.m_pBaseClassInfo = CDOTA_Item_Recipe_SheepStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SheepStickClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_SheepStickClass = &CDOTA_Item_Recipe_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SheepStickClass;
  CDOTA_Item_Recipe_SheepStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SheepStickClassInfo.m_pClass = &CDOTA_Item_Recipe_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SheepStickClass;
  CDOTA_Item_Recipe_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SheepStickClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_SheepStickClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SheepStickClass;
}


// CDOTA_Item_SheepStick::~CDOTA_Item_SheepStick  (line 41, @0x0000000002df39b0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_SheepStick::~CDOTA_Item_SheepStick(CDOTA_Item_SheepStick *const this)
{
  this->_vptr_IHandleEntity = &off_4763DF0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_SheepStick::~CDOTA_Item_SheepStick  (line 41, @0x0000000002df39d0, libserver.so)  // inlines: ~CDOTA_Item_SheepStick
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_SheepStick::~CDOTA_Item_SheepStick(CDOTA_Item_SheepStick *const this)
{
  this->_vptr_IHandleEntity = &off_4763DF0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_SheepStick::Schema_DynamicBinding  (line 43, @0x0000000002defb40, libserver.so)
// globals: CDOTA_Item_SheepStick::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_SheepStick::Schema_DynamicBinding(
        const CDOTA_Item_SheepStick *const this)
{
  return CDOTA_Item_SheepStick::s_pSchemaBinding;
}


// CDOTA_Item_SheepStick::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 43, @0x0000000002defb50, libserver.so)
// globals: CDOTA_Item_SheepStick::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_SheepStick::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_SheepStick::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_SheepStick::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_SheepStick::CEntityInstanceEntityClass::DestructInstance  (line 43, @0x0000000002defb60, libserver.so)  // inlines: Destruct<CDOTA_Item_SheepStick>
void __fastcall CDOTA_Item_SheepStick::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_SheepStick::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_SheepStick::CEntityInstanceEntityClass::FreeInstance  (line 43, @0x0000000002defb80, libserver.so)
void __fastcall CDOTA_Item_SheepStick::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_SheepStick::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_SheepStick::CEntityInstanceEntityClass::CanAllocate  (line 43, @0x0000000002defba0, libserver.so)
bool __fastcall CDOTA_Item_SheepStick::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_SheepStick::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_SheepStick::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 43, @0x0000000002defbb0, libserver.so)
// globals: CDOTA_Item_SheepStick::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_SheepStick::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_SheepStick::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_SheepStick::s_pSchemaBinding;
}


// CDOTA_Item_SheepStick::CEntityInstanceEntityClass::AllocateInstance  (line 43, @0x0000000002df1380, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_SheepStick::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_SheepStick::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_SheepStick::CEntityInstanceEntityClass::ConstructInstance  (line 43, @0x0000000002df2480, libserver.so)  // inlines: CDOTA_Item_SheepStick, Construct<CDOTA_Item_SheepStick>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_SheepStick::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_SheepStick::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4763DF0;
  }
  return p;
}


// CDOTA_Item_SheepStick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002df5bc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_SheepStick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_SheepStick::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_SheepStick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002df5be0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_SheepStick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_SheepStick::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_SheepStick::GetEntityClassInternal  (line 43, @0x0000000002dfdfe0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "CDOTA_Item_SheepStick"
// globals: `guard variable for'CDOTA_Item_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SheepStickClass, CDOTA_Item_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SheepStickClass, __dso_handle, CDOTA_Item_SheepStick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_SheepStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SheepStickClassInfo, CDOTA_Item_SheepStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SheepStickClassInfo
CEntityClass *__cdecl CDOTA_Item_SheepStick::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SheepStickClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SheepStickClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SheepStickClass);
    CDOTA_Item_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SheepStickClass._vptr_CEntityClass = off_4763D70;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SheepStickClass);
    __cxa_atexit(
      CDOTA_Item_SheepStick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SheepStickClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_SheepStickClass != 0 )
    return &CDOTA_Item_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SheepStickClass;
  if ( `guard variable for'CDOTA_Item_SheepStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SheepStickClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_SheepStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SheepStickClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_SheepStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SheepStickClassInfo,
      "CDOTA_Item_SheepStick",
      "item_sheepstick",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_SheepStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SheepStickClassInfo);
  }
  CDOTA_Item_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SheepStickClass.m_pClassInfo = &CDOTA_Item_SheepStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SheepStickClassInfo;
  CDOTA_Item_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SheepStickClass.m_pBaseClassInfo = CDOTA_Item_SheepStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SheepStickClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_SheepStickClass = &CDOTA_Item_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SheepStickClass;
  CDOTA_Item_SheepStick::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SheepStickClassInfo.m_pClass = &CDOTA_Item_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SheepStickClass;
  CDOTA_Item_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SheepStickClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_SheepStickClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_SheepStick::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SheepStickClass;
}


// CDOTA_Item_SheepStick::GetIntrinsicModifierName  (line 45, @0x0000000002defbc0, libserver.so)
// strings: "modifier_item_sheepstick"
const char *__fastcall CDOTA_Item_SheepStick::GetIntrinsicModifierName(CDOTA_Item_SheepStick *const this)
{
  return "modifier_item_sheepstick";
}


// CDOTA_Item_SheepStick::OnSpellStart  (line 55, @0x0000000002ded7d0, libserver.so)  // inlines: InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, CDOTA_BaseNPC::Kill, __stack_chk_fail, _Unwind_Resume
// strings: "CDOTA_Item_SheepStick::OnSpellStart", "sheep_duration", "modifier_sheepstick_debuff", "DOTA_Item.Sheepstick.Activate"
void __fastcall CDOTA_Item_SheepStick::OnSpellStart(CDOTA_Item_SheepStick *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  __int64 v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      if ( v3->m_bIsIllusion.m_Value )
      {
        Caster = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::Kill(v3, this, Caster, 0.0, 0);
      }
      else
      {
        KeyValues::KeyValues(&kv, "CDOTA_Item_SheepStick::OnSpellStart");
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "sheep_duration", -1, 0);
        KeyValues::SetFloat(&kv, "duration", v5);
        v6 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, v6, this, "modifier_sheepstick_debuff", &kv, 0);
        DOTA_EmitSound(10, "DOTA_Item.Sheepstick.Activate", v3);
        KeyValues::~KeyValues(&kv);
      }
    }
  }
}


// CDOTA_Modifier_Item_SheepStick::~CDOTA_Modifier_Item_SheepStick  (line 81, @0x0000000002df15b0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_SheepStick::~CDOTA_Modifier_Item_SheepStick(
        CDOTA_Modifier_Item_SheepStick *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_SheepStick::~CDOTA_Modifier_Item_SheepStick  (line 81, @0x0000000002df15d0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_SheepStick
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_SheepStick::~CDOTA_Modifier_Item_SheepStick(
        CDOTA_Modifier_Item_SheepStick *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_SheepStick::OnCreated  (line 106, @0x0000000002decda0, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
// strings: "bonus_agility", "bonus_intellect", "bonus_mana_regen"
void __fastcall CDOTA_Modifier_Item_SheepStick::OnCreated(CDOTA_Modifier_Item_SheepStick *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_strength, "bonus_strength");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_agility, "bonus_agility");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->bonus_intellect, "bonus_intellect");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->bonus_mana_regen, "bonus_mana_regen");
}


// CDOTA_Modifier_Item_SheepStick::DeclareFunctions  (line 118, @0x0000000002de4570, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_SheepStick::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_SheepStick::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_SheepStick::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_SheepStick::GetModifierPercentageManaRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_SheepStick::DeclareFunctions(CDOTA_Modifier_Item_SheepStick *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_SheepStick::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_SheepStick::GetModifierBonusStats_Agility;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_SheepStick::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[54].__pfn = CDOTA_Modifier_Item_SheepStick::GetModifierPercentageManaRegen;
  this->m_Functions[54].__delta = 0;
}


// CDOTA_Modifier_Item_SheepStick::GetModifierBonusStats_Strength  (line 128, @0x0000000002de45e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_SheepStick::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_SheepStick *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_SheepStick::GetModifierBonusStats_Agility  (line 135, @0x0000000002de4600, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_SheepStick::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_SheepStick *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agility;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_SheepStick::GetModifierBonusStats_Intellect  (line 142, @0x0000000002de4620, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_SheepStick::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_SheepStick *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_SheepStick::GetModifierPercentageManaRegen  (line 149, @0x0000000002de4640, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_SheepStick::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_SheepStick *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_SheepStick_Debuff::~CDOTA_Modifier_SheepStick_Debuff  (line 158, @0x0000000002df1c40, libserver.so)  // inlines: ~CDOTA_Modifier_Hexed
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SheepStick_Debuff::~CDOTA_Modifier_SheepStick_Debuff(
        CDOTA_Modifier_SheepStick_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_41228D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SheepStick_Debuff::~CDOTA_Modifier_SheepStick_Debuff  (line 158, @0x0000000002df1c60, libserver.so)  // inlines: ~CDOTA_Modifier_Hexed, ~CDOTA_Modifier_SheepStick_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SheepStick_Debuff::~CDOTA_Modifier_SheepStick_Debuff(
        CDOTA_Modifier_SheepStick_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_41228D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SheepStick_Debuff::GetEffectName  (line 166, @0x0000000002defbd0, libserver.so)
// strings: "particles/items_fx/item_sheepstick.vpcf"
const char *__fastcall CDOTA_Modifier_SheepStick_Debuff::GetEffectName(CDOTA_Modifier_SheepStick_Debuff *const this)
{
  return "particles/items_fx/item_sheepstick.vpcf";
}


// CDOTA_Modifier_SheepStick_Debuff::GetHexType  (line 167, @0x0000000002defbe0, libserver.so)
// strings: "pig"
const char *__fastcall CDOTA_Modifier_SheepStick_Debuff::GetHexType(CDOTA_Modifier_SheepStick_Debuff *const this)
{
  return "pig";
}


// CDOTA_Modifier_SheepStick_Debuff::GetMoveSpeedModifier  (line 168, @0x0000000002defbf0, libserver.so)
float __fastcall CDOTA_Modifier_SheepStick_Debuff::GetMoveSpeedModifier(CDOTA_Modifier_SheepStick_Debuff *const this)
{
  return this->sheep_movement_speed;
}


// CDOTA_Modifier_SheepStick_Debuff::OnCreated  (line 179, @0x0000000002dedc10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Modifier_Hexed::OnCreated
// strings: "sheep_movement_speed", "General.Pig"
void __fastcall CDOTA_Modifier_SheepStick_Debuff::OnCreated(
        CDOTA_Modifier_SheepStick_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->sheep_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                   Ability,
                                   "sheep_movement_speed",
                                   -1,
                                   0);
  else
    this->sheep_movement_speed = 0.0;
  if ( (*(this->_vptr_CDOTA_Buff + 93))(this) == 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(Parent, "General.Pig", 0.0, 0, 0);
  }
  CDOTA_Modifier_Hexed::OnCreated(this, pKV);
}


// CDOTA_Modifier_SheepStick_Debuff::OnDestroy  (line 195, @0x0000000002de4c30, libserver.so)
// calls: CDOTA_Buff::GetParent, DOTA_EmitSound
// strings: "General.Illusion.Destroy"
void __fastcall CDOTA_Modifier_SheepStick_Debuff::OnDestroy(CDOTA_Modifier_SheepStick_Debuff *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "General.Illusion.Destroy", Parent);
}


