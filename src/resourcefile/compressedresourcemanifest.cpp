
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_compressedresourcemanifest.cpp  (line 0, @0x0000000001a6a960, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_compressedresourcemanifest_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CCompressedResourceManifest::AddResource  (line 17, @0x0000000003115bd0, libserver.so)  // inlines: AddMultipleToTail, AddString, CUtlString, CUtlSymbol, CompressedResourceName_t, Construct<CCompressedResourceManifest::CompressedResourceName_t>, EnsureCount, Find, GrowMemory, GrowVector, InsertMultipleBefore, V_ExtractFilePath<long unsigned int>, V_StripExtension<long unsigned int>, V_strlen, operator const UtlSymId_t, operator=, operator[]
// calls: FixupResourceName, CUtlSymbolTable::Find, CUtlSymbolTable::AddString, _V_ExtractFilePath, _V_StripExtension, V_GetFileExtension, CUtlString::operator=, CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t, int>::Grow, __stack_chk_fail
// callers: CEntity2SaveRestore::AppendTransitionResources, CEntity2SaveRestore::ExtractResourcesFromSaveGame, CGameSaveRestoreInfo::AddResourceToSaveManifest
int __fastcall CCompressedResourceManifest::AddResource(
        CCompressedResourceManifest *const this,
        const char *pResourceName)
{
  int v3; // r12d
  __int64 v5; // rdx
  __int64 m_Size; // r15
  int v7; // eax
  CCompressedResourceManifest::CompressedResourceName_t *m_pMemory; // rax
  char *v9; // rdi
  int v10; // ecx
  unsigned int v11; // eax
  const char *FileExtension; // rbx
  int v13; // r8d
  int m_nAllocationCount; // edx
  int v15; // esi
  __int64 v16; // rdx
  CCompressedResourceManifest::CompressedResourceName_t *v17; // rcx
  int src; // [rsp+0h] [rbp-660h]
  CCompressedResourceManifest::CompressedResourceName_t *v19; // [rsp+8h] [rbp-658h]
  unsigned __int16 v20[8]; // [rsp+10h] [rbp-650h] BYREF
  char pFixedName[512]; // [rsp+20h] [rbp-640h] BYREF
  char pBasePath[512]; // [rsp+220h] [rbp-440h] BYREF
  char pFileName[520]; // [rsp+420h] [rbp-240h] BYREF
  unsigned __int64 v24; // [rsp+628h] [rbp-38h]

  v3 = -1;
  v24 = __readfsqword(0x28u);
  if ( !FixupResourceName(pResourceName, pFixedName, 512) )
    return v3;
  CUtlSymbolTable::Find(v20, &this->m_resources.m_SymbolTable, pFixedName);
  v3 = v20[0];
  if ( v20[0] != 0xFFFF )
    return v3;
  CUtlSymbolTable::AddString(v20, &this->m_resources.m_SymbolTable, pFixedName);
  v5 = v20[0];
  m_Size = this->m_resources.m_Vector.m_Size;
  v3 = v20[0];
  if ( v20[0] >= m_Size )
  {
    v7 = v20[0] + 1;
    if ( m_Size < v7 )
    {
      v13 = v7 - m_Size;
      if ( v7 != m_Size )
      {
        m_nAllocationCount = this->m_resources.m_Vector.m_Memory.m_nAllocationCount;
        if ( v7 > m_nAllocationCount )
        {
          src = v7 - m_Size;
          CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t,int>::Grow(
            &this->m_resources.m_Vector.m_Memory,
            v7 - m_nAllocationCount);
          v13 = src;
          v7 = v3 + 1;
        }
        this->m_resources.m_Vector.m_Size = v7;
        if ( v13 > 0 )
        {
          m_pMemory = this->m_resources.m_Vector.m_Memory.m_pMemory;
          v15 = 0;
          v16 = m_Size;
          do
          {
            v17 = &m_pMemory[v16];
            if ( &m_pMemory[v16] != 0 )
            {
              v17->m_baseFileName.m_pString = 0;
              v17->m_path.m_Id = -1;
              v17->m_extension.m_Id = -1;
              m_pMemory = this->m_resources.m_Vector.m_Memory.m_pMemory;
            }
            ++v15;
            ++v16;
          }
          while ( v13 > v15 );
          v5 = v20[0];
          v3 = v20[0];
          goto LABEL_7;
        }
        v5 = v20[0];
        v3 = v20[0];
      }
    }
  }
  m_pMemory = this->m_resources.m_Vector.m_Memory.m_pMemory;
LABEL_7:
  v19 = &m_pMemory[v5];
  _V_ExtractFilePath(pFixedName, pBasePath, 512);
  v9 = pBasePath;
  do
  {
    v10 = *v9;
    v9 += 4;
    v11 = ~v10 & (v10 - 16843009) & 0x80808080;
  }
  while ( v11 == 0 );
  if ( (~v10 & (v10 - 16843009) & 0x8080) == 0 )
  {
    LOBYTE(v11) = (~v10 & (v10 - 16843009) & 0x80808080) >> 16;
    LODWORD(v9) = v9 + 2;
  }
  _V_StripExtension(&pFixedName[v9 - (__CFADD__(v11, v11) + 3) - pBasePath], pFileName, 512);
  FileExtension = V_GetFileExtension(pFixedName);
  CUtlSymbolTable::AddString(v20, &this->m_paths, pBasePath);
  v19->m_path.m_Id = v20[0];
  CUtlString::operator=(&v19->m_baseFileName, pFileName);
  CUtlSymbolTable::AddString(v20, &this->m_extensions, FileExtension);
  v19->m_extension.m_Id = v20[0];
  return v3;
}


// CCompressedResourceManifest::FindResourceIndex  (line 48, @0x0000000003114880, libserver.so)  // inlines: Find, operator const UtlSymId_t
// calls: FixupResourceName, CUtlSymbolTable::Find, __stack_chk_fail
// callers: CGameSaveRestoreInfo::AddResourceToSaveManifest
int __fastcall CCompressedResourceManifest::FindResourceIndex(
        const CCompressedResourceManifest *const this,
        const char *pResourceName)
{
  int result; // eax
  unsigned __int16 v4[8]; // [rsp+0h] [rbp-230h] BYREF
  char pFixedName[520]; // [rsp+10h] [rbp-220h] BYREF
  unsigned __int64 v6; // [rsp+218h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  if ( !FixupResourceName(pResourceName, pFixedName, 512) )
    return -1;
  CUtlSymbolTable::Find(v4, &this->m_resources.m_SymbolTable, pFixedName);
  result = v4[0];
  if ( v4[0] == 0xFFFF )
    return -1;
  return result;
}


// CCompressedResourceManifest::GetResourceCount  (line 62, @0x0000000003114910, libserver.so)  // inlines: GetNumStrings
// callers: CEntity2SaveRestore::AppendTransitionResources, CEntity2SaveRestore::ExtractResourcesFromSaveGame, CEntity2SaveRestore::StreamEntitiesToFile
int __fastcall CCompressedResourceManifest::GetResourceCount(const CCompressedResourceManifest *const this)
{
  return this->m_resources.m_SymbolTable.m_Lookup.m_NumElements;
}


// CCompressedResourceManifest::GetResource  (line 67, @0x0000000003114920, libserver.so)  // inlines: String
// calls: CUtlSymbolTable::String
// callers: CEntity2SaveRestore::AppendTransitionResources, CEntity2SaveRestore::ExtractResourcesFromSaveGame, CGameSaveRestoreInfo::LookupResourceFromSaveManifest
const char *__fastcall CCompressedResourceManifest::GetResource(
        const CCompressedResourceManifest *const this,
        int nIndex)
{
  CUtlSymbol id; // [rsp+0h] [rbp-10h] BYREF

  id.m_Id = nIndex;
  return CUtlSymbolTable::String(&this->m_resources.m_SymbolTable, &id.m_Id);
}


// CCompressedResourceManifest::GetResources  (line 72, @0x0000000003115290, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, GetNumStrings, GrowMemory, String, operator[], ~CUtlString
// calls: CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, CUtlSymbolTable::String, CUtlMemory<CUtlString, int>::Grow, _Unwind_Resume
void __fastcall CCompressedResourceManifest::GetResources(
        const CCompressedResourceManifest *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const list)
{
  int m_NumElements; // r15d
  int v4; // r12d
  CUtlString *v5; // r13
  const char *v6; // rax
  char *v7; // rax
  __int64 m_Size; // r13
  int v9; // eax
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-50h]
  const CUtlSymbolTable *p_m_SymbolTable; // [rsp+8h] [rbp-48h]
  CUtlString v12; // [rsp+10h] [rbp-40h] BYREF

  m_NumElements = this->m_resources.m_SymbolTable.m_Lookup.m_NumElements;
  if ( this->m_resources.m_SymbolTable.m_Lookup.m_NumElements != 0 )
  {
    v4 = 0;
    p_m_SymbolTable = &this->m_resources.m_SymbolTable;
    p_m_Memory = &list->m_Memory;
    do
    {
      LOWORD(v12.m_pString) = v4;
      v7 = CUtlSymbolTable::String(p_m_SymbolTable, &v12);
      v12.m_pString = 0;
      CUtlString::Set(&v12, v7);
      m_Size = list->m_Size;
      v9 = list->m_Size;
      if ( m_Size == list->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(p_m_Memory, 1);
        v9 = list->m_Size;
      }
      list->m_Size = v9 + 1;
      v5 = &list->m_Memory.m_pMemory[m_Size];
      if ( v5 != 0 )
      {
        v5->m_pString = 0;
        v6 = CUtlString::Get(&v12);
        CUtlString::Set(v5, v6);
      }
      if ( v12.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v12);
      ++v4;
    }
    while ( v4 < m_NumElements );
  }
}


