
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CExtrefTraversal::IsRelevantFieldType  (line 50, @0x000000000326b320, libserver.so)  // inlines: As<CSchemaType_Atomic_T>, InternalAs
// callers: CSchemaFieldVisitorInfoMap<CExtrefTraversal>::IsRelevantFieldType
bool __fastcall CExtrefTraversal::IsRelevantFieldType(const CSchemaType *pType)
{
  int v2; // eax

  if ( (**pType)(pType) != 4 || (v2 = (*(*pType + 48LL))(pType)) != 1 || *(pType + 16) != 4001 )
    LOBYTE(v2) = 0;
  return v2;
}


// CExtrefTraversal::VisitRelevantField  (line 64, @0x000000000326b020, libserver.so)  // inlines: As<CSchemaType_Atomic>, As<CSchemaType_Atomic_T>, As<CSchemaType_Ptr>, As<const CSchemaType_Atomic_T>, As<const CSchemaType_DeclaredClass>, Call, GetManipulatorInterface<ISchemaCollectionManipulator>, GetPtr, GetRawPtr, GetResourceTypeOfWeakHandle, GetValue, Interface<ISchemaCollectionManipulator>, InternalAs, IsResourceWeakHandle, ResolveOffset, SchemaMetaGetPtr2, SchemaRecurseData<CExtrefTraversal::VisitRelevantField(void*, CSchemaType*, FieldIntrospectionHandle_t)::HandleCaller_t>
// calls: CSchemaClassInfo::MetaGetPtr
// strings: "MResourceTypeForInfoType"
void __fastcall CExtrefTraversal::VisitRelevantField(
        CExtrefTraversal *const this,
        void *pFieldInstance,
        CSchemaType *pFieldType,
        FieldIntrospectionHandle_t pField)
{
  __int64 v7; // rbx
  __int64 v8; // rsi
  int v9; // eax
  __int64 (__fastcall ***v10)(_QWORD, _QWORD); // rdi
  __int64 v11; // rax
  __int64 v12; // r14
  int v13; // ebx
  unsigned int i; // r15d
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  char *v18; // r14
  __int64 v19; // rbx
  int v20; // eax
  char *v21; // r15
  int v22; // r14d
  int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r15
  _QWORD *v27; // rbx
  const CSchemaClassInfo *v28; // rdi
  __int64 *Ptr; // rax
  __int64 v30; // [rsp+0h] [rbp-40h]
  __int64 v31; // [rsp+0h] [rbp-40h]

  if ( (**pFieldType)(pFieldType) == 4 && (*(*pFieldType + 48LL))(pFieldType) == 1 && *(pFieldType + 16) == 4001 )
  {
    v7 = *(pFieldType + 9);
    if ( (**v7)(v7) != 4 )
      goto LABEL_10;
    v23 = (**v7)(v7);
    v25 = 0;
    if ( v23 == 4 )
    {
      (*(*v7 + 48LL))(v7, v24, 0);
      v25 = v7;
    }
    if ( (*(v25 + 64) - 4010) > 1 )
      goto LABEL_10;
    v26 = 0;
    if ( (**v7)(v7) == 4 && (*(*v7 + 48LL))(v7) == 1 )
      v26 = v7;
    v27 = *(v26 + 72);
    if ( (**v27)(v27) == 5
      && (*(*v27 + 48LL))(v27) == 4
      && (v28 = v27[6]) != 0
      && (Ptr = CSchemaClassInfo::MetaGetPtr(
                  v28,
                  "MResourceTypeForInfoType",
                  SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL,
                  0)) != 0 )
    {
      v8 = *Ptr;
    }
    else
    {
LABEL_10:
      v8 = 0;
    }
    (*(this->_vptr_CSchemaVisitorBase + 2))(this, v8, pFieldInstance, pField);
    return;
  }
  if ( (**pFieldType)(pFieldType) != 4 || (*(*pFieldType + 48LL))(pFieldType) != 1 )
    goto LABEL_5;
  v9 = *(pFieldType + 16);
  if ( v9 == 4003 )
  {
    v17 = *pFieldInstance;
    if ( v17 != 0 && pFieldInstance + v17 != 0 )
      this->VisitRelevantField(pFieldInstance + v17, *(pFieldType + 9), pField);
  }
  else if ( v9 == 4004 )
  {
    v18 = 0;
    v19 = *(pFieldType + 9);
    if ( *pFieldInstance != 0 )
      v18 = pFieldInstance + *pFieldInstance;
    v20 = (*(*v19 + 64LL))(v19);
    if ( *(pFieldInstance + 1) > 0 )
    {
      v21 = v18;
      v22 = 0;
      v31 = v20;
      do
      {
        ++v22;
        this->VisitRelevantField(v21, v19, pField);
        v21 += v31;
      }
      while ( v22 < *(pFieldInstance + 1) );
    }
  }
  else
  {
    v10 = *(pFieldType + 3);
    if ( v10 == 0 || (v11 = (**v10)(v10, 0), v12 = v11, v11 == 0) )
    {
LABEL_5:
      if ( (**pFieldType)(pFieldType) == 1 && (*(*pFieldType + 48LL))(pFieldType) == 4 && *pFieldInstance != 0 )
        this->VisitRelevantField(*pFieldInstance, *(pFieldType + 6), pField);
      return;
    }
    v30 = (*(*v11 + 48LL))(v11);
    v13 = (**v12)(v12, pFieldInstance);
    if ( v13 > 0 )
    {
      for ( i = 0; i != v13; ++i )
      {
        v15 = i;
        v16 = (*(*v12 + 8LL))(v12, pFieldInstance, v15);
        this->VisitRelevantField(v16, v30, pField);
      }
    }
  }
}


