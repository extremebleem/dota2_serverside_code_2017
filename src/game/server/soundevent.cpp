// Reconstructed from DWARF by pahole; not original source.

// src/game/server/soundevent.cpp:17
class CSoundEventEntity : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	bool m_bStartOnSpawn;  // +0x308

	string_t m_iszSoundName;  // +0x310
	string_t m_iszSourceEntityName;  // +0x318
	bool m_bAlwaysTransmitToClient;  // +0x320

	EHANDLE2 m_hSource;  // +0x32c
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
	CSoundEventEntity(CSoundEventEntity &);
	CSoundEventEntity(CSoundEventEntity &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CSoundEventEntity();
	virtual void Spawn(const CEntityKeyValues *);
	virtual int UpdateTransmitState();
	void InputSetSoundName(inputdata_t &);
	void InputStartSound(inputdata_t &);
	void InputPauseSound(inputdata_t &);
	void InputUnPauseSound(inputdata_t &);
	void InputStopSound(inputdata_t &);
	void InputSetSourceEntity(inputdata_t &);
	void StartSound();
	void PauseSound(bool);
	void StopSound();
	void UpdateSourceEntity();
	virtual ~CSoundEventEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[64] UpdateTransmitState
	// sizeof = 816
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSoundEventEntity::~CSoundEventEntity  (line 17, @0x00000000023aad30, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CSoundEventEntity::~CSoundEventEntity(CSoundEventEntity *const this)
{
  this->_vptr_IHandleEntity = &off_40AC070;
  CBaseEntity::~CBaseEntity(this);
}


// CSoundEventEntity::~CSoundEventEntity  (line 17, @0x00000000023aad50, libserver.so)  // inlines: ~CSoundEventEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CSoundEventEntity::~CSoundEventEntity(CSoundEventEntity *const this)
{
  this->_vptr_IHandleEntity = &off_40AC070;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CSoundEventEntity::GetEntityClass  (line 20, @0x00000000023a94c0, libserver.so)
CEntityClass *__cdecl CSoundEventEntity::GetEntityClass()
{
  return g_pEntityCSoundEventEntityClass;
}


// CSoundEventEntity::Schema_DynamicBinding  (line 20, @0x00000000023a94d0, libserver.so)
// globals: CSoundEventEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSoundEventEntity::Schema_DynamicBinding(const CSoundEventEntity *const this)
{
  return CSoundEventEntity::s_pSchemaBinding;
}


// CSoundEventEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 20, @0x00000000023a94e0, libserver.so)
// globals: CSoundEventEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSoundEventEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CSoundEventEntity::CEntityInstanceEntityClass *const this)
{
  return CSoundEventEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CSoundEventEntity::CEntityInstanceEntityClass::DestructInstance  (line 20, @0x00000000023a94f0, libserver.so)  // inlines: Destruct<CSoundEventEntity>
void __fastcall CSoundEventEntity::CEntityInstanceEntityClass::DestructInstance(
        CSoundEventEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CSoundEventEntity::CEntityInstanceEntityClass::FreeInstance  (line 20, @0x00000000023a9510, libserver.so)
void __fastcall CSoundEventEntity::CEntityInstanceEntityClass::FreeInstance(
        CSoundEventEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CSoundEventEntity::CEntityInstanceEntityClass::CanAllocate  (line 20, @0x00000000023a9530, libserver.so)
bool __fastcall CSoundEventEntity::CEntityInstanceEntityClass::CanAllocate(
        const CSoundEventEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CSoundEventEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 20, @0x00000000023a9540, libserver.so)
// globals: CSoundEventEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CSoundEventEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CSoundEventEntity::CEntityInstanceEntityClass *const this)
{
  return CSoundEventEntity::s_pSchemaBinding;
}


// CSoundEventEntity::CEntityInstanceEntityClass::AllocateInstance  (line 20, @0x00000000023aa970, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CSoundEventEntity::CEntityInstanceEntityClass::AllocateInstance(
        CSoundEventEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 816);
  memset(v1, 0, 0x330u);
  return v1;
}


// CSoundEventEntity::CEntityInstanceEntityClass::ConstructInstance  (line 20, @0x00000000023aaae0, libserver.so)  // inlines: CEntityHandle, CSoundEventEntity, CUtlSymbolLarge, Construct<CSoundEventEntity>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CSoundEventEntity::CEntityInstanceEntityClass::ConstructInstance(
        CSoundEventEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = 0;
    *p = &off_40AC070;
    *(p + 99) = 0;
    *(p + 201) = 0;
    *(p + 202) = -1;
    *(p + 203) = -1;
    *(p + 800) = 0;
  }
  return p;
}


// CSoundEventEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x00000000023acc50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CSoundEventEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSoundEventEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CSoundEventEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x00000000023acc70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CSoundEventEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSoundEventEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CSoundEventEntity::GetEntityClassInternal  (line 20, @0x00000000023b4610, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "point_soundevent", "CSoundEventEntity"
// globals: `guard variable for'CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass, CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CSoundEventEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CSoundEventEntity::GetEntityClassInfo(void)::g_EntityCSoundEventEntityClassInfo, CSoundEventEntity::GetEntityClassInfo(void)::g_EntityCSoundEventEntityClassInfo
CEntityClass *__cdecl CSoundEventEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass) != 0 )
  {
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_designerName.u.m_Id = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass._vptr_CEntityClass = off_3F79390;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_ComponentOffsets.m_Size = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_AllHelpers.m_Size = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_classInputs.m_Size = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_classOutputs.m_Size = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_requiredEHandle.m_Index = -1;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_hNetworkSerializer = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_pBaseClassInfo = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_pClassInfo = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_flags = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_nAllHelpersFlags = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_pScriptClassDesc = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_pInputs = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_nInputCount = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_pOutputs = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_nOutputCount = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_pGameClass = 0;
    CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass._vptr_CEntityClass = off_40ABFF0;
    __cxa_guard_release(&`guard variable for'CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass);
    __cxa_atexit(
      CSoundEventEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCSoundEventEntityClass != 0 )
    return &CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass;
  if ( `guard variable for'CSoundEventEntity::GetEntityClassInfo(void)::g_EntityCSoundEventEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CSoundEventEntity::GetEntityClassInfo(void)::g_EntityCSoundEventEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CSoundEventEntity::GetEntityClassInfo(void)::g_EntityCSoundEventEntityClassInfo,
      "CSoundEventEntity",
      "point_soundevent",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CSoundEventEntity::GetEntityClassInfo(void)::g_EntityCSoundEventEntityClassInfo);
  }
  CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_pClassInfo = &CSoundEventEntity::GetEntityClassInfo(void)::g_EntityCSoundEventEntityClassInfo;
  CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_pBaseClassInfo = CSoundEventEntity::GetEntityClassInfo(void)::g_EntityCSoundEventEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCSoundEventEntityClass = &CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass;
  CSoundEventEntity::GetEntityClassInfo(void)::g_EntityCSoundEventEntityClassInfo.m_pClass = &CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass;
  CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCSoundEventEntityClass->m_pComponentOverrides = 0;
  return &CSoundEventEntity::GetEntityClassInternal(void)::g_EntityCSoundEventEntityClass;
}