// CCompressedResourceManifest::RemoveAll  (line 81, @0x0000000003115220, libserver.so)  // inlines: Purge
// calls: CUtlVectorBase<CCompressedResourceManifest::CompressedResourceName_t, CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t, int> >::RemoveAll, CUtlSymbolTable::RemoveAll
// callers: CEntity2SaveRestore::ReadResourceList, CGameSaveRestoreInfo::Clear
void __fastcall CCompressedResourceManifest::RemoveAll(CCompressedResourceManifest *const this)
{
  CUtlVectorBase<CCompressedResourceManifest::CompressedResourceName_t,CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t,int>>::RemoveAll(&this->m_resources.m_Vector);
  if ( (this->m_resources.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_resources.m_Vector.m_Memory.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_resources.m_Vector.m_Memory.m_pMemory = 0;
    }
    this->m_resources.m_Vector.m_Memory.m_nAllocationCount = 0;
  }
  CUtlSymbolTable::RemoveAll(&this->m_resources.m_SymbolTable);
  CUtlSymbolTable::RemoveAll(&this->m_paths);
  CUtlSymbolTable::RemoveAll(&this->m_extensions);
}


// ComputeRequiredBitCount  (line 88, @0x0000000003114830, libserver.so)  // inlines: SmallestPowerOfTwoGreaterOrEqual
// callers: CCompressedResourceManifest::Serialize, CCompressedResourceManifest::Unserialize
int __fastcall ComputeRequiredBitCount(int nValue)
{
  unsigned int v1; // edi
  int result; // eax
  int i; // edx

  v1 = nValue - 1;
  result = 1;
  for ( i = ((v1
            | (v1 >> 1)
            | ((v1 | (v1 >> 1)) >> 2)
            | ((v1 | (v1 >> 1) | ((v1 | (v1 >> 1)) >> 2)) >> 4)
            | ((v1 | (v1 >> 1) | ((v1 | (v1 >> 1)) >> 2) | ((v1 | (v1 >> 1) | ((v1 | (v1 >> 1)) >> 2)) >> 4)) >> 8)
            | ((v1
              | (v1 >> 1)
              | ((v1 | (v1 >> 1)) >> 2)
              | ((v1 | (v1 >> 1) | ((v1 | (v1 >> 1)) >> 2)) >> 4)
              | ((v1 | (v1 >> 1) | ((v1 | (v1 >> 1)) >> 2) | ((v1 | (v1 >> 1) | ((v1 | (v1 >> 1)) >> 2)) >> 4)) >> 8)) >> 16))
           + 1) >> 1; i > 1; ++result )
    i >>= 1;
  return result;
}


