// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_butterfly.cpp:27
class CDOTA_Item_Recipe_Butterfly : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Butterfly(CDOTA_Item_Recipe_Butterfly &);
	CDOTA_Item_Recipe_Butterfly(CDOTA_Item_Recipe_Butterfly &);
	CDOTA_Item_Recipe_Butterfly();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Butterfly();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_butterfly.cpp:39
class CDOTA_Item_Butterfly : public CDOTA_Item {
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
	CDOTA_Item_Butterfly(CDOTA_Item_Butterfly &);
	CDOTA_Item_Butterfly(CDOTA_Item_Butterfly &);
	CDOTA_Item_Butterfly();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_Butterfly();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_butterfly.cpp:75
class CDOTA_Modifier_Item_Butterfly_Extra : public CDOTA_Buff {
public:

private:

	int bonus_move_speed;  // +0xba8
	CDOTA_Modifier_Item_Butterfly_Extra();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual const char * GetEffectName();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Butterfly_Extra();

	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_butterfly.cpp:111
class CDOTA_Modifier_Item_Butterfly : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	int bonus_agility;  // +0xbac
	int bonus_evasion;  // +0xbb0
	int bonus_attack_speed;  // +0xbb4
	CDOTA_Modifier_Item_Butterfly();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierEvasion_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Butterfly();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Butterfly::~CDOTA_Item_Recipe_Butterfly  (line 27, @0x0000000002d85e10, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Butterfly::~CDOTA_Item_Recipe_Butterfly(CDOTA_Item_Recipe_Butterfly *const this)
{
  this->_vptr_IHandleEntity = &off_46B68B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Butterfly::~CDOTA_Item_Recipe_Butterfly  (line 27, @0x0000000002d85e30, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Butterfly
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Butterfly::~CDOTA_Item_Recipe_Butterfly(CDOTA_Item_Recipe_Butterfly *const this)
{
  this->_vptr_IHandleEntity = &off_46B68B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Butterfly::Schema_DynamicBinding  (line 29, @0x0000000002d80cd0, libserver.so)
// globals: CDOTA_Item_Recipe_Butterfly::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Butterfly::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Butterfly *const this)
{
  return CDOTA_Item_Recipe_Butterfly::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002d80ce0, libserver.so)
// globals: CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002d80cf0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Butterfly>
void __fastcall CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002d80d10, libserver.so)
void __fastcall CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002d80d30, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002d80d40, libserver.so)
// globals: CDOTA_Item_Recipe_Butterfly::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Butterfly::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002d835b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002d84b90, libserver.so)  // inlines: CDOTA_Item_Recipe_Butterfly, Construct<CDOTA_Item_Recipe_Butterfly>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46B68B0;
  }
  return p;
}


// CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002d88480, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002d884a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Butterfly::GetEntityClassInternal  (line 29, @0x0000000002d8f800, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_recipe_butterfly", "CDOTA_Item_Recipe_Butterfly"
// globals: `guard variable for'CDOTA_Item_Recipe_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ButterflyClass, CDOTA_Item_Recipe_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ButterflyClass, __dso_handle, CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Butterfly::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ButterflyClassInfo, CDOTA_Item_Recipe_Butterfly::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ButterflyClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Butterfly::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ButterflyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ButterflyClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ButterflyClass);
    CDOTA_Item_Recipe_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ButterflyClass._vptr_CEntityClass = off_46B6830;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ButterflyClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ButterflyClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_ButterflyClass != 0 )
    return &CDOTA_Item_Recipe_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ButterflyClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Butterfly::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ButterflyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Butterfly::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ButterflyClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Butterfly::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ButterflyClassInfo,
      "CDOTA_Item_Recipe_Butterfly",
      "item_recipe_butterfly",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Butterfly::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ButterflyClassInfo);
  }
  CDOTA_Item_Recipe_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ButterflyClass.m_pClassInfo = &CDOTA_Item_Recipe_Butterfly::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ButterflyClassInfo;
  CDOTA_Item_Recipe_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ButterflyClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Butterfly::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ButterflyClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_ButterflyClass = &CDOTA_Item_Recipe_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ButterflyClass;
  CDOTA_Item_Recipe_Butterfly::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ButterflyClassInfo.m_pClass = &CDOTA_Item_Recipe_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ButterflyClass;
  CDOTA_Item_Recipe_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ButterflyClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_ButterflyClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ButterflyClass;
}


