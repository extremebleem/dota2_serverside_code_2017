
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_schemaclassinfo.cpp  (line 0, @0x0000000001a67890, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_schemaclassinfo_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CSchemaClassInfo::FindField  (line 12, @0x000000000308fd20, libserver.so)
// calls: CSchemaClassInfo::FindField_R
// callers: InitDataDescSchema
const CSchemaClassField *__fastcall CSchemaClassInfo::FindField(
        const CSchemaClassInfo *const this,
        const char *pName,
        SchemaBaseClassTraversal_t nBaseClassTraversal,
        int32 *pOutBaseClassOffset)
{
  return CSchemaClassInfo::FindField_R(this, pName, nBaseClassTraversal, 0, 0, pOutBaseClassOffset);
}


// CSchemaClassInfo::FindField  (line 17, @0x000000000308fd40, libserver.so)
// calls: CSchemaClassInfo::FindField_R
const CSchemaClassField *__fastcall CSchemaClassInfo::FindField(
        const CSchemaClassInfo *const this,
        const char *pName,
        SchemaBaseClassTraversal_t nBaseClassTraversal,
        ClassIntrospectionHandle_t *pOutDefiningClass,
        int32 *pOutBaseClassOffset)
{
  return CSchemaClassInfo::FindField_R(this, pName, nBaseClassTraversal, 0, pOutDefiningClass, pOutBaseClassOffset);
}


// CSchemaClassInfo::FindField_R  (line 25, @0x000000000308fbc0, libserver.so)  // inlines: Count, Element, GetBaseClassInfo, GetFieldCount, NumBasesToTraverse, operator[]
// calls: V_stricmp_fast
// callers: CSchemaClassInfo::FindField
const CSchemaClassField *__fastcall CSchemaClassInfo::FindField_R(
        const CSchemaClassInfo *const this,
        const char *pName,
        SchemaBaseClassTraversal_t nBaseClassTraversal,
        uint32 nCurOffset,
        ClassIntrospectionHandle_t *pOutDefiningClass,
        int32 *pOutBaseClassOffset)
{
  __int64 v8; // r13
  const CSchemaClassField *result; // rax
  int v11; // ebx
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // r13

  v8 = 0;
  if ( this->m_Fields.m_Data.m_nImplLength != 0 )
  {
    while ( V_stricmp_fast(*(this->m_Fields.m_Data.m_pImplElements + 8 * v8), pName) != 0 )
    {
      if ( abs32(this->m_Fields.m_Data.m_nImplLength) <= ++v8 )
        goto LABEL_11;
    }
    if ( pOutBaseClassOffset != 0 )
      *pOutBaseClassOffset = nCurOffset;
    if ( pOutDefiningClass != 0 )
      *pOutDefiningClass = this;
    return (this->m_Fields.m_Data.m_pImplElements + 64 * v8);
  }
  else
  {
LABEL_11:
    if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_NONE )
      goto LABEL_12;
    v11 = abs32(this->m_BaseClasses.m_Data.m_nImplLength);
    if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY && v11 > 0 )
      v11 = 1;
    if ( v11 > 0 )
    {
      v12 = (v11 - 1) + 1LL;
      v13 = 0;
      v14 = 16 * v12;
      while ( 1 )
      {
        result = CSchemaClassInfo::FindField_R(
                   *(this->m_BaseClasses.m_Data.m_pImplElements + v13 + 8),
                   pName,
                   nBaseClassTraversal,
                   nCurOffset + *(this->m_BaseClasses.m_Data.m_pImplElements + v13),
                   pOutDefiningClass,
                   pOutBaseClassOffset);
        if ( result != 0 )
          break;
        v13 += 16;
        if ( v13 == v14 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      if ( pOutBaseClassOffset != 0 )
        *pOutBaseClassOffset = -1;
      if ( pOutDefiningClass != 0 )
        *pOutDefiningClass = 0;
      return 0;
    }
  }
  return result;
}


// CSchemaClassInfo::FindStaticField  (line 70, @0x000000000308fd60, libserver.so)  // inlines: Count, GetStaticFieldCount, NumBasesToTraverse
// calls: V_stricmp_fast
const CSchemaStaticField *__fastcall CSchemaClassInfo::FindStaticField(
        const CSchemaClassInfo *const this,
        const char *pName,
        SchemaBaseClassTraversal_t nBaseClassTraversal)
{
  __int64 v6; // rbx
  const CSchemaStaticField *result; // rax
  int v8; // r15d
  __int64 v9; // rbx
  __int64 v10; // r15

  v6 = 0;
  if ( this->m_StaticFields.m_Data.m_nImplLength != 0 )
  {
    while ( V_stricmp_fast(*(this->m_StaticFields.m_Data.m_pImplElements + 8 * v6), pName) != 0 )
    {
      if ( abs32(this->m_StaticFields.m_Data.m_nImplLength) <= ++v6 )
        goto LABEL_7;
    }
    return (this->m_StaticFields.m_Data.m_pImplElements + 64 * v6);
  }
  else
  {
LABEL_7:
    if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_NONE )
      return 0;
    v8 = abs32(this->m_BaseClasses.m_Data.m_nImplLength);
    if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY && v8 > 0 )
      v8 = 1;
    if ( v8 > 0 )
    {
      v9 = 0;
      v10 = 16 * ((v8 - 1) + 1LL);
      while ( 1 )
      {
        result = CSchemaClassInfo::FindStaticField(
                   *(this->m_BaseClasses.m_Data.m_pImplElements + v9 + 8),
                   pName,
                   nBaseClassTraversal);
        if ( result != 0 )
          break;
        v9 += 16;
        if ( v9 == v10 )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// CSchemaClassInfo::MultipleInheritsFromOrIs  (line 94, @0x000000000308fe70, libserver.so)  // inlines: Count, GetBaseClassCount, SchemaMultipleInheritanceDepth
// calls: SchemaMultipleInheritanceDepth
bool __fastcall CSchemaClassInfo::MultipleInheritsFromOrIs(
        const CSchemaClassInfo *const this,
        const CSchemaClassInfo *pBaseClass)
{
  unsigned int v3; // eax
  char *m_pImplElements; // rdx
  ClassIntrospectionHandle_t *v5; // rbx
  __int64 v6; // r13

  if ( this == pBaseClass )
    return 1;
  v3 = abs32(this->m_BaseClasses.m_Data.m_nImplLength);
  if ( v3 != 0 )
  {
    m_pImplElements = this->m_BaseClasses.m_Data.m_pImplElements;
    v5 = (m_pImplElements + 8);
    v6 = &m_pImplElements[16 * v3 + 8];
    while ( SchemaMultipleInheritanceDepth(*v5, pBaseClass) < 0 )
    {
      v5 += 2;
      if ( v5 == v6 )
        return 0;
    }
    return 1;
  }
  return 0;
}


// CSchemaClassInfo::SingleInheritsFromOrIs  (line 102, @0x000000000308fef0, libserver.so)  // inlines: GetSingleInheritanceBaseClass, SchemaSingleInheritanceDepth
bool __fastcall CSchemaClassInfo::SingleInheritsFromOrIs(
        const CSchemaClassInfo *const this,
        const CSchemaClassInfo *pBaseClass)
{
  if ( this == 0 )
    return 0;
  if ( this != pBaseClass )
  {
    while ( this->m_BaseClasses.m_Data.m_nImplLength != 0 )
    {
      this = *(this->m_BaseClasses.m_Data.m_pImplElements + 1);
      if ( this == 0 )
        break;
      if ( pBaseClass == this )
        return 1;
    }
    return 0;
  }
  return 1;
}


// CSchemaClassInfo::CanReinterpretAs  (line 110, @0x000000000308ff30, libserver.so)  // inlines: SchemaCanReinterpretAs
bool __fastcall CSchemaClassInfo::CanReinterpretAs(
        const CSchemaClassInfo *const this,
        const CSchemaClassInfo *pBaseClass)
{
  const CSchemaClassInfo *v2; // rax
  void *m_pImplElements; // rax

  if ( this != 0 )
  {
    if ( this == pBaseClass )
    {
LABEL_12:
      LOBYTE(v2) = 1;
    }
    else
    {
      LOBYTE(v2) = 0;
      if ( this->m_BaseClasses.m_Data.m_nImplLength != 0 && *this->m_BaseClasses.m_Data.m_pImplElements == 0 )
      {
        m_pImplElements = this->m_BaseClasses.m_Data.m_pImplElements;
        while ( 1 )
        {
          v2 = *(m_pImplElements + 1);
          if ( v2 == 0 )
            break;
          if ( pBaseClass == v2 )
            goto LABEL_12;
          if ( v2->m_BaseClasses.m_Data.m_nImplLength != 0 )
          {
            m_pImplElements = v2->m_BaseClasses.m_Data.m_pImplElements;
            if ( *m_pImplElements == 0 )
              continue;
          }
          goto LABEL_11;
        }
      }
    }
  }
  else
  {
LABEL_11:
    LOBYTE(v2) = 0;
  }
  return v2;
}


// CSchemaClassInfo::DeduceDerivedClass  (line 118, @0x000000000308ffa0, libserver.so)
const CSchemaClassInfo *__fastcall CSchemaClassInfo::DeduceDerivedClass(
        const CSchemaClassInfo *const this,
        const void *pInstance)
{
  const CSchemaClassBindingBase *m_pBinding; // rdx
  const CSchemaClassInfo *result; // rax
  __int64 v4; // rax

  m_pBinding = this->m_pBinding;
  result = this;
  if ( m_pBinding != 0 )
  {
    v4 = (*(m_pBinding->_vptr_ISchemaBinding + 13))(m_pBinding, pInstance);
    if ( v4 != 0 )
      return *(v4 + 40);
    else
      return 0;
  }
  return result;
}


// CSchemaClassInfo::FindFieldMetadataOverride  (line 136, @0x000000000308ffe0, libserver.so)  // inlines: Count, Element, _V_strcmp, operator[]
// calls: strcmp
// callers: CSchemaFieldIterator::IsMetaPresent, CSchemaFieldIterator::GetMetaPtr, CSchemaFieldIterator::GetAllMetaPtrsInternal
const CSchemaFieldMetadataOverride *__fastcall CSchemaClassInfo::FindFieldMetadataOverride(
        const CSchemaClassInfo *const this,
        const char *pFieldName)
{
  unsigned int v2; // eax
  const CSchemaFieldMetadataOverride *m_pImplElements; // rbx
  __int64 v5; // r13

  v2 = abs32(this->m_FieldMetadataOverrides.m_Data.m_nImplLength);
  if ( v2 == 0 )
    return 0;
  m_pImplElements = this->m_FieldMetadataOverrides.m_Data.m_pImplElements;
  v5 = &m_pImplElements[v2];
  do
  {
    if ( strcmp(m_pImplElements->m_FieldName.m_pImplChars, pFieldName) == 0 )
      return m_pImplElements;
    ++m_pImplElements;
  }
  while ( m_pImplElements != v5 );
  return 0;
}


// CSchemaClassInfo::FindOrCreateMetadataOverrideForField  (line 153, @0x0000000003090e50, libserver.so)  // inlines: AddToTailDynamic, ConvertToExternalMemory, Count, DeallocateDynamic, Element, MemAlloc_AllocAlignedFunc, MemAlloc_FreeAlignedFunc, MemAlloc_ReallocAlignedFunc, Purge, Purge_FixedGrowable, RemoveAll, SetCountDynamic, SetDynamic, SetFieldNameDynamic, V_memcpy, V_memset, V_strlen, V_strncpy<long unsigned int>, _V_strcmp, memcpy, memset, operator[], ~CSchemaFieldIterator, ~CSchemaInheritanceIterator, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: strcmp, CSchemaFieldIterator::CSchemaFieldIterator, CSchemaFieldIterator::FindField, memcpy, strlen, _V_strncpy, CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge, Plat_IsInDebugSessionRaw, __stack_chk_fail, CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8ul, int> >::~CUtlVectorBase, _Unwind_Resume
CSchemaFieldMetadataOverride *__fastcall CSchemaClassInfo::FindOrCreateMetadataOverrideForField(
        CSchemaClassInfo *const this,
        const char *pFieldName)
{
  unsigned int v4; // eax
  CSchemaFieldMetadataOverride *v5; // r14
  __int64 v6; // r13
  __int64 v8; // rdi
  uint32 v9; // eax
  signed int v10; // r15d
  unsigned __int64 v11; // r14
  unsigned __int64 m_pImplElements; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // r12d
  __int64 v16; // rax
  void *v17; // r15
  __int64 v18; // rax
  size_t v19; // rdx
  _QWORD *v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-128h]
  const void *src; // [rsp+10h] [rbp-120h]
  void *srca; // [rsp+10h] [rbp-120h]
  size_t n; // [rsp+18h] [rbp-118h]
  signed int v26; // [rsp+24h] [rbp-10Ch]
  char *dest; // [rsp+28h] [rbp-108h]
  CSchemaFieldIterator it; // [rsp+30h] [rbp-100h] BYREF
  unsigned __int64 v29; // [rsp+F8h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  v4 = abs32(this->m_FieldMetadataOverrides.m_Data.m_nImplLength);
  if ( v4 == 0 )
  {
LABEL_6:
    CSchemaFieldIterator::CSchemaFieldIterator(&it, this, SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL);
    if ( !CSchemaFieldIterator::FindField(&it, pFieldName) )
    {
      v5 = 0;
LABEL_8:
      it.m_InheritanceIterator.m_ClassesToTraverse.m_Size = 0;
      v9 = it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_nGrowSize & 0xC0000000;
      if ( it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_nAllocationCount < 0
        || it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory == &it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_FixedMemory )
      {
        if ( v9 == 0 )
          CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t,int>::Purge(&it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory);
      }
      else if ( it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory != 0 && v9 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      }
      return v5;
    }
    v10 = abs32(this->m_FieldMetadataOverrides.m_Data.m_nImplLength);
    v26 = v10 + 1;
    v11 = 56LL * v10;
    m_pImplElements = this->m_FieldMetadataOverrides.m_Data.m_pImplElements;
    n = v11 + 56;
    if ( this->m_FieldMetadataOverrides.m_Data.m_nImplLength >= 0 )
    {
      src = this->m_FieldMetadataOverrides.m_Data.m_pImplElements;
      if ( v11 == -56 )
      {
        dest = 0;
      }
      else
      {
        v13 = (**g_pMemAlloc)(g_pMemAlloc, v11 + 71);
        *(((v13 + 15) & 0xFFFFFFFFFFFFFFF8LL) - 8) = v13;
        dest = ((v13 + 15) & 0xFFFFFFFFFFFFFFF8LL);
      }
      this->m_FieldMetadataOverrides.m_Data.m_pImplElements = dest;
      if ( v10 != 0 )
      {
        v14 = v10;
        if ( v26 <= v10 )
          v14 = v26;
        memcpy(dest, src, 56 * v14);
        dest = this->m_FieldMetadataOverrides.m_Data.m_pImplElements;
      }
      goto LABEL_20;
    }
    dest = this->m_FieldMetadataOverrides.m_Data.m_pImplElements;
    if ( m_pImplElements == 0 )
    {
      if ( v11 != -56 )
      {
        v21 = (**g_pMemAlloc)(g_pMemAlloc, v11 + 71);
        *(((v21 + 15) & 0xFFFFFFFFFFFFFFF8LL) - 8) = v21;
        dest = ((v21 + 15) & 0xFFFFFFFFFFFFFFF8LL);
      }
      goto LABEL_35;
    }
    if ( v11 == -56 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((m_pImplElements & 0xFFFFFFFFFFFFFFF8LL) - 8));
    }
    else
    {
      if ( (m_pImplElements & 7) == 0 )
      {
        v17 = *((m_pImplElements & 0xFFFFFFFFFFFFFFF8LL) - 8);
        srca = v17;
        v22 = v17 + (*(*g_pMemAlloc + 128LL))(g_pMemAlloc, v17) - m_pImplElements;
        if ( n > v22 )
        {
          v18 = (**g_pMemAlloc)(g_pMemAlloc, v11 + 71);
          v19 = v22;
          v20 = ((v18 + 15) & 0xFFFFFFFFFFFFFFF8LL);
          *(v20 - 1) = v18;
          if ( v22 > n )
            v19 = v11 + 56;
          memcpy(v20, dest, v19);
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, srca);
          dest = v20;
        }
        goto LABEL_35;
      }
      if ( Plat_IsInDebugSessionRaw(v8) != 0 )
        __debugbreak();
    }
    dest = 0;
LABEL_35:
    this->m_FieldMetadataOverrides.m_Data.m_pImplElements = dest;
LABEL_20:
    if ( v11 < n )
    {
      memset(&dest[v11], 0, 0x38u);
      dest = this->m_FieldMetadataOverrides.m_Data.m_pImplElements;
    }
    v5 = &dest[v11];
    this->m_FieldMetadataOverrides.m_Data.m_nImplLength = -v26;
    if ( v5->m_FieldName.m_nImplBufferSize < 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5->m_FieldName.m_pImplChars);
    v5->m_FieldName.m_pImplChars = 0;
    v5->m_FieldName.m_nImplBufferSize = 0;
    if ( pFieldName != 0 && *pFieldName != 0 )
    {
      v15 = strlen(pFieldName) + 1;
      v16 = (**g_pMemAlloc)(g_pMemAlloc, v15);
      v5->m_FieldName.m_pImplChars = v16;
      _V_strncpy(v16, pFieldName, v15);
      v5->m_FieldName.m_nImplBufferSize = -v15;
    }
    goto LABEL_8;
  }
  v5 = this->m_FieldMetadataOverrides.m_Data.m_pImplElements;
  v6 = &v5[v4];
  while ( strcmp(v5->m_FieldName.m_pImplChars, pFieldName) != 0 )
  {
    if ( ++v5 == v6 )
      goto LABEL_6;
  }
  return v5;
}