// CCompressedResourceManifest::Serialize  (line 102, @0x0000000003114940, libserver.so)  // inlines: BitByte, CLZSS, GetNumBitsLeft, GetNumBytesWritten, GetNumStrings, LoadLittleDWord, SetOverflowFlag, WriteByte, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong, WriteWord, operator const UtlSymId_t, operator[]
// calls: bf_write::bf_write, ComputeRequiredBitCount, CUtlSymbolTable::String, bf_write::WriteString, CUtlString::Get, CLZSS::Compress, bf_write::WriteBytes
// callers: CEntity2SaveRestore::WriteResourceList
void __fastcall CCompressedResourceManifest::Serialize(
        const CCompressedResourceManifest *const this,
        bf_write *const outBuf)
{
  int m_NumElements; // r13d
  int v4; // eax
  int m_nDataBits; // r12d
  int m_iCurBit; // eax
  int v7; // r14d
  int i; // r14d
  char *v9; // rax
  int v10; // r15d
  char *v11; // rax
  int v12; // r14d
  unsigned __int64 v13; // r13
  int v14; // eax
  int v15; // esi
  int v16; // ecx
  int v17; // edx
  const char *v18; // rax
  int v19; // edx
  UtlSymId_t v20; // si
  int v21; // ecx
  CCompressedResourceManifest::CompressedResourceName_t *v22; // r15
  UtlSymId_t m_Id; // r9
  char v24; // r8
  uint32 *v25; // rdi
  int v26; // esi
  uint32 v27; // r9d
  uint32 *v28; // rcx
  char v29; // r8
  uint32 *v30; // rdi
  int v31; // edx
  uint32 v32; // esi
  uint32 *v33; // rcx
  int v34; // eax
  int v35; // edx
  int v36; // ebx
  unsigned __int8 *v37; // r12
  int v38; // edi
  int v39; // eax
  uint v40; // edx
  char v41; // si
  int v42; // r8d
  uint32 *v43; // rdx
  uint32 v44; // edi
  uint32 *v45; // rcx
  int v46; // eax
  int v47; // r8d
  uint32 *v48; // rdx
  int v49; // r8d
  uint32 v50; // edi
  uint32 *v51; // rcx
  int v52; // eax
  char v53; // di
  uint32 *v54; // rsi
  uint32 v55; // r8d
  int v56; // eax
  char v57; // di
  uint32 *v58; // rdx
  uint32 v59; // esi
  char v60; // r8
  int v61; // edx
  uint32 *v62; // rdi
  uint32 v63; // r9d
  uint32 *v64; // rcx
  int v65; // eax
  int v66; // edx
  char v67; // r8
  uint32 *v68; // rdi
  int v69; // eax
  uint32 v70; // r9d
  uint32 *v71; // rcx
  char *pTempMem; // [rsp+8h] [rbp-B8h]
  unsigned int v73; // [rsp+10h] [rbp-B0h]
  int v74; // [rsp+14h] [rbp-ACh]
  int nPathCount; // [rsp+18h] [rbp-A8h]
  unsigned int nPathCounta; // [rsp+18h] [rbp-A8h]
  int nPathCountb; // [rsp+18h] [rbp-A8h]
  int nPathBits; // [rsp+1Ch] [rbp-A4h]
  int nPathBitsa; // [rsp+1Ch] [rbp-A4h]
  int nExtensionBits; // [rsp+30h] [rbp-90h]
  int nResourceCount; // [rsp+38h] [rbp-88h]
  __int64 nResourceCounta; // [rsp+38h] [rbp-88h]
  int nResourceCountb; // [rsp+38h] [rbp-88h]
  uint nBytesCompressed; // [rsp+4Ch] [rbp-74h] BYREF
  CLZSS compressor; // [rsp+50h] [rbp-70h] BYREF
  bf_write buf; // [rsp+70h] [rbp-50h] BYREF

  pTempMem = (**g_pMemAlloc)(g_pMemAlloc, 0x100000);
  bf_write::bf_write(&buf, pTempMem, 0x100000, -1);
  m_NumElements = this->m_extensions.m_Lookup.m_NumElements;
  v4 = ComputeRequiredBitCount(m_NumElements);
  m_nDataBits = buf.m_nDataBits;
  nExtensionBits = v4;
  m_iCurBit = buf.m_iCurBit;
  if ( buf.m_nDataBits - buf.m_iCurBit <= 15 )
  {
    v7 = this->m_paths.m_Lookup.m_NumElements;
    nPathBits = ComputeRequiredBitCount(v7);
LABEL_3:
    nResourceCount = this->m_resources.m_SymbolTable.m_Lookup.m_NumElements;
LABEL_4:
    buf.m_iCurBit = m_nDataBits;
    buf.m_bOverflow = 1;
    goto LABEL_5;
  }
  v41 = buf.m_iCurBit & 0x1F;
  buf.m_iCurBit += 16;
  v42 = __ROL4__(m_NumElements, m_iCurBit & 0x1F);
  v43 = &buf.m_pData[m_iCurBit >> 5];
  v44 = *v43;
  v45 = &v43[(0x7FFFu >> (31 - (m_iCurBit & 0x1F))) & 1];
  v46 = v42 ^ *v45;
  v47 = *v43 ^ v42;
  *v45 ^= (0x7FFFu >> (31 - v41)) & v46;
  *v43 = v44 ^ (0xFFFF << v41) & v47;
  m_nDataBits = buf.m_nDataBits;
  v7 = this->m_paths.m_Lookup.m_NumElements;
  nPathCountb = buf.m_iCurBit;
  nResourceCountb = buf.m_nDataBits - buf.m_iCurBit;
  nPathBits = ComputeRequiredBitCount(v7);
  if ( nResourceCountb <= 15 )
    goto LABEL_3;
  buf.m_iCurBit = nPathCountb + 16;
  v48 = &buf.m_pData[nPathCountb >> 5];
  v49 = __ROL4__(v7, nPathCountb & 0x1F);
  v50 = *v48;
  v51 = &v48[(0x7FFFu >> (31 - (nPathCountb & 0x1F))) & 1];
  *v51 ^= (0x7FFFu >> (31 - (nPathCountb & 0x1F))) & (v49 ^ *v51);
  *v48 = v50 ^ (0xFFFF << (nPathCountb & 0x1F)) & (v50 ^ v49);
  m_nDataBits = buf.m_nDataBits;
  v52 = buf.m_iCurBit;
  nResourceCount = this->m_resources.m_SymbolTable.m_Lookup.m_NumElements;
  if ( buf.m_nDataBits - buf.m_iCurBit <= 15 )
    goto LABEL_4;
  buf.m_iCurBit += 16;
  v53 = v52 & 0x1F;
  v54 = &buf.m_pData[v52 >> 5];
  v55 = *v54;
  v56 = __ROL4__(nResourceCount, v52 & 0x1F);
  v54[(0x7FFFu >> (31 - v53)) & 1] ^= (0x7FFFu >> (31 - v53)) & (v56 ^ v54[(0x7FFFu >> (31 - v53)) & 1]);
  *v54 = v55 ^ (0xFFFF << v53) & (v55 ^ v56);
LABEL_5:
  if ( m_NumElements != 0 )
  {
    nPathCount = v7;
    for ( i = 0; i < m_NumElements; ++i )
    {
      LOWORD(compressor.m_pHashTable) = i;
      v9 = CUtlSymbolTable::String(&this->m_extensions, &compressor);
      bf_write::WriteString(&buf, v9);
    }
    v7 = nPathCount;
  }
  v10 = 0;
  if ( v7 != 0 )
  {
    do
    {
      LOWORD(compressor.m_pHashTable) = v10;
      v11 = CUtlSymbolTable::String(&this->m_paths, &compressor);
      ++v10;
      bf_write::WriteString(&buf, v11);
    }
    while ( v10 < v7 );
  }
  if ( nResourceCount != 0 )
  {
    v12 = nPathBits;
    v13 = 0;
    v14 = buf.m_nDataBits;
    v15 = buf.m_iCurBit;
    v16 = 1 << (nPathBits - 1);
    nPathBitsa = 2 * v16 - 1;
    nPathCounta = v16 - 1;
    v17 = 1 << (nExtensionBits - 1);
    v73 = v17 - 1;
    v74 = 2 * v17 - 1;
    nResourceCounta = 8 * (3LL * (nResourceCount - 1) + 3);
    do
    {
      while ( 1 )
      {
        v22 = &this->m_resources.m_Vector.m_Memory.m_pMemory[v13 / 0x18];
        m_Id = v22->m_path.m_Id;
        if ( v14 - v15 < v12 )
        {
          buf.m_iCurBit = v14;
          buf.m_bOverflow = 1;
        }
        else
        {
          buf.m_iCurBit = v12 + v15;
          v24 = v15 & 0x1F;
          v25 = &buf.m_pData[v15 >> 5];
          v26 = __ROL4__(m_Id, v15 & 0x1F);
          v27 = *v25;
          v28 = &v25[(nPathCounta >> (31 - v24)) & 1];
          *v28 ^= (nPathCounta >> (31 - v24)) & (v26 ^ *v28);
          *v25 = v27 ^ (nPathBitsa << v24) & (v27 ^ v26);
        }
        v18 = CUtlString::Get(&v22->m_baseFileName);
        bf_write::WriteString(&buf, v18);
        v14 = buf.m_nDataBits;
        v19 = buf.m_iCurBit;
        v20 = v22->m_extension.m_Id;
        if ( nExtensionBits <= buf.m_nDataBits - buf.m_iCurBit )
          break;
        v13 += 24LL;
        v21 = 0;
        buf.m_iCurBit = buf.m_nDataBits;
        buf.m_bOverflow = 1;
        v15 = buf.m_nDataBits;
        if ( v13 == nResourceCounta )
          goto LABEL_19;
      }
      buf.m_iCurBit += nExtensionBits;
      v29 = v19 & 0x1F;
      v13 += 24LL;
      v30 = &buf.m_pData[v19 >> 5];
      v31 = __ROL4__(v20, v19 & 0x1F);
      v32 = *v30;
      v33 = &v30[(v73 >> (31 - v29)) & 1];
      v34 = v31 ^ *v33;
      v35 = *v30 ^ v31;
      *v33 ^= (v73 >> (31 - v29)) & v34;
      *v30 = v32 ^ v35 & (v74 << v29);
      v14 = buf.m_nDataBits;
      v15 = buf.m_iCurBit;
      v21 = buf.m_nDataBits - buf.m_iCurBit;
    }
    while ( v13 != nResourceCounta );
  }
  else
  {
    v14 = buf.m_nDataBits;
    v15 = buf.m_iCurBit;
    v21 = buf.m_nDataBits - buf.m_iCurBit;
  }
LABEL_19:
  v36 = (v15 + 7) >> 3;
  if ( v21 > 7 )
  {
    buf.m_iCurBit = v15 + 8;
    v57 = v15 & 0x1F;
    v58 = &buf.m_pData[v15 >> 5];
    v59 = *v58;
    v58[(0x7Fu >> (31 - v57)) & 1] &= ~(0x7Fu >> (31 - v57));
    *v58 = v59 ^ v59 & (255 << v57);
  }
  else
  {
    buf.m_iCurBit = v14;
    buf.m_bOverflow = 1;
  }
  nBytesCompressed = 0;
  compressor.m_nWindowSize = 4096;
  v37 = CLZSS::Compress(&compressor, pTempMem, v36, &nBytesCompressed, 0);
  if ( v37 != 0 )
  {
    v38 = outBuf->m_iCurBit;
    v39 = outBuf->m_nDataBits;
    if ( v38 >= v39 )
    {
      v40 = nBytesCompressed;
      outBuf->m_bOverflow = 1;
      if ( v39 - v38 <= 23 )
        goto LABEL_24;
    }
    else
    {
      outBuf->m_pData[v38 >> 5] |= 1 << v38;
      v40 = nBytesCompressed;
      v38 = outBuf->m_iCurBit + 1;
      outBuf->m_iCurBit = v38;
      v39 = outBuf->m_nDataBits;
      if ( v39 - v38 <= 23 )
      {
LABEL_24:
        outBuf->m_iCurBit = v39;
        outBuf->m_bOverflow = 1;
LABEL_25:
        bf_write::WriteBytes(outBuf, v37, v40);
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v37);
        goto LABEL_26;
      }
    }
    v60 = v38 & 0x1F;
    v61 = __ROL4__(v40, v38 & 0x1F);
    outBuf->m_iCurBit = v38 + 24;
    v62 = &outBuf->m_pData[v38 >> 5];
    v63 = *v62;
    v64 = &v62[(0x7FFFFFu >> (31 - v60)) & 1];
    *v64 ^= (0x7FFFFFu >> (31 - v60)) & (v61 ^ *v64);
    *v62 = v63 ^ (0xFFFFFF << v60) & (v63 ^ v61);
    v40 = nBytesCompressed;
    goto LABEL_25;
  }
  v65 = outBuf->m_iCurBit;
  v66 = outBuf->m_nDataBits;
  if ( v65 >= v66 )
  {
    outBuf->m_bOverflow = 1;
  }
  else
  {
    outBuf->m_pData[v65 >> 5] &= ~(1 << v65);
    v66 = outBuf->m_nDataBits;
    v65 = outBuf->m_iCurBit + 1;
    outBuf->m_iCurBit = v65;
  }
  if ( v66 - v65 > 23 )
  {
    v67 = v65 & 0x1F;
    outBuf->m_iCurBit = v65 + 24;
    v68 = &outBuf->m_pData[v65 >> 5];
    v69 = __ROL4__(v36, v65 & 0x1F);
    v70 = *v68;
    v71 = &v68[(0x7FFFFFu >> (31 - v67)) & 1];
    *v71 ^= (0x7FFFFFu >> (31 - v67)) & (v69 ^ *v71);
    *v68 = v70 ^ (0xFFFFFF << v67) & (v70 ^ v69);
  }
  else
  {
    outBuf->m_iCurBit = v66;
    outBuf->m_bOverflow = 1;
  }
  bf_write::WriteBytes(outBuf, pTempMem, v36);
