
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_resourcefile.cpp  (line 0, @0x0000000001a6eda0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_resourcefile_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// ComputeStructureNameHash  (line 21, @0x00000000032674e0, libserver.so)  // inlines: ComputeClassNameHash, V_strlen
// calls: strlen, MurmurHash2
ResourceStructureId_t __fastcall ComputeStructureNameHash(const char *pStructName)
{
  int v2; // eax

  if ( pStructName == 0 || *pStructName == 0 )
    return 0;
  v2 = strlen(pStructName);
  return MurmurHash2(pStructName, v2, 0xBAADFEED);
}


// Resource_IsBlockDefined  (line 29, @0x0000000003267520, libserver.so)  // inlines: GetPtr, GetRawPtr, ResolveOffset, operator[]
bool __fastcall Resource_IsBlockDefined(const ResourceFileHeader_t *pHeader, ResourceBlockId_t id)
{
  bool result; // al
  signed int m_nCount; // ecx
  int32 m_nOffset; // eax
  char *v5; // rdi
  char *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx

  result = 0;
  if ( pHeader != 0 && pHeader->m_nHeaderVersion == 12 )
  {
    m_nCount = pHeader->m_ResourceBlocks.m_nCount;
    if ( m_nCount > 0 )
    {
      m_nOffset = pHeader->m_ResourceBlocks.m_nOffset;
      v5 = &pHeader->m_ResourceBlocks + m_nOffset;
      v6 = 0;
      if ( m_nOffset != 0 )
        v6 = v5;
      v7 = 0;
      v8 = 4 * (3LL * (m_nCount - 1) + 3);
      do
      {
        if ( *&v6[v7] == id )
          return 1;
        v7 += 12;
      }
      while ( v7 != v8 );
      return 0;
    }
  }
  return result;
}


// BufferContainsAllDesiredBlocks  (line 50, @0x0000000003267640, libserver.so)  // inlines: GetHeaderSize, GetPtr, GetRawPtr, ResolveOffset
// calls: Resource_GetBlockEntry
// callers: LoadAndValidateResourceHeader
bool __fastcall BufferContainsAllDesiredBlocks(
        const ResourceFileHeader_t *pHeader,
        uint32 nBufferSize,
        ResourceBlockId_t *pRequiredBlocks,
        int nNumRequiredBlocks,
        uint32 *pOutReadSizeSuggestion)
{
  __int64 m_nOffset; // rax
  bool result; // al
  ResourceBlockId_t *v9; // r14
  uint32 v10; // r15d
  ResourceBlockId_t *v11; // rbx
  const ResourceBlockEntry_t *BlockEntry; // rax
  int32 v13; // edx
  int v14; // edx
  unsigned int v15; // eax
  uint32 v16; // eax

  if ( nBufferSize <= 0xF )
  {
    *pOutReadSizeSuggestion = 16;
    return 0;
  }
  else
  {
    m_nOffset = pHeader->m_ResourceBlocks.m_nOffset;
    if ( m_nOffset == 0
      || (pHeader + m_nOffset) == -8LL
      || (v16 = m_nOffset + 8 + 12 * (pHeader->m_ResourceBlocks.m_nCount + 1), nBufferSize >= v16) )
    {
      result = 1;
      if ( nNumRequiredBlocks > 0 )
      {
        v9 = pRequiredBlocks;
        v10 = 0;
        v11 = &pRequiredBlocks[nNumRequiredBlocks - 1 + 1];
        do
        {
          BlockEntry = Resource_GetBlockEntry(pHeader, *v9);
          if ( BlockEntry != 0 )
          {
            v13 = BlockEntry->m_pBlockData.m_nOffset;
            if ( v13 != 0 )
              v14 = BlockEntry + 4 + v13;
            else
              v14 = 0;
            v15 = v14 + BlockEntry->m_nBlockSize - pHeader;
            if ( v10 < v15 )
              v10 = v15;
          }
          ++v9;
        }
        while ( v9 != v11 );
        result = 1;
        if ( nBufferSize < v10 )
        {
          *pOutReadSizeSuggestion = v10;
          return 0;
        }
      }
    }
    else
    {
      *pOutReadSizeSuggestion = v16;
      return 0;
    }
  }
  return result;
}


// LoadAndValidateResourceHeader  (line 95, @0x0000000003267760, libserver.so)  // inlines: Purge
// calls: BufferContainsAllDesiredBlocks, Warning
// strings: "WARNING: LoadAndValidateResourceHeader - FileSystem not initialized!\n"
bool __fastcall LoadAndValidateResourceHeader(
        const char *pResourceFileName,
        CUtlBuffer *const outputBuffer,
        ResourceBlockId_t *pRequiredBlocks,
        int nNumRequiredBlocks)
{
  uint32 i; // ebx
  bool result; // al
  uint32 m_nMaxPut; // r15d
  bool v9; // zf
  uint32 nReadHeaderSize[13]; // [rsp+2Ch] [rbp-34h] BYREF

  if ( g_pFullFileSystem != 0 )
  {
    nReadHeaderSize[0] = 25600;
    for ( i = 0; ; i = m_nMaxPut )
    {
      v9 = (outputBuffer->m_Memory.m_nGrowSize & 0xC0000000) == 0;
      outputBuffer->m_Get = 0;
      outputBuffer->m_Put = 0;
      outputBuffer->m_nOffset = 0;
      outputBuffer->m_nMaxPut = 0;
      outputBuffer->m_Error = 0;
      if ( v9 )
      {
        if ( outputBuffer->m_Memory.m_pMemory != 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          outputBuffer->m_Memory.m_pMemory = 0;
        }
        outputBuffer->m_Memory.m_nAllocationCount = 0;
      }
      result = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 14))(
                 &g_pFullFileSystem->IBaseFileSystem,
                 pResourceFileName,
                 0,
                 outputBuffer,
                 nReadHeaderSize[0],
                 0,
                 0);
      if ( !result )
        break;
      m_nMaxPut = outputBuffer->m_nMaxPut;
      if ( i >= m_nMaxPut || *(outputBuffer->m_Memory.m_pMemory + 2) != 12 )
        return 0;
      result = BufferContainsAllDesiredBlocks(
                 outputBuffer->m_Memory.m_pMemory,
                 m_nMaxPut,
                 pRequiredBlocks,
                 nNumRequiredBlocks,
                 nReadHeaderSize);
      if ( result )
        return result;
    }
  }
  else
  {
    Warning("WARNING: LoadAndValidateResourceHeader - FileSystem not initialized!\n", outputBuffer);
    return 0;
  }
  return result;
}


