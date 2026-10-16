// Reconstructed from DWARF by pahole; not original source.

// src/game/server/sound_opvar_set.cpp:14
class CSoundOpvarSetEntity : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	string_t m_iszStackName;  // +0x308
	string_t m_iszOperatorName;  // +0x310
	string_t m_iszOpvarName;  // +0x318
	float m_flOpvarValue;  // +0x320
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
	CSoundOpvarSetEntity(CSoundOpvarSetEntity &);
	CSoundOpvarSetEntity(CSoundOpvarSetEntity &);
	CSoundOpvarSetEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual int UpdateTransmitState();
	void InputSetStackName(inputdata_t &);
	void InputSetOperatorName(inputdata_t &);
	void InputSetOpvarName(inputdata_t &);
	void InputSetOpvar(inputdata_t &);
	void InputChangeOpvarValue(inputdata_t &);
	virtual ~CSoundOpvarSetEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[64] UpdateTransmitState
	// sizeof = 808
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSoundOpvarSetEntity::~CSoundOpvarSetEntity  (line 14, @0x00000000023aace0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CSoundOpvarSetEntity::~CSoundOpvarSetEntity(CSoundOpvarSetEntity *const this)
{
  this->_vptr_IHandleEntity = &off_40AA110;
  CBaseEntity::~CBaseEntity(this);
}


// CSoundOpvarSetEntity::~CSoundOpvarSetEntity  (line 14, @0x00000000023aad00, libserver.so)  // inlines: ~CSoundOpvarSetEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CSoundOpvarSetEntity::~CSoundOpvarSetEntity(CSoundOpvarSetEntity *const this)
{
  this->_vptr_IHandleEntity = &off_40AA110;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CSoundOpvarSetEntity::GetEntityClass  (line 17, @0x00000000023a91b0, libserver.so)
CEntityClass *__cdecl CSoundOpvarSetEntity::GetEntityClass()
{
  return g_pEntityCSoundOpvarSetEntityClass;
}


// CSoundOpvarSetEntity::Schema_DynamicBinding  (line 17, @0x00000000023a91c0, libserver.so)
// globals: CSoundOpvarSetEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSoundOpvarSetEntity::Schema_DynamicBinding(
        const CSoundOpvarSetEntity *const this)
{
  return CSoundOpvarSetEntity::s_pSchemaBinding;
}


// CSoundOpvarSetEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 17, @0x00000000023a91d0, libserver.so)
// globals: CSoundOpvarSetEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSoundOpvarSetEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CSoundOpvarSetEntity::CEntityInstanceEntityClass *const this)
{
  return CSoundOpvarSetEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CSoundOpvarSetEntity::CEntityInstanceEntityClass::DestructInstance  (line 17, @0x00000000023a91e0, libserver.so)  // inlines: Destruct<CSoundOpvarSetEntity>
void __fastcall CSoundOpvarSetEntity::CEntityInstanceEntityClass::DestructInstance(
        CSoundOpvarSetEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CSoundOpvarSetEntity::CEntityInstanceEntityClass::FreeInstance  (line 17, @0x00000000023a9200, libserver.so)
void __fastcall CSoundOpvarSetEntity::CEntityInstanceEntityClass::FreeInstance(
        CSoundOpvarSetEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CSoundOpvarSetEntity::CEntityInstanceEntityClass::CanAllocate  (line 17, @0x00000000023a9220, libserver.so)
bool __fastcall CSoundOpvarSetEntity::CEntityInstanceEntityClass::CanAllocate(
        const CSoundOpvarSetEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CSoundOpvarSetEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 17, @0x00000000023a9230, libserver.so)
// globals: CSoundOpvarSetEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CSoundOpvarSetEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CSoundOpvarSetEntity::CEntityInstanceEntityClass *const this)
{
  return CSoundOpvarSetEntity::s_pSchemaBinding;
}


// CSoundOpvarSetEntity::CEntityInstanceEntityClass::AllocateInstance  (line 17, @0x00000000023aa8f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CSoundOpvarSetEntity::CEntityInstanceEntityClass::AllocateInstance(
        CSoundOpvarSetEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 808);
  memset(v1, 0, 0x328u);
  return v1;
}


// CSoundOpvarSetEntity::CEntityInstanceEntityClass::ConstructInstance  (line 17, @0x00000000023aaa30, libserver.so)  // inlines: CSoundOpvarSetEntity, CUtlSymbolLarge, Construct<CSoundOpvarSetEntity>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CSoundOpvarSetEntity::CEntityInstanceEntityClass::ConstructInstance(
        CSoundOpvarSetEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 97) = 0;
    *p = &off_40AA110;
    *(p + 98) = 0;
    *(p + 99) = 0;
  }
  return p;
}


// CSoundOpvarSetEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 17, @0x00000000023acc00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CSoundOpvarSetEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSoundOpvarSetEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CSoundOpvarSetEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 17, @0x00000000023acc20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CSoundOpvarSetEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSoundOpvarSetEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CSoundOpvarSetEntity::GetEntityClassInternal  (line 17, @0x00000000023b3f70, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "sound_opvar_set", "CSoundOpvarSetEntity"
// globals: `guard variable for'CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass, CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CSoundOpvarSetEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CSoundOpvarSetEntity::GetEntityClassInfo(void)::g_EntityCSoundOpvarSetEntityClassInfo, CSoundOpvarSetEntity::GetEntityClassInfo(void)::g_EntityCSoundOpvarSetEntityClassInfo
CEntityClass *__cdecl CSoundOpvarSetEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass) != 0 )
  {
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_designerName.u.m_Id = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass._vptr_CEntityClass = off_3F79390;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_ComponentOffsets.m_Size = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_AllHelpers.m_Size = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_classInputs.m_Size = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_classOutputs.m_Size = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_requiredEHandle.m_Index = -1;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_hNetworkSerializer = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_pBaseClassInfo = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_pClassInfo = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_flags = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_nAllHelpersFlags = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_pScriptClassDesc = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_pInputs = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_nInputCount = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_pOutputs = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_nOutputCount = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_pGameClass = 0;
    CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass._vptr_CEntityClass = off_40AA090;
    __cxa_guard_release(&`guard variable for'CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass);
    __cxa_atexit(
      CSoundOpvarSetEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCSoundOpvarSetEntityClass != 0 )
    return &CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass;
  if ( `guard variable for'CSoundOpvarSetEntity::GetEntityClassInfo(void)::g_EntityCSoundOpvarSetEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CSoundOpvarSetEntity::GetEntityClassInfo(void)::g_EntityCSoundOpvarSetEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CSoundOpvarSetEntity::GetEntityClassInfo(void)::g_EntityCSoundOpvarSetEntityClassInfo,
      "CSoundOpvarSetEntity",
      "sound_opvar_set",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CSoundOpvarSetEntity::GetEntityClassInfo(void)::g_EntityCSoundOpvarSetEntityClassInfo);
  }
  CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_pClassInfo = &CSoundOpvarSetEntity::GetEntityClassInfo(void)::g_EntityCSoundOpvarSetEntityClassInfo;
  CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_pBaseClassInfo = CSoundOpvarSetEntity::GetEntityClassInfo(void)::g_EntityCSoundOpvarSetEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCSoundOpvarSetEntityClass = &CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass;
  CSoundOpvarSetEntity::GetEntityClassInfo(void)::g_EntityCSoundOpvarSetEntityClassInfo.m_pClass = &CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass;
  CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCSoundOpvarSetEntityClass->m_pComponentOverrides = 0;
  return &CSoundOpvarSetEntity::GetEntityClassInternal(void)::g_EntityCSoundOpvarSetEntityClass;
}


// CSoundOpvarSetEntity::GetDataDescMap  (line 38, @0x0000000002380f70, libserver.so)
// globals: CSoundOpvarSetEntity::m_DataMap
datamap_t *__fastcall CSoundOpvarSetEntity::GetDataDescMap(CSoundOpvarSetEntity *const this)
{
  return &CSoundOpvarSetEntity::m_DataMap;
}


// CSoundOpvarSetEntity::AddDatadescMetadataKeys  (line 38, @0x0000000002391c90, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CSoundOpvarSetEntity::GetEntityClass(void)
void __fastcall CSoundOpvarSetEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CSoundOpvarSetEntity::GetEntityClass);
}


