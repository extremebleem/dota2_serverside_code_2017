
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSchemaFieldMetadataOverride::WasTagRemoved  (line 181, @0x00000000030aae30, libserver.so)  // inlines: Count, _V_strcmp
// calls: strcmp
// callers: CEntitySystem::BuildComponentUnserializer
bool __fastcall CSchemaFieldMetadataOverride::WasTagRemoved(
        const CSchemaFieldMetadataOverride *const this,
        const char *pMetaTagName)
{
  unsigned int v2; // eax
  const char **m_pImplElements; // rbx
  __int64 v5; // r13

  v2 = abs32(this->m_ModifyRemoves.m_Data.m_nImplLength);
  if ( v2 == 0 )
    return 0;
  m_pImplElements = this->m_ModifyRemoves.m_Data.m_pImplElements;
  v5 = &m_pImplElements[2 * v2];
  do
  {
    if ( strcmp(pMetaTagName, *m_pImplElements) == 0 )
      return 1;
    m_pImplElements += 2;
  }
  while ( m_pImplElements != v5 );
  return 0;
}


// CSchemaClassInfo::MetaIsPresent  (line 356, @0x0000000001ec3fe0, libserver.so)  // inlines: Count, IsPresent, NumBasesToTraverse, _V_strcmp
// calls: strcmp
// callers: CRenderComponent::Connect, GetMeshMaterialInfo, CBaseIntrospectedTypeManager::SetDiskDataBinding
bool __fastcall CSchemaClassInfo::MetaIsPresent(
        const CSchemaClassInfo *const this,
        const char *pTagName,
        SchemaBaseClassTraversal_t nBaseClassTraversal,
        ClassIntrospectionHandle_t classToSkip)
{
  unsigned int v7; // eax
  const char **m_pImplElements; // rbx
  __int64 v9; // r15
  bool result; // al
  unsigned int v11; // eax
  const char **v12; // rbx
  __int64 v13; // r15
  int v14; // eax
  char *v15; // rdx
  const CSchemaClassInfo *const *v16; // rbx
  __int64 v17; // r14

  if ( classToSkip == this )
    return 0;
  v7 = abs32(this->m_Metadata.m_StaticEntries.m_Data.m_nImplLength);
  if ( v7 != 0 )
  {
    m_pImplElements = this->m_Metadata.m_StaticEntries.m_Data.m_pImplElements;
    v9 = &m_pImplElements[4 * v7];
    while ( strcmp(*m_pImplElements, pTagName) != 0 )
    {
      m_pImplElements += 4;
      if ( m_pImplElements == v9 )
        goto LABEL_8;
    }
    return 1;
  }
LABEL_8:
  v11 = abs32(this->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength);
  if ( v11 != 0 )
  {
    v12 = this->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
    v13 = &v12[4 * v11];
    while ( strcmp(*v12, pTagName) != 0 )
    {
      v12 += 4;
      if ( v12 == v13 )
        goto LABEL_13;
    }
    return 1;
  }
LABEL_13:
  result = 0;
  if ( nBaseClassTraversal != SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_NONE )
  {
    v14 = abs32(this->m_BaseClasses.m_Data.m_nImplLength);
    if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY && v14 > 0 )
      v14 = 1;
    if ( v14 > 0 )
    {
      v15 = this->m_BaseClasses.m_Data.m_pImplElements;
      v16 = (v15 + 8);
      v17 = &v15[16 * (v14 - 1) + 24];
      do
      {
        result = CSchemaClassInfo::MetaIsPresent(*v16, pTagName, nBaseClassTraversal, 0);
        if ( result )
          break;
        v16 += 2;
      }
      while ( v16 != v17 );
      return result;
    }
    return 0;
  }
  return result;
}


// CSchemaClassInfo::MetaGetPtr  (line 384, @0x0000000001ec4150, libserver.so)  // inlines: Count, MetaGetPtr, NumBasesToTraverse
// calls: CSchemaMetadataSet::GetPtr
// callers: CRenderComponent::Activate, CRenderComponent::Connect, CRenderComponent::UpdateEntityRenderAttrs, CEntitySystem::AddComponentProceduralKeys, CEntitySystem::AddKeyToUnserialize, CEntitySystem::AddComponentFieldUnserializer, GetVsSignatureFromResourceHeader, GetMeshMaterialInfo, MDmElementType::CValueSearchTester_ClassIntrospectionHandle_t::Test, MResourceBlockType::CValueSearchTester_ClassIntrospectionHandle_t::Test, MDiskDataForResourceType::CValueSearchTester_ClassIntrospectionHandle_t::Test, GetResourceMapping (14 total)
void *__fastcall CSchemaClassInfo::MetaGetPtr(
        const CSchemaClassInfo *const this,
        const char *pTagName,
        SchemaBaseClassTraversal_t nBaseClassTraversal,
        ClassIntrospectionHandle_t classToSkip)
{
  void *result; // rax
  int v8; // eax
  char *m_pImplElements; // rdx
  const CSchemaMetadataSet *v10; // rbx
  int v11; // eax
  char *v12; // rdx
  const CSchemaMetadataSet *v13; // rbx
  int v14; // eax
  char *v15; // rdx
  const CSchemaMetadataSet *v16; // rbx
  int v17; // eax
  char *v18; // rdx
  const CSchemaMetadataSet *v19; // rbx
  int v20; // eax
  char *v21; // rdx
  const CSchemaMetadataSet *v22; // rbx
  int v23; // eax
  char *v24; // rdx
  const CSchemaMetadataSet *v25; // rbx
  int v26; // eax
  char *v27; // rdx
  const CSchemaMetadataSet *v28; // rbx
  int v29; // eax
  char *v30; // rdx
  const CSchemaMetadataSet **v31; // r12
  const CSchemaMetadataSet *v32; // rbx
  int v33; // eax
  char *v34; // rdx
  const CSchemaClassInfo *const *v35; // r13
  __int64 v36; // rbx
  __int64 v37; // [rsp+8h] [rbp-A8h]
  __int64 v38; // [rsp+10h] [rbp-A0h]
  __int64 v39; // [rsp+18h] [rbp-98h]
  __int64 v40; // [rsp+20h] [rbp-90h]
  const CSchemaMetadataSet **v41; // [rsp+28h] [rbp-88h]
  __int64 v42; // [rsp+30h] [rbp-80h]
  const CSchemaMetadataSet **v43; // [rsp+38h] [rbp-78h]
  const CSchemaMetadataSet **v44; // [rsp+40h] [rbp-70h]
  __int64 v45; // [rsp+48h] [rbp-68h]
  const CSchemaMetadataSet **v46; // [rsp+50h] [rbp-60h]
  __int64 v47; // [rsp+58h] [rbp-58h]
  const CSchemaMetadataSet **v48; // [rsp+60h] [rbp-50h]
  __int64 v49; // [rsp+68h] [rbp-48h]
  const CSchemaMetadataSet **v50; // [rsp+70h] [rbp-40h]
  const CSchemaMetadataSet **v51; // [rsp+78h] [rbp-38h]

  if ( classToSkip == this )
    return 0;
  result = CSchemaMetadataSet::GetPtr(&this->m_Metadata, pTagName);
  if ( result != 0 || nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_NONE )
    return result;
  v8 = abs32(this->m_BaseClasses.m_Data.m_nImplLength);
  if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY && v8 > 0 )
    v8 = 1;
  if ( v8 <= 0 )
    return 0;
  m_pImplElements = this->m_BaseClasses.m_Data.m_pImplElements;
  v41 = (m_pImplElements + 8);
  v40 = &m_pImplElements[16 * (v8 - 1) + 24];
  while ( 1 )
  {
    v10 = *v41;
    if ( *v41 != 0 )
    {
      result = CSchemaMetadataSet::GetPtr(v10 + 4, pTagName);
      if ( result != 0 )
        return result;
      v11 = abs32(v10[2].m_StaticEntries.m_Data.m_nImplLength);
      if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY && v11 > 0 )
        v11 = 1;
      if ( v11 > 0 )
        break;
    }
LABEL_59:
    v41 += 2;
    if ( v41 == v40 )
      return 0;
  }
  v12 = v10[2].m_StaticEntries.m_Data.m_pImplElements;
  v43 = (v12 + 8);
  v39 = &v12[16 * (v11 - 1) + 24];
  while ( 1 )
  {
    v13 = *v43;
    if ( *v43 != 0 )
    {
      result = CSchemaMetadataSet::GetPtr(v13 + 4, pTagName);
      if ( result != 0 )
        return result;
      v14 = abs32(v13[2].m_StaticEntries.m_Data.m_nImplLength);
      if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY && v14 > 0 )
        v14 = 1;
      if ( v14 > 0 )
        break;
    }
LABEL_58:
    v43 += 2;
    if ( v43 == v39 )
      goto LABEL_59;
  }
  v15 = v13[2].m_StaticEntries.m_Data.m_pImplElements;
  v44 = (v15 + 8);
  v38 = &v15[16 * (v14 - 1) + 24];
  while ( 1 )
  {
    v16 = *v44;
    if ( *v44 != 0 )
    {
      result = CSchemaMetadataSet::GetPtr(v16 + 4, pTagName);
      if ( result != 0 )
        return result;
      v17 = abs32(v16[2].m_StaticEntries.m_Data.m_nImplLength);
      if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY && v17 > 0 )
        v17 = 1;
      if ( v17 > 0 )
        break;
    }
LABEL_57:
    v44 += 2;
    if ( v44 == v38 )
      goto LABEL_58;
  }
  v18 = v16[2].m_StaticEntries.m_Data.m_pImplElements;
  v46 = (v18 + 8);
  v37 = &v18[16 * (v17 - 1) + 24];
  while ( 1 )
  {
    v19 = *v46;
    if ( *v46 != 0 )
    {
      result = CSchemaMetadataSet::GetPtr(v19 + 4, pTagName);
      if ( result != 0 )
        return result;
      v20 = abs32(v19[2].m_StaticEntries.m_Data.m_nImplLength);
      if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY && v20 > 0 )
        v20 = 1;
      if ( v20 > 0 )
        break;
    }
