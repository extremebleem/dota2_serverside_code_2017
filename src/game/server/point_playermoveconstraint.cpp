// Reconstructed from DWARF by pahole; not original source.

// src/game/server/point_playermoveconstraint.cpp:18
class CPointPlayerMoveConstraint : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	float m_flRadius;  // +0x308
	float m_flConstraintWidth;  // +0x30c
	float m_flSpeedFactor;  // +0x310
	float m_flRadiusSquared;  // +0x314
	COutputEvent m_OnConstraintBroken;  // +0x330
	typedef CBaseEntity BaseClass;

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
	CPointPlayerMoveConstraint(CPointPlayerMoveConstraint &);
	CPointPlayerMoveConstraint(CPointPlayerMoveConstraint &);
	CPointPlayerMoveConstraint();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual int UpdateTransmitState();
	virtual void Activate(ActivateType_t);
	void ConstraintThink();
	void InputTurnOn(inputdata_t &);
	void InputTurnOff(inputdata_t &);
	virtual ~CPointPlayerMoveConstraint();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[64] UpdateTransmitState
	// vtable[10] Activate
	// sizeof = 840
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointPlayerMoveConstraint::~CPointPlayerMoveConstraint  (line 18, @0x000000000233c7b0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CPointPlayerMoveConstraint::~CPointPlayerMoveConstraint(CPointPlayerMoveConstraint *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_hConstrainedPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_408DDD0;
  this->m_hConstrainedPlayers.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_hConstrainedPlayers.m_Memory,
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hConstrainedPlayers.m_Memory),
        (this->m_hConstrainedPlayers.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseEntity::~CBaseEntity(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
    CBaseEntity::~CBaseEntity(this);
  }
}


// CPointPlayerMoveConstraint::~CPointPlayerMoveConstraint  (line 18, @0x000000000233cc10, libserver.so)  // inlines: Purge, RemoveAll, ~CPointPlayerMoveConstraint, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CPointPlayerMoveConstraint::~CPointPlayerMoveConstraint(CPointPlayerMoveConstraint *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_hConstrainedPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_408DDD0;
  this->m_hConstrainedPlayers.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hConstrainedPlayers.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hConstrainedPlayers.m_Memory);
    if ( (this->m_hConstrainedPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointPlayerMoveConstraint::GetEntityClass  (line 20, @0x0000000002339d80, libserver.so)
CEntityClass *__cdecl CPointPlayerMoveConstraint::GetEntityClass()
{
  return g_pEntityCPointPlayerMoveConstraintClass;
}


// CPointPlayerMoveConstraint::Schema_DynamicBinding  (line 20, @0x0000000002339d90, libserver.so)
// globals: CPointPlayerMoveConstraint::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointPlayerMoveConstraint::Schema_DynamicBinding(
        const CPointPlayerMoveConstraint *const this)
{
  return CPointPlayerMoveConstraint::s_pSchemaBinding;
}


// CPointPlayerMoveConstraint::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 20, @0x0000000002339da0, libserver.so)
// globals: CPointPlayerMoveConstraint::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointPlayerMoveConstraint::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointPlayerMoveConstraint::CEntityInstanceEntityClass *const this)
{
  return CPointPlayerMoveConstraint::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointPlayerMoveConstraint::CEntityInstanceEntityClass::DestructInstance  (line 20, @0x0000000002339db0, libserver.so)  // inlines: Destruct<CPointPlayerMoveConstraint>
void __fastcall CPointPlayerMoveConstraint::CEntityInstanceEntityClass::DestructInstance(
        CPointPlayerMoveConstraint::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointPlayerMoveConstraint::CEntityInstanceEntityClass::FreeInstance  (line 20, @0x0000000002339dd0, libserver.so)
void __fastcall CPointPlayerMoveConstraint::CEntityInstanceEntityClass::FreeInstance(
        CPointPlayerMoveConstraint::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointPlayerMoveConstraint::CEntityInstanceEntityClass::CanAllocate  (line 20, @0x0000000002339df0, libserver.so)
bool __fastcall CPointPlayerMoveConstraint::CEntityInstanceEntityClass::CanAllocate(
        const CPointPlayerMoveConstraint::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointPlayerMoveConstraint::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 20, @0x0000000002339e00, libserver.so)
// globals: CPointPlayerMoveConstraint::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointPlayerMoveConstraint::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointPlayerMoveConstraint::CEntityInstanceEntityClass *const this)
{
  return CPointPlayerMoveConstraint::s_pSchemaBinding;
}


// CPointPlayerMoveConstraint::CEntityInstanceEntityClass::AllocateInstance  (line 20, @0x000000000233b1e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointPlayerMoveConstraint::CEntityInstanceEntityClass::AllocateInstance(
        CPointPlayerMoveConstraint::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 840);
  memset(v1, 0, 0x348u);
  return v1;
}


// CPointPlayerMoveConstraint::CEntityInstanceEntityClass::ConstructInstance  (line 20, @0x000000000233c280, libserver.so)  // inlines: CEntityIOOutput, CPointPlayerMoveConstraint, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CPointPlayerMoveConstraint>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPointPlayerMoveConstraint::CEntityInstanceEntityClass::ConstructInstance(
        CPointPlayerMoveConstraint::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 198) = 0;
    *p = &off_408DDD0;
    *(p + 100) = 0;
    *(p + 202) = 0;
    *(p + 203) = 0;
    *(p + 102) = off_3F7C190;
  }
  return p;
}


// CPointPlayerMoveConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x000000000233cb70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointPlayerMoveConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointPlayerMoveConstraint::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPointPlayerMoveConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x000000000233cb90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointPlayerMoveConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointPlayerMoveConstraint::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointPlayerMoveConstraint::GetEntityClassInternal  (line 20, @0x00000000023439a0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "point_playermoveconstraint", "CPointPlayerMoveConstraint"
// globals: `guard variable for'CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass, CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointPlayerMoveConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointPlayerMoveConstraint::GetEntityClassInfo(void)::g_EntityCPointPlayerMoveConstraintClassInfo, CPointPlayerMoveConstraint::GetEntityClassInfo(void)::g_EntityCPointPlayerMoveConstraintClassInfo
CEntityClass *__cdecl CPointPlayerMoveConstraint::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass) != 0 )
  {
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_designerName.u.m_Id = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass._vptr_CEntityClass = off_3F79390;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_ComponentOffsets.m_Size = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_AllHelpers.m_Size = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_classInputs.m_Size = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_classOutputs.m_Size = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_requiredEHandle.m_Index = -1;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_hNetworkSerializer = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_pBaseClassInfo = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_pClassInfo = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_flags = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_nAllHelpersFlags = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_pScriptClassDesc = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_pInputs = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_nInputCount = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_pOutputs = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_nOutputCount = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_pGameClass = 0;
    CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass._vptr_CEntityClass = off_408DD50;
    __cxa_guard_release(&`guard variable for'CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass);
    __cxa_atexit(
      CPointPlayerMoveConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointPlayerMoveConstraintClass != 0 )
    return &CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass;
  if ( `guard variable for'CPointPlayerMoveConstraint::GetEntityClassInfo(void)::g_EntityCPointPlayerMoveConstraintClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointPlayerMoveConstraint::GetEntityClassInfo(void)::g_EntityCPointPlayerMoveConstraintClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointPlayerMoveConstraint::GetEntityClassInfo(void)::g_EntityCPointPlayerMoveConstraintClassInfo,
      "CPointPlayerMoveConstraint",
      "point_playermoveconstraint",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointPlayerMoveConstraint::GetEntityClassInfo(void)::g_EntityCPointPlayerMoveConstraintClassInfo);
  }
  CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_pClassInfo = &CPointPlayerMoveConstraint::GetEntityClassInfo(void)::g_EntityCPointPlayerMoveConstraintClassInfo;
  CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_pBaseClassInfo = CPointPlayerMoveConstraint::GetEntityClassInfo(void)::g_EntityCPointPlayerMoveConstraintClassInfo.m_pBaseClassInfo;
  g_pEntityCPointPlayerMoveConstraintClass = &CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass;
  CPointPlayerMoveConstraint::GetEntityClassInfo(void)::g_EntityCPointPlayerMoveConstraintClassInfo.m_pClass = &CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass;
  CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPointPlayerMoveConstraintClass->m_pComponentOverrides = 0;
  return &CPointPlayerMoveConstraint::GetEntityClassInternal(void)::g_EntityCPointPlayerMoveConstraintClass;
}