// CDOTA_Item_Butterfly::~CDOTA_Item_Butterfly  (line 39, @0x0000000002d85e60, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Butterfly::~CDOTA_Item_Butterfly(CDOTA_Item_Butterfly *const this)
{
  this->_vptr_IHandleEntity = &off_46B74B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Butterfly::~CDOTA_Item_Butterfly  (line 39, @0x0000000002d85e80, libserver.so)  // inlines: ~CDOTA_Item_Butterfly
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Butterfly::~CDOTA_Item_Butterfly(CDOTA_Item_Butterfly *const this)
{
  this->_vptr_IHandleEntity = &off_46B74B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Butterfly::Schema_DynamicBinding  (line 41, @0x0000000002d80d50, libserver.so)
// globals: CDOTA_Item_Butterfly::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Butterfly::Schema_DynamicBinding(
        const CDOTA_Item_Butterfly *const this)
{
  return CDOTA_Item_Butterfly::s_pSchemaBinding;
}


// CDOTA_Item_Butterfly::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002d80d60, libserver.so)
// globals: CDOTA_Item_Butterfly::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Butterfly::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Butterfly::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Butterfly::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Butterfly::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002d80d70, libserver.so)  // inlines: Destruct<CDOTA_Item_Butterfly>
void __fastcall CDOTA_Item_Butterfly::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Butterfly::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Butterfly::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002d80d90, libserver.so)
void __fastcall CDOTA_Item_Butterfly::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Butterfly::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Butterfly::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002d80db0, libserver.so)
bool __fastcall CDOTA_Item_Butterfly::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Butterfly::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Butterfly::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002d80dc0, libserver.so)
// globals: CDOTA_Item_Butterfly::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Butterfly::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Butterfly::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Butterfly::s_pSchemaBinding;
}


// CDOTA_Item_Butterfly::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002d835f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Butterfly::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Butterfly::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Butterfly::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002d84bc0, libserver.so)  // inlines: CDOTA_Item_Butterfly, Construct<CDOTA_Item_Butterfly>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Butterfly::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Butterfly::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46B74B0;
  }
  return p;
}


