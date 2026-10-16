// Reconstructed from DWARF by pahole; not original source.

// src/tier2/fileutils.cpp:841
class CFindLocalCopyOfSourceFile_SearchPaths {
	CFindLocalCopyOfSourceFile_SearchPaths();
	~CFindLocalCopyOfSourceFile_SearchPaths();

	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_fileutils.cpp  (line 0, @0x0000000001a6ab50, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_fileutils_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// EatFirstDirectory  (line 18, @0x0000000003129e20, libserver.so)  // inlines: V_GetFirstDir<260ul>, V_strcpy_safe<260ul>, V_strcpy_safe<512ul>, V_strlen
// calls: _V_GetFirstDir, strlen, _V_strncpy, __stack_chk_fail
// callers: SplitFullPath
bool __fastcall EatFirstDirectory(char (*const pPath)[512], char (*const pFirstDirectory)[260])
{
  char FirstDir; // r12
  __int64 v6; // rsi
  char pTmp[512]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v8; // [rsp+208h] [rbp-28h]

  FirstDir = 0;
  v8 = __readfsqword(0x28u);
  if ( (*pPath)[0] != 0 )
  {
    FirstDir = _V_GetFirstDir(pFirstDirectory, 260, pPath);
    if ( FirstDir != 0 )
    {
      if ( pFirstDirectory != 0 )
        v6 = strlen(pFirstDirectory) + 1LL;
      else
        v6 = 1;
      _V_strncpy(pTmp, &(*pPath)[v6], 512);
      _V_strncpy(pPath, pTmp, 512);
    }
    else
    {
      _V_strncpy(pFirstDirectory, pPath, 260);
      FirstDir = 1;
      _V_strncpy(pPath, "", 512);
    }
  }
  return FirstDir;
}


// SplitFullPath  (line 41, @0x0000000003129f50, libserver.so)  // inlines: V_ComposeFileName<long unsigned int>, V_MakeRelativePath<long unsigned int>, V_strEndsWith, V_strlen, V_strncpy<int>, _V_strEndsWithInner<true>, _V_strcmp
// calls: V_PathContainsPath, _V_MakeRelativePath, EatFirstDirectory, _V_strncpy, V_FixSlashes, _V_ComposeFileName, __stack_chk_fail
// callers: SplitFullPath
// strings: "_addons"
bool __fastcall SplitFullPath(
        const char *pFullPath,
        const char *pRootPath,
        char *pOutMod,
        char *pOutRelativePath,
        int nBufLen)
{
  char RelativePath; // r13
  bool Directory; // r10
  char *v13; // r8
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // r8d
  bool v17; // [rsp+Ch] [rbp-474h]
  bool v18; // [rsp+10h] [rbp-470h]
  bool v19; // [rsp+10h] [rbp-470h]
  char pMod[260]; // [rsp+20h] [rbp-460h] BYREF
  char pAddon[260]; // [rsp+130h] [rbp-350h] BYREF
  char pRelativePath[512]; // [rsp+240h] [rbp-240h] BYREF
  unsigned __int64 v23; // [rsp+448h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  if ( pOutMod != 0 )
    *pOutMod = 0;
  if ( pOutRelativePath != 0 )
    *pOutRelativePath = 0;
  if ( V_PathContainsPath(pRootPath, pFullPath, 1) != 0 )
  {
    RelativePath = _V_MakeRelativePath(pFullPath, pRootPath, pRelativePath, 512);
    if ( RelativePath != 0 )
    {
      Directory = EatFirstDirectory(pRelativePath, pMod);
      v13 = pMod;
      if ( !Directory )
        return RelativePath;
      do
      {
        v14 = *v13;
        v13 += 4;
        v15 = ~v14 & (v14 - 16843009) & 0x80808080;
      }
      while ( v15 == 0 );
      if ( (~v14 & (v14 - 16843009) & 0x8080) == 0 )
      {
        LOBYTE(v15) = (~v14 & (v14 - 16843009) & 0x80808080) >> 16;
        LODWORD(v13) = v13 + 2;
      }
      v16 = v13 - (__CFADD__(v15, v15) + 3) - pMod;
      if ( v16 <= 6 || strcmp(&pMod[v16 - 7], "_addons") != 0 )
        goto LABEL_15;
      v17 = Directory;
      if ( EatFirstDirectory(pRelativePath, pAddon) )
      {
        _V_ComposeFileName(pMod, pAddon, pMod, 260);
        Directory = v17;
LABEL_15:
        if ( pOutMod != 0 )
        {
          v18 = Directory;
          _V_strncpy(pOutMod, pMod, nBufLen);
          V_FixSlashes(pOutMod, 47);
          Directory = v18;
        }
        v19 = Directory;
        if ( pOutRelativePath != 0 )
        {
          _V_strncpy(pOutRelativePath, pRelativePath, nBufLen);
          V_FixSlashes(pOutRelativePath, 47);
          return v19;
        }
        return RelativePath;
      }
    }
  }
  return 0;
}


// SplitFullPath  (line 96, @0x000000000312c6f0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Destruct<CUtlString>, Element, Purge, RemoveAll, String, V_strncpy<int>, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: GetSearchPath, CUtlString::Get, SplitFullPath, _V_strncpy, V_FixSlashes, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Purge, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CTier2AppSystemDict::GetAvailableAddonMaps_, GenerateContentRelativePathFromFullPath, GenerateResourceNameFromFileName
bool __fastcall SplitFullPath(
        const char *pFullPath,
        const char *pRootPathID,
        char *pOutRoot,
        char *pOutMod,
        char *pOutRelativePath,
        int nBufLen)
{
  int m_Size; // ebx
  __int64 v9; // rbx
  int v10; // r12d
  const char *v11; // rax
  bool v12; // r13
  const char *v13; // rax
  __int64 i; // r12
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > rootPaths; // [rsp+20h] [rbp-50h] BYREF

  if ( pOutRoot != 0 )
    *pOutRoot = 0;
  rootPaths.m_Size = 0;
  rootPaths.m_Memory.m_pMemory = 0;
  rootPaths.m_Memory.m_nAllocationCount = 0;
  rootPaths.m_Memory.m_nGrowSize = 0;
  GetSearchPath(&rootPaths, GetSearchPathTypes_t::GET_SEARCH_PATH_NO_PACK_FILES, pRootPathID);
  m_Size = rootPaths.m_Size;
  if ( rootPaths.m_Size <= 0 )
  {
    v12 = 0;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      v11 = CUtlString::Get(&rootPaths.m_Memory.m_pMemory[v9]);
      v12 = SplitFullPath(pFullPath, v11, pOutMod, pOutRelativePath, nBufLen);
      if ( v12 )
        break;
      ++v10;
      ++v9;
      if ( rootPaths.m_Size <= v10 )
      {
        m_Size = rootPaths.m_Size;
        goto LABEL_10;
      }
    }
    if ( pOutRoot != 0 )
    {
      v13 = CUtlString::Get(&rootPaths.m_Memory.m_pMemory[v9]);
      _V_strncpy(pOutRoot, v13, nBufLen);
      V_FixSlashes(pOutRoot, 47);
    }
    m_Size = rootPaths.m_Size;
  }
LABEL_10:
  for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
  {
    if ( *(&rootPaths.m_Memory.m_pMemory->m_pString + i) != 0 )
      CUtlString::FreeMemoryBlock((rootPaths.m_Memory.m_pMemory + i));
  }
  rootPaths.m_Size = 0;
  if ( (rootPaths.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&rootPaths.m_Memory);
    if ( (rootPaths.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&rootPaths.m_Memory);
  }
  return v12;
}


// FixupGameOrContentPathName  (line 123, @0x000000000312a180, libserver.so)  // inlines: GetSearchPath, V_strncpy<int>
// calls: _V_strncpy, V_FixSlashes, V_RemoveDotSlashes, V_FixDoubleSlashes, V_PathContainsPath, V_strlower_fast, __stack_chk_fail
// strings: "CONTENTROOT", "GAMEROOT"
void __fastcall FixupGameOrContentPathName(char *pOut, int nOutLen, const char *pPath)
{
  char *v4; // rdi
  int v5; // edx
  unsigned int v6; // eax
  int v7; // edx
  char pRoot[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v9; // [rsp+108h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  _V_strncpy(pOut, pPath, nOutLen);
  V_FixSlashes(pOut, 47);
  V_RemoveDotSlashes(pOut, 47);
  V_FixDoubleSlashes(pOut);
  if ( g_pFullFileSystem != 0 )
  {
    (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "CONTENTROOT", 0, pRoot, 260);
    if ( V_PathContainsPath(pRoot, pOut, 1) != 0 )
    {
      v4 = pRoot;
      do
      {
        v5 = *v4;
        v4 += 4;
        v6 = ~v5 & (v5 - 16843009) & 0x80808080;
      }
      while ( v6 == 0 );
    }
    else
    {
      (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "GAMEROOT", 0, pRoot, 260);
      if ( V_PathContainsPath(pRoot, pOut, 1) == 0 )
        return;
      v4 = pRoot;
      do
      {
        v7 = *v4;
        v4 += 4;
        v6 = ~v7 & (v7 - 16843009) & 0x80808080;
      }
      while ( v6 == 0 );
    }
    if ( (v6 & 0x8080) == 0 )
    {
      LOBYTE(v6) = BYTE2(v6);
      v4 += 2;
    }
    V_strlower_fast(&pOut[&v4[-__CFADD__(v6, v6) - 3] - pRoot]);
  }
}


// GetModSubdirectory  (line 156, @0x000000000312a2d0, libserver.so)  // inlines: GetSearchPath, V_strlen, V_strncat<int>, V_strncpy<int>, strchr
// calls: strchr, _V_strncpy, V_StripTrailingSlash, strlen, _V_strncat, V_FixSlashes, __stack_chk_fail
// callers: GetModContentSubdirectory
void __fastcall GetModSubdirectory(const char *pSubDir, char *pOutBuf, int nBufLen)
{
  unsigned int v6; // eax
  void *v7; // rsp
  char *v8; // rax
  unsigned int v9; // ebx
  _BYTE v10[48]; // [rsp+10h] [rbp-30h] BYREF

  v6 = (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "MOD", 0, 0, 0);
  v7 = alloca(((v6 + 31) & 0xFFFFFFF0) + 16LL);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "MOD", 0, v10 & 0xFFFFFFFFFFFFFFEFLL, v6);
  v8 = strchr((v10 & 0xFFFFFFFFFFFFFFEFLL), 59);
  if ( v8 != 0 )
    *v8 = 0;
  _V_strncpy(pOutBuf, v10 & 0xFFFFFFFFFFFFFFEFLL, nBufLen);
  V_StripTrailingSlash(pOutBuf);
  if ( pSubDir != 0 )
  {
    v9 = strlen(pSubDir);
    _V_strncat(pOutBuf, "\\", nBufLen, 1);
    _V_strncat(pOutBuf, pSubDir, nBufLen, v9);
  }
  V_FixSlashes(pOutBuf, 47);
}


// GetModContentSubdirectory  (line 186, @0x000000000312a670, libserver.so)
// calls: GetModSubdirectory, ComputeModContentFilename, __stack_chk_fail
void __fastcall GetModContentSubdirectory(const char *pSubDir, char *pBuf, int nBufLen)
{
  char pTemp[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v6; // [rsp+208h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  GetModSubdirectory(pSubDir, pTemp, 512);
  ComputeModContentFilename(pTemp, pBuf, nBufLen);
}


// ComputeModFilename  (line 197, @0x000000000312a3f0, libserver.so)  // inlines: GetSearchPath, V_ComposeFileName<int>, V_strlen
// calls: V_PathContainsPath, _V_ComposeFileName, V_FixDoubleSlashes, V_FixSlashes, V_RemoveDotSlashes, Warning, __stack_chk_fail
// strings: "CONTENTROOT", "GAMEROOT", "Failed to map from %s to game-path\n"
void __fastcall ComputeModFilename(const char *pContentFileName, char *pBuf, int nBufLen)
{
  char v6; // al
  char *v7; // rdx
  int v8; // ecx
  unsigned int v9; // eax
  const char *v10; // r12
  char pRoot[264]; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v12; // [rsp+108h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "CONTENTROOT", 0, pRoot, 260);
  v6 = V_PathContainsPath(pRoot, pContentFileName, 1);
  v7 = pRoot;
  if ( v6 != 0 )
  {
    do
    {
      v8 = *v7;
      v7 += 4;
      v9 = ~v8 & (v8 - 16843009) & 0x80808080;
    }
    while ( v9 == 0 );
    if ( (~v8 & (v8 - 16843009) & 0x8080) == 0 )
    {
      LOBYTE(v9) = (~v8 & (v8 - 16843009) & 0x80808080) >> 16;
      LODWORD(v7) = v7 + 2;
    }
    v10 = &pContentFileName[v7 - (__CFADD__(v9, v9) + 3) - pRoot];
    (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "GAMEROOT", 0, pRoot, 260);
    _V_ComposeFileName(pRoot, v10, pBuf, nBufLen);
    V_FixDoubleSlashes(pBuf);
    V_FixSlashes(pBuf, 47);
    V_RemoveDotSlashes(pBuf, 47);
  }
  else
  {
    Warning("Failed to map from %s to game-path\n", pContentFileName);
    *pBuf = 0;
  }
}


// ComputeModContentFilename  (line 221, @0x000000000312a530, libserver.so)  // inlines: GetSearchPath, V_ComposeFileName<int>, V_strlen
// calls: V_PathContainsPath, _V_ComposeFileName, V_FixDoubleSlashes, V_FixSlashes, V_RemoveDotSlashes, Warning, __stack_chk_fail
// callers: GetModContentSubdirectory
// strings: "GAMEROOT", "CONTENTROOT", "Failed to map from %s to content-path\n"
void __fastcall ComputeModContentFilename(const char *pGameFileName, char *pBuf, int nBufLen)
{
  char v6; // al
  char *v7; // rdx
  int v8; // ecx
  unsigned int v9; // eax
  const char *v10; // r12
  char pRoot[264]; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v12; // [rsp+108h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "GAMEROOT", 0, pRoot, 260);
  v6 = V_PathContainsPath(pRoot, pGameFileName, 1);
  v7 = pRoot;
  if ( v6 != 0 )
  {
    do
    {
      v8 = *v7;
      v7 += 4;
      v9 = ~v8 & (v8 - 16843009) & 0x80808080;
    }
    while ( v9 == 0 );
    if ( (~v8 & (v8 - 16843009) & 0x8080) == 0 )
    {
      LOBYTE(v9) = (~v8 & (v8 - 16843009) & 0x80808080) >> 16;
      LODWORD(v7) = v7 + 2;
    }
    v10 = &pGameFileName[v7 - (__CFADD__(v9, v9) + 3) - pRoot];
    (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "CONTENTROOT", 0, pRoot, 260);
    _V_ComposeFileName(pRoot, v10, pBuf, nBufLen);
    V_FixDoubleSlashes(pBuf);
    V_FixSlashes(pBuf, 47);
    V_RemoveDotSlashes(pBuf, 47);
  }
  else
  {
    Warning("Failed to map from %s to content-path\n", pGameFileName);
    *pBuf = 0;
  }
}


// SkipToModRelativePathFromGameOrContentRelativePath  (line 241, @0x000000000312a6e0, libserver.so)  // inlines: V_stristr_fast
// calls: V_stristr_fast(char const*,char const*)
// callers: SkipToModRelativePathFromGameOrContentRelativePath, GetContentRootForPathWithinContent, GetGameRootForPathWithinGame, FullPathToModRelativePath, FullPathToRootPath, ModNameFromGameOrContentRelativePath
// strings: "_addons"
char *__fastcall SkipToModRelativePathFromGameOrContentRelativePath(char *pPathOrFileName)
{
  char v1; // dl
  char *v2; // rbx
  char v3; // dl
  unsigned __int64 v4; // rax
  char *v5; // r12
  char *result; // rax
  char v7; // dl
  char v8; // al

  v1 = *pPathOrFileName;
  if ( *pPathOrFileName == 92 || v1 == 47 )
  {
    v2 = pPathOrFileName;
  }
  else
  {
    if ( v1 == 0 )
      return pPathOrFileName;
    v2 = pPathOrFileName;
    while ( 1 )
    {
      v3 = *++v2;
      if ( *v2 == 92 || v3 == 47 )
        break;
      if ( v3 == 0 )
        return v2;
    }
  }
  v4 = V_stristr_fast(pPathOrFileName, "_addons");
  v5 = v2 + 1;
  if ( (v2 + 1) <= v4 || v4 == 0 )
    return v5;
  v7 = *(v4 + 7);
  if ( v7 == 92 || (result = v2 + 1, v7 == 47) )
  {
    v8 = v2[1];
    if ( v8 != 92 )
    {
      do
      {
        if ( v8 == 47 )
          break;
        if ( v8 == 0 )
          return v5;
        v8 = *++v5;
      }
      while ( *v5 != 92 );
    }
    return v5 + 1;
  }
  return result;
}


// SkipToModRelativePathFromGameOrContentRelativePath  (line 274, @0x000000000312a7b0, libserver.so)
// calls: SkipToModRelativePathFromGameOrContentRelativePath
const char *__fastcall SkipToModRelativePathFromGameOrContentRelativePath(const char *pPathOrFileName)
{
  return SkipToModRelativePathFromGameOrContentRelativePath(pPathOrFileName);
}


// SkipToGameOrContentRelativePathFromFullPath  (line 279, @0x000000000312a7c0, libserver.so)  // inlines: GetSearchPath, V_strlen
// calls: V_PathContainsPath, __stack_chk_fail
// callers: FullPathToModRelativePath, FullPathToRootPath
// strings: "GAMEROOT", "CONTENTROOT"
const char *__fastcall SkipToGameOrContentRelativePathFromFullPath(const char *pFullPath)
{
  char *v3; // rax
  int v4; // ecx
  unsigned int v5; // edx
  char pRoot[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v7; // [rsp+108h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "GAMEROOT", 0, pRoot, 260);
  if ( V_PathContainsPath(pRoot, pFullPath, 1) != 0 )
    return &pFullPath[strlen(pRoot)];
  (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "CONTENTROOT", 0, pRoot, 260);
  if ( V_PathContainsPath(pRoot, pFullPath, 1) == 0 )
    return 0;
  v3 = pRoot;
  do
  {
    v4 = *v3;
    v3 += 4;
    v5 = ~v4 & (v4 - 16843009) & 0x80808080;
  }
  while ( v5 == 0 );
  if ( (~v4 & (v4 - 16843009) & 0x8080) == 0 )
  {
    LOBYTE(v5) = (~v4 & (v4 - 16843009) & 0x80808080) >> 16;
    LODWORD(v3) = v3 + 2;
  }
  return &pFullPath[v3 - (__CFADD__(v5, v5) + 3) - pRoot];
}


// GetContentRootForPathWithinContent  (line 303, @0x000000000312a910, libserver.so)  // inlines: GetSearchPath, V_strlen, V_strncpy<int>
// calls: V_IsAbsolutePath, V_FixSlashes, V_PathContainsPath, _V_strncpy, SkipToModRelativePathFromGameOrContentRelativePath, __stack_chk_fail
// strings: "CONTENTROOT"
bool __fastcall GetContentRootForPathWithinContent(
        const char *pPathOrFileName,
        const char *pPathID,
        char *pDestPathOrFileName,
        int nDestBufSize)
{
  char v8; // r12
  char *v10; // rax
  char pRoot[264]; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v12; // [rsp+118h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  if ( V_IsAbsolutePath(pPathOrFileName) != 0 )
  {
    _V_strncpy(pDestPathOrFileName, pPathOrFileName, nDestBufSize);
  }
  else if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 23))(
              g_pFullFileSystem,
              pPathOrFileName,
              pPathID,
              pDestPathOrFileName,
              nDestBufSize,
              0,
              0) == 0 )
  {
    return 0;
  }
  V_FixSlashes(pDestPathOrFileName, 47);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "CONTENTROOT", 0, pRoot, 260);
  v8 = V_PathContainsPath(pRoot, pDestPathOrFileName, 1);
  if ( v8 == 0 )
    return 0;
  v10 = SkipToModRelativePathFromGameOrContentRelativePath(&pDestPathOrFileName[strlen(pRoot)]);
  if ( *v10 != 0 )
    *(v10 - 1) = 0;
  return v8;
}