// DoesClassRequireExtrefFixup  (line 105, @0x000000000326b360, libserver.so)
// calls: CSchemaVisitorInfoMapBase::LookupClass, CClassVisitInfo::ClassIsRelevant
// callers: CBaseIntrospectedTypeManager::SetDiskDataBinding
// globals: g_ExtrefInfoMap
bool __fastcall DoesClassRequireExtrefFixup(ClassIntrospectionHandle_t pClass)
{
  CClassVisitInfo *v1; // rax

  v1 = CSchemaVisitorInfoMapBase::LookupClass(&g_ExtrefInfoMap, pClass);
  return CClassVisitInfo::ClassIsRelevant(v1);
}


// CResourceReferenceFixupTraversal::CResourceReferenceFixupTraversal  (line 114, @0x000000000326b790, libserver.so)  // inlines: CExtrefTraversal, CResourceNameGetter, CResourceRefTable, CSchemaFieldVisitor, CSchemaVisitorBase, CUtlHashtable, CUtlMemory, CUtlScalarHash, Init, MarkInvalid, Purge, RemoveAll, ResourceGetName, ResourceGetName<512ul>, ResourceId_t, String, V_strncpy<int>, ~CExtrefTraversal, ~CResourceRefTable, ~CSchemaFieldVisitor, ~CSchemaVisitorBase, ~CUtlHashtable, ~CUtlMemory, ~CUtlScalarHash
// calls: operator new [], _V_strncpy, CResourceReferenceFixupTraversal::RegisterRefs, __stack_chk_fail, CUtlMemory<CUtlHashtableEntry<ResourceId_t, char const*>, int>::Purge, operator delete [], _Unwind_Resume
// callers: CIntrospectedResourceDataHandler::FixupExternalReferences
// globals: g_ExtrefInfoMap
void __fastcall CResourceReferenceFixupTraversal::CResourceReferenceFixupTraversal(
        CResourceReferenceFixupTraversal *const this,
        IRD_RegisterResourceDataUtils *pDataUtils,
        const ResourceFileHeader_t *pHeader,
        ResourceHandle_t hOriginatingResource,
        ResourceType_t nOriginatingResourceType)
{
  CUtlScalarHash<void const*,CDefaultHash32>::HashScalarData_t *m_pData; // rax
  int m_maxData; // esi
  __int64 v12; // rdx
  IResourceSystem *v13; // rdi
  ResourceHandle_t m_hOriginiatingResource; // rax
  const char **m_Name; // rax
  const char *v16; // rsi
  CResourceNameGetter resourceName; // [rsp+0h] [rbp-240h] BYREF
  unsigned __int64 v18; // [rsp+208h] [rbp-38h]

  this->m_VisitedClasses.m_pData = 0;
  v18 = __readfsqword(0x28u);
  this->m_VisitedClasses.m_uiBucketMask = 0;
  this->_vptr_CSchemaVisitorBase = &off_47D1170;
  this->m_VisitedClasses.m_dataCount = 0;
  this->m_pParentInfoMap = &g_ExtrefInfoMap;
  this->m_VisitedClasses.m_maxData = 64;
  m_pData = operator new[](0x800u);
  m_maxData = this->m_VisitedClasses.m_maxData;
  this->m_VisitedClasses.m_pData = m_pData;
  this->m_VisitedClasses.m_uiBucketMask = 127;
  if ( 2 * m_maxData > 0 )
  {
    v12 = 0;
    while ( 1 )
    {
      m_pData[v12++].m_uiKey = -1;
      if ( v12 == (2 * m_maxData - 1) + 1LL )
        break;
      m_pData = this->m_VisitedClasses.m_pData;
    }
  }
  this->m_bVisitClasses = 0;
  this->_vptr_CSchemaVisitorBase = &off_47D1350;
  this->m_VisitedClasses.m_dataCount = 0;
  this->m_bVisitFields = 1;
  this->m_RefTable.m_ExtrefLookup.m_table.m_pMemory = 0;
  v13 = g_pResourceSystem;
  this->m_RefTable.m_ExtrefLookup.m_table.m_nAllocationCount = 0;
  this->m_RefTable.m_ExtrefLookup.m_table.m_nGrowSize = 0;
  this->m_RefTable.m_ExtrefLookup.m_nUsed = 0;
  this->m_RefTable.m_ExtrefLookup.m_nMinSize = 32;
  this->m_RefTable.m_ExtrefLookup.m_bSizeLocked = 0;
  this->m_pHeader = pHeader;
  this->m_hOriginiatingResource = hOriginatingResource;
  this->m_nOriginatingResourceId.m_Data = 0;
  this->m_nOriginatingResourceType = nOriginatingResourceType;
  this->m_nOriginatingResourceId.m_Data = (*(*v13 + 320LL))(v13, hOriginatingResource);
  m_hOriginiatingResource = this->m_hOriginiatingResource;
  if ( m_hOriginiatingResource != 0 && (m_Name = m_hOriginiatingResource->m_Name) != 0 )
  {
    v16 = "";
    if ( *m_Name != 0 )
      v16 = *m_Name;
    _V_strncpy(&resourceName, v16, 512);
  }
  else
  {
    _V_strncpy(&resourceName, "", 512);
  }
  this->m_pOriginatingResourceName = &resourceName;
  this->m_pDataUtils = pDataUtils;
  this->m_bInvalidReferencesEncountered = 0;
  CResourceReferenceFixupTraversal::RegisterRefs(this);
}