// CDOTA_Item_Butterfly::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d884d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Butterfly::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Butterfly::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Butterfly::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d884f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Butterfly::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Butterfly::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Butterfly::GetEntityClassInternal  (line 41, @0x0000000002d8f950, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "CDOTA_Item_Butterfly"
// globals: `guard variable for'CDOTA_Item_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ButterflyClass, CDOTA_Item_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ButterflyClass, __dso_handle, CDOTA_Item_Butterfly::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Butterfly::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ButterflyClassInfo, CDOTA_Item_Butterfly::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ButterflyClassInfo
CEntityClass *__cdecl CDOTA_Item_Butterfly::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ButterflyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ButterflyClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ButterflyClass);
    CDOTA_Item_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ButterflyClass._vptr_CEntityClass = off_46B7430;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ButterflyClass);
    __cxa_atexit(
      CDOTA_Item_Butterfly::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ButterflyClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_ButterflyClass != 0 )
    return &CDOTA_Item_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ButterflyClass;
  if ( `guard variable for'CDOTA_Item_Butterfly::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ButterflyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Butterfly::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ButterflyClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Butterfly::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ButterflyClassInfo,
      "CDOTA_Item_Butterfly",
      "item_butterfly",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Butterfly::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ButterflyClassInfo);
  }
  CDOTA_Item_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ButterflyClass.m_pClassInfo = &CDOTA_Item_Butterfly::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ButterflyClassInfo;
  CDOTA_Item_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ButterflyClass.m_pBaseClassInfo = CDOTA_Item_Butterfly::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ButterflyClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_ButterflyClass = &CDOTA_Item_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ButterflyClass;
  CDOTA_Item_Butterfly::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ButterflyClassInfo.m_pClass = &CDOTA_Item_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ButterflyClass;
  CDOTA_Item_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ButterflyClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_ButterflyClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Butterfly::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ButterflyClass;
}


// CDOTA_Item_Butterfly::GetIntrinsicModifierName  (line 43, @0x0000000002d80dd0, libserver.so)
// strings: "modifier_item_butterfly"
const char *__fastcall CDOTA_Item_Butterfly::GetIntrinsicModifierName(CDOTA_Item_Butterfly *const this)
{
  return "modifier_item_butterfly";
}


// CDOTA_Item_Butterfly::OnSpellStart  (line 50, @0x0000000002d7c740, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// strings: "modifier_item_butterfly_extra", "particles/items2_fx/butterfly_active.vpcf", "attach_hitloc", "DOTA_Item.Butterfly"
void __fastcall CDOTA_Item_Butterfly::OnSpellStart(CDOTA_Item_Butterfly *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // r14
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_item_butterfly_extra");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_item_butterfly_extra", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v5) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/items2_fx/butterfly_active.vpcf",
                  7,
                  v5,
                  0,
                  0);
  v7 = CDOTABaseAbility::GetCaster(this);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v8, v5, 1, v7, 5, "attach_hitloc", vec3_invalid, 1);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v9, v5);
  v10 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "DOTA_Item.Butterfly", v10);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Item_Butterfly_Extra::~CDOTA_Modifier_Item_Butterfly_Extra  (line 75, @0x0000000002d846e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Butterfly_Extra::~CDOTA_Modifier_Item_Butterfly_Extra(
        CDOTA_Modifier_Item_Butterfly_Extra *const this)
{
  this->_vptr_CDOTA_Buff = &off_46B8070;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Butterfly_Extra::~CDOTA_Modifier_Item_Butterfly_Extra  (line 75, @0x0000000002d84700, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Butterfly_Extra
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Butterfly_Extra::~CDOTA_Modifier_Item_Butterfly_Extra(
        CDOTA_Modifier_Item_Butterfly_Extra *const this)
{
  this->_vptr_CDOTA_Buff = &off_46B8070;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Butterfly_Extra::IsPurgable  (line 80, @0x0000000002d80de0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Butterfly_Extra::IsPurgable(CDOTA_Modifier_Item_Butterfly_Extra *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Butterfly_Extra::GetEffectName  (line 82, @0x0000000002d85890, libserver.so)
// calls: CDOTA_Buff::GetParent
// strings: "particles/items2_fx/butterfly_buff.vpcf"
const char *__fastcall CDOTA_Modifier_Item_Butterfly_Extra::GetEffectName(
        CDOTA_Modifier_Item_Butterfly_Extra *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  const char *v2; // rdx

  Parent = CDOTA_Buff::GetParent(this);
  v2 = 0;
  if ( SLOBYTE(Parent->m_iUnitType) >= 0 )
    return "particles/items2_fx/butterfly_buff.vpcf";
  return v2;
}


// CDOTA_Modifier_Item_Butterfly_Extra::OnCreated  (line 92, @0x0000000002d7b650, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_move_speed"
void __fastcall CDOTA_Modifier_Item_Butterfly_Extra::OnCreated(
        CDOTA_Modifier_Item_Butterfly_Extra *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_move_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_move_speed", -1, 0);
  else
    this->bonus_move_speed = 0;
}


// CDOTA_Modifier_Item_Butterfly_Extra::DeclareFunctions  (line 99, @0x0000000002d6ee60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Butterfly_Extra::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Butterfly_Extra::DeclareFunctions(CDOTA_Modifier_Item_Butterfly_Extra *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Item_Butterfly_Extra::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Item_Butterfly_Extra::GetModifierMoveSpeedBonus_Percentage  (line 103, @0x0000000002d6ee80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Butterfly_Extra::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Item_Butterfly_Extra *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_move_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Butterfly::~CDOTA_Modifier_Item_Butterfly  (line 111, @0x0000000002d841e0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Butterfly::~CDOTA_Modifier_Item_Butterfly(
        CDOTA_Modifier_Item_Butterfly *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Butterfly::~CDOTA_Modifier_Item_Butterfly  (line 111, @0x0000000002d84200, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Butterfly
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Butterfly::~CDOTA_Modifier_Item_Butterfly(
        CDOTA_Modifier_Item_Butterfly *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Butterfly::DeclareFunctions  (line 133, @0x0000000002d6eea0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Butterfly::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_Butterfly::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_Butterfly::GetModifierEvasion_Constant(CModifierParams const&), CDOTA_Modifier_Item_Butterfly::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Butterfly::DeclareFunctions(CDOTA_Modifier_Item_Butterfly *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Butterfly::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_Butterfly::GetModifierBonusStats_Agility;
  this->m_Functions[40].__pfn = CDOTA_Modifier_Item_Butterfly::GetModifierEvasion_Constant;
  this->m_Functions[40].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_Butterfly::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Item_Butterfly::OnCreated  (line 141, @0x0000000002d7c140, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_agility", "bonus_evasion"
void __fastcall CDOTA_Modifier_Item_Butterfly::OnCreated(CDOTA_Modifier_Item_Butterfly *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_agility = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_agility", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->bonus_evasion = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->bonus_agility = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->bonus_evasion = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_evasion", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_attack_speed", -1, 0);
    return;
  }
LABEL_9:
  this->bonus_attack_speed = 0;
}


// CDOTA_Modifier_Item_Butterfly::GetModifierPreAttack_BonusDamage  (line 151, @0x0000000002d6ef10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Butterfly::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Butterfly *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Butterfly::GetModifierBonusStats_Agility  (line 156, @0x0000000002d6ef30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Butterfly::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_Butterfly *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agility;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Butterfly::GetModifierEvasion_Constant  (line 161, @0x0000000002d6ff60, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_item_butterfly_extra"
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Butterfly::GetModifierEvasion_Constant(
        CDOTA_Modifier_Item_Butterfly *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  __m128i v4; // xmm0
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_item_butterfly_extra", 0) != 0 )
    return 1uLL;
  *v4.m128i_i32 = this->bonus_evasion;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Butterfly::GetModifierAttackSpeedBonus_Constant  (line 169, @0x0000000002d6ef50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Butterfly::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_Butterfly *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


