// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_rod_of_atos.cpp:28
class CDOTA_Item_Recipe_RodOfAtos : public CDOTA_Item {
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
	CDOTA_Item_Recipe_RodOfAtos(CDOTA_Item_Recipe_RodOfAtos &);
	CDOTA_Item_Recipe_RodOfAtos(CDOTA_Item_Recipe_RodOfAtos &);
	CDOTA_Item_Recipe_RodOfAtos();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_RodOfAtos();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_rod_of_atos.cpp:41
class CDOTA_Item_RodOfAtos : public CDOTA_Item {
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
	CDOTA_Item_RodOfAtos(CDOTA_Item_RodOfAtos &);
	CDOTA_Item_RodOfAtos(CDOTA_Item_RodOfAtos &);
	CDOTA_Item_RodOfAtos();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual ~CDOTA_Item_RodOfAtos();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_rod_of_atos.cpp:104
class CDOTA_Modifier_Item_RodOfAtos : public CDOTA_Buff_Item {
public:

private:

	int bonus_intellect;  // +0xba8
	int bonus_health;  // +0xbac
	CDOTA_Modifier_Item_RodOfAtos();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_RodOfAtos();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_rod_of_atos.cpp:157
class CDOTA_Modifier_RodOfAtos_Debuff : public CDOTA_Modifier_Rooted {
public:

	CDOTA_Modifier_RodOfAtos_Debuff();
	virtual const char * GetEffectName();
	virtual bool IsDebuff();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_RodOfAtos_Debuff();

