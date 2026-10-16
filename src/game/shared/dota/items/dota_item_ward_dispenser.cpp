// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_ward_dispenser.cpp:41
class CDOTA_Item_Recipe_Ward_Dispenser : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Ward_Dispenser(CDOTA_Item_Recipe_Ward_Dispenser &);
	CDOTA_Item_Recipe_Ward_Dispenser(CDOTA_Item_Recipe_Ward_Dispenser &);
	CDOTA_Item_Recipe_Ward_Dispenser();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Ward_Dispenser();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_ward_dispenser.cpp:55
class CDOTA_Item_Ward_Dispenser : public CDOTA_Item {
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
	CDOTA_Item_Ward_Dispenser(CDOTA_Item_Ward_Dispenser &);
	CDOTA_Item_Ward_Dispenser(CDOTA_Item_Ward_Dispenser &);
	CDOTA_Item_Ward_Dispenser();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(const Vector &);
	virtual bool ResetToggleOnRespawn();
	virtual bool ShowSecondaryCharges();
	virtual bool AlwaysDisplayCharges();
	virtual bool IsCosmetic(CBaseEntity *);
	virtual int GetSellPrice();
	virtual int GetCost();
	virtual int GetAllowedTargetBehavior();
	virtual void IncomingCombineFrom(CDOTA_Item *);
	virtual void DuplicateState(CDOTA_Item *);
	virtual bool CausesAutoattack();
	virtual ~CDOTA_Item_Ward_Dispenser();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// vtable[258] CastFilterResult
	// vtable[259] GetCustomCastError
	// vtable[281] ResetToggleOnRespawn
	// vtable[364] ShowSecondaryCharges
	// vtable[365] AlwaysDisplayCharges
	// vtable[219] IsCosmetic
	// vtable[360] GetSellPrice
	// vtable[359] GetCost
	// vtable[255] GetAllowedTargetBehavior
	// vtable[361] IncomingCombineFrom
	// vtable[343] DuplicateState
	// vtable[222] CausesAutoattack
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_ward_dispenser.cpp:178
class C_CDOTA_Item_Ward_Dispenser_MapInstall {
	C_CDOTA_Item_Ward_Dispenser_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_ward_dispenser.cpp:493
class CDOTA_Modifier_Item_Ward_Dispenser : public CDOTA_Buff_Item {
public:

private:

	int bonus_health;  // +0xba8
	CDOTA_Modifier_Item_Ward_Dispenser();
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Ward_Dispenser();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_ward_dispenser.cpp:535
class CDOTA_Modifier_Ward_Delay : public CDOTA_Buff {
public:

	CDOTA_Modifier_Ward_Delay();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetFixedVision(const CModifierParams &);
	virtual ~CDOTA_Modifier_Ward_Delay();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Ward_Dispenser::~CDOTA_Item_Recipe_Ward_Dispenser  (line 41, @0x0000000002e22ac0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Ward_Dispenser::~CDOTA_Item_Recipe_Ward_Dispenser(
        CDOTA_Item_Recipe_Ward_Dispenser *const this)
{
  this->_vptr_IHandleEntity = &off_478CA50;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Ward_Dispenser::~CDOTA_Item_Recipe_Ward_Dispenser  (line 41, @0x0000000002e22ae0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Ward_Dispenser
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Ward_Dispenser::~CDOTA_Item_Recipe_Ward_Dispenser(
        CDOTA_Item_Recipe_Ward_Dispenser *const this)
{
  this->_vptr_IHandleEntity = &off_478CA50;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Ward_Dispenser::Schema_DynamicBinding  (line 43, @0x0000000002e20ef0, libserver.so)
// globals: CDOTA_Item_Recipe_Ward_Dispenser::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Ward_Dispenser::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Ward_Dispenser *const this)
{
  return CDOTA_Item_Recipe_Ward_Dispenser::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 43, @0x0000000002e20f00, libserver.so)
// globals: CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::DestructInstance  (line 43, @0x0000000002e20f10, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Ward_Dispenser>
void __fastcall CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::FreeInstance  (line 43, @0x0000000002e20f30, libserver.so)
void __fastcall CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::CanAllocate  (line 43, @0x0000000002e20f50, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 43, @0x0000000002e20f60, libserver.so)
// globals: CDOTA_Item_Recipe_Ward_Dispenser::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Ward_Dispenser::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::AllocateInstance  (line 43, @0x0000000002e21db0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::ConstructInstance  (line 43, @0x0000000002e22710, libserver.so)  // inlines: CDOTA_Item_Recipe_Ward_Dispenser, Construct<CDOTA_Item_Recipe_Ward_Dispenser>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_478CA50;
  }
  return p;
}


// CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002e23a90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002e23ab0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal  (line 43, @0x0000000002e27bb0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "item_recipe_ward_dispenser", "CDOTA_Item_Recipe_Ward_Dispenser"
// globals: `guard variable for'CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass, CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClassInfo, CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass) != 0 )
  {
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_designerName.u.m_Id = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_AllHelpers.m_Size = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_classInputs.m_Size = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_classOutputs.m_Size = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_hNetworkSerializer = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_pBaseClassInfo = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_pClassInfo = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_flags = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_nAllHelpersFlags = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_pScriptClassDesc = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_pInputs = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_nInputCount = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_pOutputs = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_nOutputCount = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_pGameClass = 0;
    CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass._vptr_CEntityClass = off_478C9D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Ward_DispenserClass != 0 )
    return &CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClassInfo,
      "CDOTA_Item_Recipe_Ward_Dispenser",
      "item_recipe_ward_dispenser",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClassInfo);
  }
  CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_pClassInfo = &CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClassInfo;
  CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Ward_DispenserClass = &CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass;
  CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClassInfo.m_pClass = &CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass;
  CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Ward_DispenserClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ward_DispenserClass;
}


// CDOTA_Item_Ward_Dispenser::~CDOTA_Item_Ward_Dispenser  (line 55, @0x0000000002e22b10, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Ward_Dispenser::~CDOTA_Item_Ward_Dispenser(CDOTA_Item_Ward_Dispenser *const this)
{
  this->_vptr_IHandleEntity = &off_478D650;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Ward_Dispenser::~CDOTA_Item_Ward_Dispenser  (line 55, @0x0000000002e22b30, libserver.so)  // inlines: ~CDOTA_Item_Ward_Dispenser
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Ward_Dispenser::~CDOTA_Item_Ward_Dispenser(CDOTA_Item_Ward_Dispenser *const this)
{
  this->_vptr_IHandleEntity = &off_478D650;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Ward_Dispenser::Schema_DynamicBinding  (line 57, @0x0000000002e20f70, libserver.so)
// globals: CDOTA_Item_Ward_Dispenser::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Ward_Dispenser::Schema_DynamicBinding(
        const CDOTA_Item_Ward_Dispenser *const this)
{
  return CDOTA_Item_Ward_Dispenser::s_pSchemaBinding;
}


// CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 57, @0x0000000002e20f80, libserver.so)
// globals: CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::DestructInstance  (line 57, @0x0000000002e20f90, libserver.so)  // inlines: Destruct<CDOTA_Item_Ward_Dispenser>
void __fastcall CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::FreeInstance  (line 57, @0x0000000002e20fb0, libserver.so)
void __fastcall CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::CanAllocate  (line 57, @0x0000000002e20fd0, libserver.so)
bool __fastcall CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 57, @0x0000000002e20fe0, libserver.so)
// globals: CDOTA_Item_Ward_Dispenser::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Ward_Dispenser::s_pSchemaBinding;
}


// CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::AllocateInstance  (line 57, @0x0000000002e21df0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::ConstructInstance  (line 57, @0x0000000002e22740, libserver.so)  // inlines: CDOTA_Item_Ward_Dispenser, Construct<CDOTA_Item_Ward_Dispenser>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_478D650;
  }
  return p;
}


// CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 57, @0x0000000002e23ae0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 57, @0x0000000002e23b00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Ward_Dispenser::GetEntityClassInternal  (line 57, @0x0000000002e2a3b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "CDOTA_Item_Ward_Dispenser"
// globals: `guard variable for'CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass, CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Ward_Dispenser::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ward_DispenserClassInfo, CDOTA_Item_Ward_Dispenser::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ward_DispenserClassInfo
CEntityClass *__cdecl CDOTA_Item_Ward_Dispenser::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass) != 0 )
  {
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_designerName.u.m_Id = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_AllHelpers.m_Size = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_classInputs.m_Size = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_classOutputs.m_Size = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_hNetworkSerializer = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_pBaseClassInfo = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_pClassInfo = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_flags = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_nAllHelpersFlags = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_pScriptClassDesc = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_pInputs = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_nInputCount = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_pOutputs = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_nOutputCount = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_pGameClass = 0;
    CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass._vptr_CEntityClass = off_478D5D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass);
    __cxa_atexit(
      CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Ward_DispenserClass != 0 )
    return &CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass;
  if ( `guard variable for'CDOTA_Item_Ward_Dispenser::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ward_DispenserClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Ward_Dispenser::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ward_DispenserClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Ward_Dispenser::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ward_DispenserClassInfo,
      "CDOTA_Item_Ward_Dispenser",
      "item_ward_dispenser",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Ward_Dispenser::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ward_DispenserClassInfo);
  }
  CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_pClassInfo = &CDOTA_Item_Ward_Dispenser::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ward_DispenserClassInfo;
  CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_pBaseClassInfo = CDOTA_Item_Ward_Dispenser::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ward_DispenserClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Ward_DispenserClass = &CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass;
  CDOTA_Item_Ward_Dispenser::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ward_DispenserClassInfo.m_pClass = &CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass;
  CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Ward_DispenserClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Ward_Dispenser::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ward_DispenserClass;
}


// CDOTA_Item_Ward_Dispenser::ResetToggleOnRespawn  (line 83, @0x0000000002e20ff0, libserver.so)
bool __fastcall CDOTA_Item_Ward_Dispenser::ResetToggleOnRespawn(CDOTA_Item_Ward_Dispenser *const this)
{
  return 0;
}


// CDOTA_Item_Ward_Dispenser::ShowSecondaryCharges  (line 85, @0x0000000002e21000, libserver.so)
bool __fastcall CDOTA_Item_Ward_Dispenser::ShowSecondaryCharges(CDOTA_Item_Ward_Dispenser *const this)
{
  return 1;
}


// CDOTA_Item_Ward_Dispenser::AlwaysDisplayCharges  (line 86, @0x0000000002e21010, libserver.so)
bool __fastcall CDOTA_Item_Ward_Dispenser::AlwaysDisplayCharges(CDOTA_Item_Ward_Dispenser *const this)
{
  return 1;
}


// CDOTA_Item_Ward_Dispenser::IsCosmetic  (line 88, @0x0000000002e22980, libserver.so)
// calls: CDOTABaseAbility::GetCaster
bool __fastcall CDOTA_Item_Ward_Dispenser::IsCosmetic(
        CDOTA_Item_Ward_Dispenser *const this,
        CBaseEntity *pTargetEntity)
{
  return CDOTABaseAbility::GetCaster(this) == pTargetEntity;
}


// CDOTA_Item_Ward_Dispenser::GetAllowedTargetBehavior  (line 95, @0x0000000002e21020, libserver.so)  // inlines: GetAllowedTargetBehavior
int __fastcall CDOTA_Item_Ward_Dispenser::GetAllowedTargetBehavior(CDOTA_Item_Ward_Dispenser *const this)
{
  return (*(this->_vptr_IHandleEntity + 251))(this) | 8;
}


// CDOTA_Item_Ward_Dispenser::CausesAutoattack  (line 101, @0x0000000002e21040, libserver.so)
bool __fastcall CDOTA_Item_Ward_Dispenser::CausesAutoattack(CDOTA_Item_Ward_Dispenser *const this)
{
  return 0;
}


// CDOTA_Item_Ward_Dispenser::GetSellPrice  (line 112, @0x0000000002e19010, libserver.so)
// calls: CDOTA_Item::InSellback
int __fastcall CDOTA_Item_Ward_Dispenser::GetSellPrice(CDOTA_Item_Ward_Dispenser *const this)
{
  int v2; // r12d

  v2 = (*(this->_vptr_IHandleEntity + 359))(this);
  if ( !CDOTA_Item::InSellback(this) )
    return (v2 * 0.5);
  return v2;
}


// CDOTA_Item_Ward_Dispenser::GetCost  (line 124, @0x0000000002e19050, libserver.so)  // inlines: GetCurrentCharges, GetSecondaryCharges
// calls: DOTAGameManager, CDOTAGameManager::GetAbilityDataByName, KeyValues::GetInt
// strings: "item_ward_observer", "ItemInitialCharges", "item_ward_sentry"
int __fastcall CDOTA_Item_Ward_Dispenser::GetCost(CDOTA_Item_Ward_Dispenser *const this)
{
  int m_Value; // r13d
  CDOTAGameManager *v3; // rax
  DOTAAbilityData_t *AbilityDataByName; // rax
  KeyValues *m_pKVData; // rdi
  int v6; // ebx
  int m_iItemCost; // ebx
  int v8; // r12d
  CDOTAGameManager *v9; // rax
  DOTAAbilityData_t *v10; // rax
  KeyValues *v11; // rdi
  int v12; // r12d

  m_Value = this->m_iCurrentCharges.m_Value;
  v3 = DOTAGameManager();
  AbilityDataByName = CDOTAGameManager::GetAbilityDataByName(v3, "item_ward_observer");
  if ( AbilityDataByName != 0 )
  {
    m_pKVData = AbilityDataByName->m_pKVData;
    v6 = 0;
    if ( m_pKVData != 0 )
    {
      m_iItemCost = AbilityDataByName->m_iItemCost;
      v6 = m_Value * m_iItemCost / KeyValues::GetInt(m_pKVData, "ItemInitialCharges", 0);
    }
  }
  else
  {
    v6 = 0;
  }
  v8 = this->m_iSecondaryCharges.m_Value;
  v9 = DOTAGameManager();
  v10 = CDOTAGameManager::GetAbilityDataByName(v9, "item_ward_sentry");
  if ( v10 != 0 )
  {
    v11 = v10->m_pKVData;
    if ( v11 != 0 )
    {
      v12 = v10->m_iItemCost * v8;
      v6 += v12 / KeyValues::GetInt(v11, "ItemInitialCharges", 0);
    }
  }
  return v6;
}


// CDOTA_Item_Ward_Dispenser::IncomingCombineFrom  (line 145, @0x0000000002e19110, libserver.so)  // inlines: FStrEq, GetAbilityName, GetCurrentCharges, _V_strcmp
// calls: strcmp, CDOTA_Item::SetCurrentCharges, CDOTA_Item::SetSecondaryCharges, CDOTA_Item::IncomingCombineFrom
// strings: "item_ward_observer", "item_ward_sentry"
void __fastcall CDOTA_Item_Ward_Dispenser::IncomingCombineFrom(
        CDOTA_Item_Ward_Dispenser *const this,
        CDOTA_Item *pItem)
{
  int m_Value; // r13d
  DOTAAbilityData_t *m_pAbilityData; // rax
  char *m_pszAbilityName; // r14

  if ( pItem != 0 )
  {
    m_Value = pItem->m_iCurrentCharges.m_Value;
    if ( m_Value > 0 )
    {
      m_pAbilityData = pItem->m_pAbilityData;
      if ( m_pAbilityData != 0 )
      {
        m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
        if ( m_pAbilityData->m_pszAbilityName != 0 )
        {
          if ( m_pszAbilityName == "item_ward_observer"
            || strcmp(m_pAbilityData->m_pszAbilityName, "item_ward_observer") == 0 )
          {
            CDOTA_Item::SetCurrentCharges(this, m_Value + this->m_iCurrentCharges.m_Value);
          }
          else if ( m_pszAbilityName == "item_ward_sentry" || strcmp(m_pszAbilityName, "item_ward_sentry") == 0 )
          {
            CDOTA_Item::SetSecondaryCharges(this, m_Value + this->m_iSecondaryCharges.m_Value);
          }
          else if ( m_pszAbilityName == "item_ward_dispenser" || strcmp(m_pszAbilityName, "item_ward_dispenser") == 0 )
          {
            CDOTA_Item::SetCurrentCharges(this, m_Value + this->m_iCurrentCharges.m_Value);
            CDOTA_Item::SetSecondaryCharges(
              this,
              pItem->m_iSecondaryCharges.m_Value + this->m_iSecondaryCharges.m_Value);
          }
        }
      }
    }
  }
  CDOTA_Item::IncomingCombineFrom(this, pItem);
}


// CDOTA_Item_Ward_Dispenser::DuplicateState  (line 166, @0x0000000002e19210, libserver.so)
// calls: CDOTA_Item::DuplicateState, CDOTABaseAbility::EndCooldown
void __fastcall CDOTA_Item_Ward_Dispenser::DuplicateState(
        CDOTA_Item_Ward_Dispenser *const this,
        CDOTA_Item *pSourceItem)
{
  CDOTA_Item::DuplicateState(this, pSourceItem);
  if ( pSourceItem->m_bToggleState.m_Value != this->m_bToggleState.m_Value )
  {
    CDOTABaseAbility::EndCooldown(this);
    (*(this->_vptr_IHandleEntity + 270))(this);
    (*(this->_vptr_IHandleEntity + 297))(this);
  }
}


// CDOTA_Item_Ward_Dispenser::YouForgotToImplementOrDeclareServerClass  (line 178, @0x0000000002e188d0, libserver.so)
int __fastcall CDOTA_Item_Ward_Dispenser::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_Ward_Dispenser *const this)
{
  return 0;
}


// CDOTA_Item_Ward_Dispenser::GetServerClass  (line 178, @0x0000000002e1ba00, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Ward_Dispenser::GetServerClass(CDOTA_Item_Ward_Dispenser *const this)
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


// CDOTA_Item_Ward_Dispenser::CastFilterResult  (line 195, @0x0000000002e19640, libserver.so)
// calls: CDOTABaseAbility::CastFilterResult
int __fastcall CDOTA_Item_Ward_Dispenser::CastFilterResult(
        CDOTA_Item_Ward_Dispenser *const this,
        CDOTA_BaseNPC *pTarget)
{
  int result; // eax

  result = CDOTABaseAbility::CastFilterResult(this, pTarget);
  if ( result == 0 )
  {
    if ( pTarget != 0 && pTarget->m_bIsIllusion.m_Value )
      return 10;
    else
      return 0;
  }
  return result;
}


// CDOTA_Item_Ward_Dispenser::CastFilterResult  (line 208, @0x0000000002e19270, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTABaseAbility::GetCaster, DOTA_CreateUnitByName, CBaseTrigger::IsTouching, CGameEntitySystem::FindEntityByClassname, UTIL_RemoveImmediate
// strings: "npc_dota_observer_wards", "trigger_no_wards"
int __fastcall CDOTA_Item_Ward_Dispenser::CastFilterResult(
        CDOTA_Item_Ward_Dispenser *const this,
        const Vector *const vLocation)
{
  int m_Value; // r14d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *UnitByName; // r12
  CBaseEntity *v9; // rbx
  CBaseTrigger *EntityByClassname; // rax

  if ( CDOTABaseAbility::GetCaster(this) != 0
    && ((CDOTABaseAbility::GetCaster(this)->m_iUnitType & 0x100) != 0
     || (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 2) != 0) )
  {
    return 23;
  }
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTABaseAbility::GetCaster(this);
  UnitByName = DOTA_CreateUnitByName("npc_dota_observer_wards", vLocation, 0, v7, Caster, m_Value);
  if ( UnitByName == 0 )
    return 0;
  v9 = 0;
  do
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v9, "trigger_no_wards");
    v9 = EntityByClassname;
    if ( EntityByClassname == 0 )
    {
      UTIL_RemoveImmediate(UnitByName);
      return 0;
    }
  }
  while ( !CBaseTrigger::IsTouching(EntityByClassname, UnitByName) );
  UTIL_RemoveImmediate(UnitByName);
  return 23;
}


// CDOTA_Item_Ward_Dispenser::GetCustomCastError  (line 244, @0x0000000002e18e30, libserver.so)
// calls: CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_courier_cant_use_item", "#dota_hud_error_no_wards_here"
const char *__fastcall CDOTA_Item_Ward_Dispenser::GetCustomCastError(
        CDOTA_Item_Ward_Dispenser *const this,
        const Vector *const vLocation)
{
  if ( CDOTABaseAbility::GetCaster(this) != 0
    && ((CDOTABaseAbility::GetCaster(this)->m_iUnitType & 0x100) != 0
     || (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 2) != 0) )
  {
    return "#dota_hud_error_courier_cant_use_item";
  }
  else
  {
    return "#dota_hud_error_no_wards_here";
  }
}


// CDOTA_Item_Ward_Dispenser::OnSpellStart  (line 254, @0x0000000002e1e910, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<char const*>, AddNPCKeyValuesForUnit, AddToTail, Allocate, ApplyContextKeys, Base, Bind, CDotaNPCSpawner, CDotaNPCSpawnerContext, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CEntitySpawnerContext, CEntitySpawnerContextBase, CUtlAbstractDelegate, CUtlDelegate, CUtlString, ClosurePtr, Convert<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, CopyData, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, Element, FastDelegate2, FindKeyHash, Free, Get, GetCurrentCharges, GetEHandle, GetEntityClass, GetEntryIndex, GetOwnerEntity, GetPlayerOwnerID, GetSecondaryCharges, GetSerialNumber, GetTeamNumber, Init, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, SetMementoFrom, SetValue, SetValue<CBaseEntity*>, SetValue<CEntityHandle>, SetValue<Vector>, SetValue<float>, SetValue<int>, ToDOTABaseNPCHero, UtlMakeDelegate<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, bindmemfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, memcpy, operator=, operator[], ~CDotaNPCSpawner, ~CDotaNPCSpawnerAsync, ~CDotaNPCSpawnerContext, ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase, ~CEntitySpawnerBase, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase, ~CUtlString
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, __dynamic_cast, DOTA_CreateItem, CDOTA_Item::SetCurrentCharges, CDOTA_Item::ExpireSellback, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::AddItem, UTIL_Remove, EconEntity_OnOwnerKillEaterEvent, CEntityKeyValues::CEntityKeyValues, GetClassNameForUnitName (64 total)
// strings: "item_ward_observer", "npc_dota_sentry_wards", "true_sight_range", "lifetime_sentry", "item_ward_sentry", "npc_dota_observer_wards" (9 total)
// globals: INVALID_ITEM_DEF_INDEX, FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction(CDOTA_BaseNPC *,CEntityKeyValues const*), OnSentryWardSpawn(CDOTA_BaseNPC *,CEntityKeyValues const*), CEntityKeyValuesModifyScope::sm_pAllocatorOverride, OnObserverWardSpawn(CDOTA_BaseNPC *,CEntityKeyValues const*)
void __fastcall CDOTA_Item_Ward_Dispenser::OnSpellStart(CDOTA_Item_Ward_Dispenser *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  CDOTA_Item *v4; // rax
  CDOTA_Item *v5; // r13
  CDOTA_UnitInventory *v6; // rax
  int v7; // r12d
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC_Hero *v10; // r12
  CEntityIdentity *m_pEntity; // rcx
  __int16 v12; // ax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CUtlScratchMemoryPool *v15; // rdi
  CEntityKeyValues *m_pEntityKeyValues; // r12
  bool v17; // cc
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC_Hero *v19; // rdi
  CDOTA_BaseNPC *v20; // rax
  int v21; // eax
  CDOTA_BaseNPC *v22; // rax
  int m_Value; // r13d
  CDOTA_BaseNPC *v24; // rax
  CDOTA_UnitInventory *v25; // rax
  int v26; // eax
  int v27; // r13d
  int v28; // r14d
  CDOTA_BaseNPC *v29; // rax
  CDOTA_Item *v30; // r13
  CDOTA_BaseNPC *v31; // rax
  CDOTA_UnitInventory *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  CDOTA_BaseNPC *Caster; // rax
  const char *ClassNameForUnitName; // r12
  CDOTA_BaseNPC *v36; // rax
  CDOTA_BaseNPC_Hero *v37; // r13
  CDOTA_BaseNPC *v38; // rax
  CDOTA_BaseNPC *v39; // rax
  CDOTA_BaseNPC *v40; // rax
  CDOTA_BaseNPC_Hero *v41; // rdi
  CDOTA_BaseNPC *v42; // rax
  int v43; // r12d
  int ObserverWardsPlaced; // r15d
  int Kills; // eax
  CDOTA_BaseNPC *v46; // rax
  CDOTA_UnitInventory *Inventory; // rax
  int ItemSlotInInventory; // eax
  int v49; // r12d
  int v50; // r14d
  CDOTA_BaseNPC *v51; // rax
  CDOTA_Item *Item; // r12
  CDOTA_BaseNPC *v53; // rax
  CDOTA_UnitInventory *v54; // rax
  CDOTA_Item *v55; // rax
  CDOTA_UnitInventory *v56; // rax
  CEntitySystem *v57; // rdi
  CUtlScratchMemoryPool *v58; // rax
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v60; // rax
  char v61; // al
  CEntityKeyValues *v62; // r12
  CEntitySpawnerContext<CDOTA_BaseNPC> *i; // r12
  CDOTA_BaseNPC *v64; // rax
  CDOTA_BaseNPC *v65; // rax
  CUtlScratchMemoryPool *v66; // rdi
  CEntityKeyValues *v67; // r12
  CDOTA_BaseNPC *v68; // rax
  CDOTA_BaseNPC *v69; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v71; // cx
  __int64 v72; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v73; // rdx
  int m_nEntitySpawnerDataUseCount; // ecx
  int v75; // ecx
  __int16 v76; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v79; // rax
  uint16 m_flags; // ax
  char *v81; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v82; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v83; // r12
  __int64 v84; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v85; // r12
  uint16 v86; // ax
  char *v87; // rax
  int nDeaths; // [rsp+10h] [rbp-1F0h]
  int nAssists; // [rsp+14h] [rbp-1ECh]
  float flGPMa; // [rsp+18h] [rbp-1E8h]
  __int64 flGPM; // [rsp+18h] [rbp-1E8h]
  float flXPMb; // [rsp+20h] [rbp-1E0h]
  __int64 flXPM; // [rsp+20h] [rbp-1E0h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *flXPMa; // [rsp+20h] [rbp-1E0h]
  const char *pszClassName; // [rsp+28h] [rbp-1D8h]
  int pszClassNamea; // [rsp+28h] [rbp-1D8h]
  int v97[4]; // [rsp+30h] [rbp-1D0h] BYREF
  CEntityHandle hHeroCaster; // [rsp+40h] [rbp-1C0h] BYREF
  CEntityHandle hAbility; // [rsp+50h] [rbp-1B0h] BYREF
  CBaseEntity *value; // [rsp+60h] [rbp-1A0h] BYREF
  __int64 v101; // [rsp+68h] [rbp-198h]
  __int64 v102; // [rsp+70h] [rbp-190h]
  CDotaNPCSpawnerAsync<CDOTA_BaseNPC> spawner; // [rsp+80h] [rbp-180h] BYREF
  CDotaNPCSpawnerContext ctx; // [rsp+130h] [rbp-D0h] BYREF
  unsigned __int64 v105; // [rsp+1C8h] [rbp-38h]
  Vector v106; // 0:kr00_12.12
  Vector CursorPosition; // 0:kr20_12.12
  Vector v108; // 0:kr34_12.12
  Vector v109; // 0:kr40_12.12

  v105 = __readfsqword(0x28u);
  if ( CDOTABaseAbility::GetCaster(this) != 0 && (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 0x100) != 0 )
    return;
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget == 0 )
  {
    if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
      return;
    goto LABEL_15;
  }
  v3 = __dynamic_cast(CursorTarget, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC_Hero, 0);
  if ( CDOTABaseAbility::GetCursorTarget(this) == 0 )
  {
    if ( v3 != 0 )
      goto LABEL_7;
LABEL_15:
    if ( this->m_bToggleState.m_Value )
    {
      CDOTABaseAbility::EndCooldown(this);
      m_Value = this->m_iCurrentCharges.m_Value;
      if ( m_Value <= 0 )
        goto LABEL_39;
      Caster = CDOTABaseAbility::GetCaster(this);
      if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
        EconEntity_OnOwnerKillEaterEvent(
          Caster,
          0,
          kill_eater_event_t::kKillEaterEventType_Wards_Purchased,
          1,
          INVALID_ITEM_DEF_INDEX);
      spawner.m_modifyScope.m_pKeyValues = 0;
      spawner.m_pEntityKeyValues = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
      CEntityKeyValues::CEntityKeyValues(&ctx.m_entityKeyValues);
      ctx.m_pParent = 0;
      ctx.m_pCompletionListener = 0;
      ctx.m_callback.m_Closure.m_pFunction.__pfn = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
      ctx.m_callback.m_Closure.m_pFunction.__delta = 0;
      ctx.m_callback.m_Closure.m_pthis = OnObserverWardSpawn;
      ClassNameForUnitName = GetClassNameForUnitName("npc_dota_observer_wards");
      v36 = CDOTABaseAbility::GetCaster(this);
      if ( v36 != 0 && (v36->m_iUnitType & 1) != 0 )
        v37 = v36;
      else
        v37 = 0;
      CEntityHandle::CEntityHandle(&hHeroCaster, v37);
      CEntityHandle::CEntityHandle(&hAbility, this);
      if ( CDOTA_BaseNPC_Hero::HasChangedWardsSincePrecache(v37) )
      {
        CDotaNPCSpawnerAsync<CDOTA_BaseNPC>::CDotaNPCSpawnerAsync(
          &spawner,
          "npc_dota_observer_wards",
          &ctx,
          EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_ADD_TO_ACTIVE_SPAWN_GROUP,
          ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT,
          -2,
          30.0,
          0);
        CEntitySpawnerBase<CDOTA_BaseNPC>::SetClassName(&spawner, ClassNameForUnitName);
        v38 = CDOTABaseAbility::GetCaster(this);
        value = CEntityHandle::GetHandleEntity(&v38->m_hOwnerEntity.m_Value);
        CEntityKeyValues::SetValue<CBaseEntity *>(spawner.m_pEntityKeyValues, -1104771937, &value);
        v39 = CDOTABaseAbility::GetCaster(this);
        LODWORD(value) = (*(v39->_vptr_IHandleEntity + 414))(v39);
        CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 2034954718, &value);
        CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
        value = *&CursorPosition.x;
        *&v101 = CursorPosition.z;
        CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, 1070473527, &value);
        LODWORD(value) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "lifetime_observer", -1, 0);
        CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 1499669218, &value);
        CEntityKeyValues::SetValue<CEntityHandle>(spawner.m_pEntityKeyValues, -1542362667, &hHeroCaster);
        LODWORD(value) = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "creation_delay", -1, 0);
        CEntityKeyValues::SetValue<float>(spawner.m_pEntityKeyValues, 2030258919, &value);
        CEntityKeyValues::SetValue<CEntityHandle>(spawner.m_pEntityKeyValues, -1082980166, &hAbility);
        value = 0;
        v101 = 0;
        v102 = 0;
        CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::Spawn(&spawner, 0, &value);
        CDotaNPCSpawnerAsync<CDOTA_BaseNPC>::~CDotaNPCSpawnerAsync(&spawner);
      }
      else
      {
        CDotaNPCSpawner<CDOTA_BaseNPC>::CDotaNPCSpawner(&spawner, "npc_dota_observer_wards", &ctx);
        CEntitySpawnerBase<CDOTA_BaseNPC>::SetClassName(&spawner, ClassNameForUnitName);
        v68 = CDOTABaseAbility::GetCaster(this);
        value = CEntityHandle::GetHandleEntity(&v68->m_hOwnerEntity.m_Value);
        CEntityKeyValues::SetValue<CBaseEntity *>(spawner.m_pEntityKeyValues, -1104771937, &value);
        v69 = CDOTABaseAbility::GetCaster(this);
        LODWORD(value) = (*(v69->_vptr_IHandleEntity + 414))(v69);
        CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 2034954718, &value);
        v109 = CDOTABaseAbility::GetCursorPosition(this);
        value = *&v109.x;
        *&v101 = v109.z;
        CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, 1070473527, &value);
        LODWORD(value) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "lifetime_observer", -1, 0);
        CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 1499669218, &value);
        CEntityKeyValues::SetValue<CEntityHandle>(spawner.m_pEntityKeyValues, -1542362667, &hHeroCaster);
        LODWORD(value) = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "creation_delay", -1, 0);
        CEntityKeyValues::SetValue<float>(spawner.m_pEntityKeyValues, 2030258919, &value);
        CEntityKeyValues::SetValue<CEntityHandle>(spawner.m_pEntityKeyValues, -1082980166, &hAbility);
        CEntitySpawner<CDOTA_BaseNPC>::Spawn(v97, &spawner);
        CDotaNPCSpawner<CDOTA_BaseNPC>::~CDotaNPCSpawner(&spawner);
      }
      CDOTA_Item::SetCurrentCharges(this, this->m_iCurrentCharges.m_Value - 1);
      v40 = CDOTABaseAbility::GetCaster(this);
      if ( v40 != 0 && (v40->m_iUnitType & 1) != 0 )
        v41 = v40;
      else
        v41 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v41,
        0,
        kill_eater_event_t::kKillEaterEvent_Wards_Placed,
        1,
        INVALID_ITEM_DEF_INDEX);
      v42 = CDOTABaseAbility::GetCaster(this);
      v43 = (*(v42->_vptr_IHandleEntity + 414))(v42);
      CDOTA_PlayerResource::IncrementObserverWardsPlaced(g_pDOTAPlayerResource, v43);
      ObserverWardsPlaced = CDOTA_PlayerResource::GetObserverWardsPlaced(g_pDOTAPlayerResource, v43);
      pszClassNamea = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, v43);
      flXPMb = CDOTA_PlayerResource::GetXPPerMin(g_pDOTAPlayerResource, v43);
      flGPMa = CDOTA_PlayerResource::GetGoldPerMin(g_pDOTAPlayerResource, v43);
      nAssists = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, v43);
      nDeaths = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, v43);
      Kills = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, v43);
      CDOTA_CombatLog::AddPlayerStatsEvent(
        &g_DOTACombatLog,
        v43,
        Kills,
        nDeaths,
        nAssists,
        flGPMa,
        flXPMb,
        pszClassNamea,
        ObserverWardsPlaced);
LABEL_38:
      CEntityKeyValues::~CEntityKeyValues(&ctx.m_entityKeyValues);
      m_Value = this->m_iCurrentCharges.m_Value;
LABEL_39:
      v7 = this->m_iSecondaryCharges.m_Value;
      goto LABEL_40;
    }
    v7 = this->m_iSecondaryCharges.m_Value;
    if ( v7 <= 0 )
    {
      m_Value = this->m_iCurrentCharges.m_Value;
LABEL_40:
      if ( m_Value != 0 )
      {
        if ( v7 == 0 )
        {
          v46 = CDOTABaseAbility::GetCaster(this);
          Inventory = CDOTA_BaseNPC::GetInventory(v46);
          ItemSlotInInventory = CDOTA_UnitInventory::FindItemSlotInInventory(Inventory, this, 3);
          v49 = this->m_iPlayerOwnerID.m_Value;
          v50 = ItemSlotInInventory;
          v51 = CDOTABaseAbility::GetCaster(this);
          Item = DOTA_CreateItem("item_ward_observer", v51, v49);
          CDOTA_Item::RemoveItem(this);
          CDOTA_Item::ExpireSellback(Item);
          if ( this->m_bHasMixedOwnership )
            CDOTA_Item::SetHasMixedOwnership(Item, 1);
          CDOTA_Item::SetCurrentCharges(Item, m_Value);
          v53 = CDOTABaseAbility::GetCaster(this);
          v54 = CDOTA_BaseNPC::GetInventory(v53);
          CDOTA_UnitInventory::AddItem(v54, Item, 21, v50, 0, 0);
        }
      }
      else if ( v7 != 0 )
      {
        v24 = CDOTABaseAbility::GetCaster(this);
        v25 = CDOTA_BaseNPC::GetInventory(v24);
        v26 = CDOTA_UnitInventory::FindItemSlotInInventory(v25, this, 3);
        v27 = this->m_iPlayerOwnerID.m_Value;
        v28 = v26;
        v29 = CDOTABaseAbility::GetCaster(this);
        v30 = DOTA_CreateItem("item_ward_sentry", v29, v27);
        CDOTA_Item::RemoveItem(this);
        CDOTA_Item::ExpireSellback(v30);
        if ( this->m_bHasMixedOwnership )
          CDOTA_Item::SetHasMixedOwnership(v30, 1);
        CDOTA_Item::SetCurrentCharges(v30, v7);
        v31 = CDOTABaseAbility::GetCaster(this);
        v32 = CDOTA_BaseNPC::GetInventory(v31);
        CDOTA_UnitInventory::AddItem(v32, v30, 21, v28, 0, 0);
      }
      else
      {
        CDOTA_Item::RemoveItem(this);
      }
      return;
    }
    v8 = CDOTABaseAbility::GetCaster(this);
    if ( v8 != 0 && (v8->m_iUnitType & 1) != 0 )
      EconEntity_OnOwnerKillEaterEvent(
        v8,
        0,
        kill_eater_event_t::kKillEaterEventType_Wards_Purchased,
        1,
        INVALID_ITEM_DEF_INDEX);
    spawner.m_modifyScope.m_pKeyValues = 0;
    spawner.m_pEntityKeyValues = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
    CEntityKeyValues::CEntityKeyValues(&ctx.m_entityKeyValues);
    ctx.m_pParent = 0;
    ctx.m_pCompletionListener = 0;
    ctx.m_callback.m_Closure.m_pFunction.__pfn = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
    ctx.m_callback.m_Closure.m_pFunction.__delta = 0;
    ctx.m_callback.m_Closure.m_pthis = OnSentryWardSpawn;
    pszClassName = GetClassNameForUnitName("npc_dota_sentry_wards");
    v9 = CDOTABaseAbility::GetCaster(this);
    v10 = v9;
    if ( v9 != 0 && (v9->m_iUnitType & 1) != 0 )
    {
      m_pEntity = v9->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v12 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LODWORD(spawner._vptr_CEntitySpawnerBase) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                                  | v12 & 0x7FFF;
        hHeroCaster.m_Index = spawner._vptr_CEntitySpawnerBase;
        CEntityHandle::CEntityHandle(&hAbility, this);
      }
      else
      {
        hHeroCaster.m_Index = -1;
        CEntityHandle::CEntityHandle(&hAbility, this);
      }
      if ( CDOTA_BaseNPC_Hero::HasChangedWardsSincePrecache(v10) )
      {
        CDotaNPCSpawnerAsync<CDOTA_BaseNPC>::CDotaNPCSpawnerAsync(
          &spawner,
          "npc_dota_sentry_wards",
          &ctx,
          EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_ADD_TO_ACTIVE_SPAWN_GROUP,
          ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT,
          -2,
          30.0,
          0);
        CEntitySpawnerBase<CDOTA_BaseNPC>::SetClassName(&spawner, pszClassName);
        v13 = CDOTABaseAbility::GetCaster(this);
        value = CEntityHandle::GetHandleEntity(&v13->m_hOwnerEntity.m_Value);
        CEntityKeyValues::SetValue<CBaseEntity *>(spawner.m_pEntityKeyValues, -1104771937, &value);
        v14 = CDOTABaseAbility::GetCaster(this);
        LODWORD(value) = (*(v14->_vptr_IHandleEntity + 414))(v14);
        CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 2034954718, &value);
        v106 = CDOTABaseAbility::GetCursorPosition(this);
        value = *&v106.x;
        *&v101 = v106.z;
        CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, 1070473527, &value);
        LODWORD(value) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "true_sight_range", -1, 0);
        CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 427112271, &value);
        LODWORD(value) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "lifetime_sentry", -1, 0);
        CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 1499669218, &value);
        CEntityKeyValues::SetValue<CEntityHandle>(spawner.m_pEntityKeyValues, -1542362667, &hHeroCaster);
        CEntityKeyValues::SetValue<CEntityHandle>(spawner.m_pEntityKeyValues, -1082980166, &hAbility);
        value = 0;
        v101 = 0;
        v102 = 0;
        CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::Spawn(&spawner, 0, &value);
        v15 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
        spawner._vptr_CEntitySpawnerBase = off_40FBED0;
        CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
        if ( v15 == &g_pEntitySystem->m_entitySpawnerData )
        {
          m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
          g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
          if ( m_nEntitySpawnerDataUseCount == 1 )
            CUtlScratchMemoryPool::FreeAll(v15);
        }
        if ( spawner.m_pEntityKeyValues != 0 )
        {
          CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
          m_pEntityKeyValues = spawner.m_pEntityKeyValues;
          v17 = --spawner.m_pEntityKeyValues->m_nRefCount <= 0;
          if ( v17 )
          {
            CEntityKeyValues::~CEntityKeyValues(m_pEntityKeyValues);
            operator delete(m_pEntityKeyValues);
          }
        }
        if ( spawner.m_scriptClassName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
        CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
LABEL_34:
        CDOTA_Item::SetSecondaryCharges(this, this->m_iSecondaryCharges.m_Value - 1);
        v18 = CDOTABaseAbility::GetCaster(this);
        if ( v18 != 0 && (v18->m_iUnitType & 1) != 0 )
          v19 = v18;
        else
          v19 = 0;
        EconEntity_OnOwnerKillEaterEvent(
          v19,
          0,
          kill_eater_event_t::kKillEaterEvent_Wards_Placed,
          1,
          INVALID_ITEM_DEF_INDEX);
        v20 = CDOTABaseAbility::GetCaster(this);
        v21 = (*(v20->_vptr_IHandleEntity + 414))(v20);
        CDOTA_PlayerResource::IncrementSentryWardsPlaced(g_pDOTAPlayerResource, v21);
        *&spawner._vptr_CEntitySpawnerBase = CDOTABaseAbility::GetCursorPosition(this);
        v22 = CDOTABaseAbility::GetCaster(this);
        CDOTAFogOfWarSystem::AddTempViewer(
          &g_DOTAFogOfWarSystem,
          FoWViewerType_t::FOWVIEWERTYPE_LIGHTNINGBOLT,
          v22->m_iTeamNum.m_Value,
          &spawner,
          150.0,
          12.0,
          1);
        goto LABEL_38;
      }
    }
    else
    {
      hHeroCaster.m_Index = -1;
      CEntityHandle::CEntityHandle(&hAbility, this);
    }
    spawner.m_modifyScope.m_pKeyValues = 0;
    spawner.m_modifyScope.m_pPrevAllocator = 0;
    spawner._vptr_CEntitySpawnerBase = off_40FBED0;
    CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
    spawner.m_pContext = &ctx;
    spawner._vptr_CEntitySpawnerBase = off_40FC030;
    spawner.m_scriptClassName.m_pString = 0;
    *&spawner.m_behavior = 0;
    v57 = g_pEntitySystem;
    v58 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v57->m_entitySpawnerData;
    spawner.m_pPrevAllocator = v58;
    spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v57);
    SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
    qmemcpy(spawner.m_mSpawnGroupToWorld.m_flMatVal[1], SpawnOriginOffset->m_flMatVal[1], 24);
    v60 = *&SpawnOriginOffset->m_flMatVal[2][2];
    spawner.m_pEntityKeyValues = 0;
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][2] = v60;
    spawner.m_pEntityClass = g_pEntityCDOTA_BaseNPCClass;
    if ( g_pApplication != 0 )
      v61 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
    else
      v61 = 0;
    spawner.m_bValidateKeys = v61;
    spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
    (*spawner._vptr_CEntitySpawnerBase)(&spawner);
    v62 = spawner.m_pEntityKeyValues;
    spawner._vptr_CEntitySpawnerBase = off_40FC050;
    if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    {
LABEL_73:
      AppendNPCKeyValues("npc_dota_sentry_wards", v62, 0);
      for ( i = spawner.m_pContext; i != 0; i = i->m_pParent )
        CEntityKeyValues::CopyFrom(spawner.m_pEntityKeyValues, &i->m_entityKeyValues, 0);
      CEntitySpawnerBase<CDOTA_BaseNPC>::SetClassName(&spawner, pszClassName);
      v64 = CDOTABaseAbility::GetCaster(this);
      value = CEntityHandle::GetHandleEntity(&v64->m_hOwnerEntity.m_Value);
      CEntityKeyValues::SetValue<CBaseEntity *>(spawner.m_pEntityKeyValues, -1104771937, &value);
      v65 = CDOTABaseAbility::GetCaster(this);
      LODWORD(value) = (*(v65->_vptr_IHandleEntity + 414))(v65);
      CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 2034954718, &value);
      v108 = CDOTABaseAbility::GetCursorPosition(this);
      value = *&v108.x;
      *&v101 = v108.z;
      CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, 1070473527, &value);
      LODWORD(value) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "true_sight_range", -1, 0);
      CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 427112271, &value);
      LODWORD(value) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "lifetime_sentry", -1, 0);
      CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 1499669218, &value);
      CEntityKeyValues::SetValue<CEntityHandle>(spawner.m_pEntityKeyValues, -1542362667, &hHeroCaster);
      CEntityKeyValues::SetValue<CEntityHandle>(spawner.m_pEntityKeyValues, -1082980166, &hAbility);
      CEntitySpawner<CDOTA_BaseNPC>::Spawn(v97, &spawner);
      v66 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
      spawner._vptr_CEntitySpawnerBase = off_40FBED0;
      CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
      if ( v66 == &g_pEntitySystem->m_entitySpawnerData )
      {
        v75 = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
        g_pEntitySystem->m_nEntitySpawnerDataUseCount = v75 - 1;
        if ( v75 == 1 )
          CUtlScratchMemoryPool::FreeAll(v66);
      }
      if ( spawner.m_pEntityKeyValues != 0 )
      {
        CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
        v67 = spawner.m_pEntityKeyValues;
        v17 = --spawner.m_pEntityKeyValues->m_nRefCount <= 0;
        if ( v17 )
        {
          CEntityKeyValues::~CEntityKeyValues(v67);
          operator delete(v67);
        }
      }
      if ( spawner.m_scriptClassName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
      CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
      goto LABEL_34;
    }
    m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_99:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v76 = v62->m_keyHashes.m_nCount - 1;
      m_nAllocated = v62->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&v62->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = v62->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      m_pElements[(v62->m_keyHashes.m_nCount - 1)] = -782893907;
      flXPM = v76;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v62->m_keyValues);
      if ( v62->m_keyValues.m_nAllocated != 0 )
        v79 = v62->m_keyValues.m_pElements;
      else
        v79 = 0;
      flGPM = flXPM;
      flXPMa = &v79[flXPM];
      m_flags = flXPMa->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        flXPMa->m_value.m_flags = m_flags & 0xFFFE;
      flXPMa->m_value.m_uint64 = 0;
      flXPMa->m_value.m_type = 30;
      v81 = CEntityVariantAllocator::Allocate(0x16u);
      flXPMa->m_value.m_uint64 = v81;
      strcpy(v81, "npc_dota_sentry_wards");
      flXPMa->m_value.m_flags |= 1u;
      if ( v62->m_keyValues.m_nAllocated != 0 )
        v82 = v62->m_keyValues.m_pElements;
      else
        v82 = 0;
      v82[flGPM].m_pAttributeName = 0;
      v62 = spawner.m_pEntityKeyValues;
      goto LABEL_73;
    }
    v71 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v72 = 0;
    while ( 1 )
    {
      if ( v71 != 0 )
      {
        v73 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v71 > 9 )
          v73 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v73 = 0;
      }
      if ( v73[v72] == -782893907 )
        break;
      if ( m_nCount <= ++v72 )
        goto LABEL_99;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v83 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v84 = v72;
      if ( v83[v84].m_pAttributeName != 0 )
      {
LABEL_112:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v83[v84].m_pAttributeName);
LABEL_113:
        v62 = spawner.m_pEntityKeyValues;
        goto LABEL_73;
      }
    }
    else
    {
      v84 = v72;
      v83 = 0;
      if ( *(v84 * 24 + 16) != 0 )
        goto LABEL_112;
    }
    v85 = &v83[v84];
    v86 = v85->m_value.m_flags;
    if ( (v86 & 1) != 0 )
      v85->m_value.m_flags = v86 & 0xFFFE;
    v85->m_value.m_uint64 = 0;
    v85->m_value.m_type = 30;
    v87 = CEntityVariantAllocator::Allocate(0x16u);
    v85->m_value.m_uint64 = v87;
    strcpy(v87, "npc_dota_sentry_wards");
    v85->m_value.m_flags |= 1u;
    goto LABEL_113;
  }
  if ( v3 == 0 )
    return;
LABEL_7:
  if ( v3 != CDOTABaseAbility::GetCaster(this) )
  {
    if ( (*(v3->_vptr_IHandleEntity + 390))(v3) != 0 || v3->m_bIsIllusion.m_Value )
      return;
    if ( this->m_bToggleState.m_Value )
    {
      v4 = DOTA_CreateItem("item_ward_observer", this, this->m_iPlayerOwnerID.m_Value);
      v5 = v4;
      if ( v4 == 0 )
        return;
      CDOTA_Item::SetCurrentCharges(v4, 1);
      CDOTA_Item::ExpireSellback(v5);
      v6 = CDOTA_BaseNPC::GetInventory(v3);
      if ( CDOTA_UnitInventory::AddItem(v6, v5, 1, -1, 0, 0) != DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS )
        goto LABEL_13;
      CDOTA_Item::SetCurrentCharges(this, this->m_iCurrentCharges.m_Value - 1);
      m_Value = this->m_iCurrentCharges.m_Value;
      v7 = this->m_iSecondaryCharges.m_Value;
    }
    else
    {
      v55 = DOTA_CreateItem("item_ward_sentry", this, this->m_iPlayerOwnerID.m_Value);
      v5 = v55;
      if ( v55 == 0 )
        return;
      CDOTA_Item::SetCurrentCharges(v55, 1);
      CDOTA_Item::ExpireSellback(v5);
      v56 = CDOTA_BaseNPC::GetInventory(v3);
      if ( CDOTA_UnitInventory::AddItem(v56, v5, 1, -1, 0, 0) != DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS )
      {
LABEL_13:
        UTIL_Remove(v5);
        return;
      }
      CDOTA_Item::SetSecondaryCharges(this, this->m_iSecondaryCharges.m_Value - 1);
      m_Value = this->m_iCurrentCharges.m_Value;
      v7 = this->m_iSecondaryCharges.m_Value;
    }
    goto LABEL_40;
  }
  CDOTABaseAbility::EndCooldown(this);
  (*(this->_vptr_IHandleEntity + 270))(this);
  (*(this->_vptr_IHandleEntity + 297))(this);
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    v33 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::PrimeResumePreviousMovement(v33);
  }
}


// CDOTA_Modifier_Item_Ward_Dispenser::~CDOTA_Modifier_Item_Ward_Dispenser  (line 493, @0x0000000002e22460, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Ward_Dispenser::~CDOTA_Modifier_Item_Ward_Dispenser(
        CDOTA_Modifier_Item_Ward_Dispenser *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Ward_Dispenser::~CDOTA_Modifier_Item_Ward_Dispenser  (line 493, @0x0000000002e22480, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Ward_Dispenser
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Ward_Dispenser::~CDOTA_Modifier_Item_Ward_Dispenser(
        CDOTA_Modifier_Item_Ward_Dispenser *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Ward_Dispenser::DeclareFunctions  (line 508, @0x0000000002e188e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Ward_Dispenser::GetModifierHealthBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Ward_Dispenser::DeclareFunctions(CDOTA_Modifier_Item_Ward_Dispenser *const this)
{
  this->m_Functions[58].__pfn = CDOTA_Modifier_Item_Ward_Dispenser::GetModifierHealthBonus;
  this->m_Functions[58].__delta = 0;
}


// CDOTA_Modifier_Item_Ward_Dispenser::GetModifierHealthBonus  (line 513, @0x0000000002e18900, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ward_Dispenser::GetModifierHealthBonus(
        CDOTA_Modifier_Item_Ward_Dispenser *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Ward_Dispenser::OnCreated  (line 518, @0x0000000002e1dfa0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_health"
void __fastcall CDOTA_Modifier_Item_Ward_Dispenser::OnCreated(
        CDOTA_Modifier_Item_Ward_Dispenser *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_health = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_health", -1, 0);
  else
    this->bonus_health = 0;
}


// CDOTA_Modifier_Ward_Delay::~CDOTA_Modifier_Ward_Delay  (line 535, @0x0000000002e22690, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Ward_Delay::~CDOTA_Modifier_Ward_Delay(CDOTA_Modifier_Ward_Delay *const this)
{
  this->_vptr_CDOTA_Buff = &off_478E530;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Ward_Delay::~CDOTA_Modifier_Ward_Delay  (line 535, @0x0000000002e226b0, libserver.so)  // inlines: ~CDOTA_Modifier_Ward_Delay
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Ward_Delay::~CDOTA_Modifier_Ward_Delay(CDOTA_Modifier_Ward_Delay *const this)
{
  this->_vptr_CDOTA_Buff = &off_478E530;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Ward_Delay::IsHidden  (line 542, @0x0000000002e21050, libserver.so)
bool __fastcall CDOTA_Modifier_Ward_Delay::IsHidden(CDOTA_Modifier_Ward_Delay *const this)
{
  return 1;
}


// CDOTA_Modifier_Ward_Delay::OnCreated  (line 552, @0x0000000002e19380, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::AddEffects
void __fastcall CDOTA_Modifier_Ward_Delay::OnCreated(CDOTA_Modifier_Ward_Delay *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::AddEffects(Parent, 32);
}


// CDOTA_Modifier_Ward_Delay::OnDestroy  (line 561, @0x0000000002e193a0, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CDOTA_Buff::GetParent, CBaseEntity::DispatchUpdateTransmitState
void __fastcall CDOTA_Modifier_Ward_Delay::OnDestroy(CDOTA_Modifier_Ward_Delay *const this)
{
  CDOTA_BaseNPC *Parent; // rbx

  Parent = CDOTA_Buff::GetParent(this);
  (*(Parent->_vptr_IHandleEntity + 188))(Parent, Parent->m_fEffects.m_Value & 0xFFFFFFDF);
  Parent->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(Parent);
  CDOTA_Buff::GetParent(this);
}


// CDOTA_Modifier_Ward_Delay::DeclareFunctions  (line 573, @0x0000000002e18920, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Ward_Delay::GetFixedVision(CModifierParams const&)
void __fastcall CDOTA_Modifier_Ward_Delay::DeclareFunctions(CDOTA_Modifier_Ward_Delay *const this)
{
  this->m_Functions[100].__pfn = CDOTA_Modifier_Ward_Delay::GetFixedVision;
  this->m_Functions[100].__delta = 0;
  this->m_Functions[101].__pfn = CDOTA_Modifier_Ward_Delay::GetFixedVision;
  this->m_Functions[101].__delta = 0;
}


// CDOTA_Modifier_Ward_Delay::GetFixedVision  (line 578, @0x0000000002e18960, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Ward_Delay::GetFixedVision(
        CDOTA_Modifier_Ward_Delay *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


