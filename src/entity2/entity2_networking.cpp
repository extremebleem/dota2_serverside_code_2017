// Reconstructed from DWARF by pahole; not original source.

// src/entity2/entity2_networking.cpp:20
class CNetworkSerializerBindingBuildFilter : public INetworkSerializerBindingBuildFilter {
public:

private:

	CNetworkSerializerBindingBuildFilter(CNetworkSerializerBindingBuildFilter &);
	CNetworkSerializerBindingBuildFilter(const CNetworkSerializerBindingBuildFilter &);
	CNetworkSerializerBindingBuildFilter(CEntityClass *);
	virtual int GetFieldPriority(ClassIntrospectionHandle_t);
	virtual const char * GetDefaultGroupName();
	virtual CSchemaType * GetOverridePointedToClass(const char *, CSchemaType *);
	const char * SkipClassnameInitialCapitalC(const char *);
	virtual ~CNetworkSerializerBindingBuildFilter();

	// vtable[2] GetFieldPriority
	// vtable[3] GetDefaultGroupName
	// vtable[4] GetOverridePointedToClass
	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_entity2_networking.cpp  (line 0, @0x0000000001a68610, libserver.so)  // inlines: CFieldPathHuffmanEncoder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixed, CVariantBase, Color, Purge, RemoveAll, SetColor, __static_initialization_and_destruction_0, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: __cxa_atexit, CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup, _Unwind_Resume, CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int>::Purge, CUtlMemory<int, int>::Purge
// globals: UNSPECIFIED_LOGGING_COLOR, `guard variable for'g_HuffmanEncoder, `guard variable for'CEntityKeyValues::sm_EmptyVariant, __dso_handle, CEntityKeyValues::sm_EmptyVariant, CVariantBase<CEntityVariantAllocator>::~CVariantBase(), g_HuffmanEncoder, CFieldPathHuffmanEncoder::~CFieldPathHuffmanEncoder()
void __cdecl GLOBAL__sub_I_entity2_networking_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  // init once: g_HuffmanEncoder
  g_HuffmanEncoder.m_pRoot = 0;
  g_HuffmanEncoder.m_Frequencies.m_Size = 0;
  g_HuffmanEncoder.m_Frequencies.m_Memory.m_pMemory = 0;
  g_HuffmanEncoder.m_Frequencies.m_Memory.m_nAllocationCount = 0;
  g_HuffmanEncoder.m_Frequencies.m_Memory.m_nGrowSize = 0;
  g_HuffmanEncoder.m_OpCodeToHuffmanLookup.m_Size = 0;
  g_HuffmanEncoder.m_FixedTree.m_Size = 0;
  g_HuffmanEncoder.m_FixedTree.m_Memory.m_pMemory = 0;
  g_HuffmanEncoder.m_FixedTree.m_Memory.m_nAllocationCount = 0;
  g_HuffmanEncoder.m_FixedTree.m_Memory.m_nGrowSize = 0;
  CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup(&g_HuffmanEncoder);
  __cxa_atexit(CFieldPathHuffmanEncoder::~CFieldPathHuffmanEncoder, &g_HuffmanEncoder, &_dso_handle);
  // init once: CEntityKeyValues::sm_EmptyVariant
  CEntityKeyValues::sm_EmptyVariant.m_type = 0;
  CEntityKeyValues::sm_EmptyVariant.m_flags = 0;
  CEntityKeyValues::sm_EmptyVariant.m_uint64 = 0;
  __cxa_atexit(CVariantBase<CEntityVariantAllocator>::~CVariantBase, &CEntityKeyValues::sm_EmptyVariant, &_dso_handle);
}


// CNetworkSerializerBindingBuildFilter::~CNetworkSerializerBindingBuildFilter  (line 20, @0x00000000030cc520, libserver.so)  // inlines: ~INetworkSerializerBindingBuildFilter
void __fastcall CNetworkSerializerBindingBuildFilter::~CNetworkSerializerBindingBuildFilter(
        CNetworkSerializerBindingBuildFilter *const this)
{
  this->_vptr_INetworkSerializerBindingBuildFilter = off_47C32F0;  // vptr: INetworkSerializerBindingBuildFilter
}