// CSchemaMetaModifyAdd::Init  (line 180, @0x0000000003090060, libserver.so)  // inlines: DeallocateDynamic, SetDynamic, V_strlen, V_strncpy<long unsigned int>
// calls: strlen, _V_strncpy
void __fastcall CSchemaMetaModifyAdd::Init(
        CSchemaMetaModifyAdd *const this,
        const char *pMetaTagName,
        const CSchemaType *pDataType,
        void *pValue)
{
  unsigned int v8; // r15d
  const char *v9; // rax

  if ( this->m_TagName.m_nImplBufferSize < 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_TagName.m_pImplChars);
  this->m_TagName.m_pImplChars = 0;
  this->m_TagName.m_nImplBufferSize = 0;
  if ( pMetaTagName != 0 && *pMetaTagName != 0 )
  {
    v8 = strlen(pMetaTagName) + 1;
    v9 = (**g_pMemAlloc)(g_pMemAlloc, v8);
    this->m_TagName.m_pImplChars = v9;
    _V_strncpy(v9, pMetaTagName, v8);
    this->m_TagName.m_nImplBufferSize = -v8;
  }
  this->m_pTagDataType = pDataType;
  this->m_pTagValue = pValue;
}


// CSchemaFieldMetadataOverride::AddMetaTag  (line 187, @0x0000000003090110, libserver.so)  // inlines: AddToTailDynamic, Count, DeallocateDynamic, Element, Init, MemAlloc_AllocAlignedFunc, MemAlloc_FreeAlignedFunc, MemAlloc_ReallocAlignedFunc, SetCountDynamic, SetDynamic, V_memcpy, V_memset, V_strlen, V_strncpy<long unsigned int>, memcpy, memset, operator[]
// calls: memcpy, strlen, _V_strncpy, Plat_IsInDebugSessionRaw
void __fastcall CSchemaFieldMetadataOverride::AddMetaTag(
        CSchemaFieldMetadataOverride *const this,
        const char *pMetaTagName,
        const CSchemaType *pDataType,
        void *pValue)
{
  int32 m_nImplLength; // eax
  signed int v8; // r15d
  int v9; // r10d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r9
  void *m_pImplElements; // r11
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned int v16; // r12d
  __int64 v17; // rax
  _QWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  size_t v23; // rdx
  const void *v24; // rcx
  _QWORD *v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+8h] [rbp-58h]
  void *src; // [rsp+10h] [rbp-50h]
  size_t na; // [rsp+18h] [rbp-48h]
  int n; // [rsp+18h] [rbp-48h]
  int v31; // [rsp+20h] [rbp-40h]
  void *v32; // [rsp+20h] [rbp-40h]
  void *v33; // [rsp+20h] [rbp-40h]

  m_nImplLength = this->m_ModifyAdds.m_Data.m_nImplLength;
  v8 = abs32(m_nImplLength);
  v9 = v8 + 1;
  v10 = 32LL * v8;
  v11 = v10 + 32;
  if ( m_nImplLength >= 0 )
  {
    m_pImplElements = this->m_ModifyAdds.m_Data.m_pImplElements;
    if ( v10 == -32 )
    {
      v14 = 0;
    }
    else
    {
      src = this->m_ModifyAdds.m_Data.m_pImplElements;
      v13 = (**g_pMemAlloc)(g_pMemAlloc, v10 + 47);
      v9 = v8 + 1;
      v11 = v10 + 32;
      m_pImplElements = src;
      v14 = (v13 + 15) & 0xFFFFFFFFFFFFFFF8LL;
      *(v14 - 8) = v13;
    }
    this->m_ModifyAdds.m_Data.m_pImplElements = v14;
    if ( v8 != 0 )
    {
      if ( v9 <= v8 )
        v8 = v9;
      na = v11;
      v31 = v9;
      memcpy(v14, m_pImplElements, 32LL * v8);
      v14 = this->m_ModifyAdds.m_Data.m_pImplElements;
      v9 = v31;
      v11 = na;
    }
    if ( v10 >= v11 )
      goto LABEL_9;
LABEL_15:
    v18 = (v10 + v14);
    *v18 = 0;
    v18[1] = 0;
    v18[2] = 0;
    v18[3] = 0;
    v14 = this->m_ModifyAdds.m_Data.m_pImplElements;
    goto LABEL_9;
  }
  v14 = this->m_ModifyAdds.m_Data.m_pImplElements;
  if ( v14 != 0 )
  {
    if ( v10 == -32 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((v14 & 0xFFFFFFFFFFFFFFF8LL) - 8));
      v9 = v8 + 1;
      v14 = 0;
      v11 = 0;
    }
    else if ( (v14 & 7) != 0 )
    {
      v19 = Plat_IsInDebugSessionRaw(this);
      v14 = 0;
      v9 = v8 + 1;
      v11 = v10 + 32;
      if ( v19 != 0 )
        __debugbreak();
    }
    else
    {
      n = v8 + 1;
      v20 = *((v14 & 0xFFFFFFFFFFFFFFF8LL) - 8);
      v32 = this->m_ModifyAdds.m_Data.m_pImplElements;
      v21 = (*(*g_pMemAlloc + 128LL))(g_pMemAlloc, v20);
      v14 = v32;
      v11 = v10 + 32;
      v9 = n;
      if ( v10 + 32 > v21 + v20 - v32 )
      {
        v27 = v21 + v20 - v32;
        v22 = (**g_pMemAlloc)(g_pMemAlloc, v10 + 47);
        v23 = v27;
        v24 = v32;
        v25 = ((v22 + 15) & 0xFFFFFFFFFFFFFFF8LL);
        *(v25 - 1) = v22;
        v33 = v25;
        if ( v27 > v10 + 32 )
          v23 = v10 + 32;
        memcpy(v25, v24, v23);
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v20);
        v9 = n;
        v11 = v10 + 32;
        v14 = v33;
      }
    }
  }
  else if ( v10 != -32 )
  {
    v26 = (**g_pMemAlloc)(g_pMemAlloc, v10 + 47);
    v9 = v8 + 1;
    v11 = v10 + 32;
    v14 = (v26 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(v14 - 8) = v26;
  }
  this->m_ModifyAdds.m_Data.m_pImplElements = v14;
  if ( v10 < v11 )
    goto LABEL_15;
LABEL_9:
  v15 = v14 + v10;
  this->m_ModifyAdds.m_Data.m_nImplLength = -v9;
  if ( *(v15 + 8) < 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *v15);
  *v15 = 0;
  *(v15 + 8) = 0;
  if ( pMetaTagName != 0 && *pMetaTagName != 0 )
  {
    v16 = strlen(pMetaTagName) + 1;
    v17 = (**g_pMemAlloc)(g_pMemAlloc, v16);
    *v15 = v17;
    _V_strncpy(v17, pMetaTagName, v16);
    *(v15 + 8) = -v16;
  }
  *(v15 + 16) = pDataType;
  *(v15 + 24) = pValue;
}


