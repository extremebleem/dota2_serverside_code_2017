// Reconstructed from DWARF by pahole; not original source.

// src/game/server/pathcorner.cpp:17
class CPathCornerCrash : public CPathCorner {
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
	CPathCornerCrash(CPathCornerCrash &);
	CPathCornerCrash(CPathCornerCrash &);
	CPathCornerCrash();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CPathCornerCrash();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 816
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPathCornerCrash::~CPathCornerCrash  (line 17, @0x0000000002306820, libserver.so)  // inlines: ~CPathCorner, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPathCornerCrash::~CPathCornerCrash(CPathCornerCrash *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CPathCornerCrash::~CPathCornerCrash  (line 17, @0x0000000002306840, libserver.so)  // inlines: ~CPathCorner, ~CPathCornerCrash, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPathCornerCrash::~CPathCornerCrash(CPathCornerCrash *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPathCornerCrash::Schema_DynamicBinding  (line 19, @0x0000000002303110, libserver.so)
// globals: CPathCornerCrash::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPathCornerCrash::Schema_DynamicBinding(const CPathCornerCrash *const this)
{
  return CPathCornerCrash::s_pSchemaBinding;
}


// CPathCornerCrash::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 19, @0x0000000002303120, libserver.so)
// globals: CPathCornerCrash::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPathCornerCrash::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPathCornerCrash::CEntityInstanceEntityClass *const this)
{
  return CPathCornerCrash::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPathCornerCrash::CEntityInstanceEntityClass::DestructInstance  (line 19, @0x0000000002303130, libserver.so)  // inlines: Destruct<CPathCornerCrash>
void __fastcall CPathCornerCrash::CEntityInstanceEntityClass::DestructInstance(
        CPathCornerCrash::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPathCornerCrash::CEntityInstanceEntityClass::FreeInstance  (line 19, @0x0000000002303150, libserver.so)
void __fastcall CPathCornerCrash::CEntityInstanceEntityClass::FreeInstance(
        CPathCornerCrash::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPathCornerCrash::CEntityInstanceEntityClass::CanAllocate  (line 19, @0x0000000002303170, libserver.so)
bool __fastcall CPathCornerCrash::CEntityInstanceEntityClass::CanAllocate(
        const CPathCornerCrash::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPathCornerCrash::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 19, @0x0000000002303180, libserver.so)
// globals: CPathCornerCrash::s_pSchemaBinding
const ISchemaBinding *__fastcall CPathCornerCrash::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPathCornerCrash::CEntityInstanceEntityClass *const this)
{
  return CPathCornerCrash::s_pSchemaBinding;
}


// CPathCornerCrash::CEntityInstanceEntityClass::AllocateInstance  (line 19, @0x0000000002305920, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPathCornerCrash::CEntityInstanceEntityClass::AllocateInstance(
        CPathCornerCrash::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 816);
  memset(v1, 0, 0x330u);
  return v1;
}


// CPathCornerCrash::CEntityInstanceEntityClass::ConstructInstance  (line 19, @0x0000000002306040, libserver.so)  // inlines: CEntityIOOutput, CPathCorner, CPathCornerCrash, CPointEntity, CUtlSymbolLarge, Construct<CPathCornerCrash>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPathCornerCrash::CEntityInstanceEntityClass::ConstructInstance(
        CPathCornerCrash::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = 0;
    *(p + 98) = off_3F7C190;
    *(p + 195) = -1082130432;
    *(p + 101) = 0;
    *p = &off_40744F0;
  }
  return p;
}