// CNetworkSerializerBindingBuildFilter::~CNetworkSerializerBindingBuildFilter  (line 20, @0x00000000030cc550, libserver.so)  // inlines: ~CNetworkSerializerBindingBuildFilter, ~INetworkSerializerBindingBuildFilter
// calls: operator delete
void __fastcall CNetworkSerializerBindingBuildFilter::~CNetworkSerializerBindingBuildFilter(
        CNetworkSerializerBindingBuildFilter *const this)
{
  this->_vptr_INetworkSerializerBindingBuildFilter = off_47C32F0;  // vptr: INetworkSerializerBindingBuildFilter
  operator delete(this);
}


// CNetworkSerializerBindingBuildFilter::GetFieldPriority  (line 28, @0x00000000030cc620, libserver.so)  // inlines: GetSingleInheritanceBaseClass, SkipClassnameInitialCapitalC
// calls: CEntitySystem::FindComponentTypeByName, AssertMsg_ConditionFailed
// strings: "Component %s illegally specified INT_MIN as its priority!\n"
// globals: CNetworkSerializerBindingBuildFilter::GetFieldPriority(CSchemaClassInfo const*)::_assertionConstants
int __fastcall CNetworkSerializerBindingBuildFilter::GetFieldPriority(
        const CNetworkSerializerBindingBuildFilter *const this,
        ClassIntrospectionHandle_t pInfo)
{
  CEntityComponentHelper *ComponentTypeByName; // rax
  int m_nPriority; // ebx

  ComponentTypeByName = CEntitySystem::FindComponentTypeByName(
                          g_pEntitySystem,
                          &pInfo->m_Name.m_pImplChars[*pInfo->m_Name.m_pImplChars == 67]);
  if ( ComponentTypeByName != 0 )
  {
    m_nPriority = ComponentTypeByName->m_nPriority;
    if ( m_nPriority == 0x80000000
      && AssertMsg_ConditionFailed(
           &CNetworkSerializerBindingBuildFilter::GetFieldPriority(CSchemaClassInfo const*)const::_assertionConstants,
           "Component %s illegally specified INT_MIN as its priority!\n") != 0 )
    {
      __debugbreak();
    }
    return m_nPriority;
  }
  if ( pInfo->m_BaseClasses.m_Data.m_nImplLength == 0 || *(pInfo->m_BaseClasses.m_Data.m_pImplElements + 1) == 0 )
    return 0x80000000;
  return (*(this->_vptr_INetworkSerializerBindingBuildFilter + 2))(this);
}


// CNetworkSerializerBindingBuildFilter::GetDefaultGroupName  (line 44, @0x00000000030cc510, libserver.so)
const char *__fastcall CNetworkSerializerBindingBuildFilter::GetDefaultGroupName(
        const CNetworkSerializerBindingBuildFilter *const this)
{
  return "Entity2";
}