// CSchemaFieldMetadataOverride::RemoveMetaTag  (line 194, @0x0000000003090430, libserver.so)  // inlines: AddToTailDynamic, Count, DeallocateDynamic, Element, MemAlloc_AllocAlignedFunc, MemAlloc_FreeAlignedFunc, MemAlloc_ReallocAlignedFunc, SetCountDynamic, SetDynamic, V_memcpy, V_memset, V_strlen, V_strncpy<long unsigned int>, memcpy, memset, operator[]
// calls: memcpy, strlen, _V_strncpy, Plat_IsInDebugSessionRaw
void __fastcall CSchemaFieldMetadataOverride::RemoveMetaTag(
        CSchemaFieldMetadataOverride *const this,
        const char *pMetaTagName)
{
  void *m_pImplElements; // r9
  int32 m_nImplLength; // eax
  unsigned __int64 v6; // rdx
  signed int v7; // r12d
  int v8; // r8d
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned int v15; // r12d
  __int64 v16; // rax
  _QWORD *v17; // r14
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rax
  size_t v23; // rdx
  _QWORD *v24; // rdi
  __int64 v25; // rax
  void *srca; // [rsp+8h] [rbp-48h]
  int src; // [rsp+8h] [rbp-48h]
  unsigned __int64 v28; // [rsp+10h] [rbp-40h]
  unsigned __int64 v29; // [rsp+10h] [rbp-40h]
  int nb; // [rsp+18h] [rbp-38h]
  int n; // [rsp+18h] [rbp-38h]
  size_t na; // [rsp+18h] [rbp-38h]

  m_nImplLength = this->m_ModifyRemoves.m_Data.m_nImplLength;
  v6 = (m_nImplLength >> 31);
  v7 = abs32(m_nImplLength);
  v8 = v7 + 1;
  v9 = 16LL * v7;
  v10 = v9 + 16;
  if ( m_nImplLength >= 0 )
  {
    m_pImplElements = this->m_ModifyRemoves.m_Data.m_pImplElements;
    if ( v9 == -16 )
    {
      v12 = 0;
    }
    else
    {
      srca = this->m_ModifyRemoves.m_Data.m_pImplElements;
      v11 = (**g_pMemAlloc)(g_pMemAlloc, v9 + 31);
      v8 = v7 + 1;
      v10 = v9 + 16;
      m_pImplElements = srca;
      v12 = (v11 + 15) & 0xFFFFFFFFFFFFFFF8LL;
      *(v12 - 8) = v11;
    }
    this->m_ModifyRemoves.m_Data.m_pImplElements = v12;
    if ( v7 != 0 )
    {
      if ( v8 <= v7 )
        v7 = v8;
      v28 = v10;
      nb = v8;
      memcpy(v12, m_pImplElements, 16LL * v7);
      v12 = this->m_ModifyRemoves.m_Data.m_pImplElements;
      v8 = nb;
      v10 = v28;
    }
    if ( v9 >= v10 )
      goto LABEL_9;
LABEL_15:
    v17 = (v9 + v12);
    *v17 = 0;
    v17[1] = 0;
    v12 = this->m_ModifyRemoves.m_Data.m_pImplElements;
    goto LABEL_9;
  }
  v12 = this->m_ModifyRemoves.m_Data.m_pImplElements;
  if ( v12 != 0 )
  {
    n = v7 + 1;
    if ( v9 == -16 )
    {
      v18 = *((v12 & 0xFFFFFFFFFFFFFFF8LL) - 8);
      v12 = 0;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v18);
      v8 = v7 + 1;
      v10 = 0;
    }
    else if ( (v12 & 7) != 0 )
    {
      v19 = Plat_IsInDebugSessionRaw(this);
      v12 = 0;
      v8 = v7 + 1;
      v10 = v9 + 16;
      if ( v19 != 0 )
        __debugbreak();
    }
    else
    {
      v20 = *((v12 & 0xFFFFFFFFFFFFFFF8LL) - 8);
      v21 = (*(*g_pMemAlloc + 128LL))(g_pMemAlloc, v20, v6, v10);
      v10 = v9 + 16;
      v8 = n;
      v6 = v21 + v20 - v12;
      if ( v9 + 16 > v6 )
      {
        src = n;
        v29 = v21 + v20 - v12;
        v22 = (**g_pMemAlloc)(g_pMemAlloc, v9 + 31);
        v23 = v29;
        v24 = ((v22 + 15) & 0xFFFFFFFFFFFFFFF8LL);
        *(v24 - 1) = v22;
        na = v24;
        if ( v29 > v9 + 16 )
          v23 = v9 + 16;
        memcpy(v24, v12, v23);
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v20);
        v8 = src;
        v10 = v9 + 16;
        v12 = na;
      }
    }
  }
  else if ( v9 != -16 )
  {
    v25 = (**g_pMemAlloc)(g_pMemAlloc, v9 + 31);
    v8 = v7 + 1;
    v10 = v9 + 16;
    v12 = (v25 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(v12 - 8) = v25;
  }
  this->m_ModifyRemoves.m_Data.m_pImplElements = v12;
  if ( v9 < v10 )
    goto LABEL_15;
LABEL_9:
  v13 = -v8;
  v14 = v12 + v9;
  this->m_ModifyRemoves.m_Data.m_nImplLength = v13;
  if ( *(v14 + 8) < 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *v14, v6, v10, v13, m_pImplElements);
  *v14 = 0;
  *(v14 + 8) = 0;
  if ( pMetaTagName != 0 && *pMetaTagName != 0 )
  {
    v15 = strlen(pMetaTagName) + 1;
    v16 = (**g_pMemAlloc)(g_pMemAlloc, v15);
    *v14 = v16;
    _V_strncpy(v16, pMetaTagName, v15);
    *(v14 + 8) = -v15;
  }
}


