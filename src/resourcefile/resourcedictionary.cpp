
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_resourcedictionary.cpp  (line 0, @0x0000000001a6a990, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_resourcedictionary_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// IsSource1ResourceFileName  (line 20, @0x0000000003115f60, libserver.so)
// calls: V_GetFileExtension, V_stricmp_fast
// callers: GenerateResourceNameFromFileName
bool __fastcall IsSource1ResourceFileName(const char *pFileName)
{
  __int64 FileExtension; // rax
  bool v3; // dl

  FileExtension = V_GetFileExtension(pFileName);
  if ( *pFileName == 42 )
    return 1;
  v3 = 0;
  if ( FileExtension != 0 )
    return V_stricmp_fast(FileExtension, "mdl") == 0;
  return v3;
}


// GenerateContentRelativePathFromFullPath  (line 27, @0x0000000003115fb0, libserver.so)
// calls: SplitFullPath
// strings: "CONTENTROOT"
bool __fastcall GenerateContentRelativePathFromFullPath(const char *pFullPath, char *pRelativePathOut)
{
  return SplitFullPath(pFullPath, "CONTENTROOT", 0, 0, pRelativePathOut, 512);
}


// GenerateResourceNameFromFileName  (line 37, @0x0000000003115fd0, libserver.so)  // inlines: CharsToResourceType, DeduceResourceTypeFromResourceName, V_FixupPathName<int>, V_FixupPathName<long unsigned int>, V_memcpy, V_memset, V_strlen, V_strncpy<int>, memcpy, memset
// calls: V_GetFileExtension, strlen, memcpy, V_strlower_fast, V_IsAbsolutePath, _V_FixupPathName, V_FixSlashes, IsSource1ResourceFileName, Warning, __memcpy_chk, V_UnqualifiedFileName, _V_strncpy (14 total)
// callers: ConvertTextDataToNewKeyValues, GenerateResourceNameFromFileName
// strings: "GenerateResourceNameFromFileName: Invalid extension specified in file name \"%s\"!\n", "ERROR: Specified full path %s does not lie under the mod search path!)\n", "CONTENTROOT", "ERROR: Specified path %s could not be made content-relative\n"
void __fastcall GenerateResourceNameFromFileName(const char *pFileName, char *pResourceName, int nBufLen)
{
  const char *FileExtension; // rsi
  int v7; // eax
  char *v8; // rsi
  int v9; // r14d
  int v10; // r8d
  int v11; // r9d
  char *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  char *v15; // rdx
  __int64 v16; // rsi
  int v17; // ecx
  __int64 v18; // rax
  const char *v19; // rdx
  const char *v20; // rax
  int v21; // eax
  char v22; // al
  char *v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  char *pExtb; // [rsp+8h] [rbp-448h]
  int pExtc; // [rsp+8h] [rbp-448h]
  int pExtd; // [rsp+8h] [rbp-448h]
  char *pExt; // [rsp+8h] [rbp-448h]
  char *pExta; // [rsp+8h] [rbp-448h]
  char *pExte; // [rsp+8h] [rbp-448h]
  char pFixedFullPath[512]; // [rsp+10h] [rbp-440h] BYREF
  char pRelativePath[520]; // [rsp+210h] [rbp-240h] BYREF
  unsigned __int64 v34; // [rsp+418h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  if ( pFileName == 0 || *pFileName == 0 )
  {
LABEL_3:
    *pResourceName = 0;
    return;
  }
  FileExtension = V_GetFileExtension(pFileName);
  if ( FileExtension == 0 )
  {
LABEL_21:
    if ( !IsSource1ResourceFileName(pFileName) )
      Warning("GenerateResourceNameFromFileName: Invalid extension specified in file name \"%s\"!\n", pFileName);
    goto LABEL_3;
  }
  pExtb = FileExtension;
  memset(pRelativePath, 0, 0x200u);
  v7 = strlen(FileExtension);
  v8 = pExtb;
  v9 = v7;
  if ( v7 <= 509 )
  {
    if ( v7 + 1 < 0 )
      __debugbreak();
    pExtd = v7;
    __memcpy_chk(pRelativePath, v8, v7 + 1, 512);
    V_strlower_fast(pRelativePath);
    v10 = pExtd;
    if ( pExtd <= 0 )
    {
LABEL_13:
      v13 = pRelativePath[0];
      goto LABEL_14;
    }
  }
  else
  {
    pExtc = v7;
    memcpy(pRelativePath, v8, 0x1FFu);
    V_strlower_fast(pRelativePath);
    v10 = pExtc;
  }
  v11 = 0;
  v12 = &pRelativePath[1];
  if ( pRelativePath[0] == 95 )
  {
    v11 = 0;
    do
    {
LABEL_12:
      v14 = v11++;
      pRelativePath[v14] = 0;
    }
    while ( v9 > v11 );
    goto LABEL_13;
  }
  while ( ++v11 != v10 )
  {
    if ( *v12++ == 95 )
      goto LABEL_12;
  }
  v13 = pRelativePath[0];
LABEL_14:
  if ( v13 == 0 )
    goto LABEL_21;
  v15 = pRelativePath;
  v16 = 0;
  v17 = 0;
  do
  {
    v18 = v13 << v17;
    ++v15;
    v17 += 8;
    v16 |= v18;
    v13 = *v15;
  }
  while ( v13 != 0 );
  if ( v16 == 0 )
    goto LABEL_21;
  if ( V_IsAbsolutePath(pFileName) == 0 )
  {
    v19 = pFileName;
LABEL_20:
    _V_FixupPathName(pResourceName, nBufLen, v19, 1);
    V_FixSlashes(pResourceName, 47);
    return;
  }
  _V_FixupPathName(pFixedFullPath, 512, pFileName, 1);
  v20 = V_GetFileExtension(pFixedFullPath);
  if ( v20 == 0 || (pExt = v20, (v21 = strlen(v20)) <= 2) || pExt[v21 - 1] != 99 || pExt[v21 - 2] != 95 )
  {
    if ( !SplitFullPath(pFixedFullPath, "CONTENTROOT", 0, 0, pRelativePath, 512) )
    {
      Warning("ERROR: Specified path %s could not be made content-relative\n", pFixedFullPath);
      v25 = V_UnqualifiedFileName(pFileName);
      _V_strncpy(pRelativePath, v25, nBufLen);
    }
    v19 = pRelativePath;
    goto LABEL_20;
  }
  pExta = v21;
  v22 = (*(g_pFullFileSystem->_vptr_IAppSystem + 44))(g_pFullFileSystem, pFixedFullPath, "GAME", pRelativePath, 512);
  v23 = pExta;
  if ( v22 == 0 )
  {
    Warning("ERROR: Specified full path %s does not lie under the mod search path!)\n", pFileName);
    v24 = V_UnqualifiedFileName(pFileName);
    _V_strncpy(pRelativePath, v24, nBufLen);
    v23 = pExta;
  }
  pExte = v23;
  _V_FixupPathName(pResourceName, nBufLen, pRelativePath, 1);
  V_FixSlashes(pResourceName, 47);
  pExte[V_GetFileExtension(pResourceName) - 2] = 0;
}


// GenerateResourceNameFromFileName  (line 117, @0x0000000003116540, libserver.so)
// calls: SetResourceFileNameExtension, GenerateResourceNameFromFileName, __stack_chk_fail
void __fastcall GenerateResourceNameFromFileName(
        const char *pFileName,
        ResourceType_t nType,
        char *pResourceName,
        int nBufLen)
{
  char pFixedFileName[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v7; // [rsp+208h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  SetResourceFileNameExtension(pFileName, nType, pFixedFileName, 512);
  GenerateResourceNameFromFileName(pFixedFileName, pResourceName, nBufLen);
}


// HasGameResourceFileExtensionSuffix  (line 128, @0x0000000003116330, libserver.so)  // inlines: V_strlen
// calls: V_GetFileExtension, strlen
// callers: AppendGameResourceFileExtensionSuffix
bool __fastcall HasGameResourceFileExtensionSuffix(const char *pFileName)
{
  const char *FileExtension; // rax
  const char *v2; // rbx
  int v3; // eax
  bool result; // al

  FileExtension = V_GetFileExtension(pFileName);
  v2 = FileExtension;
  result = 1;
  if ( FileExtension != 0 )
  {
    v3 = strlen(FileExtension);
    if ( v3 <= 2 || v2[v3 - 1] != 99 || v2[v3 - 2] != 95 )
      return 0;
  }
  return result;
}


// AppendGameResourceFileExtensionSuffix  (line 146, @0x0000000003116380, libserver.so)
// calls: HasGameResourceFileExtensionSuffix, V_snprintf
// callers: GenerateStandardRelativePathForResourceName
// strings: "%s_c"
const char *__fastcall AppendGameResourceFileExtensionSuffix(const char *pFileName, char *pScratchBuf, int nBufLen)
{
  bool v6; // al
  const char *v7; // rcx

  v6 = HasGameResourceFileExtensionSuffix(pFileName);
  v7 = pFileName;
  if ( !v6 )
  {
    V_snprintf(pScratchBuf, nBufLen, "%s_c", pFileName);
    return pScratchBuf;
  }
  return v7;
}


// GenerateStandardRelativePathForResourceName  (line 158, @0x00000000031163d0, libserver.so)  // inlines: V_strncpy<int>
// calls: _V_strncpy, AppendGameResourceFileExtensionSuffix
// callers: GenerateStandardFullPathForResourceName
void __fastcall GenerateStandardRelativePathForResourceName(
        const char *pResourceName,
        ResourcePathGenerationType_t type,
        char *pOutResultBuf,
        int nBufLen)
{
  if ( type == ResourcePathGenerationType_t::RESOURCE_PATH_GAME )
    AppendGameResourceFileExtensionSuffix(pResourceName, pOutResultBuf, nBufLen);
  else
    _V_strncpy(pOutResultBuf, pResourceName, nBufLen);
}


// GenerateStandardFullPathForResourceName  (line 173, @0x0000000003116400, libserver.so)
// calls: GenerateStandardRelativePathForResourceName, __stack_chk_fail
// callers: CSisterResourceBlockLoader::BlockingLoadResourceFileData, LoadSisterMaterialResourceForMesh
// strings: "CONTENT"
bool __fastcall GenerateStandardFullPathForResourceName(
        const char *pResourceName,
        ResourcePathGenerationType_t type,
        char *pFullPath,
        int nBufLen)
{
  char *v7; // rax
  __int64 v8; // rax
  bool v9; // dl
  char pRelativePathBuf[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v12; // [rsp+218h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  GenerateStandardRelativePathForResourceName(pResourceName, type, pRelativePathBuf, 512);
  v7 = "CONTENT";
  if ( type == ResourcePathGenerationType_t::RESOURCE_PATH_GAME )
    v7 = "GAME";
  v8 = (*(g_pFullFileSystem->_vptr_IAppSystem + 23))(g_pFullFileSystem, pRelativePathBuf, v7, pFullPath, nBufLen, 0, 0);
  v9 = 1;
  if ( v8 == 0 )
  {
    *pFullPath = 0;
    return 0;
  }
  return v9;
}


// SetResourceFileNameExtension  (line 199, @0x00000000031164c0, libserver.so)  // inlines: ResourceTypeToExt, ResourceTypeToExt<9ul>, V_FixupPathName<int>, V_SetExtension<int>, V_memset, memset
// calls: _V_FixupPathName, V_FixSlashes, _V_SetExtension, __stack_chk_fail
// callers: GenerateResourceNameFromFileName, FixupResourceName
void __fastcall SetResourceFileNameExtension(
        const char *pFileName,
        ResourceType_t nType,
        char *pOutFileName,
        int nBufLen)
{
  char pExt[9]; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-28h]

  *pExt = nType;
  pExt[8] = 0;
  v7 = __readfsqword(0x28u);
  _V_FixupPathName(pOutFileName, nBufLen, pFileName, 1);
  V_FixSlashes(pOutFileName, 47);
  _V_SetExtension(pOutFileName, pExt, nBufLen);
}


// FixupResourceName  (line 214, @0x00000000031165b0, libserver.so)  // inlines: ResourceTypeToExt, ResourceTypeToExt<9ul>, V_FixupPathName<int>, V_memset, memset
// calls: V_GetFileExtension, V_stricmp_fast, _V_FixupPathName, V_FixSlashes, Warning, SetResourceFileNameExtension, __stack_chk_fail
// callers: FixupResourceName
// strings: "ERROR: Resource name \"%s\" has the incorrect extension \"%s\" for the specified resource
bool __fastcall FixupResourceName(const char *pResourceName, ResourceType_t nType, char *pOutResourceName, int nBufLen)
{
  const char *v7; // rbx
  __int64 FileExtension; // rax
  const char *v10; // rax
  const char *v11; // rdi
  char pExt[16]; // [rsp+0h] [rbp-250h] BYREF
  char pActualResourceNameBuf[520]; // [rsp+10h] [rbp-240h] BYREF
  unsigned __int64 v14; // [rsp+218h] [rbp-38h]

  v7 = pResourceName;
  pExt[8] = 0;
  v14 = __readfsqword(0x28u);
  *pExt = nType;
  FileExtension = V_GetFileExtension(pResourceName);
  if ( FileExtension == 0 )
  {
    v11 = v7;
    v7 = pActualResourceNameBuf;
    SetResourceFileNameExtension(v11, nType, pActualResourceNameBuf, 512);
  }
  else if ( V_stricmp_fast(pExt, FileExtension) != 0 )
  {
    v10 = V_GetFileExtension(v7);
    Warning(
      "ERROR: Resource name \"%s\" has the incorrect extension \"%s\" for the specified resource type (expected \"%s\")!\n",
      v7,
      v10,
      pExt);
    *pOutResourceName = 0;
    return 0;
  }
  _V_FixupPathName(pOutResourceName, nBufLen, v7, 1);
  V_FixSlashes(pOutResourceName, 47);
  return 1;
}


// FixupResourceName  (line 214, @0x00000000031166c0, libserver.so)
// calls: V_IsAbsolutePath, FixupResourceName, Warning
// callers: FixupResourceName, ComputeResourceIdFromResourceName, GetMeshMaterialInfo
// strings: "FixupResourceName: Illegal full path passed in (\"%s\")!\n"
bool __fastcall FixupResourceName(const char *pResourceName, ResourceType_t nType, char *pOutResourceName, int nBufLen)
{
  if ( pResourceName != 0 && *pResourceName != 0 )
  {
    if ( V_IsAbsolutePath(pResourceName) != 0 )
    {
      Warning("FixupResourceName: Illegal full path passed in (\"%s\")!\n", pResourceName);
      *pOutResourceName = 0;
      return 0;
    }
    else
    {
      return FixupResourceName(pResourceName, nType, pOutResourceName, nBufLen);
    }
  }
  else
  {
    *pOutResourceName = 0;
    return 1;
  }
}


// FixupResourceName  (line 252, @0x0000000003116750, libserver.so)
// calls: FixupResourceName, CUtlString::operator=, __stack_chk_fail
bool __fastcall FixupResourceName(const char *pResourceName, ResourceType_t nType, CUtlString *pOutName)
{
  bool v4; // r12
  char pFixedResourceName[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v7; // [rsp+208h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  v4 = FixupResourceName(pResourceName, nType, pFixedResourceName, 512);
  CUtlString::operator=(pOutName, pFixedResourceName);
  return v4;
}


// FixupResourceName  (line 260, @0x00000000031167c0, libserver.so)  // inlines: V_FixupPathName<int>
// calls: V_IsAbsolutePath, V_GetFileExtension, _V_FixupPathName, V_FixSlashes, Warning
// callers: PropBreakablePrecacheAll, CCompressedResourceManifest::FindResourceIndex, CCompressedResourceManifest::HasResource, CCompressedResourceManifest::Unserialize, CCompressedResourceManifest::AddResource, ComputeResourceIdFromResourceName
// strings: "FixupResourceName: Illegal full path passed in (\"%s\")!\n", "FixupResourceName: Illegal path, missing extension passed in (\"%s\")!\n"
bool __fastcall FixupResourceName(const char *pResourceName, char *pOutResourceName, int nBufLen)
{
  char IsAbsolutePath; // r12

  if ( pResourceName == 0 || *pResourceName == 0 )
  {
    *pOutResourceName = 0;
    return 1;
  }
  IsAbsolutePath = V_IsAbsolutePath(pResourceName);
  if ( IsAbsolutePath != 0 )
  {
    Warning("FixupResourceName: Illegal full path passed in (\"%s\")!\n", pResourceName);
    *pOutResourceName = 0;
    return 0;
  }
  else
  {
    if ( V_GetFileExtension(pResourceName) == 0 )
    {
      Warning("FixupResourceName: Illegal path, missing extension passed in (\"%s\")!\n", pResourceName);
      *pOutResourceName = 0;
      return IsAbsolutePath;
    }
    _V_FixupPathName(pOutResourceName, nBufLen, pResourceName, 1);
    V_FixSlashes(pOutResourceName, 47);
    return 1;
  }
}


// IsResourceNameValid  (line 293, @0x00000000031168a0, libserver.so)  // inlines: V_isupper
// calls: V_IsAbsolutePath
bool __fastcall IsResourceNameValid(const char *pResourceName)
{
  const char *v1; // rbx
  bool result; // al
  char v3; // dl

  v1 = pResourceName;
  if ( pResourceName == 0 || *pResourceName == 0 )
    return 1;
  result = V_IsAbsolutePath(pResourceName);
  if ( result )
    return 0;
  v3 = *v1;
  if ( *v1 == 0 )
    return 1;
  while ( (v3 - 65) > 0x19u && v3 != 92 )
  {
    v3 = *++v1;
    if ( *v1 == 0 )
      return 1;
  }
  return result;
}


// ComputeResourceIdFromResourceName  (line 316, @0x0000000003116910, libserver.so)  // inlines: V_strlen
// calls: FixupResourceName, MurmurHash64, __stack_chk_fail
ResourceId_t __fastcall ComputeResourceIdFromResourceName(ResourceType_t nType, const char *pResourceName)
{
  char pFixedResourceName[520]; // [rsp+0h] [rbp-220h] BYREF
  unsigned __int64 v4; // [rsp+208h] [rbp-18h]

  v4 = __readfsqword(0x28u);
  if ( pResourceName != 0
    && nType != 0
    && (FixupResourceName(pResourceName, nType, pFixedResourceName, 512), pFixedResourceName[0] != 0) )
  {
    return MurmurHash64(pFixedResourceName, strlen(pFixedResourceName), 0xEDABCDEF);
  }
  else
  {
    return 0;
  }
}


// ComputeResourceIdFromResourceName  (line 331, @0x00000000031169d0, libserver.so)  // inlines: V_strlen
// calls: FixupResourceName, MurmurHash64, __stack_chk_fail
// callers: WriteHandleToExtRef, GetMeshMaterialInfo
ResourceId_t __fastcall ComputeResourceIdFromResourceName(const char *pResourceName)
{
  ResourceId_t result; // rax
  char pFixedResourceName[520]; // [rsp+0h] [rbp-220h] BYREF
  unsigned __int64 v3; // [rsp+208h] [rbp-18h]

  v3 = __readfsqword(0x28u);
  result.m_Data = 0;
  if ( pResourceName != 0 )
  {
    FixupResourceName(pResourceName, pFixedResourceName, 512);
    result.m_Data = 0;
    if ( pFixedResourceName[0] != 0 )
      return MurmurHash64(pFixedResourceName, strlen(pFixedResourceName), 0xEDABCDEF);
  }
  return result;
}