// CNetworkSerializerBindingBuildFilter::GetOverridePointedToClass  (line 49, @0x00000000030cc570, libserver.so)  // inlines: GetBaseClass, GetName, SkipClassnameInitialCapitalC
// calls: CUtlString::Get, strcmp, CEntitySystem::FindComponentTypeByName
CSchemaType *__fastcall CNetworkSerializerBindingBuildFilter::GetOverridePointedToClass(
        const CNetworkSerializerBindingBuildFilter *const this,
        const char *a2,
        CSchemaType *pBaseType)
{
  const char *v5; // rax
  CEntityClass *m_pClass; // r13
  const char *v7; // r12
  EntClassComponentOverride_t *m_pComponentOverrides; // rbx
  CEntityClassInfo *m_pBaseClassInfo; // rax
  CEntityComponentHelper *ComponentTypeByName; // rax

  v5 = CUtlString::Get(pBaseType + 1);
  m_pClass = this->m_pClass;
  v7 = v5;
  while ( m_pClass != 0 )
  {
    m_pComponentOverrides = m_pClass->m_pComponentOverrides;
    if ( m_pComponentOverrides != 0 )
    {
      while ( m_pComponentOverrides->pszBaseComponent != 0 )
      {
        if ( strcmp(v7, m_pComponentOverrides->pszBaseComponent) == 0 )
        {
          ComponentTypeByName = CEntitySystem::FindComponentTypeByName(
                                  g_pEntitySystem,
                                  &m_pComponentOverrides->pszOverrideComponent[*m_pComponentOverrides->pszOverrideComponent == 67]);
          return *((*(ComponentTypeByName->_vptr_CEntityComponentHelper + 2))(ComponentTypeByName) + 56);
        }
        ++m_pComponentOverrides;
      }
    }
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo == 0 )
      break;
    m_pClass = m_pBaseClassInfo->m_pClass;
  }
  return pBaseType;
}