// CSchemaFieldMetadataOverride::RemoveAllMetaTags  (line 200, @0x0000000003090710, libserver.so)
void __fastcall CSchemaFieldMetadataOverride::RemoveAllMetaTags(CSchemaFieldMetadataOverride *const this)
{
  this->m_bRemoveAll = 1;
}


// CSchemaFieldMetadataOverride::SetFieldNameDynamic  (line 207, @0x0000000003090720, libserver.so)  // inlines: DeallocateDynamic, SetDynamic, V_strlen, V_strncpy<long unsigned int>
// calls: strlen, _V_strncpy
void __fastcall CSchemaFieldMetadataOverride::SetFieldNameDynamic(
        CSchemaFieldMetadataOverride *const this,
        const char *pFieldName)
{
  unsigned int v4; // r13d
  const char *v5; // rax

  if ( this->m_FieldName.m_nImplBufferSize < 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_FieldName.m_pImplChars);
  this->m_FieldName.m_pImplChars = 0;
  this->m_FieldName.m_nImplBufferSize = 0;
  if ( pFieldName != 0 && *pFieldName != 0 )
  {
    v4 = strlen(pFieldName) + 1;
    v5 = (**g_pMemAlloc)(g_pMemAlloc, v4);
    this->m_FieldName.m_pImplChars = v5;
    _V_strncpy(v5, pFieldName, v4);
    this->m_FieldName.m_nImplBufferSize = -v4;
  }
}