// CSoundEventEntity::GetDataDescMap  (line 52, @0x0000000002381070, libserver.so)
// globals: CSoundEventEntity::m_DataMap
datamap_t *__fastcall CSoundEventEntity::GetDataDescMap(CSoundEventEntity *const this)
{
  return &CSoundEventEntity::m_DataMap;
}


// CSoundEventEntity::AddDatadescMetadataKeys  (line 52, @0x0000000002396ac0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CSoundEventEntity::GetEntityClass(void)
void __fastcall CSoundEventEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CSoundEventEntity::GetEntityClass);
}


// CSoundEventEntity::GetBaseMap  (line 52, @0x0000000002396ae0, libserver.so)
datamap_t *__cdecl CSoundEventEntity::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CSoundEventEntity>  (line 52, @0x0000000002396af0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CSoundEventEntity"
// globals: `guard variable for'DataMapInit<CSoundEventEntity>(CSoundEventEntity *)::nameHolder, CSoundEventEntity::GetEntityClass(void), CSoundEventEntity::m_DataMap, DataMapInit<CSoundEventEntity>(CSoundEventEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CSoundEventEntity>(CSoundEventEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CSoundEventEntity>(CSoundEventEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSoundEventEntity>(CSoundEventEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CSoundEventEntity>(CSoundEventEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CSoundEventEntity>(CSoundEventEntity *)::nameHolder.m_pszBase = "CSoundEventEntity";
    DataMapInit<CSoundEventEntity>(CSoundEventEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CSoundEventEntity>(CSoundEventEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CSoundEventEntity>(CSoundEventEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CSoundEventEntity>(CSoundEventEntity *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSoundEventEntity>(CSoundEventEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CSoundEventEntity>(CSoundEventEntity *)::nameHolder,
      &_dso_handle);
  }
  CSoundEventEntity::m_DataMap.dataNumFields = 12;
  CSoundEventEntity::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CSoundEventEntity::m_DataMap.dataDesc = &DataMapInit<CSoundEventEntity>(CSoundEventEntity *)::dataDesc[1];
  AddDatadescMetadataKeys(&CSoundEventEntity::m_DataMap, CSoundEventEntity::GetEntityClass);
  return &CSoundEventEntity::m_DataMap;
}


// CSoundEventEntity::CSoundEventEntity  (line 71, @0x0000000002396bc0, libserver.so)  // inlines: CEntityHandle, CUtlSymbolLarge, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CBaseEntity::CBaseEntity
void __fastcall CSoundEventEntity::CSoundEventEntity(CSoundEventEntity *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->m_iszSoundName.u.m_Id = 0;
  this->_vptr_IHandleEntity = &off_40AC070;
  this->m_iszSourceEntityName.u.m_Id = 0;
  this->m_nGUID.m_nGuid.m_Data = 0;
  this->m_nGUID.m_hStackHash = -1;
  this->m_hSource.m_Index = -1;
  this->m_bAlwaysTransmitToClient = 0;
}


// CSoundEventEntity::Spawn  (line 80, @0x000000000239e3f0, libserver.so)  // inlines: CVariantBase, Free, InValidate, ~CVariantBase
// calls: CSoundEventEntity::UpdateSourceEntity, CBaseEntity::Spawn, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CServerEventQueue::AddEvent, CSoundEventEntity::StartSound, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CSoundEventEntity::Spawn(CSoundEventEntity *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity *pCaller; // [rsp+0h] [rbp-50h]
  variant_t dummyValue; // [rsp+10h] [rbp-40h] BYREF
  CVariantBase<CVariantDefaultAllocator> pDest; // [rsp+20h] [rbp-30h] BYREF
  variant_t v7; // 0:rcx.8,8:r8d.4

  this->m_nGUID.m_nGuid.m_Data = 0;
  this->m_nGUID.m_hStackHash = -1;
  CSoundEventEntity::UpdateSourceEntity(this);
  CBaseEntity::Spawn(this, pKeyValues);
  if ( this->m_bStartOnSpawn )
  {
    dummyValue.m_flags = 0;
    pDest.m_type = 0;
    dummyValue.m_type = 0;
    dummyValue.m_uint64 = 0;
    pDest.m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&dummyValue, &pDest);
    *&v7.m_type = this;
    v7.m_uint64 = &pDest;
    LODWORD(pCaller) = 0;
    CServerEventQueue::AddEvent(&g_EventQueue, this, "StartSound", v7, 0.1, this, pCaller);
    if ( (pDest.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pDest.m_uint64);
    CSoundEventEntity::StartSound(this);
    if ( (dummyValue.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, dummyValue.m_uint64);
  }
}


// CSoundEventEntity::UpdateTransmitState  (line 97, @0x0000000002381c50, libserver.so)
// calls: CBaseEntity::UpdateTransmitState, CBaseEntity::SetTransmitState
int __fastcall CSoundEventEntity::UpdateTransmitState(CSoundEventEntity *const this)
{
  if ( this->m_bAlwaysTransmitToClient )
    return CBaseEntity::SetTransmitState(this, 4);
  else
    return CBaseEntity::UpdateTransmitState(this);
}


// CSoundEventEntity::InputSetSoundName  (line 112, @0x00000000023857b0, libserver.so)  // inlines: AssignTo, StringID, TempString, ToString, operator=
// calls: MakeEntitySystemString, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_23857E1, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CSoundEventEntity::InputSetSoundName(CSoundEventEntity *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8
  UtlSymLargeId_t v8; // [rsp+10h] [rbp-20h]

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_8;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_19;
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
        goto LABEL_11;
      case 6:
        v6 = "true";
        if ( inputdata->value.m_char == 0 )
          v6 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v6);
        goto LABEL_15;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_11;
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
        goto LABEL_15;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_15:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_19:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_11:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v5 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v5);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  this->m_iszSoundName.u.m_Id = v8;
}


