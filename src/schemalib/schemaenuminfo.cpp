
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_schemaenuminfo.cpp  (line 0, @0x0000000001a6ed10, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_schemaenuminfo_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CSchemaEnumInfo::FindMemberByName  (line 11, @0x0000000003266600, libserver.so)  // inlines: Count, Element, GetEnumerator, _V_strcmp, operator[]
// calls: strcmp
// callers: CEntityClass::UnserializeKey, ConvertTextDataToNewKeyValues, CMaterialDrawDescriptor::KV3TransferLoad_CMaterialDrawDescriptor
const CSchemaEnumeratorInfo *__fastcall CSchemaEnumInfo::FindMemberByName(
        const CSchemaEnumInfo *const this,
        const char *pStr)
{
  unsigned int v2; // eax
  const CSchemaEnumeratorInfo *m_pImplElements; // rbx
  __int64 v5; // r13

  v2 = abs32(this->m_Enumerators.m_Data.m_nImplLength);
  if ( v2 == 0 )
    return 0;
  m_pImplElements = this->m_Enumerators.m_Data.m_pImplElements;
  v5 = &m_pImplElements[v2];
  do
  {
    if ( strcmp(m_pImplElements->m_Name.m_pImplChars, pStr) == 0 )
      return m_pImplElements;
    ++m_pImplElements;
  }
  while ( m_pImplElements != v5 );
  return 0;
}


// CSchemaEnumInfo::FindMemberByValue  (line 26, @0x0000000003266680, libserver.so)  // inlines: Count, Element, GetEnumerator, operator[]
// callers: CEntityClass::UnserializeKey, ConvertTextDataToNewKeyValues, KV3Transfer_EnumeratorNameFromValue<RenderPrimitiveType_t>
const CSchemaEnumeratorInfo *__fastcall CSchemaEnumInfo::FindMemberByValue(
        const CSchemaEnumInfo *const this,
        SchemaEnumeratorValue_t nValue)
{
  unsigned int v2; // ecx
  const CSchemaEnumeratorInfo *m_pImplElements; // rdx
  const CSchemaEnumeratorInfo *v4; // rdx
  const CSchemaEnumeratorInfo *v5; // rcx
  const CSchemaEnumeratorInfo *result; // rax

  v2 = abs32(this->m_Enumerators.m_Data.m_nImplLength);
  if ( v2 != 0 )
  {
    m_pImplElements = this->m_Enumerators.m_Data.m_pImplElements;
    if ( m_pImplElements->m_nValue == nValue )
      return this->m_Enumerators.m_Data.m_pImplElements;
    v4 = m_pImplElements + 1;
    v5 = &v4[v2 - 1];
    while ( v4 != v5 )
    {
      result = v4++;
      if ( v4[-1].m_nValue == nValue )
        return result;
    }
  }
  return 0;
}


// CSchemaEnumInfo::AssignValueToInstance  (line 41, @0x00000000032666e0, libserver.so)
bool __fastcall CSchemaEnumInfo::AssignValueToInstance(
        const CSchemaEnumInfo *const this,
        void *pEnumInstance,
        SchemaEnumeratorValue_t nValue)
{
  uint32 m_nSizeOf; // eax

  m_nSizeOf = this->m_nSizeOf;
  if ( m_nSizeOf == 2 )
  {
    *pEnumInstance = nValue;
    return 1;
  }
  else
  {
    if ( m_nSizeOf <= 2 )
    {
      if ( m_nSizeOf == 1 )
      {
        *pEnumInstance = nValue;
        return 1;
      }
    }
    else
    {
      if ( m_nSizeOf == 4 )
      {
        *pEnumInstance = nValue;
        return 1;
      }
      if ( m_nSizeOf == 8 )
      {
        *pEnumInstance = nValue;
        return 1;
      }
    }
    return 0;
  }
}


