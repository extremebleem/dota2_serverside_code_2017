// Reconstructed from DWARF by pahole; not original source.

// src/game/server/pointteleport.cpp:25
class CPointTeleport : public CBaseEntity {
public:

private:

	bool m_bTeleportParentedEntities;  // +0x320

	static datamap_t m_DataMap;
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
	CPointTeleport(CPointTeleport &);
	CPointTeleport(CPointTeleport &);
	CPointTeleport();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Activate(ActivateType_t);
	void InputTeleport(inputdata_t &);
	void InputTeleportEntity(inputdata_t &);
	void InputTeleportToCurrentPos(inputdata_t &);
	void InputTeleportEntityToCurrentPos(inputdata_t &);
	virtual int ObjectCaps();
	void DoTeleport(inputdata_t &, const Vector &, const QAngle &, bool);
	bool EntityMayTeleport(CBaseEntity *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CPointTeleport();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[10] Activate
	// vtable[19] ObjectCaps
	// vtable[34] GetDataDescMap
	// sizeof = 808
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointTeleport::~CPointTeleport  (line 25, @0x0000000002372d90, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPointTeleport::~CPointTeleport(CPointTeleport *const this)
{
  this->_vptr_IHandleEntity = &off_40956D0;
  CBaseEntity::~CBaseEntity(this);
}


// CPointTeleport::~CPointTeleport  (line 25, @0x0000000002372db0, libserver.so)  // inlines: ~CPointTeleport
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPointTeleport::~CPointTeleport(CPointTeleport *const this)
{
  this->_vptr_IHandleEntity = &off_40956D0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointTeleport::GetEntityClass  (line 27, @0x0000000002370810, libserver.so)
CEntityClass *__cdecl CPointTeleport::GetEntityClass()
{
  return g_pEntityCPointTeleportClass;
}


// CPointTeleport::Schema_DynamicBinding  (line 27, @0x0000000002370820, libserver.so)
// globals: CPointTeleport::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointTeleport::Schema_DynamicBinding(const CPointTeleport *const this)
{
  return CPointTeleport::s_pSchemaBinding;
}


// CPointTeleport::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 27, @0x0000000002370830, libserver.so)
// globals: CPointTeleport::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointTeleport::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointTeleport::CEntityInstanceEntityClass *const this)
{
  return CPointTeleport::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointTeleport::CEntityInstanceEntityClass::DestructInstance  (line 27, @0x0000000002370840, libserver.so)  // inlines: Destruct<CPointTeleport>
void __fastcall CPointTeleport::CEntityInstanceEntityClass::DestructInstance(
        CPointTeleport::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointTeleport::CEntityInstanceEntityClass::FreeInstance  (line 27, @0x0000000002370860, libserver.so)
void __fastcall CPointTeleport::CEntityInstanceEntityClass::FreeInstance(
        CPointTeleport::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointTeleport::CEntityInstanceEntityClass::CanAllocate  (line 27, @0x0000000002370880, libserver.so)
bool __fastcall CPointTeleport::CEntityInstanceEntityClass::CanAllocate(
        const CPointTeleport::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointTeleport::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 27, @0x0000000002370890, libserver.so)
// globals: CPointTeleport::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointTeleport::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointTeleport::CEntityInstanceEntityClass *const this)
{
  return CPointTeleport::s_pSchemaBinding;
}


// CPointTeleport::CEntityInstanceEntityClass::AllocateInstance  (line 27, @0x0000000002372610, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointTeleport::CEntityInstanceEntityClass::AllocateInstance(
        CPointTeleport::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 808);
  memset(v1, 0, 0x328u);
  return v1;
}


// CPointTeleport::CEntityInstanceEntityClass::ConstructInstance  (line 27, @0x0000000002372b80, libserver.so)  // inlines: CPointTeleport, Construct<CPointTeleport>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPointTeleport::CEntityInstanceEntityClass::ConstructInstance(
        CPointTeleport::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40956D0;
  }
  return p;
}


// CPointTeleport::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 27, @0x0000000002375000, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointTeleport::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointTeleport::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPointTeleport::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 27, @0x0000000002375020, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointTeleport::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointTeleport::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointTeleport::GetEntityClassInternal  (line 27, @0x000000000237d1e0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "point_teleport", "CPointTeleport"
// globals: `guard variable for'CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass, CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointTeleport::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointTeleport::GetEntityClassInfo(void)::g_EntityCPointTeleportClassInfo, CPointTeleport::GetEntityClassInfo(void)::g_EntityCPointTeleportClassInfo
CEntityClass *__cdecl CPointTeleport::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass) != 0 )
  {
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_designerName.u.m_Id = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass._vptr_CEntityClass = off_3F79390;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_ComponentOffsets.m_Size = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_AllHelpers.m_Size = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_classInputs.m_Size = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_classOutputs.m_Size = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_requiredEHandle.m_Index = -1;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_hNetworkSerializer = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_pBaseClassInfo = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_pClassInfo = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_flags = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_nAllHelpersFlags = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_pScriptClassDesc = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_pInputs = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_nInputCount = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_pOutputs = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_nOutputCount = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_pGameClass = 0;
    CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass._vptr_CEntityClass = off_4095650;
    __cxa_guard_release(&`guard variable for'CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass);
    __cxa_atexit(
      CPointTeleport::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointTeleportClass != 0 )
    return &CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass;
  if ( `guard variable for'CPointTeleport::GetEntityClassInfo(void)::g_EntityCPointTeleportClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointTeleport::GetEntityClassInfo(void)::g_EntityCPointTeleportClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointTeleport::GetEntityClassInfo(void)::g_EntityCPointTeleportClassInfo,
      "CPointTeleport",
      "point_teleport",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointTeleport::GetEntityClassInfo(void)::g_EntityCPointTeleportClassInfo);
  }
  CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_pClassInfo = &CPointTeleport::GetEntityClassInfo(void)::g_EntityCPointTeleportClassInfo;
  CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_pBaseClassInfo = CPointTeleport::GetEntityClassInfo(void)::g_EntityCPointTeleportClassInfo.m_pBaseClassInfo;
  g_pEntityCPointTeleportClass = &CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass;
  CPointTeleport::GetEntityClassInfo(void)::g_EntityCPointTeleportClassInfo.m_pClass = &CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass;
  CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPointTeleportClass->m_pComponentOverrides = 0;
  return &CPointTeleport::GetEntityClassInternal(void)::g_EntityCPointTeleportClass;
}