// Resource_GetBlock  (line 142, @0x0000000003267590, libserver.so)  // inlines: Count, GetPtr, GetRawPtr, ResolveOffset, operator void const*, operator[]
// callers: GetVsSignatureFromResourceHeader, CIntrospectedResourceDataHandler::InitNoFixup, CResourceReferenceFixupTraversal::RegisterRefs
const void *__fastcall Resource_GetBlock(const ResourceFileHeader_t *pHeader, ResourceBlockId_t id)
{
  const void *result; // rax
  signed int m_nCount; // ecx
  int32 m_nOffset; // edx
  char *v5; // rdi
  int v6; // edx
  int v7; // edx

  result = 0;
  if ( pHeader != 0 && pHeader->m_nHeaderVersion == 12 )
  {
    m_nCount = pHeader->m_ResourceBlocks.m_nCount;
    if ( m_nCount > 0 )
    {
      m_nOffset = pHeader->m_ResourceBlocks.m_nOffset;
      v5 = &pHeader->m_ResourceBlocks + m_nOffset;
      if ( m_nOffset != 0 )
        result = v5;
      v6 = 0;
      while ( *result != id )
      {
        ++v6;
        result = result + 12;
        if ( v6 == m_nCount )
          return 0;
      }
      v7 = *(result + 1);
      if ( v7 != 0 )
        return result + v7 + 4;
      return 0;
    }
  }
  return result;
}