// CSoundOpvarSetEntity::GetBaseMap  (line 38, @0x0000000002391cb0, libserver.so)
datamap_t *__cdecl CSoundOpvarSetEntity::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CSoundOpvarSetEntity>  (line 38, @0x0000000002391cc0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CSoundOpvarSetEntity"
// globals: `guard variable for'DataMapInit<CSoundOpvarSetEntity>(CSoundOpvarSetEntity *)::nameHolder, CSoundOpvarSetEntity::GetEntityClass(void), CSoundOpvarSetEntity::m_DataMap, DataMapInit<CSoundOpvarSetEntity>(CSoundOpvarSetEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CSoundOpvarSetEntity>(CSoundOpvarSetEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CSoundOpvarSetEntity>(CSoundOpvarSetEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSoundOpvarSetEntity>(CSoundOpvarSetEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CSoundOpvarSetEntity>(CSoundOpvarSetEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CSoundOpvarSetEntity>(CSoundOpvarSetEntity *)::nameHolder.m_pszBase = "CSoundOpvarSetEntity";
    DataMapInit<CSoundOpvarSetEntity>(CSoundOpvarSetEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CSoundOpvarSetEntity>(CSoundOpvarSetEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CSoundOpvarSetEntity>(CSoundOpvarSetEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CSoundOpvarSetEntity>(CSoundOpvarSetEntity *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSoundOpvarSetEntity>(CSoundOpvarSetEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CSoundOpvarSetEntity>(CSoundOpvarSetEntity *)::nameHolder,
      &_dso_handle);
  }
  CSoundOpvarSetEntity::m_DataMap.dataNumFields = 9;
  CSoundOpvarSetEntity::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CSoundOpvarSetEntity::m_DataMap.dataDesc = &DataMapInit<CSoundOpvarSetEntity>(CSoundOpvarSetEntity *)::dataDesc[1];
  AddDatadescMetadataKeys(&CSoundOpvarSetEntity::m_DataMap, CSoundOpvarSetEntity::GetEntityClass);
  return &CSoundOpvarSetEntity::m_DataMap;
}


// CSoundOpvarSetEntity::Spawn  (line 54, @0x0000000002381720, libserver.so)
// calls: CBaseEntity::Spawn
void __fastcall CSoundOpvarSetEntity::Spawn(CSoundOpvarSetEntity *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
}


// CSoundOpvarSetEntity::InputSetStackName  (line 59, @0x0000000002384fd0, libserver.so)  // inlines: AssignTo, StringID, TempString, ToString, operator=
// calls: MakeEntitySystemString, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_2385001, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CSoundOpvarSetEntity::InputSetStackName(CSoundOpvarSetEntity *const this, inputdata_t *const inputdata)
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
  this->m_iszStackName.u.m_Id = v8;
}


// CSoundOpvarSetEntity::InputSetOperatorName  (line 64, @0x0000000002385510, libserver.so)  // inlines: AssignTo, StringID, TempString, ToString, operator=
// calls: MakeEntitySystemString, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_2385541, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CSoundOpvarSetEntity::InputSetOperatorName(
        CSoundOpvarSetEntity *const this,
        inputdata_t *const inputdata)
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
  this->m_iszOperatorName.u.m_Id = v8;
}


// CSoundOpvarSetEntity::InputSetOpvarName  (line 69, @0x0000000002385270, libserver.so)  // inlines: AssignTo, StringID, TempString, ToString, operator=
// calls: MakeEntitySystemString, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_23852A1, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CSoundOpvarSetEntity::InputSetOpvarName(CSoundOpvarSetEntity *const this, inputdata_t *const inputdata)
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
  this->m_iszOpvarName.u.m_Id = v8;
}


// CSoundOpvarSetEntity::InputSetOpvar  (line 74, @0x00000000023886a0, libserver.so)  // inlines: AllocateData, CSosFieldData, CSosFieldDataFloat, ClearData, CopyData, GetDataPtr, Init, String, ToCStr, V_memcpy, memcpy, ~CSosFieldData, ~CSosFieldDataFloat
// calls: CSoundOpGameSystem::SetLibraryStackField, operator delete [], CSosFieldData::ClearData, _Unwind_Resume
void __fastcall CSoundOpvarSetEntity::InputSetOpvar(CSoundOpvarSetEntity *const this, inputdata_t *const inputdata)
{
  __m128i m_flOpvarValue_low; // xmm0
  int v4; // r14d
  const char *m_pAsString; // rcx
  const char *v6; // rdx
  const char *v7; // rsi
  CSosFieldData fieldData; // [rsp+0h] [rbp-40h] BYREF

  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  m_flOpvarValue_low = LODWORD(this->m_flOpvarValue);
  fieldData.m_pData = 0;
  v4 = _mm_cvtsi128_si32(m_flOpvarValue_low);
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
  fieldData.m_nAllocSize = 4;
  LODWORD(fieldData.m_pData) = v4;
  m_pAsString = "";
  if ( this->m_iszOpvarName.u.m_Id != 0 )
    m_pAsString = this->m_iszOpvarName.u.m_pAsString;
  v6 = "";
  if ( this->m_iszOperatorName.u.m_Id != 0 )
    v6 = this->m_iszOperatorName.u.m_pAsString;
  v7 = "";
  if ( this->m_iszStackName.u.m_Id != 0 )
    v7 = this->m_iszStackName.u.m_pAsString;
  CSoundOpGameSystem::SetLibraryStackField(g_pSoundOpGameSystem, v7, v6, m_pAsString, &fieldData, 0);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
}


// CSoundOpvarSetEntity::InputChangeOpvarValue  (line 79, @0x0000000002380f80, libserver.so)  // inlines: Float, operator float
void __fastcall CSoundOpvarSetEntity::InputChangeOpvarValue(
        CSoundOpvarSetEntity *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_flOpvarValue = m_float64;
}


// CSoundOpvarSetEntity::UpdateTransmitState  (line 84, @0x0000000002381730, libserver.so)
// calls: CBaseEntity::UpdateTransmitState
int __fastcall CSoundOpvarSetEntity::UpdateTransmitState(CSoundOpvarSetEntity *const this)
{
  return CBaseEntity::UpdateTransmitState(this);
}