// CPointPlayerMoveConstraint::GetDataDescMap  (line 40, @0x000000000231ec70, libserver.so)
// globals: CPointPlayerMoveConstraint::m_DataMap
datamap_t *__fastcall CPointPlayerMoveConstraint::GetDataDescMap(CPointPlayerMoveConstraint *const this)
{
  return &CPointPlayerMoveConstraint::m_DataMap;
}


// CPointPlayerMoveConstraint::AddDatadescMetadataKeys  (line 40, @0x0000000002327c60, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointPlayerMoveConstraint::GetEntityClass(void)
void __fastcall CPointPlayerMoveConstraint::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointPlayerMoveConstraint::GetEntityClass);
}


// CPointPlayerMoveConstraint::GetBaseMap  (line 40, @0x0000000002327c80, libserver.so)
datamap_t *__cdecl CPointPlayerMoveConstraint::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CPointPlayerMoveConstraint>  (line 40, @0x00000000023338d0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, CopyConstruct<char*>, Element, GenerateName, GetDataOps<CUtlVector<CHandle<CBaseEntity> > >, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "CPointPlayerMoveConstraint"
// globals: `guard variable for'DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder, `guard variable for'DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::dataDesc, CPointPlayerMoveConstraint::GetEntityClass(void), CPointPlayerMoveConstraint::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBas, CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<, DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder, __dso_handle (9 total)
datamap_t *__fastcall DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder) != 0 )
  {
    DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder.m_pszBase = "CPointPlayerMoveConstraint";
    DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder.m_nLenBase = 26;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder,
      &_dso_handle);
  }
  CPointPlayerMoveConstraint::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::dataDesc) != 0 )
  {
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops = off_4008550;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops);
    }
    DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::dataDesc[5].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops;
    v2 = operator new[](DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder.m_nLenBase + 16);
    strcpy(
      stpcpy(v2, DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder.m_pszBase),
      "ConstraintThink");
    m_Size = DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder.m_Names.m_Size == DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::dataDesc[6].fieldName = v2;
    DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::dataDesc[9].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::dataDesc);
  }
  CPointPlayerMoveConstraint::m_DataMap.dataNumFields = 9;
  CPointPlayerMoveConstraint::m_DataMap.dataDesc = &DataMapInit<CPointPlayerMoveConstraint>(CPointPlayerMoveConstraint *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointPlayerMoveConstraint::m_DataMap, CPointPlayerMoveConstraint::GetEntityClass);
  return &CPointPlayerMoveConstraint::m_DataMap;
}


// CPointPlayerMoveConstraint::UpdateTransmitState  (line 59, @0x000000000231ee40, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CPointPlayerMoveConstraint::UpdateTransmitState(CPointPlayerMoveConstraint *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CPointPlayerMoveConstraint::Activate  (line 68, @0x000000000231efb0, libserver.so)
// calls: CBaseEntity::Activate
void __fastcall CPointPlayerMoveConstraint::Activate(
        CPointPlayerMoveConstraint *const this,
        ActivateType_t activateType)
{
  CBaseEntity::Activate(this, activateType);
  this->m_flRadiusSquared = this->m_flRadius * this->m_flRadius;
}


