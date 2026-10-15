// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_force_staff.cpp:26
class CDOTA_Item_Recipe_ForceStaff : public CDOTA_Item {
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
	CDOTA_Item_Recipe_ForceStaff(CDOTA_Item_Recipe_ForceStaff &);
	CDOTA_Item_Recipe_ForceStaff(CDOTA_Item_Recipe_ForceStaff &);
	CDOTA_Item_Recipe_ForceStaff();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_ForceStaff();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_force_staff.cpp:37
class CDOTA_Item_ForceStaff : public CDOTA_Item {
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
	CDOTA_Item_ForceStaff(CDOTA_Item_ForceStaff &);
	CDOTA_Item_ForceStaff(CDOTA_Item_ForceStaff &);
	CDOTA_Item_ForceStaff();
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
	virtual ~CDOTA_Item_ForceStaff();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_force_staff.cpp:49
class C_CDOTA_Item_ForceStaff_MapInstall {
	C_CDOTA_Item_ForceStaff_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_force_staff.cpp:125
class CDOTA_Modifier_Item_ForceStaff : public CDOTA_Buff_Item {
public:

private:

	int bonus_health_regen;  // +0xba8
	int bonus_intellect;  // +0xbac
	CDOTA_Modifier_Item_ForceStaff();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_ForceStaff();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_force_staff.cpp:169
class CDOTA_Modifier_ForceStaff : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	float m_flEndTime;  // +0xbc0
	float m_flCurTime;  // +0xbc4
	int push_length;  // +0xbc8
	CDOTA_Modifier_ForceStaff();
	virtual bool IsPurgable();
	virtual int GetAttributes();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual bool IsMotionController();
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_ForceStaff();