// CResourceReferenceFixupTraversal::RegisterRefs  (line 132, @0x000000000326b620, libserver.so)  // inlines: CUtlKeyValuePair<ResourceId_t, char const*>, Construct<CUtlKeyValuePair<ResourceId_t, char const*>, ResourceId_t, char const*>, DoInsert<const ResourceId_t&>, DoLookup<const ResourceId_t&>, GetPtr, GetRawPtr, HashItem<ResourceId_t>, Insert, ResolveOffset, ResourceId_t, Resource_GetBlock<ResourceExtRefList_t>, operator(), operator[]
// calls: Resource_GetBlock, CUtlHashtable<ResourceId_t, char const*, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<ResourceId_t, char const*>, int> >::DoInsertUnconstructed, MurmurHash2, CUtlHashtable<ResourceId_t, char const*, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<ResourceId_t, char const*>, int> >::DoLookup<const ResourceId_t&>
// callers: CResourceReferenceFixupTraversal::CResourceReferenceFixupTraversal
void __fastcall CResourceReferenceFixupTraversal::RegisterRefs(CResourceReferenceFixupTraversal *const this)
{
  __int64 v2; // rax
  int *Block; // rax
  int *v4; // r14
  __int64 v5; // r15
  int v6; // ebx
  CUtlHashtableEntry<ResourceId_t,char const*> *v7; // rax
  uint64 m_Data; // rdx
  __int64 v9; // rdx
  char *v10; // rax
  const char *v11; // r12
  char *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  char *v15; // rax
  uint32 v16; // eax
  CUtlHashtable<ResourceId_t,char const*,DefaultHashFunctor<ResourceId_t>,DefaultEqualFunctor<ResourceId_t>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int> >::handle_t *v17; // rcx
  unsigned int v18; // r9d
  int v19; // eax
  CResourceRefTable *p_m_RefTable; // [rsp+8h] [rbp-68h]
  uint32 v21; // [rsp+14h] [rbp-5Ch]
  ResourceId_t v22; // [rsp+20h] [rbp-50h] BYREF
  uint64 v23[8]; // [rsp+30h] [rbp-40h] BYREF

  if ( this->m_pHeader != 0 )
  {
    v2 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
    (*(*v2 + 8LL))(v2);
    Block = Resource_GetBlock(this->m_pHeader, 0x4C524552u);
    v4 = Block;
    if ( Block != 0 && Block[1] > 0 )
    {
      v5 = 0;
      v6 = 0;
      p_m_RefTable = &this->m_RefTable;
      do
      {
        while ( 1 )
        {
          v9 = *v4;
          v10 = 0;
          if ( v9 != 0 )
            v10 = v4 + v9;
          v11 = "";
          v12 = &v10[v5];
          v13 = *(v12 + 2);
          if ( v13 != 0 )
          {
            v14 = &v12[v13 + 8];
            if ( v14 != 0 )
              v11 = v14;
          }
          v15 = 0;
          if ( v9 != 0 )
            v15 = v4 + v9;
          v22.m_Data = *&v15[v5];
          v23[0] = v22.m_Data;
          v16 = MurmurHash2(v23, 8, 0x3501A674u);
          v18 = v16;
          if ( this->m_RefTable.m_ExtrefLookup.m_nUsed == 0 )
            break;
          v21 = v16;
          v19 = CUtlHashtable<ResourceId_t,char const*,DefaultHashFunctor<ResourceId_t>,DefaultEqualFunctor<ResourceId_t>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int>>::DoLookup<ResourceId_t const&>(
                  &p_m_RefTable->m_ExtrefLookup,
                  &v22,
                  v16,
                  v17);
          v18 = v21;
          if ( v19 == -1 )
            break;
          ++v6;
          v5 += 16;
          if ( v6 >= v4[1] )
            return;
        }
        v7 = &this->m_RefTable.m_ExtrefLookup.m_table.m_pMemory[CUtlHashtable<ResourceId_t,char const*,DefaultHashFunctor<ResourceId_t>,DefaultEqualFunctor<ResourceId_t>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int>>::DoInsertUnconstructed(
                                                                  &p_m_RefTable->m_ExtrefLookup,
                                                                  v18,
                                                                  1)];
        if ( v7 != -4LL )
        {
          m_Data = v22.m_Data;
          *&v7->data[2] = v11;
          *v7->data = m_Data;
        }
        ++v6;
        v5 += 16;
      }
      while ( v6 < v4[1] );
    }
  }
}


