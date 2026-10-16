// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_weapon_lesser_critical.cpp:26
class CDOTA_Item_Recipe_LesserCritical : public CDOTA_Item {
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
	CDOTA_Item_Recipe_LesserCritical(CDOTA_Item_Recipe_LesserCritical &);
	CDOTA_Item_Recipe_LesserCritical(CDOTA_Item_Recipe_LesserCritical &);
	CDOTA_Item_Recipe_LesserCritical();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_LesserCritical();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_weapon_lesser_critical.cpp:37
class CDOTA_Item_LesserCritical : public CDOTA_Item {
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
	CDOTA_Item_LesserCritical(CDOTA_Item_LesserCritical &);
	CDOTA_Item_LesserCritical(CDOTA_Item_LesserCritical &);
	CDOTA_Item_LesserCritical();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_LesserCritical();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_weapon_lesser_critical.cpp:49
class CDOTA_Modifier_Item_LesserCritical : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	int crit_chance;  // +0xbac
	int crit_multiplier;  // +0xbb0
	CDOTA_Modifier_Item_LesserCritical();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_CriticalStrike(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_LesserCritical();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_LesserCritical::~CDOTA_Item_Recipe_LesserCritical  (line 26, @0x0000000002e22ca0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_LesserCritical::~CDOTA_Item_Recipe_LesserCritical(
        CDOTA_Item_Recipe_LesserCritical *const this)
{
  this->_vptr_IHandleEntity = &off_4796090;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_LesserCritical::~CDOTA_Item_Recipe_LesserCritical  (line 26, @0x0000000002e22cc0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_LesserCritical
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_LesserCritical::~CDOTA_Item_Recipe_LesserCritical(
        CDOTA_Item_Recipe_LesserCritical *const this)
{
  this->_vptr_IHandleEntity = &off_4796090;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_LesserCritical::Schema_DynamicBinding  (line 28, @0x0000000002e21380, libserver.so)
// globals: CDOTA_Item_Recipe_LesserCritical::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_LesserCritical::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_LesserCritical *const this)
{
  return CDOTA_Item_Recipe_LesserCritical::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002e21390, libserver.so)
// globals: CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002e213a0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_LesserCritical>
void __fastcall CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002e213c0, libserver.so)
void __fastcall CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002e213e0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002e213f0, libserver.so)
// globals: CDOTA_Item_Recipe_LesserCritical::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_LesserCritical::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002e21f30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002e22830, libserver.so)  // inlines: CDOTA_Item_Recipe_LesserCritical, Construct<CDOTA_Item_Recipe_LesserCritical>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4796090;
  }
  return p;
}


// CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e23c70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e23c90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal  (line 28, @0x0000000002e29670, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "item_recipe_lesser_crit", "CDOTA_Item_Recipe_LesserCritical"
// globals: `guard variable for'CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass, CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_LesserCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClassInfo, CDOTA_Item_Recipe_LesserCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass) != 0 )
  {
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_designerName.u.m_Id = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_AllHelpers.m_Size = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_classInputs.m_Size = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_classOutputs.m_Size = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_hNetworkSerializer = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_pBaseClassInfo = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_pClassInfo = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_flags = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_nAllHelpersFlags = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_pScriptClassDesc = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_pInputs = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_nInputCount = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_pOutputs = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_nOutputCount = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_pGameClass = 0;
    CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass._vptr_CEntityClass = off_4796010;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_LesserCriticalClass != 0 )
    return &CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass;
  if ( `guard variable for'CDOTA_Item_Recipe_LesserCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_LesserCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_LesserCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClassInfo,
      "CDOTA_Item_Recipe_LesserCritical",
      "item_recipe_lesser_crit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_LesserCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClassInfo);
  }
  CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_pClassInfo = &CDOTA_Item_Recipe_LesserCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClassInfo;
  CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_pBaseClassInfo = CDOTA_Item_Recipe_LesserCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_LesserCriticalClass = &CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass;
  CDOTA_Item_Recipe_LesserCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClassInfo.m_pClass = &CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass;
  CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_LesserCriticalClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_LesserCriticalClass;
}


// CDOTA_Item_LesserCritical::~CDOTA_Item_LesserCritical  (line 37, @0x0000000002e22cf0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_LesserCritical::~CDOTA_Item_LesserCritical(CDOTA_Item_LesserCritical *const this)
{
  this->_vptr_IHandleEntity = &off_4796C90;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_LesserCritical::~CDOTA_Item_LesserCritical  (line 37, @0x0000000002e22d10, libserver.so)  // inlines: ~CDOTA_Item_LesserCritical
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_LesserCritical::~CDOTA_Item_LesserCritical(CDOTA_Item_LesserCritical *const this)
{
  this->_vptr_IHandleEntity = &off_4796C90;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_LesserCritical::Schema_DynamicBinding  (line 39, @0x0000000002e21400, libserver.so)
// globals: CDOTA_Item_LesserCritical::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_LesserCritical::Schema_DynamicBinding(
        const CDOTA_Item_LesserCritical *const this)
{
  return CDOTA_Item_LesserCritical::s_pSchemaBinding;
}


// CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002e21410, libserver.so)
// globals: CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_LesserCritical::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002e21420, libserver.so)  // inlines: Destruct<CDOTA_Item_LesserCritical>
void __fastcall CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_LesserCritical::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002e21440, libserver.so)
void __fastcall CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_LesserCritical::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002e21460, libserver.so)
bool __fastcall CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_LesserCritical::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002e21470, libserver.so)
// globals: CDOTA_Item_LesserCritical::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_LesserCritical::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_LesserCritical::s_pSchemaBinding;
}


// CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002e21f70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_LesserCritical::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002e22860, libserver.so)  // inlines: CDOTA_Item_LesserCritical, Construct<CDOTA_Item_LesserCritical>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_LesserCritical::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4796C90;
  }
  return p;
}


// CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002e23cc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_LesserCritical::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002e23ce0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_LesserCritical::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_LesserCritical::GetEntityClassInternal  (line 39, @0x0000000002e29d10, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "CDOTA_Item_LesserCritical"
// globals: `guard variable for'CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass, CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_LesserCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_LesserCriticalClassInfo, CDOTA_Item_LesserCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_LesserCriticalClassInfo
CEntityClass *__cdecl CDOTA_Item_LesserCritical::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass) != 0 )
  {
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_designerName.u.m_Id = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_AllHelpers.m_Size = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_classInputs.m_Size = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_classOutputs.m_Size = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_hNetworkSerializer = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_pBaseClassInfo = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_pClassInfo = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_flags = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_nAllHelpersFlags = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_pScriptClassDesc = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_pInputs = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_nInputCount = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_pOutputs = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_nOutputCount = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_pGameClass = 0;
    CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass._vptr_CEntityClass = off_4796C10;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass);
    __cxa_atexit(
      CDOTA_Item_LesserCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_LesserCriticalClass != 0 )
    return &CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass;
  if ( `guard variable for'CDOTA_Item_LesserCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_LesserCriticalClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_LesserCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_LesserCriticalClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_LesserCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_LesserCriticalClassInfo,
      "CDOTA_Item_LesserCritical",
      "item_lesser_crit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_LesserCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_LesserCriticalClassInfo);
  }
  CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_pClassInfo = &CDOTA_Item_LesserCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_LesserCriticalClassInfo;
  CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_pBaseClassInfo = CDOTA_Item_LesserCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_LesserCriticalClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_LesserCriticalClass = &CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass;
  CDOTA_Item_LesserCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_LesserCriticalClassInfo.m_pClass = &CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass;
  CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_LesserCriticalClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_LesserCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_LesserCriticalClass;
}


// CDOTA_Item_LesserCritical::GetIntrinsicModifierName  (line 41, @0x0000000002e21480, libserver.so)
// strings: "modifier_item_lesser_crit"
const char *__fastcall CDOTA_Item_LesserCritical::GetIntrinsicModifierName(CDOTA_Item_LesserCritical *const this)
{
  return "modifier_item_lesser_crit";
}


// CDOTA_Modifier_Item_LesserCritical::~CDOTA_Modifier_Item_LesserCritical  (line 49, @0x0000000002e223c0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_LesserCritical::~CDOTA_Modifier_Item_LesserCritical(
        CDOTA_Modifier_Item_LesserCritical *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_LesserCritical::~CDOTA_Modifier_Item_LesserCritical  (line 49, @0x0000000002e223e0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_LesserCritical
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_LesserCritical::~CDOTA_Modifier_Item_LesserCritical(
        CDOTA_Modifier_Item_LesserCritical *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_LesserCritical::DeclareFunctions  (line 68, @0x0000000002e18b30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_LesserCritical::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_LesserCritical::GetModifierPreAttack_CriticalStrike(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_LesserCritical::DeclareFunctions(CDOTA_Modifier_Item_LesserCritical *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_LesserCritical::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[83].__delta = 0;
  this->m_Functions[83].__pfn = CDOTA_Modifier_Item_LesserCritical::GetModifierPreAttack_CriticalStrike;
}


// CDOTA_Modifier_Item_LesserCritical::OnCreated  (line 74, @0x0000000002e1e120, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_LesserCritical::OnCreated(
        CDOTA_Modifier_Item_LesserCritical *const this,
        KeyValues *pKV)
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
    this->crit_chance = 0;
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
  this->crit_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "crit_chance", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->crit_multiplier = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "crit_multiplier", -1, 0);
    return;
  }
LABEL_7:
  this->crit_multiplier = 0;
}


// CDOTA_Modifier_Item_LesserCritical::GetModifierPreAttack_BonusDamage  (line 83, @0x0000000002e18b70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_LesserCritical::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_LesserCritical *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_LesserCritical::GetModifierPreAttack_CriticalStrike  (line 88, @0x0000000002e1a690, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_LesserCritical::GetModifierPreAttack_CriticalStrike(
        CDOTA_Modifier_Item_LesserCritical *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rax
  uint32 v7; // edx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  CEntityInstance *v11; // rcx
  int m_Id; // edx
  CDOTA_BaseNPC *Parent; // rax
  __m128i v14; // xmm0
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 <= 1
    || (m_Index_low = LOWORD(params->hattacker.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v10 = &v9[m_Index_low & 0x1FF]) == 0
    || v7 != v10->m_EHandle.m_Index
    || (v11 = v10->m_pInstance) == 0
    || BYTE3(v11[7]._vptr_IHandleEntity) == 0 )
  {
    v11 = 0;
  }
  if ( m_pInstance == 0 )
    return 1uLL;
  m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
  if ( (m_Id & 0x10) != 0 )
    return 1uLL;
  if ( (m_Id & 0x193) == 0 )
    return 1uLL;
  if ( v11 == 0 )
    return 1uLL;
  if ( HIBYTE(v11[7].m_CScriptComponent) == HIBYTE(m_pInstance[7].m_CScriptComponent) )
    return 1uLL;
  Parent = CDOTA_Buff::GetParent(this);
  if ( !RollPseudoRandomPercentage(this->crit_chance, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_LESSERCRIT, Parent) )
    return 1uLL;
  *v14.m128i_i32 = this->crit_multiplier;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v14) << 32) | 1;
  return result;
}