LABEL_56:
    v46 += 2;
    if ( v46 == v37 )
      goto LABEL_57;
  }
  v21 = v19[2].m_StaticEntries.m_Data.m_pImplElements;
  v48 = (v21 + 8);
  v42 = &v21[16 * (v20 - 1) + 24];
  while ( 1 )
  {
    v22 = *v48;
    if ( *v48 != 0 )
    {
      result = CSchemaMetadataSet::GetPtr(v22 + 4, pTagName);
      if ( result != 0 )
        return result;
      v23 = abs32(v22[2].m_StaticEntries.m_Data.m_nImplLength);
      if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY && v23 > 0 )
        v23 = 1;
      if ( v23 > 0 )
        break;
    }
LABEL_55:
    v48 += 2;
    if ( v48 == v42 )
      goto LABEL_56;
  }
  v24 = v22[2].m_StaticEntries.m_Data.m_pImplElements;
  v50 = (v24 + 8);
  v45 = &v24[16 * (v23 - 1) + 24];
  while ( 1 )
  {
    v25 = *v50;
    if ( *v50 != 0 )
    {
      result = CSchemaMetadataSet::GetPtr(v25 + 4, pTagName);
      if ( result != 0 )
        return result;
      v26 = abs32(v25[2].m_StaticEntries.m_Data.m_nImplLength);
      if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY && v26 > 0 )
        v26 = 1;
      if ( v26 > 0 )
        break;
    }
LABEL_54:
    v50 += 2;
    if ( v50 == v45 )
      goto LABEL_55;
  }
  v27 = v25[2].m_StaticEntries.m_Data.m_pImplElements;
  v51 = (v27 + 8);
  v47 = &v27[16 * (v26 - 1) + 24];
  while ( 1 )
  {
    v28 = *v51;
    if ( *v51 != 0 )
    {
      result = CSchemaMetadataSet::GetPtr(v28 + 4, pTagName);
      if ( result != 0 )
        return result;
      v29 = abs32(v28[2].m_StaticEntries.m_Data.m_nImplLength);
      if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY && v29 > 0 )
        v29 = 1;
      if ( v29 > 0 )
        break;
    }
LABEL_53:
    v51 += 2;
    if ( v51 == v47 )
      goto LABEL_54;
  }
  v30 = v28[2].m_StaticEntries.m_Data.m_pImplElements;
  v31 = (v30 + 8);
  v49 = &v30[16 * (v29 - 1) + 24];
  while ( 1 )
  {
    v32 = *v31;
    if ( *v31 != 0 )
    {
      result = CSchemaMetadataSet::GetPtr(v32 + 4, pTagName);
      if ( result != 0 )
        return result;
      v33 = abs32(v32[2].m_StaticEntries.m_Data.m_nImplLength);
      if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY && v33 > 0 )
        v33 = 1;
      if ( v33 > 0 )
        break;
    }
LABEL_52:
    v31 += 2;
    if ( v31 == v49 )
      goto LABEL_53;
  }
  v34 = v32[2].m_StaticEntries.m_Data.m_pImplElements;
  v35 = (v34 + 8);
  v36 = &v34[16 * (v33 - 1) + 24];
  while ( 1 )
  {
    result = CSchemaClassInfo::MetaGetPtr(*v35, pTagName, nBaseClassTraversal, 0);
    if ( result != 0 )
      return result;
    v35 += 2;
    if ( v35 == v36 )
      goto LABEL_52;
  }
}


