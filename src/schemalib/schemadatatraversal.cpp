
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_schemadatatraversal.cpp  (line 0, @0x0000000001a6eee0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_schemadatatraversal_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CSchemaVisitorInfoMapBase::CSchemaVisitorInfoMapBase  (line 16, @0x000000000326c9c0, libserver.so)  // inlines: CUtlHashtable, CUtlMemory
// callers: _GLOBAL__sub_I_externalreferences.cpp
void __fastcall CSchemaVisitorInfoMapBase::CSchemaVisitorInfoMapBase(CSchemaVisitorInfoMapBase *const this)
{
  this->_vptr_CSchemaVisitorInfoMapBase = &off_47D13D0;
  this->m_Lookup.m_table.m_pMemory = 0;
  this->m_Lookup.m_table.m_nAllocationCount = 0;
  this->m_Lookup.m_table.m_nGrowSize = 0;
  this->m_Lookup.m_nUsed = 0;
  this->m_Lookup.m_nMinSize = 32;
  this->m_Lookup.m_bSizeLocked = 0;
}


// CSchemaVisitorInfoMapBase::~CSchemaVisitorInfoMapBase  (line 23, @0x000000000326ca00, libserver.so)  // inlines: FirstHandle, MarkInvalid, NextHandle, Purge, RemoveAll, operator[], ~CClassVisitInfo, ~CUtlHashtable, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<CClassVisitInfo::FieldInfo_t, int>::Purge, CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>, int>::Purge
// callers: CSchemaFieldVisitorInfoMap<CExtrefTraversal>::~CSchemaFieldVisitorInfoMap
void __fastcall CSchemaVisitorInfoMapBase::~CSchemaVisitorInfoMapBase(CSchemaVisitorInfoMapBase *const this)
{
  int m_nAllocationCount; // ecx
  CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*> *m_pMemory; // rsi
  CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*> *v4; // rax
  int v5; // r14d
  int m_nUsed; // edx
  int v7; // ecx
  CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*> *v8; // rax
  __int64 v9; // r13
  __int64 v10; // rbx
  bool v11; // zf
  int v12; // eax
  CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*> *v13; // rdx

  this->_vptr_CSchemaVisitorInfoMapBase = &off_47D13D0;
  m_nAllocationCount = this->m_Lookup.m_table.m_nAllocationCount;
  m_pMemory = this->m_Lookup.m_table.m_pMemory;
  if ( m_nAllocationCount > 0 )
  {
    v4 = m_pMemory + 1;
    v5 = 0;
    if ( m_pMemory->flags_and_hash < 0 )
    {
      while ( ++v5 != m_nAllocationCount )
      {
        ++v4;
        if ( v4[-1].flags_and_hash >= 0 )
          goto LABEL_16;
      }
    }
    else
    {
      v5 = 0;
      do
      {
        v9 = v5;
        v10 = *&m_pMemory[v9].data[2];
        if ( v10 != 0 )
        {
          v11 = (*(v10 + 60) & 0xC0000000) == 0;
          *(v10 + 40) = 0;
          if ( v11 )
          {
            CUtlMemory<CClassVisitInfo::FieldInfo_t,int>::Purge((v10 + 48));
            if ( (*(v10 + 60) & 0xC0000000) == 0 )
              CUtlMemory<CClassVisitInfo::FieldInfo_t,int>::Purge((v10 + 48));
          }
          v11 = (*(v10 + 36) & 0xC0000000) == 0;
          *(v10 + 16) = 0;
          if ( v11 )
          {
            CUtlMemory<CClassVisitInfo::FieldInfo_t,int>::Purge((v10 + 24));
            if ( (*(v10 + 36) & 0xC0000000) == 0 )
              CUtlMemory<CClassVisitInfo::FieldInfo_t,int>::Purge((v10 + 24));
          }
          operator delete(v10);
          m_pMemory = this->m_Lookup.m_table.m_pMemory;
          m_nAllocationCount = this->m_Lookup.m_table.m_nAllocationCount;
        }
        v12 = v5 + 1;
        if ( v5 + 1 >= m_nAllocationCount )
          break;
        v13 = &m_pMemory[v12 + 1];
        if ( m_pMemory[v9 + 1].flags_and_hash < 0 )
        {
          while ( ++v12 != m_nAllocationCount )
          {
            ++v13;
            if ( v13[-1].flags_and_hash >= 0 )
              goto LABEL_15;
          }
          break;
        }
LABEL_15:
        v5 = v12;
LABEL_16:
        ;
      }
      while ( v5 != -1 );
    }
  }
  m_nUsed = this->m_Lookup.m_nUsed;
  if ( m_nUsed != 0 )
  {
    v7 = m_nAllocationCount - 1;
    if ( v7 >= 0 )
    {
      v8 = &this->m_Lookup.m_table.m_pMemory[v7];
      do
      {
        if ( v8->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v8->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v7;
        --v8;
      }
      while ( v7 != -1 );
    }
    this->m_Lookup.m_nUsed = 0;
  }
  if ( (this->m_Lookup.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CSchemaClassInfo const*,CClassVisitInfo *>,int>::Purge(&this->m_Lookup.m_table);
}


// CSchemaVisitorInfoMapBase::FindOrCreate  (line 34, @0x000000000326cc60, libserver.so)  // inlines: CUtlKeyValuePair<const CSchemaClassInfo*, CClassVisitInfo*>, Construct<CUtlKeyValuePair<const CSchemaClassInfo*, CClassVisitInfo*>, const CSchemaClassInfo*, CClassVisitInfo*>, DoInsert<const CSchemaClassInfo*>, DoLookup<const CSchemaClassInfo*>, Find, Insert, SetClass, operator(), operator[]
// calls: operator new, CClassVisitInfo::CClassVisitInfo, CUtlHashtable<const CSchemaClassInfo*, CClassVisitInfo*, DefaultHashFunctor<const CSchemaClassInfo*>, DefaultEqualFunctor<const CSchemaClassInfo*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>, int> >::DoInsertUnconstructed, CUtlHashtable<const CSchemaClassInfo*, CClassVisitInfo*, DefaultHashFunctor<const CSchemaClassInfo*>, DefaultEqualFunctor<const CSchemaClassInfo*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>, int> >::DoLookup<const CSchemaClassInfo*>, CClassVisitInfo::UpdateState
// callers: CSchemaVisitorInfoMapBase::LookupClass, CSchemaVisitorBase::TraverseClass, CClassVisitInfo::UpdateState
CClassVisitInfo *__fastcall CSchemaVisitorInfoMapBase::FindOrCreate(
        CSchemaVisitorInfoMapBase *const this,
        ClassIntrospectionHandle_t pClassInfo)
{
  CSchemaVisitorInfoMapBase::LookupMap_t *p_m_Lookup; // r14
  CUtlHashtable<const CSchemaClassInfo*,CClassVisitInfo*,DefaultHashFunctor<const CSchemaClassInfo*>,DefaultEqualFunctor<const CSchemaClassInfo*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*>,int> >::handle_t *m_nUsed; // rcx
  unsigned int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // r13d
  CClassVisitInfo *v9; // r15
  CUtlHashtable<const CSchemaClassInfo*,CClassVisitInfo*,DefaultHashFunctor<const CSchemaClassInfo*>,DefaultEqualFunctor<const CSchemaClassInfo*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*>,int> >::handle_t *v10; // rcx
  CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*> *v11; // rax
  int v13; // eax

  p_m_Lookup = &this->m_Lookup;
  m_nUsed = this->m_Lookup.m_nUsed;
  v6 = 33 * (((4097 * pClassInfo + 2127912214) >> 19) ^ (4097 * pClassInfo + 2127912214) ^ 0xC761C23C);
  v7 = 9 * ((v6 - 369570787) ^ ((v6 + 374761393) << 9)) - 42973499;
  v8 = HIWORD(v7) ^ v7 ^ 0xB55A4F09;
  if ( m_nUsed != 0 )
  {
    v13 = CUtlHashtable<CSchemaClassInfo const*,CClassVisitInfo *,DefaultHashFunctor<CSchemaClassInfo const*>,DefaultEqualFunctor<CSchemaClassInfo const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CSchemaClassInfo const*,CClassVisitInfo *>,int>>::DoLookup<CSchemaClassInfo const*>(
            &this->m_Lookup,
            pClassInfo,
            v8,
            m_nUsed);
    if ( v13 != -1 )
      return *&this->m_Lookup.m_table.m_pMemory[v13].data[2];
  }
  v9 = operator new(0x40u);
  CClassVisitInfo::CClassVisitInfo(v9);
  if ( this->m_Lookup.m_nUsed == 0
    || CUtlHashtable<CSchemaClassInfo const*,CClassVisitInfo *,DefaultHashFunctor<CSchemaClassInfo const*>,DefaultEqualFunctor<CSchemaClassInfo const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CSchemaClassInfo const*,CClassVisitInfo *>,int>>::DoLookup<CSchemaClassInfo const*>(
         p_m_Lookup,
         pClassInfo,
         v8,
         v10) == -1 )
  {
    v11 = &this->m_Lookup.m_table.m_pMemory[CUtlHashtable<CSchemaClassInfo const*,CClassVisitInfo *,DefaultHashFunctor<CSchemaClassInfo const*>,DefaultEqualFunctor<CSchemaClassInfo const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CSchemaClassInfo const*,CClassVisitInfo *>,int>>::DoInsertUnconstructed(
                                              p_m_Lookup,
                                              v8,
                                              1)];
    if ( v11 != -4LL )
    {
      *v11->data = pClassInfo;
      *&v11->data[2] = v9;
    }
  }
  v9->m_pClassInfo = pClassInfo;
  CClassVisitInfo::UpdateState(v9, this);
  return v9;
}


// CSchemaVisitorInfoMapBase::LookupClass  (line 51, @0x000000000326cd90, libserver.so)
// calls: CSchemaVisitorInfoMapBase::FindOrCreate
// callers: DoesClassRequireExtrefFixup
CClassVisitInfo *__fastcall CSchemaVisitorInfoMapBase::LookupClass(
        CSchemaVisitorInfoMapBase *const this,
        ClassIntrospectionHandle_t pClassInfo)
{
  return CSchemaVisitorInfoMapBase::FindOrCreate(this, pClassInfo);
}


// CClassVisitInfo::CClassVisitInfo  (line 61, @0x000000000326cbd0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CSchemaVisitorInfoMapBase::FindOrCreate
void __fastcall CClassVisitInfo::CClassVisitInfo(CClassVisitInfo *const this)
{
  this->m_FieldsThatAreRelevant.m_Size = 0;
  this->m_FieldsThatAreRelevant.m_Memory.m_pMemory = 0;
  this->m_FieldsThatAreRelevant.m_Memory.m_nAllocationCount = 0;
  this->m_FieldsThatAreRelevant.m_Memory.m_nGrowSize = 0;
  this->m_FieldsLeadingToRelevantClasses.m_Size = 0;
  this->m_FieldsLeadingToRelevantClasses.m_Memory.m_pMemory = 0;
  this->m_FieldsLeadingToRelevantClasses.m_Memory.m_nAllocationCount = 0;
  this->m_FieldsLeadingToRelevantClasses.m_Memory.m_nGrowSize = 0;
  this->m_nState = ClassVisitInfoState_t::VISIT_INFO_STATE_UNINITIALIZED;
  this->m_bVirtualAndMightBeRelevant = 0;
  this->m_bClassIsRelevantItself = 0;
  this->m_pClassInfo = 0;
}


// CClassVisitInfo::UpdateState  (line 72, @0x000000000326d190, libserver.so)  // inlines: AddToTail, As<CSchemaType_Atomic_T>, As<CSchemaType_DeclaredClass>, As<CSchemaType_Ptr>, CUtlMemory, CUtlVector, CUtlVectorBase, ClassIsRelevant, ConvertToExternalMemory, GetManipulatorInterface<ISchemaCollectionManipulator>, GrowMemory, Interface<ISchemaCollectionManipulator>, InternalAs, Purge, Purge_FixedGrowable, RemoveAll, SchemaRecurseType, operator[], ~CSchemaFieldIterator, ~CSchemaInheritanceIterator, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CSchemaFieldIterator::CSchemaFieldIterator, CSchemaFieldIterator::Advance, CSchemaFieldIterator::IsValid, CSchemaFieldIterator::GetType, CSchemaVisitorInfoMapBase::FindOrCreate, CSchemaFieldIterator::GetFieldMemoryOffset, CSchemaFieldIterator::GetRawFieldHandle, CUtlMemory<CClassVisitInfo::FieldInfo_t, int>::Grow, CUtlMemory<const CSchemaClassInfo*, int>::Purge, CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge, _Unwind_Resume, __stack_chk_fail (13 total)
// callers: CSchemaVisitorInfoMapBase::FindOrCreate
void __fastcall CClassVisitInfo::UpdateState(CClassVisitInfo *const this, CSchemaVisitorInfoMapBase *pParentInfoMap)
{
  CSchemaType *Type; // rax
  CSchemaType *i; // rbx
  int v6; // eax
  __int64 (__fastcall ***v7)(_QWORD, _QWORD); // rdi
  __int64 v8; // rax
  CClassVisitInfo *v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  CClassVisitInfo::FieldInfo_t *v12; // rbx
  uint32 FieldMemoryOffset; // eax
  __int64 m_Size; // rbx
  int v15; // eax
  bool v16; // zf
  uint32 v17; // eax
  ClassIntrospectionHandle_t m_pClassInfo; // rsi
  __int64 j; // rbx
  CClassVisitInfo *v20; // rax
  CUtlVector<const CSchemaClassInfo*,CUtlMemory<const CSchemaClassInfo*,int> > derivedClassList; // [rsp+10h] [rbp-120h] BYREF
  CSchemaFieldIterator it; // [rsp+30h] [rbp-100h] BYREF
  unsigned __int64 v23; // [rsp+F8h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  if ( this->m_nState != ClassVisitInfoState_t::VISIT_INFO_STATE_COMPLETE )
  {
    this->m_nState = ClassVisitInfoState_t::VISIT_INFO_STATE_PARTIALLY_CALCULATED;
    if ( (*(pParentInfoMap->_vptr_CSchemaVisitorInfoMapBase + 1))(pParentInfoMap, this->m_pClassInfo) != 0 )
      this->m_bClassIsRelevantItself = 1;
    CSchemaFieldIterator::CSchemaFieldIterator(
      &it,
      this->m_pClassInfo,
      SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL);
LABEL_8:
    if ( CSchemaFieldIterator::IsValid(&it) )
    {
      Type = CSchemaFieldIterator::GetType(&it);
LABEL_10:
      for ( i = Type; ; i = *(i + 9) )
      {
        while ( 1 )
        {
          if ( i == 0 )
          {
LABEL_7:
            CSchemaFieldIterator::Advance(&it);
            goto LABEL_8;
          }
          if ( (*pParentInfoMap->_vptr_CSchemaVisitorInfoMapBase)(pParentInfoMap, i) != 0 )
          {
            m_Size = this->m_FieldsThatAreRelevant.m_Size;
            v15 = this->m_FieldsThatAreRelevant.m_Size;
            if ( m_Size == this->m_FieldsThatAreRelevant.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CClassVisitInfo::FieldInfo_t,int>::Grow(&this->m_FieldsThatAreRelevant.m_Memory, 1);
              v15 = this->m_FieldsThatAreRelevant.m_Size;
            }
            this->m_FieldsThatAreRelevant.m_Size = v15 + 1;
            v12 = &this->m_FieldsThatAreRelevant.m_Memory.m_pMemory[m_Size];
            FieldMemoryOffset = CSchemaFieldIterator::GetFieldMemoryOffset(&it);
            goto LABEL_31;
          }
          if ( (**i)(i) == 5 && (*(*i + 48LL))(i) == 4 )
          {
            v9 = CSchemaVisitorInfoMapBase::FindOrCreate(pParentInfoMap, *(i + 6));
            if ( v9->m_bVirtualAndMightBeRelevant
              || v9->m_bClassIsRelevantItself
              || v9->m_FieldsLeadingToRelevantClasses.m_Size + v9->m_FieldsThatAreRelevant.m_Size > 0
              || v9->m_nState == ClassVisitInfoState_t::VISIT_INFO_STATE_PARTIALLY_CALCULATED )
            {
              v10 = this->m_FieldsLeadingToRelevantClasses.m_Size;
              v11 = this->m_FieldsLeadingToRelevantClasses.m_Size;
              if ( v10 == this->m_FieldsLeadingToRelevantClasses.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CClassVisitInfo::FieldInfo_t,int>::Grow(&this->m_FieldsLeadingToRelevantClasses.m_Memory, 1);
                v11 = this->m_FieldsLeadingToRelevantClasses.m_Size;
              }
              this->m_FieldsLeadingToRelevantClasses.m_Size = v11 + 1;
              v12 = &this->m_FieldsLeadingToRelevantClasses.m_Memory.m_pMemory[v10];
              FieldMemoryOffset = CSchemaFieldIterator::GetFieldMemoryOffset(&it);
LABEL_31:
              v12->m_nFieldOffset = FieldMemoryOffset;
              v12->m_pField = CSchemaFieldIterator::GetRawFieldHandle(&it);
              goto LABEL_7;
            }
          }
          if ( (**i)(i) == 4 && (*(*i + 48LL))(i) == 1 )
            break;
LABEL_5:
          if ( (**i)(i) != 1 || (*(*i + 48LL))(i) != 4 )
            goto LABEL_7;
          i = *(i + 6);
        }
        v6 = *(i + 16);
        if ( v6 != 4003 && v6 != 4004 )
        {
          v7 = *(i + 3);
          if ( v7 != 0 )
          {
            v8 = (**v7)(v7, 0);
            if ( v8 != 0 )
            {
              Type = (*(*v8 + 48LL))(v8);
              goto LABEL_10;
            }
          }
          goto LABEL_5;
        }
      }
    }
    it.m_InheritanceIterator.m_ClassesToTraverse.m_Size = 0;
    v17 = it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_nGrowSize & 0xC0000000;
    if ( it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_nAllocationCount < 0
      || it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory == &it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_FixedMemory )
    {
      if ( v17 == 0 )
        CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t,int>::Purge(&it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory);
    }
    else if ( it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory != 0 && v17 == 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    }
    derivedClassList.m_Size = 0;
    derivedClassList.m_Memory.m_pMemory = 0;
    m_pClassInfo = this->m_pClassInfo;
    derivedClassList.m_Memory.m_nAllocationCount = 0;
    derivedClassList.m_Memory.m_nGrowSize = 0;
    (*(*g_pSchemaSystem + 152LL))(g_pSchemaSystem, m_pClassInfo, 1, &derivedClassList);
    for ( j = 0; derivedClassList.m_Size > j; ++j )
    {
      v20 = CSchemaVisitorInfoMapBase::FindOrCreate(pParentInfoMap, derivedClassList.m_Memory.m_pMemory[j]);
      if ( v20->m_bVirtualAndMightBeRelevant
        || v20->m_bClassIsRelevantItself
        || v20->m_FieldsLeadingToRelevantClasses.m_Size + v20->m_FieldsThatAreRelevant.m_Size > 0 )
      {
        this->m_bVirtualAndMightBeRelevant = 1;
      }
    }
    v16 = (derivedClassList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_nState = ClassVisitInfoState_t::VISIT_INFO_STATE_COMPLETE;
    derivedClassList.m_Size = 0;
    if ( v16 )
    {
      CUtlMemory<CSchemaClassInfo const*,int>::Purge(&derivedClassList.m_Memory);
      if ( (derivedClassList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CSchemaClassInfo const*,int>::Purge(&derivedClassList.m_Memory);
    }
  }
}


// CClassVisitInfo::ClassIsRelevant  (line 158, @0x000000000326cc30, libserver.so)
// callers: DoesClassRequireExtrefFixup
bool __fastcall CClassVisitInfo::ClassIsRelevant(CClassVisitInfo *const this)
{
  bool result; // al

  result = 1;
  if ( !this->m_bVirtualAndMightBeRelevant && !this->m_bClassIsRelevantItself )
    return this->m_FieldsLeadingToRelevantClasses.m_Size + this->m_FieldsThatAreRelevant.m_Size > 0;
  return result;
}


// CSchemaVisitorBase::TraverseClass  (line 166, @0x000000000326cda0, libserver.so)  // inlines: ClassIsRelevant, Find, HashIntConventional, HashItem<void*>, HashKey32, LookupClass, operator[]
// calls: CSchemaVisitorInfoMapBase::FindOrCreate, MurmurHash2, CUtlScalarHash<void const*, CDefaultHash32>::Insert, CSchemaVisitorBase::TraverseField
// callers: CBaseIntrospectedTypeManager::CleanupResourceReferences, CIntrospectedResourceDataHandler::FixupExternalReferences, CIntrospectedResourceDataHandler::CleanupAllocation, CSchemaVisitorBase::TraverseField
void __fastcall CSchemaVisitorBase::TraverseClass(
        CSchemaVisitorBase *const this,
        void *pClassInstance,
        ClassIntrospectionHandle_t pClass)
{
  const CSchemaClassInfo *v4; // r12
  CClassVisitInfo *v5; // rax
  CClassVisitInfo *v6; // r13
  void *v7; // r14
  uint32 v8; // eax
  CUtlScalarHash<void const*,CDefaultHash32>::HashScalarData_t *m_pData; // r8
  int i; // edx
  signed int v11; // edx
  CUtlScalarHash<void const*,CDefaultHash32>::HashScalarData_t *v12; // rcx
  __int64 v13; // r12
  uint32 v14; // eax
  __int64 j; // r12
  void *pClassInstancea; // [rsp+8h] [rbp-38h] BYREF
  void *data; // [rsp+18h] [rbp-28h] BYREF

  pClassInstancea = pClassInstance;
  v4 = *((*(pClass->m_pBinding->_vptr_ISchemaBinding + 13))(pClass->m_pBinding) + 40);
  v5 = CSchemaVisitorInfoMapBase::FindOrCreate(this->m_pParentInfoMap, v4);
  v6 = v5;
  if ( *&v5->m_bVirtualAndMightBeRelevant != 0
    || v5->m_FieldsLeadingToRelevantClasses.m_Size + v5->m_FieldsThatAreRelevant.m_Size > 0 )
  {
    if ( this->m_bVisitClasses )
      (*(this->_vptr_CSchemaVisitorBase + 1))(this, pClassInstancea, v4);
    v7 = pClassInstancea;
    v8 = MurmurHash2(&pClassInstancea, 8, 0x3501A674u);
    m_pData = this->m_VisitedClasses.m_pData;
    if ( m_pData != 0 )
    {
      for ( i = 32 * (BYTE2(v8) + BYTE1(v8) + 33 * (v8 - 1431655766) + 32 * (BYTE1(v8) + 33 * (v8 - 1431655766)))
              + BYTE2(v8)
              + BYTE1(v8)
              + 33 * (v8 - 1431655766)
              + 32 * (BYTE1(v8) + 33 * (v8 - 1431655766))
              + HIBYTE(v8); ; i = v11 + 1 )
      {
        v11 = this->m_VisitedClasses.m_uiBucketMask & i;
        v12 = &m_pData[v11];
        if ( v12->m_uiKey == -1 )
          break;
        if ( v8 == v12->m_uiKey && v7 == v12->m_Data )
        {
          if ( v11 != -1 )
            return;
          break;
        }
      }
    }
    v13 = 0;
    data = pClassInstancea;
    v14 = MurmurHash2(&pClassInstancea, 8, 0x3501A674u);
    CUtlScalarHash<void const*,CDefaultHash32>::Insert(&this->m_VisitedClasses, v14, &data);
    if ( v6->m_FieldsThatAreRelevant.m_Size > 0 )
    {
      do
      {
        while ( !this->m_bVisitFields )
        {
          if ( v6->m_FieldsThatAreRelevant.m_Size <= ++v13 )
            goto LABEL_18;
        }
        (*this->_vptr_CSchemaVisitorBase)(
          this,
          pClassInstancea + v6->m_FieldsThatAreRelevant.m_Memory.m_pMemory[v13].m_nFieldOffset,
          v6->m_FieldsThatAreRelevant.m_Memory.m_pMemory[v13].m_pField->m_pType);
        ++v13;
      }
      while ( v6->m_FieldsThatAreRelevant.m_Size > v13 );
    }
LABEL_18:
    for ( j = 0; v6->m_FieldsLeadingToRelevantClasses.m_Size > j; ++j )
      CSchemaVisitorBase::TraverseField(
        this,
        pClassInstancea + v6->m_FieldsLeadingToRelevantClasses.m_Memory.m_pMemory[j].m_nFieldOffset,
        v6->m_FieldsLeadingToRelevantClasses.m_Memory.m_pMemory[j].m_pField->m_pType,
        v6->m_FieldsLeadingToRelevantClasses.m_Memory.m_pMemory[j].m_pField);
  }
}


// CSchemaVisitorBase::TraverseField  (line 210, @0x000000000326cfa0, libserver.so)  // inlines: As<CSchemaType_Atomic_T>, As<CSchemaType_DeclaredClass>, As<CSchemaType_Ptr>, Call, GetManipulatorInterface<ISchemaCollectionManipulator>, GetRawPtr, Interface<ISchemaCollectionManipulator>, InternalAs, ResolveOffset, SchemaRecurseData<CSchemaVisitorBase::TraverseField(void*, CSchemaType*, FieldIntrospectionHandle_t)::TraverseCaller>
// calls: CSchemaVisitorBase::TraverseClass
// callers: CSchemaVisitorBase::TraverseClass
void __fastcall CSchemaVisitorBase::TraverseField(
        CSchemaVisitorBase *const this,
        void *pFieldInstance,
        CSchemaType *pFieldType,
        FieldIntrospectionHandle_t pField)
{
  int v8; // eax
  __int64 (__fastcall ***v9)(_QWORD, _QWORD); // rdi
  __int64 v10; // rax
  int v11; // ebx
  CSchemaType *v12; // r9
  unsigned int v13; // r15d
  __int64 v14; // rdx
  void *v15; // rax
  __int64 v16; // rax
  CSchemaType *v17; // rax
  char *v18; // rbx
  int v19; // eax
  int v20; // r15d
  CSchemaType *v21; // [rsp+0h] [rbp-40h]
  CSchemaType *v22; // [rsp+0h] [rbp-40h]
  CSchemaType *v23; // [rsp+8h] [rbp-38h]
  CSchemaType *v24; // [rsp+8h] [rbp-38h]
  CSchemaType *v25; // [rsp+8h] [rbp-38h]

  while ( 1 )
  {
    while ( 1 )
    {
      if ( (**pFieldType)(pFieldType) == 5 && (*(*pFieldType + 48LL))(pFieldType) == 4 )
      {
        CSchemaVisitorBase::TraverseClass(this, pFieldInstance, *(pFieldType + 6));
        return;
      }
      if ( (**pFieldType)(pFieldType) != 4 || (*(*pFieldType + 48LL))(pFieldType) != 1 )
        goto LABEL_5;
      v8 = *(pFieldType + 16);
      if ( v8 != 4003 )
        break;
      v16 = *pFieldInstance;
      if ( v16 == 0 )
        return;
      pFieldInstance = pFieldInstance + v16;
      if ( pFieldInstance == 0 )
        return;
      pFieldType = *(pFieldType + 9);
    }
    if ( v8 == 4004 )
      break;
    v9 = *(pFieldType + 3);
    if ( v9 != 0 )
    {
      v10 = (**v9)(v9, 0);
      if ( v10 != 0 )
      {
        v23 = v10;
        v21 = (*(*v10 + 48LL))(v10);
        v11 = (**v23)(v23, pFieldInstance);
        if ( v11 > 0 )
        {
          v12 = v23;
          v13 = 0;
          do
          {
            v14 = v13;
            v24 = v12;
            ++v13;
            v15 = (*(*v12 + 8LL))(v12, pFieldInstance, v14);
            CSchemaVisitorBase::TraverseField(this, v15, v21, pField);
            v12 = v24;
          }
          while ( v13 != v11 );
        }
        return;
      }
    }
LABEL_5:
    if ( (**pFieldType)(pFieldType) != 1 )
      return;
    if ( (*(*pFieldType + 48LL))(pFieldType) != 4 )
      return;
    pFieldInstance = *pFieldInstance;
    if ( pFieldInstance == 0 )
      return;
    pFieldType = *(pFieldType + 6);
  }
  v17 = *(pFieldType + 9);
  v18 = 0;
  v25 = v17;
  if ( *pFieldInstance != 0 )
    v18 = pFieldInstance + *pFieldInstance;
  v19 = (*(*v17 + 64LL))(v17);
  if ( *(pFieldInstance + 1) > 0 )
  {
    v20 = 0;
    v22 = v19;
    do
    {
      ++v20;
      CSchemaVisitorBase::TraverseField(this, v18, v25, pField);
      v18 = &v18[v22];
    }
    while ( v20 < *(pFieldInstance + 1) );
  }
}


