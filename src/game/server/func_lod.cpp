// Reconstructed from DWARF by pahole; not original source.

// src/game/server/func_lod.cpp:14
class CFunc_LOD : public CBaseModelEntity {
	class NetworkVar_m_nDisappearMinDist {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nDisappearMaxDist {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	typedef CBaseModelEntity BaseClass;
	typedef CFunc_LOD ThisClass;

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
	CFunc_LOD(CFunc_LOD &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CFunc_LOD();
	virtual ~CFunc_LOD();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual bool CreateVPhysics();
	virtual void Activate(ActivateType_t);
	virtual void Precache(const CEntityPrecacheContext *);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[49] CreateVPhysics
	// vtable[10] Activate
	// vtable[6] Precache
	// sizeof = 1160
};

// src/game/server/func_lod.cpp:46
class C_CFunc_LOD_MapInstall {
	C_CFunc_LOD_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFunc_LOD::GetEntityClass  (line 16, @0x00000000022458f0, libserver.so)
CEntityClass *__cdecl CFunc_LOD::GetEntityClass()
{
  return g_pEntityCFunc_LODClass;
}


// CFunc_LOD::Schema_DynamicBinding  (line 16, @0x0000000002245900, libserver.so)
// globals: CFunc_LOD::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFunc_LOD::Schema_DynamicBinding(const CFunc_LOD *const this)
{
  return CFunc_LOD::s_pSchemaBinding;
}


// CFunc_LOD::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 16, @0x0000000002245910, libserver.so)
// globals: CFunc_LOD::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFunc_LOD::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFunc_LOD::CEntityInstanceEntityClass *const this)
{
  return CFunc_LOD::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFunc_LOD::CEntityInstanceEntityClass::DestructInstance  (line 16, @0x0000000002245920, libserver.so)  // inlines: Destruct<CFunc_LOD>
void __fastcall CFunc_LOD::CEntityInstanceEntityClass::DestructInstance(
        CFunc_LOD::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFunc_LOD::CEntityInstanceEntityClass::FreeInstance  (line 16, @0x0000000002245940, libserver.so)
void __fastcall CFunc_LOD::CEntityInstanceEntityClass::FreeInstance(
        CFunc_LOD::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFunc_LOD::CEntityInstanceEntityClass::CanAllocate  (line 16, @0x0000000002245960, libserver.so)
bool __fastcall CFunc_LOD::CEntityInstanceEntityClass::CanAllocate(
        const CFunc_LOD::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFunc_LOD::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 16, @0x0000000002245970, libserver.so)
// globals: CFunc_LOD::s_pSchemaBinding
const ISchemaBinding *__fastcall CFunc_LOD::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFunc_LOD::CEntityInstanceEntityClass *const this)
{
  return CFunc_LOD::s_pSchemaBinding;
}


// CFunc_LOD::CEntityInstanceEntityClass::AllocateInstance  (line 16, @0x00000000022469d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFunc_LOD::CEntityInstanceEntityClass::AllocateInstance(
        CFunc_LOD::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1160);
  memset(v1, 0, 0x488u);
  return v1;
}


// CFunc_LOD::CEntityInstanceEntityClass::ConstructInstance  (line 16, @0x0000000002246c40, libserver.so)  // inlines: CFunc_LOD, CNetworkVarBase, Construct<CFunc_LOD>, EnsureValidValue<unsigned int>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFunc_LOD::CEntityInstanceEntityClass::ConstructInstance(
        CFunc_LOD::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 288) = 0;
    *p = &off_40473D0;
    *(p + 289) = 0;
  }
  return p;
}


// CFunc_LOD::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 16, @0x0000000002249100, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFunc_LOD::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFunc_LOD::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFunc_LOD::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 16, @0x0000000002249120, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFunc_LOD::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFunc_LOD::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFunc_LOD::GetEntityClassInternal  (line 16, @0x000000000224d940, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "func_lod", "CFunc_LOD"
// globals: `guard variable for'CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass, CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFunc_LOD::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFunc_LOD::GetEntityClassInfo(void)::g_EntityCFunc_LODClassInfo, CFunc_LOD::GetEntityClassInfo(void)::g_EntityCFunc_LODClassInfo
CEntityClass *__cdecl CFunc_LOD::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass) != 0 )
  {
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_designerName.u.m_Id = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass._vptr_CEntityClass = off_3F79390;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_ComponentOffsets.m_Size = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_AllHelpers.m_Size = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_classInputs.m_Size = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_classOutputs.m_Size = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_requiredEHandle.m_Index = -1;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_hNetworkSerializer = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_pBaseClassInfo = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_pClassInfo = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_flags = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_nAllHelpersFlags = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_pScriptClassDesc = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_pInputs = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_nInputCount = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_pOutputs = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_nOutputCount = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_pGameClass = 0;
    CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass._vptr_CEntityClass = off_4047350;
    __cxa_guard_release(&`guard variable for'CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass);
    __cxa_atexit(
      CFunc_LOD::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass,
      &_dso_handle);
  }
  if ( g_pEntityCFunc_LODClass != 0 )
    return &CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass;
  if ( `guard variable for'CFunc_LOD::GetEntityClassInfo(void)::g_EntityCFunc_LODClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFunc_LOD::GetEntityClassInfo(void)::g_EntityCFunc_LODClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFunc_LOD::GetEntityClassInfo(void)::g_EntityCFunc_LODClassInfo,
      "CFunc_LOD",
      "func_lod",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFunc_LOD::GetEntityClassInfo(void)::g_EntityCFunc_LODClassInfo);
  }
  CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_pClassInfo = &CFunc_LOD::GetEntityClassInfo(void)::g_EntityCFunc_LODClassInfo;
  CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_pBaseClassInfo = CFunc_LOD::GetEntityClassInfo(void)::g_EntityCFunc_LODClassInfo.m_pBaseClassInfo;
  g_pEntityCFunc_LODClass = &CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass;
  CFunc_LOD::GetEntityClassInfo(void)::g_EntityCFunc_LODClassInfo.m_pClass = &CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass;
  CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFunc_LODClass->m_pComponentOverrides = 0;
  return &CFunc_LOD::GetEntityClassInternal(void)::g_EntityCFunc_LODClass;
}