// GetGameRootForPathWithinGame  (line 337, @0x000000000312aa80, libserver.so)  // inlines: GetSearchPath, V_strlen, V_strncpy<int>
// calls: V_IsAbsolutePath, V_FixSlashes, V_PathContainsPath, _V_strncpy, SkipToModRelativePathFromGameOrContentRelativePath, __stack_chk_fail
// strings: "GAMEROOT"
bool __fastcall GetGameRootForPathWithinGame(
        const char *pPathOrFileName,
        const char *pPathID,
        char *pDestPathOrFileName,
        int nDestBufSize)
{
  char v8; // r12
  char *v10; // rax
  char pRoot[264]; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v12; // [rsp+118h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  if ( V_IsAbsolutePath(pPathOrFileName) != 0 )
  {
    _V_strncpy(pDestPathOrFileName, pPathOrFileName, nDestBufSize);
  }
  else if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 23))(
              g_pFullFileSystem,
              pPathOrFileName,
              pPathID,
              pDestPathOrFileName,
              nDestBufSize,
              0,
              0) == 0 )
  {
    return 0;
  }
  V_FixSlashes(pDestPathOrFileName, 47);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "GAMEROOT", 0, pRoot, 260);
  v8 = V_PathContainsPath(pRoot, pDestPathOrFileName, 1);
  if ( v8 == 0 )
    return 0;
  v10 = SkipToModRelativePathFromGameOrContentRelativePath(&pDestPathOrFileName[strlen(pRoot)]);
  if ( *v10 != 0 )
    *(v10 - 1) = 0;
  return v8;
}