// CSchemaClassInfo::MetaGetAllPtrs<RenderAttrUpdater_t*>  (line 413, @0x0000000001f9c420, libserver.so)  // inlines: AddToTail, CopyConstruct<RenderAttrUpdater_t*>, Count, Element, GetAllPtrs<RenderAttrUpdater_t*>, GrowMemory, MetaGetAllPtrs<RenderAttrUpdater_t*>, NumBasesToTraverse, _V_strcmp, operator[]
// calls: strcmp, CUtlMemory<RenderAttrUpdater_t*, int>::Grow
// callers: CRenderGameSystem::BuildEntityRenderAttrGatherTable
void __fastcall CSchemaClassInfo::MetaGetAllPtrs<RenderAttrUpdater_t *>(
        const CSchemaClassInfo *const this,
        const char *pTagName,
        CUtlVector<RenderAttrUpdater_t*,CUtlMemory<RenderAttrUpdater_t*,int> > *const metaValues,
        SchemaBaseClassTraversal_t nBaseClassTraversal,
        ClassIntrospectionHandle_t classToSkip)
{
  __int64 v6; // r12
  signed int v7; // ebx
  char *v9; // r13
  char *v10; // rcx
  __int64 m_Size; // r13
  int v12; // eax
  RenderAttrUpdater_t **v13; // rax
  __int64 v14; // r12
  signed int v15; // ebx
  char *v16; // r13
  char *v17; // rcx
  __int64 v18; // r13
  int v19; // eax
  RenderAttrUpdater_t **v20; // rax
  int v21; // eax
  CUtlVector<RenderAttrUpdater_t*,CUtlMemory<RenderAttrUpdater_t*,int> > *v22; // rax
  const char *v23; // r15
  CUtlVector<RenderAttrUpdater_t*,CUtlMemory<RenderAttrUpdater_t*,int> > *v24; // r14
  __int64 v25; // r12
  signed int v26; // ebx
  char *v27; // r13
  char *v28; // rcx
  __int64 v29; // r13
  int v30; // eax
  RenderAttrUpdater_t **v31; // rax
  int v32; // ebx
  const CSchemaClassInfo *v33; // rax
  __int64 v34; // r12
  __int64 v35; // rbx
  const CSchemaClassInfo *v36; // r13
  const CSchemaClassInfo *v37; // rdi
  __int64 v38; // r12
  signed int v39; // ebx
  char *v40; // r13
  char *v41; // rcx
  __int64 v42; // r13
  int v43; // eax
  RenderAttrUpdater_t **v44; // rax
  int v45; // eax
  __int64 v46; // r12
  signed int v47; // ebx
  char *v48; // r15
  __int64 v49; // rax
  CUtlMemory<RenderAttrUpdater_t*,int> *v50; // rcx
  int v51; // edx
  RenderAttrUpdater_t **v52; // rax
  __int64 v53; // r12
  signed int v54; // ebx
  char *v55; // r15
  __int64 v56; // rax
  CUtlMemory<RenderAttrUpdater_t*,int> *v57; // rcx
  int v58; // edx
  RenderAttrUpdater_t **v59; // rax
  int v60; // eax
  __int64 v61; // r13
  signed int v62; // ebx
  char *v63; // r15
  __int64 v64; // rax
  CUtlMemory<RenderAttrUpdater_t*,int> *v65; // rcx
  int v66; // edx
  RenderAttrUpdater_t **v67; // rax
  __int64 v68; // r13
  signed int v69; // ebx
  char *v70; // r15
  __int64 v71; // rax
  CUtlMemory<RenderAttrUpdater_t*,int> *v72; // rcx
  int v73; // edx
  RenderAttrUpdater_t **v74; // rax
  int v75; // eax
  const CSchemaClassInfo *v76; // r12
  __int64 v77; // r13
  signed int v78; // ebx
  char *v79; // r15
  __int64 v80; // rax
  RenderAttrUpdater_t *v81; // rcx
  int v82; // edx
  RenderAttrUpdater_t **v83; // rax
  __int64 v84; // r13
  signed int v85; // ebx
  char *v86; // r15
  __int64 v87; // rax
  RenderAttrUpdater_t *v88; // rcx
  int v89; // edx
  RenderAttrUpdater_t **v90; // rax
  __int64 v91; // [rsp+8h] [rbp-B8h]
  __int64 v92; // [rsp+10h] [rbp-B0h]
  __int64 v93; // [rsp+18h] [rbp-A8h]
  __int64 v94; // [rsp+20h] [rbp-A0h]
  const CSchemaClassInfo *v96; // [rsp+30h] [rbp-90h]
  const CSchemaClassInfo *v97; // [rsp+38h] [rbp-88h]
  __int64 v98; // [rsp+40h] [rbp-80h]
  __int64 v99; // [rsp+48h] [rbp-78h]
  RenderAttrUpdater_t *v100; // [rsp+50h] [rbp-70h]
  RenderAttrUpdater_t *v101; // [rsp+50h] [rbp-70h]
  CUtlVectorBase<RenderAttrUpdater_t*,CUtlMemory<RenderAttrUpdater_t*,int> >::CAllocator *v102; // [rsp+58h] [rbp-68h]
  __int64 v103; // [rsp+60h] [rbp-60h]
  int v104; // [rsp+60h] [rbp-60h]
  int v105; // [rsp+60h] [rbp-60h]
  const CSchemaClassInfo *v106; // [rsp+68h] [rbp-58h]
  int v107; // [rsp+68h] [rbp-58h]
  int v108; // [rsp+68h] [rbp-58h]
  CUtlVectorBase<RenderAttrUpdater_t*,CUtlMemory<RenderAttrUpdater_t*,int> >::CAllocator *p_m_Memory; // [rsp+70h] [rbp-50h]
  CUtlMemory<RenderAttrUpdater_t*,int> *v110; // [rsp+70h] [rbp-50h]
  CUtlMemory<RenderAttrUpdater_t*,int> *v111; // [rsp+70h] [rbp-50h]
  CUtlMemory<RenderAttrUpdater_t*,int> *v112; // [rsp+70h] [rbp-50h]
  CUtlMemory<RenderAttrUpdater_t*,int> *v113; // [rsp+70h] [rbp-50h]
  CUtlMemory<RenderAttrUpdater_t*,int> *v114; // [rsp+70h] [rbp-50h]
  int v115; // [rsp+78h] [rbp-48h]
  int v116; // [rsp+78h] [rbp-48h]
  char *s2b; // [rsp+88h] [rbp-38h]
  char *s2a; // [rsp+88h] [rbp-38h]
  char *s2; // [rsp+88h] [rbp-38h]
  char *s2d; // [rsp+88h] [rbp-38h]
  char *s2c; // [rsp+88h] [rbp-38h]

  if ( classToSkip != this )
  {
    v6 = 0;
    v7 = 0;
    p_m_Memory = &metaValues->m_Memory;
    if ( this->m_Metadata.m_StaticEntries.m_Data.m_nImplLength != 0 )
    {
      do
      {
        v9 = this->m_Metadata.m_StaticEntries.m_Data.m_pImplElements + v6;
        if ( strcmp(*v9, pTagName) == 0 )
        {
          v10 = *(v9 + 3);
          m_Size = metaValues->m_Size;
          v12 = metaValues->m_Size;
          if ( m_Size == metaValues->m_Memory.m_nAllocationCount )
          {
            s2a = v10;
            CUtlMemory<RenderAttrUpdater_t *,int>::Grow(p_m_Memory, 1);
            v12 = metaValues->m_Size;
            v10 = s2a;
          }
          metaValues->m_Size = v12 + 1;
          v13 = &metaValues->m_Memory.m_pMemory[m_Size];
          if ( v13 != 0 )
            *v13 = v10;
        }
        ++v7;
        v6 += 32;
      }
      while ( v7 < abs32(this->m_Metadata.m_StaticEntries.m_Data.m_nImplLength) );
    }
    v14 = 0;
    v15 = 0;
    if ( this->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength != 0 )
    {
      do
      {
        v16 = this->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements + v14;
        if ( strcmp(*v16, pTagName) == 0 )
        {
          v17 = *(v16 + 3);
          v18 = metaValues->m_Size;
          v19 = metaValues->m_Size;
          if ( v18 == metaValues->m_Memory.m_nAllocationCount )
          {
            s2b = v17;
            CUtlMemory<RenderAttrUpdater_t *,int>::Grow(&metaValues->m_Memory, 1);
            v19 = metaValues->m_Size;
            v17 = s2b;
          }
          metaValues->m_Size = v19 + 1;
          v20 = &metaValues->m_Memory.m_pMemory[v18];
          if ( v20 != 0 )
            *v20 = v17;
        }
        ++v15;
        v14 += 32;
      }
      while ( v15 < abs32(this->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength) );
    }
    if ( nBaseClassTraversal != SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_NONE )
    {
      if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY )
      {
        v21 = abs32(this->m_BaseClasses.m_Data.m_nImplLength);
        if ( v21 > 0 )
          v21 = 1;
      }
      else
      {
        v21 = abs32(this->m_BaseClasses.m_Data.m_nImplLength);
      }
      if ( v21 > 0 )
      {
        v93 = 0;
        v91 = 16 * ((v21 - 1) + 1LL);
        v102 = &metaValues->m_Memory;
        v22 = metaValues;
        v23 = pTagName;
        v24 = v22;
        do
        {
          v96 = *(this->m_BaseClasses.m_Data.m_pImplElements + v93 + 8);
          if ( classToSkip != v96 )
          {
            if ( v96->m_Metadata.m_StaticEntries.m_Data.m_nImplLength != 0 )
            {
              v25 = 0;
              v26 = 0;
              do
              {
                v27 = v96->m_Metadata.m_StaticEntries.m_Data.m_pImplElements + v25;
                if ( strcmp(*v27, v23) == 0 )
                {
                  v28 = *(v27 + 3);
                  v29 = v24->m_Size;
                  v30 = v24->m_Size;
                  if ( v29 == v24->m_Memory.m_nAllocationCount )
                  {
                    s2c = v28;
                    CUtlMemory<RenderAttrUpdater_t *,int>::Grow(v102, 1);
                    v30 = v24->m_Size;
                    v28 = s2c;
                  }
                  v24->m_Size = v30 + 1;
                  v31 = &v24->m_Memory.m_pMemory[v29];
                  if ( v31 != 0 )
                    *v31 = v28;
                }
                ++v26;
                v25 += 32;
              }
              while ( v26 < abs32(v96->m_Metadata.m_StaticEntries.m_Data.m_nImplLength) );
            }
            if ( v96->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength != 0 )
            {
              v38 = 0;
              v39 = 0;
              do
              {
                v40 = v96->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements + v38;
                if ( strcmp(*v40, v23) == 0 )
                {
                  v41 = *(v40 + 3);
                  v42 = v24->m_Size;
                  v43 = v24->m_Size;
                  if ( v42 == v24->m_Memory.m_nAllocationCount )
                  {
                    s2d = v41;
                    CUtlMemory<RenderAttrUpdater_t *,int>::Grow(v102, 1);
                    v43 = v24->m_Size;
                    v41 = s2d;
                  }
                  v24->m_Size = v43 + 1;
                  v44 = &v24->m_Memory.m_pMemory[v42];
                  if ( v44 != 0 )
                    *v44 = v41;
                }
                ++v39;
                v38 += 32;
              }
              while ( v39 < abs32(v96->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength) );
            }
            if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY )
            {
              v45 = abs32(v96->m_BaseClasses.m_Data.m_nImplLength);
              if ( v45 > 0 )
                v45 = 1;
            }
            else
            {
              v45 = abs32(v96->m_BaseClasses.m_Data.m_nImplLength);
            }
            if ( v45 > 0 )
            {
              s2 = v23;
              v94 = 0;
              v92 = 16 * ((v45 - 1) + 1LL);
              do
              {
                v97 = *(v96->m_BaseClasses.m_Data.m_pImplElements + v94 + 8);
                if ( classToSkip != v97 )
                {
                  v46 = 0;
                  v47 = 0;
                  if ( v97->m_Metadata.m_StaticEntries.m_Data.m_nImplLength != 0 )
                  {
                    do
                    {
                      v48 = v97->m_Metadata.m_StaticEntries.m_Data.m_pImplElements + v46;
                      if ( strcmp(*v48, s2) == 0 )
                      {
                        v49 = v24->m_Size;
                        v50 = *(v48 + 3);
                        v51 = v24->m_Size;
                        if ( v49 == v24->m_Memory.m_nAllocationCount )
                        {
                          v107 = v24->m_Size;
                          v113 = *(v48 + 3);
                          CUtlMemory<RenderAttrUpdater_t *,int>::Grow(v102, 1);
                          v51 = v24->m_Size;
                          v49 = v107;
                          v50 = v113;
                        }
                        v24->m_Size = v51 + 1;
                        v52 = &v24->m_Memory.m_pMemory[v49];
                        if ( v52 != 0 )
                          *v52 = v50;
                      }
                      ++v47;
                      v46 += 32;
                    }
                    while ( v47 < abs32(v97->m_Metadata.m_StaticEntries.m_Data.m_nImplLength) );
                  }
                  v53 = 0;
                  v54 = 0;
                  if ( v97->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength != 0 )
                  {
                    do
                    {
                      v55 = v97->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements + v53;
                      if ( strcmp(*v55, s2) == 0 )
                      {
                        v56 = v24->m_Size;
                        v57 = *(v55 + 3);
                        v58 = v24->m_Size;
                        if ( v56 == v24->m_Memory.m_nAllocationCount )
                        {
                          v108 = v24->m_Size;
                          v114 = *(v55 + 3);
                          CUtlMemory<RenderAttrUpdater_t *,int>::Grow(v102, 1);
                          v58 = v24->m_Size;
                          v56 = v108;
                          v57 = v114;
                        }
                        v24->m_Size = v58 + 1;
                        v59 = &v24->m_Memory.m_pMemory[v56];
                        if ( v59 != 0 )
                          *v59 = v57;
                      }
                      ++v54;
                      v53 += 32;
                    }
                    while ( v54 < abs32(v97->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength) );
                  }
                  if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY )
                  {
                    v60 = abs32(v97->m_BaseClasses.m_Data.m_nImplLength);
                    if ( v60 > 0 )
                      v60 = 1;
                  }
                  else
                  {
                    v60 = abs32(v97->m_BaseClasses.m_Data.m_nImplLength);
                  }
                  if ( v60 > 0 )
                  {
                    v99 = 0;
                    v98 = 16 * ((v60 - 1) + 1LL);
                    do
                    {
                      v106 = *(v97->m_BaseClasses.m_Data.m_pImplElements + v99 + 8);
                      if ( classToSkip != v106 )
                      {
                        v61 = 0;
                        v62 = 0;
                        if ( v106->m_Metadata.m_StaticEntries.m_Data.m_nImplLength != 0 )
                        {
                          do
                          {
                            v63 = v106->m_Metadata.m_StaticEntries.m_Data.m_pImplElements + v61;
                            if ( strcmp(*v63, s2) == 0 )
                            {
                              v64 = v24->m_Size;
                              v65 = *(v63 + 3);
                              v66 = v24->m_Size;
                              if ( v64 == v24->m_Memory.m_nAllocationCount )
                              {
                                v105 = v24->m_Size;
                                v112 = *(v63 + 3);
                                CUtlMemory<RenderAttrUpdater_t *,int>::Grow(v102, 1);
                                v66 = v24->m_Size;
                                v64 = v105;
                                v65 = v112;
                              }
                              v24->m_Size = v66 + 1;
                              v67 = &v24->m_Memory.m_pMemory[v64];
                              if ( v67 != 0 )
                                *v67 = v65;
                            }
                            ++v62;
                            v61 += 32;
                          }
                          while ( v62 < abs32(v106->m_Metadata.m_StaticEntries.m_Data.m_nImplLength) );
                        }
                        v68 = 0;
                        v69 = 0;
                        if ( v106->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength != 0 )
                        {
                          do
                          {
                            v70 = v106->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements + v68;
                            if ( strcmp(*v70, s2) == 0 )
                            {
                              v71 = v24->m_Size;
                              v72 = *(v70 + 3);
                              v73 = v24->m_Size;
                              if ( v71 == v24->m_Memory.m_nAllocationCount )
                              {
                                v104 = v24->m_Size;
                                v111 = *(v70 + 3);
                                CUtlMemory<RenderAttrUpdater_t *,int>::Grow(v102, 1);
                                v73 = v24->m_Size;
                                v71 = v104;
                                v72 = v111;
                              }
                              v24->m_Size = v73 + 1;
                              v74 = &v24->m_Memory.m_pMemory[v71];
                              if ( v74 != 0 )
                                *v74 = v72;
                            }
                            ++v69;
                            v68 += 32;
                          }
                          while ( v69 < abs32(v106->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength) );
                        }
                        if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY )
                        {
                          v75 = abs32(v106->m_BaseClasses.m_Data.m_nImplLength);
                          if ( v75 > 0 )
                            v75 = 1;
                        }
                        else
                        {
                          v75 = abs32(v106->m_BaseClasses.m_Data.m_nImplLength);
                        }
                        if ( v75 > 0 )
                        {
                          v110 = 0;
                          v103 = 16 * ((v75 - 1) + 1LL);
                          do
                          {
                            v76 = *(v106->m_BaseClasses.m_Data.m_pImplElements + v110 + 8);
                            if ( classToSkip != v76 )
                            {
                              v77 = 0;
                              v78 = 0;
                              if ( v76->m_Metadata.m_StaticEntries.m_Data.m_nImplLength != 0 )
                              {
                                do
                                {
                                  v79 = v76->m_Metadata.m_StaticEntries.m_Data.m_pImplElements + v77;
                                  if ( strcmp(*v79, s2) == 0 )
                                  {
                                    v80 = v24->m_Size;
                                    v81 = *(v79 + 3);
                                    v82 = v24->m_Size;
                                    if ( v80 == v24->m_Memory.m_nAllocationCount )
                                    {
                                      v115 = v24->m_Size;
                                      v100 = *(v79 + 3);
                                      CUtlMemory<RenderAttrUpdater_t *,int>::Grow(v102, 1);
                                      v82 = v24->m_Size;
                                      v80 = v115;
                                      v81 = v100;
                                    }
                                    v24->m_Size = v82 + 1;
                                    v83 = &v24->m_Memory.m_pMemory[v80];
                                    if ( v83 != 0 )
                                      *v83 = v81;
                                  }
                                  ++v78;
                                  v77 += 32;
                                }
                                while ( v78 < abs32(v76->m_Metadata.m_StaticEntries.m_Data.m_nImplLength) );
                              }
                              v84 = 0;
                              v85 = 0;
                              if ( v76->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength != 0 )
                              {
                                do
                                {
                                  v86 = v76->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements + v84;
                                  if ( strcmp(*v86, s2) == 0 )
                                  {
                                    v87 = v24->m_Size;
                                    v88 = *(v86 + 3);
                                    v89 = v24->m_Size;
                                    if ( v87 == v24->m_Memory.m_nAllocationCount )
                                    {
                                      v116 = v24->m_Size;
                                      v101 = *(v86 + 3);
                                      CUtlMemory<RenderAttrUpdater_t *,int>::Grow(v102, 1);
                                      v89 = v24->m_Size;
                                      v87 = v116;
                                      v88 = v101;
                                    }
                                    v24->m_Size = v89 + 1;
                                    v90 = &v24->m_Memory.m_pMemory[v87];
                                    if ( v90 != 0 )
                                      *v90 = v88;
                                  }
                                  ++v85;
                                  v84 += 32;
                                }
                                while ( v85 < abs32(v76->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength) );
                              }
                              if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY )
                              {
                                v32 = abs32(v76->m_BaseClasses.m_Data.m_nImplLength);
                                if ( v32 > 0 )
                                  v32 = 1;
                              }
                              else
                              {
                                v32 = abs32(v76->m_BaseClasses.m_Data.m_nImplLength);
                              }
                              if ( v32 > 0 )
                              {
                                v33 = v76;
                                v34 = 0;
                                v35 = 16 * ((v32 - 1) + 1LL);
                                v36 = v33;
                                do
                                {
                                  v37 = *(v36->m_BaseClasses.m_Data.m_pImplElements + v34 + 8);
                                  v34 += 16;
                                  CSchemaClassInfo::MetaGetAllPtrs<RenderAttrUpdater_t *>(
                                    v37,
                                    s2,
                                    v24,
                                    nBaseClassTraversal,
                                    classToSkip);
                                }
                                while ( v34 != v35 );
                              }
                            }
                            ++v110;
                          }
                          while ( v110 != v103 );
                        }
                      }
                      v99 += 16;
                    }
                    while ( v99 != v98 );
                  }
                }
                v94 += 16;
              }
              while ( v94 != v92 );
              v23 = s2;
            }
          }
          v93 += 16;
        }
        while ( v93 != v91 );
      }
    }
  }
}