// CResourceReferenceFixupTraversal::HandleExtref  (line 154, @0x000000000326b470, libserver.so)  // inlines: CStrongHandle, CStrongHandleVoid, DoLookup<const ResourceId_t&>, Find, GetName, GetRaw, GetResourceId, HashItem<ResourceId_t>, ResourceAddRef, SetHandle, ThreadInterlockedIncrement, operator ResourceHandle_t, operator(), operator++, operator[], ~CStrongHandle, ~CStrongHandleVoid
// calls: MurmurHash2, LoggingSystem_IsChannelEnabled, CUtlString::Get, LoggingSystem_Log, CUtlHashtable<ResourceId_t, char const*, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<ResourceId_t, char const*>, int> >::DoLookup<const ResourceId_t&>, CStrongHandle<ResourceBindingVoid_t>::Shutdown, _Unwind_Resume
// strings: "Failed to fix resource reference '%s' (%s)- ID = %016llX, Expected in extref block.'\n"
void __fastcall CResourceReferenceFixupTraversal::HandleExtref(
        CResourceReferenceFixupTraversal *const this,
        ResourceType_t nResourceType,
        CResourceExtReferenceBase *pRef,
        FieldIntrospectionHandle_t pField)
{
  __int64 v7; // rax
  ResourceIdUnsafe_t m_nResourceId; // rax
  uint32 v9; // eax
  CUtlHashtable<ResourceId_t,char const*,DefaultHashFunctor<ResourceId_t>,DefaultEqualFunctor<ResourceId_t>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int> >::handle_t *v10; // rcx
  uint64 m_Data; // r15
  const char *v12; // rax
  int v13; // eax
  CUtlHashtableEntry<ResourceId_t,char const*> *m_pMemory; // rcx
  const ResourceBindingBase_t *m_pBinding; // r13
  bool v16; // zf
  ResourceId_t nId; // [rsp+0h] [rbp-60h] BYREF
  CStrongHandleVoid hReferencedResource; // [rsp+10h] [rbp-50h] BYREF
  ResourceIdUnsafe_t key[8]; // [rsp+20h] [rbp-40h] BYREF

  v7 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem, nResourceType);
  (*(*v7 + 8LL))(v7);
  if ( pRef != 0 )
  {
    m_nResourceId = pRef->m_nResourceId;
    nId.m_Data = pRef->m_nResourceId;
    if ( nId.m_Data != 0 )
    {
      key[0] = m_nResourceId;
      v9 = MurmurHash2(key, 8, 0x3501A674u);
      if ( this->m_RefTable.m_ExtrefLookup.m_nUsed == 0
        || (v13 = CUtlHashtable<ResourceId_t,char const*,DefaultHashFunctor<ResourceId_t>,DefaultEqualFunctor<ResourceId_t>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int>>::DoLookup<ResourceId_t const&>(
                    &this->m_RefTable.m_ExtrefLookup,
                    &nId,
                    v9,
                    v10)) == -1 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_TYPEMANAGER, 2) != 0 )
        {
          m_Data = nId.m_Data;
          v12 = CUtlString::Get(pField->m_pType + 1);
          LoggingSystem_Log(
            LOG_TYPEMANAGER,
            2,
            "Failed to fix resource reference '%s' (%s)- ID = %016llX, Expected in extref block.'\n",
            pField->m_Name.m_pImplChars,
            v12,
            m_Data);
        }
        this->m_bInvalidReferencesEncountered = 1;
        pRef->m_nResourceId = 0;
      }
      else
      {
        m_pMemory = this->m_RefTable.m_ExtrefLookup.m_table.m_pMemory;
        hReferencedResource.m_pBinding = 0;
        if ( (*(*this->m_pDataUtils + 24LL))(
               this->m_pDataUtils,
               this->m_hOriginiatingResource,
               *&m_pMemory[v13].data[2],
               &hReferencedResource) != 0 )
        {
          m_pBinding = hReferencedResource.m_pBinding;
          v16 = hReferencedResource.m_pBinding == 0;
          pRef->m_nResourceId = hReferencedResource.m_pBinding;
          if ( !v16 )
          {
            if ( (m_pBinding->m_nFlags & 0x20) != 0 )
              (*(*g_pResourceHandleUtils + 24LL))(
                g_pResourceHandleUtils,
                m_pBinding,
                3,
                this->m_nOriginatingResourceId.m_Data);
            _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
          }
          CStrongHandle<ResourceBindingVoid_t>::Shutdown(&hReferencedResource);
        }
        else
        {
          this->m_bInvalidReferencesEncountered = 1;
          pRef->m_nResourceId = 0;
          CStrongHandle<ResourceBindingVoid_t>::Shutdown(&hReferencedResource);
        }
      }
    }
  }
}


