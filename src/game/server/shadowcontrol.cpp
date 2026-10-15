// Reconstructed from DWARF by pahole; not original source.

// src/game/server/shadowcontrol.cpp:21
class CShadowControl : public CBaseEntity {
	class NetworkVar_m_shadowDirection {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_shadowColor {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flShadowMaxDist {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bDisableShadows {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bEnableLocalLightShadows {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	typedef CBaseEntity BaseClass;
	typedef CShadowControl ThisClass;

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
	CShadowControl(CShadowControl &);
	CShadowControl(CShadowControl &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CShadowControl();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual int UpdateTransmitState();
	void InputSetAngles(inputdata_t &);
	virtual int ObjectCaps();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CShadowControl();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[64] UpdateTransmitState
	// vtable[19] ObjectCaps
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// sizeof = 800
};

// src/game/server/shadowcontrol.cpp:70
class C_CShadowControl_MapInstall {
	C_CShadowControl_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CShadowControl::~CShadowControl  (line 21, @0x00000000023aac90, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CShadowControl::~CShadowControl(CShadowControl *const this)
{
  this->_vptr_IHandleEntity = &off_40A8CD0;
  CBaseEntity::~CBaseEntity(this);
}


// CShadowControl::~CShadowControl  (line 21, @0x00000000023aacb0, libserver.so)  // inlines: ~CShadowControl
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CShadowControl::~CShadowControl(CShadowControl *const this)
{
  this->_vptr_IHandleEntity = &off_40A8CD0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CShadowControl::GetEntityClass  (line 23, @0x00000000023a9090, libserver.so)
CEntityClass *__cdecl CShadowControl::GetEntityClass()
{
  return g_pEntityCShadowControlClass;
}


// CShadowControl::Schema_DynamicBinding  (line 23, @0x00000000023a90a0, libserver.so)
// globals: CShadowControl::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CShadowControl::Schema_DynamicBinding(const CShadowControl *const this)
{
  return CShadowControl::s_pSchemaBinding;
}


// CShadowControl::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 23, @0x00000000023a90b0, libserver.so)
// globals: CShadowControl::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CShadowControl::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CShadowControl::CEntityInstanceEntityClass *const this)
{
  return CShadowControl::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CShadowControl::CEntityInstanceEntityClass::DestructInstance  (line 23, @0x00000000023a90c0, libserver.so)  // inlines: Destruct<CShadowControl>
void __fastcall CShadowControl::CEntityInstanceEntityClass::DestructInstance(
        CShadowControl::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CShadowControl::CEntityInstanceEntityClass::FreeInstance  (line 23, @0x00000000023a90e0, libserver.so)
void __fastcall CShadowControl::CEntityInstanceEntityClass::FreeInstance(
        CShadowControl::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CShadowControl::CEntityInstanceEntityClass::CanAllocate  (line 23, @0x00000000023a9100, libserver.so)
bool __fastcall CShadowControl::CEntityInstanceEntityClass::CanAllocate(
        const CShadowControl::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CShadowControl::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 23, @0x00000000023a9110, libserver.so)
// globals: CShadowControl::s_pSchemaBinding
const ISchemaBinding *__fastcall CShadowControl::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CShadowControl::CEntityInstanceEntityClass *const this)
{
  return CShadowControl::s_pSchemaBinding;
}


// CShadowControl::CEntityInstanceEntityClass::AllocateInstance  (line 23, @0x00000000023aa8b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CShadowControl::CEntityInstanceEntityClass::AllocateInstance(
        CShadowControl::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 800);
  memset(v1, 0, 0x320u);
  return v1;
}


// CShadowControl::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x00000000023acbb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CShadowControl::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CShadowControl::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CShadowControl::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x00000000023acbd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CShadowControl::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CShadowControl::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CShadowControl::CEntityInstanceEntityClass::ConstructInstance  (line 23, @0x00000000023ae950, libserver.so)  // inlines: Construct<CShadowControl>
// calls: CShadowControl::CShadowControl
CEntityInstance *__fastcall CShadowControl::CEntityInstanceEntityClass::ConstructInstance(
        CShadowControl::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CShadowControl::CShadowControl(p);
  return p;
}


// CShadowControl::GetEntityClassInternal  (line 23, @0x00000000023b3170, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "shadow_control", "CShadowControl"
// globals: `guard variable for'CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass, CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CShadowControl::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CShadowControl::GetEntityClassInfo(void)::g_EntityCShadowControlClassInfo, CShadowControl::GetEntityClassInfo(void)::g_EntityCShadowControlClassInfo
CEntityClass *__cdecl CShadowControl::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass == 0
    && __cxa_guard_acquire(&`guard variable for'CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass) != 0 )
  {
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_designerName.u.m_Id = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass._vptr_CEntityClass = off_3F79390;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_ComponentOffsets.m_Size = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_AllHelpers.m_Size = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_instanceUnserializer.m_atomicFields,
      4);
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_classInputs.m_Size = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_classInputs.m_Memory.m_pMemory = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_classOutputs.m_Size = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_requiredEHandle.m_Index = -1;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_hNetworkSerializer = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_pBaseClassInfo = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_pClassInfo = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_flags = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_nAllHelpersFlags = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_pScriptClassDesc = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_pInputs = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_nInputCount = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_pOutputs = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_nOutputCount = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_pGameClass = 0;
    CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass._vptr_CEntityClass = off_40A8C50;
    __cxa_guard_release(&`guard variable for'CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass);
    __cxa_atexit(
      CShadowControl::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass,
      &_dso_handle);
  }
  if ( g_pEntityCShadowControlClass != 0 )
    return &CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass;
  if ( `guard variable for'CShadowControl::GetEntityClassInfo(void)::g_EntityCShadowControlClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CShadowControl::GetEntityClassInfo(void)::g_EntityCShadowControlClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CShadowControl::GetEntityClassInfo(void)::g_EntityCShadowControlClassInfo,
      "CShadowControl",
      "shadow_control",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CShadowControl::GetEntityClassInfo(void)::g_EntityCShadowControlClassInfo);
  }
  CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_pClassInfo = &CShadowControl::GetEntityClassInfo(void)::g_EntityCShadowControlClassInfo;
  CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_pBaseClassInfo = CShadowControl::GetEntityClassInfo(void)::g_EntityCShadowControlClassInfo.m_pBaseClassInfo;
  g_pEntityCShadowControlClass = &CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass;
  CShadowControl::GetEntityClassInfo(void)::g_EntityCShadowControlClassInfo.m_pClass = &CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass;
  CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCShadowControlClass->m_pComponentOverrides = 0;
  return &CShadowControl::GetEntityClassInternal(void)::g_EntityCShadowControlClass;
}


// CShadowControl::ObjectCaps  (line 39, @0x00000000023aab70, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CShadowControl::ObjectCaps(CShadowControl *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CShadowControl::GetDataDescMap  (line 52, @0x0000000002380b90, libserver.so)
// globals: CShadowControl::m_DataMap
datamap_t *__fastcall CShadowControl::GetDataDescMap(CShadowControl *const this)
{
  return &CShadowControl::m_DataMap;
}


// CShadowControl::AddDatadescMetadataKeys  (line 52, @0x000000000238f360, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CShadowControl::GetEntityClass(void)
void __fastcall CShadowControl::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CShadowControl::GetEntityClass);
}


// CShadowControl::GetBaseMap  (line 52, @0x000000000238f380, libserver.so)
datamap_t *__cdecl CShadowControl::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CShadowControl>  (line 52, @0x000000000238f390, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CShadowControl"
// globals: `guard variable for'DataMapInit<CShadowControl>(CShadowControl *)::nameHolder, CShadowControl::GetEntityClass(void), CShadowControl::m_DataMap, DataMapInit<CShadowControl>(CShadowControl *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CShadowControl>(CShadowControl *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CShadowControl>(CShadowControl *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CShadowControl>(CShadowControl *)::nameHolder) != 0 )
  {
    DataMapInit<CShadowControl>(CShadowControl *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CShadowControl>(CShadowControl *)::nameHolder.m_pszBase = "CShadowControl";
    DataMapInit<CShadowControl>(CShadowControl *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CShadowControl>(CShadowControl *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CShadowControl>(CShadowControl *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CShadowControl>(CShadowControl *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CShadowControl>(CShadowControl *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CShadowControl>(CShadowControl *)::nameHolder,
      &_dso_handle);
  }
  CShadowControl::m_DataMap.dataNumFields = 9;
  CShadowControl::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CShadowControl::m_DataMap.dataDesc = &DataMapInit<CShadowControl>(CShadowControl *)::dataDesc[1];
  AddDatadescMetadataKeys(&CShadowControl::m_DataMap, CShadowControl::GetEntityClass);
  return &CShadowControl::m_DataMap;
}


// CShadowControl::YouForgotToImplementOrDeclareServerClass  (line 70, @0x0000000002380ba0, libserver.so)
int __fastcall CShadowControl::YouForgotToImplementOrDeclareServerClass(CShadowControl *const this)
{
  return 0;
}


// CShadowControl::GetServerClass  (line 70, @0x0000000002385d90, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CShadowControl::GetServerClass(CShadowControl *const this)
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


// CShadowControl::CShadowControl  (line 74, @0x000000000238f460, libserver.so)  // inlines: CNetworkColorBase, CNetworkVarBase, CNetworkVectorBase, Color, EnsureValidValue, EnsureValidValue<bool>, EnsureValidValue<float>, Init, NetworkStateChanged, Set, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRawColor, SetVal, Zero, operator!=, operator=, operator=<bool>, operator=<float>
// calls: CBaseEntity::CBaseEntity, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CShadowControl::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CShadowControl::CShadowControl(CShadowControl *const this)
{
  bool v2; // zf
  float x; // xmm0_4
  float m_Value; // xmm0_4

  CBaseEntity::CBaseEntity(this);
  this->m_shadowColor = 0;
  v2 = this->m_shadowColor.m_Value._color[1] == 0;
  this->_vptr_IHandleEntity = &off_40A8CD0;
  this->m_shadowDirection.m_Value.z = 0.0;
  this->m_shadowDirection.m_Value.y = 0.0;
  this->m_shadowDirection.m_Value.x = 0.0;
  if ( !v2 )
  {
    CBaseEntity::NetworkStateChanged(this, 0x314u, -1, -1);
    this->m_shadowColor.m_Value._color[1] = 0;
  }
  if ( this->m_shadowColor.m_Value._color[2] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_shadowColor.m_Value._color[2] = 0;
  }
  if ( this->m_shadowColor.m_Value._color[3] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_shadowColor.m_Value._color[3] = 0;
  }
  x = this->m_shadowDirection.m_Value.x;
  this->m_bDisableShadows.m_Value = 0;
  this->m_flShadowMaxDist.m_Value = 0.0;
  this->m_bEnableLocalLightShadows.m_Value = 0;
  if ( x == 0.2 && this->m_shadowDirection.m_Value.y == 0.2 && this->m_shadowDirection.m_Value.z == -2.0
    || ((*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL),
        m_Value = this->m_flShadowMaxDist.m_Value,
        this->m_shadowDirection.m_Value.x = 0.2,
        this->m_shadowDirection.m_Value.y = 0.2,
        this->m_shadowDirection.m_Value.z = -2.0,
        m_Value != 50.0) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flShadowMaxDist.m_Value = 50.0;
    if ( *&this->m_shadowColor != &stru_404040 )
      goto LABEL_16;
LABEL_11:
    if ( this->m_bDisableShadows.m_Value )
      goto LABEL_17;
    goto LABEL_12;
  }
  if ( *&this->m_shadowColor == &stru_404040 )
    goto LABEL_11;
LABEL_16:
  (*(this->_vptr_IHandleEntity + 22))(this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v2 = !this->m_bDisableShadows.m_Value;
  this->m_shadowColor = &stru_404040;
  if ( !v2 )
  {
LABEL_17:
    (*(this->_vptr_IHandleEntity + 22))(this, 796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v2 = !this->m_bEnableLocalLightShadows.m_Value;
    this->m_bDisableShadows.m_Value = 0;
    if ( !v2 )
      goto LABEL_18;
    return;
  }
LABEL_12:
  if ( this->m_bEnableLocalLightShadows.m_Value )
  {
LABEL_18:
    (*(this->_vptr_IHandleEntity + 22))(this, 797, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnableLocalLightShadows.m_Value = 0;
  }
}


// CShadowControl::UpdateTransmitState  (line 87, @0x00000000023814a0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CShadowControl::UpdateTransmitState(CShadowControl *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CShadowControl::Spawn  (line 94, @0x00000000023847c0, libserver.so)  // inlines: AssignTo, Base, Color, Element, EmptyValue<QAngle>, EmptyValue<Vector>, FindKeyHash, FromUint32, Get<Color>, Get<QAngle>, Get<Vector>, GetValue, GetValue<Color>, GetValue<QAngle>, GetValue<Vector>, Init, LengthSqr, NetworkStateChanged, Set, SetRawColor, VariantFieldTypeName, operator!=, operator=, operator==, operator[]
// calls: CBaseEntity::Spawn, CEntityKeyValues::HasValue, AngleVectors, V_StringToColor, VariantFieldTypeName, Warning, V_sscanf, QuaternionAngles, __stack_chk_fail
// strings: "No free conversion of %s variant to Color right now\n", "No free conversion of %s variant to Vector right now\n", "%g %g %g %g", "No free conversion of %s variant to QAngle right now\n", "vector2d", "character" (23 total)
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_2384A47, jpt_2384DE0
void __fastcall CShadowControl::Spawn(CShadowControl *const this, const CEntityKeyValues *pKeyValues)
{
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *m_pElements; // rdx
  __int64 m_nAllocated; // rcx
  __int64 v6; // r8
  float v7; // xmm3_4
  int v8; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v9; // cx
  __int64 v10; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v11; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rdx
  CEntityVariant *v13; // rdi
  int v14; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v15; // cx
  __int64 v16; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v17; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rdx
  const Quaternion *const *v19; // r10
  int m_nCount; // esi
  __int64 i; // rax
  CEntityVariant *p_m_value; // rax
  float x; // xmm1_4
  float y; // xmm2_4
  float z; // xmm3_4
  __int16 v26; // ax
  float v27; // xmm0_4
  double v28; // xmm0_8
  int16 m_type; // di
  CNetworkColorBase<Color,CShadowControl::NetworkVar_m_shadowColor> m_int; // r13d
  float v31; // xmm2_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  int16 v34; // ax
  const char *v35; // rax
  const char *v36; // rax
  const char *v37; // rsi
  int v38; // eax
  vec_t v39; // [rsp+4h] [rbp-6Ch]
  float v40; // [rsp+4h] [rbp-6Ch]
  vec_t v41; // [rsp+8h] [rbp-68h]
  float v42; // [rsp+8h] [rbp-68h]
  vec_t v43; // [rsp+Ch] [rbp-64h]
  vec_t v44; // [rsp+Ch] [rbp-64h]
  QAngle angles; // [rsp+10h] [rbp-60h] BYREF
  Vector vForward; // [rsp+20h] [rbp-50h] BYREF
  CNetworkColorBase<Color,CShadowControl::NetworkVar_m_shadowColor> v47; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v48; // [rsp+38h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  CBaseEntity::Spawn(this, pKeyValues);
  if ( CEntityKeyValues::HasValue(pKeyValues, 189329514) )
  {
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount > 0 )
    {
      m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
      for ( i = 0; m_nCount > i; ++i )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = pKeyValues->m_keyHashes.m_pElements;
          if ( *(&m_pElements->m_value.m_int + i) == 189329514 )
          {
LABEL_36:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              m_pElements = pKeyValues->m_keyValues.m_pElements;
            else
              m_pElements = 0;
            p_m_value = &m_pElements[i].m_value;
            goto LABEL_52;
          }
        }
        else
        {
          m_pElements = 0;
          if ( *(4 * i) == 189329514 )
            goto LABEL_36;
        }
      }
    }
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
LABEL_52:
    m_type = p_m_value->m_type;
    m_int = 0;
    if ( m_type == 9 )
    {
      m_int = p_m_value->m_int;
    }
    else if ( m_type == 30 )
    {
      v47 = 0;
      V_StringToColor(&v47, p_m_value->m_uint64, m_pElements, m_nAllocated, v6);
      m_int = v47;
    }
    else
    {
      v35 = VariantFieldTypeName(m_type);
      Warning("No free conversion of %s variant to Color right now\n", v35);
    }
    if ( m_int != *&this->m_shadowColor )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_shadowColor = m_int;
    }
  }
  if ( !CEntityKeyValues::HasValue(pKeyValues, -1164387633) )
    goto LABEL_3;
  v14 = pKeyValues->m_keyHashes.m_nCount;
  if ( v14 <= 0 )
  {
LABEL_39:
    v19 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_40;
  }
  v15 = pKeyValues->m_keyHashes.m_nAllocated;
  v16 = 0;
  while ( v15 == 0 )
  {
    if ( *(4 * v16) == -1164387633 )
      goto LABEL_25;
LABEL_22:
    if ( v14 <= ++v16 )
      goto LABEL_39;
  }
  v17 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v15 > 9 )
    v17 = pKeyValues->m_keyHashes.m_pElements;
  if ( v17[v16] != -1164387633 )
    goto LABEL_22;
LABEL_25:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v18 = pKeyValues->m_keyValues.m_pElements;
  else
    v18 = 0;
  v19 = &v18[v16];
LABEL_40:
  x = vec3_angle.x;
  y = vec3_angle.y;
  z = vec3_angle.z;
  vForward.x = vec3_angle.x;
  vForward.y = y;
  vForward.z = z;
  v26 = *(v19 + 4);
  switch ( v26 )
  {
    case 0:
      v27 = vec3_angle.x;
      break;
    case 3:
    case 39:
      v27 = **v19;
      y = (*v19)->y;
      z = (*v19)->z;
      break;
    case 4:
      QuaternionAngles(*v19, &vForward);
      x = vec3_angle.x;
      z = vForward.z;
      y = vForward.y;
      v27 = vForward.x;
      break;
    case 30:
      angles.x = 0.0;
      if ( V_sscanf(*v19, "%g %g %g %g", &vForward, &vForward.y, &vForward.z, &angles) == 3 )
      {
        x = vec3_angle.x;
        z = vForward.z;
        y = vForward.y;
        v27 = vForward.x;
      }
      else
      {
        v27 = vec3_angle.x;
        y = vec3_angle.y;
        z = vec3_angle.z;
        x = vec3_angle.x;
      }
      break;
    default:
      switch ( v26 )
      {
        case 0:
          v37 = "void";
          break;
        case 1:
          v37 = "float";
          break;
        case 3:
          v37 = "vector";
          break;
        case 4:
          v37 = "quaternion";
          break;
        case 5:
          v37 = "integer";
          break;
        case 6:
          v37 = "boolean";
          break;
        case 8:
          v37 = "character";
          break;
        case 9:
          v37 = "color";
          break;
        case 13:
          v37 = "ehandle";
          break;
        case 25:
          v37 = "vector2d";
          break;
        case 26:
          v37 = "int64";
          break;
        case 27:
          v37 = "vector4d";
          break;
        case 28:
          v37 = "resourcehandle";
          break;
        case 30:
          v37 = "cstring";
          break;
        case 31:
          v37 = "hscript";
          break;
        case 32:
          v37 = "variant";
          break;
        case 33:
          v37 = "uint64";
          break;
        case 34:
          v37 = "float64";
          break;
        case 37:
          v37 = "unsigned";
          break;
        case 38:
          v37 = "utlstringtoken";
          break;
        case 39:
          v37 = "qangle";
          break;
        case 48:
          v37 = "hscript_lightbinding";
          break;
        case 49:
          v37 = "js_value";
          break;
        case 50:
          v37 = "js_object";
          break;
        case 51:
          v37 = "js_array";
          break;
        case 52:
          v37 = "js_raw_args";
          break;
        default:
          v37 = "unknown_variant_type";
          break;
      }
      Warning("No free conversion of %s variant to QAngle right now\n", v37);
      x = vec3_angle.x;
      z = vForward.z;
      y = vForward.y;
      v27 = vForward.x;
      break;
  }
  angles.x = v27;
  angles.y = y;
  angles.z = z;
  if ( v27 == x && y == vec3_angle.y && z == vec3_angle.z )
  {
    angles.x = 80.0;
    angles.y = 30.0;
    angles.z = 0.0;
  }
  AngleVectors(&angles, &vForward, 0, 0);
  *&v28 = LODWORD(vForward.x);
  if ( vForward.x != this->m_shadowDirection.m_Value.x
    || (*&v28 = LODWORD(vForward.y), vForward.y != this->m_shadowDirection.m_Value.y)
    || (*&v28 = LODWORD(vForward.z), vForward.z != this->m_shadowDirection.m_Value.z) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v28);
    this->m_shadowDirection.m_Value = vForward;
  }
LABEL_3:
  if ( !CEntityKeyValues::HasValue(pKeyValues, 1034297033) )
    return;
  v7 = this->m_shadowDirection.m_Value.x;
  if ( fabs(
         (((v7 * v7) + (this->m_shadowDirection.m_Value.y * this->m_shadowDirection.m_Value.y))
        + (this->m_shadowDirection.m_Value.z * this->m_shadowDirection.m_Value.z))
       - 1.0) <= 0.001 )
    return;
  v8 = pKeyValues->m_keyHashes.m_nCount;
  if ( v8 <= 0 )
  {
LABEL_57:
    v13 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_58;
  }
  v9 = pKeyValues->m_keyHashes.m_nAllocated;
  v10 = 0;
  while ( 2 )
  {
    if ( v9 == 0 )
    {
      if ( *(4 * v10) == 1034297033 )
        break;
      goto LABEL_11;
    }
    v11 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v9 > 9 )
      v11 = pKeyValues->m_keyHashes.m_pElements;
    if ( v11[v10] != 1034297033 )
    {
LABEL_11:
      if ( v8 <= ++v10 )
        goto LABEL_57;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v12 = pKeyValues->m_keyValues.m_pElements;
  else
    v12 = 0;
  v13 = &v12[v10].m_value;
LABEL_58:
  v31 = vec3_origin.x;
  v32 = vec3_origin.y;
  v33 = vec3_origin.z;
  vForward.x = vec3_origin.x;
  vForward.y = v32;
  vForward.z = v33;
  v34 = v13->m_type;
  if ( v34 == 3 )
  {
LABEL_62:
    v31 = *v13->m_pszString;
    v33 = *(v13->m_uint64 + 8);
    v32 = *(v13->m_uint64 + 4);
  }
  else if ( v34 <= 3 )
  {
    if ( v34 != 0 )
      goto LABEL_70;
  }
  else if ( v34 == 30 )
  {
    v40 = v33;
    v42 = v32;
    v44 = vec3_origin.x;
    v38 = V_sscanf(v13->m_uint64, "%g %g %g", &vForward, &vForward.y, &vForward.z);
    v31 = v44;
    v32 = v42;
    v33 = v40;
    if ( v38 == 3 )
      goto LABEL_71;
    v7 = this->m_shadowDirection.m_Value.x;
  }
  else
  {
    if ( v34 == 39 )
      goto LABEL_62;
LABEL_70:
    v36 = VariantFieldTypeName(v34);
    Warning("No free conversion of %s variant to Vector right now\n", v36);
LABEL_71:
    v32 = vForward.y;
    v33 = vForward.z;
    v7 = this->m_shadowDirection.m_Value.x;
    v31 = vForward.x;
  }
  if ( v7 != v31 || v32 != this->m_shadowDirection.m_Value.y || v33 != this->m_shadowDirection.m_Value.z )
  {
    v39 = v31;
    v41 = v33;
    v43 = v32;
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_shadowDirection.m_Value.x = v39;
    this->m_shadowDirection.m_Value.y = v43;
    this->m_shadowDirection.m_Value.z = v41;
  }
}


// CShadowControl::InputSetAngles  (line 131, @0x0000000002385a50, libserver.so)  // inlines: AssignTo, NetworkStateChanged, Set, TempString, ToString, operator!=, operator=
// calls: UTIL_StringToVector, AngleVectors, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_2385A83, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CShadowControl::InputSetAngles(CShadowControl *const this, inputdata_t *const inputdata)
{
  int16 m_type; // di
  char *m_pszString; // rsi
  double v5; // xmm0_8
  const char *v6; // rax
  double m_float; // xmm0_8
  const char *v8; // rcx
  QAngle angles; // [rsp+10h] [rbp-30h] BYREF
  Vector vTemp; // [rsp+20h] [rbp-20h] BYREF

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
        goto LABEL_11;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_13;
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
        goto LABEL_15;
      case 6:
        v8 = "true";
        if ( inputdata->value.m_char == 0 )
          v8 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v8);
        goto LABEL_19;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_15;
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
        goto LABEL_19;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_19:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_13:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_15:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v6 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v6);
LABEL_11:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  UTIL_StringToVector(&angles.x, m_pszString);
  AngleVectors(&angles, &vTemp, 0, 0);
  *&v5 = LODWORD(vTemp.x);
  if ( vTemp.x != this->m_shadowDirection.m_Value.x
    || (*&v5 = LODWORD(vTemp.y), vTemp.y != this->m_shadowDirection.m_Value.y)
    || (*&v5 = LODWORD(vTemp.z), vTemp.z != this->m_shadowDirection.m_Value.z) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v5);
    this->m_shadowDirection.m_Value = vTemp;
  }
}


