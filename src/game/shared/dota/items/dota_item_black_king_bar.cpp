// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_black_king_bar.cpp:31
class CDOTA_Item_Recipe_Black_King_Bar : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Black_King_Bar(CDOTA_Item_Recipe_Black_King_Bar &);
	CDOTA_Item_Recipe_Black_King_Bar(CDOTA_Item_Recipe_Black_King_Bar &);
	CDOTA_Item_Recipe_Black_King_Bar();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Black_King_Bar();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_black_king_bar.cpp:42
class CDOTA_Item_Black_King_Bar : public CDOTA_Item {
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
	CDOTA_Item_Black_King_Bar(CDOTA_Item_Black_King_Bar &);
	CDOTA_Item_Black_King_Bar(CDOTA_Item_Black_King_Bar &);
	CDOTA_Item_Black_King_Bar();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_Black_King_Bar();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_black_king_bar.cpp:88
class CDOTA_Modifier_Black_King_Bar_Immune : public CDOTA_Modifier_MagicImmune {
public:

private:

	int model_scale;  // +0xba8
	CDOTA_Modifier_Black_King_Bar_Immune();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t ModelScale(const CModifierParams &);
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_Black_King_Bar_Immune();

	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[32] GetTexture
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_black_king_bar.cpp:144
class CDOTA_Modifier_Item_Black_King_Bar : public CDOTA_Buff_Item {
public:

private:

	int bonus_strength;  // +0xba8
	int bonus_damage;  // +0xbac
	float duration;  // +0xbb0
	CDOTA_Modifier_Item_Black_King_Bar();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Black_King_Bar();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Black_King_Bar::~CDOTA_Item_Recipe_Black_King_Bar  (line 31, @0x0000000002d64670, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Black_King_Bar::~CDOTA_Item_Recipe_Black_King_Bar(
        CDOTA_Item_Recipe_Black_King_Bar *const this)
{
  this->_vptr_IHandleEntity = &off_4692B30;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Black_King_Bar::~CDOTA_Item_Recipe_Black_King_Bar  (line 31, @0x0000000002d64690, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Black_King_Bar
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Black_King_Bar::~CDOTA_Item_Recipe_Black_King_Bar(
        CDOTA_Item_Recipe_Black_King_Bar *const this)
{
  this->_vptr_IHandleEntity = &off_4692B30;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Black_King_Bar::Schema_DynamicBinding  (line 33, @0x0000000002d60e50, libserver.so)
// globals: CDOTA_Item_Recipe_Black_King_Bar::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Black_King_Bar::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Black_King_Bar *const this)
{
  return CDOTA_Item_Recipe_Black_King_Bar::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 33, @0x0000000002d60e60, libserver.so)
// globals: CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::DestructInstance  (line 33, @0x0000000002d60e70, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Black_King_Bar>
void __fastcall CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::FreeInstance  (line 33, @0x0000000002d60e90, libserver.so)
void __fastcall CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::CanAllocate  (line 33, @0x0000000002d60eb0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 33, @0x0000000002d60ec0, libserver.so)
// globals: CDOTA_Item_Recipe_Black_King_Bar::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Black_King_Bar::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::AllocateInstance  (line 33, @0x0000000002d62670, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::ConstructInstance  (line 33, @0x0000000002d637b0, libserver.so)  // inlines: CDOTA_Item_Recipe_Black_King_Bar, Construct<CDOTA_Item_Recipe_Black_King_Bar>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4692B30;
  }
  return p;
}


// CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000002d66590, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000002d665b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInternal  (line 33, @0x0000000002d6c240, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "item_recipe_black_king_bar", "CDOTA_Item_Recipe_Black_King_Bar"
// globals: `guard variable for'CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClass, CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClass, __dso_handle, CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClassInfo, CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClass);
    CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClass._vptr_CEntityClass = off_4692AB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Black_King_BarClass != 0 )
    return &CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClassInfo,
      "CDOTA_Item_Recipe_Black_King_Bar",
      "item_recipe_black_king_bar",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClassInfo);
  }
  CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClass.m_pClassInfo = &CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClassInfo;
  CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Black_King_BarClass = &CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClass;
  CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClassInfo.m_pClass = &CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClass;
  CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Black_King_BarClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Black_King_BarClass;
}


// CDOTA_Item_Black_King_Bar::~CDOTA_Item_Black_King_Bar  (line 42, @0x0000000002d646c0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Black_King_Bar::~CDOTA_Item_Black_King_Bar(CDOTA_Item_Black_King_Bar *const this)
{
  this->_vptr_IHandleEntity = &off_4693730;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Black_King_Bar::~CDOTA_Item_Black_King_Bar  (line 42, @0x0000000002d646e0, libserver.so)  // inlines: ~CDOTA_Item_Black_King_Bar
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Black_King_Bar::~CDOTA_Item_Black_King_Bar(CDOTA_Item_Black_King_Bar *const this)
{
  this->_vptr_IHandleEntity = &off_4693730;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Black_King_Bar::Schema_DynamicBinding  (line 44, @0x0000000002d60ed0, libserver.so)
// globals: CDOTA_Item_Black_King_Bar::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Black_King_Bar::Schema_DynamicBinding(
        const CDOTA_Item_Black_King_Bar *const this)
{
  return CDOTA_Item_Black_King_Bar::s_pSchemaBinding;
}


// CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 44, @0x0000000002d60ee0, libserver.so)
// globals: CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::DestructInstance  (line 44, @0x0000000002d60ef0, libserver.so)  // inlines: Destruct<CDOTA_Item_Black_King_Bar>
void __fastcall CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::FreeInstance  (line 44, @0x0000000002d60f10, libserver.so)
void __fastcall CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::CanAllocate  (line 44, @0x0000000002d60f30, libserver.so)
bool __fastcall CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 44, @0x0000000002d60f40, libserver.so)
// globals: CDOTA_Item_Black_King_Bar::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Black_King_Bar::s_pSchemaBinding;
}


// CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::AllocateInstance  (line 44, @0x0000000002d626b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::ConstructInstance  (line 44, @0x0000000002d637e0, libserver.so)  // inlines: CDOTA_Item_Black_King_Bar, Construct<CDOTA_Item_Black_King_Bar>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4693730;
  }
  return p;
}


// CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002d665e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002d66600, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Black_King_Bar::GetEntityClassInternal  (line 44, @0x0000000002d6c390, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "CDOTA_Item_Black_King_Bar"
// globals: `guard variable for'CDOTA_Item_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Black_King_BarClass, CDOTA_Item_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Black_King_BarClass, __dso_handle, CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Black_King_Bar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Black_King_BarClassInfo, CDOTA_Item_Black_King_Bar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Black_King_BarClassInfo
CEntityClass *__cdecl CDOTA_Item_Black_King_Bar::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Black_King_BarClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Black_King_BarClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Black_King_BarClass);
    CDOTA_Item_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Black_King_BarClass._vptr_CEntityClass = off_46936B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Black_King_BarClass);
    __cxa_atexit(
      CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Black_King_BarClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Black_King_BarClass != 0 )
    return &CDOTA_Item_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Black_King_BarClass;
  if ( `guard variable for'CDOTA_Item_Black_King_Bar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Black_King_BarClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Black_King_Bar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Black_King_BarClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Black_King_Bar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Black_King_BarClassInfo,
      "CDOTA_Item_Black_King_Bar",
      "item_black_king_bar",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Black_King_Bar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Black_King_BarClassInfo);
  }
  CDOTA_Item_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Black_King_BarClass.m_pClassInfo = &CDOTA_Item_Black_King_Bar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Black_King_BarClassInfo;
  CDOTA_Item_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Black_King_BarClass.m_pBaseClassInfo = CDOTA_Item_Black_King_Bar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Black_King_BarClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Black_King_BarClass = &CDOTA_Item_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Black_King_BarClass;
  CDOTA_Item_Black_King_Bar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Black_King_BarClassInfo.m_pClass = &CDOTA_Item_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Black_King_BarClass;
  CDOTA_Item_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Black_King_BarClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Black_King_BarClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Black_King_Bar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Black_King_BarClass;
}


// CDOTA_Item_Black_King_Bar::GetIntrinsicModifierName  (line 46, @0x0000000002d60f50, libserver.so)
// strings: "modifier_item_black_king_bar"
const char *__fastcall CDOTA_Item_Black_King_Bar::GetIntrinsicModifierName(CDOTA_Item_Black_King_Bar *const this)
{
  return "modifier_item_black_king_bar";
}


// CDOTA_Item_Black_King_Bar::OnSpellStart  (line 53, @0x0000000002d5dda0, libserver.so)  // inlines: GetBool, GetInt, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, IncrementBKBChargesUsed, NetworkStateChanged, Set, operator++, operator+=<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::AddNewModifier, Purge, CDOTA_BaseNPC::RemoveModifierByName, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "max_level", "modifier_magic_immune", "DOTA_Item.BlackKingBar.Activate", "modifier_black_king_bar_immune", "modifier_heavens_halberd_debuff", "modifier_oracle_fates_edict" (9 total)
void __fastcall CDOTA_Item_Black_King_Bar::OnSpellStart(CDOTA_Item_Black_King_Bar *const this)
{
  int LevelSpecialValue; // eax
  float v3; // xmm1_4
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // r13
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *Caster; // r12
  int v14; // r13d
  void (__fastcall *v15)(CDOTA_Item_Black_King_Bar *const, _QWORD); // r12
  CDOTA_BaseNPC *v16; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-28h]

  v18 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", this->m_iLevel.m_Value - 1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_level", -1, 0);
  if ( dota_ability_debug.m_pParent->m_Value.m_nValue == 0 && LevelSpecialValue > this->m_iLevel.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    v14 = Caster->m_iBKBChargesUsed.m_Value + 1;
    (*(Caster->_vptr_IHandleEntity + 22))(Caster, 2176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    Caster->m_iBKBChargesUsed.m_Value = v14;
    v15 = *(this->_vptr_IHandleEntity + 212);
    v16 = CDOTABaseAbility::GetCaster(this);
    v15(this, (v16->m_iBKBChargesUsed.m_Value + 1));
  }
  KeyValues::KeyValues(&kv, "modifier_magic_immune");
  KeyValues::SetFloat(&kv, "duration", v3);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v4, "DOTA_Item.BlackKingBar.Activate", 0.0, 0, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v6, v5, this, "modifier_black_king_bar_immune", &kv, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  Purge(v7, this, 4);
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v8, "modifier_heavens_halberd_debuff");
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v9, "modifier_oracle_fates_edict");
  v10 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v10, "modifier_silencer_curse_of_the_silent");
  v11 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v11, "modifier_slark_pounce_leash");
  v12 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v12, "modifier_invoker_deafening_blast_disarm");
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Black_King_Bar_Immune::~CDOTA_Modifier_Black_King_Bar_Immune  (line 88, @0x0000000002d63200, libserver.so)  // inlines: ~CDOTA_Modifier_MagicImmune
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Black_King_Bar_Immune::~CDOTA_Modifier_Black_King_Bar_Immune(
        CDOTA_Modifier_Black_King_Bar_Immune *const this)
{
  this->_vptr_CDOTA_Buff = &off_411B710;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Black_King_Bar_Immune::~CDOTA_Modifier_Black_King_Bar_Immune  (line 88, @0x0000000002d63220, libserver.so)  // inlines: ~CDOTA_Modifier_Black_King_Bar_Immune, ~CDOTA_Modifier_MagicImmune
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Black_King_Bar_Immune::~CDOTA_Modifier_Black_King_Bar_Immune(
        CDOTA_Modifier_Black_King_Bar_Immune *const this)
{
  this->_vptr_CDOTA_Buff = &off_411B710;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Black_King_Bar_Immune::GetEffectName  (line 93, @0x0000000002d60f60, libserver.so)
// strings: "particles/items_fx/black_king_bar_avatar.vpcf"
const char *__fastcall CDOTA_Modifier_Black_King_Bar_Immune::GetEffectName(
        CDOTA_Modifier_Black_King_Bar_Immune *const this)
{
  return "particles/items_fx/black_king_bar_avatar.vpcf";
}


// CDOTA_Modifier_Black_King_Bar_Immune::GetStatusEffectName  (line 94, @0x0000000002d60f70, libserver.so)
// strings: "particles/status_fx/status_effect_avatar.vpcf"
const char *__fastcall CDOTA_Modifier_Black_King_Bar_Immune::GetStatusEffectName(
        CDOTA_Modifier_Black_King_Bar_Immune *const this)
{
  return "particles/status_fx/status_effect_avatar.vpcf";
}


// CDOTA_Modifier_Black_King_Bar_Immune::StatusEffectPriority  (line 95, @0x0000000002d60f80, libserver.so)
int __fastcall CDOTA_Modifier_Black_King_Bar_Immune::StatusEffectPriority(
        CDOTA_Modifier_Black_King_Bar_Immune *const this)
{
  return 150;
}


// CDOTA_Modifier_Black_King_Bar_Immune::IsPurgable  (line 96, @0x0000000002d60f90, libserver.so)
bool __fastcall CDOTA_Modifier_Black_King_Bar_Immune::IsPurgable(CDOTA_Modifier_Black_King_Bar_Immune *const this)
{
  return 0;
}


// CDOTA_Modifier_Black_King_Bar_Immune::OnCreated  (line 114, @0x0000000002d5ed40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "model_scale"
void __fastcall CDOTA_Modifier_Black_King_Bar_Immune::OnCreated(
        CDOTA_Modifier_Black_King_Bar_Immune *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->model_scale = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "model_scale", -1, 0);
  else
    this->model_scale = 0;
}


// CDOTA_Modifier_Black_King_Bar_Immune::GetTexture  (line 121, @0x0000000002d551d0, libserver.so)
// calls: CDOTA_Buff::GetTexture
const char *__fastcall CDOTA_Modifier_Black_King_Bar_Immune::GetTexture(
        CDOTA_Modifier_Black_King_Bar_Immune *const this)
{
  return CDOTA_Buff::GetTexture(this);
}


// CDOTA_Modifier_Black_King_Bar_Immune::DeclareFunctions  (line 129, @0x0000000002d54420, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Black_King_Bar_Immune::ModelScale(CModifierParams const&)
void __fastcall CDOTA_Modifier_Black_King_Bar_Immune::DeclareFunctions(
        CDOTA_Modifier_Black_King_Bar_Immune *const this)
{
  this->m_Functions[153].__pfn = CDOTA_Modifier_Black_King_Bar_Immune::ModelScale;
  this->m_Functions[153].__delta = 0;
}


// CDOTA_Modifier_Black_King_Bar_Immune::ModelScale  (line 136, @0x0000000002d54440, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Black_King_Bar_Immune::ModelScale(
        CDOTA_Modifier_Black_King_Bar_Immune *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->model_scale;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Black_King_Bar::~CDOTA_Modifier_Item_Black_King_Bar  (line 144, @0x0000000002d62d50, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Black_King_Bar::~CDOTA_Modifier_Item_Black_King_Bar(
        CDOTA_Modifier_Item_Black_King_Bar *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Black_King_Bar::~CDOTA_Modifier_Item_Black_King_Bar  (line 144, @0x0000000002d62d70, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Black_King_Bar
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Black_King_Bar::~CDOTA_Modifier_Item_Black_King_Bar(
        CDOTA_Modifier_Item_Black_King_Bar *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Black_King_Bar::OnCreated  (line 163, @0x0000000002d5f7e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, ToDOTABaseNPC
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTA_Buff_Item::GetItem
// strings: "max_level"
void __fastcall CDOTA_Modifier_Item_Black_King_Bar::OnCreated(
        CDOTA_Modifier_Item_Black_King_Bar *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v8; // r12
  CDOTA_Item *Item; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_strength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_strength", -1, 0);
  else
    this->bonus_strength = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_damage", -1, 0);
  else
    this->bonus_damage = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "duration", -1, 0);
  else
    this->duration = 0.0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "max_level", -1, 0);
  Parent = CDOTA_Buff::GetParent(this);
  v8 = Parent;
  if ( Parent != 0 && Parent->m_bIsDOTANPC )
  {
    Item = CDOTA_Buff_Item::GetItem(this);
    (*(Item->_vptr_IHandleEntity + 212))(Item, (v8->m_iBKBChargesUsed.m_Value + 1));
  }
}


// CDOTA_Modifier_Item_Black_King_Bar::DeclareFunctions  (line 182, @0x0000000002d54460, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Black_King_Bar::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_Black_King_Bar::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Black_King_Bar::DeclareFunctions(CDOTA_Modifier_Item_Black_King_Bar *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Black_King_Bar::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Black_King_Bar::GetModifierPreAttack_BonusDamage;
}


// CDOTA_Modifier_Item_Black_King_Bar::GetModifierBonusStats_Strength  (line 188, @0x0000000002d544a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Black_King_Bar::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Black_King_Bar *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Black_King_Bar::GetModifierPreAttack_BonusDamage  (line 193, @0x0000000002d544c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Black_King_Bar::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Black_King_Bar *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