// CPointTeleport::ObjectCaps  (line 36, @0x0000000002372c10, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CPointTeleport::ObjectCaps(CPointTeleport *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CPointTeleport::GetDataDescMap  (line 55, @0x000000000234aaf0, libserver.so)
// globals: CPointTeleport::m_DataMap
datamap_t *__fastcall CPointTeleport::GetDataDescMap(CPointTeleport *const this)
{
  return &CPointTeleport::m_DataMap;
}


// CPointTeleport::AddDatadescMetadataKeys  (line 55, @0x0000000002352770, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointTeleport::GetEntityClass(void)
void __fastcall CPointTeleport::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointTeleport::GetEntityClass);
}


// CPointTeleport::GetBaseMap  (line 55, @0x0000000002352790, libserver.so)
datamap_t *__cdecl CPointTeleport::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CPointTeleport>  (line 55, @0x00000000023527a0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "CPointTeleport"
// globals: `guard variable for'DataMapInit<CPointTeleport>(CPointTeleport *)::nameHolder, CPointTeleport::GetEntityClass(void), CPointTeleport::m_DataMap, DataMapInit<CPointTeleport>(CPointTeleport *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointTeleport>(CPointTeleport *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPointTeleport>(CPointTeleport *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointTeleport>(CPointTeleport *)::nameHolder) != 0 )
  {
    DataMapInit<CPointTeleport>(CPointTeleport *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointTeleport>(CPointTeleport *)::nameHolder.m_pszBase = "CPointTeleport";
    DataMapInit<CPointTeleport>(CPointTeleport *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointTeleport>(CPointTeleport *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointTeleport>(CPointTeleport *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointTeleport>(CPointTeleport *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointTeleport>(CPointTeleport *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointTeleport>(CPointTeleport *)::nameHolder,
      &_dso_handle);
  }
  CPointTeleport::m_DataMap.dataNumFields = 7;
  CPointTeleport::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CPointTeleport::m_DataMap.dataDesc = &DataMapInit<CPointTeleport>(CPointTeleport *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointTeleport::m_DataMap, CPointTeleport::GetEntityClass);
  return &CPointTeleport::m_DataMap;
}


// CPointTeleport::EntityMayTeleport  (line 72, @0x0000000002352870, libserver.so)
// calls: CBaseEntity::GetMoveParent
// callers: CPointTeleport::Activate, CPointTeleport::DoTeleport
bool __fastcall CPointTeleport::EntityMayTeleport(CPointTeleport *const this, CBaseEntity *pTarget)
{
  bool m_bTeleportParentedEntities; // bl
  __int64 v5; // rax
  char v6; // al

  if ( CBaseEntity::GetMoveParent(pTarget) == 0 )
    return 1;
  m_bTeleportParentedEntities = this->m_bTeleportParentedEntities;
  if ( !m_bTeleportParentedEntities )
  {
    v5 = (*(pTarget->_vptr_IHandleEntity + 147))(pTarget);
    if ( v5 != 0 )
    {
      v6 = (*(*v5 + 2768LL))(v5);
      if ( v6 != 0 )
        return v6;
    }
  }
  return m_bTeleportParentedEntities;
}


// CPointTeleport::Activate  (line 88, @0x00000000023528d0, libserver.so)  // inlines: CUtlSymbolLarge, GetDebugName, String, ToCStr, operator=
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, CGameEntitySystem::FindEntityByName, CPointTeleport::EntityMayTeleport, CBaseEntity::Activate, CEntityIdentity::GetDebugName, Warning, UTIL_Remove, CBaseEntity::GetMoveParent
// strings: "ERROR: (%s) target '%s' not found. Deleting.\n", "ERROR: (%s) can't teleport object (%s) as it has a parent (%s)!\n"
void __fastcall CPointTeleport::Activate(CPointTeleport *const this, ActivateType_t activateType)
{
  QAngle *AbsAngles; // rax
  bool v5; // zf
  CBaseEntity *EntityByName; // rax
  const CBaseEntity *v7; // r12
  const char *m_pAsString; // r12
  const char *v9; // rax
  CBaseEntity *MoveParent; // rax
  const char *DebugName; // r14
  const char *v12; // r12
  const char *v13; // rax
  string_t iszName; // [rsp+10h] [rbp-30h] BYREF

  this->m_vSaveOrigin = *CBaseEntity::GetAbsOrigin(this);
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  v5 = (this->m_spawnflags.m_Value & 1) == 0;
  this->m_vSaveAngles = *AbsAngles;
  if ( v5 )
    goto LABEL_5;
  iszName.u.m_Id = this->m_target.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  v7 = EntityByName;
  if ( EntityByName != 0 )
  {
    if ( CPointTeleport::EntityMayTeleport(this, EntityByName) )
    {
      this->m_vSaveOrigin = *CBaseEntity::GetAbsOrigin(v7);
      this->m_vSaveAngles = *CBaseEntity::GetAbsAngles(v7);
LABEL_5:
      CBaseEntity::Activate(this, activateType);
      return;
    }
    MoveParent = CBaseEntity::GetMoveParent(v7);
    DebugName = CEntityIdentity::GetDebugName(MoveParent->m_pEntity);
    v12 = CEntityIdentity::GetDebugName(v7->m_pEntity);
    v13 = CEntityIdentity::GetDebugName(this->m_pEntity);
    Warning("ERROR: (%s) can't teleport object (%s) as it has a parent (%s)!\n", v13, v12, DebugName);
    CBaseEntity::Activate(this, activateType);
  }
  else
  {
    m_pAsString = "";
    if ( this->m_target.u.m_Id != 0 )
      m_pAsString = this->m_target.u.m_pAsString;
    v9 = CEntityIdentity::GetDebugName(this->m_pEntity);
    Warning("ERROR: (%s) target '%s' not found. Deleting.\n", v9, m_pAsString);
    UTIL_Remove(this);
  }
}


// CPointTeleport::InputTeleport  (line 128, @0x0000000002352fd0, libserver.so)
// calls: CPointTeleport::DoTeleport
void __fastcall CPointTeleport::InputTeleport(CPointTeleport *const this, inputdata_t *const inputdata)
{
  CPointTeleport::DoTeleport(this, inputdata, &this->m_vSaveOrigin, &this->m_vSaveAngles, 0);
}


// CPointTeleport::InputTeleportEntity  (line 137, @0x0000000002352ff0, libserver.so)
// calls: CPointTeleport::DoTeleport
void __fastcall CPointTeleport::InputTeleportEntity(CPointTeleport *const this, inputdata_t *const inputdata)
{
  CPointTeleport::DoTeleport(this, inputdata, &this->m_vSaveOrigin, &this->m_vSaveAngles, 1);
}


// CPointTeleport::InputTeleportToCurrentPos  (line 147, @0x0000000002353010, libserver.so)  // inlines: GetDebugName
// calls: CEntityIdentity::GetDebugName, Warning, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, CPointTeleport::DoTeleport
// strings: "%s: TeleportToCurrentPos input received; ignoring 'Teleport Home' spawnflag.\n"
void __fastcall CPointTeleport::InputTeleportToCurrentPos(CPointTeleport *const this, inputdata_t *const inputdata)
{
  const char *DebugName; // rax
  const QAngle *AbsAngles; // r13
  const Vector *AbsOrigin; // rax

  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    Warning("%s: TeleportToCurrentPos input received; ignoring 'Teleport Home' spawnflag.\n", DebugName);
  }
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  CPointTeleport::DoTeleport(this, inputdata, AbsOrigin, AbsAngles, 0);
}


// CPointTeleport::InputTeleportEntityToCurrentPos  (line 163, @0x0000000002353080, libserver.so)  // inlines: GetDebugName
// calls: CEntityIdentity::GetDebugName, Warning, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, CPointTeleport::DoTeleport
// strings: "%s: TeleportEntityToCurrentPos input received; ignoring 'Teleport Home' spawnflag.\n"
void __fastcall CPointTeleport::InputTeleportEntityToCurrentPos(
        CPointTeleport *const this,
        inputdata_t *const inputdata)
{
  const char *DebugName; // rax
  const QAngle *AbsAngles; // r13
  const Vector *AbsOrigin; // rax

  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    Warning("%s: TeleportEntityToCurrentPos input received; ignoring 'Teleport Home' spawnflag.\n", DebugName);
  }
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  CPointTeleport::DoTeleport(this, inputdata, AbsOrigin, AbsAngles, 1);
}


// CPointTeleport::DoTeleport  (line 177, @0x0000000002352ac0, libserver.so)  // inlines: AssignTo, CUtlSymbolLarge, GetDebugName, InitFromQAngles, InverseTR, MatrixAngles, MatrixPosition, TempString, ToBasePlayer, ToString
// calls: CGameEntitySystem::FindEntityByName, CPointTeleport::EntityMayTeleport, CBaseEntity::GetMoveParent, CEntityIdentity::GetDebugName, Warning, CBaseEntity::EntityToWorldTransform, MatrixInvert, AngleMatrix, ConcatTransforms, MatrixAngles, CBaseEntity::SetLocalOrigin, CBaseEntity::SetLocalAngles (14 total)
// callers: CPointTeleport::InputTeleport, CPointTeleport::InputTeleportEntity, CPointTeleport::InputTeleportToCurrentPos, CPointTeleport::InputTeleportEntityToCurrentPos
// strings: "ERROR: (%s) can't teleport object (%s) as it has a parent (%s)!\n", "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_2352B12, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CPointTeleport::DoTeleport(
        CPointTeleport *const this,
        inputdata_t *const inputdata,
        const Vector *const vecOrigin,
        const QAngle *const angRotation,
        bool bOverrideTarget)
{
  int16 m_type; // di
  CBaseEntity *pCaller; // r15
  CBaseEntity *pActivator; // rbx
  char *m_pszString; // rdx
  CBaseEntity *EntityByName; // rbx
  CBaseEntity *v13; // rax
  const char *DebugName; // r13
  const char *v15; // rbx
  const char *v16; // rax
  CBaseEntity *MoveParent; // rax
  CBaseEntity *v18; // r9
  CBaseEntity *v19; // r8
  const char *v20; // rax
  const char *v21; // rcx
  const char *v22; // rdx
  double m_float; // xmm0_8
  Vector vModifiedOrigin; // [rsp+10h] [rbp-110h] BYREF
  QAngle aModifiedAngles; // [rsp+20h] [rbp-100h] BYREF
  matrix3x4_t matParentToWorld; // [rsp+30h] [rbp-F0h] BYREF
  matrix3x4_t matWorldToParent; // [rsp+60h] [rbp-C0h] BYREF
  matrix3x4_t matPointToWorld; // [rsp+90h] [rbp-90h] BYREF
  matrix3x4_t matOut; // [rsp+C0h] [rbp-60h] BYREF

  if ( bOverrideTarget )
  {
    m_type = inputdata->value.m_type;
    pCaller = inputdata->pCaller;
    pActivator = inputdata->pActivator;
    if ( m_type == 30 )
    {
      m_pszString = inputdata->value.m_pszString;
    }
    else
    {
      switch ( m_type )
      {
        case 0:
          goto LABEL_18;
        case 1:
          m_float = inputdata->value.m_float;
          goto LABEL_25;
        case 3:
        case 39:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%g %g %g",
            *inputdata->value.m_pszString,
            *(inputdata->value.m_uint64 + 4),
            *(inputdata->value.m_uint64 + 8));
          m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 4:
        case 27:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%g %g %g %g",
            *inputdata->value.m_pszString,
            *(inputdata->value.m_uint64 + 4),
            *(inputdata->value.m_uint64 + 8),
            *(inputdata->value.m_uint64 + 12));
          m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 5:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%d",
            inputdata->value.m_uint);
          goto LABEL_23;
        case 6:
          v21 = "true";
          v22 = "%s";
          if ( inputdata->value.m_char == 0 )
            v21 = "false";
          goto LABEL_20;
        case 8:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%c",
            inputdata->value.m_char);
          goto LABEL_23;
        case 9:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%d %d %d %d",
            inputdata->value.m_int,
            BYTE1(inputdata->value.m_int),
            BYTE2(inputdata->value.m_int),
            HIBYTE(inputdata->value.m_int));
          m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 25:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%g %g",
            *inputdata->value.m_pszString,
            *(inputdata->value.m_uint64 + 4));
          m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 26:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%lld",
            inputdata->value.m_uint64);
          goto LABEL_21;
        case 33:
          v21 = inputdata->value.m_pszString;
          v22 = "%llu";