// CSchemaClassInfo::MetaGetAllPtrs<ComponentKeyField_t*>  (line 413, @0x00000000030c5490, libserver.so)  // inlines: AddToTail, CopyConstruct<ComponentKeyField_t*>, Count, Element, GetAllPtrs<ComponentKeyField_t*>, GrowMemory, MetaGetAllPtrs<ComponentKeyField_t*>, NumBasesToTraverse, _V_strcmp, operator[]
// calls: strcmp, CUtlMemory<ComponentKeyField_t*, int>::Grow
// callers: CEntitySystem::AddComponentProceduralKeys
void __fastcall CSchemaClassInfo::MetaGetAllPtrs<ComponentKeyField_t *>(
        const CSchemaClassInfo *const this,
        const char *pTagName,
        CUtlVector<ComponentKeyField_t*,CUtlMemory<ComponentKeyField_t*,int> > *const metaValues,
        SchemaBaseClassTraversal_t nBaseClassTraversal,
        ClassIntrospectionHandle_t classToSkip)
{
  __int64 v6; // r12
  signed int v7; // ebx
  char *v9; // r13
  char *v10; // rcx
  __int64 m_Size; // r13
  int v12; // eax
  ComponentKeyField_t **v13; // rax
  __int64 v14; // r12
  signed int v15; // ebx
  char *v16; // r13
  char *v17; // rcx
  __int64 v18; // r13
  int v19; // eax
  ComponentKeyField_t **v20; // rax
  int v21; // eax
  CUtlVector<ComponentKeyField_t*,CUtlMemory<ComponentKeyField_t*,int> > *v22; // rax
  const char *v23; // r15
  CUtlVector<ComponentKeyField_t*,CUtlMemory<ComponentKeyField_t*,int> > *v24; // r14
  __int64 v25; // r12
  signed int v26; // ebx
  char *v27; // r13
  char *v28; // rcx
  __int64 v29; // r13
  int v30; // eax
  ComponentKeyField_t **v31; // rax
  int v32; // ebx
  const CSchemaClassInfo *v33; // rax
  __int64 v34; // r12
  __int64 v35; // rbx
  const CSchemaClassInfo *v36; // r13
  const CSchemaClassInfo *v37; // rdi
  __int64 v38; // r12
  signed int v39; // ebx
  char *v40; // r13
  char *v41; // rcx
  __int64 v42; // r13
  int v43; // eax
  ComponentKeyField_t **v44; // rax
  int v45; // eax
  __int64 v46; // r12
  signed int v47; // ebx
  char *v48; // r15
  __int64 v49; // rax
  CUtlMemory<ComponentKeyField_t*,int> *v50; // rcx
  int v51; // edx
  ComponentKeyField_t **v52; // rax
  __int64 v53; // r12
  signed int v54; // ebx
  char *v55; // r15
  __int64 v56; // rax
  CUtlMemory<ComponentKeyField_t*,int> *v57; // rcx
  int v58; // edx
  ComponentKeyField_t **v59; // rax
  int v60; // eax
  __int64 v61; // r13
  signed int v62; // ebx
  char *v63; // r15
  __int64 v64; // rax
  CUtlMemory<ComponentKeyField_t*,int> *v65; // rcx
  int v66; // edx
  ComponentKeyField_t **v67; // rax
  __int64 v68; // r13
  signed int v69; // ebx
  char *v70; // r15
  __int64 v71; // rax
  CUtlMemory<ComponentKeyField_t*,int> *v72; // rcx
  int v73; // edx
  ComponentKeyField_t **v74; // rax
  int v75; // eax
  const CSchemaClassInfo *v76; // r12
  __int64 v77; // r13
  signed int v78; // ebx
  char *v79; // r15
  __int64 v80; // rax
  ComponentKeyField_t *v81; // rcx
  int v82; // edx
  ComponentKeyField_t **v83; // rax
  __int64 v84; // r13
  signed int v85; // ebx
  char *v86; // r15
  __int64 v87; // rax
  ComponentKeyField_t *v88; // rcx
  int v89; // edx
  ComponentKeyField_t **v90; // rax
  __int64 v91; // [rsp+8h] [rbp-B8h]
  __int64 v92; // [rsp+10h] [rbp-B0h]
  __int64 v93; // [rsp+18h] [rbp-A8h]
  __int64 v94; // [rsp+20h] [rbp-A0h]
  const CSchemaClassInfo *v96; // [rsp+30h] [rbp-90h]
  const CSchemaClassInfo *v97; // [rsp+38h] [rbp-88h]
  __int64 v98; // [rsp+40h] [rbp-80h]
  __int64 v99; // [rsp+48h] [rbp-78h]
  ComponentKeyField_t *v100; // [rsp+50h] [rbp-70h]
  ComponentKeyField_t *v101; // [rsp+50h] [rbp-70h]
  CUtlVectorBase<ComponentKeyField_t*,CUtlMemory<ComponentKeyField_t*,int> >::CAllocator *v102; // [rsp+58h] [rbp-68h]
  __int64 v103; // [rsp+60h] [rbp-60h]
  int v104; // [rsp+60h] [rbp-60h]
  int v105; // [rsp+60h] [rbp-60h]
  const CSchemaClassInfo *v106; // [rsp+68h] [rbp-58h]
  int v107; // [rsp+68h] [rbp-58h]
  int v108; // [rsp+68h] [rbp-58h]
  CUtlVectorBase<ComponentKeyField_t*,CUtlMemory<ComponentKeyField_t*,int> >::CAllocator *p_m_Memory; // [rsp+70h] [rbp-50h]
  CUtlMemory<ComponentKeyField_t*,int> *v110; // [rsp+70h] [rbp-50h]
  CUtlMemory<ComponentKeyField_t*,int> *v111; // [rsp+70h] [rbp-50h]
  CUtlMemory<ComponentKeyField_t*,int> *v112; // [rsp+70h] [rbp-50h]
  CUtlMemory<ComponentKeyField_t*,int> *v113; // [rsp+70h] [rbp-50h]
  CUtlMemory<ComponentKeyField_t*,int> *v114; // [rsp+70h] [rbp-50h]
  int v115; // [rsp+78h] [rbp-48h]
  int v116; // [rsp+78h] [rbp-48h]
  char *s2b; // [rsp+88h] [rbp-38h]
  char *s2a; // [rsp+88h] [rbp-38h]
  char *s2; // [rsp+88h] [rbp-38h]
  char *s2d; // [rsp+88h] [rbp-38h]
  char *s2c; // [rsp+88h] [rbp-38h]

  if ( classToSkip != this )
  {
    v6 = 0;
    v7 = 0;
    p_m_Memory = &metaValues->m_Memory;
    if ( this->m_Metadata.m_StaticEntries.m_Data.m_nImplLength != 0 )
    {
      do
      {
        v9 = this->m_Metadata.m_StaticEntries.m_Data.m_pImplElements + v6;
        if ( strcmp(*v9, pTagName) == 0 )
        {
          v10 = *(v9 + 3);
          m_Size = metaValues->m_Size;
          v12 = metaValues->m_Size;
          if ( m_Size == metaValues->m_Memory.m_nAllocationCount )
          {
            s2a = v10;
            CUtlMemory<ComponentKeyField_t *,int>::Grow(p_m_Memory, 1);
            v12 = metaValues->m_Size;
            v10 = s2a;
          }
          metaValues->m_Size = v12 + 1;
          v13 = &metaValues->m_Memory.m_pMemory[m_Size];
          if ( v13 != 0 )
            *v13 = v10;
        }
        ++v7;
        v6 += 32;
      }
      while ( v7 < abs32(this->m_Metadata.m_StaticEntries.m_Data.m_nImplLength) );
    }
    v14 = 0;
    v15 = 0;
    if ( this->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength != 0 )
    {
      do
      {
        v16 = this->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements + v14;
        if ( strcmp(*v16, pTagName) == 0 )
        {
          v17 = *(v16 + 3);
          v18 = metaValues->m_Size;
          v19 = metaValues->m_Size;
          if ( v18 == metaValues->m_Memory.m_nAllocationCount )
          {
            s2b = v17;
            CUtlMemory<ComponentKeyField_t *,int>::Grow(&metaValues->m_Memory, 1);
            v19 = metaValues->m_Size;
            v17 = s2b;
          }
          metaValues->m_Size = v19 + 1;
          v20 = &metaValues->m_Memory.m_pMemory[v18];
          if ( v20 != 0 )
            *v20 = v17;
        }
        ++v15;
        v14 += 32;
      }
      while ( v15 < abs32(this->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength) );
    }
    if ( nBaseClassTraversal != SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_NONE )
    {
      if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY )
      {
        v21 = abs32(this->m_BaseClasses.m_Data.m_nImplLength);
        if ( v21 > 0 )
          v21 = 1;
      }
      else
      {
        v21 = abs32(this->m_BaseClasses.m_Data.m_nImplLength);
      }
      if ( v21 > 0 )
      {
        v93 = 0;
        v91 = 16 * ((v21 - 1) + 1LL);
        v102 = &metaValues->m_Memory;
        v22 = metaValues;
        v23 = pTagName;
        v24 = v22;
        do
        {
          v96 = *(this->m_BaseClasses.m_Data.m_pImplElements + v93 + 8);
          if ( classToSkip != v96 )
          {
            if ( v96->m_Metadata.m_StaticEntries.m_Data.m_nImplLength != 0 )
            {
              v25 = 0;
              v26 = 0;
              do
              {
                v27 = v96->m_Metadata.m_StaticEntries.m_Data.m_pImplElements + v25;
                if ( strcmp(*v27, v23) == 0 )
                {
                  v28 = *(v27 + 3);
                  v29 = v24->m_Size;
                  v30 = v24->m_Size;
                  if ( v29 == v24->m_Memory.m_nAllocationCount )
                  {
                    s2c = v28;
                    CUtlMemory<ComponentKeyField_t *,int>::Grow(v102, 1);
                    v30 = v24->m_Size;
                    v28 = s2c;
                  }
                  v24->m_Size = v30 + 1;
                  v31 = &v24->m_Memory.m_pMemory[v29];
                  if ( v31 != 0 )
                    *v31 = v28;
                }
                ++v26;
                v25 += 32;
              }
              while ( v26 < abs32(v96->m_Metadata.m_StaticEntries.m_Data.m_nImplLength) );
            }
            if ( v96->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength != 0 )
            {
              v38 = 0;
              v39 = 0;
              do
              {
                v40 = v96->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements + v38;
                if ( strcmp(*v40, v23) == 0 )
                {
                  v41 = *(v40 + 3);
                  v42 = v24->m_Size;
                  v43 = v24->m_Size;
                  if ( v42 == v24->m_Memory.m_nAllocationCount )
                  {
                    s2d = v41;
                    CUtlMemory<ComponentKeyField_t *,int>::Grow(v102, 1);
                    v43 = v24->m_Size;
                    v41 = s2d;
                  }
                  v24->m_Size = v43 + 1;
                  v44 = &v24->m_Memory.m_pMemory[v42];
                  if ( v44 != 0 )
                    *v44 = v41;
                }
                ++v39;
                v38 += 32;
              }
              while ( v39 < abs32(v96->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength) );
            }
            if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY )
            {
              v45 = abs32(v96->m_BaseClasses.m_Data.m_nImplLength);
              if ( v45 > 0 )
                v45 = 1;
            }
            else
            {
              v45 = abs32(v96->m_BaseClasses.m_Data.m_nImplLength);
            }
            if ( v45 > 0 )
            {
              s2 = v23;
              v94 = 0;
              v92 = 16 * ((v45 - 1) + 1LL);
              do
              {
                v97 = *(v96->m_BaseClasses.m_Data.m_pImplElements + v94 + 8);
                if ( classToSkip != v97 )
                {
                  v46 = 0;
                  v47 = 0;
                  if ( v97->m_Metadata.m_StaticEntries.m_Data.m_nImplLength != 0 )
                  {
                    do
                    {
                      v48 = v97->m_Metadata.m_StaticEntries.m_Data.m_pImplElements + v46;
                      if ( strcmp(*v48, s2) == 0 )
                      {
                        v49 = v24->m_Size;
                        v50 = *(v48 + 3);
                        v51 = v24->m_Size;
                        if ( v49 == v24->m_Memory.m_nAllocationCount )
                        {
                          v107 = v24->m_Size;
                          v113 = *(v48 + 3);
                          CUtlMemory<ComponentKeyField_t *,int>::Grow(v102, 1);
                          v51 = v24->m_Size;
                          v49 = v107;
                          v50 = v113;
                        }
                        v24->m_Size = v51 + 1;
                        v52 = &v24->m_Memory.m_pMemory[v49];
                        if ( v52 != 0 )
                          *v52 = v50;
                      }
                      ++v47;
                      v46 += 32;
                    }
                    while ( v47 < abs32(v97->m_Metadata.m_StaticEntries.m_Data.m_nImplLength) );
                  }
                  v53 = 0;
                  v54 = 0;
                  if ( v97->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength != 0 )
                  {
                    do
                    {
                      v55 = v97->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements + v53;
                      if ( strcmp(*v55, s2) == 0 )
                      {
                        v56 = v24->m_Size;
                        v57 = *(v55 + 3);
                        v58 = v24->m_Size;
                        if ( v56 == v24->m_Memory.m_nAllocationCount )
                        {
                          v108 = v24->m_Size;
                          v114 = *(v55 + 3);
                          CUtlMemory<ComponentKeyField_t *,int>::Grow(v102, 1);
                          v58 = v24->m_Size;
                          v56 = v108;
                          v57 = v114;
                        }
                        v24->m_Size = v58 + 1;
                        v59 = &v24->m_Memory.m_pMemory[v56];
                        if ( v59 != 0 )
                          *v59 = v57;
                      }
                      ++v54;
                      v53 += 32;
                    }
                    while ( v54 < abs32(v97->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength) );
                  }
                  if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY )
                  {
                    v60 = abs32(v97->m_BaseClasses.m_Data.m_nImplLength);
                    if ( v60 > 0 )
                      v60 = 1;
                  }
                  else
                  {
                    v60 = abs32(v97->m_BaseClasses.m_Data.m_nImplLength);
                  }
                  if ( v60 > 0 )
                  {
                    v99 = 0;
                    v98 = 16 * ((v60 - 1) + 1LL);
                    do
                    {
                      v106 = *(v97->m_BaseClasses.m_Data.m_pImplElements + v99 + 8);
                      if ( classToSkip != v106 )
                      {
                        v61 = 0;
                        v62 = 0;
                        if ( v106->m_Metadata.m_StaticEntries.m_Data.m_nImplLength != 0 )
                        {
                          do
                          {
                            v63 = v106->m_Metadata.m_StaticEntries.m_Data.m_pImplElements + v61;
                            if ( strcmp(*v63, s2) == 0 )
                            {
                              v64 = v24->m_Size;
                              v65 = *(v63 + 3);
                              v66 = v24->m_Size;
                              if ( v64 == v24->m_Memory.m_nAllocationCount )
                              {
                                v105 = v24->m_Size;
                                v112 = *(v63 + 3);
                                CUtlMemory<ComponentKeyField_t *,int>::Grow(v102, 1);
                                v66 = v24->m_Size;
                                v64 = v105;
                                v65 = v112;
                              }
                              v24->m_Size = v66 + 1;
                              v67 = &v24->m_Memory.m_pMemory[v64];
                              if ( v67 != 0 )
                                *v67 = v65;
                            }
                            ++v62;
                            v61 += 32;
                          }
                          while ( v62 < abs32(v106->m_Metadata.m_StaticEntries.m_Data.m_nImplLength) );
                        }
                        v68 = 0;
                        v69 = 0;
                        if ( v106->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength != 0 )
                        {
                          do
                          {
                            v70 = v106->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements + v68;
                            if ( strcmp(*v70, s2) == 0 )
                            {
                              v71 = v24->m_Size;
                              v72 = *(v70 + 3);
                              v73 = v24->m_Size;
                              if ( v71 == v24->m_Memory.m_nAllocationCount )
                              {
                                v104 = v24->m_Size;
                                v111 = *(v70 + 3);
                                CUtlMemory<ComponentKeyField_t *,int>::Grow(v102, 1);
                                v73 = v24->m_Size;
                                v71 = v104;
                                v72 = v111;
                              }
                              v24->m_Size = v73 + 1;
                              v74 = &v24->m_Memory.m_pMemory[v71];
                              if ( v74 != 0 )
                                *v74 = v72;
                            }
                            ++v69;
                            v68 += 32;
                          }
                          while ( v69 < abs32(v106->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength) );
                        }
                        if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY )
                        {
                          v75 = abs32(v106->m_BaseClasses.m_Data.m_nImplLength);
                          if ( v75 > 0 )
                            v75 = 1;
                        }
                        else
                        {
                          v75 = abs32(v106->m_BaseClasses.m_Data.m_nImplLength);
                        }
                        if ( v75 > 0 )
                        {
                          v110 = 0;
                          v103 = 16 * ((v75 - 1) + 1LL);
                          do
                          {
                            v76 = *(v106->m_BaseClasses.m_Data.m_pImplElements + v110 + 8);
                            if ( classToSkip != v76 )
                            {
                              v77 = 0;
                              v78 = 0;
                              if ( v76->m_Metadata.m_StaticEntries.m_Data.m_nImplLength != 0 )
                              {
                                do
                                {
                                  v79 = v76->m_Metadata.m_StaticEntries.m_Data.m_pImplElements + v77;
                                  if ( strcmp(*v79, s2) == 0 )
                                  {
                                    v80 = v24->m_Size;
                                    v81 = *(v79 + 3);
                                    v82 = v24->m_Size;
                                    if ( v80 == v24->m_Memory.m_nAllocationCount )
                                    {
                                      v115 = v24->m_Size;
                                      v100 = *(v79 + 3);
                                      CUtlMemory<ComponentKeyField_t *,int>::Grow(v102, 1);
                                      v82 = v24->m_Size;
                                      v80 = v115;
                                      v81 = v100;
                                    }
                                    v24->m_Size = v82 + 1;
                                    v83 = &v24->m_Memory.m_pMemory[v80];
                                    if ( v83 != 0 )
                                      *v83 = v81;
                                  }
                                  ++v78;
                                  v77 += 32;
                                }
                                while ( v78 < abs32(v76->m_Metadata.m_StaticEntries.m_Data.m_nImplLength) );
                              }
                              v84 = 0;
                              v85 = 0;
                              if ( v76->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength != 0 )
                              {
                                do
                                {
                                  v86 = v76->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements + v84;
                                  if ( strcmp(*v86, s2) == 0 )
                                  {
                                    v87 = v24->m_Size;
                                    v88 = *(v86 + 3);
                                    v89 = v24->m_Size;
                                    if ( v87 == v24->m_Memory.m_nAllocationCount )
                                    {
                                      v116 = v24->m_Size;
                                      v101 = *(v86 + 3);
                                      CUtlMemory<ComponentKeyField_t *,int>::Grow(v102, 1);
                                      v89 = v24->m_Size;
                                      v87 = v116;
                                      v88 = v101;
                                    }
                                    v24->m_Size = v89 + 1;
                                    v90 = &v24->m_Memory.m_pMemory[v87];
                                    if ( v90 != 0 )
                                      *v90 = v88;
                                  }
                                  ++v85;
                                  v84 += 32;
                                }
                                while ( v85 < abs32(v76->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength) );
                              }
                              if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY )
                              {
                                v32 = abs32(v76->m_BaseClasses.m_Data.m_nImplLength);
                                if ( v32 > 0 )
                                  v32 = 1;
                              }
                              else
                              {
                                v32 = abs32(v76->m_BaseClasses.m_Data.m_nImplLength);
                              }
                              if ( v32 > 0 )
                              {
                                v33 = v76;
                                v34 = 0;
                                v35 = 16 * ((v32 - 1) + 1LL);
                                v36 = v33;
                                do
                                {
                                  v37 = *(v36->m_BaseClasses.m_Data.m_pImplElements + v34 + 8);
                                  v34 += 16;
                                  CSchemaClassInfo::MetaGetAllPtrs<ComponentKeyField_t *>(
                                    v37,
                                    s2,
                                    v24,
                                    nBaseClassTraversal,
                                    classToSkip);
                                }
                                while ( v34 != v35 );
                              }
                            }
                            ++v110;
                          }
                          while ( v110 != v103 );
                        }
                      }
                      v99 += 16;
                    }
                    while ( v99 != v98 );
                  }
                }
                v94 += 16;
              }
              while ( v94 != v92 );
              v23 = s2;
            }
          }
          v93 += 16;
        }
        while ( v93 != v91 );
      }
    }
  }
}