// Resource_GetBlockEntry  (line 163, @0x00000000032675f0, libserver.so)  // inlines: Count, GetPtr, GetRawPtr, ResolveOffset, operator[]
// callers: BufferContainsAllDesiredBlocks, CIntrospectedResourceDataHandler::InitNoFixup
const ResourceBlockEntry_t *__fastcall Resource_GetBlockEntry(
        const ResourceFileHeader_t *pHeader,
        ResourceBlockId_t id)
{
  const ResourceBlockEntry_t *result; // rax
  signed int m_nCount; // ecx
  int32 m_nOffset; // edx
  const ResourceBlockEntry_t *v5; // rdi
  int v6; // edx

  result = 0;
  if ( pHeader != 0 && pHeader->m_nHeaderVersion == 12 )
  {
    m_nCount = pHeader->m_ResourceBlocks.m_nCount;
    if ( m_nCount > 0 )
    {
      m_nOffset = pHeader->m_ResourceBlocks.m_nOffset;
      v5 = (&pHeader->m_ResourceBlocks + m_nOffset);
      if ( m_nOffset != 0 )
        result = v5;
      v6 = 0;
      while ( result->m_nBlockType != id )
      {
        ++v6;
        ++result;
        if ( v6 == m_nCount )
          return 0;
      }
    }
  }
  return result;
}


// GenerateCodeBasedManifestName  (line 184, @0x00000000032678b0, libserver.so)  // inlines: V_SetExtension<int>, V_strncpy<int>
// calls: _V_strncpy, _V_SetExtension, Warning
// strings: "GenerateCodeBasedManifestName: Invalid CodeBasedManifestType_t %d\n"
void __fastcall GenerateCodeBasedManifestName(
        char *pManifestNameOut,
        int nSizeManifestName,
        const char *pManifestNameIn,
        CodeBasedManifestType_t nType)
{
  char *v7; // rsi
  __int64 v8; // rdx

  _V_strncpy(pManifestNameOut, pManifestNameIn, nSizeManifestName);
  if ( nType == CodeBasedManifestType_t::CODE_BASED_MANIFEST_TYPE_NAME )
  {
    v7 = "vrnmd";
    v8 = nSizeManifestName;
    goto LABEL_4;
  }
  if ( nType == CodeBasedManifestType_t::CODE_BASED_MANIFEST_TYPE_GROUP )
  {
    v7 = "vrgrp";
    v8 = nSizeManifestName;
LABEL_4:
    _V_SetExtension(pManifestNameOut, v7, v8);
    return;
  }
  Warning("GenerateCodeBasedManifestName: Invalid CodeBasedManifestType_t %d\n", nType);
}


