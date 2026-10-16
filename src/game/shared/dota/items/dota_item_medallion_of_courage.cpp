// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_medallion_of_courage.cpp:26
class CDOTA_Item_Recipe_Medallion_Of_Courage : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Medallion_Of_Courage(CDOTA_Item_Recipe_Medallion_Of_Courage &);
	CDOTA_Item_Recipe_Medallion_Of_Courage(CDOTA_Item_Recipe_Medallion_Of_Courage &);
	CDOTA_Item_Recipe_Medallion_Of_Courage();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Medallion_Of_Courage();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_medallion_of_courage.cpp:38
class CDOTA_Item_Medallion_Of_Courage : public CDOTA_Item {
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
	CDOTA_Item_Medallion_Of_Courage(CDOTA_Item_Medallion_Of_Courage &);
	CDOTA_Item_Medallion_Of_Courage(CDOTA_Item_Medallion_Of_Courage &);
	CDOTA_Item_Medallion_Of_Courage();
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
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual ~CDOTA_Item_Medallion_Of_Courage();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_medallion_of_courage.cpp:51
class C_CDOTA_Item_Medallion_Of_Courage_MapInstall {
	C_CDOTA_Item_Medallion_Of_Courage_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_medallion_of_courage.cpp:109
class CDOTA_Modifier_Item_Medallion_Of_Courage : public CDOTA_Buff_Item {
public:

private:

	int bonus_armor;  // +0xba8
	int bonus_mana_regen_pct;  // +0xbac
	CDOTA_Modifier_Item_Medallion_Of_Courage();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Medallion_Of_Courage();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[90] GetModifierPhysicalArmorBonus
	// vtable[91] GetModifierPercentageManaRegen
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_medallion_of_courage.cpp:162
class CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition : public CDOTA_Buff {
public:

private:

	int bonus_armor;  // +0xba8
	CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual bool IsDebuff();
	virtual ~CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierPhysicalArmorBonus
	// vtable[12] IsDebuff
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_medallion_of_courage.cpp:214
class CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction : public CDOTA_Buff {
public:

private:

	int armor_reduction;  // +0xba8
	CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual bool IsDebuff();
	virtual ~CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierPhysicalArmorBonus
	// vtable[12] IsDebuff
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Medallion_Of_Courage::~CDOTA_Item_Recipe_Medallion_Of_Courage  (line 26, @0x0000000002dbcd60, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Medallion_Of_Courage::~CDOTA_Item_Recipe_Medallion_Of_Courage(
        CDOTA_Item_Recipe_Medallion_Of_Courage *const this)
{
  this->_vptr_IHandleEntity = &off_4714E30;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Medallion_Of_Courage::~CDOTA_Item_Recipe_Medallion_Of_Courage  (line 26, @0x0000000002dbcd80, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Medallion_Of_Courage
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Medallion_Of_Courage::~CDOTA_Item_Recipe_Medallion_Of_Courage(
        CDOTA_Item_Recipe_Medallion_Of_Courage *const this)
{
  this->_vptr_IHandleEntity = &off_4714E30;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Medallion_Of_Courage::Schema_DynamicBinding  (line 28, @0x0000000002db9600, libserver.so)
// globals: CDOTA_Item_Recipe_Medallion_Of_Courage::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Medallion_Of_Courage::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Medallion_Of_Courage *const this)
{
  return CDOTA_Item_Recipe_Medallion_Of_Courage::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002db9610, libserver.so)
// globals: CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002db9620, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Medallion_Of_Courage>
void __fastcall CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002db9640, libserver.so)
void __fastcall CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002db9660, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002db9670, libserver.so)
// globals: CDOTA_Item_Recipe_Medallion_Of_Courage::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Medallion_Of_Courage::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002dbaa00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002dbbc10, libserver.so)  // inlines: CDOTA_Item_Recipe_Medallion_Of_Courage, Construct<CDOTA_Item_Recipe_Medallion_Of_Courage>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4714E30;
  }
  return p;
}


// CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dbef60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dbef80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInternal  (line 28, @0x0000000002dc6120, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_recipe_medallion_of_courage", "CDOTA_Item_Recipe_Medallion_Of_Courage"
// globals: `guard variable for'CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClass, CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClass, __dso_handle, CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClassInfo, CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClass);
    CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClass._vptr_CEntityClass = off_4714DB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Medallion_Of_CourageClass != 0 )
    return &CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClassInfo,
      "CDOTA_Item_Recipe_Medallion_Of_Courage",
      "item_recipe_medallion_of_courage",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClassInfo);
  }
  CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClass.m_pClassInfo = &CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClassInfo;
  CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Medallion_Of_CourageClass = &CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClass;
  CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClassInfo.m_pClass = &CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClass;
  CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Medallion_Of_CourageClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Medallion_Of_CourageClass;
}


// CDOTA_Item_Medallion_Of_Courage::~CDOTA_Item_Medallion_Of_Courage  (line 38, @0x0000000002dbcdb0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Medallion_Of_Courage::~CDOTA_Item_Medallion_Of_Courage(
        CDOTA_Item_Medallion_Of_Courage *const this)
{
  this->_vptr_IHandleEntity = &off_4715A30;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Medallion_Of_Courage::~CDOTA_Item_Medallion_Of_Courage  (line 38, @0x0000000002dbcdd0, libserver.so)  // inlines: ~CDOTA_Item_Medallion_Of_Courage
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Medallion_Of_Courage::~CDOTA_Item_Medallion_Of_Courage(
        CDOTA_Item_Medallion_Of_Courage *const this)
{
  this->_vptr_IHandleEntity = &off_4715A30;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Medallion_Of_Courage::Schema_DynamicBinding  (line 40, @0x0000000002db9680, libserver.so)
// globals: CDOTA_Item_Medallion_Of_Courage::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Medallion_Of_Courage::Schema_DynamicBinding(
        const CDOTA_Item_Medallion_Of_Courage *const this)
{
  return CDOTA_Item_Medallion_Of_Courage::s_pSchemaBinding;
}


// CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002db9690, libserver.so)
// globals: CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002db96a0, libserver.so)  // inlines: Destruct<CDOTA_Item_Medallion_Of_Courage>
void __fastcall CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002db96c0, libserver.so)
void __fastcall CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002db96e0, libserver.so)
bool __fastcall CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002db96f0, libserver.so)
// globals: CDOTA_Item_Medallion_Of_Courage::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Medallion_Of_Courage::s_pSchemaBinding;
}


// CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002dbaa40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002dbbc40, libserver.so)  // inlines: CDOTA_Item_Medallion_Of_Courage, Construct<CDOTA_Item_Medallion_Of_Courage>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4715A30;
  }
  return p;
}


// CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002dbefb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002dbefd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Medallion_Of_Courage::GetEntityClassInternal  (line 40, @0x0000000002dc6270, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_medallion_of_courage", "CDOTA_Item_Medallion_Of_Courage"
// globals: `guard variable for'CDOTA_Item_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClass, CDOTA_Item_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClass, __dso_handle, CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Medallion_Of_Courage::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClassInfo, CDOTA_Item_Medallion_Of_Courage::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClassInfo
CEntityClass *__cdecl CDOTA_Item_Medallion_Of_Courage::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClass);
    CDOTA_Item_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClass._vptr_CEntityClass = off_47159B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClass);
    __cxa_atexit(
      CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Medallion_Of_CourageClass != 0 )
    return &CDOTA_Item_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClass;
  if ( `guard variable for'CDOTA_Item_Medallion_Of_Courage::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Medallion_Of_Courage::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Medallion_Of_Courage::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClassInfo,
      "CDOTA_Item_Medallion_Of_Courage",
      "item_medallion_of_courage",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Medallion_Of_Courage::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClassInfo);
  }
  CDOTA_Item_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClass.m_pClassInfo = &CDOTA_Item_Medallion_Of_Courage::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClassInfo;
  CDOTA_Item_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClass.m_pBaseClassInfo = CDOTA_Item_Medallion_Of_Courage::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Medallion_Of_CourageClass = &CDOTA_Item_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClass;
  CDOTA_Item_Medallion_Of_Courage::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClassInfo.m_pClass = &CDOTA_Item_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClass;
  CDOTA_Item_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Medallion_Of_CourageClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Medallion_Of_Courage::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Medallion_Of_CourageClass;
}


// CDOTA_Item_Medallion_Of_Courage::GetIntrinsicModifierName  (line 43, @0x0000000002db9700, libserver.so)
// strings: "modifier_item_medallion_of_courage"
const char *__fastcall CDOTA_Item_Medallion_Of_Courage::GetIntrinsicModifierName(
        CDOTA_Item_Medallion_Of_Courage *const this)
{
  return "modifier_item_medallion_of_courage";
}


// CDOTA_Item_Medallion_Of_Courage::YouForgotToImplementOrDeclareServerClass  (line 51, @0x0000000002dab770, libserver.so)
int __fastcall CDOTA_Item_Medallion_Of_Courage::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_Medallion_Of_Courage *const this)
{
  return 0;
}


// CDOTA_Item_Medallion_Of_Courage::GetServerClass  (line 51, @0x0000000002daebf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Medallion_Of_Courage::GetServerClass(CDOTA_Item_Medallion_Of_Courage *const this)
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


// CDOTA_Item_Medallion_Of_Courage::CastFilterResult  (line 60, @0x0000000002daba00, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::CastFilterResult
int __fastcall CDOTA_Item_Medallion_Of_Courage::CastFilterResult(
        CDOTA_Item_Medallion_Of_Courage *const this,
        CDOTA_BaseNPC *pTarget)
{
  if ( CDOTABaseAbility::GetCaster(this) == pTarget )
    return 23;
  else
    return CDOTABaseAbility::CastFilterResult(this, pTarget);
}


// CDOTA_Item_Medallion_Of_Courage::GetCustomCastError  (line 70, @0x0000000002daba40, libserver.so)
// calls: CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Item_Medallion_Of_Courage::GetCustomCastError(
        CDOTA_Item_Medallion_Of_Courage *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  const char *v4; // rdx

  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = "#dota_hud_error_cant_cast_on_self";
  if ( Caster != pTarget )
    return "";
  return v4;
}


// CDOTA_Item_Medallion_Of_Courage::OnSpellStart  (line 80, @0x0000000002db5f90, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetTeamNumber, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, DOTA_EmitSound, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_item_medallion_of_courage_armor", "modifier_item_medallion_of_courage_armor_reduction", "DOTA_Item.MedallionOfCourage.Activate", "modifier_item_medallion_of_courage_armor_addition"
void __fastcall CDOTA_Item_Medallion_Of_Courage::OnSpellStart(CDOTA_Item_Medallion_Of_Courage *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_item_medallion_of_courage_armor");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    v6 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v6, Caster, this, "modifier_item_medallion_of_courage_armor_reduction", &kv, 0);
    LOBYTE(Caster) = v3->m_iTeamNum.m_Value;
    if ( Caster == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
    {
      v9 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, v9, this, "modifier_item_medallion_of_courage_armor_addition", &kv, 0);
    }
    else
    {
      v7 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, v7, this, "modifier_item_medallion_of_courage_armor_reduction", &kv, 0);
    }
    KeyValues::~KeyValues(&kv);
  }
  v8 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "DOTA_Item.MedallionOfCourage.Activate", v8);
}


// CDOTA_Modifier_Item_Medallion_Of_Courage::~CDOTA_Modifier_Item_Medallion_Of_Courage  (line 109, @0x0000000002dbabf0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Medallion_Of_Courage::~CDOTA_Modifier_Item_Medallion_Of_Courage(
        CDOTA_Modifier_Item_Medallion_Of_Courage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Medallion_Of_Courage::~CDOTA_Modifier_Item_Medallion_Of_Courage  (line 109, @0x0000000002dbac10, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Medallion_Of_Courage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Medallion_Of_Courage::~CDOTA_Modifier_Item_Medallion_Of_Courage(
        CDOTA_Modifier_Item_Medallion_Of_Courage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Medallion_Of_Courage::OnCreated  (line 130, @0x0000000002db4650, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_mana_regen_pct"
void __fastcall CDOTA_Modifier_Item_Medallion_Of_Courage::OnCreated(
        CDOTA_Modifier_Item_Medallion_Of_Courage *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_armor", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_mana_regen_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_mana_regen_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_armor = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_mana_regen_pct = 0;
}


// CDOTA_Modifier_Item_Medallion_Of_Courage::DeclareFunctions  (line 138, @0x0000000002dab780, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Item_Medallion_Of_Courage::DeclareFunctions(
        CDOTA_Modifier_Item_Medallion_Of_Courage *const this)
{
  this->m_Functions[45].__pfn = (&stru_10 + 705);
  this->m_Functions[45].__delta = 0;
  this->m_Functions[54].__pfn = (&stru_10 + 713);
  this->m_Functions[54].__delta = 0;
}


// CDOTA_Modifier_Item_Medallion_Of_Courage::GetModifierPhysicalArmorBonus  (line 146, @0x0000000002dab7c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Medallion_Of_Courage::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Medallion_Of_Courage *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Medallion_Of_Courage::GetModifierPercentageManaRegen  (line 153, @0x0000000002dab7e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Medallion_Of_Courage::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_Medallion_Of_Courage *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana_regen_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition::~CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition  (line 162, @0x0000000002dbb1e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition::~CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition(
        CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition *const this)
{
  this->_vptr_CDOTA_Buff = &off_4716930;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition::~CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition  (line 162, @0x0000000002dbb200, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition::~CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition(
        CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition *const this)
{
  this->_vptr_CDOTA_Buff = &off_4716930;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition::IsDebuff  (line 171, @0x0000000002db9710, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition::IsDebuff(
        CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition::OnCreated  (line 183, @0x0000000002db43b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition::OnCreated(
        CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_armor", -1, 0);
  else
    this->bonus_armor = 0;
}


// CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition::DeclareFunctions  (line 195, @0x0000000002dab800, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition::DeclareFunctions(
        CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition *const this)
{
  this->m_Functions[45].__pfn = (&stru_10 + 697);
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition::GetModifierPhysicalArmorBonus  (line 202, @0x0000000002dab820, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Addition *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction::~CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction  (line 214, @0x0000000002dbb190, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction::~CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction(
        CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction *const this)
{
  this->_vptr_CDOTA_Buff = &off_4716C50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction::~CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction  (line 214, @0x0000000002dbb1b0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction::~CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction(
        CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction *const this)
{
  this->_vptr_CDOTA_Buff = &off_4716C50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction::IsDebuff  (line 223, @0x0000000002db9720, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction::IsDebuff(
        CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction::OnCreated  (line 235, @0x0000000002db4530, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction::OnCreated(
        CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->armor_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "armor_reduction", -1, 0);
  else
    this->armor_reduction = 0;
}


// CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction::DeclareFunctions  (line 247, @0x0000000002dab840, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction::DeclareFunctions(
        CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction *const this)
{
  this->m_Functions[45].__pfn = (&stru_10 + 697);
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction::GetModifierPhysicalArmorBonus  (line 254, @0x0000000002dab860, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Medallion_Of_Courage_Armor_Reduction *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->armor_reduction;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