// CSoundEventEntity::InputSetSourceEntity  (line 119, @0x0000000002396dd0, libserver.so)  // inlines: AssignTo, StringID, TempString, ToString, operator=
// calls: MakeEntitySystemString, CSoundEventEntity::UpdateSourceEntity, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_2396E01, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CSoundEventEntity::InputSetSourceEntity(CSoundEventEntity *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8
  UtlSymLargeId_t v8; // [rsp+10h] [rbp-20h]

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_8;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_19;
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
        goto LABEL_11;
      case 6:
        v6 = "true";
        if ( inputdata->value.m_char == 0 )
          v6 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v6);
        goto LABEL_15;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_11;
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
        goto LABEL_15;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_15:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_19:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_11:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v5 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v5);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  this->m_iszSourceEntityName.u.m_Id = v8;
  CSoundEventEntity::UpdateSourceEntity(this);
}


// CSoundEventEntity::InputStartSound  (line 127, @0x000000000239c320, libserver.so)
// calls: CSoundEventEntity::StartSound
void __fastcall CSoundEventEntity::InputStartSound(CSoundEventEntity *const this, inputdata_t *const inputdata)
{
  CSoundEventEntity::StartSound(this);
}


// CSoundEventEntity::InputPauseSound  (line 133, @0x0000000002396c70, libserver.so)
// calls: CSoundEventEntity::PauseSound
void __fastcall CSoundEventEntity::InputPauseSound(CSoundEventEntity *const this, inputdata_t *const inputdata)
{
  CSoundEventEntity::PauseSound(this, 1);
}