// CSchemaClassInfo::CalculateMultipleInheritanceDepth  (line 500, @0x0000000001ea2ab0, libserver.so)  // inlines: CalculateMultipleInheritanceDepth, Count
// callers: CSchemaNonConstructibleClassBinding<CDevtestHierarchyChild::CEntityInstanceEntityClass>::Register, CSchemaNonConstructibleClassBinding<CDevtestHierarchy::CEntityInstanceEntityClass>::Register, CSchemaNonConstructibleClassBinding<CDevtestHierarchy2::CEntityInstanceEntityClass>::Register, CSchemaNonConstructibleClassBinding<CDevtestHierarchy>::Register, CSchemaNonConstructibleClassBinding<CDevtestHierarchyChild>::Register, CSchemaNonConstructibleClassBinding<CDevtestHierarchy2>::Register, CSchemaClassBinding<CDecalInfo>::Register, CSchemaNonConstructibleClassBinding<CPlasma::CEntityInstanceEntityClass>::Register, CSchemaNonConstructibleClassBinding<CPlasma>::Register, CSchemaNonConstructibleClassBinding<CBaseClientUIEntity::CEntityInstanceEntityClass>::Register, CSchemaNonConstructibleClassBinding<CBaseClientUIEntity>::Register, CSchemaNonConstructibleClassBinding<CPointClientUIWorldPanel::CEntityInstanceEntityClass>::Register (4059 total)
int __fastcall CSchemaClassInfo::CalculateMultipleInheritanceDepth(const CSchemaClassInfo *const this)
{
  // [COLLAPSED LOCAL DECLARATIONS. PRESS NUMPAD "+" TO EXPAND]

  v1 = abs32(this->m_BaseClasses.m_Data.m_nImplLength);
  if ( !v1 )
    return 1;
  v116 = 0;
  m_pImplElements = this->m_BaseClasses.m_Data.m_pImplElements;
  v114 = (m_pImplElements + 8);
  v106 = &m_pImplElements[16 * v1 + 8];
  do
  {
    v108 = *v114;
    v3 = abs32((*v114)->m_BaseClasses.m_Data.m_nImplLength);
    if ( (((*v114)->m_BaseClasses.m_Data.m_nImplLength >> 31) ^ (*v114)->m_BaseClasses.m_Data.m_nImplLength) == (*v114)->m_BaseClasses.m_Data.m_nImplLength >> 31 )
    {
      v27 = 1;
    }
    else
    {
      v4 = (*v114)->m_BaseClasses.m_Data.m_pImplElements;
      v115 = 0;
      v113 = (v4 + 8);
      v105 = &v4[16 * v3 + 8];
      do
      {
        v107 = *v113;
        v5 = abs32((*v113)->m_BaseClasses.m_Data.m_nImplLength);
        if ( (((*v113)->m_BaseClasses.m_Data.m_nImplLength >> 31) ^ (*v113)->m_BaseClasses.m_Data.m_nImplLength) == (*v113)->m_BaseClasses.m_Data.m_nImplLength >> 31 )
        {
          v26 = 1;
        }
        else
        {
          v6 = (*v113)->m_BaseClasses.m_Data.m_pImplElements;
          v7 = 0;
          v112 = v6 + 8;
          v104 = v6 + 16 * v5 + 8;
          do
          {
            v8 = abs32(*(*v112 + 72LL));
            if ( v8 )
            {
              v9 = *(*v112 + 64LL);
              v10 = v8 - 1;
              v11 = 0;
              v124 = v10;
              v120 = v7;
              v143 = v9 + 8;
              v132 = v9 + 16 * v10 + 24;
              do
              {
                v12 = abs32(*(*v143 + 72LL));
                if ( v12 )
                {
                  v13 = *(*v143 + 64LL);
                  v14 = v12 - 1;
                  v139 = 0;
                  v127 = v14;
                  v117 = v13;
                  v135 = (v13 + 8);
                  v129 = v13 + 16 * v14 + 24;
                  do
                  {
                    v15 = *v135;
                    v16 = abs32((*v135)->m_BaseClasses.m_Data.m_nImplLength);
                    if ( v16 )
                    {
                      v17 = v15->m_BaseClasses.m_Data.m_pImplElements;
                      v18 = 0;
                      v19 = (v17 + 8);
                      v20 = &v17[16 * v16 + 8];
                      do
                      {
                        v21 = CSchemaClassInfo::CalculateMultipleInheritanceDepth(*v19);
                        if ( v18 < v21 )
                          v18 = v21;
                        v19 += 2;
                      }
                      while ( v19 != v20 );
                      v22 = v18 + 1;
                    }
                    else
                    {
                      v22 = 1;
                    }
                    if ( v139 <= v22 )
                      v139 = CSchemaClassInfo::CalculateMultipleInheritanceDepth(v15);
                    v135 += 2;
                  }
                  while ( v135 != v129 );
                  if ( v11 <= v139 + 1 )
                  {
                    v23 = (v117 + 8);
                    v24 = 0;
                    do
                    {
                      v25 = CSchemaClassInfo::CalculateMultipleInheritanceDepth(*v23);
                      if ( v24 < v25 )
                        v24 = v25;
                      v23 += 2;
                    }
                    while ( v23 != (v117 + 16LL * v127 + 24) );
                    v11 = v24 + 1;
                  }
                }
                else if ( v11 <= 1 )
                {
                  v11 = 1;
                }
                v143 += 16;
              }
              while ( v143 != v132 );
              v7 = v120;
              if ( v120 <= v11 + 1 )
              {
                v121 = 0;
                v111 = v9 + 8;
                v103 = v9 + 16LL * v124 + 24;
                do
                {
                  v29 = abs32(*(*v111 + 72LL));
                  if ( v29 )
                  {
                    v30 = *(*v111 + 64LL);
                    v31 = v29 - 1;
                    v118 = 0;
                    v97 = v31;
                    v96 = v30;
                    v110 = v30 + 8;
                    v102 = v30 + 16 * v31 + 24;
                    do
                    {
                      v32 = abs32(*(*v110 + 72LL));
                      if ( v32 )
                      {
                        v33 = *(*v110 + 64LL);
                        v34 = v32 - 1;
                        v119 = 0;
                        v99 = v34;
                        v109 = v33 + 8;
                        v101 = v33 + 16 * v34 + 24;
                        do
                        {
                          v35 = abs32(*(*v109 + 72LL));
                          if ( v35 )
                          {
                            v36 = *(*v109 + 64LL);
                            v37 = v35 - 1;
                            v130 = 0;
                            v98 = v37;
                            v100 = v36;
                            v133 = v36 + 8;
                            v122 = v36 + 16 * v37 + 24;
                            do
                            {
                              v38 = abs32(*(*v133 + 72LL));
                              if ( v38 )
                              {
                                v39 = *(*v133 + 64LL);
                                v40 = v38 - 1;
                                v144 = 0;
                                v125 = v40;
                                v128 = v39;
                                v41 = v39 + 8;
                                v136 = v39 + 16 * v40 + 24;
                                do
                                {
                                  v42 = abs32(*(*v41 + 72LL));
                                  if ( v42 )
                                  {
                                    v43 = v42 - 1;
                                    v44 = 0;
                                    v140 = *(*v41 + 64LL);
                                    v45 = (v140 + 8);
                                    do
                                    {
                                      v46 = CSchemaClassInfo::CalculateMultipleInheritanceDepth(*v45);
                                      if ( v44 < v46 )
                                        v44 = v46;
                                      v45 += 2;
                                    }
                                    while ( v45 != (v140 + 16LL * v43 + 24) );
                                    if ( v144 <= v44 + 1 )
                                    {
                                      v47 = 0;
                                      v48 = (v140 + 8);
                                      v49 = v140 + 16 * v43 + 24;
                                      do
                                      {
                                        v50 = CSchemaClassInfo::CalculateMultipleInheritanceDepth(*v48);
                                        if ( v47 < v50 )
                                          v47 = v50;
                                        v48 += 2;
                                      }
                                      while ( v48 != v49 );
                                      v144 = v47 + 1;
                                    }
                                  }
                                  else
                                  {
                                    v85 = 1;
                                    if ( v144 > 1 )
                                      v85 = v144;
                                    v144 = v85;
                                  }
                                  v41 += 16;
                                }
                                while ( v41 != v136 );
                                if ( v130 <= v144 + 1 )
                                {
                                  v145 = 0;
                                  v51 = v128 + 8;
                                  do
                                  {
                                    v52 = abs32(*(*v51 + 72LL));
                                    if ( v52 )
                                    {
                                      v53 = v52 - 1;
                                      v54 = 0;
                                      v141 = *(*v51 + 64LL);
                                      v55 = (v141 + 8);
                                      do
                                      {
                                        v56 = CSchemaClassInfo::CalculateMultipleInheritanceDepth(*v55);
                                        if ( v54 < v56 )
                                          v54 = v56;
                                        v55 += 2;
                                      }
                                      while ( v55 != (v141 + 16LL * v53 + 24) );
                                      if ( v145 <= v54 + 1 )
                                      {
                                        v57 = 0;
                                        v58 = (v141 + 8);
                                        do
                                        {
                                          v59 = CSchemaClassInfo::CalculateMultipleInheritanceDepth(*v58);
                                          if ( v57 < v59 )
                                            v57 = v59;
                                          v58 += 2;
                                        }
                                        while ( v58 != (v141 + 16 * v53 + 24) );
                                        v145 = v57 + 1;
                                      }
                                    }
                                    else
                                    {
                                      v84 = 1;
                                      if ( v145 > 1 )
                                        v84 = v145;
                                      v145 = v84;
                                    }
                                    v51 += 16;
                                  }
                                  while ( v51 != v128 + 16LL * v125 + 24 );
                                  v130 = v145 + 1;
                                }
                              }
                              else
                              {
                                v86 = 1;
                                if ( v130 > 1 )
                                  v86 = v130;
                                v130 = v86;
                              }
                              v133 += 16;
                            }
                            while ( v133 != v122 );
                            if ( v119 <= v130 + 1 )
                            {
                              v131 = 0;
                              v134 = v100 + 8;
                              do
                              {
                                v60 = abs32(*(*v134 + 72LL));
                                if ( v60 )
                                {
                                  v61 = *(*v134 + 64LL);
                                  v62 = v60 - 1;
                                  v146 = 0;
                                  v123 = v62;
                                  v126 = v61;
                                  v63 = v61 + 8;
                                  v137 = v61 + 16 * v62 + 24;
                                  do
                                  {
                                    v64 = abs32(*(*v63 + 72LL));
                                    if ( v64 )
                                    {
                                      v65 = v64 - 1;
                                      v66 = 0;
                                      v142 = *(*v63 + 64LL);
                                      v67 = (v142 + 8);
                                      do
                                      {
                                        v68 = CSchemaClassInfo::CalculateMultipleInheritanceDepth(*v67);
                                        if ( v66 < v68 )
                                          v66 = v68;
                                        v67 += 2;
                                      }
                                      while ( v67 != (v142 + 16LL * v65 + 24) );
                                      if ( v146 <= v66 + 1 )
                                      {
                                        v69 = 0;
                                        v70 = (v142 + 8);
                                        do
                                        {
                                          v71 = CSchemaClassInfo::CalculateMultipleInheritanceDepth(*v70);
                                          if ( v69 < v71 )
                                            v69 = v71;
                                          v70 += 2;
                                        }
                                        while ( v70 != (v142 + 16 * v65 + 24) );
                                        v146 = v69 + 1;
                                      }
                                    }
                                    else
                                    {
                                      v82 = 1;
                                      if ( v146 > 1 )
                                        v82 = v146;
                                      v146 = v82;
                                    }
                                    v63 += 16;
                                  }
                                  while ( v63 != v137 );
                                  if ( v131 <= v146 + 1 )
                                  {
                                    v147 = 0;
                                    v72 = v126 + 8;
                                    do
                                    {
                                      v73 = abs32(*(*v72 + 72LL));
                                      if ( v73 )
                                      {
                                        v74 = v73 - 1;
                                        v75 = 0;
                                        v138 = *(*v72 + 64LL);
                                        v76 = (v138 + 8);
                                        do
                                        {
                                          v77 = CSchemaClassInfo::CalculateMultipleInheritanceDepth(*v76);
                                          if ( v75 < v77 )
                                            v75 = v77;
                                          v76 += 2;
                                        }
                                        while ( v76 != (v138 + 16LL * v74 + 24) );
                                        if ( v147 <= v75 + 1 )
                                        {
                                          v78 = 0;
                                          v79 = (v138 + 8);
                                          do
                                          {
                                            v80 = CSchemaClassInfo::CalculateMultipleInheritanceDepth(*v79);
                                            if ( v78 < v80 )
                                              v78 = v80;
                                            v79 += 2;
                                          }
                                          while ( v79 != (v138 + 16 * v74 + 24) );
                                          v147 = v78 + 1;
                                        }
                                      }
                                      else
                                      {
                                        v81 = 1;
                                        if ( v147 > 1 )
                                          v81 = v147;
                                        v147 = v81;
                                      }
                                      v72 += 16;
                                    }
                                    while ( v72 != v126 + 16LL * v123 + 24 );
                                    v131 = v147 + 1;
                                  }
                                }
                                else
                                {
                                  v83 = 1;
                                  if ( v131 > 1 )
                                    v83 = v131;
                                  v131 = v83;
                                }
                                v134 += 16;
                              }
                              while ( v134 != v100 + 16LL * v98 + 24 );
                              v119 = v131 + 1;
                            }
                          }
                          else
                          {
                            v87 = 1;
                            if ( v119 > 1 )
                              v87 = v119;
                            v119 = v87;
                          }
                          v109 += 16;
                        }
                        while ( v109 != v101 );
                        if ( v118 <= v119 + 1 )
                        {
                          v88 = 0;
                          v89 = (v33 + 8);
                          do
                          {
                            v90 = CSchemaClassInfo::CalculateMultipleInheritanceDepth(*v89);
                            if ( v88 < v90 )
                              v88 = v90;
                            v89 += 2;
                          }
                          while ( v89 != (v33 + 16LL * v99 + 24) );
                          v118 = v88 + 1;
                        }
                      }
                      else
                      {
                        v94 = 1;
                        if ( v118 > 1 )
                          v94 = v118;
                        v118 = v94;
                      }
                      v110 += 16;
                    }
                    while ( v110 != v102 );
                    if ( v121 <= v118 + 1 )
                    {
                      v91 = 0;
                      v92 = (v96 + 8);
                      do
                      {
                        v93 = CSchemaClassInfo::CalculateMultipleInheritanceDepth(*v92);
                        if ( v91 < v93 )
                          v91 = v93;
                        v92 += 2;
                      }
                      while ( v92 != (v96 + 16LL * v97 + 24) );
                      v121 = v91 + 1;
                    }
                  }
                  else
                  {
                    v95 = 1;
                    if ( v121 > 1 )
                      v95 = v121;
                    v121 = v95;
                  }
                  v111 += 16;
                }
                while ( v111 != v103 );
                v7 = v121 + 1;
              }
            }
            else if ( v7 <= 1 )
            {
              v7 = 1;
            }
            v112 += 16;
          }
          while ( v112 != v104 );
          v26 = v7 + 1;
        }
        if ( v115 <= v26 )
          v115 = CSchemaClassInfo::CalculateMultipleInheritanceDepth(v107);
        v113 += 2;
      }
      while ( v113 != v105 );
      v27 = v115 + 1;
    }
    if ( v116 <= v27 )
      v116 = CSchemaClassInfo::CalculateMultipleInheritanceDepth(v108);
    v114 += 2;
  }
  while ( v114 != v106 );
  return v116 + 1;
}


