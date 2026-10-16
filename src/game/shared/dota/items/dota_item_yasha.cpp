// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_yasha.cpp:28
class CDOTA_Item_Recipe_Yasha : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Yasha(CDOTA_Item_Recipe_Yasha &);
	CDOTA_Item_Recipe_Yasha(CDOTA_Item_Recipe_Yasha &);
	CDOTA_Item_Recipe_Yasha();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Yasha();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_yasha.cpp:39
class CDOTA_Item_Yasha : public CDOTA_Item {
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
	CDOTA_Item_Yasha(CDOTA_Item_Yasha &);
	CDOTA_Item_Yasha(CDOTA_Item_Yasha &);
	CDOTA_Item_Yasha();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Yasha();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_yasha.cpp:51
class CDOTA_Modifier_Item_Yasha : public CDOTA_Buff_Item {
public:

private:

	int bonus_agility;  // +0xba8
	int bonus_attack_speed;  // +0xbac
	int movement_speed_percent_bonus;  // +0xbb0
	CDOTA_Modifier_Item_Yasha();
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage_Unique(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Yasha();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Yasha::~CDOTA_Item_Recipe_Yasha  (line 28, @0x0000000002e22e30, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Yasha::~CDOTA_Item_Recipe_Yasha(CDOTA_Item_Recipe_Yasha *const this)
{
  this->_vptr_IHandleEntity = &off_479AF50;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Yasha::~CDOTA_Item_Recipe_Yasha  (line 28, @0x0000000002e22e50, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Yasha
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Yasha::~CDOTA_Item_Recipe_Yasha(CDOTA_Item_Recipe_Yasha *const this)
{
  this->_vptr_IHandleEntity = &off_479AF50;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Yasha::Schema_DynamicBinding  (line 30, @0x0000000002e21650, libserver.so)
// globals: CDOTA_Item_Recipe_Yasha::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Yasha::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Yasha *const this)
{
  return CDOTA_Item_Recipe_Yasha::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002e21660, libserver.so)
// globals: CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002e21670, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Yasha>
void __fastcall CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002e21690, libserver.so)
void __fastcall CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002e216b0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002e216c0, libserver.so)
// globals: CDOTA_Item_Recipe_Yasha::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Yasha::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002e22070, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002e22920, libserver.so)  // inlines: CDOTA_Item_Recipe_Yasha, Construct<CDOTA_Item_Recipe_Yasha>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_479AF50;
  }
  return p;
}


// CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002e23e00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002e23e20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Yasha::GetEntityClassInternal  (line 30, @0x0000000002e288f0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "item_recipe_yasha", "CDOTA_Item_Recipe_Yasha"
// globals: `guard variable for'CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass, CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Yasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_YashaClassInfo, CDOTA_Item_Recipe_Yasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_YashaClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Yasha::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass) != 0 )
  {
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_designerName.u.m_Id = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_AllHelpers.m_Size = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_classInputs.m_Size = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_classOutputs.m_Size = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_hNetworkSerializer = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_pBaseClassInfo = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_pClassInfo = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_flags = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_nAllHelpersFlags = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_pScriptClassDesc = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_pInputs = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_nInputCount = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_pOutputs = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_nOutputCount = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_pGameClass = 0;
    CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass._vptr_CEntityClass = off_479AED0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_YashaClass != 0 )
    return &CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Yasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_YashaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Yasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_YashaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Yasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_YashaClassInfo,
      "CDOTA_Item_Recipe_Yasha",
      "item_recipe_yasha",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Yasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_YashaClassInfo);
  }
  CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_pClassInfo = &CDOTA_Item_Recipe_Yasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_YashaClassInfo;
  CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Yasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_YashaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_YashaClass = &CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass;
  CDOTA_Item_Recipe_Yasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_YashaClassInfo.m_pClass = &CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass;
  CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_YashaClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_YashaClass;
}


// CDOTA_Item_Yasha::~CDOTA_Item_Yasha  (line 39, @0x0000000002e22e80, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Yasha::~CDOTA_Item_Yasha(CDOTA_Item_Yasha *const this)
{
  this->_vptr_IHandleEntity = &off_479BB50;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Yasha::~CDOTA_Item_Yasha  (line 39, @0x0000000002e22ea0, libserver.so)  // inlines: ~CDOTA_Item_Yasha
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Yasha::~CDOTA_Item_Yasha(CDOTA_Item_Yasha *const this)
{
  this->_vptr_IHandleEntity = &off_479BB50;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Yasha::Schema_DynamicBinding  (line 41, @0x0000000002e216d0, libserver.so)
// globals: CDOTA_Item_Yasha::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Yasha::Schema_DynamicBinding(const CDOTA_Item_Yasha *const this)
{
  return CDOTA_Item_Yasha::s_pSchemaBinding;
}


// CDOTA_Item_Yasha::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002e216e0, libserver.so)
// globals: CDOTA_Item_Yasha::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Yasha::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Yasha::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Yasha::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Yasha::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002e216f0, libserver.so)  // inlines: Destruct<CDOTA_Item_Yasha>
void __fastcall CDOTA_Item_Yasha::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Yasha::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Yasha::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002e21710, libserver.so)
void __fastcall CDOTA_Item_Yasha::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Yasha::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Yasha::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002e21730, libserver.so)
bool __fastcall CDOTA_Item_Yasha::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Yasha::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Yasha::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002e21740, libserver.so)
// globals: CDOTA_Item_Yasha::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Yasha::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Yasha::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Yasha::s_pSchemaBinding;
}