// CPointPlayerMoveConstraint::InputTurnOn  (line 78, @0x0000000002334c30, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, FindEntityInheritingFromWithin<CBasePlayer>, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Schema_StaticBinding, Set, ToBasePlayer, operator[]
// calls: CBaseEntity::GetLocalOrigin, CBasePlayer::Schema_VerifyBindingIsRegistered, CGameEntitySystem::FindEntityInheritingFromWithin, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CBaseEntity::GetAbsOrigin, CBasePlayer::ActivateMovementConstraint, CBaseEntity::ThinkSet, CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, CUtlMemory<CHandle<CBaseEntity>, int>::Grow
// globals: CPointPlayerMoveConstraint::ConstraintThink(void)
void __fastcall CPointPlayerMoveConstraint::InputTurnOn(
        CPointPlayerMoveConstraint *const this,
        inputdata_t *const inputdata)
{
  CEntityInstance *EntityInheritingFromWithin; // r15
  const Vector *LocalOrigin; // rax
  CGameEntitySystem *v5; // r12
  const Vector *v6; // r13
  CBasePlayer *v7; // r12
  CEntityIdentity *v8; // rdx
  int v9; // eax
  __int16 v10; // cx
  __int64 m_Size; // r13
  int v12; // eax
  CHandle<CBaseEntity> *v13; // rax
  const Vector *AbsOrigin; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  double v18; // xmm0_8
  double v19; // xmm1_8
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-68h]
  float flSpeedFactor; // [rsp+10h] [rbp-60h]
  float flConstraintWidth; // [rsp+14h] [rbp-5Ch]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hConstrainedPlayers; // [rsp+18h] [rbp-58h]
  float m_flRadius; // [rsp+28h] [rbp-48h]
  float flRadius; // [rsp+2Ch] [rbp-44h]
  CHandle<CBaseEntity> v26; // [rsp+30h] [rbp-40h] BYREF

  flRadius = this->m_flRadius;
  if ( gpGlobals->maxClients == 1 )
    flRadius = 16384.0;
  EntityInheritingFromWithin = 0;
  p_m_hConstrainedPlayers = &this->m_hConstrainedPlayers;
  p_m_Memory = &this->m_hConstrainedPlayers.m_Memory;
  while ( 1 )
  {
    LocalOrigin = CBaseEntity::GetLocalOrigin(this);
    v5 = g_pGameEntitySystem;
    v6 = LocalOrigin;
    CBasePlayer::Schema_VerifyBindingIsRegistered();
    EntityInheritingFromWithin = CGameEntitySystem::FindEntityInheritingFromWithin(
                                   v5,
                                   EntityInheritingFromWithin,
                                   CBasePlayer::s_pSchemaBinding,
                                   v6,
                                   flRadius);
    if ( EntityInheritingFromWithin == 0 )
      break;
    if ( (*(EntityInheritingFromWithin->_vptr_IHandleEntity + 140))(EntityInheritingFromWithin) != 0 )
    {
      v26.m_Index = -1;
      m_pEntity = EntityInheritingFromWithin->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v17 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v26.m_Index) = v17 | v26.m_Index & 0x8000;
        v26.m_Index = (v16 << 15) | v26.m_Index & 0x7FFF;
      }
      v7 = EntityInheritingFromWithin;
    }
    else
    {
      v26.m_Index = -1;
      v7 = 0;
    }
    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(p_m_hConstrainedPlayers, &v26) == -1 )
    {
      v26.m_Index = -1;
      if ( v7 != 0 )
      {
        v8 = v7->m_pEntity;
        if ( v8 != 0 )
        {
          v9 = (v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1);
          v10 = 0x7FFF;
          if ( v8->m_EHandle.m_Index != -1 )
            v10 = v8->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v26.m_Index) = v10 | v26.m_Index & 0x8000;
          v26.m_Index = (v9 << 15) | v26.m_Index & 0x7FFF;
        }
      }
      m_Size = this->m_hConstrainedPlayers.m_Size;
      v12 = this->m_hConstrainedPlayers.m_Size;
      if ( m_Size == this->m_hConstrainedPlayers.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(p_m_Memory, 1);
        v12 = this->m_hConstrainedPlayers.m_Size;
      }
      this->m_hConstrainedPlayers.m_Size = v12 + 1;
      v13 = &this->m_hConstrainedPlayers.m_Memory.m_pMemory[m_Size];
      if ( v13 != 0 )
        v13->m_Index = v26.m_Index;
      flSpeedFactor = this->m_flSpeedFactor;
      flConstraintWidth = this->m_flConstraintWidth;
      m_flRadius = this->m_flRadius;
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      CBasePlayer::ActivateMovementConstraint(v7, this, AbsOrigin, m_flRadius, flConstraintWidth, flSpeedFactor, 0);
    }
  }
  if ( this->m_hConstrainedPlayers.m_Size != 0 )
  {
    CBaseEntity::ThinkSet(this, CPointPlayerMoveConstraint::ConstraintThink, 0.0, 0, 0);
    *&v18 = CGlobalVarsBase::curtime(gpGlobals, 0) + 0.1;
    CBaseEntity::SetNextThink(this, v18, v19, 0);
  }
}