// CResourceReferenceFixupTraversal::InvalidReferencesEncountered  (line 213, @0x000000000326b380, libserver.so)
// callers: CIntrospectedResourceDataHandler::FixupExternalReferences
bool __fastcall CResourceReferenceFixupTraversal::InvalidReferencesEncountered(
        CResourceReferenceFixupTraversal *const this)
{
  return this->m_bInvalidReferencesEncountered;
}


// CReferenceCleanupTraversal::CReferenceCleanupTraversal  (line 221, @0x000000000326b390, libserver.so)  // inlines: CExtrefTraversal, CSchemaFieldVisitor, CSchemaVisitorBase, CUtlScalarHash, Init, RemoveAll, ~CUtlScalarHash
// calls: operator new [], operator delete [], _Unwind_Resume
// callers: CBaseIntrospectedTypeManager::CleanupResourceReferences, CIntrospectedResourceDataHandler::CleanupAllocation
// globals: g_ExtrefInfoMap
void __fastcall CReferenceCleanupTraversal::CReferenceCleanupTraversal(
        CReferenceCleanupTraversal *const this,
        ResourceHandle_t hOriginatingResource,
        ResourceType_t nOriginatingResourceType)
{
  CUtlScalarHash<void const*,CDefaultHash32>::HashScalarData_t *m_pData; // rax
  int m_maxData; // esi
  __int64 v8; // rcx

  this->_vptr_CSchemaVisitorBase = &off_47D1170;
  this->m_VisitedClasses.m_pData = 0;
  this->m_VisitedClasses.m_uiBucketMask = 0;
  this->m_VisitedClasses.m_dataCount = 0;
  this->m_pParentInfoMap = &g_ExtrefInfoMap;
  this->m_VisitedClasses.m_maxData = 64;
  m_pData = operator new[](0x800u);
  m_maxData = this->m_VisitedClasses.m_maxData;
  this->m_VisitedClasses.m_pData = m_pData;
  this->m_VisitedClasses.m_uiBucketMask = 127;
  if ( 2 * m_maxData > 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      m_pData[v8++].m_uiKey = -1;
      if ( v8 == (2 * m_maxData - 1) + 1LL )
        break;
      m_pData = this->m_VisitedClasses.m_pData;
    }
  }
  this->m_hOriginatingResource = hOriginatingResource;
  this->m_nOriginatingResourceType = nOriginatingResourceType;
  this->m_VisitedClasses.m_dataCount = 0;
  this->m_bVisitClasses = 0;
  this->m_bVisitFields = 1;
  this->_vptr_CSchemaVisitorBase = &off_47D1390;
}