// FullPathToModRelativePath  (line 371, @0x000000000312abf0, libserver.so)  // inlines: SkipToModRelativePathFromGameOrContentRelativePath, V_strncpy<int>
// calls: SkipToGameOrContentRelativePathFromFullPath, SkipToModRelativePathFromGameOrContentRelativePath, _V_strncpy, V_FixSlashes
bool __fastcall FullPathToModRelativePath(const char *pInputFullPath, char *pDestPath, int nDestPathBufSize)
{
  char *v5; // rdi
  bool result; // al
  char *v7; // rax

  v5 = SkipToGameOrContentRelativePathFromFullPath(pInputFullPath);
  result = 0;
  if ( v5 != 0 )
  {
    v7 = SkipToModRelativePathFromGameOrContentRelativePath(v5);
    _V_strncpy(pDestPath, v7, nDestPathBufSize);
    V_FixSlashes(pDestPath, 47);
    return 1;
  }
  return result;
}


// FullPathToRootPath  (line 385, @0x000000000312ac40, libserver.so)  // inlines: V_strncpy<int>
// calls: _V_strncpy, V_FixSlashes, SkipToGameOrContentRelativePathFromFullPath, SkipToModRelativePathFromGameOrContentRelativePath
// callers: ModNameFromFullPath
// local variable allocation has failed, the output may be wrong!
bool __fastcall FullPathToRootPath(const char *pInputFullPath, char *pDestPath, int nDestPathBufSize)
{
  char *v4; // rax
  bool v5; // dl
  char *v6; // rax

  if ( pInputFullPath != pDestPath )
    _V_strncpy(pDestPath, pInputFullPath, *&nDestPathBufSize);
  V_FixSlashes(pDestPath, 47);
  v4 = SkipToGameOrContentRelativePathFromFullPath(pDestPath);
  v5 = 0;
  if ( v4 != 0 )
  {
    v6 = SkipToModRelativePathFromGameOrContentRelativePath(v4);
    v5 = 1;
    if ( *v6 != 0 )
      *(v6 - 1) = 0;
  }
  return v5;
}


// ModNameFromRootPath  (line 408, @0x000000000312aca0, libserver.so)  // inlines: V_strlen, V_strncpy<int>
// calls: V_stristr_fast(char const*,char const*), _V_strncpy, V_FixSlashes, V_StripTrailingSlash, strlen
// callers: ModNameFromFullPath
// strings: "_addons"
void __fastcall ModNameFromRootPath(char *pBuf, int nBufLen, const char *pRootPath)
{
  const char *v6; // rax

  if ( pRootPath != 0 && *pRootPath != 0 )
  {
    v6 = V_stristr_fast(pRootPath, "_addons");
    if ( v6 == 0 )
    {
      v6 = &pRootPath[strlen(pRootPath) - 1];
      if ( *v6 == 92 || *v6 == 47 )
        --v6;
    }
    for ( ; pRootPath <= v6 && *v6 != 47 && *v6 != 92; --v6 )
      ;
    _V_strncpy(pBuf, v6 + 1, nBufLen);
    V_FixSlashes(pBuf, 47);
    V_StripTrailingSlash(pBuf);
  }
  else
  {
    *pBuf = 0;
  }
}


// GetModAndAddonPathsFromModOrAddonName  (line 442, @0x000000000312ad70, libserver.so)  // inlines: V_strncpy<int>
// calls: V_stristr_fast(char const*,char const*), _V_strncpy
// callers: CTier2AppSystemDict::GetAvailableAddonMaps_, GetAddonNameFromFullPath
// strings: "_addons"
void __fastcall GetModAndAddonPathsFromModOrAddonName(
        char *pModOut,
        int nModOut,
        char *pAddonOut,
        int nAddonOut,
        const char *pModOrAddonPath)
{
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rdx

  v9 = V_stristr_fast(pModOrAddonPath, "_addons");
  v10 = v9;
  if ( v9 != 0 )
  {
    v11 = (v9 - pModOrAddonPath + 1);
    if ( v11 > nModOut )
      v11 = nModOut;
    _V_strncpy(pModOut, pModOrAddonPath, v11);
    _V_strncpy(pAddonOut, v10 + 8, nAddonOut);
  }
  else
  {
    _V_strncpy(pModOut, pModOrAddonPath, nModOut);
    if ( nAddonOut > 0 )
      *pAddonOut = 0;
  }
}


// GetAddonNameFromFullPath  (line 465, @0x000000000312ae90, libserver.so)
// calls: ModNameFromFullPath, GetModAndAddonPathsFromModOrAddonName, __stack_chk_fail
void __fastcall GetAddonNameFromFullPath(const char *pFullPath, char *pOutAddonName, int nMaxAddonNameLength)
{
  char modNameAndAddonName[512]; // [rsp+0h] [rbp-430h] BYREF
  char modName[520]; // [rsp+200h] [rbp-230h] BYREF
  unsigned __int64 v7; // [rsp+408h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  ModNameFromFullPath(modNameAndAddonName, 512, pFullPath);
  GetModAndAddonPathsFromModOrAddonName(modName, 512, pOutAddonName, nMaxAddonNameLength, modNameAndAddonName);
}