// CEntitySystem::BuildEntityNetworking  (line 98, @0x00000000030cc230, libserver.so)  // inlines: AddToTail, BuildFlattenedSerializerInfo_t, CNetworkSerializerBindingBuildFilter, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Construct<BuildFlattenedSerializerInfo_t>, Element, EnsureCapacity, GrowMemory, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<BuildFlattenedSerializerInfo_t, int>::Purge, CUtlString::operator=, operator new, CUtlString::FreeMemoryBlock, CUtlMemory<BuildFlattenedSerializerInfo_t, int>::Grow, _Unwind_Resume
// callers: CEntity2NetworkClasses<ServerClass>::InitEntity2NetworkClasses
void __fastcall CEntitySystem::BuildEntityNetworking(
        CEntitySystem *const this,
        NetworkSerializationMode_t nMode,
        CUtlVector<CEntityClass*,CUtlMemory<CEntityClass*,int> > *const entityClasses)
{
  IFlattenedSerializers *v3; // rdi
  int m_Size; // ebx
  BuildFlattenedSerializerInfo_t *v6; // rax
  int v7; // r11d
  __int64 v8; // rbx
  BuildFlattenedSerializerInfo_t *m_pMemory; // rsi
  __int64 v10; // rdx
  __int64 v11; // r12
  int v12; // ebx
  INetworkSerializerBindingBuildFilter *m_pFilter; // rdi
  CEntityClassInfo *m_pClassInfo; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  const CSchemaClassInfo *v17; // r15
  __int64 v18; // r14
  int v19; // eax
  __int64 v20; // r14
  BuildFlattenedSerializerInfo_t *v21; // rax
  BuildFlattenedSerializerInfo_t *v22; // r14
  INetworkSerializerBindingBuildFilter *v23; // rax
  CEntityClass *v24; // r12
  CUtlString sInstanceClass; // [rsp+20h] [rbp-60h] BYREF
  CUtlVector<BuildFlattenedSerializerInfo_t,CUtlMemory<BuildFlattenedSerializerInfo_t,int> > workItems; // [rsp+30h] [rbp-50h] BYREF

  v3 = g_pFlattenedSerializers;
  if ( g_pFlattenedSerializers != 0 )
  {
    m_Size = entityClasses->m_Size;
    workItems.m_Size = 0;
    workItems.m_Memory.m_pMemory = 0;
    workItems.m_Memory.m_nAllocationCount = 0;
    workItems.m_Memory.m_nGrowSize = 0;
    if ( m_Size <= 0 )
    {
      m_pMemory = 0;
      v10 = 0;
      goto LABEL_6;
    }
    v6 = (**g_pMemAlloc)(g_pMemAlloc, 32LL * m_Size);
    v7 = entityClasses->m_Size;
    workItems.m_Memory.m_pMemory = v6;
    workItems.m_Memory.m_nAllocationCount = m_Size;
    if ( v7 > 0 )
    {
      v8 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v24 = entityClasses->m_Memory.m_pMemory[v8];
          if ( v24->m_hNetworkSerializer == 0 )
            break;
          if ( entityClasses->m_Size <= ++v8 )
          {
LABEL_26:
            v10 = workItems.m_Size;
            m_pMemory = workItems.m_Memory.m_pMemory;
            v3 = g_pFlattenedSerializers;
            goto LABEL_6;
          }
        }
        m_pClassInfo = v24->m_pClassInfo;
        sInstanceClass.m_pString = 0;
        CUtlString::operator=(&sInstanceClass, m_pClassInfo->m_pszCPPClassname);
        v15 = (*(v24->_vptr_CEntityClass + 7))(v24);
        v16 = (*(*v15 + 8LL))(v15);
        if ( v16 != 0 && (v17 = *(v16 + 40)) != 0 )
        {
          v18 = workItems.m_Size;
          v19 = workItems.m_Size;
          if ( workItems.m_Size == workItems.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<BuildFlattenedSerializerInfo_t,int>::Grow(&workItems.m_Memory, 1);
            v19 = workItems.m_Size;
          }
          v20 = v18;
          workItems.m_Size = v19 + 1;
          v21 = &workItems.m_Memory.m_pMemory[v20];
          if ( &workItems.m_Memory.m_pMemory[v20] != 0 )
          {
            v21->m_pClassIntrospection = 0;
            v21->m_pFilter = 0;
            v22 = &workItems.m_Memory.m_pMemory[v20];
            v21->m_pSerializerHandle = 0;
            v21->m_bUseNetworkVars = 0;
            v21->m_bForceCannotBeNetworked = 1;
            v21->m_bSerializerAlreadyExisted = 0;
          }
          else
          {
            v22 = 0;
          }
          v22->m_pClassIntrospection = v17;
          v23 = operator new(0x10u);  // new CNetworkSerializerBindingBuildFilter (size matches)
          v23[1]._vptr_INetworkSerializerBindingBuildFilter = v24;
          v23->_vptr_INetworkSerializerBindingBuildFilter = off_47C3330;  // vptr: CNetworkSerializerBindingBuildFilter
          v22->m_pFilter = v23;
          v22->m_pSerializerHandle = &v24->m_hNetworkSerializer;
          v22->m_bForceCannotBeNetworked = 1;
          v22->m_bUseNetworkVars = nMode == NetworkSerializationMode_t::NET_SERIALIZATION_MODE_0;
          if ( sInstanceClass.m_pString == 0 )
            goto LABEL_23;
        }
        else if ( sInstanceClass.m_pString == 0 )
        {
          goto LABEL_23;
        }
        CUtlString::FreeMemoryBlock(&sInstanceClass);
LABEL_23:
        if ( entityClasses->m_Size <= ++v8 )
          goto LABEL_26;
      }
    }
    m_pMemory = v6;
    v10 = workItems.m_Size;
    v3 = g_pFlattenedSerializers;
LABEL_6:
    (**v3)(v3, m_pMemory, v10);
    if ( workItems.m_Size > 0 )
    {
      v11 = 0;
      v12 = 0;
      do
      {
        m_pFilter = workItems.m_Memory.m_pMemory[v11].m_pFilter;
        if ( m_pFilter != 0 )
          (*(m_pFilter->_vptr_INetworkSerializerBindingBuildFilter + 1))(m_pFilter);
        ++v12;
        ++v11;
      }
      while ( workItems.m_Size > v12 );
    }
    workItems.m_Size = 0;
    if ( (workItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<BuildFlattenedSerializerInfo_t,int>::Purge(&workItems.m_Memory);
      if ( (workItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<BuildFlattenedSerializerInfo_t,int>::Purge(&workItems.m_Memory);
    }
  }
}