// CSoundEventEntity::InputUnPauseSound  (line 139, @0x0000000002396c80, libserver.so)
// calls: CSoundEventEntity::PauseSound
void __fastcall CSoundEventEntity::InputUnPauseSound(CSoundEventEntity *const this, inputdata_t *const inputdata)
{
  CSoundEventEntity::PauseSound(this, 0);
}


// CSoundEventEntity::InputStopSound  (line 145, @0x0000000002396ce0, libserver.so)
// calls: CSoundEventEntity::StopSound
void __fastcall CSoundEventEntity::InputStopSound(CSoundEventEntity *const this, inputdata_t *const inputdata)
{
  CSoundEventEntity::StopSound(this);
}


// CSoundEventEntity::StartSound  (line 152, @0x000000000239bfb0, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CEntityIndex, CSosFieldData, CSosFieldDataFloat3, CVariantBase, ClearData, Free, GetDataPtr, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Init, InputStopSound, IsValid, LookupEntity, SetValue, String, ToCStr, entindex, inputdata_t, operator CBaseEntity*, operator=, ~CBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3, ~CVariantBase, ~inputdata_t
// calls: CBaseEntity::GetAbsOrigin, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CSoundOpGameSystem::StartSoundEvent, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], CEntityInstance::GetEntityIndex, CSoundEventEntity::StopSound, __stack_chk_fail, CSosFieldData::ClearData (14 total)
// callers: CSoundEventEntity::InputStartSound, CSoundEventEntity::Spawn
// globals: CEntityHandle::gm_pEntityList
void __fastcall CSoundEventEntity::StartSound(CSoundEventEntity *const this)
{
  int32 m_Data; // r14d
  const Vector *AbsOrigin; // rax
  vec_t y; // xmm2_4
  vec_t z; // xmm3_4
  int v6; // r15d
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  const char *m_pAsString; // rdx
  vec_t *v11; // rax
  const CBaseEntity *m_pInstance; // r12
  const Vector *v13; // rax
  vec_t v14; // [rsp+8h] [rbp-1A8h]
  vec_t v15; // [rsp+Ch] [rbp-1A4h]
  inputdata_t dummy; // [rsp+10h] [rbp-1A0h] BYREF
  CBroadcastRecipientFilter filterAll; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v18; // [rsp+178h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  if ( this->m_nGUID.m_nGuid.m_Data != 0 )
  {
    dummy.value.m_uint64 = 0;
    dummy.value.m_type = 0;
    dummy.value.m_flags = 0;
    CSoundEventEntity::StopSound(this);
  }
  m_Data = 0;
  if ( this->m_bAlwaysTransmitToClient )
    m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  y = AbsOrigin->y;
  z = AbsOrigin->z;
  v6 = _mm_cvtsi128_si32(LODWORD(AbsOrigin->x));
  m_Index = this->m_hSource.m_Index;
  v14 = y;
  v15 = z;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSource.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hSource.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
      {
        m_pInstance = v9->m_pInstance;
        if ( v9->m_pInstance != 0 )
        {
          m_Data = CEntityInstance::GetEntityIndex(v9->m_pInstance).m_Data;
          v13 = CBaseEntity::GetAbsOrigin(m_pInstance);
          v6 = _mm_cvtsi128_si32(LODWORD(v13->x));
          v14 = v13->y;
          v15 = v13->z;
        }
      }
    }
  }
  CRecipientFilter::CRecipientFilter(&filterAll);
  filterAll._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filterAll);
  m_pAsString = "";
  if ( this->m_iszSoundName.u.m_Id != 0 )
    m_pAsString = this->m_iszSoundName.u.m_pAsString;
  this->m_nGUID = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filterAll, m_pAsString, m_Data, -1, 0.0);
  LOBYTE(dummy.pActivator) = -1;
  LODWORD(dummy.pCaller) = 0;
  dummy.value.m_uint64 = 0;
  HIDWORD(dummy.pActivator) = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  LOBYTE(dummy.pActivator) = 10;
  v11 = operator new[](0xCu);
  dummy.value.m_uint64 = v11;
  LODWORD(dummy.pCaller) = 12;
  *v11 = v6;
  v11[1] = v14;
  v11[2] = v15;
  CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filterAll, this->m_nGUID, "position", &dummy, 0, 0);
  if ( LODWORD(dummy.pCaller) > 8 && dummy.value.m_uint64 != 0 )
    operator delete[](dummy.value.m_pData);
  filterAll._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filterAll);
}