// CSchemaClassInfo::FixupBaseClassPointer  (line 215, @0x00000000030907c0, libserver.so)  // inlines: Element, operator[]
void __fastcall CSchemaClassInfo::FixupBaseClassPointer(
        CSchemaClassInfo *const this,
        int nIndex,
        const CSchemaClassInfo *pNewBaseClass)
{
  *(this->m_BaseClasses.m_Data.m_pImplElements + 2 * nIndex + 1) = pNewBaseClass;
}


// SpewClassDescription  (line 224, @0x00000000030912b0, libserver.so)  // inlines: ConvertToExternalMemory, Count, Element, GetBaseClassCount, GetBaseClassInfo, GetBaseClassOffset, GetName, Purge, Purge_FixedGrowable, RemoveAll, operator[], ~CSchemaFieldIterator, ~CSchemaInheritanceIterator, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlString, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CSchemaFieldIterator::CSchemaFieldIterator, CSchemaFieldIterator::GetFieldMemoryOffset, CSchemaFieldIterator::GetType, CSchemaFieldIterator::GetFullyQualifiedFieldName, CUtlString::Get, CUtlString::FreeMemoryBlock, CSchemaFieldIterator::Advance, CSchemaFieldIterator::IsValid, CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge, CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8ul, int> >::~CUtlVectorBase (14 total)
// strings: "true", "false", "%s| Virtual: %s; Abstract: %s; TrivialConstr: %s; TrivialDestr: %s\n", "%s| Base Class%s: %d\n", "%s|  % 2d: %s [Offset: %d]\n", "%s|  % 2d: [% 3d - % 3d] %-12s %s\n" (13 total)
void __fastcall SpewClassDescription(
        ClassIntrospectionHandle_t pClass,
        LoggingChannelID_t nChannel,
        const char *pPrefix)
{
  uint16 m_nClassFlags; // dx
  const char *v6; // r8
  const char *v7; // rsi
  const char *v8; // rcx
  const char *v9; // r9
  int v10; // r14d
  const char *v11; // r8
  __int64 v12; // rbx
  int v13; // r8d
  const char ***v14; // rax
  const CSchemaClassInfo *v15; // rsi
  int v16; // r12d
  uint32 FieldMemoryOffset; // r14d
  CSchemaType *Type; // rax
  int v19; // r15d
  CSchemaType *v20; // rax
  const char *v21; // rax
  uint32 v22; // eax
  const char *m_pNote; // r14
  const char *v24; // rbx
  const char *v25; // rax
  const char *v27; // [rsp+20h] [rbp-120h]
  CUtlString v28[2]; // [rsp+30h] [rbp-110h] BYREF
  CSchemaFieldIterator it; // [rsp+40h] [rbp-100h] BYREF
  unsigned __int64 v30; // [rsp+108h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  if ( LoggingSystem_IsChannelEnabled(nChannel, 1) != 0 )
    LoggingSystem_Log(nChannel, 1, "%s+-- Schema Class: %s\n", pPrefix, pClass->m_Name.m_pImplChars);
  if ( LoggingSystem_IsChannelEnabled(nChannel, 1) != 0 )
    LoggingSystem_Log(nChannel, 1, "%s| SizeOf: %d\n", pPrefix, pClass->m_nSizeOf);
  if ( LoggingSystem_IsChannelEnabled(nChannel, 1) != 0 )
    LoggingSystem_Log(nChannel, 1, "%s| AlignOf: %d\n", pPrefix, pClass->m_nAlignOf);
  if ( pClass->m_pBinding != 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(nChannel, 1) != 0 )
    {
      m_pNote = pClass->m_pNote;
      v24 = (*(pClass->m_pBinding->_vptr_ISchemaBinding + 3))(pClass->m_pBinding);
      v25 = (*(pClass->m_pBinding->_vptr_ISchemaBinding + 4))(pClass->m_pBinding);
      LoggingSystem_Log(nChannel, 1, "%s| Project: '%s' Binary: '%s' - \"%s\"\n", pPrefix, v25, v24, m_pNote);
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(nChannel, 1) != 0 )
  {
    LoggingSystem_Log(nChannel, 1, "%s| (No Binding) - \"%s\"\n", pPrefix, pClass->m_pNote);
  }
  if ( LoggingSystem_IsChannelEnabled(nChannel, 1) != 0 )
  {
    m_nClassFlags = pClass->m_nClassFlags;
    v6 = "false";
    v7 = "true";
    v8 = "true";
    v9 = "true";
    if ( (m_nClassFlags & 8) == 0 )
      v7 = "false";
    if ( (m_nClassFlags & 4) == 0 )
      v8 = "false";
    if ( (m_nClassFlags & 2) == 0 )
      v9 = "false";
    if ( (m_nClassFlags & 1) != 0 )
      v6 = "true";
    LoggingSystem_Log(
      nChannel,
      1,
      "%s| Virtual: %s; Abstract: %s; TrivialConstr: %s; TrivialDestr: %s\n",
      pPrefix,
      v6,
      v9,
      v8,
      v7);
  }
  v10 = abs32(pClass->m_BaseClasses.m_Data.m_nImplLength);
  if ( LoggingSystem_IsChannelEnabled(nChannel, 1) != 0 )
  {
    v11 = "";
    if ( v10 != 1 )
      v11 = "es";
    LoggingSystem_Log(nChannel, 1, "%s| Base Class%s: %d\n", pPrefix, v11, v10);
  }
  v12 = 0;
  if ( v10 != 0 )
  {
    do
    {
      while ( LoggingSystem_IsChannelEnabled(nChannel, 1) == 0 )
      {
        if ( v10 <= ++v12 )
          goto LABEL_29;
      }
      v13 = v12;
      v14 = (pClass->m_BaseClasses.m_Data.m_pImplElements + 16 * v12++);
      LoggingSystem_Log(nChannel, 1, "%s|  % 2d: %s [Offset: %d]\n", pPrefix, v13, *v14[1], *v14);
    }
    while ( v10 > v12 );
  }
LABEL_29:
  if ( LoggingSystem_IsChannelEnabled(nChannel, 1) != 0 )
    LoggingSystem_Log(nChannel, 1, "%s| Fields:\n", pPrefix);
  v15 = pClass;
  v16 = 0;
  CSchemaFieldIterator::CSchemaFieldIterator(
    &it,
    v15,
    SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL_IN_MEMORY_ORDER);
  while ( CSchemaFieldIterator::IsValid(&it) )
  {
    FieldMemoryOffset = CSchemaFieldIterator::GetFieldMemoryOffset(&it);
    Type = CSchemaFieldIterator::GetType(&it);
    v19 = (*(*Type + 64LL))(Type);
    if ( LoggingSystem_IsChannelEnabled(nChannel, 1) != 0 )
    {
      CSchemaFieldIterator::GetFullyQualifiedFieldName(v28, &it);
      v27 = CUtlString::Get(v28);
      v20 = CSchemaFieldIterator::GetType(&it);
      v21 = CUtlString::Get(v20 + 1);
      LoggingSystem_Log(
        nChannel,
        1,
        "%s|  % 2d: [% 3d - % 3d] %-12s %s\n",
        pPrefix,
        v16,
        FieldMemoryOffset,
        FieldMemoryOffset + v19,
        v21,
        v27);
      if ( v28[0].m_pString != 0 )
        CUtlString::FreeMemoryBlock(v28);
    }
    ++v16;
    CSchemaFieldIterator::Advance(&it);
  }
  it.m_InheritanceIterator.m_ClassesToTraverse.m_Size = 0;
  v22 = it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_nGrowSize & 0xC0000000;
  if ( it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_nAllocationCount < 0
    || it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory == &it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_FixedMemory )
  {
    if ( v22 == 0 )
      CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t,int>::Purge(&it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory);
  }
  else if ( it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory != 0 && v22 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  if ( LoggingSystem_IsChannelEnabled(nChannel, 1) != 0 )
    LoggingSystem_Log(nChannel, 1, "%s+--\n", pPrefix);
}


// CSchemaClassInfo::RemoveNoschemaData  (line 274, @0x00000000030907e0, libserver.so)  // inlines: Count, DeallocateDynamic, Element, MemAlloc_AllocAlignedFunc, MemAlloc_FreeAlignedFunc, MemAlloc_ReallocAlignedFunc, RemoveMatching<CSchemaClassInfo::RemoveNoschemaData()::__lambda6>, RemoveMatching<CSchemaClassInfo::RemoveNoschemaData()::__lambda7>, RemoveMatching<CSchemaClassInfo::RemoveNoschemaData()::__lambda8>, SetCountDynamic, V_memset, memcpy, memset, operator()
// calls: Plat_IsInDebugSessionRaw, memset, memcpy, MemAlloc_AllocAlignedFunc
void __fastcall CSchemaClassInfo::RemoveNoschemaData(CSchemaClassInfo *const this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  int32 v4; // r12d
  char *m_pImplElements; // rsi
  char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  int32 m_nImplLength; // r13d
  int v11; // r15d
  __int64 v12; // r13
  int32 v13; // r14d
  __int64 v14; // r12
  __int64 v15; // rdi
  unsigned int (__fastcall ***v16)(_QWORD); // rax
  __int64 v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  int32 v20; // r12d
  int v21; // r15d
  __int64 v22; // r13
  int32 v23; // r14d
  __int64 v24; // r12
  __int64 v25; // rdi
  unsigned int (__fastcall ***v26)(_QWORD); // rax
  __int64 v27; // rdi
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  int32 v30; // r12d
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  size_t v45; // rdx
  _QWORD *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  size_t v49; // rdx
  _QWORD *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  size_t v53; // rdx
  _QWORD *v54; // rdi
  size_t v55; // [rsp+10h] [rbp-40h]
  unsigned __int64 v56; // [rsp+10h] [rbp-40h]
  size_t v57; // [rsp+10h] [rbp-40h]
  unsigned __int64 v58; // [rsp+10h] [rbp-40h]
  size_t v59; // [rsp+10h] [rbp-40h]
  unsigned __int64 v60; // [rsp+10h] [rbp-40h]
  __int64 v61; // [rsp+18h] [rbp-38h]
  __int64 v62; // [rsp+18h] [rbp-38h]
  __int64 v63; // [rsp+18h] [rbp-38h]

  v2 = abs32(this->m_BaseClasses.m_Data.m_nImplLength);
  if ( v2 != 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      m_pImplElements = this->m_BaseClasses.m_Data.m_pImplElements;
      v6 = &m_pImplElements[16 * v3];
      if ( *(*(v6 + 1) + 188LL) >= 0 )
      {
        if ( v3 != v4 )
        {
          v7 = *(v6 + 1);
          v8 = *v6;
          v9 = 16LL * v4;
          *&m_pImplElements[v9 + 8] = v7;
          *&m_pImplElements[v9] = v8;
        }
        ++v4;
      }
      ++v3;
    }
    while ( v2 > v3 );
    if ( v2 != v4 )
    {
      m_nImplLength = this->m_BaseClasses.m_Data.m_nImplLength;
      if ( m_nImplLength >= 0 )
      {
LABEL_10:
        this->m_BaseClasses.m_Data.m_nImplLength = v4;
        goto LABEL_11;
      }
      if ( v4 != 0 )
      {
        v31 = this->m_BaseClasses.m_Data.m_pImplElements;
        v32 = 16LL * v4;
        if ( v31 == 0 )
        {
          v31 = MemAlloc_AllocAlignedFunc(16LL * v4, 8u);
LABEL_38:
          this->m_BaseClasses.m_Data.m_pImplElements = v31;
          v33 = 16LL * -m_nImplLength;
          if ( v33 < v32 )
            memset((v31 + v33), 0, v32 - v33);
          goto LABEL_40;
        }
        if ( v32 != 0 )
        {
          if ( (v31 & 7) != 0 )
          {
            v31 = 0;
            if ( Plat_IsInDebugSessionRaw(v2) != 0 )
              __debugbreak();
          }
          else
          {
            v62 = *((v31 & 0xFFFFFFFFFFFFFFF8LL) - 8);
            v47 = (*(*g_pMemAlloc + 128LL))(g_pMemAlloc, v62);
            if ( v32 > v47 + v62 - v31 )
            {
              v57 = v47 + v62 - v31;
              v48 = (**g_pMemAlloc)(g_pMemAlloc, v32 + 15);
              v49 = v57;
              v50 = ((v48 + 15) & 0xFFFFFFFFFFFFFFF8LL);
              *(v50 - 1) = v48;
              v58 = v50;
              if ( v49 > v32 )
                v49 = 16LL * v4;
              memcpy(v50, v31, v49);
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v62);
              v31 = v58;
            }
          }
          goto LABEL_38;
        }
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((v31 & 0xFFFFFFFFFFFFFFF8LL) - 8));
      }
      else
      {
        v40 = this->m_BaseClasses.m_Data.m_pImplElements;
        if ( v40 != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((v40 & 0xFFFFFFFFFFFFFFF8LL) - 8));
      }
      this->m_BaseClasses.m_Data.m_pImplElements = 0;
LABEL_40:
      v4 = -v4;
      goto LABEL_10;
    }
  }