LABEL_20:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v22, v21);
LABEL_21:
          m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 34:
          m_float = inputdata->value.m_float64;
LABEL_25:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
          m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 37:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%u",
            inputdata->value.m_uint);
LABEL_23:
          m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        default:
          v20 = VariantFieldTypeName(m_type);
          Warning("No conversion from %s to string at the moment!\n", v20);
LABEL_18:
          CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
          m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
      }
    }
    EntityByName = CGameEntitySystem::FindEntityByName(
                     g_pGameEntitySystem,
                     0,
                     m_pszString,
                     this,
                     pActivator,
                     pCaller,
                     0);
  }
  else
  {
    v18 = inputdata->pCaller;
    v19 = inputdata->pActivator;
    *&matOut.m_flMatVal[0][0] = this->m_target.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &matOut, this, v19, v18, 0);
  }
  if ( EntityByName != 0 )
  {
    if ( (*(EntityByName->_vptr_IHandleEntity + 140))(EntityByName) != 0 )
      (*(EntityByName->_vptr_IHandleEntity + 140))(EntityByName);
    if ( CPointTeleport::EntityMayTeleport(this, EntityByName) )
    {
      vModifiedOrigin = *vecOrigin;
      aModifiedAngles = *angRotation;
      if ( CBaseEntity::GetMoveParent(EntityByName) != 0 )
      {
        MoveParent = CBaseEntity::GetMoveParent(EntityByName);
        matParentToWorld = *CBaseEntity::EntityToWorldTransform(MoveParent);
        MatrixInvert(&matParentToWorld, &matWorldToParent);
        AngleMatrix(angRotation, vecOrigin, &matPointToWorld);
        ConcatTransforms(&matWorldToParent, &matPointToWorld, &matOut);
        MatrixAngles(&matOut, &aModifiedAngles);
        vModifiedOrigin.x = matOut.m_flMatVal[0][3];
        vModifiedOrigin.y = matOut.m_flMatVal[1][3];
        vModifiedOrigin.z = matOut.m_flMatVal[2][3];
        CBaseEntity::SetLocalOrigin(EntityByName, &vModifiedOrigin);
        CBaseEntity::SetLocalAngles(EntityByName, &aModifiedAngles);
      }
      else
      {
        (*(EntityByName->_vptr_IHandleEntity + 128))(EntityByName, &vModifiedOrigin, &aModifiedAngles, 0);
      }
    }
    else
    {
      v13 = CBaseEntity::GetMoveParent(EntityByName);
      DebugName = CEntityIdentity::GetDebugName(v13->m_pEntity);
      v15 = CEntityIdentity::GetDebugName(EntityByName->m_pEntity);
      v16 = CEntityIdentity::GetDebugName(this->m_pEntity);
      Warning("ERROR: (%s) can't teleport object (%s) as it has a parent (%s)!\n", v16, v15, DebugName);
    }
  }
}