	// vtable[67] GetEffectName
	// vtable[12] IsDebuff
	// vtable[5] CheckState
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_RodOfAtos::~CDOTA_Item_Recipe_RodOfAtos  (line 28, @0x0000000002df35a0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_RodOfAtos::~CDOTA_Item_Recipe_RodOfAtos(CDOTA_Item_Recipe_RodOfAtos *const this)
{
  this->_vptr_IHandleEntity = &off_4756950;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_RodOfAtos::~CDOTA_Item_Recipe_RodOfAtos  (line 28, @0x0000000002df35c0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_RodOfAtos
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_RodOfAtos::~CDOTA_Item_Recipe_RodOfAtos(CDOTA_Item_Recipe_RodOfAtos *const this)
{
  this->_vptr_IHandleEntity = &off_4756950;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_RodOfAtos::Schema_DynamicBinding  (line 30, @0x0000000002def360, libserver.so)
// globals: CDOTA_Item_Recipe_RodOfAtos::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_RodOfAtos::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_RodOfAtos *const this)
{
  return CDOTA_Item_Recipe_RodOfAtos::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002def370, libserver.so)
// globals: CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002def380, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_RodOfAtos>
void __fastcall CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002def3a0, libserver.so)
void __fastcall CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002def3c0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002def3d0, libserver.so)
// globals: CDOTA_Item_Recipe_RodOfAtos::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_RodOfAtos::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002df1040, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002df2210, libserver.so)  // inlines: CDOTA_Item_Recipe_RodOfAtos, Construct<CDOTA_Item_Recipe_RodOfAtos>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4756950;
  }
  return p;
}


// CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002df57b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002df57d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInternal  (line 30, @0x0000000002dfc0c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "item_recipe_rod_of_atos", "CDOTA_Item_Recipe_RodOfAtos"
// globals: `guard variable for'CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClass, CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClass, __dso_handle, CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClassInfo, CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClass);
    CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClass._vptr_CEntityClass = off_47568D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_RodOfAtosClass != 0 )
    return &CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClass;
  if ( `guard variable for'CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClassInfo,
      "CDOTA_Item_Recipe_RodOfAtos",
      "item_recipe_rod_of_atos",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClassInfo);
  }
  CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClass.m_pClassInfo = &CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClassInfo;
  CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClass.m_pBaseClassInfo = CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_RodOfAtosClass = &CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClass;
  CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClassInfo.m_pClass = &CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClass;
  CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_RodOfAtosClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RodOfAtosClass;
}


// CDOTA_Item_RodOfAtos::~CDOTA_Item_RodOfAtos  (line 41, @0x0000000002df35f0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_RodOfAtos::~CDOTA_Item_RodOfAtos(CDOTA_Item_RodOfAtos *const this)
{
  this->_vptr_IHandleEntity = &off_4757550;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_RodOfAtos::~CDOTA_Item_RodOfAtos  (line 41, @0x0000000002df3610, libserver.so)  // inlines: ~CDOTA_Item_RodOfAtos
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_RodOfAtos::~CDOTA_Item_RodOfAtos(CDOTA_Item_RodOfAtos *const this)
{
  this->_vptr_IHandleEntity = &off_4757550;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_RodOfAtos::Schema_DynamicBinding  (line 43, @0x0000000002def3e0, libserver.so)
// globals: CDOTA_Item_RodOfAtos::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_RodOfAtos::Schema_DynamicBinding(
        const CDOTA_Item_RodOfAtos *const this)
{
  return CDOTA_Item_RodOfAtos::s_pSchemaBinding;
}


// CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 43, @0x0000000002def3f0, libserver.so)
// globals: CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::DestructInstance  (line 43, @0x0000000002def400, libserver.so)  // inlines: Destruct<CDOTA_Item_RodOfAtos>
void __fastcall CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::FreeInstance  (line 43, @0x0000000002def420, libserver.so)
void __fastcall CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::CanAllocate  (line 43, @0x0000000002def440, libserver.so)
bool __fastcall CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 43, @0x0000000002def450, libserver.so)
// globals: CDOTA_Item_RodOfAtos::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_RodOfAtos::s_pSchemaBinding;
}


// CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::AllocateInstance  (line 43, @0x0000000002df1080, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::ConstructInstance  (line 43, @0x0000000002df2240, libserver.so)  // inlines: CDOTA_Item_RodOfAtos, Construct<CDOTA_Item_RodOfAtos>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4757550;
  }
  return p;
}


// CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002df5800, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002df5820, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_RodOfAtos::GetEntityClassInternal  (line 43, @0x0000000002dfc210, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "CDOTA_Item_RodOfAtos"
// globals: `guard variable for'CDOTA_Item_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RodOfAtosClass, CDOTA_Item_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RodOfAtosClass, __dso_handle, CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_RodOfAtos::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RodOfAtosClassInfo, CDOTA_Item_RodOfAtos::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RodOfAtosClassInfo
CEntityClass *__cdecl CDOTA_Item_RodOfAtos::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RodOfAtosClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RodOfAtosClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RodOfAtosClass);
    CDOTA_Item_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RodOfAtosClass._vptr_CEntityClass = off_47574D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RodOfAtosClass);
    __cxa_atexit(
      CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RodOfAtosClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_RodOfAtosClass != 0 )
    return &CDOTA_Item_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RodOfAtosClass;
  if ( `guard variable for'CDOTA_Item_RodOfAtos::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RodOfAtosClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_RodOfAtos::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RodOfAtosClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_RodOfAtos::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RodOfAtosClassInfo,
      "CDOTA_Item_RodOfAtos",
      "item_rod_of_atos",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_RodOfAtos::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RodOfAtosClassInfo);
  }
  CDOTA_Item_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RodOfAtosClass.m_pClassInfo = &CDOTA_Item_RodOfAtos::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RodOfAtosClassInfo;
  CDOTA_Item_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RodOfAtosClass.m_pBaseClassInfo = CDOTA_Item_RodOfAtos::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RodOfAtosClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_RodOfAtosClass = &CDOTA_Item_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RodOfAtosClass;
  CDOTA_Item_RodOfAtos::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RodOfAtosClassInfo.m_pClass = &CDOTA_Item_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RodOfAtosClass;
  CDOTA_Item_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RodOfAtosClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_RodOfAtosClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_RodOfAtos::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RodOfAtosClass;
}


// CDOTA_Item_RodOfAtos::GetIntrinsicModifierName  (line 45, @0x0000000002def460, libserver.so)
// strings: "modifier_item_rod_of_atos"
const char *__fastcall CDOTA_Item_RodOfAtos::GetIntrinsicModifierName(CDOTA_Item_RodOfAtos *const this)
{
  return "modifier_item_rod_of_atos";
}


// CDOTA_Item_RodOfAtos::OnSpellStart  (line 59, @0x0000000002de6fb0, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetSerialNumber, InState, IsInvulnerable, Set, ToDOTABaseNPC, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_ProjectileManager::CreateTrackingProjectile, DOTA_EmitSound, __stack_chk_fail
// strings: "particles/items2_fx/rod_of_atos_attack.vpcf", "DOTA_Item.RodOfAtos.Cast"
void __fastcall CDOTA_Item_RodOfAtos::OnSpellStart(CDOTA_Item_RodOfAtos *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // rbx
  __int64 v4; // rax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v9; // cx
  CEntityIdentity *v10; // rax
  __int16 v11; // cx
  CDOTA_BaseNPC *v12; // rax
  sTrackingProjectileCreateInfo info; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp-18h]

  v14 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 )
    {
      info.bProvidesVision = 0;
      info.hSource.m_Index = -1;
      info.hTarget.m_Index = -1;
      info.colorGemColor = 0;
      info.pAttackRecord = 0;
      info.iSourceAttachment = 1;
      info.vSourceLoc.x = vec3_origin.x;
      y = vec3_origin.y;
      info.iVisionTeamNumber = -1;
      info.vSourceLoc.y = y;
      z = vec3_origin.z;
      info.iVisionRadius = 0;
      info.vSourceLoc.z = z;
      info.bDrawsOnMinimap = 0;
      info.bDodgeable = 1;
      info.bIsAttack = 0;
      info.bVisibleToEnemies = 1;
      info.pKVExtraData = 0;
      info.bReplaceExisting = 0;
      info.flExpireTime = 0.0;
      info.flMaxImpactTime = 0.0;
      info.bServerOnly = 0;
      info.pszEffectName = "particles/items2_fx/rod_of_atos_attack.vpcf";
      info.pAbility = this;
      info.iMoveSpeed = 1500;
      Caster = CDOTABaseAbility::GetCaster(this);
      if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
      {
        v9 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
      }
      else
      {
        info.hSource.m_Index = -1;
      }
      v10 = v3->m_pEntity;
      if ( v10 != 0 )
      {
        v11 = 0x7FFF;
        if ( v10->m_EHandle.m_Index != -1 )
          v11 = v10->m_EHandle.m_Index & 0x7FFF;
        info.hTarget.m_Index = (((v10->m_EHandle.m_Index >> 15) - (v10->m_flags & 1)) << 15) | v11 & 0x7FFF;
      }
      else
      {
        info.hTarget.m_Index = -1;
      }
      info.iSourceAttachment = 1;
      CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    }
  }
  v12 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "DOTA_Item.RodOfAtos.Cast", v12);
}


// CDOTA_Item_RodOfAtos::OnProjectileHit  (line 83, @0x0000000002ded500, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_rod_of_atos_debuff", "DOTA_Item.RodOfAtos.Target"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Item_RodOfAtos::OnProjectileHit(
        CDOTA_Item_RodOfAtos *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v4; // eax
  unsigned __int64 v5; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  unsigned __int64 m_Value; // rax
  float v11; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  v4 = *hTarget;
  if ( (*hTarget + 2) > 1 )
  {
    v5 = *hTarget;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && v4 == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && !m_pInstance->m_bIsWaitingToSpawn.m_Value )
        {
          m_Value = m_pInstance->m_nUnitState64.m_Value;
          if ( (m_Value & 0x100) == 0
            && (m_Value & 0x200) == 0
            && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
          {
            KeyValues::KeyValues(&kv, "modifier_rod_of_atos_debuff");
            CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
            KeyValues::SetFloat(&kv, "duration", v11);
            Caster = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_rod_of_atos_debuff", &kv, 0);
            DOTA_EmitSound(10, "DOTA_Item.RodOfAtos.Target", m_pInstance);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 1;
}


// CDOTA_Modifier_Item_RodOfAtos::~CDOTA_Modifier_Item_RodOfAtos  (line 104, @0x0000000002df17e0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_RodOfAtos::~CDOTA_Modifier_Item_RodOfAtos(
        CDOTA_Modifier_Item_RodOfAtos *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_RodOfAtos::~CDOTA_Modifier_Item_RodOfAtos  (line 104, @0x0000000002df1800, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_RodOfAtos
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_RodOfAtos::~CDOTA_Modifier_Item_RodOfAtos(
        CDOTA_Modifier_Item_RodOfAtos *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_RodOfAtos::OnCreated  (line 125, @0x0000000002decad0, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
// strings: "bonus_intellect", "bonus_health"
void __fastcall CDOTA_Modifier_Item_RodOfAtos::OnCreated(CDOTA_Modifier_Item_RodOfAtos *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_intellect, "bonus_intellect");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_health, "bonus_health");
}


// CDOTA_Modifier_Item_RodOfAtos::DeclareFunctions  (line 134, @0x0000000002de4030, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_RodOfAtos::GetModifierHealthBonus(CModifierParams const&), CDOTA_Modifier_Item_RodOfAtos::GetModifierBonusStats_Intellect(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_RodOfAtos::DeclareFunctions(CDOTA_Modifier_Item_RodOfAtos *const this)
{
  this->m_Functions[58].__pfn = CDOTA_Modifier_Item_RodOfAtos::GetModifierHealthBonus;
  this->m_Functions[58].__delta = 0;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_RodOfAtos::GetModifierBonusStats_Intellect;
}


// CDOTA_Modifier_Item_RodOfAtos::GetModifierBonusStats_Intellect  (line 141, @0x0000000002de4070, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_RodOfAtos::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_RodOfAtos *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_RodOfAtos::GetModifierHealthBonus  (line 148, @0x0000000002de4090, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_RodOfAtos::GetModifierHealthBonus(
        CDOTA_Modifier_Item_RodOfAtos *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_RodOfAtos_Debuff::~CDOTA_Modifier_RodOfAtos_Debuff  (line 157, @0x0000000002df1e10, libserver.so)  // inlines: ~CDOTA_Modifier_Rooted
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_RodOfAtos_Debuff::~CDOTA_Modifier_RodOfAtos_Debuff(
        CDOTA_Modifier_RodOfAtos_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_411ECF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_RodOfAtos_Debuff::~CDOTA_Modifier_RodOfAtos_Debuff  (line 157, @0x0000000002df1e30, libserver.so)  // inlines: ~CDOTA_Modifier_RodOfAtos_Debuff, ~CDOTA_Modifier_Rooted
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_RodOfAtos_Debuff::~CDOTA_Modifier_RodOfAtos_Debuff(
        CDOTA_Modifier_RodOfAtos_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_411ECF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_RodOfAtos_Debuff::GetEffectName  (line 162, @0x0000000002def470, libserver.so)
// strings: "particles/items2_fx/rod_of_atos.vpcf"
const char *__fastcall CDOTA_Modifier_RodOfAtos_Debuff::GetEffectName(CDOTA_Modifier_RodOfAtos_Debuff *const this)
{
  return "particles/items2_fx/rod_of_atos.vpcf";
}


// CDOTA_Modifier_RodOfAtos_Debuff::IsDebuff  (line 164, @0x0000000002def480, libserver.so)
bool __fastcall CDOTA_Modifier_RodOfAtos_Debuff::IsDebuff(CDOTA_Modifier_RodOfAtos_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_RodOfAtos_Debuff::CheckState  (line 175, @0x0000000002de5380, libserver.so)  // inlines: Disable
// calls: CDOTA_Modifier_Rooted::CheckState
void __fastcall CDOTA_Modifier_RodOfAtos_Debuff::CheckState(
        CDOTA_Modifier_RodOfAtos_Debuff *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_Modifier_Rooted::CheckState(this, buffState);
  buffState->m_nDisabledStateMask |= 0x80uLL;
  buffState->m_nEnabledStateMask &= ~0x80uLL;
}