// CPathCornerCrash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x0000000002308f40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPathCornerCrash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPathCornerCrash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPathCornerCrash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x0000000002308f60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPathCornerCrash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPathCornerCrash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPathCornerCrash::GetEntityClassInternal  (line 19, @0x00000000023144d0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPathCorner::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "path_corner_crash", "CPathCornerCrash"
// globals: `guard variable for'CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass, CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPathCornerCrash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPathCornerCrash::GetEntityClassInfo(void)::g_EntityCPathCornerCrashClassInfo, CPathCornerCrash::GetEntityClassInfo(void)::g_EntityCPathCornerCrashClassInfo
CEntityClass *__cdecl CPathCornerCrash::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass) != 0 )
  {
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_designerName.u.m_Id = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass._vptr_CEntityClass = off_3F79390;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_ComponentOffsets.m_Size = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_AllHelpers.m_Size = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_classInputs.m_Size = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_classOutputs.m_Size = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_requiredEHandle.m_Index = -1;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_hNetworkSerializer = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_pBaseClassInfo = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_pClassInfo = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_flags = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_nAllHelpersFlags = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_pScriptClassDesc = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_pInputs = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_nInputCount = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_pOutputs = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_nOutputCount = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_pGameClass = 0;
    CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass._vptr_CEntityClass = off_4074470;
    __cxa_guard_release(&`guard variable for'CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass);
    __cxa_atexit(
      CPathCornerCrash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass,
      &_dso_handle);
  }
  if ( g_pEntityCPathCornerCrashClass != 0 )
    return &CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass;
  if ( `guard variable for'CPathCornerCrash::GetEntityClassInfo(void)::g_EntityCPathCornerCrashClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPathCornerCrash::GetEntityClassInfo(void)::g_EntityCPathCornerCrashClassInfo) != 0 )
  {
    EntityClassInfo = CPathCorner::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPathCornerCrash::GetEntityClassInfo(void)::g_EntityCPathCornerCrashClassInfo,
      "CPathCornerCrash",
      "path_corner_crash",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPathCornerCrash::GetEntityClassInfo(void)::g_EntityCPathCornerCrashClassInfo);
  }
  CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_pClassInfo = &CPathCornerCrash::GetEntityClassInfo(void)::g_EntityCPathCornerCrashClassInfo;
  CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_pBaseClassInfo = CPathCornerCrash::GetEntityClassInfo(void)::g_EntityCPathCornerCrashClassInfo.m_pBaseClassInfo;
  g_pEntityCPathCornerCrashClass = &CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass;
  CPathCornerCrash::GetEntityClassInfo(void)::g_EntityCPathCornerCrashClassInfo.m_pClass = &CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass;
  CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPathCornerCrashClass->m_pComponentOverrides = 0;
  return &CPathCornerCrash::GetEntityClassInternal(void)::g_EntityCPathCornerCrashClass;
}


// CPathCorner::GetDataDescMap  (line 24, @0x00000000022b7870, libserver.so)
// globals: CPathCorner::m_DataMap
datamap_t *__fastcall CPathCorner::GetDataDescMap(CPathCorner *const this)
{
  return &CPathCorner::m_DataMap;
}


// CPathCorner::AddDatadescMetadataKeys  (line 24, @0x00000000022ca8c0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPathCorner::GetEntityClass(void)
void __fastcall CPathCorner::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPathCorner::GetEntityClass);
}