// FindDiskDataClassForResourceType  (line 205, @0x0000000003267930, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CValueSearchTester_ClassIntrospectionHandle_t, FindBindingsMatching, Purge, RemoveAll, ResourceTypeToExt, ResourceTypeToExt<9ul>, SchemaFindBindingsMatching, SchemaTypeScope, V_memset, memset, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: GetNameOfModule, Warning, CUtlMemory<const CSchemaClassInfo*, int>::Purge, CUtlVectorBase<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: GetMeshMaterialInfo
// strings: "[Disk class %d/%d] Name = '%s'; Project = '%s'; Binary = '%s'\n", "WARNING: Multiple classes registered as disk data for resource type %lld '%s'. (Should on, "WARNING: Could not find schema data for helper class for resource type %lld '%s'. (Missin
ClassIntrospectionHandle_t __fastcall FindDiskDataClassForResourceType(ResourceType_t nResourceType)
{
  __int64 (__fastcall *v2)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v4; // rax
  int m_Size; // ecx
  __int64 v6; // rbx
  int v7; // r12d
  const char *v8; // r13
  const char *v9; // rax
  const CSchemaClassInfo *v10; // rbx
  CUtlVector<const CSchemaClassInfo*,CUtlMemory<const CSchemaClassInfo*,int> > diskClass; // [rsp+0h] [rbp-90h] BYREF
  _QWORD v13[2]; // [rsp+20h] [rbp-70h] BYREF
  int v14; // [rsp+30h] [rbp-60h]
  __int64 v15; // [rsp+38h] [rbp-58h]
  char pResourceExt[24]; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-38h]

  diskClass.m_Memory.m_nAllocationCount = 0;
  v17 = __readfsqword(0x28u);
  v13[0] = &off_47D0E10;
  diskClass.m_Size = 0;
  diskClass.m_Memory.m_pMemory = 0;
  diskClass.m_Memory.m_nGrowSize = 0;
  v14 = 0;
  v15 = 0;
  v13[1] = nResourceType;
  v2 = *(*g_pSchemaSystem + 104LL);
  NameOfModule = GetNameOfModule();
  v4 = v2(g_pSchemaSystem, NameOfModule);
  (*(*v4 + 216LL))(v4, &diskClass, v13);
  m_Size = diskClass.m_Size;
  if ( diskClass.m_Size != 0 )
  {
    if ( diskClass.m_Size == 1 )
    {
      v10 = *diskClass.m_Memory.m_pMemory;
      goto LABEL_8;
    }
    pResourceExt[8] = 0;
    *pResourceExt = nResourceType;
    if ( diskClass.m_Size > 0 )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = (*(diskClass.m_Memory.m_pMemory[v6]->m_pBinding->_vptr_ISchemaBinding + 3))(diskClass.m_Memory.m_pMemory[v6]->m_pBinding);
        v9 = (*(diskClass.m_Memory.m_pMemory[v6]->m_pBinding->_vptr_ISchemaBinding + 4))(diskClass.m_Memory.m_pMemory[v6]->m_pBinding);
        Warning(
          "[Disk class %d/%d] Name = '%s'; Project = '%s'; Binary = '%s'\n",
          v7,
          diskClass.m_Size,
          diskClass.m_Memory.m_pMemory[v6]->m_Name.m_pImplChars,
          v9,
          v8);
        m_Size = diskClass.m_Size;
        ++v7;
        ++v6;
      }
      while ( diskClass.m_Size > v7 );
    }
    Warning(
      "WARNING: Multiple classes registered as disk data for resource type %lld '%s'. (Should only have one class MDiskDa"
      "taForResourceType - %d listed above.)\n",
      nResourceType,
      pResourceExt,
      m_Size);
  }
  else
  {
    pResourceExt[8] = 0;
    *pResourceExt = nResourceType;
    Warning(
      "WARNING: Could not find schema data for helper class for resource type %lld '%s'. (Missing MDiskDataForResourceTyp"
      "e metadata or schema data isn't loaded?)\n",
      nResourceType,
      pResourceExt);
  }
  v10 = 0;