LABEL_11:
  v11 = abs32(this->m_Fields.m_Data.m_nImplLength);
  if ( v11 != 0 )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      v14 = v12 << 6;
      v15 = *(this->m_Fields.m_Data.m_pImplElements + 8 * v12 + 2);
      v16 = (*(*v15 + 104LL))(v15);
      if ( (**v16)(v16) != 7 )
      {
        if ( v12 != v13 )
        {
          v18 = this->m_Fields.m_Data.m_pImplElements;
          v19 = &v18[8 * v13];
          *v19 = v18[8 * v12];
          v19[1] = *(v18 + v14 + 8);
          v19[2] = *(v18 + v14 + 16);
          v19[3] = *(v18 + v14 + 24);
          v19[4] = *(v18 + v14 + 32);
          v19[5] = *(v18 + v14 + 40);
          v19[6] = *(v18 + v14 + 48);
          v19[7] = *(v18 + v14 + 56);
        }
        ++v13;
      }
      ++v12;
    }
    while ( v11 > v12 );
    if ( v11 != v13 )
    {
      v20 = this->m_Fields.m_Data.m_nImplLength;
      if ( v20 >= 0 )
      {
LABEL_20:
        this->m_Fields.m_Data.m_nImplLength = v13;
        goto LABEL_21;
      }
      if ( v13 != 0 )
      {
        v34 = this->m_Fields.m_Data.m_pImplElements;
        v35 = v13 << 6;
        if ( v34 == 0 )
        {
          v34 = MemAlloc_AllocAlignedFunc(v13 << 6, 8u);
LABEL_47:
          this->m_Fields.m_Data.m_pImplElements = v34;
          v36 = -v20 << 6;
          if ( v36 < v35 )
            memset((v34 + v36), 0, v35 - v36);
          goto LABEL_49;
        }
        if ( v35 != 0 )
        {
          if ( (v34 & 7) != 0 )
          {
            v34 = 0;
            if ( Plat_IsInDebugSessionRaw(v17) != 0 )
              __debugbreak();
          }
          else
          {
            v63 = *((v34 & 0xFFFFFFFFFFFFFFF8LL) - 8);
            v51 = (*(*g_pMemAlloc + 128LL))(g_pMemAlloc, v63);
            if ( v35 > v51 + v63 - v34 )
            {
              v59 = v51 + v63 - v34;
              v52 = (**g_pMemAlloc)(g_pMemAlloc, v35 + 15);
              v53 = v59;
              v54 = ((v52 + 15) & 0xFFFFFFFFFFFFFFF8LL);
              *(v54 - 1) = v52;
              v60 = v54;
              if ( v53 > v35 )
                v53 = v13 << 6;
              memcpy(v54, v34, v53);
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v63);
              v34 = v60;
            }
          }
          goto LABEL_47;
        }
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((v34 & 0xFFFFFFFFFFFFFFF8LL) - 8));
      }
      else
      {
        v42 = this->m_Fields.m_Data.m_pImplElements;
        if ( v42 != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((v42 & 0xFFFFFFFFFFFFFFF8LL) - 8));
      }
      this->m_Fields.m_Data.m_pImplElements = 0;
