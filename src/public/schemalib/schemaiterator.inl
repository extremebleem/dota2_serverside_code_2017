
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSchemaFieldIterator::GetMetaPtr  (line 206, @0x00000000030c63c0, libserver.so)  // inlines: AddToTail, BuildDerivedClassList, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, CopyConstruct<const CSchemaClassInfo*>, CopyConstruct<void*>, Count, Element, FindTagAdditions, GrowMemory, Purge, Purge_FixedGrowable, RemoveAll, WasTagRemoved, _V_strcmp, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlMemoryFixedGrowable<const CSchemaClassInfo*, 32ul, int>::CUtlMemoryFixedGrowable, CUtlMemory<const CSchemaClassInfo*, int>::Grow, CSchemaFieldIterator::GetFieldName, CSchemaClassInfo::FindFieldMetadataOverride, strcmp, CUtlMemory<const CSchemaClassInfo*, int>::ConvertToExternalMemory, CUtlMemory<const CSchemaClassInfo*, int>::Purge, CSchemaMetadataSet::GetPtr, CUtlMemory<void*, int>::Purge, CUtlMemory<void*, int>::Grow, CUtlVectorBase<const CSchemaClassInfo*, CUtlMemoryFixedGrowable<const CSchemaClassInfo*, 32ul, int> >::~CUtlVectorBase, _Unwind_Resume (13 total)
// callers: CEntitySystem::BuildComponentUnserializer
void *__fastcall CSchemaFieldIterator::GetMetaPtr(const CSchemaFieldIterator *const this, const char *pMetaTagName)
{
  __int64 m_nCurrentClassIndex; // rdx
  CSchemaInheritanceIterator::ClassToTraverse_t *m_pMemory; // rax
  __int64 m_nDerivedClassIndex; // rbx
  __int64 m_Size; // r12
  int v8; // edx
  const CSchemaClassInfo **v9; // rax
  __int64 v10; // rbx
  const CSchemaClassInfo *m_Class; // r14
  int v12; // eax
  int v13; // r12d
  const CSchemaClassInfo *v14; // rbx
  const char *FieldName; // rax
  const CSchemaFieldMetadataOverride *FieldMetadataOverride; // rax
  const CSchemaFieldMetadataOverride *v17; // r14
  unsigned int v18; // eax
  __int64 v19; // rbx
  char v20; // r15
  char *v21; // r12
  __int64 v22; // r15
  int v23; // eax
  void **v24; // rax
  unsigned int v25; // eax
  const char **m_pImplElements; // r12
  __int64 v27; // rbx
  void *Ptr; // r12
  uint32 v29; // ebx
  uint32 v31; // ebx
  unsigned __int64 v32; // [rsp+10h] [rbp-190h]
  unsigned __int64 v34; // [rsp+20h] [rbp-180h]
  __int64 v35; // [rsp+28h] [rbp-178h]
  CUtlVector<void*,CUtlMemory<void*,int> > adds; // [rsp+30h] [rbp-170h] BYREF
  CUtlVectorFixedGrowable<const CSchemaClassInfo*,32ul> classHandles; // [rsp+50h] [rbp-150h] BYREF
  unsigned __int64 v38; // [rsp+168h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  classHandles.m_Size = 0;
  CUtlMemoryFixedGrowable<CSchemaClassInfo const*,32ul,int>::CUtlMemoryFixedGrowable(&classHandles.m_Memory, 0, 32);
  m_nCurrentClassIndex = this->m_InheritanceIterator.m_nCurrentClassIndex;
  if ( m_nCurrentClassIndex == -1
    || (m_pMemory = this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory,
        (m_nDerivedClassIndex = m_pMemory[m_nCurrentClassIndex].m_nDerivedClassIndex) == -1) )
  {
    LODWORD(m_Size) = classHandles.m_Size;
  }
  else
  {
    m_Size = classHandles.m_Size;
    do
    {
      v10 = m_nDerivedClassIndex;
      m_Class = m_pMemory[v10].m_Class;
      v12 = m_Size;
      if ( classHandles.m_Memory.m_nAllocationCount == m_Size )
      {
        CUtlMemory<CSchemaClassInfo const*,int>::Grow(&classHandles.m_Memory, 1);
        v12 = classHandles.m_Size;
      }
      v8 = v12 + 1;
      classHandles.m_Size = v12 + 1;
      v9 = &classHandles.m_Memory.m_pMemory[m_Size];
      if ( v9 != 0 )
      {
        *v9 = m_Class;
        m_Size = classHandles.m_Size;
      }
      else
      {
        m_Size = v8;
      }
      m_pMemory = this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory;
      m_nDerivedClassIndex = m_pMemory[v10].m_nDerivedClassIndex;
    }
    while ( m_nDerivedClassIndex != -1 );
  }
  adds.m_Size = 0;
  v13 = m_Size - 1;
  adds.m_Memory.m_pMemory = 0;
  adds.m_Memory.m_nAllocationCount = 0;
  adds.m_Memory.m_nGrowSize = 0;
  if ( v13 < 0 )
  {
    v31 = 0;
LABEL_34:
    Ptr = CSchemaMetadataSet::GetPtr(&this->m_CurrentField->m_Metadata, pMetaTagName);
    if ( v31 != 0 )
      goto LABEL_29;
    goto LABEL_35;
  }
  v34 = 8LL * v13;
  v32 = 8 * (v13 - v13) - 8;
  while ( 1 )
  {
    v14 = classHandles.m_Memory.m_pMemory[v34 / 8];
    FieldName = CSchemaFieldIterator::GetFieldName(this);
    FieldMetadataOverride = CSchemaClassInfo::FindFieldMetadataOverride(v14, FieldName);
    v17 = FieldMetadataOverride;
    if ( FieldMetadataOverride != 0 )
      break;
LABEL_32:
    v34 -= 8LL;
    if ( v34 == v32 )
    {
      v31 = adds.m_Memory.m_nGrowSize & 0xC0000000;
      goto LABEL_34;
    }
  }
  v18 = abs32(FieldMetadataOverride->m_ModifyAdds.m_Data.m_nImplLength);
  if ( v18 == 0 )
    goto LABEL_22;
  v19 = 0;
  v20 = 0;
  v35 = 32 * (v18 - 1 + 1LL);
  do
  {
    while ( 1 )
    {
      v21 = v17->m_ModifyAdds.m_Data.m_pImplElements + v19;
      if ( strcmp(pMetaTagName, *v21) == 0 )
        break;
LABEL_15:
      v19 += 32;
      if ( v19 == v35 )
        goto LABEL_21;
    }
    v22 = adds.m_Size;
    v23 = adds.m_Size;
    if ( adds.m_Size == adds.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<void *,int>::Grow(&adds.m_Memory, 1);
      v23 = adds.m_Size;
    }
    adds.m_Size = v23 + 1;
    v24 = &adds.m_Memory.m_pMemory[v22];
    if ( v24 == 0 )
    {
      v20 = 1;
      goto LABEL_15;
    }
    v19 += 32;
    v20 = 1;
    *v24 = *(v21 + 3);
  }
  while ( v19 != v35 );
LABEL_21:
  if ( v20 != 0 )
  {
    Ptr = *adds.m_Memory.m_pMemory;
    v29 = adds.m_Memory.m_nGrowSize & 0xC0000000;
    goto LABEL_28;
  }
LABEL_22:
  if ( !v17->m_bRemoveAll )
  {
    v25 = abs32(v17->m_ModifyRemoves.m_Data.m_nImplLength);
    if ( v25 == 0 )
      goto LABEL_32;
    m_pImplElements = v17->m_ModifyRemoves.m_Data.m_pImplElements;
    v27 = &m_pImplElements[2 * v25];
    while ( strcmp(pMetaTagName, *m_pImplElements) != 0 )
    {
      m_pImplElements += 2;
      if ( m_pImplElements == v27 )
        goto LABEL_32;
    }
  }
  Ptr = 0;
  v29 = adds.m_Memory.m_nGrowSize & 0xC0000000;
LABEL_28:
  if ( v29 == 0 )
  {
LABEL_35:
    CUtlMemory<void *,int>::Purge(&adds.m_Memory);
    if ( (adds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<void *,int>::Purge(&adds.m_Memory);
  }
LABEL_29:
  classHandles.m_Size = 0;
  CUtlMemory<CSchemaClassInfo const*,int>::ConvertToExternalMemory(
    &classHandles.m_Memory,
    &classHandles.m_Memory.m_FixedMemory,
    32,
    0,
    1,
    0x3FFFFFFFu);
  if ( (classHandles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CSchemaClassInfo const*,int>::Purge(&classHandles.m_Memory);
  return Ptr;
}


// CSchemaFieldIterator::GetAllMetaPtrsInternal  (line 244, @0x00000000030c6830, libserver.so)  // inlines: AddToTail, BuildDerivedClassList, CUtlVectorBase, CUtlVectorFixedGrowable, CopyConstruct<const CSchemaClassInfo*>, CopyConstruct<void*>, Count, Element, FindTagAdditions, GetAllPtrs<void*>, GrowMemory, Purge, Purge_FixedGrowable, RemoveAll, WasTagRemoved, _V_strcmp, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlMemoryFixedGrowable<const CSchemaClassInfo*, 32ul, int>::CUtlMemoryFixedGrowable, CUtlMemory<const CSchemaClassInfo*, int>::Grow, CSchemaFieldIterator::GetFieldName, CSchemaClassInfo::FindFieldMetadataOverride, strcmp, CUtlMemory<const CSchemaClassInfo*, int>::ConvertToExternalMemory, CUtlMemory<void*, int>::Grow, CUtlMemory<const CSchemaClassInfo*, int>::Purge, CUtlVectorBase<const CSchemaClassInfo*, CUtlMemoryFixedGrowable<const CSchemaClassInfo*, 32ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CEntitySystem::AddComponentProceduralKeys, CEntitySystem::BuildComponentUnserializer
void __fastcall CSchemaFieldIterator::GetAllMetaPtrsInternal(
        const CSchemaFieldIterator *const this,
        const char *pMetaTagName,
        CUtlVector<void*,CUtlMemory<void*,int> > *const metaValues)
{
  __int64 m_nCurrentClassIndex; // rdx
  CSchemaInheritanceIterator::ClassToTraverse_t *m_pMemory; // rax
  __int64 m_nDerivedClassIndex; // rbx
  __int64 v9; // r12
  int v10; // edx
  const CSchemaClassInfo **v11; // rax
  __int64 v12; // rbx
  const CSchemaClassInfo *m_Class; // r14
  int m_Size; // eax
  int v15; // r12d
  const CSchemaClassInfo *v16; // rbx
  const char *FieldName; // rax
  const CSchemaFieldMetadataOverride *FieldMetadataOverride; // rax
  const CSchemaFieldMetadataOverride *v19; // r14
  unsigned int v20; // eax
  CUtlMemory<const CSchemaClassInfo*,int> *v21; // rbx
  char *v22; // r12
  int v23; // eax
  void **v24; // rax
  unsigned int v25; // eax
  const char **m_pImplElements; // r12
  __int64 v27; // rbx
  __int64 v28; // r12
  signed int v29; // r14d
  FieldIntrospectionHandle_t m_CurrentField; // rbx
  int v31; // eax
  void **v32; // rax
  __int64 v33; // r12
  signed int v34; // r14d
  int v35; // eax
  void **v36; // rax
  unsigned __int64 v37; // [rsp+18h] [rbp-178h]
  CUtlMemory<void*,int> *v39; // [rsp+28h] [rbp-168h]
  int v40; // [rsp+30h] [rbp-160h]
  void *v41; // [rsp+30h] [rbp-160h]
  void *v42; // [rsp+30h] [rbp-160h]
  CUtlMemory<const CSchemaClassInfo*,int> *v43; // [rsp+38h] [rbp-158h]
  CUtlMemory<const CSchemaClassInfo*,int> *v44; // [rsp+38h] [rbp-158h]
  int v45; // [rsp+38h] [rbp-158h]
  CUtlMemory<const CSchemaClassInfo*,int> *v46; // [rsp+38h] [rbp-158h]
  int v47; // [rsp+38h] [rbp-158h]
  CUtlVectorFixedGrowable<const CSchemaClassInfo*,32ul> classHandles; // [rsp+40h] [rbp-150h] BYREF
  unsigned __int64 v49; // [rsp+158h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  classHandles.m_Size = 0;
  CUtlMemoryFixedGrowable<CSchemaClassInfo const*,32ul,int>::CUtlMemoryFixedGrowable(&classHandles.m_Memory, 0, 32);
  m_nCurrentClassIndex = this->m_InheritanceIterator.m_nCurrentClassIndex;
  if ( m_nCurrentClassIndex == -1
    || (m_pMemory = this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory,
        (m_nDerivedClassIndex = m_pMemory[m_nCurrentClassIndex].m_nDerivedClassIndex) == -1) )
  {
    LODWORD(v9) = 0;
  }
  else
  {
    v9 = 0;
    do
    {
      v12 = m_nDerivedClassIndex;
      m_Class = m_pMemory[v12].m_Class;
      m_Size = v9;
      if ( classHandles.m_Memory.m_nAllocationCount == v9 )
      {
        CUtlMemory<CSchemaClassInfo const*,int>::Grow(&classHandles.m_Memory, 1);
        m_Size = classHandles.m_Size;
      }
      v10 = m_Size + 1;
      classHandles.m_Size = m_Size + 1;
      v11 = &classHandles.m_Memory.m_pMemory[v9];
      if ( v11 != 0 )
      {
        *v11 = m_Class;
        v9 = classHandles.m_Size;
      }
      else
      {
        v9 = v10;
      }
      m_pMemory = this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory;
      m_nDerivedClassIndex = m_pMemory[v12].m_nDerivedClassIndex;
    }
    while ( m_nDerivedClassIndex != -1 );
  }
  v15 = v9 - 1;
  if ( v15 < 0 )
  {
LABEL_30:
    v28 = 0;
    v29 = 0;
    m_CurrentField = this->m_CurrentField;
    if ( m_CurrentField->m_Metadata.m_StaticEntries.m_Data.m_nImplLength != 0 )
    {
      do
      {
        v44 = (m_CurrentField->m_Metadata.m_StaticEntries.m_Data.m_pImplElements + v28);
        if ( strcmp(v44->m_pMemory, pMetaTagName) == 0 )
        {
          v41 = *&v44[1].m_nAllocationCount;
          v31 = metaValues->m_Size;
          v45 = metaValues->m_Size;
          if ( metaValues->m_Size == metaValues->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<void *,int>::Grow(&metaValues->m_Memory, 1);
            v31 = metaValues->m_Size;
          }
          metaValues->m_Size = v31 + 1;
          v32 = &metaValues->m_Memory.m_pMemory[v45];
          if ( v32 != 0 )
            *v32 = v41;
        }
        ++v29;
        v28 += 32;
      }
      while ( v29 < abs32(m_CurrentField->m_Metadata.m_StaticEntries.m_Data.m_nImplLength) );
    }
    v33 = 0;
    v34 = 0;
    if ( m_CurrentField->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength != 0 )
    {
      do
      {
        v46 = (m_CurrentField->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements + v33);
        if ( strcmp(v46->m_pMemory, pMetaTagName) == 0 )
        {
          v42 = *&v46[1].m_nAllocationCount;
          v35 = metaValues->m_Size;
          v47 = metaValues->m_Size;
          if ( metaValues->m_Size == metaValues->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<void *,int>::Grow(&metaValues->m_Memory, 1);
            v35 = metaValues->m_Size;
          }
          metaValues->m_Size = v35 + 1;
          v36 = &metaValues->m_Memory.m_pMemory[v47];
          if ( v36 != 0 )
            *v36 = v42;
        }
        ++v34;
        v33 += 32;
      }
      while ( v34 < abs32(m_CurrentField->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength) );
    }
  }
  else
  {
    v39 = (8LL * v15);
    v37 = 8 * (v15 - v15) - 8;
    while ( 1 )
    {
      v16 = *(classHandles.m_Memory.m_pMemory + v39);
      FieldName = CSchemaFieldIterator::GetFieldName(this);
      FieldMetadataOverride = CSchemaClassInfo::FindFieldMetadataOverride(v16, FieldName);
      v19 = FieldMetadataOverride;
      if ( FieldMetadataOverride != 0 )
      {
        v20 = abs32(FieldMetadataOverride->m_ModifyAdds.m_Data.m_nImplLength);
        if ( v20 != 0 )
        {
          v21 = 0;
          v43 = (32 * (v20 - 1 + 1LL));
          do
          {
            while ( 1 )
            {
              v22 = v19->m_ModifyAdds.m_Data.m_pImplElements + v21;
              if ( strcmp(pMetaTagName, *v22) == 0 )
              {
                v23 = metaValues->m_Size;
                v40 = metaValues->m_Size;
                if ( metaValues->m_Size == metaValues->m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<void *,int>::Grow(&metaValues->m_Memory, 1);
                  v23 = metaValues->m_Size;
                }
                metaValues->m_Size = v23 + 1;
                v24 = &metaValues->m_Memory.m_pMemory[v40];
                if ( v24 != 0 )
                  break;
              }
              v21 += 2;
              if ( v21 == v43 )
                goto LABEL_21;
            }
            v21 += 2;
            *v24 = *(v22 + 3);
          }
          while ( v21 != v43 );
        }
LABEL_21:
        if ( v19->m_bRemoveAll )
          goto LABEL_26;
        v25 = abs32(v19->m_ModifyRemoves.m_Data.m_nImplLength);
        if ( v25 != 0 )
          break;
      }
LABEL_29:
      v39 = (v39 - 8);
      if ( v39 == v37 )
        goto LABEL_30;
    }
    m_pImplElements = v19->m_ModifyRemoves.m_Data.m_pImplElements;
    v27 = &m_pImplElements[2 * v25];
    while ( strcmp(pMetaTagName, *m_pImplElements) != 0 )
    {
      m_pImplElements += 2;
      if ( m_pImplElements == v27 )
        goto LABEL_29;
    }
  }
LABEL_26:
  CUtlMemory<CSchemaClassInfo const*,int>::ConvertToExternalMemory(
    &classHandles.m_Memory,
    &classHandles.m_Memory.m_FixedMemory,
    32,
    0,
    1,
    0x3FFFFFFFu);
  if ( (classHandles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CSchemaClassInfo const*,int>::Purge(&classHandles.m_Memory);
}


// CSchemaFieldIterator::IsMetaPresent  (line 282, @0x00000000030c6070, libserver.so)  // inlines: AddToTail, BuildDerivedClassList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CopyConstruct<const CSchemaClassInfo*>, Count, Element, GrowMemory, IsPresent, Purge, Purge_FixedGrowable, RemoveAll, WasTagAdded, WasTagRemoved, _V_strcmp, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlMemory<const CSchemaClassInfo*, int>::Grow, CSchemaFieldIterator::GetFieldName, CSchemaClassInfo::FindFieldMetadataOverride, strcmp, CUtlMemory<const CSchemaClassInfo*, int>::ConvertToExternalMemory, CUtlMemory<const CSchemaClassInfo*, int>::Purge, CUtlVectorBase<const CSchemaClassInfo*, CUtlMemoryFixedGrowable<const CSchemaClassInfo*, 32ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CEntitySystem::AddComponentProceduralKeys, CEntitySystem::BuildComponentUnserializer
bool __fastcall CSchemaFieldIterator::IsMetaPresent(const CSchemaFieldIterator *const this, const char *pMetaTagName)
{
  __int64 m_nCurrentClassIndex; // rdx
  CSchemaInheritanceIterator::ClassToTraverse_t *m_pMemory; // rax
  __int64 m_nDerivedClassIndex; // r12
  int m_nAllocationCount; // edx
  __int64 v7; // r14
  int v8; // edx
  const CSchemaClassInfo **v9; // rax
  __int64 v10; // r12
  const CSchemaClassInfo *m_Class; // r13
  int m_Size; // eax
  __int64 v13; // r15
  const CSchemaClassInfo *v14; // r12
  const char *FieldName; // rax
  const CSchemaFieldMetadataOverride *FieldMetadataOverride; // rax
  const CSchemaFieldMetadataOverride *v17; // r13
  unsigned int v18; // eax
  const char **m_pImplElements; // r14
  __int64 v20; // r12
  char m_bRemoveAll; // r14
  unsigned int v23; // eax
  const char **v24; // r12
  __int64 v25; // r13
  FieldIntrospectionHandle_t m_CurrentField; // r14
  unsigned int v27; // eax
  const char **v28; // r12
  __int64 v29; // r13
  unsigned int v30; // eax
  const char **v31; // r12
  __int64 v32; // r13
  int iClass; // [rsp+1Ch] [rbp-154h]
  CUtlVectorFixedGrowable<const CSchemaClassInfo*,32ul> classHandles; // [rsp+20h] [rbp-150h] BYREF
  unsigned __int64 v36; // [rsp+138h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  m_nCurrentClassIndex = this->m_InheritanceIterator.m_nCurrentClassIndex;
  classHandles.m_Size = 0;
  classHandles.m_Memory.m_nAllocationCount = 32;
  classHandles.m_Memory.m_pMemory = &classHandles.m_Memory.m_FixedMemory;
  classHandles.m_Memory.m_nGrowSize = 0x80000000;
  if ( m_nCurrentClassIndex != -1 )
  {
    m_pMemory = this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory;
    m_nDerivedClassIndex = m_pMemory[m_nCurrentClassIndex].m_nDerivedClassIndex;
    if ( m_nDerivedClassIndex != -1 )
    {
      m_nAllocationCount = 32;
      v7 = 0;
      while ( 1 )
      {
        v10 = m_nDerivedClassIndex;
        m_Class = m_pMemory[v10].m_Class;
        m_Size = v7;
        if ( v7 == m_nAllocationCount )
        {
          CUtlMemory<CSchemaClassInfo const*,int>::Grow(&classHandles.m_Memory, 1);
          m_Size = classHandles.m_Size;
        }
        v8 = m_Size + 1;
        classHandles.m_Size = m_Size + 1;
        v9 = &classHandles.m_Memory.m_pMemory[v7];
        if ( v9 != 0 )
        {
          *v9 = m_Class;
          v7 = classHandles.m_Size;
        }
        else
        {
          v7 = v8;
        }
        m_pMemory = this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory;
        m_nDerivedClassIndex = m_pMemory[v10].m_nDerivedClassIndex;
        if ( m_nDerivedClassIndex == -1 )
          break;
        m_nAllocationCount = classHandles.m_Memory.m_nAllocationCount;
      }
      iClass = v7 - 1;
      if ( v7 - 1 >= 0 )
      {
        v13 = iClass;
        do
        {
          v14 = classHandles.m_Memory.m_pMemory[v13];
          FieldName = CSchemaFieldIterator::GetFieldName(this);
          FieldMetadataOverride = CSchemaClassInfo::FindFieldMetadataOverride(v14, FieldName);
          v17 = FieldMetadataOverride;
          if ( FieldMetadataOverride != 0 )
          {
            v18 = abs32(FieldMetadataOverride->m_ModifyAdds.m_Data.m_nImplLength);
            if ( v18 != 0 )
            {
              m_pImplElements = v17->m_ModifyAdds.m_Data.m_pImplElements;
              v20 = &m_pImplElements[4 * v18];
              while ( strcmp(pMetaTagName, *m_pImplElements) != 0 )
              {
                m_pImplElements += 4;
                if ( m_pImplElements == v20 )
                  goto LABEL_22;
              }
LABEL_18:
              m_bRemoveAll = 1;
              goto LABEL_19;
            }
LABEL_22:
            m_bRemoveAll = v17->m_bRemoveAll;
            if ( m_bRemoveAll != 0 )
              goto LABEL_33;
            v23 = abs32(v17->m_ModifyRemoves.m_Data.m_nImplLength);
            if ( v23 != 0 )
            {
              v24 = v17->m_ModifyRemoves.m_Data.m_pImplElements;
              v25 = &v24[2 * v23];
              while ( strcmp(pMetaTagName, *v24) != 0 )
              {
                v24 += 2;
                if ( v24 == v25 )
                  goto LABEL_27;
              }
              goto LABEL_19;
            }
          }
LABEL_27:
          --iClass;
          --v13;
        }
        while ( iClass != -1 );
      }
    }
  }
  m_CurrentField = this->m_CurrentField;
  v27 = abs32(m_CurrentField->m_Metadata.m_StaticEntries.m_Data.m_nImplLength);
  if ( v27 != 0 )
  {
    v28 = m_CurrentField->m_Metadata.m_StaticEntries.m_Data.m_pImplElements;
    v29 = &v28[4 * v27];
    while ( strcmp(*v28, pMetaTagName) != 0 )
    {
      v28 += 4;
      if ( v28 == v29 )
        goto LABEL_34;
    }
    goto LABEL_18;
  }
LABEL_34:
  v30 = abs32(m_CurrentField->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength);
  if ( v30 != 0 )
  {
    v31 = m_CurrentField->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
    v32 = &v31[4 * v30];
    while ( strcmp(*v31, pMetaTagName) != 0 )
    {
      v31 += 4;
      if ( v31 == v32 )
        goto LABEL_33;
    }
    goto LABEL_18;
  }
LABEL_33:
  m_bRemoveAll = 0;
LABEL_19:
  CUtlMemory<CSchemaClassInfo const*,int>::ConvertToExternalMemory(
    &classHandles.m_Memory,
    &classHandles.m_Memory.m_FixedMemory,
    32,
    0,
    1,
    0x3FFFFFFFu);
  if ( (classHandles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CSchemaClassInfo const*,int>::Purge(&classHandles.m_Memory);
  return m_bRemoveAll;
}