// CPathCorner::GetBaseMap  (line 24, @0x00000000022ca8e0, libserver.so)
datamap_t *__cdecl CPathCorner::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CPathCorner>  (line 24, @0x00000000022ca8f0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPathCorner"
// globals: `guard variable for'DataMapInit<CPathCorner>(CPathCorner *)::nameHolder, `guard variable for'DataMapInit<CPathCorner>(CPathCorner *)::dataDesc, CPathCorner::GetEntityClass(void), CPathCorner::m_DataMap, DataMapInit<CPathCorner>(CPathCorner *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPathCorner>(CPathCorner *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPathCorner>(CPathCorner *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPathCorner>(CPathCorner *)::nameHolder) != 0 )
  {
    DataMapInit<CPathCorner>(CPathCorner *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPathCorner>(CPathCorner *)::nameHolder.m_pszBase = "CPathCorner";
    DataMapInit<CPathCorner>(CPathCorner *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPathCorner>(CPathCorner *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPathCorner>(CPathCorner *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPathCorner>(CPathCorner *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPathCorner>(CPathCorner *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPathCorner>(CPathCorner *)::nameHolder,
      &_dso_handle);
  }
  CPathCorner::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPathCorner>(CPathCorner *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPathCorner>(CPathCorner *)::dataDesc) != 0 )
  {
    DataMapInit<CPathCorner>(CPathCorner *)::dataDesc[6].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPathCorner>(CPathCorner *)::dataDesc);
  }
  CPathCorner::m_DataMap.dataNumFields = 6;
  CPathCorner::m_DataMap.dataDesc = &DataMapInit<CPathCorner>(CPathCorner *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPathCorner::m_DataMap, CPathCorner::GetEntityClass);
  return &CPathCorner::m_DataMap;
}


// CPathCorner::CPathCorner  (line 48, @0x00000000022caa10, libserver.so)  // inlines: CEntityIOOutput, CPointEntity, CUtlSymbolLarge
// calls: CBaseEntity::CBaseEntity
void __fastcall CPathCorner::CPathCorner(CPathCorner *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->m_flWait = 0.0;
  this->_vptr_IHandleEntity = &off_4074B90;
  this->m_flRadius = -1.0;
  this->m_OnPass._vptr_CEntityIOOutput = off_3F7C190;
  this->m_MoveActivityName.u.m_Id = 0;
}


// CPathCorner::Spawn  (line 58, @0x00000000022b8e70, libserver.so)
// calls: CPointEntity::Spawn
void __fastcall CPathCorner::Spawn(CPathCorner *const this, const CEntityKeyValues *pKeyValues)
{
  CPointEntity::Spawn(this, pKeyValues);
}


// CPathCorner::InputSetNextPathCorner  (line 69, @0x00000000022c7850, libserver.so)  // inlines: AssignTo, StringID, TempString, ToString, operator=
// calls: MakeEntitySystemString, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_22C7881, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CPathCorner::InputSetNextPathCorner(CPathCorner *const this, inputdata_t *const inputdata)
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
  this->m_target.u.m_Id = v8;
}


// CPathCorner::InputInPass  (line 78, @0x00000000022f1eb0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CPathCorner::InputInPass(CPathCorner *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pCaller; // rdx
  CBaseEntity *pActivator; // rsi
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  value.m_flags = 0;
  pCaller = inputdata->pCaller;
  value.m_type = 0;
  pActivator = inputdata->pActivator;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnPass, pActivator, pCaller, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CPathCorner::DrawDebugTextOverlays  (line 88, @0x00000000022b8a80, libserver.so)  // inlines: V_strncpy<long unsigned int>
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, _V_strncpy, __stack_chk_fail
// strings: "Target: %s", "Target:   -  "
int __fastcall CPathCorner::DrawDebugTextOverlays(
        CPathCorner *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v5; // r12
  int v6; // ebx
  int v7; // esi
  char tempstr[264]; // [rsp+10h] [rbp-130h] BYREF
  unsigned __int64 v10; // [rsp+118h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v10 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    if ( this->m_target.u.m_Id != 0 )
      V_snprintf(tempstr, 255, "Target: %s", this->m_target.u.m_pAsString);
    else
      _V_strncpy(tempstr, "Target:   -  ", 255);
    v7 = v6++;
    CBaseEntity::EntityText(this, v7, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// CPathCorner::DrawEntityDebugOverlays  (line 116, @0x00000000022b9380, libserver.so)  // inlines: CUtlSymbolLarge, Vector, operator!=
// calls: CBaseEntity::GetAbsOrigin, NDebugOverlay::Box, CBaseEntity::DrawEntityDebugOverlays, CGameEntitySystem::FindEntityByName, NDebugOverlay::Line
void __fastcall CPathCorner::DrawEntityDebugOverlays(CPathCorner *const this, uint64 nDebugOverlayBits)
{
  const Vector *AbsOrigin; // rax
  const CBaseEntity *EntityByName; // rax
  const Vector *v6; // r13
  const Vector *v7; // rax
  Vector mins; // [rsp+10h] [rbp-40h] BYREF
  Vector maxs; // [rsp+20h] [rbp-30h] BYREF

  if ( (nDebugOverlayBits & 0x24) != 0 )
  {
    maxs.x = 10.0;
    maxs.y = 10.0;
    maxs.z = 10.0;
    mins.x = -10.0;
    mins.y = -10.0;
    mins.z = -10.0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    NDebugOverlay::Box(AbsOrigin, &mins, &maxs, 0xFFu, 100, 100, 0.0, 0);
    if ( this->m_target.u.m_Id != 0 )
    {
      *&maxs.x = this->m_target.u.m_Id;
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &maxs, this, 0, 0, 0);
      if ( EntityByName != 0 )
      {
        v6 = CBaseEntity::GetAbsOrigin(EntityByName);
        v7 = CBaseEntity::GetAbsOrigin(this);
        NDebugOverlay::Line(v7, v6, 0xFFu, 0x64u, 0x64u, 1, 0.0);
      }
    }
  }
  CBaseEntity::DrawEntityDebugOverlays(this, nDebugOverlayBits);
}