LABEL_26:
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pTempMem);
}


// CCompressedResourceManifest::Unserialize  (line 168, @0x0000000003115390, libserver.so)  // inlines: AddMultipleToTail, CLZSS, CUtlString, CUtlSymbol, Clear, CompressedResourceName_t, Construct<CCompressedResourceManifest::CompressedResourceName_t>, EnsureCount, GetNumBitsLeft, GrowMemory, GrowVector, InsertMultipleBefore, LoadLittleDWord, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong, ReadWord, operator const UtlSymId_t, operator=, operator[]
// calls: CUtlVectorBase<CCompressedResourceManifest::CompressedResourceName_t, CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t, int> >::RemoveAll, CUtlSymbolTable::RemoveAll, bf_read::ReadBytes, CLZSS::GetActualSize, CLZSS::SafeUncompress, bf_read::bf_read, ComputeRequiredBitCount, CUtlSymbolTable::AddString, bf_read::ReadString, bf_read::SetOverflowFlag, CUtlSymbolTable::String, V_sprintf_safe<512ul> (16 total)
// callers: CEntity2SaveRestore::ReadResourceList
// strings: "%s%s.%s"
bool __fastcall CCompressedResourceManifest::Unserialize(CCompressedResourceManifest *const this, bf_read *const inBuf)
{
  int m_nDataBits; // edx
  bool result; // al
  int m_iCurBit; // ecx
  unsigned int v7; // r12d
  int v8; // eax
  int v9; // r12d
  const unsigned __int8 *m_pData; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rsi
  void *v13; // r12
  unsigned int ActualSize; // ebx
  int m_pHashTarget_high; // r14d
  int m_nWindowSize; // eax
  int v17; // r12d
  int v18; // r13d
  int v19; // ebx
  int v20; // eax
  int v21; // r12d
  bool String; // al
  int v23; // r12d
  int v24; // r13d
  CCompressedResourceManifest *v25; // r12
  int v26; // r15d
  int v27; // eax
  char v28; // si
  unsigned __int16 v29; // r14
  char *v30; // rax
  char *v31; // rax
  unsigned __int16 v32; // r15
  __int64 m_Size; // rdx
  UtlSymId_t v34; // r9
  int v35; // eax
  CCompressedResourceManifest::CompressedResourceName_t *m_pMemory; // rax
  CCompressedResourceManifest::CompressedResourceName_t *v37; // r15
  int v38; // eax
  int v39; // r10d
  int m_nAllocationCount; // ecx
  int v41; // esi
  __int64 v42; // rdx
  CCompressedResourceManifest::CompressedResourceName_t *v43; // rcx
  UtlSymId_t v44; // [rsp+4h] [rbp-70Ch]
  int v45; // [rsp+10h] [rbp-700h]
  unsigned __int8 *pDecompressedBuffer; // [rsp+28h] [rbp-6E8h]
  int nResourceCount; // [rsp+34h] [rbp-6DCh]
  CUtlSymbolTable *p_m_SymbolTable; // [rsp+38h] [rbp-6D8h]
  const char *v49; // [rsp+48h] [rbp-6C8h]
  int v50; // [rsp+48h] [rbp-6C8h]
  UtlSymId_t thisb; // [rsp+50h] [rbp-6C0h]
  int thisc; // [rsp+50h] [rbp-6C0h]
  int nPathCount; // [rsp+60h] [rbp-6B0h]
  int nExtensionBits; // [rsp+68h] [rbp-6A8h]
  int nPathBits; // [rsp+6Ch] [rbp-6A4h]
  CUtlSymbolTable *p_m_paths; // [rsp+70h] [rbp-6A0h]
  CUtlSymbolTable *p_m_extensions; // [rsp+78h] [rbp-698h]
  bool v59; // [rsp+78h] [rbp-698h]
  unsigned __int16 v60[8]; // [rsp+80h] [rbp-690h] BYREF
  unsigned __int16 v61[8]; // [rsp+90h] [rbp-680h] BYREF
  unsigned __int16 v62[8]; // [rsp+A0h] [rbp-670h] BYREF
  CLZSS decompressor; // [rsp+B0h] [rbp-660h] BYREF
  char pTemp[512]; // [rsp+D0h] [rbp-640h] BYREF
  char pResourceName[512]; // [rsp+2D0h] [rbp-440h] BYREF
  char pFixedName[520]; // [rsp+4D0h] [rbp-240h] BYREF
  unsigned __int64 v67; // [rsp+6D8h] [rbp-38h]

  v67 = __readfsqword(0x28u);
  CUtlVectorBase<CCompressedResourceManifest::CompressedResourceName_t,CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t,int>>::RemoveAll(&this->m_resources.m_Vector);
  p_m_SymbolTable = &this->m_resources.m_SymbolTable;
  CUtlSymbolTable::RemoveAll(&this->m_resources.m_SymbolTable);
  p_m_paths = &this->m_paths;
  CUtlSymbolTable::RemoveAll(&this->m_paths);
  p_m_extensions = &this->m_extensions;
  CUtlSymbolTable::RemoveAll(&this->m_extensions);
  m_nDataBits = inBuf->m_nDataBits;
  result = 1;
  m_iCurBit = inBuf->m_iCurBit;
  if ( m_nDataBits != m_iCurBit )
  {
    if ( m_nDataBits - m_iCurBit <= 0 )
    {
      v9 = 0;
      bf_read::SetOverflowFlag(inBuf);
      m_nDataBits = inBuf->m_nDataBits;
      v8 = inBuf->m_iCurBit;
    }
    else
    {
      v7 = *&inBuf->m_pData[4 * (m_iCurBit >> 5)];
      v8 = m_iCurBit + 1;
      inBuf->m_iCurBit = m_iCurBit + 1;
      v9 = (v7 >> m_iCurBit) & 1;
    }
    if ( m_nDataBits - v8 <= 23 )
    {
      inBuf->m_iCurBit = m_nDataBits;
      v11 = 0;
      bf_read::SetOverflowFlag(inBuf);
      v12 = 0;
    }
    else
    {
      m_pData = inBuf->m_pData;
      inBuf->m_iCurBit = v8 + 24;
      v11 = ((*&m_pData[4 * (v8 >> 5)] >> (v8 & 0x1F)) | (*&m_pData[4 * ((v8 + 23) >> 5)] << (32 - (v8 & 0x1F))))
          & 0xFFFFFF;
      v12 = v11;
    }
    if ( v9 != 0 )
    {
      v13 = (**g_pMemAlloc)(g_pMemAlloc, v12);
      bf_read::ReadBytes(inBuf, v13, v11);
      decompressor.m_nWindowSize = 4096;
      ActualSize = CLZSS::GetActualSize(&decompressor, v13);
      pDecompressedBuffer = (**g_pMemAlloc)(g_pMemAlloc, ActualSize + 1);
      v11 = CLZSS::SafeUncompress(&decompressor, v13, pDecompressedBuffer, ActualSize);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v13);
    }
    else
    {
      pDecompressedBuffer = (**g_pMemAlloc)(g_pMemAlloc, v12);
      bf_read::ReadBytes(inBuf, pDecompressedBuffer, v11);
    }
    bf_read::bf_read(&decompressor, pDecompressedBuffer, v11, -1);
    m_pHashTarget_high = HIDWORD(decompressor.m_pHashTarget);
    m_nWindowSize = decompressor.m_nWindowSize;
    if ( HIDWORD(decompressor.m_pHashTarget) - decompressor.m_nWindowSize <= 15 )
    {
      decompressor.m_nWindowSize = HIDWORD(decompressor.m_pHashTarget);
      v18 = 0;
      bf_read::SetOverflowFlag(&decompressor);
      m_pHashTarget_high = HIDWORD(decompressor.m_pHashTarget);
      v17 = decompressor.m_nWindowSize;
    }
    else
    {
      v17 = decompressor.m_nWindowSize + 16;
      decompressor.m_nWindowSize += 16;
      v18 = ((*(&decompressor.m_pHashTable->pStart + (m_nWindowSize >> 5)) >> (m_nWindowSize & 0x1F))
           | (*(&decompressor.m_pHashTable->pStart + 2 * ((m_nWindowSize + 15) >> 5)) << (32 - (m_nWindowSize & 0x1F))));
    }
    nExtensionBits = ComputeRequiredBitCount(v18);
    if ( m_pHashTarget_high - v17 <= 15 )
    {
      decompressor.m_nWindowSize = m_pHashTarget_high;
      bf_read::SetOverflowFlag(&decompressor);
      m_pHashTarget_high = HIDWORD(decompressor.m_pHashTarget);
      nPathCount = 0;
      v19 = decompressor.m_nWindowSize;
      v20 = ComputeRequiredBitCount(0);
    }
    else
    {
      v19 = v17 + 16;
      decompressor.m_nWindowSize = v17 + 16;
      nPathCount = ((*(&decompressor.m_pHashTable->pStart + (v17 >> 5)) >> (v17 & 0x1F))
                  | (*(&decompressor.m_pHashTable->pStart + 2 * ((v17 + 15) >> 5)) << (32 - (v17 & 0x1F))));
      v20 = ComputeRequiredBitCount(nPathCount);
    }
    nPathBits = v20;
    if ( m_pHashTarget_high - v19 <= 15 )
    {
      decompressor.m_nWindowSize = m_pHashTarget_high;
      bf_read::SetOverflowFlag(&decompressor);
      nResourceCount = 0;
    }
    else
    {
      decompressor.m_nWindowSize = v19 + 16;
      nResourceCount = ((*(&decompressor.m_pHashTable->pStart + (v19 >> 5)) >> (v19 & 0x1F))
                      | (*(&decompressor.m_pHashTable->pStart + 2 * ((v19 + 15) >> 5)) << (32 - (v19 & 0x1F))));
    }
    v21 = 0;
    if ( v18 != 0 )
    {
      while ( 1 )
      {
        String = bf_read::ReadString(&decompressor, pTemp, 512, 0, 0);
        if ( !String )
          break;
        ++v21;
        CUtlSymbolTable::AddString(v60, p_m_extensions, pTemp);
        if ( v21 == v18 )
          goto LABEL_20;
      }
    }
    else
    {
LABEL_20:
      v23 = 0;
      if ( nPathCount != 0 )
      {
        while ( 1 )
        {
          String = bf_read::ReadString(&decompressor, pTemp, 512, 0, 0);
          if ( !String )
            break;
          ++v23;
          CUtlSymbolTable::AddString(v60, p_m_paths, pTemp);
          if ( v23 == nPathCount )
            goto LABEL_30;
        }
      }
      else
      {
LABEL_30:
        if ( nResourceCount == 0 )
        {
LABEL_52:
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pDecompressedBuffer);
          return 1;
        }
        v24 = 0;
        v25 = this;
        while ( 1 )
        {
          v38 = decompressor.m_nWindowSize;
          if ( nPathBits <= HIDWORD(decompressor.m_pHashTarget) - decompressor.m_nWindowSize )
          {
            decompressor.m_nWindowSize += nPathBits;
            v26 = ((2 << (nPathBits - 1)) - 1)
                & ((*(&decompressor.m_pHashTable->pStart + (v38 >> 5)) >> (v38 & 0x1F))
                 | (*(&decompressor.m_pHashTable->pStart + ((nPathBits + v38 - 1) >> 5)) << (32 - (v38 & 0x1F))));
          }
          else
          {
            decompressor.m_nWindowSize = HIDWORD(decompressor.m_pHashTarget);
            LOWORD(v26) = 0;
            bf_read::SetOverflowFlag(&decompressor);
          }
          String = bf_read::ReadString(&decompressor, pTemp, 512, 0, 0);
          if ( !String )
            break;
          v27 = decompressor.m_nWindowSize;
          if ( nExtensionBits > HIDWORD(decompressor.m_pHashTarget) - decompressor.m_nWindowSize )
          {
            decompressor.m_nWindowSize = HIDWORD(decompressor.m_pHashTarget);
            v29 = 0;
            bf_read::SetOverflowFlag(&decompressor);
          }
          else
          {
            v28 = decompressor.m_nWindowSize & 0x1F;
            decompressor.m_nWindowSize += nExtensionBits;
            v29 = ((2 << (nExtensionBits - 1)) - 1)
                & ((*(&decompressor.m_pHashTable->pStart + (v27 >> 5)) >> v28)
                 | (*(&decompressor.m_pHashTable->pStart + 2 * ((nExtensionBits + v27 - 1) >> 5)) << (32 - v28)));
          }
          v62[0] = v29;
          v30 = CUtlSymbolTable::String(p_m_extensions, v62);
          v61[0] = v26;
          thisb = v26;
          v49 = v30;
          v31 = CUtlSymbolTable::String(p_m_paths, v61);
          V_sprintf_safe<512ul>(pResourceName, "%s%s.%s", v31, pTemp, v49);
          FixupResourceName(pResourceName, pFixedName, 512);
          CUtlSymbolTable::AddString(v62, p_m_SymbolTable, pFixedName);
          v32 = v62[0];
          m_Size = v25->m_resources.m_Vector.m_Size;
          v34 = thisb;
          if ( v62[0] < m_Size || (v35 = v62[0] + 1, m_Size >= v35) || (v39 = v35 - m_Size, v35 == m_Size) )
          {
            m_pMemory = v25->m_resources.m_Vector.m_Memory.m_pMemory;
          }
          else
          {
            m_nAllocationCount = v25->m_resources.m_Vector.m_Memory.m_nAllocationCount;
            if ( v35 > m_nAllocationCount )
            {
              v44 = thisb;
              v45 = v35 - m_Size;
              v50 = v25->m_resources.m_Vector.m_Size;
              thisc = v62[0] + 1;
              CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t,int>::Grow(
                &v25->m_resources.m_Vector.m_Memory,
                v35 - m_nAllocationCount);
              v34 = v44;
              v39 = v45;
              m_Size = v50;
              v35 = thisc;
            }
            v25->m_resources.m_Vector.m_Size = v35;
            m_pMemory = v25->m_resources.m_Vector.m_Memory.m_pMemory;
            if ( v39 > 0 )
            {
              v41 = 0;
              v42 = m_Size;
              do
              {
                v43 = &m_pMemory[v42];
                if ( &m_pMemory[v42] != 0 )
                {
                  v43->m_baseFileName.m_pString = 0;
                  v43->m_path.m_Id = -1;
                  v43->m_extension.m_Id = -1;
                  m_pMemory = v25->m_resources.m_Vector.m_Memory.m_pMemory;
                }
                ++v41;
                ++v42;
              }
              while ( v39 > v41 );
            }
          }
          ++v24;
          v37 = &m_pMemory[v32];
          v37->m_path.m_Id = v34;
          CUtlString::operator=(&v37->m_baseFileName, pTemp);
          v37->m_extension.m_Id = v29;
          if ( v24 == nResourceCount )
            goto LABEL_52;
        }
      }
    }
    v59 = String;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pDecompressedBuffer);
    return v59;
  }
  return result;
}