// ModNameFromFullPath  (line 476, @0x000000000312ae10, libserver.so)
// calls: FullPathToRootPath, ModNameFromRootPath, __stack_chk_fail
// callers: GetAddonNameFromFullPath
bool __fastcall ModNameFromFullPath(char *pBuf, int nBufLen, const char *pFullPath)
{
  bool result; // al
  bool v6; // [rsp+Ch] [rbp-234h]
  char pRootPath[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v8; // [rsp+218h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  result = FullPathToRootPath(pFullPath, pRootPath, 512);
  if ( result )
  {
    v6 = result;
    ModNameFromRootPath(pBuf, nBufLen, pRootPath);
    return v6;
  }
  return result;
}


// ModNameFromGameOrContentRelativePath  (line 486, @0x000000000312af10, libserver.so)  // inlines: SkipToModRelativePathFromGameOrContentRelativePath, V_memcpy, memcpy
// calls: SkipToModRelativePathFromGameOrContentRelativePath, memcpy, V_FixSlashes
void __fastcall ModNameFromGameOrContentRelativePath(char *pBuf, int nBufLen, const char *pBaseRelativePath)
{
  char *v6; // rax
  __int64 v7; // rax
  __int64 v8; // r12

  v6 = SkipToModRelativePathFromGameOrContentRelativePath(pBaseRelativePath);
  v7 = &v6[(*v6 == 0) - 1] - pBaseRelativePath;
  v8 = nBufLen - 1;
  if ( v7 <= v8 )
    v8 = v7;
  if ( v8 < 0 )
    __debugbreak();
  memcpy(pBuf, pBaseRelativePath, v8);
  pBuf[v8] = 0;
  V_FixSlashes(pBuf, 47);
}


// CreateX360Filename  (line 507, @0x000000000312af80, libserver.so)  // inlines: V_StripExtension<int>, V_strlen
// calls: _V_StripExtension, strlen, V_snprintf
// callers: UpdateOrCreate
// strings: "%s.360%s"
char *__fastcall CreateX360Filename(const char *pSourceName, char *pTargetName, int targetLen)
{
  __int64 v6; // r8

  _V_StripExtension(pSourceName, pTargetName, targetLen);
  if ( pTargetName != 0 )
    v6 = strlen(pTargetName);
  else
    v6 = 0;
  V_snprintf(pTargetName, targetLen, "%s.360%s", pTargetName, &pSourceName[v6]);
  return pTargetName;
}


// RestoreFilename  (line 528, @0x000000000312afe0, libserver.so)  // inlines: V_strlen, V_strncat<int>, V_strncmp<int>, V_strncpy<int>
// calls: strlen, _V_strncmp, _V_strncpy, _V_strncat
// callers: UpdateOrCreate
// strings: ".360"
char *__fastcall RestoreFilename(const char *pSourceName, char *pTargetName, int targetLen)
{
  int v6; // ebx
  char v7; // al
  const char *v8; // rcx
  char v9; // r8
  unsigned int v11; // eax

  if ( pSourceName == 0 )
    return pSourceName;
  v6 = strlen(pSourceName) - 1;
  if ( v6 <= 0 )
    return pSourceName;
  v7 = pSourceName[v6];
  if ( (v7 - 46) > 1u && v7 != 92 )
  {
    v8 = &pSourceName[v6 - 1];
    while ( --v6 != 0 )
    {
      v9 = *v8;
      if ( (*v8 - 46) > 1u )
      {
        --v8;
        if ( v9 != 92 )
          continue;
      }
      goto LABEL_10;
    }
    return pSourceName;
  }
LABEL_10:
  if ( v6 <= 3 || pSourceName[v6] != 46 || _V_strncmp(&pSourceName[v6 - 4], ".360", 4) != 0 )
    return pSourceName;
  v11 = v6 - 3;
  if ( v6 - 3 > targetLen )
    v11 = targetLen;
  _V_strncpy(pTargetName, pSourceName, v11);
  _V_strncat(pTargetName, &pSourceName[v6], targetLen, 0xFFFFFFFFLL);
  return pTargetName;
}


// BuildFileList  (line 557, @0x000000000312b870, libserver.so)  // inlines: AddToTail, CUtlString, Construct<CUtlString>, Element, FileFindHandle_t, GrowMemory, V_ComposeFileName<long unsigned int>, V_FixupPathName<long unsigned int>, V_strnicmp_fast<int>, operator[], ~FileFindHandle_t
// calls: _V_ComposeFileName, _V_FixupPathName, CUtlString::operator=, CUtlMemory<CUtlString, int>::Grow, _V_strnicmp_fast, _Unwind_Resume, __stack_chk_fail
// callers: CDOTACompendiumSchema::LoadCompendiumDefinitions, BuildFileList, BuildDirectoryList
void __fastcall BuildFileList(
        const char *pDir,
        const char *pSearchSpec,
        const char *pPathID,
        bool bRecursive,
        BuildFileListType_t buildType,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const list)
{
  __int64 i; // r13
  __int64 m_Size; // r13
  int v10; // eax
  CUtlString *v11; // rax
  CUtlString *v12; // rdi
  __int64 j; // r13
  FileFindHandle_t findHandle; // [rsp+40h] [rbp-650h] BYREF
  char pFullSearchSpec[512]; // [rsp+50h] [rbp-640h] BYREF
  char pFoundFullPathTemp[512]; // [rsp+250h] [rbp-440h] BYREF
  char pSubDir[520]; // [rsp+450h] [rbp-240h] BYREF
  unsigned __int64 v23; // [rsp+658h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  findHandle.m_pFileSystem = 0;
  findHandle.m_nFindDataIndex = 0;
  _V_ComposeFileName(pDir, pSearchSpec, pFullSearchSpec, 512);
  for ( i = (*(g_pFullFileSystem->_vptr_IAppSystem + 41))(g_pFullFileSystem, pFullSearchSpec, pPathID, &findHandle);
        i != 0;
        i = (*(g_pFullFileSystem->_vptr_IAppSystem + 38))(g_pFullFileSystem, &findHandle) )
  {
    if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 39))(g_pFullFileSystem, &findHandle) == (buildType == BuildFileListType_t::BFL_TYPE_DIRECTORIES_ONLY) )
    {
      _V_ComposeFileName(pDir, i, pFoundFullPathTemp, 512);
      _V_FixupPathName(pSubDir, 512, pFoundFullPathTemp, 1);
      m_Size = list->m_Size;
      v10 = list->m_Size;
      if ( m_Size == list->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&list->m_Memory, 1);
        v10 = list->m_Size;
      }
      list->m_Size = v10 + 1;
      v11 = &list->m_Memory.m_pMemory[m_Size];
      if ( v11 != 0 )
      {
        v11->m_pString = 0;
        v12 = &list->m_Memory.m_pMemory[m_Size];
      }
      else
      {
        v12 = 0;
      }
      CUtlString::operator=(v12, pSubDir);
    }
  }
  (*(g_pFullFileSystem->_vptr_IAppSystem + 40))(g_pFullFileSystem, &findHandle);
  if ( bRecursive )
  {
    _V_ComposeFileName(pDir, "*", pFullSearchSpec, 512);
    for ( j = (*(g_pFullFileSystem->_vptr_IAppSystem + 41))(g_pFullFileSystem, pFullSearchSpec, pPathID, &findHandle);
          j != 0;
          j = (*(g_pFullFileSystem->_vptr_IAppSystem + 38))(g_pFullFileSystem, &findHandle) )
    {
      if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 39))(g_pFullFileSystem, &findHandle) != 0
        && _V_strnicmp_fast(j, ".", 2) != 0
        && _V_strnicmp_fast(j, "..", 3) != 0 )
      {
        _V_ComposeFileName(pDir, j, pSubDir, 512);
        BuildFileList(pSubDir, pSearchSpec, pPathID, 1, buildType, list);
      }
    }
    (*(g_pFullFileSystem->_vptr_IAppSystem + 40))(g_pFullFileSystem, &findHandle);
  }
  if ( findHandle.m_pFileSystem != 0 )
    (*(findHandle.m_pFileSystem->_vptr_IAppSystem + 40))(findHandle.m_pFileSystem, &findHandle);
}


// BuildFileList  (line 606, @0x000000000312bbe0, libserver.so)
// calls: BuildFileList
void __fastcall BuildFileList(
        const char *pDir,
        const char *pSearchSpec,
        const char *pPathID,
        bool bRecursive,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const list)
{
  BuildFileList(pDir, pSearchSpec, pPathID, bRecursive, BuildFileListType_t::BFL_TYPE_FILES_ONLY, list);
}


// BuildFileList  (line 611, @0x000000000312bc00, libserver.so)  // inlines: BuildFileList, V_ExtractFilePath<long unsigned int>
// calls: _V_ExtractFilePath, V_UnqualifiedFileName, BuildFileList, __stack_chk_fail
void __fastcall BuildFileList(
        const char *pSearchSpec,
        const char *pPathID,
        bool bRecursive,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const list)
{
  const char *v8; // rax
  char pDir[520]; // [rsp+0h] [rbp-240h] BYREF
  unsigned __int64 v10; // [rsp+208h] [rbp-38h]

  v10 = __readfsqword(0x28u);
  _V_ExtractFilePath(pSearchSpec, pDir, 512);
  v8 = V_UnqualifiedFileName(pSearchSpec);
  BuildFileList(pDir, v8, pPathID, bRecursive, BuildFileListType_t::BFL_TYPE_FILES_ONLY, list);
}


// BuildDirectoryList  (line 624, @0x000000000312bc90, libserver.so)  // inlines: AddToTail, BuildFileList, CUtlString, Construct<CUtlString>, Element, FileFindHandle_t, GrowMemory, V_ComposeFileName<long unsigned int>, V_FixupPathName<long unsigned int>, V_strnicmp_fast<int>, operator[], ~FileFindHandle_t
// calls: _V_ComposeFileName, _V_FixupPathName, CUtlString::operator=, CUtlMemory<CUtlString, int>::Grow, _V_strnicmp_fast, BuildFileList, _Unwind_Resume, __stack_chk_fail
void __fastcall BuildDirectoryList(
        const char *pDir,
        const char *pSearchSpec,
        const char *pPathID,
        bool bRecursive,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const list)
{
  __int64 i; // r13
  __int64 m_Size; // r13
  int v9; // eax
  CUtlString *v10; // rax
  CUtlString *v11; // rdi
  __int64 j; // r13
  FileFindHandle_t findHandle; // [rsp+40h] [rbp-650h] BYREF
  char pFullSearchSpec[512]; // [rsp+50h] [rbp-640h] BYREF
  char pFoundFullPathTemp[512]; // [rsp+250h] [rbp-440h] BYREF
  char pSubDir[520]; // [rsp+450h] [rbp-240h] BYREF
  unsigned __int64 v21; // [rsp+658h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  findHandle.m_pFileSystem = 0;
  findHandle.m_nFindDataIndex = 0;
  _V_ComposeFileName(pDir, pSearchSpec, pFullSearchSpec, 512);
  for ( i = (*(g_pFullFileSystem->_vptr_IAppSystem + 41))(g_pFullFileSystem, pFullSearchSpec, pPathID, &findHandle);
        i != 0;
        i = (*(g_pFullFileSystem->_vptr_IAppSystem + 38))(g_pFullFileSystem, &findHandle) )
  {
    if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 39))(g_pFullFileSystem, &findHandle) != 0 )
    {
      _V_ComposeFileName(pDir, i, pFoundFullPathTemp, 512);
      _V_FixupPathName(pSubDir, 512, pFoundFullPathTemp, 1);
      m_Size = list->m_Size;
      v9 = list->m_Size;
      if ( m_Size == list->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&list->m_Memory, 1);
        v9 = list->m_Size;
      }
      list->m_Size = v9 + 1;
      v10 = &list->m_Memory.m_pMemory[m_Size];
      if ( v10 != 0 )
      {
        v10->m_pString = 0;
        v11 = &list->m_Memory.m_pMemory[m_Size];
      }
      else
      {
        v11 = 0;
      }
      CUtlString::operator=(v11, pSubDir);
    }
  }
  (*(g_pFullFileSystem->_vptr_IAppSystem + 40))(g_pFullFileSystem, &findHandle);
  if ( bRecursive )
  {
    _V_ComposeFileName(pDir, "*", pFullSearchSpec, 512);
    for ( j = (*(g_pFullFileSystem->_vptr_IAppSystem + 41))(g_pFullFileSystem, pFullSearchSpec, pPathID, &findHandle);
          j != 0;
          j = (*(g_pFullFileSystem->_vptr_IAppSystem + 38))(g_pFullFileSystem, &findHandle) )
    {
      if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 39))(g_pFullFileSystem, &findHandle) != 0
        && _V_strnicmp_fast(j, ".", 2) != 0
        && _V_strnicmp_fast(j, "..", 3) != 0 )
      {
        _V_ComposeFileName(pDir, j, pSubDir, 512);
        BuildFileList(pSubDir, pSearchSpec, pPathID, 1, BuildFileListType_t::BFL_TYPE_FILES_ONLY, list);
      }
    }
    (*(g_pFullFileSystem->_vptr_IAppSystem + 40))(g_pFullFileSystem, &findHandle);
  }
  if ( findHandle.m_pFileSystem != 0 )
    (*(findHandle.m_pFileSystem->_vptr_IAppSystem + 40))(findHandle.m_pFileSystem, &findHandle);
}


// UpdateOrCreate  (line 679, @0x000000000312b0b0, libserver.so)
// calls: RestoreFilename, CreateX360Filename, __stack_chk_fail
// callers: UpdateOrCreateCaptionFile
int __fastcall UpdateOrCreate(
        const char *pSourceName,
        char *pTargetName,
        int targetLen,
        const char *pPathID,
        CreateCallback_t pfnCreate,
        bool bForce,
        void *pExtraData)
{
  char *v9; // rax
  char szFixedSourceName[520]; // [rsp+0h] [rbp-220h] BYREF
  unsigned __int64 v12; // [rsp+208h] [rbp-18h]

  v12 = __readfsqword(0x28u);
  if ( pTargetName != 0 )
  {
    v9 = RestoreFilename(pSourceName, szFixedSourceName, 512);
    CreateX360Filename(v9, pTargetName, targetLen);
  }
  return 0;
}