// SchemaMultipleInheritanceDepth  (line 550, @0x00000000030917a0, libserver.so)  // inlines: Count, GetBaseClassCount, SchemaMultipleInheritanceDepth
// callers: CSchemaClassInfo::MultipleInheritsFromOrIs
int __fastcall SchemaMultipleInheritanceDepth(
        ClassIntrospectionHandle_t pClassInfo,
        ClassIntrospectionHandle_t pPossibleBase)
{
  unsigned int v3; // edx
  char *m_pImplElements; // rcx
  const CSchemaClassInfo *v5; // rax
  unsigned int v6; // edx
  char *v7; // rcx
  const CSchemaClassInfo *v8; // rax
  unsigned int v9; // edx
  char *v10; // rcx
  const CSchemaClassInfo *v11; // rax
  unsigned int v12; // edx
  char *v13; // rcx
  const CSchemaClassInfo *v14; // rax
  unsigned int v15; // edx
  char *v16; // rcx
  const CSchemaClassInfo *v17; // rax
  unsigned int v18; // edx
  char *v19; // rax
  const CSchemaClassInfo *v20; // rcx
  unsigned int v21; // eax
  char *v22; // r14
  const CSchemaClassInfo *v23; // rdx
  unsigned int v24; // r13d
  char *v25; // r12
  const CSchemaClassInfo *v26; // rax
  char *v27; // r12
  char *v28; // r13
  unsigned int v29; // edx
  char *v30; // rax
  ClassIntrospectionHandle_t *v31; // rbx
  __int64 v32; // r14
  int v33; // eax
  __int64 v35; // [rsp+0h] [rbp-A0h]
  __int64 v36; // [rsp+8h] [rbp-98h]
  __int64 v37; // [rsp+10h] [rbp-90h]
  __int64 v38; // [rsp+18h] [rbp-88h]
  __int64 v39; // [rsp+20h] [rbp-80h]
  __int64 v40; // [rsp+28h] [rbp-78h]
  char *v41; // [rsp+30h] [rbp-70h]
  char *v42; // [rsp+38h] [rbp-68h]
  char *v43; // [rsp+40h] [rbp-60h]
  char *v44; // [rsp+48h] [rbp-58h]
  char *v45; // [rsp+50h] [rbp-50h]
  char *v46; // [rsp+58h] [rbp-48h]
  __int64 v47; // [rsp+60h] [rbp-40h]
  char *v48; // [rsp+68h] [rbp-38h]

  if ( pClassInfo == pPossibleBase )
    return 0;
  v3 = abs32(pClassInfo->m_BaseClasses.m_Data.m_nImplLength);
  if ( v3 == 0 )
    return -1;
  m_pImplElements = pClassInfo->m_BaseClasses.m_Data.m_pImplElements;
  v5 = *(m_pImplElements + 1);
  if ( pPossibleBase == v5 )
    return 1;
  v46 = m_pImplElements + 24;
  v38 = &m_pImplElements[16 * v3 + 8];
  while ( 1 )
  {
    v6 = abs32(v5->m_BaseClasses.m_Data.m_nImplLength);
    if ( v6 != 0 )
      break;
LABEL_52:
    if ( v46 == v38 )
      return -1;
    v46 += 16;
    v5 = *(v46 - 2);
    if ( pPossibleBase == v5 )
      return 1;
  }
  v7 = v5->m_BaseClasses.m_Data.m_pImplElements;
  v8 = *(v7 + 1);
  if ( pPossibleBase == v8 )
    return 2;
  v45 = v7 + 24;
  v39 = &v7[16 * v6 + 8];
  while ( 1 )
  {
    v9 = abs32(v8->m_BaseClasses.m_Data.m_nImplLength);
    if ( v9 != 0 )
      break;
LABEL_49:
    if ( v45 == v39 )
      goto LABEL_52;
    v45 += 16;
    v8 = *(v45 - 2);
    if ( pPossibleBase == v8 )
      return 2;
  }
  v10 = v8->m_BaseClasses.m_Data.m_pImplElements;
  v11 = *(v10 + 1);
  if ( pPossibleBase == v11 )
    return 3;
  v44 = v10 + 24;
  v35 = &v10[16 * v9 + 8];
  while ( 1 )
  {
    v12 = abs32(v11->m_BaseClasses.m_Data.m_nImplLength);
    if ( v12 != 0 )
      break;
LABEL_46:
    if ( v44 == v35 )
      goto LABEL_49;
    v44 += 16;
    v11 = *(v44 - 2);
    if ( pPossibleBase == v11 )
      return 3;
  }
  v13 = v11->m_BaseClasses.m_Data.m_pImplElements;
  v14 = *(v13 + 1);
  if ( pPossibleBase == v14 )
    return 4;
  v43 = v13 + 24;
  v37 = &v13[16 * v12 + 8];
  while ( 1 )
  {
    v15 = abs32(v14->m_BaseClasses.m_Data.m_nImplLength);
    if ( v15 != 0 )
      break;
LABEL_43:
    if ( v43 == v37 )
      goto LABEL_46;
    v43 += 16;
    v14 = *(v43 - 2);
    if ( pPossibleBase == v14 )
      return 4;
  }
  v16 = v14->m_BaseClasses.m_Data.m_pImplElements;
  v17 = *(v16 + 1);
  if ( pPossibleBase == v17 )
    return 5;
  v42 = v16 + 24;
  v40 = &v16[16 * v15 + 8];
  while ( 1 )
  {
    v18 = abs32(v17->m_BaseClasses.m_Data.m_nImplLength);
    if ( v18 != 0 )
      break;
LABEL_40:
    if ( v42 == v40 )
      goto LABEL_43;
    v42 += 16;
    v17 = *(v42 - 2);
    if ( pPossibleBase == v17 )
      return 5;
  }
  v19 = v17->m_BaseClasses.m_Data.m_pImplElements;
  v20 = *(v19 + 1);
  if ( pPossibleBase == v20 )
    return 6;
  v41 = v19 + 24;
  v36 = &v19[16 * v18 + 8];
  while ( 1 )
  {
    v21 = abs32(v20->m_BaseClasses.m_Data.m_nImplLength);
    if ( v21 != 0 )
      break;
LABEL_37:
    if ( v41 == v36 )
      goto LABEL_40;
    v41 += 16;
    v20 = *(v41 - 2);
    if ( pPossibleBase == v20 )
      return 6;
  }
  v22 = v20->m_BaseClasses.m_Data.m_pImplElements;
  v23 = *(v22 + 1);
  if ( pPossibleBase == v23 )
    return 7;
  v48 = v22 + 24;
  v47 = &v22[16 * v21 + 8];
  while ( 1 )
  {
    v24 = abs32(v23->m_BaseClasses.m_Data.m_nImplLength);
    if ( v24 != 0 )
      break;
LABEL_34:
    if ( v48 == v47 )
      goto LABEL_37;
    v48 += 16;
    v23 = *(v48 - 2);
    if ( pPossibleBase == v23 )
      return 7;
  }
  v25 = v23->m_BaseClasses.m_Data.m_pImplElements;
  v26 = *(v25 + 1);
  if ( pPossibleBase == v26 )
    return 8;
  v27 = v25 + 24;
  v28 = &v27[16 * v24 - 16];
  while ( 1 )
  {
    v29 = abs32(v26->m_BaseClasses.m_Data.m_nImplLength);
    if ( v29 != 0 )
      break;
LABEL_31:
    if ( v27 == v28 )
      goto LABEL_34;
    v27 += 16;
    v26 = *(v27 - 2);
    if ( pPossibleBase == v26 )
      return 8;
  }
  v30 = v26->m_BaseClasses.m_Data.m_pImplElements;
  v31 = (v30 + 8);
  v32 = &v30[16 * v29 + 8];
  while ( 1 )
  {
    v33 = SchemaMultipleInheritanceDepth(*v31, pPossibleBase);
    if ( v33 >= 0 )
      return v33 + 9;
    v31 += 2;
    if ( v31 == v32 )
      goto LABEL_31;
  }
}