// CDOTA_Item_Yasha::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002e220b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Yasha::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Yasha::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Yasha::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002e22950, libserver.so)  // inlines: CDOTA_Item_Yasha, Construct<CDOTA_Item_Yasha>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Yasha::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Yasha::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_479BB50;
  }
  return p;
}


// CDOTA_Item_Yasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002e23e50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Yasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Yasha::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Yasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002e23e70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Yasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Yasha::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Yasha::GetEntityClassInternal  (line 41, @0x0000000002e285a0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "CDOTA_Item_Yasha"
// globals: `guard variable for'CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass, CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Item_Yasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Yasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_YashaClassInfo, CDOTA_Item_Yasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_YashaClassInfo
CEntityClass *__cdecl CDOTA_Item_Yasha::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass) != 0 )
  {
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_designerName.u.m_Id = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_AllHelpers.m_Size = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_classInputs.m_Size = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_classOutputs.m_Size = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_hNetworkSerializer = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_pBaseClassInfo = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_pClassInfo = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_flags = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_nAllHelpersFlags = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_pScriptClassDesc = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_pInputs = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_nInputCount = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_pOutputs = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_nOutputCount = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_pGameClass = 0;
    CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass._vptr_CEntityClass = off_479BAD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass);
    __cxa_atexit(
      CDOTA_Item_Yasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_YashaClass != 0 )
    return &CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass;
  if ( `guard variable for'CDOTA_Item_Yasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_YashaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Yasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_YashaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Yasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_YashaClassInfo,
      "CDOTA_Item_Yasha",
      "item_yasha",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Yasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_YashaClassInfo);
  }
  CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_pClassInfo = &CDOTA_Item_Yasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_YashaClassInfo;
  CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_pBaseClassInfo = CDOTA_Item_Yasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_YashaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_YashaClass = &CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass;
  CDOTA_Item_Yasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_YashaClassInfo.m_pClass = &CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass;
  CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_YashaClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Yasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_YashaClass;
}


// CDOTA_Item_Yasha::GetIntrinsicModifierName  (line 43, @0x0000000002e21750, libserver.so)
// strings: "modifier_item_yasha"
const char *__fastcall CDOTA_Item_Yasha::GetIntrinsicModifierName(CDOTA_Item_Yasha *const this)
{
  return "modifier_item_yasha";
}


// CDOTA_Modifier_Item_Yasha::~CDOTA_Modifier_Item_Yasha  (line 51, @0x0000000002e222d0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Yasha::~CDOTA_Modifier_Item_Yasha(CDOTA_Modifier_Item_Yasha *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Yasha::~CDOTA_Modifier_Item_Yasha  (line 51, @0x0000000002e222f0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Yasha
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Yasha::~CDOTA_Modifier_Item_Yasha(CDOTA_Modifier_Item_Yasha *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Yasha::DeclareFunctions  (line 72, @0x0000000002e18d00, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Yasha::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_Yasha::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Item_Yasha::GetModifierMoveSpeedBonus_Percentage_Unique(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Yasha::DeclareFunctions(CDOTA_Modifier_Item_Yasha *const this)
{
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_Yasha::GetModifierBonusStats_Agility;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_Yasha::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[14].__pfn = CDOTA_Modifier_Item_Yasha::GetModifierMoveSpeedBonus_Percentage_Unique;
  this->m_Functions[14].__delta = 0;
}


// CDOTA_Modifier_Item_Yasha::OnCreated  (line 79, @0x0000000002e1e1f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_agility", "movement_speed_percent_bonus"
void __fastcall CDOTA_Modifier_Item_Yasha::OnCreated(CDOTA_Modifier_Item_Yasha *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_agility = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_agility", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_attack_speed = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_agility = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_attack_speed", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->movement_speed_percent_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                           v5,
                                           "movement_speed_percent_bonus",
                                           -1,
                                           0);
    return;
  }
LABEL_7:
  this->movement_speed_percent_bonus = 0;
}


// CDOTA_Modifier_Item_Yasha::GetModifierBonusStats_Agility  (line 86, @0x0000000002e18d60, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Yasha::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_Yasha *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agility;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Yasha::GetModifierAttackSpeedBonus_Constant  (line 91, @0x0000000002e18d80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Yasha::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_Yasha *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Yasha::GetModifierMoveSpeedBonus_Percentage_Unique  (line 96, @0x0000000002e18da0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Yasha::GetModifierMoveSpeedBonus_Percentage_Unique(
        CDOTA_Modifier_Item_Yasha *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movement_speed_percent_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