LABEL_8:
  diskClass.m_Size = 0;
  if ( (diskClass.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CSchemaClassInfo const*,int>::Purge(&diskClass.m_Memory);
    if ( (diskClass.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSchemaClassInfo const*,int>::Purge(&diskClass.m_Memory);
  }
  return v10;
}


// FindResourceBindingByBlockType  (line 238, @0x0000000003267b20, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CValueSearchTester_ClassIntrospectionHandle_t, FindBindingsMatching, Purge, RemoveAll, SchemaFindBindingsMatching, SchemaTypeScope, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: GetNameOfModule, CUtlMemory<const CSchemaClassInfo*, int>::Purge, __stack_chk_fail, CUtlVectorBase<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> >::~CUtlVectorBase, _Unwind_Resume
ClassIntrospectionHandle_t __fastcall FindResourceBindingByBlockType(ResourceBlockId_t nBlockType)
{
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r13
  const char *NameOfModule; // rax
  __int64 v3; // rax
  const CSchemaClassInfo *v4; // r12
  CUtlVector<const CSchemaClassInfo*,CUtlMemory<const CSchemaClassInfo*,int> > classes; // [rsp+0h] [rbp-70h] BYREF
  _QWORD v7[2]; // [rsp+20h] [rbp-50h] BYREF
  int v8; // [rsp+30h] [rbp-40h]
  __int64 v9; // [rsp+38h] [rbp-38h]
  char pBlockString[5]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-28h]

  *pBlockString = nBlockType;
  v11 = __readfsqword(0x28u);
  v7[0] = &off_47D0E30;
  v7[1] = pBlockString;
  pBlockString[4] = 0;
  classes.m_Size = 0;
  classes.m_Memory.m_pMemory = 0;
  classes.m_Memory.m_nAllocationCount = 0;
  classes.m_Memory.m_nGrowSize = 0;
  v8 = 2;
  v9 = 0;
  v1 = *(*g_pSchemaSystem + 104LL);
  NameOfModule = GetNameOfModule();
  v3 = v1(g_pSchemaSystem, NameOfModule);
  (*(*v3 + 216LL))(v3, &classes, v7);
  v4 = 0;
  if ( classes.m_Size != 0 )
    v4 = *classes.m_Memory.m_pMemory;
  classes.m_Size = 0;
  if ( (classes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CSchemaClassInfo const*,int>::Purge(&classes.m_Memory);
    if ( (classes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSchemaClassInfo const*,int>::Purge(&classes.m_Memory);
  }
  return v4;
}


// GetResourceMapping  (line 261, @0x0000000003267c40, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CValueSearchTester_ClassIntrospectionHandle_t, Count, FindBindingsMatching, GetPtr, GetSingleInheritanceBaseClass, GetValue, MetaGetPtr, NumBasesToTraverse, Purge, RemoveAll, SchemaFindBindingsMatching, SchemaMetaGetPtr2, SchemaTypeScope, _V_strcmp, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: GetNameOfModule, CUtlMemory<const CSchemaClassInfo*, int>::Purge, CSchemaClassInfo::MetaGetPtr, CUtlVectorBase<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "MDiskDataForResourceType"
void __fastcall GetResourceMapping(
        const char *pDmeElementType,
        ResourceType_t *pOutResourceType,
        ClassIntrospectionHandle_t *pOutClass)
{
  __int64 (__fastcall *v5)(ISchemaSystem *, const char *); // r14
  const char *NameOfModule; // rax
  __int64 v7; // rax
  const CSchemaClassInfo *v8; // r12
  unsigned int v9; // eax
  char *m_pImplElements; // rdx
  __int64 v11; // r10
  ResourceType_t *v12; // rax
  ResourceType_t v13; // rax
  int m_nImplLength; // r15d
  unsigned int v15; // eax
  __int64 v16; // r10
  unsigned int v17; // eax
  char *v18; // rdx
  const CSchemaClassInfo *const *v19; // rbx
  __int64 v20; // r13
  ResourceType_t *Ptr; // rax
  __int64 (__fastcall *v22)(ISchemaSystem *, const char *); // r14
  const char *v23; // rax
  __int64 v24; // rax
  CUtlVector<const CSchemaClassInfo*,CUtlMemory<const CSchemaClassInfo*,int> > matchingClasses; // [rsp+10h] [rbp-70h] BYREF
  _QWORD v27[2]; // [rsp+30h] [rbp-50h] BYREF
  int v28; // [rsp+40h] [rbp-40h]
  __int64 v29; // [rsp+48h] [rbp-38h]

  *pOutResourceType = 0;
  *pOutClass = 0;
  v27[0] = &off_47D0DF0;
  matchingClasses.m_Size = 0;
  matchingClasses.m_Memory.m_pMemory = 0;
  matchingClasses.m_Memory.m_nAllocationCount = 0;
  matchingClasses.m_Memory.m_nGrowSize = 0;
  v28 = 2;
  v29 = 0;
  v27[1] = pDmeElementType;
  v5 = *(*g_pSchemaSystem + 104LL);
  NameOfModule = GetNameOfModule();
  v7 = v5(g_pSchemaSystem, NameOfModule);
  (*(*v7 + 216LL))(v7, &matchingClasses, v27);
  if ( matchingClasses.m_Size != 0 )
  {
    v8 = *matchingClasses.m_Memory.m_pMemory;
  }
  else
  {
    v22 = *(*g_pSchemaSystem + 104LL);
    v23 = GetNameOfModule();
    v24 = v22(g_pSchemaSystem, v23);
    v8 = (*(*v24 + 16LL))(v24, pDmeElementType);
  }
  if ( v8 == 0 )
  {
LABEL_30:
    matchingClasses.m_Size = 0;
    if ( (matchingClasses.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CSchemaClassInfo const*,int>::Purge(&matchingClasses.m_Memory);
      if ( (matchingClasses.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        goto LABEL_23;
    }
    return;
  }
  *pOutClass = v8;
  do
  {
    v9 = abs32(v8->m_Metadata.m_StaticEntries.m_Data.m_nImplLength);
    if ( v9 != 0 )
    {
      m_pImplElements = v8->m_Metadata.m_StaticEntries.m_Data.m_pImplElements;
      v11 = &m_pImplElements[32 * v9];
      while ( strcmp(*m_pImplElements, "MDiskDataForResourceType") != 0 )
      {
        m_pImplElements += 32;
        if ( m_pImplElements == v11 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      v15 = abs32(v8->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength);
      if ( v15 == 0 )
        goto LABEL_24;
      m_pImplElements = v8->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
      v16 = &m_pImplElements[32 * v15];
      while ( strcmp(*m_pImplElements, "MDiskDataForResourceType") != 0 )
      {
        m_pImplElements += 32;
        if ( m_pImplElements == v16 )
          goto LABEL_24;
      }
    }
    v12 = *(m_pImplElements + 3);
    if ( v12 != 0 )
    {
      v13 = *v12;
      if ( v13 != 0 )
        goto LABEL_29;
LABEL_11:
      m_nImplLength = v8->m_BaseClasses.m_Data.m_nImplLength;
      goto LABEL_12;
    }
LABEL_24:
    m_nImplLength = v8->m_BaseClasses.m_Data.m_nImplLength;
    v17 = abs32(m_nImplLength);
    if ( v17 != 0 )
    {
      v18 = v8->m_BaseClasses.m_Data.m_pImplElements;
      v19 = (v18 + 8);
      v20 = &v18[16 * v17 + 8];
      while ( 1 )
      {
        Ptr = CSchemaClassInfo::MetaGetPtr(
                *v19,
                "MDiskDataForResourceType",
                SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL,
                0);
        if ( Ptr != 0 )
          break;
        v19 += 2;
        if ( v19 == v20 )
          goto LABEL_12;
      }
      v13 = *Ptr;
      if ( v13 != 0 )
      {
LABEL_29:
        *pOutResourceType = v13;
        goto LABEL_30;
      }
      goto LABEL_11;
    }
LABEL_12:
    if ( m_nImplLength == 0 )
    {
      matchingClasses.m_Size = 0;
      if ( (matchingClasses.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        return;
      goto LABEL_22;
    }
    v8 = *(v8->m_BaseClasses.m_Data.m_pImplElements + 1);
  }
  while ( v8 != 0 );
  matchingClasses.m_Size = 0;
  if ( (matchingClasses.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return;
LABEL_22:
  CUtlMemory<CSchemaClassInfo const*,int>::Purge(&matchingClasses.m_Memory);
  if ( (matchingClasses.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return;
LABEL_23:
  CUtlMemory<CSchemaClassInfo const*,int>::Purge(&matchingClasses.m_Memory);
}