// GetSearchPath  (line 699, @0x000000000312c4f0, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, GrowMemory, operator[], strchr, ~CUtlString
// calls: CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, strchr, CUtlMemory<CUtlString, int>::Grow, __stack_chk_fail, _Unwind_Resume
// callers: SplitFullPath
void __fastcall GetSearchPath(
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const path,
        GetSearchPathTypes_t nPathTypes,
        const char *pPathID)
{
  unsigned int v6; // eax
  void *v7; // rsp
  const char *v8; // r13
  CUtlString *v9; // r13
  const char *v10; // rax
  char *v11; // rax
  char *v12; // r12
  __int64 m_Size; // r13
  int v14; // eax
  __int64 v15; // r12
  int v16; // eax
  CUtlString *v17; // rbx
  const char *v18; // rax
  CUtlString v19; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-38h]
  _BYTE v21[48]; // [rsp+10h] [rbp-30h] BYREF

  v20 = __readfsqword(0x28u);
  v6 = (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, pPathID, nPathTypes, 0, 0);
  v7 = alloca(((v6 + 31) & 0xFFFFFFF0) + 16LL);
  v8 = (v21 & 0xFFFFFFFFFFFFFFEFLL);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, pPathID, nPathTypes, v21 & 0xFFFFFFFFFFFFFFEFLL, v6);
  while ( 1 )
  {
    v11 = strchr(v8, 59);
    v12 = v11;
    if ( v11 == 0 )
      break;
    *v11 = 0;
    v19.m_pString = 0;
    CUtlString::Set(&v19, v8);
    m_Size = path->m_Size;
    v14 = path->m_Size;
    if ( m_Size == path->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CUtlString,int>::Grow(&path->m_Memory, 1);
      v14 = path->m_Size;
    }
    path->m_Size = v14 + 1;
    v9 = &path->m_Memory.m_pMemory[m_Size];
    if ( v9 != 0 )
    {
      v9->m_pString = 0;
      v10 = CUtlString::Get(&v19);
      CUtlString::Set(v9, v10);
    }
    if ( v19.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v19);
    v8 = v12 + 1;
  }
  if ( *v8 != 0 )
  {
    v19.m_pString = 0;
    CUtlString::Set(&v19, v8);
    v15 = path->m_Size;
    v16 = path->m_Size;
    if ( v15 == path->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CUtlString,int>::Grow(&path->m_Memory, 1);
      v16 = path->m_Size;
    }
    path->m_Size = v16 + 1;
    v17 = &path->m_Memory.m_pMemory[v15];
    if ( v17 != 0 )
    {
      v17->m_pString = 0;
      v18 = CUtlString::Get(&v19);
      CUtlString::Set(v17, v18);
    }
    if ( v19.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v19);
  }
}


// GenerateFullPath  (line 722, @0x000000000312b120, libserver.so)  // inlines: V_ComposeFileName<int>, V_strncpy<int>
// calls: V_IsAbsolutePath, _V_strncpy, V_FixSlashes, V_RemoveDotSlashes, _V_ComposeFileName, __stack_chk_fail
bool __fastcall GenerateFullPath(const char *pFileName, const char *pPathID, char *pBuf, int nBufLen)
{
  __int64 v8; // rax
  bool result; // al
  char pDir[520]; // [rsp+10h] [rbp-240h] BYREF
  unsigned __int64 v11; // [rsp+218h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  if ( V_IsAbsolutePath(pFileName) != 0 )
  {
    _V_strncpy(pBuf, pFileName, nBufLen);
    V_FixSlashes(pBuf, 47);
    return V_RemoveDotSlashes(pBuf, 47);
  }
  else
  {
    v8 = (*(g_pFullFileSystem->_vptr_IAppSystem + 23))(g_pFullFileSystem, pFileName, pPathID, pBuf, nBufLen, 0, 0);
    if ( v8 == 0 || !(result = V_IsAbsolutePath(v8)) )
    {
      result = (*(g_pFullFileSystem->_vptr_IAppSystem + 45))(g_pFullFileSystem, pDir, 512);
      if ( result )
      {
        _V_ComposeFileName(pDir, pFileName, pBuf, nBufLen);
        return V_RemoveDotSlashes(pBuf, 47);
      }
    }
  }
  return result;
}


// GenerateFullPathForce  (line 743, @0x000000000312b630, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Destruct<CUtlString>, Element, Purge, RemoveAll, V_ComposeFileName<int>, V_strncpy<int>, operator char const*, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: V_IsAbsolutePath, CUtlString::Get, _V_ComposeFileName, V_RemoveDotSlashes, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Purge, _V_strncpy, V_FixSlashes, __stack_chk_fail, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase, _Unwind_Resume
bool __fastcall GenerateFullPathForce(const char *pFileName, const char *pPathID, char *pBuf, int nBufLen)
{
  __int64 v8; // rax
  char IsAbsolutePath; // r15
  int v10; // ebx
  __int64 i; // r12
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > list; // [rsp+10h] [rbp-260h] BYREF
  char pDir[520]; // [rsp+30h] [rbp-240h] BYREF
  unsigned __int64 v15; // [rsp+238h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  if ( V_IsAbsolutePath(pFileName) != 0 )
  {
    _V_strncpy(pBuf, pFileName, nBufLen);
    V_FixSlashes(pBuf, 47);
    return V_RemoveDotSlashes(pBuf, 47);
  }
  else
  {
    v8 = (*(g_pFullFileSystem->_vptr_IAppSystem + 23))(g_pFullFileSystem, pFileName, pPathID, pBuf, nBufLen, 0, 0);
    if ( v8 == 0 || (IsAbsolutePath = V_IsAbsolutePath(v8)) == 0 )
    {
      list.m_Memory.m_pMemory = 0;
      list.m_Memory.m_nAllocationCount = 0;
      list.m_Memory.m_nGrowSize = 0;
      (*(g_pFullFileSystem->_vptr_IAppSystem + 143))(g_pFullFileSystem, pPathID, 0);
      IsAbsolutePath = (*(g_pFullFileSystem->_vptr_IAppSystem + 45))(g_pFullFileSystem, pDir, 512);
      if ( IsAbsolutePath != 0 )
      {
        _V_ComposeFileName(pDir, pFileName, pBuf, nBufLen);
        IsAbsolutePath = V_RemoveDotSlashes(pBuf, 47);
      }
      v10 = 0;
      for ( i = 0x1FFFFFFFFFFFFFFFLL; --v10 >= 0; --i )
      {
        if ( list.m_Memory.m_pMemory[i].m_pString != 0 )
          CUtlString::FreeMemoryBlock(&list.m_Memory.m_pMemory[i]);
      }
      CUtlMemory<CUtlString,int>::Purge(&list.m_Memory);
      if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlString,int>::Purge(&list.m_Memory);
    }
  }
  return IsAbsolutePath;
}


// AddFilesToList  (line 777, @0x000000000312bfb0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<CUtlString>, Destruct<CUtlString>, Element, FileFindHandle_t, GrowMemory, Purge, RemoveAll, V_strnicmp_fast<int>, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~FileFindHandle_t
// calls: V_snprintf, V_IsAbsolutePath, _V_strnicmp_fast, V_GetFileExtension, V_stricmp_fast, V_strlower_fast, V_FixSlashes, CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Grow, CUtlMemory<CUtlString, int>::Purge (15 total)
// strings: "%s\\*", "%s\\%s"
void __fastcall AddFilesToList(
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const list,
        const char *pDirectory,
        const char *pPathID,
        const char *pExtension)
{
  __int64 v7; // rax
  const char *v8; // r14
  __int64 FileExtension; // rax
  char *v10; // r14
  __int64 v11; // r14
  int v12; // eax
  CUtlString *v13; // r14
  const char *v14; // rax
  __int64 m_Size; // r14
  int v16; // eax
  CUtlString *v17; // r14
  const char *v18; // rax
  int v19; // ebx
  __int64 v20; // r14
  unsigned __int64 v21; // rbx
  const char *v22; // rax
  __int64 i; // r13
  char bIsAbsolute; // [rsp+1Fh] [rbp-6C1h]
  CUtlString v28[2]; // [rsp+50h] [rbp-690h] BYREF
  CUtlString v29[2]; // [rsp+60h] [rbp-680h] BYREF
  FileFindHandle_t hFind; // [rsp+70h] [rbp-670h] BYREF
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > subDirs; // [rsp+80h] [rbp-660h] BYREF
  char pSearchString[512]; // [rsp+A0h] [rbp-640h] BYREF
  char pChildPath[512]; // [rsp+2A0h] [rbp-440h] BYREF
  char pFullPathBuf[520]; // [rsp+4A0h] [rbp-240h] BYREF
  unsigned __int64 v35; // [rsp+6A8h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  V_snprintf(pSearchString, 512, "%s\\*", pDirectory);
  bIsAbsolute = V_IsAbsolutePath(pDirectory);
  hFind.m_pFileSystem = 0;
  hFind.m_nFindDataIndex = 0;
  v7 = (*(g_pFullFileSystem->_vptr_IAppSystem + 41))(g_pFullFileSystem, pSearchString, pPathID, &hFind);
  subDirs.m_Size = 0;
  v8 = v7;
  subDirs.m_Memory.m_pMemory = 0;
  subDirs.m_Memory.m_nAllocationCount = 0;
  for ( subDirs.m_Memory.m_nGrowSize = 0;
        v8 != 0;
        v8 = (*(g_pFullFileSystem->_vptr_IAppSystem + 38))(g_pFullFileSystem, &hFind) )
  {
    V_snprintf(pChildPath, 512, "%s\\%s", pDirectory, v8);
    if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 39))(g_pFullFileSystem, &hFind) != 0 )
    {
      if ( _V_strnicmp_fast(v8, ".", 2) != 0 && _V_strnicmp_fast(v8, "..", 3) != 0 )
      {
        v28[0].m_pString = 0;
        CUtlString::Set(v28, pChildPath);
        m_Size = subDirs.m_Size;
        v16 = subDirs.m_Size;
        if ( subDirs.m_Size == subDirs.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CUtlString,int>::Grow(&subDirs.m_Memory, 1);
          v16 = subDirs.m_Size;
        }
        subDirs.m_Size = v16 + 1;
        v17 = &subDirs.m_Memory.m_pMemory[m_Size];
        if ( v17 != 0 )
        {
          v17->m_pString = 0;
          v18 = CUtlString::Get(v28);
          CUtlString::Set(v17, v18);
        }
        if ( v28[0].m_pString != 0 )
          CUtlString::FreeMemoryBlock(v28);
      }
    }
    else
    {
      FileExtension = V_GetFileExtension(v8);
      if ( FileExtension != 0 && V_stricmp_fast(FileExtension, pExtension) == 0 )
      {
        if ( bIsAbsolute != 0 )
        {
          v10 = pChildPath;
        }
        else
        {
          v10 = pFullPathBuf;
          (*(g_pFullFileSystem->_vptr_IAppSystem + 23))(g_pFullFileSystem, pChildPath, pPathID, pFullPathBuf, 512, 0, 0);
        }
        V_strlower_fast(v10);
        V_FixSlashes(v10, 47);
        v29[0].m_pString = 0;
        CUtlString::Set(v29, v10);
        v11 = list->m_Size;
        v12 = list->m_Size;
        if ( v11 == list->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CUtlString,int>::Grow(&list->m_Memory, 1);
          v12 = list->m_Size;
        }
        list->m_Size = v12 + 1;
        v13 = &list->m_Memory.m_pMemory[v11];
        if ( v13 != 0 )
        {
          v13->m_pString = 0;
          v14 = CUtlString::Get(v29);
          CUtlString::Set(v13, v14);
        }
        if ( v29[0].m_pString != 0 )
          CUtlString::FreeMemoryBlock(v29);
      }
    }
  }
  (*(g_pFullFileSystem->_vptr_IAppSystem + 40))(g_pFullFileSystem, &hFind);
  v19 = subDirs.m_Size;
  if ( subDirs.m_Size > 0 )
  {
    v20 = 8LL * (subDirs.m_Size - 1) + 8;
    v21 = 0;
    do
    {
      v22 = CUtlString::Get(&subDirs.m_Memory.m_pMemory[v21 / 8]);
      AddFilesToList(list, v22, pPathID, pExtension);
      v21 += 8LL;
    }
    while ( v21 != v20 );
    v19 = subDirs.m_Size;
  }
  for ( i = 8LL * v19 - 8; --v19 >= 0; i -= 8 )
  {
    if ( *(&subDirs.m_Memory.m_pMemory->m_pString + i) != 0 )
      CUtlString::FreeMemoryBlock((subDirs.m_Memory.m_pMemory + i));
  }
  subDirs.m_Size = 0;
  if ( (subDirs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&subDirs.m_Memory);
    if ( (subDirs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&subDirs.m_Memory);
  }
  if ( hFind.m_pFileSystem != 0 )
    (*(hFind.m_pFileSystem->_vptr_IAppSystem + 40))(hFind.m_pFileSystem, &hFind);
}