// CReferenceCleanupTraversal::HandleExtref  (line 230, @0x000000000326aed0, libserver.so)  // inlines: CRelativeTickCount, CRelativeTickTimer, CResourceSystemProfileScope, End, GetHandle, Init, ResourceRelease, Sample, SetHandle, Start, ThreadInterlockedExchangeAdd64, ThreadInterlockedIncrement, operator++, operator+=, ~CResourceSystemProfileScope
// calls: Plat_RelativeTicks, _Unwind_Resume
void __fastcall CReferenceCleanupTraversal::HandleExtref(
        CReferenceCleanupTraversal *const this,
        ResourceType_t nResourceType,
        CResourceExtReferenceBase *pRef,
        FieldIntrospectionHandle_t pField)
{
  __int64 v6; // rax
  __int64 v7; // rax
  bool v8; // r14
  ResourceIdUnsafe_t m_nResourceId; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  volatile signed __int64 *v12; // [rsp+0h] [rbp-40h]
  __int64 v13; // [rsp+8h] [rbp-38h]

  v6 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem, nResourceType, *g_pResourceSystem, pField);
  v7 = (*(*v6 + 8LL))(v6);
  v8 = this->m_nOriginatingResourceType == 1717792886 || this->m_nOriginatingResourceType == 0;
  if ( v8 )
  {
    v11 = v7;
    v12 = (v7 + 288);
    _InterlockedAdd((v7 + 296), 1u);
    v13 = Plat_RelativeTicks();
    if ( pRef == 0 )
    {
      _InterlockedAdd64((v11 + 288), Plat_RelativeTicks() - v13);
      return;
    }
  }
  else
  {
    if ( pRef == 0 )
      return;
    v13 = 0;
  }
  m_nResourceId = pRef->m_nResourceId;
  if ( pRef->m_nResourceId != 0 )
  {
    v10 = (*(*g_pResourceSystem + 320LL))(g_pResourceSystem, this->m_hOriginatingResource);
    if ( (*(m_nResourceId + 16) & 0x20) != 0 )
      (*(*g_pResourceHandleUtils + 32LL))(g_pResourceHandleUtils, m_nResourceId, 3, v10);
    if ( _InterlockedSub((m_nResourceId + 24), 1u) == 0 )
      (*(*g_pResourceHandleUtils + 16LL))(g_pResourceHandleUtils, m_nResourceId);
    pRef->m_nResourceId = 0;
  }
  if ( v8 )
    _InterlockedAdd64(v12, Plat_RelativeTicks() - v13);
}


