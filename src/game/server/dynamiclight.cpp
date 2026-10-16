// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dynamiclight.cpp:20
class CDynamicLight : public CBaseModelEntity {
	class NetworkVar_m_Flags {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_LightStyle {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_Radius {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_Exponent {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_InnerAngle {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_OuterAngle {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_SpotRadius {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	unsigned char m_ActualFlags;  // +0x480
	bool m_On;  // +0x483
	typedef CBaseModelEntity BaseClass;
	typedef CDynamicLight ThisClass;

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
	CDynamicLight(CDynamicLight &);
	CDynamicLight(CDynamicLight &);
	CDynamicLight();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	void DynamicLightThink();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void InputTurnOn(inputdata_t &);
	void InputTurnOff(inputdata_t &);
	void InputToggle(inputdata_t &);
	virtual ~CDynamicLight();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// sizeof = 1176
};

// src/game/server/dynamiclight.cpp:80
class C_CDynamicLight_MapInstall {
	C_CDynamicLight_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDynamicLight::~CDynamicLight  (line 20, @0x00000000021e1750, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CDynamicLight::~CDynamicLight(CDynamicLight *const this)
{
  this->_vptr_IHandleEntity = &off_4017530;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDynamicLight::~CDynamicLight  (line 20, @0x00000000021e1770, libserver.so)  // inlines: ~CDynamicLight
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CDynamicLight::~CDynamicLight(CDynamicLight *const this)
{
  this->_vptr_IHandleEntity = &off_4017530;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDynamicLight::GetEntityClass  (line 22, @0x00000000021de450, libserver.so)
CEntityClass *__cdecl CDynamicLight::GetEntityClass()
{
  return g_pEntityCDynamicLightClass;
}


// CDynamicLight::Schema_DynamicBinding  (line 22, @0x00000000021de460, libserver.so)
// globals: CDynamicLight::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDynamicLight::Schema_DynamicBinding(const CDynamicLight *const this)
{
  return CDynamicLight::s_pSchemaBinding;
}


// CDynamicLight::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 22, @0x00000000021de470, libserver.so)
// globals: CDynamicLight::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDynamicLight::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDynamicLight::CEntityInstanceEntityClass *const this)
{
  return CDynamicLight::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDynamicLight::CEntityInstanceEntityClass::DestructInstance  (line 22, @0x00000000021de480, libserver.so)  // inlines: Destruct<CDynamicLight>
void __fastcall CDynamicLight::CEntityInstanceEntityClass::DestructInstance(
        CDynamicLight::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDynamicLight::CEntityInstanceEntityClass::FreeInstance  (line 22, @0x00000000021de4a0, libserver.so)
void __fastcall CDynamicLight::CEntityInstanceEntityClass::FreeInstance(
        CDynamicLight::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDynamicLight::CEntityInstanceEntityClass::CanAllocate  (line 22, @0x00000000021de4c0, libserver.so)
bool __fastcall CDynamicLight::CEntityInstanceEntityClass::CanAllocate(
        const CDynamicLight::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDynamicLight::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 22, @0x00000000021de4d0, libserver.so)
// globals: CDynamicLight::s_pSchemaBinding
const ISchemaBinding *__fastcall CDynamicLight::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDynamicLight::CEntityInstanceEntityClass *const this)
{
  return CDynamicLight::s_pSchemaBinding;
}


// CDynamicLight::CEntityInstanceEntityClass::AllocateInstance  (line 22, @0x00000000021e0440, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDynamicLight::CEntityInstanceEntityClass::AllocateInstance(
        CDynamicLight::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1176);
  memset(v1, 0, 0x498u);
  return v1;
}


// CDynamicLight::CEntityInstanceEntityClass::ConstructInstance  (line 22, @0x00000000021e0fb0, libserver.so)  // inlines: CDynamicLight, CNetworkVarBase, Construct<CDynamicLight>, EnsureValidValue<float>, EnsureValidValue<int>, EnsureValidValue<unsigned char>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CDynamicLight::CEntityInstanceEntityClass::ConstructInstance(
        CDynamicLight::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 1153) = 0;
    *p = &off_4017530;
    *(p + 1154) = 0;
    *(p + 289) = 0;
    *(p + 290) = 0;
    *(p + 291) = 0;
    *(p + 292) = 0;
    *(p + 293) = 0;
  }
  return p;
}


// CDynamicLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x00000000021e2c00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDynamicLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDynamicLight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDynamicLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x00000000021e2c20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDynamicLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDynamicLight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDynamicLight::GetEntityClassInternal  (line 22, @0x00000000021e6e10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "light_dynamic", "CDynamicLight"
// globals: `guard variable for'CDynamicLight::GetEntityClassInternal(void)::g_EntityCDynamicLightClass, CDynamicLight::GetEntityClassInternal(void)::g_EntityCDynamicLightClass, __dso_handle, CDynamicLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDynamicLight::GetEntityClassInfo(void)::g_EntityCDynamicLightClassInfo, CDynamicLight::GetEntityClassInfo(void)::g_EntityCDynamicLightClassInfo
CEntityClass *__cdecl CDynamicLight::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDynamicLight::GetEntityClassInternal(void)::g_EntityCDynamicLightClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDynamicLight::GetEntityClassInternal(void)::g_EntityCDynamicLightClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDynamicLight::GetEntityClassInternal(void)::g_EntityCDynamicLightClass);
    CDynamicLight::GetEntityClassInternal(void)::g_EntityCDynamicLightClass._vptr_CEntityClass = off_40174B0;
    __cxa_guard_release(&`guard variable for'CDynamicLight::GetEntityClassInternal(void)::g_EntityCDynamicLightClass);
    __cxa_atexit(
      CDynamicLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDynamicLight::GetEntityClassInternal(void)::g_EntityCDynamicLightClass,
      &_dso_handle);
  }
  if ( g_pEntityCDynamicLightClass != 0 )
    return &CDynamicLight::GetEntityClassInternal(void)::g_EntityCDynamicLightClass;
  if ( `guard variable for'CDynamicLight::GetEntityClassInfo(void)::g_EntityCDynamicLightClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDynamicLight::GetEntityClassInfo(void)::g_EntityCDynamicLightClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDynamicLight::GetEntityClassInfo(void)::g_EntityCDynamicLightClassInfo,
      "CDynamicLight",
      "light_dynamic",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDynamicLight::GetEntityClassInfo(void)::g_EntityCDynamicLightClassInfo);
  }
  CDynamicLight::GetEntityClassInternal(void)::g_EntityCDynamicLightClass.m_pClassInfo = &CDynamicLight::GetEntityClassInfo(void)::g_EntityCDynamicLightClassInfo;
  CDynamicLight::GetEntityClassInternal(void)::g_EntityCDynamicLightClass.m_pBaseClassInfo = CDynamicLight::GetEntityClassInfo(void)::g_EntityCDynamicLightClassInfo.m_pBaseClassInfo;
  g_pEntityCDynamicLightClass = &CDynamicLight::GetEntityClassInternal(void)::g_EntityCDynamicLightClass;
  CDynamicLight::GetEntityClassInfo(void)::g_EntityCDynamicLightClassInfo.m_pClass = &CDynamicLight::GetEntityClassInternal(void)::g_EntityCDynamicLightClass;
  CDynamicLight::GetEntityClassInternal(void)::g_EntityCDynamicLightClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCDynamicLightClass->m_pComponentOverrides = 0;
  return &CDynamicLight::GetEntityClassInternal(void)::g_EntityCDynamicLightClass;
}


// CDynamicLight::GetDataDescMap  (line 56, @0x00000000021bacb0, libserver.so)
// globals: CDynamicLight::m_DataMap
datamap_t *__fastcall CDynamicLight::GetDataDescMap(CDynamicLight *const this)
{
  return &CDynamicLight::m_DataMap;
}


// CDynamicLight::AddDatadescMetadataKeys  (line 56, @0x00000000021c6a70, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDynamicLight::GetEntityClass(void)
void __fastcall CDynamicLight::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDynamicLight::GetEntityClass);
}


// CDynamicLight::GetBaseMap  (line 56, @0x00000000021c6a90, libserver.so)
datamap_t *__cdecl CDynamicLight::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CDynamicLight>  (line 56, @0x00000000021d82c0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CDynamicLight"
// globals: `guard variable for'DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder, `guard variable for'DataMapInit<CDynamicLight>(CDynamicLight *)::dataDesc, CDynamicLight::GetEntityClass(void), CDynamicLight::m_DataMap, DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDynamicLight>(CDynamicLight *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder) != 0 )
  {
    DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder.m_pszBase = "CDynamicLight";
    DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder,
      &_dso_handle);
  }
  CDynamicLight::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CDynamicLight>(CDynamicLight *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDynamicLight>(CDynamicLight *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder.m_nLenBase + 18);
    strcpy(stpcpy(v2, DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder.m_pszBase), "DynamicLightThink");
    m_Size = DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder.m_Names.m_Size == DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CDynamicLight>(CDynamicLight *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CDynamicLight>(CDynamicLight *)::dataDesc[4].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDynamicLight>(CDynamicLight *)::dataDesc);
  }
  CDynamicLight::m_DataMap.dataNumFields = 13;
  CDynamicLight::m_DataMap.dataDesc = &DataMapInit<CDynamicLight>(CDynamicLight *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDynamicLight::m_DataMap, CDynamicLight::GetEntityClass);
  return &CDynamicLight::m_DataMap;
}


// CDynamicLight::YouForgotToImplementOrDeclareServerClass  (line 80, @0x00000000021bacc0, libserver.so)
int __fastcall CDynamicLight::YouForgotToImplementOrDeclareServerClass(CDynamicLight *const this)
{
  return 0;
}


// CDynamicLight::GetServerClass  (line 80, @0x00000000021c4870, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDynamicLight::GetServerClass(CDynamicLight *const this)
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


// CDynamicLight::Spawn  (line 86, @0x00000000021c2550, libserver.so)  // inlines: AddEFlags, AssignTo, Base, Color, Element, FindKeyHash, FromUint32, Get<Color>, Get<float>, Get<int>, GetValue, GetValue<Color>, GetValue<float>, GetValue<int>, Init, NetworkStateChanged, Set, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRawColor, SetRed, SetRenderColor, SetVal, a, atof, atoi, operator=, operator=<int>, operator><int>, operator[]
// calls: CBaseEntity::Spawn, CEntityKeyValues::HasValue, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::GetAbsOrigin, Warning, CBaseEntity::ThinkSet, CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, V_StringToColor, VariantFieldTypeName, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles (15 total)
// strings: "light_dynamic at [%d %d %d] has invalid exponent value (%d must be between %d and %d).\n", "No free conversion of %s variant to Color right now\n", "No conversion from %s to float now\n", "No conversion from %s to int now\n"
// globals: CDynamicLight::DynamicLightThink(void), CEntityKeyValues::sm_EmptyVariant, jpt_21C28AE, jpt_21C2A26
void __fastcall CDynamicLight::Spawn(CDynamicLight *const this, const CEntityKeyValues *pKeyValues)
{
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *m_pElements; // rdx
  __int64 m_nAllocated; // rcx
  __int64 v6; // r8
  int m_Value; // r12d
  int v8; // r13d
  int x; // r15d
  int v10; // r14d
  const Vector *AbsOrigin; // rax
  float v12; // xmm0_4
  double v13; // xmm1_8
  int v14; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v15; // cx
  __int64 v16; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v17; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rdx
  CEntityVariant *v19; // rcx
  int v20; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v21; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v23; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v24; // rdx
  CEntityVariant *v25; // rdx
  int m_nCount; // esi
  __int64 v27; // rax
  CEntityVariant *p_m_value; // rax
  int16 v29; // ax
  uint64 v30; // r12
  int16 m_type; // di
  int m_int; // r13d
  unsigned __int8 v33; // r14
  unsigned __int8 v34; // al
  int16 v35; // ax
  const char *v36; // rax
  float m_float; // xmm0_4
  const QAngle *AbsAngles; // rax
  const char *m_uint64; // rax
  __int64 v40; // rdx
  const char *v41; // rax
  const char *v42; // rax
  unsigned __int8 v43; // [rsp+Ch] [rbp-54h]
  float v44; // [rsp+Ch] [rbp-54h]
  QAngle angles; // [rsp+10h] [rbp-50h] BYREF
  int v46; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v47; // [rsp+28h] [rbp-38h]

  v47 = __readfsqword(0x28u);
  CBaseEntity::Spawn(this, pKeyValues);
  if ( !CEntityKeyValues::HasValue(pKeyValues, 1988956343) )
    goto LABEL_2;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_52:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_53;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v27 = 0;
  while ( m_nAllocated == 0 )
  {
    m_pElements = 0;
    if ( *(4 * v27) == 1988956343 )
      goto LABEL_43;
LABEL_40:
    if ( m_nCount <= ++v27 )
      goto LABEL_52;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( *(&m_pElements->m_value.m_int + v27) != 1988956343 )
    goto LABEL_40;
LABEL_43:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    m_pElements = pKeyValues->m_keyValues.m_pElements;
  else
    m_pElements = 0;
  p_m_value = &m_pElements[v27].m_value;
LABEL_53:
  m_type = p_m_value->m_type;
  m_int = 0;
  if ( m_type == 9 )
  {
    m_int = p_m_value->m_int;
  }
  else if ( m_type == 30 )
  {
    v46 = 0;
    V_StringToColor(&v46, p_m_value->m_uint64, m_pElements, m_nAllocated, v6);
    m_int = v46;
  }
  else
  {
    v36 = VariantFieldTypeName(m_type);
    Warning("No free conversion of %s variant to Color right now\n", v36);
  }
  v33 = this->m_clrRender.m_Value._color[3];
  v34 = BYTE1(m_int);
  if ( m_int != this->m_clrRender.m_Value._color[0] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v34 = BYTE1(m_int);
    this->m_clrRender.m_Value._color[0] = m_int;
  }
  v43 = v34;
  if ( v34 != this->m_clrRender.m_Value._color[1] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[1] = v43;
  }
  if ( this->m_clrRender.m_Value._color[2] != BYTE2(m_int) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[2] = BYTE2(m_int);
  }
  if ( v33 != this->m_clrRender.m_Value._color[3] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[3] = v33;
  }
LABEL_2:
  if ( CEntityKeyValues::HasValue(pKeyValues, -762621832) )
  {
    v20 = pKeyValues->m_keyHashes.m_nCount;
    if ( v20 > 0 )
    {
      v21 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( i = 0; v20 > i; ++i )
      {
        if ( v21 != 0 )
        {
          v23 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v21 > 9 )
            v23 = pKeyValues->m_keyHashes.m_pElements;
          if ( v23[i] == -762621832 )
          {
LABEL_32:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v24 = pKeyValues->m_keyValues.m_pElements;
            else
              v24 = 0;
            v25 = &v24[i].m_value;
            goto LABEL_65;
          }
        }
        else if ( *(4 * i) == -762621832 )
        {
          goto LABEL_32;
        }
      }
    }
    v25 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_65:
    v35 = v25->m_type;
    switch ( v35 )
    {
      case 0:
        m_float = 0.0;
        goto LABEL_69;
      case 1:
        m_float = v25->m_float;
        goto LABEL_69;
      case 5:
        m_float = v25->m_int;
        goto LABEL_69;
      case 6:
        m_float = v25->m_char;
        goto LABEL_69;
      case 26:
        m_float = v25->m_uint64;
        goto LABEL_69;
      case 30:
        m_float = strtod(v25->m_pszString, 0);
        goto LABEL_69;
      case 33:
        m_uint64 = v25->m_uint64;
        if ( v25->m_int64 >= 0 )
          goto LABEL_86;
        v40 = v25->m_uint64 & 1 | (v25->m_uint64 >> 1);
        m_float = v40 + v40;
        goto LABEL_69;
      case 34:
        m_float = v25->m_float64;
        goto LABEL_69;
      case 37:
        LODWORD(m_uint64) = v25->m_int;
LABEL_86:
        m_float = m_uint64;
LABEL_69:
        if ( m_float != 0.0 )
        {
          v44 = m_float;
          AbsAngles = CBaseEntity::GetAbsAngles(this);
          *&angles.x = *&AbsAngles->x;
          *&AbsAngles = AbsAngles->z;
          angles.x = -v44;
          LODWORD(angles.z) = AbsAngles;
          CBaseEntity::SetAbsAngles(this, &angles);
        }
        break;
      default:
        v41 = VariantFieldTypeName(v35);
        Warning("No conversion from %s to float now\n", v41);
        break;
    }
  }
  if ( !CEntityKeyValues::HasValue(pKeyValues, 1775824117) )
    goto LABEL_4;
  v14 = pKeyValues->m_keyHashes.m_nCount;
  if ( v14 <= 0 )
  {
LABEL_46:
    v19 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_47;
  }
  v15 = pKeyValues->m_keyHashes.m_nAllocated;
  v16 = 0;
  while ( 2 )
  {
    if ( v15 == 0 )
    {
      if ( *(4 * v16) == 1775824117 )
        break;
      goto LABEL_18;
    }
    v17 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v15 > 9 )
      v17 = pKeyValues->m_keyHashes.m_pElements;
    if ( v17[v16] != 1775824117 )
    {
LABEL_18:
      if ( v14 <= ++v16 )
        goto LABEL_46;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v18 = pKeyValues->m_keyValues.m_pElements;
  else
    v18 = 0;
  v19 = &v18[v16].m_value;
LABEL_47:
  v29 = v19->m_type;
  switch ( v29 )
  {
    case 0:
      LOBYTE(v30) = 0;
      break;
    case 1:
      LODWORD(v30) = v19->m_float;
      break;
    case 5:
    case 6:
      LOBYTE(v30) = v19->m_char;
      break;
    case 26:
      LOBYTE(v30) = -1;
      if ( v19->m_int64 <= 0x7FFFFFFF )
      {
        LOBYTE(v30) = 0;
        if ( v19->m_uint64 >= 0xFFFFFFFF80000000LL )
          v30 = v19->m_uint64;
      }
      break;
    case 30:
      LOBYTE(v30) = strtol(v19->m_pszString, 0, 10);
      break;
    case 33:
      LOBYTE(v30) = -1;
      if ( v19->m_uint64 <= 0x7FFFFFFE )
        LOBYTE(v30) = v19->m_uint64;
      break;
    case 34:
      LODWORD(v30) = v19->m_float64;
      break;
    case 37:
      LOBYTE(v30) = -1;
      if ( v19->m_int <= 0x7FFFFFFEu )
        LODWORD(v30) = v19->m_int;
      break;
    default:
      LOBYTE(v30) = 0;
      v42 = VariantFieldTypeName(v29);
      Warning("No conversion from %s to int now\n", v42);
      break;
  }
  if ( v30 != this->m_Flags.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1153, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Flags.m_Value = v30;
  }
  this->m_ActualFlags = v30;
LABEL_4:
  this->m_iEFlags |= 0x80u;
  this->m_On = 1;
  CBaseEntity::DispatchUpdateTransmitState(this);
  if ( this->m_target.u.m_Id != 0 )
  {
    CBaseEntity::ThinkSet(this, CDynamicLight::DynamicLightThink, 0.0, 0, 0);
    v12 = CGlobalVarsBase::curtime(gpGlobals, 0);
    CBaseEntity::SetNextThink(this, v12 + 0.1, v13, 0);
  }
  m_Value = this->m_Exponent.m_Value;
  if ( m_Value > 127 )
  {
    v8 = 127;
  }
  else
  {
    if ( m_Value >= -127 )
      return;
    v8 = -127;
  }
  x = CBaseEntity::GetAbsOrigin(this)->x;
  v10 = CBaseEntity::GetAbsOrigin(this)->x;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  Warning(
    "light_dynamic at [%d %d %d] has invalid exponent value (%d must be between %d and %d).\n",
    AbsOrigin->x,
    v10,
    x,
    m_Value,
    -127,
    127);
  if ( v8 != this->m_Exponent.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Exponent.m_Value = v8;
  }
}


// CDynamicLight::InputTurnOn  (line 138, @0x00000000021be690, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<unsigned char>
// callers: CDynamicLight::InputToggle
void __fastcall CDynamicLight::InputTurnOn(CDynamicLight *const this, inputdata_t *const inputdata)
{
  unsigned __int8 m_ActualFlags; // r12

  m_ActualFlags = this->m_ActualFlags;
  if ( m_ActualFlags != this->m_Flags.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1153, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Flags.m_Value = m_ActualFlags;
  }
  this->m_On = 1;
}


// CDynamicLight::InputTurnOff  (line 148, @0x00000000021be640, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CDynamicLight::InputToggle
void __fastcall CDynamicLight::InputTurnOff(CDynamicLight *const this, inputdata_t *const inputdata)
{
  if ( this->m_Flags.m_Value != 3 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1153, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Flags.m_Value = 3;
  }
  this->m_On = 0;
}


// CDynamicLight::InputToggle  (line 159, @0x00000000021be6e0, libserver.so)
// calls: CDynamicLight::InputTurnOn, CDynamicLight::InputTurnOff
void __fastcall CDynamicLight::InputToggle(CDynamicLight *const this, inputdata_t *const inputdata)
{
  if ( this->m_On )
    CDynamicLight::InputTurnOff(this, inputdata);
  else
    CDynamicLight::InputTurnOn(this, inputdata);
}


// CDynamicLight::DynamicLightThink  (line 175, @0x00000000021bfa80, libserver.so)  // inlines: VectorSubtract, curtime, operator-
// calls: CBaseEntity::GetNextTarget, CBaseEntity::GetAbsOrigin, VectorAngles, CBaseEntity::SetAbsAngles, CBaseEntity::SetNextThink
void __fastcall CDynamicLight::DynamicLightThink(CDynamicLight *const this)
{
  CBaseEntity *NextTarget; // r13
  double v3; // xmm1_8
  const Vector *AbsOrigin; // r12
  const Vector *v5; // rax
  vec_t v6; // xmm1_4
  vec_t v7; // xmm0_4
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v10; // xmm0_8
  Vector vecToTarget; // [rsp+0h] [rbp-40h] BYREF
  QAngle vecAngles; // [rsp+10h] [rbp-30h] BYREF

  if ( this->m_target.u.m_Id != 0 )
  {
    NextTarget = CBaseEntity::GetNextTarget(this);
    if ( NextTarget != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      v5 = CBaseEntity::GetAbsOrigin(NextTarget);
      v6 = v5->y - AbsOrigin->y;
      v7 = v5->z - AbsOrigin->z;
      vecToTarget.x = v5->x - AbsOrigin->x;
      vecToTarget.y = v6;
      vecToTarget.z = v7;
      VectorAngles(&vecToTarget, &vecAngles);
      CBaseEntity::SetAbsAngles(this, &vecAngles);
    }
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v10 = v8->m_flCurrentTime + 0.1;
    }
    else
    {
      *&v10 = 1036831949;
    }
    CBaseEntity::SetNextThink(this, v10, v3, 0);
  }
}