// CFindLocalCopyOfSourceFile_SearchPaths::~CFindLocalCopyOfSourceFile_SearchPaths  (line 841, @0x000000000312d410, libserver.so)  // inlines: Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Purge
void __fastcall CFindLocalCopyOfSourceFile_SearchPaths::~CFindLocalCopyOfSourceFile_SearchPaths(
        CFindLocalCopyOfSourceFile_SearchPaths *const this)
{
  int m_Size; // ebx
  __int64 i; // r12
  CUtlString *v4; // rdi
  bool v5; // zf

  m_Size = this->m_LocalTestDirectories.m_Size;
  for ( i = 8LL * this->m_LocalTestDirectories.m_Size - 8; --m_Size >= 0; i -= 8 )
  {
    v4 = (this->m_LocalTestDirectories.m_Memory.m_pMemory + i);
    if ( v4->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v4);
  }
  v5 = (this->m_LocalTestDirectories.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_LocalTestDirectories.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_LocalTestDirectories.m_Memory);
    if ( (this->m_LocalTestDirectories.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_LocalTestDirectories.m_Memory);
  }
}


// FindLocalCopyOfSourceFile  (line 848, @0x000000000312cf50, libserver.so)  // inlines: V_ComposeFileName<long unsigned int>, V_FixupPathName<long unsigned int>, V_strlen, operator[]
// calls: V_IsAbsolutePath, CUtlString::Get, _V_ComposeFileName, _V_FixupPathName, Plat_getwd, __cxa_guard_acquire, CFindLocalCopyOfSourceFile_SearchPaths::CFindLocalCopyOfSourceFile_SearchPaths, __cxa_guard_release, __cxa_atexit, strlen, __stack_chk_fail, __cxa_guard_abort (13 total)
// globals: `guard variable for'FindLocalCopyOfSourceFile(char const*,char *,ulong)::s_SearchPaths, FindLocalCopyOfSourceFile(char const*,char *,ulong)::s_SearchPaths, __dso_handle, CFindLocalCopyOfSourceFile_SearchPaths::~CFindLocalCopyOfSourceFile_SearchPaths()
bool __fastcall FindLocalCopyOfSourceFile(const char *szFileName, char *szOutputBuffer, size_t nOutputSize)
{
  char v4; // al
  __int64 v5; // r14
  int v6; // r15d
  const char *v7; // rax
  char v8; // al
  const char *j; // r13
  char v11; // al
  __int64 v12; // r14
  int v13; // r15d
  const char *v14; // rax
  unsigned int nOutputSizea; // [rsp+8h] [rbp-268h]
  bool ia; // [rsp+1Ch] [rbp-254h]
  int i; // [rsp+1Ch] [rbp-254h]
  bool ib; // [rsp+1Ch] [rbp-254h]
  char szCurrentDir[260]; // [rsp+20h] [rbp-250h] BYREF
  char szTestName[264]; // [rsp+130h] [rbp-140h] BYREF
  unsigned __int64 v22; // [rsp+238h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  nOutputSizea = nOutputSize;
  if ( V_IsAbsolutePath(szFileName) != 0 )
  {
    v4 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(&g_pFullFileSystem->IBaseFileSystem, szFileName, 0);
    if ( v4 != 0 )
    {
      ib = v4;
      _V_FixupPathName(szOutputBuffer, nOutputSizea, szFileName, 0);
      return ib;
    }
  }
  else if ( Plat_getwd(szCurrentDir, 260, 0) != 0 )
  {
    _V_ComposeFileName(szCurrentDir, szFileName, szTestName, 260);
    v8 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(&g_pFullFileSystem->IBaseFileSystem, szTestName, 0);
    if ( v8 != 0 )
    {
LABEL_8:
      ia = v8;
      _V_FixupPathName(szOutputBuffer, nOutputSizea, szTestName, 0);
      return ia;
    }
    if ( `guard variable for'FindLocalCopyOfSourceFile(char const*,char *,unsigned long)::s_SearchPaths != 0 )
      goto LABEL_4;
    goto LABEL_12;
  }
  if ( `guard variable for'FindLocalCopyOfSourceFile(char const*,char *,unsigned long)::s_SearchPaths == 0 )
  {
LABEL_12:
    if ( __cxa_guard_acquire(&`guard variable for'FindLocalCopyOfSourceFile(char const*,char *,unsigned long)::s_SearchPaths) != 0 )
    {
      CFindLocalCopyOfSourceFile_SearchPaths::CFindLocalCopyOfSourceFile_SearchPaths(&FindLocalCopyOfSourceFile(char const*,char *,unsigned long)::s_SearchPaths);
      __cxa_guard_release(&`guard variable for'FindLocalCopyOfSourceFile(char const*,char *,unsigned long)::s_SearchPaths);
      __cxa_atexit(
        CFindLocalCopyOfSourceFile_SearchPaths::~CFindLocalCopyOfSourceFile_SearchPaths,
        &FindLocalCopyOfSourceFile(char const*,char *,unsigned long)::s_SearchPaths,
        &_dso_handle);
    }
  }
LABEL_4:
  if ( FindLocalCopyOfSourceFile(char const*,char *,unsigned long)::s_SearchPaths.m_LocalTestDirectories.m_Size > 0 )
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v7 = CUtlString::Get(&FindLocalCopyOfSourceFile(char const*,char *,unsigned long)::s_SearchPaths.m_LocalTestDirectories.m_Memory.m_pMemory[v5]);
      _V_ComposeFileName(v7, szFileName, szTestName, 260);
      v8 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(&g_pFullFileSystem->IBaseFileSystem, szTestName, 0);
      if ( v8 != 0 )
        goto LABEL_8;
      ++v6;
      ++v5;
      if ( FindLocalCopyOfSourceFile(char const*,char *,unsigned long)::s_SearchPaths.m_LocalTestDirectories.m_Size <= v6 )
      {
        if ( szFileName != 0 )
          i = strlen(szFileName);
        else
          i = 0;
        for ( j = &szFileName[i]; --i >= 0; --j )
        {
          v11 = *(j - 1);
          if ( (v11 == 47 || v11 == 92)
            && FindLocalCopyOfSourceFile(char const*,char *,unsigned long)::s_SearchPaths.m_LocalTestDirectories.m_Size > 0 )
          {
            v12 = 0;
            v13 = 0;
            do
            {
              v14 = CUtlString::Get(&FindLocalCopyOfSourceFile(char const*,char *,unsigned long)::s_SearchPaths.m_LocalTestDirectories.m_Memory.m_pMemory[v12]);
              _V_ComposeFileName(v14, j, szTestName, 260);
              v8 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(
                     &g_pFullFileSystem->IBaseFileSystem,
                     szTestName,
                     0);
              if ( v8 != 0 )
                goto LABEL_8;
              ++v13;
              ++v12;
            }
            while ( FindLocalCopyOfSourceFile(char const*,char *,unsigned long)::s_SearchPaths.m_LocalTestDirectories.m_Size > v13 );
          }
        }
        return 0;
      }
    }
  }
  return 0;
}


// CFindLocalCopyOfSourceFile_SearchPaths::CFindLocalCopyOfSourceFile_SearchPaths  (line 914, @0x000000000312c870, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<CUtlString>, Element, FileFindHandle_t, GrowMemory, V_ComposeFileName<long unsigned int>, V_StripLastDir<long unsigned int>, V_strncpy<long unsigned int>, operator[], ~CUtlString, ~CUtlVector, ~FileFindHandle_t
// calls: Plat_GetModuleFilename, _V_StripLastDir, _V_ComposeFileName, _V_strncpy, CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, Plat_GetEnv, CUtlMemory<CUtlString, int>::Grow, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: FindLocalCopyOfSourceFile
// strings: "src/public/tier0/platform.h", "src", "VGAME", "gameinfo.txt", "gameinfo.gi", "sdktools/bin/vproj.exe" (7 total)
void __fastcall CFindLocalCopyOfSourceFile_SearchPaths::CFindLocalCopyOfSourceFile_SearchPaths(
        CFindLocalCopyOfSourceFile_SearchPaths *const this)
{
  __int64 m_Size; // rbx
  int v3; // eax
  CUtlString *v4; // rbx
  const char *v5; // rax
  __int64 Env; // rax
  __int64 v7; // rbx
  int v8; // eax
  CUtlString *v9; // rbx
  const char *v10; // rax
  _BYTE *v11; // rbx
  __int64 v12; // rbx
  int v13; // eax
  CUtlString *v14; // rbx
  const char *v15; // rax
  char v16; // al
  __int64 v17; // rbx
  int v18; // eax
  CUtlString *v19; // rbx
  const char *v20; // rax
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-4D8h]
  CUtlString v22; // [rsp+30h] [rbp-4B0h] BYREF
  CUtlString v23[2]; // [rsp+40h] [rbp-4A0h] BYREF
  CUtlString v24[2]; // [rsp+50h] [rbp-490h] BYREF
  FileFindHandle_t hSearch; // [rsp+60h] [rbp-480h] BYREF
  char szLocalGameDirectory[272]; // [rsp+70h] [rbp-470h] BYREF
  char szSearchString[272]; // [rsp+180h] [rbp-360h] BYREF
  char szFullDirectory[272]; // [rsp+290h] [rbp-250h] BYREF
  char szTestGameInfo[264]; // [rsp+3A0h] [rbp-140h] BYREF
  unsigned __int64 v30; // [rsp+4A8h] [rbp-38h]

  this->m_LocalTestDirectories.m_Size = 0;
  this->m_LocalTestDirectories.m_Memory.m_pMemory = 0;
  v30 = __readfsqword(0x28u);
  this->m_LocalTestDirectories.m_Memory.m_nAllocationCount = 0;
  this->m_LocalTestDirectories.m_Memory.m_nGrowSize = 0;
  Plat_GetModuleFilename(szFullDirectory, 260);
  if ( szFullDirectory[0] != 0 )
  {
    while ( 1 )
    {
      _V_ComposeFileName(szFullDirectory, "src/public/tier0/platform.h", szTestGameInfo, 260);
      if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(&g_pFullFileSystem->IBaseFileSystem, szTestGameInfo, 0) != 0 )
        break;
      if ( _V_StripLastDir(szFullDirectory, 260) == 0 )
      {
        szFullDirectory[0] = 0;
        goto LABEL_13;
      }
      if ( szFullDirectory[0] == 0 )
        goto LABEL_13;
    }
    _V_ComposeFileName(szFullDirectory, "src", szTestGameInfo, 260);
    _V_strncpy(szFullDirectory, szTestGameInfo, 260);
    if ( szFullDirectory[0] != 0 )
    {
      v22.m_pString = 0;
      CUtlString::Set(&v22, szFullDirectory);
      m_Size = this->m_LocalTestDirectories.m_Size;
      v3 = this->m_LocalTestDirectories.m_Size;
      if ( m_Size == this->m_LocalTestDirectories.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&this->m_LocalTestDirectories.m_Memory, 1);
        v3 = this->m_LocalTestDirectories.m_Size;
      }
      this->m_LocalTestDirectories.m_Size = v3 + 1;
      v4 = &this->m_LocalTestDirectories.m_Memory.m_pMemory[m_Size];
      if ( v4 != 0 )
      {
        v4->m_pString = 0;
        v5 = CUtlString::Get(&v22);
        CUtlString::Set(v4, v5);
      }
      if ( v22.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v22);
    }
  }