// CFunc_LOD::YouForgotToImplementOrDeclareServerClass  (line 46, @0x000000000221a4f0, libserver.so)
int __fastcall CFunc_LOD::YouForgotToImplementOrDeclareServerClass(CFunc_LOD *const this)
{
  return 0;
}


// CFunc_LOD::GetServerClass  (line 46, @0x0000000002221940, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CFunc_LOD::GetServerClass(CFunc_LOD *const this)
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


// CFunc_LOD::GetDataDescMap  (line 54, @0x000000000221a500, libserver.so)
// globals: CFunc_LOD::m_DataMap
datamap_t *__fastcall CFunc_LOD::GetDataDescMap(CFunc_LOD *const this)
{
  return &CFunc_LOD::m_DataMap;
}


// CFunc_LOD::AddDatadescMetadataKeys  (line 54, @0x000000000222b5d0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFunc_LOD::GetEntityClass(void)
void __fastcall CFunc_LOD::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFunc_LOD::GetEntityClass);
}


// CFunc_LOD::GetBaseMap  (line 54, @0x000000000222b5f0, libserver.so)
datamap_t *__cdecl CFunc_LOD::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CFunc_LOD>  (line 54, @0x000000000222b600, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "CFunc_LOD"
// globals: `guard variable for'DataMapInit<CFunc_LOD>(CFunc_LOD *)::nameHolder, CFunc_LOD::GetEntityClass(void), CFunc_LOD::m_DataMap, DataMapInit<CFunc_LOD>(CFunc_LOD *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFunc_LOD>(CFunc_LOD *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFunc_LOD>(CFunc_LOD *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFunc_LOD>(CFunc_LOD *)::nameHolder) != 0 )
  {
    DataMapInit<CFunc_LOD>(CFunc_LOD *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFunc_LOD>(CFunc_LOD *)::nameHolder.m_pszBase = "CFunc_LOD";
    DataMapInit<CFunc_LOD>(CFunc_LOD *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFunc_LOD>(CFunc_LOD *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFunc_LOD>(CFunc_LOD *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFunc_LOD>(CFunc_LOD *)::nameHolder.m_nLenBase = 9;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFunc_LOD>(CFunc_LOD *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFunc_LOD>(CFunc_LOD *)::nameHolder,
      &_dso_handle);
  }
  CFunc_LOD::m_DataMap.dataNumFields = 2;
  CFunc_LOD::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CFunc_LOD::m_DataMap.dataDesc = &DataMapInit<CFunc_LOD>(CFunc_LOD *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFunc_LOD::m_DataMap, CFunc_LOD::GetEntityClass);
  return &CFunc_LOD::m_DataMap;
}


// CFunc_LOD::CFunc_LOD  (line 65, @0x000000000222b6d0, libserver.so)  // inlines: CNetworkVarBase, EnsureValidValue<unsigned int>
// calls: CBaseModelEntity::CBaseModelEntity
void __fastcall CFunc_LOD::CFunc_LOD(CFunc_LOD *const this)
{
  CBaseModelEntity::CBaseModelEntity(this);
  this->m_nDisappearMinDist.m_Value = 0;
  this->_vptr_IHandleEntity = &off_40473D0;
  this->m_nDisappearMaxDist.m_Value = 0;
}


// CFunc_LOD::~CFunc_LOD  (line 70, @0x000000000221ad90, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFunc_LOD::~CFunc_LOD(CFunc_LOD *const this)
{
  this->_vptr_IHandleEntity = &off_40473D0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFunc_LOD::~CFunc_LOD  (line 70, @0x000000000221adb0, libserver.so)  // inlines: ~CFunc_LOD
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFunc_LOD::~CFunc_LOD(CFunc_LOD *const this)
{
  this->_vptr_IHandleEntity = &off_40473D0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFunc_LOD::CreateVPhysics  (line 75, @0x000000000221af80, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel
bool __fastcall CFunc_LOD::CreateVPhysics(CFunc_LOD *const this)
{
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // edx

  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    m_Value = m_pCollision->m_CollisionGroup.m_Value;
  else
    m_Value = 4;
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_FIXED,
    m_Value,
    0);
  return 1;
}


// CFunc_LOD::Activate  (line 81, @0x000000000221ae90, libserver.so)
// calls: CBaseModelEntity::Activate
void __fastcall CFunc_LOD::Activate(CFunc_LOD *const this, ActivateType_t activateType)
{
  CBaseModelEntity::Activate(this, activateType);
}


// CFunc_LOD::Precache  (line 87, @0x000000000223cbb0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues
void __fastcall CFunc_LOD::Precache(CFunc_LOD *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
}


// CFunc_LOD::Spawn  (line 93, @0x00000000022214d0, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<int>, GetValue, GetValue<int>, Min<long long unsigned int>, Min<unsigned int>, NetworkStateChanged, Set, SetSolid, atoi, operator=<int>, operator=<unsigned int>, operator[]
// calls: CBaseEntity::Spawn, CEntityKeyValues::HasValue, CBaseModelEntity::SetModelFromKeyValues, strtol, VariantFieldTypeName, Warning
// strings: "No conversion from %s to int now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_2221656, jpt_2221686
void __fastcall CFunc_LOD::Spawn(CFunc_LOD *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r13
  int v5; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v6; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v8; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v9; // rdx
  CEntityVariant *v10; // rcx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v13; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rdx
  CEntityVariant *p_m_value; // rcx
  int16 v17; // ax
  int16 m_type; // ax
  const char *v19; // rax
  uint64 m_uint64; // r13
  unsigned int v21; // r13d
  const char *v22; // rax
  const char *v23; // rax

  CBaseEntity::Spawn(this, pKeyValues);
  if ( !CEntityKeyValues::HasValue(pKeyValues, 1394783493) )
    goto LABEL_2;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_29:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_30;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v13 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v13) == 1394783493 )
      goto LABEL_24;
LABEL_21:
    if ( m_nCount <= ++v13 )
      goto LABEL_29;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v13] != 1394783493 )
    goto LABEL_21;
LABEL_24:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v15 = pKeyValues->m_keyValues.m_pElements;
  else
    v15 = 0;
  p_m_value = &v15[v13].m_value;
LABEL_30:
  m_type = p_m_value->m_type;
  switch ( m_type )
  {
    case 0:
      LODWORD(m_uint64) = 0;
      break;
    case 1:
      LODWORD(m_uint64) = p_m_value->m_float;
      break;
    case 5:
      LODWORD(m_uint64) = p_m_value->m_int;
      break;
    case 6:
      LODWORD(m_uint64) = p_m_value->m_char;
      break;
    case 26:
      LODWORD(m_uint64) = 0x7FFFFFFF;
      if ( p_m_value->m_int64 <= 0x7FFFFFFF )
      {
        LODWORD(m_uint64) = 0x80000000;
        if ( p_m_value->m_uint64 >= 0xFFFFFFFF80000000LL )
          m_uint64 = p_m_value->m_uint64;
      }
      break;
    case 30:
      LODWORD(m_uint64) = strtol(p_m_value->m_pszString, 0, 10);
      break;
    case 33:
      LODWORD(m_uint64) = 0x7FFFFFFF;
      if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
        LODWORD(m_uint64) = p_m_value->m_uint64;
      break;
    case 34:
      LODWORD(m_uint64) = p_m_value->m_float64;
      break;
    case 37:
      LODWORD(m_uint64) = p_m_value->m_int;
      if ( p_m_value->m_int >= 0x7FFFFFFFu )
        LODWORD(m_uint64) = 0x7FFFFFFF;
      break;
    default:
      LODWORD(m_uint64) = 0;
      v23 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to int now\n", v23);
      break;
  }
  if ( this->m_nDisappearMinDist.m_Value != m_uint64 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nDisappearMinDist.m_Value = m_uint64;
  }
  v21 = m_uint64 + 800;
  if ( v21 != this->m_nDisappearMaxDist.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1156, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nDisappearMaxDist.m_Value = v21;
  }
LABEL_2:
  if ( CEntityKeyValues::HasValue(pKeyValues, -862567455) )
  {
    v5 = pKeyValues->m_keyHashes.m_nCount;
    if ( v5 > 0 )
    {
      v6 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( i = 0; v5 > i; ++i )
      {
        if ( v6 != 0 )
        {
          v8 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v6 > 9 )
            v8 = pKeyValues->m_keyHashes.m_pElements;
          if ( v8[i] == -862567455 )
          {
LABEL_13:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v9 = pKeyValues->m_keyValues.m_pElements;
            else
              v9 = 0;
            v10 = &v9[i].m_value;
            goto LABEL_28;
          }
        }
        else if ( *(4 * i) == -862567455 )
        {
          goto LABEL_13;
        }
      }
    }
    v10 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_28:
    v17 = v10->m_type;
    switch ( v17 )
    {
      case 0:
        goto LABEL_3;
      case 1:
        LODWORD(v19) = v10->m_float;
        goto LABEL_34;
      case 5:
        LODWORD(v19) = v10->m_int;
        goto LABEL_34;
      case 6:
        LODWORD(v19) = v10->m_char;
        goto LABEL_34;
      case 26:
        v19 = v10->m_uint64;
        if ( v10->m_int64 <= 0x7FFFFFFF )
        {
          if ( v19 < 0xFFFFFFFF80000000LL )
            LODWORD(v19) = 0x80000000;
LABEL_34:
          if ( v19 == 0 )
            goto LABEL_3;
        }
LABEL_32:
        p_m_Collision = &this->m_Collision;
        (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
        break;
      case 30:
        LODWORD(v19) = strtol(v10->m_pszString, 0, 10);
        goto LABEL_34;
      case 33:
        v19 = v10->m_uint64;
        if ( v10->m_uint64 <= 0x7FFFFFFE )
          goto LABEL_34;
        goto LABEL_32;
      case 34:
        LODWORD(v19) = v10->m_float64;
        goto LABEL_34;
      case 37:
        LODWORD(v19) = v10->m_int;
        if ( v10->m_int > 0x7FFFFFFEu )
          goto LABEL_32;
        goto LABEL_34;
      default:
        v22 = VariantFieldTypeName(v17);
        Warning("No conversion from %s to int now\n", v22);
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    p_m_Collision = &this->m_Collision;
  }
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  (*(this->m_Collision._vptr_ICollideable + 26))(p_m_Collision, 1);
  (*(this->_vptr_IHandleEntity + 49))(this);
}