	// vtable[14] IsPurgable
	// vtable[7] GetAttributes
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[21] IsMotionController
	// vtable[65] DeclareFunctions
	// sizeof = 3024
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_ForceStaff::~CDOTA_Item_Recipe_ForceStaff  (line 26, @0x0000000002da1cc0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_ForceStaff::~CDOTA_Item_Recipe_ForceStaff(CDOTA_Item_Recipe_ForceStaff *const this)
{
  this->_vptr_IHandleEntity = &off_46E33F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_ForceStaff::~CDOTA_Item_Recipe_ForceStaff  (line 26, @0x0000000002da1ce0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_ForceStaff
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_ForceStaff::~CDOTA_Item_Recipe_ForceStaff(CDOTA_Item_Recipe_ForceStaff *const this)
{
  this->_vptr_IHandleEntity = &off_46E33F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_ForceStaff::Schema_DynamicBinding  (line 28, @0x0000000002d9eee0, libserver.so)
// globals: CDOTA_Item_Recipe_ForceStaff::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_ForceStaff::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_ForceStaff *const this)
{
  return CDOTA_Item_Recipe_ForceStaff::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d9eef0, libserver.so)
// globals: CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d9ef00, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_ForceStaff>
void __fastcall CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d9ef20, libserver.so)
void __fastcall CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d9ef40, libserver.so)
bool __fastcall CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d9ef50, libserver.so)
// globals: CDOTA_Item_Recipe_ForceStaff::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_ForceStaff::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002da0630, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002da15e0, libserver.so)  // inlines: CDOTA_Item_Recipe_ForceStaff, Construct<CDOTA_Item_Recipe_ForceStaff>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46E33F0;
  }
  return p;
}


// CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002da3c20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002da3c40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_ForceStaff::GetEntityClassInternal  (line 28, @0x0000000002da7cb0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "item_recipe_force_staff", "CDOTA_Item_Recipe_ForceStaff"
// globals: `guard variable for'CDOTA_Item_Recipe_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClass, CDOTA_Item_Recipe_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClass, __dso_handle, CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_ForceStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClassInfo, CDOTA_Item_Recipe_ForceStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_ForceStaff::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClass);
    CDOTA_Item_Recipe_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClass._vptr_CEntityClass = off_46E3370;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_ForceStaffClass != 0 )
    return &CDOTA_Item_Recipe_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClass;
  if ( `guard variable for'CDOTA_Item_Recipe_ForceStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_ForceStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_ForceStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClassInfo,
      "CDOTA_Item_Recipe_ForceStaff",
      "item_recipe_force_staff",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_ForceStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClassInfo);
  }
  CDOTA_Item_Recipe_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClass.m_pClassInfo = &CDOTA_Item_Recipe_ForceStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClassInfo;
  CDOTA_Item_Recipe_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClass.m_pBaseClassInfo = CDOTA_Item_Recipe_ForceStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_ForceStaffClass = &CDOTA_Item_Recipe_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClass;
  CDOTA_Item_Recipe_ForceStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClassInfo.m_pClass = &CDOTA_Item_Recipe_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClass;
  CDOTA_Item_Recipe_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_ForceStaffClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ForceStaffClass;
}


// CDOTA_Item_ForceStaff::~CDOTA_Item_ForceStaff  (line 37, @0x0000000002da1d10, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_ForceStaff::~CDOTA_Item_ForceStaff(CDOTA_Item_ForceStaff *const this)
{
  this->_vptr_IHandleEntity = &off_46E3FF0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_ForceStaff::~CDOTA_Item_ForceStaff  (line 37, @0x0000000002da1d30, libserver.so)  // inlines: ~CDOTA_Item_ForceStaff
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_ForceStaff::~CDOTA_Item_ForceStaff(CDOTA_Item_ForceStaff *const this)
{
  this->_vptr_IHandleEntity = &off_46E3FF0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_ForceStaff::Schema_DynamicBinding  (line 39, @0x0000000002d9ef60, libserver.so)
// globals: CDOTA_Item_ForceStaff::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_ForceStaff::Schema_DynamicBinding(
        const CDOTA_Item_ForceStaff *const this)
{
  return CDOTA_Item_ForceStaff::s_pSchemaBinding;
}


// CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002d9ef70, libserver.so)
// globals: CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_ForceStaff::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002d9ef80, libserver.so)  // inlines: Destruct<CDOTA_Item_ForceStaff>
void __fastcall CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_ForceStaff::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002d9efa0, libserver.so)
void __fastcall CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_ForceStaff::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002d9efc0, libserver.so)
bool __fastcall CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_ForceStaff::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002d9efd0, libserver.so)
// globals: CDOTA_Item_ForceStaff::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_ForceStaff::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_ForceStaff::s_pSchemaBinding;
}


// CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002da0670, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_ForceStaff::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002da1610, libserver.so)  // inlines: CDOTA_Item_ForceStaff, Construct<CDOTA_Item_ForceStaff>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_ForceStaff::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46E3FF0;
  }
  return p;
}


// CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002da3c70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_ForceStaff::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002da3c90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_ForceStaff::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_ForceStaff::GetEntityClassInternal  (line 39, @0x0000000002da7e00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "item_force_staff", "CDOTA_Item_ForceStaff"
// globals: `guard variable for'CDOTA_Item_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceStaffClass, CDOTA_Item_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceStaffClass, __dso_handle, CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_ForceStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ForceStaffClassInfo, CDOTA_Item_ForceStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ForceStaffClassInfo
CEntityClass *__cdecl CDOTA_Item_ForceStaff::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceStaffClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceStaffClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceStaffClass);
    CDOTA_Item_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceStaffClass._vptr_CEntityClass = off_46E3F70;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceStaffClass);
    __cxa_atexit(
      CDOTA_Item_ForceStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceStaffClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_ForceStaffClass != 0 )
    return &CDOTA_Item_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceStaffClass;
  if ( `guard variable for'CDOTA_Item_ForceStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ForceStaffClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_ForceStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ForceStaffClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_ForceStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ForceStaffClassInfo,
      "CDOTA_Item_ForceStaff",
      "item_force_staff",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_ForceStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ForceStaffClassInfo);
  }
  CDOTA_Item_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceStaffClass.m_pClassInfo = &CDOTA_Item_ForceStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ForceStaffClassInfo;
  CDOTA_Item_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceStaffClass.m_pBaseClassInfo = CDOTA_Item_ForceStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ForceStaffClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_ForceStaffClass = &CDOTA_Item_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceStaffClass;
  CDOTA_Item_ForceStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ForceStaffClassInfo.m_pClass = &CDOTA_Item_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceStaffClass;
  CDOTA_Item_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceStaffClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_ForceStaffClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_ForceStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceStaffClass;
}


// CDOTA_Item_ForceStaff::GetIntrinsicModifierName  (line 43, @0x0000000002d9efe0, libserver.so)
// strings: "modifier_item_forcestaff"
const char *__fastcall CDOTA_Item_ForceStaff::GetIntrinsicModifierName(CDOTA_Item_ForceStaff *const this)
{
  return "modifier_item_forcestaff";
}


// CDOTA_Item_ForceStaff::YouForgotToImplementOrDeclareServerClass  (line 49, @0x0000000002d940c0, libserver.so)
int __fastcall CDOTA_Item_ForceStaff::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_ForceStaff *const this)
{
  return 0;
}


// CDOTA_Item_ForceStaff::GetServerClass  (line 49, @0x0000000002d97b50, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_ForceStaff::GetServerClass(CDOTA_Item_ForceStaff *const this)
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


// CDOTA_Item_ForceStaff::OnSpellStart  (line 56, @0x0000000002d957f0, libserver.so)  // inlines: InState, IsInvulnerable, ToDOTABaseNPC, entindex
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTA_BaseNPC::PrimeResumePreviousMovement, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, CEntityInstance::GetEntityIndex, CreateUnitEvent, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// strings: "modifier_gyrocopter_homing_missile", "modifier_faceless_void_chronosphere_freeze", "modifier_enigma_black_hole_pull", "modifier_legion_commander_duel", "modifier_disruptor_kinetic_field", "modifier_item_forcestaff_active" (7 total)
void __fastcall CDOTA_Item_ForceStaff::OnSpellStart(CDOTA_Item_ForceStaff *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  __int64 v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  CEntityIndex v7; // eax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0
      && ((v4 & 0x200) == 0
       || v3 == CDOTABaseAbility::GetCaster(this)
       || CDOTA_BaseNPC::FindModifierByName(v3, "modifier_gyrocopter_homing_missile", 0) != 0)
      && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1)
      && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_faceless_void_chronosphere_freeze", 0) == 0
      && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_enigma_black_hole_pull", 0) == 0
      && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_legion_commander_duel", 0) == 0
      && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_disruptor_kinetic_field", 0) == 0 )
    {
      if ( v3 == CDOTABaseAbility::GetCaster(this) )
        CDOTA_BaseNPC::PrimeResumePreviousMovement(v3);
      KeyValues::KeyValues(&kv, "modifier_item_forcestaff_active");
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_item_forcestaff_active", &kv, 0);
      DOTA_EmitSound(8, "DOTA_Item.ForceStaff.Activate", v3);
      v6 = CDOTABaseAbility::GetCaster(this);
      v7.m_Data = CEntityInstance::GetEntityIndex(v6).m_Data;
      CreateUnitEvent(v7, 0, 7, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_GENERIC_ITEM_USAGE);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Item_ForceStaff::CastFilterResult  (line 86, @0x0000000002d95700, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::CastFilterResult, CDOTABaseAbility::GetCaster, CDOTA_PlayerResource::IsDisableHelpSetForPlayerID
// strings: "modifier_gyrocopter_homing_missile"
int __fastcall CDOTA_Item_ForceStaff::CastFilterResult(CDOTA_Item_ForceStaff *const this, CDOTA_BaseNPC *pTarget)
{
  CDOTA_Buff *ModifierByName; // rdx
  int result; // eax
  unsigned __int8 m_Value; // bl
  unsigned __int8 v7; // r13
  CDOTA_BaseNPC *Caster; // rax
  bool IsDisableHelpSetForPlayerID; // dl

  ModifierByName = CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_gyrocopter_homing_missile", 0);
  result = 0;
  if ( ModifierByName == 0 )
  {
    result = CDOTABaseAbility::CastFilterResult(this, pTarget);
    if ( result == 0 )
    {
      if ( (pTarget->m_iUnitType & 1) == 0
        || (v7 = pTarget->m_iTeamNum.m_Value) != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
        || (Caster = CDOTABaseAbility::GetCaster(this),
            IsDisableHelpSetForPlayerID = CDOTA_PlayerResource::IsDisableHelpSetForPlayerID(
                                            g_pDOTAPlayerResource,
                                            pTarget->m_nControllingPlayerID,
                                            Caster->m_nControllingPlayerID),
            result = 25,
            !IsDisableHelpSetForPlayerID) )
      {
        if ( pTarget == CDOTABaseAbility::GetCaster(this) || (pTarget->m_nUnitState64.m_Value & 0x200) == 0 )
        {
          return 0;
        }
        else
        {
          m_Value = pTarget->m_iTeamNum.m_Value;
          return (m_Value != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value) + 16;
        }
      }
    }
  }
  return result;
}


// CDOTA_Modifier_Item_ForceStaff::~CDOTA_Modifier_Item_ForceStaff  (line 125, @0x0000000002da0e70, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_ForceStaff::~CDOTA_Modifier_Item_ForceStaff(
        CDOTA_Modifier_Item_ForceStaff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_ForceStaff::~CDOTA_Modifier_Item_ForceStaff  (line 125, @0x0000000002da0e90, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_ForceStaff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_ForceStaff::~CDOTA_Modifier_Item_ForceStaff(
        CDOTA_Modifier_Item_ForceStaff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_ForceStaff::DeclareFunctions  (line 143, @0x0000000002d940d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_ForceStaff::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Item_ForceStaff::GetModifierBonusStats_Intellect(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_ForceStaff::DeclareFunctions(CDOTA_Modifier_Item_ForceStaff *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_ForceStaff::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_ForceStaff::GetModifierBonusStats_Intellect;
}


// CDOTA_Modifier_Item_ForceStaff::GetModifierConstantHealthRegen  (line 149, @0x0000000002d94110, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_ForceStaff::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_ForceStaff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_ForceStaff::GetModifierBonusStats_Intellect  (line 154, @0x0000000002d94130, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_ForceStaff::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_ForceStaff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_ForceStaff::OnCreated  (line 159, @0x0000000002d9c6e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_health_regen", "bonus_intellect"
void __fastcall CDOTA_Modifier_Item_ForceStaff::OnCreated(CDOTA_Modifier_Item_ForceStaff *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_health_regen", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_intellect = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_intellect", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_health_regen = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_intellect = 0;
}


// CDOTA_Modifier_ForceStaff::~CDOTA_Modifier_ForceStaff  (line 169, @0x0000000002da11e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ForceStaff::~CDOTA_Modifier_ForceStaff(CDOTA_Modifier_ForceStaff *const this)
{
  this->_vptr_CDOTA_Buff = &off_46E4ED0;
  this->_vptr_CHorizontalMotionController = &off_46E51C0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ForceStaff::~CDOTA_Modifier_ForceStaff  (line 169, @0x0000000002da1210, libserver.so)  // inlines: ~CDOTA_Modifier_ForceStaff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ForceStaff::~CDOTA_Modifier_ForceStaff(CDOTA_Modifier_ForceStaff *const this)
{
  this->_vptr_CDOTA_Buff = &off_46E4ED0;
  this->_vptr_CHorizontalMotionController = &off_46E51C0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ForceStaff::IsPurgable  (line 178, @0x0000000002d9eff0, libserver.so)
bool __fastcall CDOTA_Modifier_ForceStaff::IsPurgable(CDOTA_Modifier_ForceStaff *const this)
{
  return 0;
}


// CDOTA_Modifier_ForceStaff::GetAttributes  (line 180, @0x0000000002da2800, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_ForceStaff::GetAttributes(CDOTA_Modifier_ForceStaff *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_ForceStaff::IsHorizontalMotionValidToApply  (line 186, @0x0000000002d9f000, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_ForceStaff::IsHorizontalMotionValidToApply(CDOTA_Modifier_ForceStaff *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_ForceStaff::GetEffectName  (line 188, @0x0000000002d9f030, libserver.so)
// strings: "particles/items_fx/force_staff.vpcf"
const char *__fastcall CDOTA_Modifier_ForceStaff::GetEffectName(CDOTA_Modifier_ForceStaff *const this)
{
  return "particles/items_fx/force_staff.vpcf";
}


// CDOTA_Modifier_ForceStaff::GetStatusEffectName  (line 189, @0x0000000002d9f040, libserver.so)
// strings: "particles/status_fx/status_effect_forcestaff.vpcf"
const char *__fastcall CDOTA_Modifier_ForceStaff::GetStatusEffectName(CDOTA_Modifier_ForceStaff *const this)
{
  return "particles/status_fx/status_effect_forcestaff.vpcf";
}


// CDOTA_Modifier_ForceStaff::StatusEffectPriority  (line 190, @0x0000000002d9f050, libserver.so)
int __fastcall CDOTA_Modifier_ForceStaff::StatusEffectPriority(CDOTA_Modifier_ForceStaff *const this)
{
  return 10;
}


// CDOTA_Modifier_ForceStaff::IsMotionController  (line 192, @0x0000000002d9f060, libserver.so)
bool __fastcall CDOTA_Modifier_ForceStaff::IsMotionController(CDOTA_Modifier_ForceStaff *const this)
{
  return 1;
}


// CDOTA_Modifier_ForceStaff::OnCreated  (line 213, @0x0000000002d9cbe0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, Forward, GetLevelSpecialValueFor<int>, Normalized, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CBaseEntity::EntityToWorldTransform, VectorNormalize, CDOTA_BaseNPC::RemoveGesture, CDOTA_Buff::Destroy
// strings: "push_length"
void __fastcall CDOTA_Modifier_ForceStaff::OnCreated(CDOTA_Modifier_ForceStaff *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  const matrix3x4_t *v7; // rax
  vec_t v8; // xmm1_4
  vec_t v9; // xmm2_4
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *v12; // rax
  Vector vec; // [rsp+0h] [rbp-20h] BYREF

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->push_length = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "push_length", -1, 0);
  else
    this->push_length = 0;
  Parent = CDOTA_Buff::GetParent(this);
  v5 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v5, &this->CHorizontalMotionController, 0) )
  {
    v6 = CDOTA_Buff::GetParent(this);
    v7 = CBaseEntity::EntityToWorldTransform(v6);
    v8 = v7->m_flMatVal[2][0];
    v9 = v7->m_flMatVal[1][0];
    vec.x = v7->m_flMatVal[0][0];
    vec.z = v8;
    vec.y = v9;
    VectorNormalize(&vec);
    x = vec.x;
    this->m_flEndTime = 0.40000001;
    this->m_vDirection.x = x;
    y = vec.y;
    this->m_flCurTime = 0.0;
    this->m_vDirection.y = y;
    this->m_vDirection.z = vec.z;
    v12 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveGesture(v12, 1536);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_ForceStaff::DeclareFunctions  (line 231, @0x0000000002d94150, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_ForceStaff::GetOverrideAnimation(CModifierParams const&), CDOTA_Modifier_ForceStaff::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_ForceStaff::DeclareFunctions(CDOTA_Modifier_ForceStaff *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_ForceStaff::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_ForceStaff::GetActivityTranslationModifiers;
}


// CDOTA_Modifier_ForceStaff::OnDestroy  (line 238, @0x0000000002d94f30, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController
void __fastcall CDOTA_Modifier_ForceStaff::OnDestroy(CDOTA_Modifier_ForceStaff *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
}


// CDOTA_Modifier_ForceStaff::UpdateHorizontalMotion  (line 245, @0x0000000002d94f70, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTALocomotor::IsLeashedMovementPrevented, CDOTA_Buff::GetCaster, CGridNav::DestroyTreesAroundPoint, CDOTA_Buff::Destroy, CDOTA_BaseNPC::StartGesture, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Modifier_ForceStaff::UpdateHorizontalMotion(
        CDOTA_Modifier_ForceStaff *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  __m128i x_low; // xmm3
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // r12d
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  vec_t v12; // xmm0_4
  vec_t v13; // xmm1_4
  CDOTA_BaseNPC *v14; // rax
  CDOTALocomotor *v15; // rax
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v17; // r12d
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm3_4
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  float v22; // [rsp+8h] [rbp-28h]
  float v23; // [rsp+Ch] [rbp-24h]
  float m_flHullRadius; // [rsp+Ch] [rbp-24h]
  Vector vNewLocation; // [rsp+10h] [rbp-20h] BYREF
  Vector v26; // 0:xmm0_8.8,8:xmm1_4.4

  x_low = LODWORD(this->m_vDirection.x);
  v6 = this->m_flCurTime + a3;
  v7 = a3 / this->m_flEndTime;
  this->m_flCurTime = v6;
  v8 = this->push_length * v7;
  *x_low.m128i_i32 = *x_low.m128i_i32 * v8;
  v9 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v22 = this->m_vDirection.y * v8;
  v23 = v8 * this->m_vDirection.z;
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v12 = v22 + AbsOrigin->y;
  v13 = v23 + AbsOrigin->z;
  vNewLocation.x = v9 + AbsOrigin->x;
  vNewLocation.y = v12;
  vNewLocation.z = v13;
  v14 = CDOTA_Buff::GetParent(this);
  v15 = (*(v14->_vptr_IHandleEntity + 376))(v14);
  if ( !CDOTALocomotor::IsLeashedMovementPrevented(v15, *&vNewLocation.x) )
  {
    v21 = CDOTA_Buff::GetParent(this);
    CBaseEntity::SetAbsOrigin(v21, &vNewLocation);
  }
  Caster = CDOTA_Buff::GetCaster(this);
  v17 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  m_flHullRadius = CDOTA_Buff::GetParent(this)->m_flHullRadius;
  v18 = CDOTA_Buff::GetParent(this);
  v26 = *CBaseEntity::GetAbsOrigin(v18);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, v17, v26, m_flHullRadius, v19);
  if ( this->m_flCurTime >= this->m_flEndTime )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    v20 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v20, 1602, 0.1, 0.1, 9, 0, 1.0);
  }
}


// CDOTA_Modifier_ForceStaff::OnHorizontalMotionInterrupted  (line 269, @0x0000000002d94f10, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_ForceStaff::OnHorizontalMotionInterrupted(CDOTA_Modifier_ForceStaff *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_ForceStaff::GetOverrideAnimation  (line 276, @0x0000000002d94190, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ForceStaff::GetOverrideAnimation(
        CDOTA_Modifier_ForceStaff *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_ForceStaff::GetActivityTranslationModifiers  (line 282, @0x0000000002d95520, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent
// strings: "forcestaff_enemy", "forcestaff_friendly"
ModifierVariant_t __fastcall CDOTA_Modifier_ForceStaff::GetActivityTranslationModifiers(
        CDOTA_Modifier_ForceStaff *const this,
        const CModifierParams *const params)
{
  unsigned __int8 m_Value; // r12
  ModifierVariant_t result; // 0:rax.16

  result = 2uLL;
  if ( params->nActivity == 1508 )
  {
    if ( CDOTA_Buff::GetCaster(this) != 0
      && CDOTA_Buff::GetParent(this) != 0
      && (m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value) == CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
    {
      result.m_szVal = "forcestaff_friendly";
      *&result.m_eType = 2;
    }
    else
    {
      result.m_szVal = "forcestaff_enemy";
      *&result.m_eType = 2;
    }
  }
  return result;
}