LABEL_13:
  Env = Plat_GetEnv("VGAME");
  if ( Env != 0 )
  {
    _V_strncpy(szLocalGameDirectory, Env, 260);
  }
  else
  {
    Plat_GetModuleFilename(szLocalGameDirectory, 260);
    if ( szLocalGameDirectory[0] == 0 )
      return;
    while ( 1 )
    {
      _V_ComposeFileName(szLocalGameDirectory, "sdktools/bin/vproj.exe", szTestGameInfo, 260);
      if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(&g_pFullFileSystem->IBaseFileSystem, szTestGameInfo, 0) != 0 )
        break;
      _V_ComposeFileName(szLocalGameDirectory, "sdktools/bin/vprojUI.exe", szTestGameInfo, 260);
      if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(&g_pFullFileSystem->IBaseFileSystem, szTestGameInfo, 0) != 0 )
        break;
      if ( _V_StripLastDir(szLocalGameDirectory, 260) == 0 || szLocalGameDirectory[0] == 0 )
        return;
    }
  }
  if ( szLocalGameDirectory[0] != 0 )
  {
    hSearch.m_pFileSystem = 0;
    CUtlString::Set(&hSearch, szLocalGameDirectory);
    v7 = this->m_LocalTestDirectories.m_Size;
    v8 = this->m_LocalTestDirectories.m_Size;
    if ( v7 == this->m_LocalTestDirectories.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CUtlString,int>::Grow(&this->m_LocalTestDirectories.m_Memory, 1);
      v8 = this->m_LocalTestDirectories.m_Size;
    }
    this->m_LocalTestDirectories.m_Size = v8 + 1;
    v9 = &this->m_LocalTestDirectories.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
    {
      v9->m_pString = 0;
      v10 = CUtlString::Get(&hSearch);
      CUtlString::Set(v9, v10);
    }
    if ( hSearch.m_pFileSystem != 0 )
      CUtlString::FreeMemoryBlock(&hSearch);
    _V_ComposeFileName(szLocalGameDirectory, "*", szSearchString, 260);
    hSearch.m_pFileSystem = 0;
    hSearch.m_nFindDataIndex = 0;
    v11 = (*(g_pFullFileSystem->_vptr_IAppSystem + 37))(g_pFullFileSystem, szSearchString, &hSearch);
    if ( v11 != 0 )
    {
      p_m_Memory = &this->m_LocalTestDirectories.m_Memory;
      do
      {
        if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 39))(g_pFullFileSystem, &hSearch) != 0
          && (*v11 != 46 || (v16 = v11[1]) != 0 && (v16 != 46 || v11[2] != 0)) )
        {
          _V_ComposeFileName(szLocalGameDirectory, v11, szFullDirectory, 260);
          _V_ComposeFileName(szFullDirectory, "gameinfo.txt", szTestGameInfo, 260);
          if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(
                 &g_pFullFileSystem->IBaseFileSystem,
                 szTestGameInfo,
                 0) != 0 )
          {
            v23[0].m_pString = 0;
            CUtlString::Set(v23, szFullDirectory);
            v12 = this->m_LocalTestDirectories.m_Size;
            v13 = this->m_LocalTestDirectories.m_Size;
            if ( v12 == this->m_LocalTestDirectories.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CUtlString,int>::Grow(p_m_Memory, 1);
              v13 = this->m_LocalTestDirectories.m_Size;
            }
            this->m_LocalTestDirectories.m_Size = v13 + 1;
            v14 = &this->m_LocalTestDirectories.m_Memory.m_pMemory[v12];
            if ( v14 != 0 )
            {
              v14->m_pString = 0;
              v15 = CUtlString::Get(v23);
              CUtlString::Set(v14, v15);
            }
            if ( v23[0].m_pString != 0 )
              CUtlString::FreeMemoryBlock(v23);
          }
          else
          {
            _V_ComposeFileName(szFullDirectory, "gameinfo.gi", szTestGameInfo, 260);
            if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(
                   &g_pFullFileSystem->IBaseFileSystem,
                   szTestGameInfo,
                   0) != 0 )
            {
              v24[0].m_pString = 0;
              CUtlString::Set(v24, szFullDirectory);
              v17 = this->m_LocalTestDirectories.m_Size;
              v18 = this->m_LocalTestDirectories.m_Size;
              if ( v17 == this->m_LocalTestDirectories.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CUtlString,int>::Grow(p_m_Memory, 1);
                v18 = this->m_LocalTestDirectories.m_Size;
              }
              this->m_LocalTestDirectories.m_Size = v18 + 1;
              v19 = &this->m_LocalTestDirectories.m_Memory.m_pMemory[v17];
              if ( v19 != 0 )
              {
                v19->m_pString = 0;
                v20 = CUtlString::Get(v24);
                CUtlString::Set(v19, v20);
              }
              if ( v24[0].m_pString != 0 )
                CUtlString::FreeMemoryBlock(v24);
            }
          }
        }
        v11 = (*(g_pFullFileSystem->_vptr_IAppSystem + 38))(g_pFullFileSystem, &hSearch);
      }
      while ( v11 != 0 );
    }
    (*(g_pFullFileSystem->_vptr_IAppSystem + 40))(g_pFullFileSystem, &hSearch);
    if ( hSearch.m_pFileSystem != 0 )
      (*(hSearch.m_pFileSystem->_vptr_IAppSystem + 40))(hSearch.m_pFileSystem, &hSearch);
  }
}