// CSoundEventEntity::PauseSound  (line 176, @0x0000000002396c20, libserver.so)
// calls: CSoundOpGameSystem::UnPauseSoundEvent, CSoundOpGameSystem::PauseSoundEvent
// callers: CSoundEventEntity::InputPauseSound, CSoundEventEntity::InputUnPauseSound
void __fastcall CSoundEventEntity::PauseSound(CSoundEventEntity *const this, bool bPause)
{
  bool v2; // zf
  SndOpEventGuid_t *p_m_nGUID; // rsi

  if ( this->m_nGUID.m_nGuid.m_Data != 0 )
  {
    v2 = !bPause;
    p_m_nGUID = &this->m_nGUID;
    if ( v2 )
      CSoundOpGameSystem::UnPauseSoundEvent(g_pSoundOpGameSystem, p_m_nGUID);
    else
      CSoundOpGameSystem::PauseSoundEvent(g_pSoundOpGameSystem, p_m_nGUID);
  }
}


// CSoundEventEntity::StopSound  (line 192, @0x0000000002396c90, libserver.so)  // inlines: InValidate
// calls: CSoundOpGameSystem::StopSoundEvent
// callers: CSoundEventEntity::InputStopSound, CSoundEventEntity::StartSound
void __fastcall CSoundEventEntity::StopSound(CSoundEventEntity *const this)
{
  if ( this->m_nGUID.m_nGuid.m_Data != 0 )
  {
    CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nGUID);
    this->m_nGUID.m_nGuid.m_Data = 0;
    this->m_nGUID.m_hStackHash = -1;
  }
}


// CSoundEventEntity::UpdateSourceEntity  (line 203, @0x0000000002396cf0, libserver.so)  // inlines: FindFirstEntityByName, GetEHandle, GetEntryIndex, GetSerialNumber, Set, String, ToCStr, operator=
// calls: EntityInstanceByNameIter_t::EntityInstanceByNameIter_t, EntityInstanceByNameIter_t::First
// callers: CSoundEventEntity::InputSetSourceEntity, CSoundEventEntity::Spawn
void __fastcall CSoundEventEntity::UpdateSourceEntity(CSoundEventEntity *const this)
{
  const char *m_pAsString; // rsi
  CEntityInstance *v3; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // cx
  EntityInstanceByNameIter_t v7; // [rsp+10h] [rbp-50h] BYREF

  if ( this->m_iszSourceEntityName.u.m_Id != 0 )
  {
    m_pAsString = this->m_iszSourceEntityName.u.m_pAsString;
    if ( *m_pAsString != 0
      && (EntityInstanceByNameIter_t::EntityInstanceByNameIter_t(
            &v7,
            m_pAsString,
            0,
            0,
            0,
            0,
            EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY),
          (v3 = EntityInstanceByNameIter_t::First(&v7)) != 0)
      && (m_pEntity = v3->m_pEntity) != 0 )
    {
      v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v6 = 0x7FFF;
      else
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hSource.m_Index) = v6 | this->m_hSource.m_Index & 0x8000;
      this->m_hSource.m_Index = (v5 << 15) | this->m_hSource.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hSource.m_Index = -1;
    }
  }
}


