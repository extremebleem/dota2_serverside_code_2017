
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// MDiskDataForResourceType::CValueSearchTester_ClassIntrospectionHandle_t::Test  (line 256, @0x0000000003268010, libserver.so)  // inlines: Count, GetPtr, MetaGetPtr, NumBasesToTraverse, SchemaMetaGetPtr2, _V_strcmp
// calls: CSchemaClassInfo::MetaGetPtr
// strings: "MDiskDataForResourceType"
bool __fastcall MDiskDataForResourceType::CValueSearchTester_ClassIntrospectionHandle_t::Test(
        MDiskDataForResourceType::CValueSearchTester_ClassIntrospectionHandle_t *const this,
        ClassIntrospectionHandle_t pObj)
{
  SchemaBaseClassTraversal_t nBaseClassTraversal; // r12d
  unsigned int v4; // edx
  const char **m_pImplElements; // rax
  __int64 v6; // r11
  const char *Ptr; // rax
  bool result; // al
  unsigned int v9; // edx
  __int64 v10; // r10
  int v11; // eax
  char *v12; // rdx
  const CSchemaClassInfo *const *v13; // r13
  __int64 v14; // r14

  nBaseClassTraversal = this->nBaseClassTraversal;
  if ( this->classToSkip == pObj )
    return 0;
  v4 = abs32(pObj->m_Metadata.m_StaticEntries.m_Data.m_nImplLength);
  if ( v4 != 0 )
  {
    m_pImplElements = pObj->m_Metadata.m_StaticEntries.m_Data.m_pImplElements;
    v6 = &m_pImplElements[4 * v4];
    while ( strcmp(*m_pImplElements, "MDiskDataForResourceType") != 0 )
    {
      m_pImplElements += 4;
      if ( m_pImplElements == v6 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    v9 = abs32(pObj->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength);
    if ( v9 == 0 )
      goto LABEL_14;
    m_pImplElements = pObj->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
    v10 = &m_pImplElements[4 * v9];
    while ( strcmp(*m_pImplElements, "MDiskDataForResourceType") != 0 )
    {
      m_pImplElements += 4;
      if ( m_pImplElements == v10 )
        goto LABEL_14;
    }
  }
  Ptr = m_pImplElements[3];
  if ( Ptr != 0 )
    return *Ptr == this->m_Value;
LABEL_14:
  result = 0;
  if ( nBaseClassTraversal != SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_NONE )
  {
    v11 = abs32(pObj->m_BaseClasses.m_Data.m_nImplLength);
    if ( nBaseClassTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY && v11 > 0 )
      v11 = 1;
    if ( v11 > 0 )
    {
      v12 = pObj->m_BaseClasses.m_Data.m_pImplElements;
      v13 = (v12 + 8);
      v14 = &v12[16 * (v11 - 1) + 24];
      while ( 1 )
      {
        Ptr = CSchemaClassInfo::MetaGetPtr(*v13, "MDiskDataForResourceType", nBaseClassTraversal, 0);
        if ( Ptr != 0 )
          break;
        v13 += 2;
        if ( v13 == v14 )
          return 0;
      }
      return *Ptr == this->m_Value;
    }
    return 0;
  }
  return result;
}