// CBaseFile::ReadLines  (line 1042, @0x000000000312d270, libserver.so)  // inlines: AddToTail, CopyAndAddToTail, CopyConstruct<char*>, Element, GrowMemory, ReadLine, V_memcpy, V_strlen, memcpy, operator[], strchr
// calls: memcpy, strchr, CUtlMemory<char*, int>::Grow, __stack_chk_fail
void __fastcall CBaseFile::ReadLines(CBaseFile *const this, CUtlStringList *const lineList, int nMaxLineLength)
{
  void *v5; // rsp
  unsigned __int64 v6; // rbx
  int *v7; // rdx
  int v8; // ecx
  unsigned int v9; // eax
  void *v10; // r13
  size_t v11; // rdx
  __int64 m_Size; // rax
  int v13; // edx
  char **v14; // rax
  char *v15; // rax
  __int64 v16; // rax
  CUtlVectorBase<char*,CUtlMemory<char*,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-58h]
  size_t n; // [rsp+8h] [rbp-50h] BYREF
  int v19; // [rsp+10h] [rbp-48h]
  int nMaxLineLengtha; // [rsp+14h] [rbp-44h]
  unsigned __int64 v21; // [rsp+20h] [rbp-38h]

  nMaxLineLengtha = nMaxLineLength;
  v21 = __readfsqword(0x28u);
  v5 = alloca(((nMaxLineLength + 31) & 0xFFFFFFF0) + 16LL);
  p_m_Memory = &lineList->m_Memory;
  v6 = &n & 0xFFFFFFFFFFFFFFEFLL;
  while ( (*(g_pFullFileSystem->_vptr_IAppSystem + 33))(
            g_pFullFileSystem,
            &n & 0xFFFFFFFFFFFFFFEFLL,
            nMaxLineLengtha,
            this->m_FileHandle) != 0 )
  {
    v15 = strchr((&n & 0xFFFFFFFFFFFFFFEFLL), 10);
    if ( v15 != 0 )
      *v15 = 0;
    if ( v6 != 0 )
    {
      v7 = (&n & 0xFFFFFFFFFFFFFFEFLL);
      do
      {
        v8 = *v7++;
        v9 = ~v8 & (v8 - 16843009) & 0x80808080;
      }
      while ( v9 == 0 );
      if ( (~v8 & (v8 - 16843009) & 0x8080) == 0 )
      {
        LOBYTE(v9) = (~v8 & (v8 - 16843009) & 0x80808080) >> 16;
        LODWORD(v7) = v7 + 2;
      }
      v19 = v7 - (__CFADD__(v9, v9) + 3) - v6 + 1;
      n = v19;
      v10 = (**g_pMemAlloc)(g_pMemAlloc, v19);
      v11 = n;
      if ( v19 < 0 )
        __debugbreak();
    }
    else
    {
      v16 = (**g_pMemAlloc)(g_pMemAlloc, 1);
      v11 = 1;
      v10 = v16;
    }
    memcpy(v10, (&n & 0xFFFFFFFFFFFFFFEFLL), v11);
    m_Size = lineList->m_Size;
    v13 = lineList->m_Size;
    if ( m_Size == lineList->m_Memory.m_nAllocationCount )
    {
      LODWORD(n) = lineList->m_Size;
      CUtlMemory<char *,int>::Grow(p_m_Memory, 1);
      v13 = lineList->m_Size;
      m_Size = n;
    }
    lineList->m_Size = v13 + 1;
    v14 = &lineList->m_Memory.m_pMemory[m_Size];
    if ( v14 != 0 )
      *v14 = v10;
  }
}


// CBaseFile::ReadFile  (line 1054, @0x000000000312b240, libserver.so)  // inlines: Read, Size
// calls: CUtlBuffer::EnsureCapacity, CUtlBuffer::SeekPut
void __fastcall CBaseFile::ReadFile(CBaseFile *const this, CUtlBuffer *const fileData)
{
  unsigned int v4; // r14d
  int v5; // eax
  int v6; // eax

  v4 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 6))(&g_pFullFileSystem->IBaseFileSystem, this->m_FileHandle);
  v5 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 6))(&g_pFullFileSystem->IBaseFileSystem, this->m_FileHandle);
  CUtlBuffer::EnsureCapacity(fileData, v5);
  v6 = (*g_pFullFileSystem->_vptr_IBaseFileSystem)(
         &g_pFullFileSystem->IBaseFileSystem,
         fileData->m_Memory.m_pMemory,
         v4,
         this->m_FileHandle);
  CUtlBuffer::SeekPut(fileData, CUtlBuffer::SeekType_t::SEEK_HEAD, v6);
}


// V_RelativePathHasInvalidChars  (line 1065, @0x000000000312b2c0, libserver.so)  // inlines: V_isalnum
// callers: V_ClassifyAndValidatePath
bool __fastcall V_RelativePathHasInvalidChars(const char *pRelativePath)
{
  char v1; // al
  char v2; // si
  char v3; // dl
  char v4; // dl

  v1 = *pRelativePath;
  if ( *pRelativePath != 0 )
  {
    v2 = 0;
    while ( 1 )
    {
      if ( ((v1 & 0xDF) - 65) <= 0x19u || (v1 - 48) <= 9u )
      {
        v3 = 0;
        if ( (v1 - 65) > 0x19u )
        {
          v3 = 1;
          if ( v1 == 95 )
          {
LABEL_11:
            v3 = 1;
LABEL_12:
            if ( (v1 != 46 || v2 == 46) && v3 == 0 )
              return 1;
LABEL_6:
            v4 = *++pRelativePath;
            if ( *pRelativePath == 0 )
              return 0;
            goto LABEL_7;
          }
        }
      }
      else
      {
        v3 = 0;
        if ( v1 == 95 )
          goto LABEL_11;
      }
      if ( v1 == 47 )
        goto LABEL_6;
      if ( v1 != 92 )
        goto LABEL_12;
      v4 = *++pRelativePath;
      if ( *pRelativePath == 0 )
        return 0;
LABEL_7:
      v2 = v1;
      v1 = v4;
    }
  }
  return 0;
}


// V_DescribeFilePathClass  (line 1116, @0x000000000312b350, libserver.so)
// strings: "Valid Game Absolute Path", "Valid Content Absolute Path", "Valid External Path", "The filename may only contain lower case alphanumeric characters and underscores.", "Invalid Path", "Path Overflow, must be less than 260 characters." (8 total)
// globals: jpt_312B36D
const char *__fastcall V_DescribeFilePathClass(FilePathClass_t nClass)
{
  const char *result; // rax

  switch ( nClass )
  {
    case FilePathClass_t::FILEPATHCLASS_VALID_RELATIVE:
      result = "Valid Relative Path";
      break;
    case FilePathClass_t::FILEPATHCLASS_VALID_GAME_ABSOLUTE:
      result = "Valid Game Absolute Path";
      break;
    case FilePathClass_t::FILEPATHCLASS_VALID_CONTENT_ABSOLUTE:
      result = "Valid Content Absolute Path";
      break;
    case FilePathClass_t::FILEPATHCLASS_VALID_EXTERNAL:
      result = "Valid External Path";
      break;
    case FilePathClass_t::FILEPATHCLASS_INVALID_BAD_CHARS:
      result = "The filename may only contain lower case alphanumeric characters and underscores.";
      break;
    case FilePathClass_t::FILEPATHCLASS_INVALID_EXTERNAL_OR_UNKNOWN:
      result = "Invalid Path";
      break;
    case FilePathClass_t::FILEPATHCLASS_INVALID_MAXPATH_OVERFLOW:
      result = "Path Overflow, must be less than 260 characters.";
      break;
    default:
      result = "Unknown Path Class";
      break;
  }
  return result;
}


// V_ClassifyAndValidatePath  (line 1134, @0x000000000312b3f0, libserver.so)  // inlines: GetSearchPath, V_FixupPathName<long unsigned int>, V_MakeRelativePath<long unsigned int>, V_strlen
// calls: _V_FixupPathName, V_IsAbsolutePath, V_RelativePathHasInvalidChars, _V_MakeRelativePath, __stack_chk_fail
// strings: "CONTENTROOT", "GAMEROOT"
void __fastcall V_ClassifyAndValidatePath(const char *pPathOrFileName, FilePathClass_t *pOutClass, bool *pOutIsInvalid)
{
  bool HasInvalidChars; // al
  char pExtractedRelativePath[272]; // [rsp+10h] [rbp-570h] BYREF
  char pContentRoot[272]; // [rsp+120h] [rbp-460h] BYREF
  char pGameRoot[272]; // [rsp+230h] [rbp-350h] BYREF
  char pFixedPath[520]; // [rsp+340h] [rbp-240h] BYREF
  unsigned __int64 v10; // [rsp+548h] [rbp-38h]

  v10 = __readfsqword(0x28u);
  _V_FixupPathName(pFixedPath, 520, pPathOrFileName, 0);
  if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 140))(g_pFullFileSystem, pFixedPath) != 0 )
  {
    if ( strlen(pFixedPath) > 259 )
    {
      if ( pOutClass != 0 )
        *pOutClass = FilePathClass_t::FILEPATHCLASS_INVALID_MAXPATH_OVERFLOW;
    }
    else if ( pOutClass != 0 )
    {
      *pOutClass = FilePathClass_t::FILEPATHCLASS_INVALID_EXTERNAL_OR_UNKNOWN;
    }
    if ( pOutIsInvalid != 0 )
      *pOutIsInvalid = 1;
    return;
  }
  if ( V_IsAbsolutePath(pFixedPath) == 0 )
  {
    HasInvalidChars = V_RelativePathHasInvalidChars(pFixedPath);
    if ( pOutClass != 0 )
      *pOutClass = HasInvalidChars
                 ? FilePathClass_t::FILEPATHCLASS_INVALID_BAD_CHARS
                 : FilePathClass_t::FILEPATHCLASS_VALID_RELATIVE;
LABEL_13:
    if ( pOutIsInvalid != 0 )
      *pOutIsInvalid = HasInvalidChars;
    return;
  }
  (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "CONTENTROOT", 0, pContentRoot, 260);
  if ( _V_MakeRelativePath(pFixedPath, pContentRoot, pExtractedRelativePath, 260) != 0
    && pExtractedRelativePath[0] != 46 )
  {
    HasInvalidChars = V_RelativePathHasInvalidChars(pExtractedRelativePath);
    if ( pOutClass != 0 )
      *pOutClass = !HasInvalidChars
                 ? FilePathClass_t::FILEPATHCLASS_VALID_CONTENT_ABSOLUTE
                 : FilePathClass_t::FILEPATHCLASS_INVALID_BAD_CHARS;
    goto LABEL_13;
  }
  (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "GAMEROOT", 0, pGameRoot, 260);
  if ( _V_MakeRelativePath(pFixedPath, pGameRoot, pExtractedRelativePath, 260) != 0 && pExtractedRelativePath[0] != 46 )
  {
    HasInvalidChars = V_RelativePathHasInvalidChars(pExtractedRelativePath);
    if ( pOutClass != 0 )
      *pOutClass = !HasInvalidChars
                 ? FilePathClass_t::FILEPATHCLASS_VALID_GAME_ABSOLUTE
                 : FilePathClass_t::FILEPATHCLASS_INVALID_BAD_CHARS;
    goto LABEL_13;
  }
  if ( pOutClass != 0 )
    *pOutClass = FilePathClass_t::FILEPATHCLASS_VALID_EXTERNAL;
  if ( pOutIsInvalid != 0 )
    *pOutIsInvalid = 0;
}