// CPointPlayerMoveConstraint::InputTurnOff  (line 113, @0x0000000002320750, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToBasePlayer, operator CEntityInstance*, operator[]
// calls: CBasePlayer::DeactivateMovementConstraint, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointPlayerMoveConstraint::InputTurnOff(
        CPointPlayerMoveConstraint *const this,
        inputdata_t *const inputdata)
{
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r13
  CHandle<CBaseEntity> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CBasePlayer *m_pInstance; // r14
  bool v12; // zf

  m_Size = this->m_hConstrainedPlayers.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 4LL * (m_Size - 1) + 4;
    do
    {
      while ( 1 )
      {
        v6 = &this->m_hConstrainedPlayers.m_Memory.m_pMemory[v4 / 4];
        m_Index = v6->m_Index;
        if ( v6->m_Index + 2 > 1 )
        {
          v8 = v6->m_Index;
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[v8 & 0x1FF];
            if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
            {
              m_pInstance = v10->m_pInstance;
              if ( v10->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(v10->m_pInstance) != 0 )
                break;
            }
          }
        }
        v4 += 4LL;
        if ( v4 == v5 )
          goto LABEL_11;
      }
      v4 += 4LL;
      CBasePlayer::DeactivateMovementConstraint(m_pInstance);
    }
    while ( v4 != v5 );
  }
LABEL_11:
  v12 = (this->m_hConstrainedPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hConstrainedPlayers.m_Size = 0;
  if ( v12 )
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hConstrainedPlayers.m_Memory);
}


// CPointPlayerMoveConstraint::ConstraintThink  (line 131, @0x0000000002332d20, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LengthSqr, LookupEntity, Remove, ToBasePlayer, VectorSubtract, operator CEntityInstance*, operator-, operator[], ~CVariantBase
// calls: CBaseEntity::GetAbsOrigin, CBasePlayer::DeactivateMovementConstraint, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::ShiftElementsLeft, CEntityIOOutput::FireOutputInternal, CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointPlayerMoveConstraint::ConstraintThink(CPointPlayerMoveConstraint *const this)
{
  int m_Size; // eax
  int v3; // r12d
  __int64 v4; // r13
  CHandle<CBaseEntity> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CBasePlayer *m_pInstance; // r14
  const Vector *AbsOrigin; // r15
  const Vector *v12; // rax
  double v13; // xmm0_8
  double v14; // xmm1_8
  COutputEvent *p_m_OnConstraintBroken; // [rsp+8h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hConstrainedPlayers; // [rsp+10h] [rbp-50h]
  CVariant v17; // [rsp+20h] [rbp-40h] BYREF

  m_Size = this->m_hConstrainedPlayers.m_Size;
  v3 = m_Size - 1;
  if ( m_Size - 1 >= 0 )
  {
    p_m_hConstrainedPlayers = &this->m_hConstrainedPlayers;
    v4 = v3;
    p_m_OnConstraintBroken = &this->m_OnConstraintBroken;
    do
    {
      while ( 1 )
      {
        v5 = &this->m_hConstrainedPlayers.m_Memory.m_pMemory[v4];
        m_Index = v5->m_Index;
        if ( v5->m_Index + 2 > 1 )
        {
          v7 = v5->m_Index;
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
          if ( v8 != 0 )
          {
            v9 = &v8[v7 & 0x1FF];
            if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
            {
              m_pInstance = v9->m_pInstance;
              if ( v9->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(v9->m_pInstance) != 0 )
              {
                AbsOrigin = CBaseEntity::GetAbsOrigin(this);
                v12 = CBaseEntity::GetAbsOrigin(m_pInstance);
                if ( ((((v12->x - AbsOrigin->x) * (v12->x - AbsOrigin->x))
                     + ((v12->y - AbsOrigin->y) * (v12->y - AbsOrigin->y)))
                    + ((v12->z - AbsOrigin->z) * (v12->z - AbsOrigin->z))) > this->m_flRadiusSquared )
                {
                  CBasePlayer::DeactivateMovementConstraint(m_pInstance);
                  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::ShiftElementsLeft(
                    p_m_hConstrainedPlayers,
                    v3,
                    1);
                  --this->m_hConstrainedPlayers.m_Size;
                  v17.m_type = 0;
                  v17.m_flags = 0;
                  v17.m_uint64 = 0;
                  CEntityIOOutput::FireOutputInternal(p_m_OnConstraintBroken, this, m_pInstance, &v17, 0.0);
                  if ( (v17.m_flags & 1) != 0 )
                    break;
                }
              }
            }
          }
        }
        --v3;
        --v4;
        if ( v3 == -1 )
          goto LABEL_13;
      }
      --v3;
      --v4;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v17.m_uint64);
    }
    while ( v3 != -1 );
LABEL_13:
    m_Size = this->m_hConstrainedPlayers.m_Size;
  }
  if ( m_Size != 0 )
  {
    *&v13 = CGlobalVarsBase::curtime(gpGlobals, 0) + 0.1;
    CBaseEntity::SetNextThink(this, v13, v14, 0);
  }
}