// CCompressedResourceManifest::HasResource  (line 271, @0x0000000003115110, libserver.so)  // inlines: Find
// calls: FixupResourceName, CUtlSymbolTable::Find, __stack_chk_fail
bool __fastcall CCompressedResourceManifest::HasResource(
        const CCompressedResourceManifest *const this,
        const char *pResourceName)
{
  bool result; // al
  unsigned __int16 v4[8]; // [rsp+0h] [rbp-230h] BYREF
  char pFixedName[520]; // [rsp+10h] [rbp-220h] BYREF
  unsigned __int64 v6; // [rsp+218h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  result = FixupResourceName(pResourceName, pFixedName, 512);
  if ( result )
  {
    CUtlSymbolTable::Find(v4, &this->m_resources.m_SymbolTable, pFixedName);
    return v4[0] != 0xFFFF;
  }
  return result;
}


// CCompressedResourceManifest::Spew  (line 283, @0x0000000003115190, libserver.so)  // inlines: GetNumStrings, GetResource, GetResourceCount, String
// calls: CUtlSymbolTable::String, Msg
// strings: "%s%i:'%s'\n"
void __fastcall CCompressedResourceManifest::Spew(
        const CCompressedResourceManifest *const this,
        const char *pPrefix,
        int nStartIndex)
{
  int m_NumElements; // eax
  int v6; // ebx
  char *v7; // rax
  CUtlSymbol id; // [rsp+0h] [rbp-40h] BYREF

  m_NumElements = this->m_resources.m_SymbolTable.m_Lookup.m_NumElements;
  if ( nStartIndex < m_NumElements )
  {
    v6 = 0;
    if ( nStartIndex >= 0 )
      v6 = nStartIndex;
  }
  else
  {
    v6 = m_NumElements - 1;
  }
  if ( v6 < m_NumElements )
  {
    do
    {
      id.m_Id = v6;
      v7 = CUtlSymbolTable::String(&this->m_resources.m_SymbolTable, &id.m_Id);
      Msg("%s%i:'%s'\n", pPrefix, v6++, v7);
    }
    while ( v6 < this->m_resources.m_SymbolTable.m_Lookup.m_NumElements );
  }
}