LABEL_49:
      v13 = -v13;
      goto LABEL_20;
    }
  }
LABEL_21:
  v21 = abs32(this->m_StaticFields.m_Data.m_nImplLength);
  if ( v21 != 0 )
  {
    v22 = 0;
    v23 = 0;
    do
    {
      v24 = v22 << 6;
      v25 = *(this->m_StaticFields.m_Data.m_pImplElements + 8 * v22 + 2);
      v26 = (*(*v25 + 104LL))(v25);
      if ( (**v26)(v26) != 7 )
      {
        if ( v22 != v23 )
        {
          v28 = this->m_StaticFields.m_Data.m_pImplElements;
          v29 = &v28[8 * v23];
          *v29 = v28[8 * v22];
          v29[1] = *(v28 + v24 + 8);
          v29[2] = *(v28 + v24 + 16);
          v29[3] = *(v28 + v24 + 24);
          v29[4] = *(v28 + v24 + 32);
          v29[5] = *(v28 + v24 + 40);
          v29[6] = *(v28 + v24 + 48);
          v29[7] = *(v28 + v24 + 56);
        }
        ++v23;
      }
      ++v22;
    }
    while ( v21 > v22 );
    if ( v21 != v23 )
    {
      v30 = this->m_StaticFields.m_Data.m_nImplLength;
      if ( v30 >= 0 )
      {
LABEL_30:
        this->m_StaticFields.m_Data.m_nImplLength = v23;
        return;
      }
      if ( v23 != 0 )
      {
        v37 = this->m_StaticFields.m_Data.m_pImplElements;
        v38 = v23 << 6;
        if ( v37 == 0 )
        {
          v37 = MemAlloc_AllocAlignedFunc(v23 << 6, 8u);
LABEL_56:
          this->m_StaticFields.m_Data.m_pImplElements = v37;
          v39 = -v30 << 6;
          if ( v39 < v38 )
            memset((v37 + v39), 0, v38 - v39);
          goto LABEL_58;
        }
        if ( v38 != 0 )
        {
          if ( (v37 & 7) != 0 )
          {
            v37 = 0;
            if ( Plat_IsInDebugSessionRaw(v27) != 0 )
              __debugbreak();
          }
          else
          {
            v61 = *((v37 & 0xFFFFFFFFFFFFFFF8LL) - 8);
            v43 = (*(*g_pMemAlloc + 128LL))(g_pMemAlloc, v61);
            if ( v38 > v43 + v61 - v37 )
            {
              v55 = v43 + v61 - v37;
              v44 = (**g_pMemAlloc)(g_pMemAlloc, v38 + 15);
              v45 = v55;
              v46 = ((v44 + 15) & 0xFFFFFFFFFFFFFFF8LL);
              *(v46 - 1) = v44;
              v56 = v46;
              if ( v45 > v38 )
                v45 = v23 << 6;
              memcpy(v46, v37, v45);
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v61);
              v37 = v56;
            }
          }
          goto LABEL_56;
        }
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((v37 & 0xFFFFFFFFFFFFFFF8LL) - 8));
      }
      else
      {
        v41 = this->m_StaticFields.m_Data.m_pImplElements;
        if ( v41 != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((v41 & 0xFFFFFFFFFFFFFFF8LL) - 8));
      }
      this->m_StaticFields.m_Data.m_pImplElements = 0;
LABEL_58:
      v23 = -v23;
      goto LABEL_30;
    }
  }
}


