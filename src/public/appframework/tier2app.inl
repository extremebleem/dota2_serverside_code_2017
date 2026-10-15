
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTier2Application::~CTier2Application  (line 57, @0x0000000002339c50, libserver.so)  // inlines: ~CBaseAppSystem, ~CTier0AppSystem, ~CTier1AppSystem, ~CTier1Application, ~IApplication
void __fastcall CTier2Application::~CTier2Application(CTier2Application *const this)
{
  this->_vptr_IAppSystem = &off_408AB70;
}


// CTier2Application::~CTier2Application  (line 57, @0x000000000233ac80, libserver.so)  // inlines: ~CBaseAppSystem, ~CTier0AppSystem, ~CTier1AppSystem, ~CTier1Application, ~CTier2Application, ~IApplication
// calls: operator delete
void __fastcall CTier2Application::~CTier2Application(CTier2Application *const this)
{
  this->_vptr_IAppSystem = &off_408AB70;
  operator delete(this);
}


// CTier2Application::Connect  (line 248, @0x000000000233bb10, libserver.so)  // inlines: Connect
// calls: ConnectTier1Libraries, ConnectTier2Libraries
bool __fastcall CTier2Application::Connect(CTier2Application *const this, CreateInterfaceFn factory)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-28h] BYREF
  CreateInterfaceFn pFactoryList; // [rsp+18h] [rbp-18h] BYREF

  factorya = factory;
  pFactoryList = factory;
  ConnectTier1Libraries(&pFactoryList, 1);
  ConnectTier2Libraries(&factorya, 1);
  ++this->m_nAppTier2LibraryConnects;
  return 1;
}


// CTier2Application::Reconnect  (line 258, @0x000000000233bb60, libserver.so)  // inlines: Reconnect
// calls: ReconnectInterface, ConnectTier2Libraries
void __fastcall CTier2Application::Reconnect(
        CTier2Application *const this,
        CreateInterfaceFn factory,
        const char *pInterfaceName)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-18h] BYREF

  factorya = factory;
  ReconnectInterface(factory, pInterfaceName);
  ConnectTier2Libraries(&factorya, 1);
  ++this->m_nAppTier2LibraryConnects;
}


// CTier2Application::Disconnect  (line 265, @0x000000000233bbb0, libserver.so)  // inlines: Disconnect
// calls: DisconnectTier2Libraries, DisconnectTier1Libraries
void __fastcall CTier2Application::Disconnect(CTier2Application *const this)
{
  int v2; // eax
  bool v3; // zf

  if ( this->m_nAppTier2LibraryConnects > 0 )
  {
    do
    {
      DisconnectTier2Libraries();
      v2 = this->m_nAppTier2LibraryConnects - 1;
      v3 = this->m_nAppTier2LibraryConnects == 1;
      this->m_nAppTier2LibraryConnects = v2;
    }
    while ( v2 >= 0 && !v3 );
  }
  DisconnectTier1Libraries();
}


// CTier2Application::MountAddon  (line 277, @0x0000000002346290, libserver.so)
// calls: CTier2AppSystemDict::MountAddon
void __fastcall CTier2Application::MountAddon(CTier2Application *const this, const char *pAddonName)
{
  CTier2AppSystemDict::MountAddon(this->m_pDict, pAddonName);
}


// CTier2Application::UnmountAddon  (line 282, @0x0000000002346b20, libserver.so)  // inlines: AddMultipleToTail, CUtlString, Defined, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, IsUGCAddonName, Length, SetPtr, UnmountAddon, V_strlen, operator char const*, operator const UtlSymId_t, operator=, operator==, operator[], ~CUtlString
// calls: CUtlSymbolTable::Find, CUtlSymbolTable::AddString, CUtlMemory<int, int>::Grow, CTier2AppSystemDict::GetIDFromAddonName, CTier2AppSystemDict::GetFullAddonPathFromAddonName, CUtlString::FreeMemoryBlock, strlen, CUtlString::Get, V_IsAbsolutePath, V_GetFileExtension, V_stricmp_fast, CTier2AppSystemDict::RemoveAddonSearchPaths (14 total)
// strings: "CONTENTADDONS", "CONTENT"
void __fastcall CTier2Application::UnmountAddon(CTier2Application *const this, const char *pAddonName)
{
  const char *v2; // rbx
  CTier2AppSystemDict *m_pDict; // r12
  __int64 v4; // r15
  int m_Size; // eax
  int v6; // edx
  int m_nAllocationCount; // eax
  const char *v8; // rsi
  __int64 v9; // r14
  int v10; // eax
  int v11; // r15d
  int *v12; // rdx
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  __int64 FileExtension; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // esi
  int v20; // r8d
  int v21; // r9d
  int v22; // eax
  int v23; // ebx
  CUtlString v24; // [rsp+10h] [rbp-50h] BYREF
  char *s; // [rsp+20h] [rbp-40h] BYREF

  v2 = pAddonName;
  m_pDict = this->m_pDict;
  if ( pAddonName != 0 && *pAddonName != 0 )
  {
    if ( m_pDict->m_nAllowAddonChanges.m_value == 0 )
    {
      CTier2AppSystemDict::UnmountAddon(pAddonName, pAddonName);
      v23 = v22;
      if ( v24.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v24);
      Unwind_Resume(v23, v19, v17, v18, v20, v21);
    }
    CUtlSymbolTable::Find(&m_pDict->m_addonRefcounts.m_SymbolTable, pAddonName);
    if ( s != 0xFFFF )
    {
      CUtlSymbolTable::AddString(&m_pDict->m_addonRefcounts.m_SymbolTable, v2);
      v4 = s;
      m_Size = m_pDict->m_addonRefcounts.m_Vector.m_Size;
      if ( s >= m_Size )
      {
        v6 = s + 1;
        if ( m_Size < v6 )
        {
          m_nAllocationCount = m_pDict->m_addonRefcounts.m_Vector.m_Memory.m_nAllocationCount;
          if ( v6 > m_nAllocationCount )
          {
            CUtlMemory<int,int>::Grow(&m_pDict->m_addonRefcounts.m_Vector.m_Memory, v6 - m_nAllocationCount);
            v6 = s + 1;
          }
          m_pDict->m_addonRefcounts.m_Vector.m_Size = v6;
        }
      }
      if ( m_pDict->m_addonRefcounts.m_Vector.m_Memory.m_pMemory[v4] != 0 )
      {
        CUtlSymbolTable::AddString(&m_pDict->m_addonRefcounts.m_SymbolTable, v2);
        v9 = s;
        v10 = m_pDict->m_addonRefcounts.m_Vector.m_Size;
        if ( s >= v10 )
        {
          v11 = s + 1;
          if ( v10 < v11 )
          {
            v15 = m_pDict->m_addonRefcounts.m_Vector.m_Memory.m_nAllocationCount;
            if ( v11 > v15 )
              CUtlMemory<int,int>::Grow(&m_pDict->m_addonRefcounts.m_Vector.m_Memory, v11 - v15);
            m_pDict->m_addonRefcounts.m_Vector.m_Size = v11;
          }
        }
        v12 = &m_pDict->m_addonRefcounts.m_Vector.m_Memory.m_pMemory[v9];
        v13 = *v12 - 1;
        v14 = *v12 == 1;
        *v12 = v13;
        if ( v13 < 0 || v14 )
        {
          v24.m_pString = 0;
          if ( CTier2AppSystemDict::GetIDFromAddonName(v2, v8) != 0 )
          {
            CTier2AppSystemDict::GetFullAddonPathFromAddonName(&s, m_pDict, v2);
            v24.m_pString = s;
            if ( s != 0 && strlen(s) > 0 )
              v2 = CUtlString::Get(&v24);
          }
          if ( V_IsAbsolutePath(v2) != 0 )
          {
            FileExtension = V_GetFileExtension(v2);
            if ( FileExtension == 0 || V_stricmp_fast(FileExtension, "vpk") != 0 )
            {
              if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 28))(g_pFullFileSystem, v2, "GAME") != 0 )
                (*(g_pFullFileSystem->_vptr_IAppSystem + 14))(g_pFullFileSystem, v2, "GAME");
            }
            else
            {
              (*(g_pFullFileSystem->_vptr_IAppSystem + 114))(g_pFullFileSystem, v2, "GAME");
            }
            if ( v24.m_pString == 0 )
              return;
          }
          else
          {
            CTier2AppSystemDict::RemoveAddonSearchPaths(m_pDict, "GAME", "ADDONS", v2);
            CTier2AppSystemDict::RemoveAddonSearchPaths(m_pDict, "CONTENT", "CONTENTADDONS", v2);
            if ( v24.m_pString == 0 )
              return;
          }
          CUtlString::FreeMemoryBlock(&v24);
        }
      }
    }
  }
}


// CTier2Application::GetMountedAddons  (line 287, @0x0000000002345730, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CUtlString, Construct<CUtlString>, Element, EnsureCount, GetMountedAddons, GetNumStrings, GrowMemory, GrowVector, InsertMultipleBefore, String, operator const UtlSymId_t, operator[]
// calls: CUtlString::Set, CUtlSymbolTable::String, CUtlSymbolTable::AddString, CUtlMemory<CUtlString, int>::Grow, CUtlMemory<int, int>::Grow
void __fastcall CTier2Application::GetMountedAddons(
        CTier2Application *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const mountedAddons)
{
  CAppSystemDict *m_pDict; // r15
  int v4; // r14d
  __int64 m_Size; // rdx
  int v6; // esi
  __int64 v7; // rdi
  CUtlString *v8; // rdx
  CUtlString *v9; // rdi
  UtlSymId_t m_Id; // dx
  int vptr_CAppSystemDict; // esi
  int v12; // r9d
  int m_pMemory; // esi
  const char *v14; // rax
  UtlSymId_t v15; // [rsp+Ch] [rbp-64h]
  int v16; // [rsp+18h] [rbp-58h]
  char *v17; // [rsp+18h] [rbp-58h]
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int> >::CAllocator *p_m_Memory; // [rsp+20h] [rbp-50h]
  char *pValue; // [rsp+28h] [rbp-48h]
  char *pValuea; // [rsp+28h] [rbp-48h]
  int pValueb; // [rsp+28h] [rbp-48h]
  CUtlSymbol id; // [rsp+30h] [rbp-40h] BYREF

  m_pDict = this->m_pDict;
  if ( HIWORD(m_pDict[1].m_Systems.m_Memory.m_nAllocationCount) != 0 )
  {
    v4 = 0;
    p_m_Memory = &mountedAddons->m_Memory;
    do
    {
      id.m_Id = v4;
      pValue = CUtlSymbolTable::String(&m_pDict[1].m_modules.m_Memory.m_nAllocationCount, &id);
      CUtlSymbolTable::AddString(&m_pDict[1].m_modules.m_Memory.m_nAllocationCount, pValue);
      m_Id = id.m_Id;
      vptr_CAppSystemDict = m_pDict[1]._vptr_CAppSystemDict;
      v14 = pValue;
      if ( id.m_Id >= vptr_CAppSystemDict )
      {
        v12 = id.m_Id + 1;
        if ( vptr_CAppSystemDict < v12 )
        {
          m_pMemory = m_pDict[1].m_modules.m_Memory.m_pMemory;
          if ( v12 > m_pMemory )
          {
            v17 = pValue;
            v15 = id.m_Id;
            pValueb = id.m_Id + 1;
            CUtlMemory<int,int>::Grow(&m_pDict[1].m_modules, v12 - m_pMemory);
            m_Id = v15;
            v14 = v17;
            v12 = pValueb;
          }
          LODWORD(m_pDict[1]._vptr_CAppSystemDict) = v12;
        }
      }
      if ( *(*&m_pDict[1].m_modules.m_Size + 4LL * m_Id) > 0 )
      {
        m_Size = mountedAddons->m_Size;
        v6 = mountedAddons->m_Size;
        if ( m_Size == mountedAddons->m_Memory.m_nAllocationCount )
        {
          v16 = mountedAddons->m_Size;
          pValuea = v14;
          CUtlMemory<CUtlString,int>::Grow(p_m_Memory, 1);
          v6 = mountedAddons->m_Size;
          m_Size = v16;
          v14 = pValuea;
        }
        v7 = m_Size;
        mountedAddons->m_Size = v6 + 1;
        v8 = &mountedAddons->m_Memory.m_pMemory[m_Size];
        if ( v8 != 0 )
        {
          v8->m_pString = 0;
          v9 = &mountedAddons->m_Memory.m_pMemory[v7];
        }
        else
        {
          v9 = 0;
        }
        CUtlString::Set(v9, v14);
      }
      ++v4;
    }
    while ( v4 < HIWORD(m_pDict[1].m_Systems.m_Memory.m_nAllocationCount) );
  }
}


// CTier2Application::GetMountedAddons  (line 292, @0x0000000002345600, libserver.so)  // inlines: AddMultipleToTail, EnsureCount, GetMountedAddons, GetNumStrings, GrowMemory, GrowVector, InsertMultipleBefore, String, operator const UtlSymId_t, operator[]
// calls: CUtlSymbolTable::String, CUtlSymbolTable::AddString, CUtlMemory<int, int>::Grow
int __fastcall CTier2Application::GetMountedAddons(
        CTier2Application *const this,
        const char **pOutAddons,
        int nMaxAddons)
{
  CAppSystemDict *m_pDict; // r14
  int v4; // r13d
  int v5; // r15d
  __int64 v6; // rdx
  UtlSymId_t m_Id; // r10
  int vptr_CAppSystemDict; // edx
  const char *v9; // rax
  int v10; // r11d
  int m_pMemory; // edx
  const char *v13; // [rsp+8h] [rbp-68h]
  UtlSymId_t v15; // [rsp+20h] [rbp-50h]
  const char *v17; // [rsp+28h] [rbp-48h]
  int v18; // [rsp+28h] [rbp-48h]
  CUtlSymbol id; // [rsp+30h] [rbp-40h] BYREF

  m_pDict = this->m_pDict;
  if ( HIWORD(m_pDict[1].m_Systems.m_Memory.m_nAllocationCount) == 0 || nMaxAddons <= 0 )
    return 0;
  v4 = 0;
  v5 = 0;
  do
  {
    id.m_Id = v4;
    v17 = CUtlSymbolTable::String(&m_pDict[1].m_modules.m_Memory.m_nAllocationCount, &id);
    CUtlSymbolTable::AddString(&m_pDict[1].m_modules.m_Memory.m_nAllocationCount, v17);
    m_Id = id.m_Id;
    vptr_CAppSystemDict = m_pDict[1]._vptr_CAppSystemDict;
    v9 = v17;
    if ( id.m_Id >= vptr_CAppSystemDict )
    {
      v10 = id.m_Id + 1;
      if ( vptr_CAppSystemDict < v10 )
      {
        m_pMemory = m_pDict[1].m_modules.m_Memory.m_pMemory;
        if ( v10 > m_pMemory )
        {
          v15 = id.m_Id;
          v13 = v17;
          v18 = id.m_Id + 1;
          CUtlMemory<int,int>::Grow(&m_pDict[1].m_modules, v10 - m_pMemory);
          m_Id = v15;
          v9 = v13;
          v10 = v18;
        }
        LODWORD(m_pDict[1]._vptr_CAppSystemDict) = v10;
      }
    }
    if ( *(*&m_pDict[1].m_modules.m_Size + 4LL * m_Id) > 0 )
    {
      v6 = v5++;
      pOutAddons[v6] = v9;
    }
    ++v4;
  }
  while ( v4 < HIWORD(m_pDict[1].m_Systems.m_Memory.m_nAllocationCount) && nMaxAddons > v5 );
  return v5;
}


// CTier2Application::GetAddonsDirectory  (line 297, @0x000000000233f680, libserver.so)
// calls: CTier2AppSystemDict::GetAddonsDirectory
bool __fastcall CTier2Application::GetAddonsDirectory(CTier2Application *const this, char *pszResult, int nChars)
{
  return CTier2AppSystemDict::GetAddonsDirectory(this->m_pDict, pszResult, nChars);
}


// CTier2Application::GetAddonsContentDirectory  (line 302, @0x000000000233f7d0, libserver.so)
// calls: CTier2AppSystemDict::GetAddonsContentDirectory
bool __fastcall CTier2Application::GetAddonsContentDirectory(
        CTier2Application *const this,
        char *pszResult,
        int nChars)
{
  return CTier2AppSystemDict::GetAddonsContentDirectory(this->m_pDict, pszResult, nChars);
}


// CTier2Application::GetAvailableAddons  (line 307, @0x0000000002344f30, libserver.so)
// calls: CTier2AppSystemDict::GetAvailableAddons
void __fastcall CTier2Application::GetAvailableAddons(
        CTier2Application *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pResult,
        int nSearchType)
{
  CTier2AppSystemDict::GetAvailableAddons(this->m_pDict, pResult, nSearchType);
}


// CTier2Application::GetAddonInfo  (line 312, @0x0000000002346e10, libserver.so)  // inlines: AddMultipleToTail, CUtlString, Defined, EnsureCount, GetAddonInfo, GrowMemory, GrowVector, InsertMultipleBefore, IsUGCAddonName, Length, SetAllowAddonChanges, SetPtr, ThreadInterlockedDecrement, ThreadInterlockedIncrement, UnmountAddon, V_strlen, operator char const*, operator const UtlSymId_t, operator int, operator++, operator--, operator=, operator==, operator[], ~CUtlString
// calls: CTier2AppSystemDict::MountAddon, KeyValues::LoadFromFile, CUtlSymbolTable::Find, CUtlSymbolTable::AddString, CTier2AppSystemDict::GetIDFromAddonName, CTier2AppSystemDict::GetFullAddonPathFromAddonName, CUtlString::FreeMemoryBlock, strlen, CUtlString::Get, V_IsAbsolutePath, V_GetFileExtension, V_stricmp_fast (17 total)
// strings: "addoninfo.txt", "CONTENTADDONS", "CONTENT"
bool __fastcall CTier2Application::GetAddonInfo(
        CTier2Application *const this,
        KeyValues *pResult,
        const char *pAddonName)
{
  CTier2AppSystemDict *v3; // r13
  CTier2AppSystemDict *m_pDict; // rbx
  IBaseFileSystem *v6; // rsi
  bool v7; // r15
  unsigned __int16 m_pString; // ax
  int m_Size; // edx
  int v11; // ecx
  unsigned __int16 v12; // ax
  int v13; // edx
  int v14; // ecx
  int *v15; // rdx
  int v16; // eax
  bool v17; // zf
  __int64 FileExtension; // rax
  int v19; // edx
  int m_nAllocationCount; // edx
  int v21; // edx
  int v22; // ecx
  int v23; // esi
  int v24; // r8d
  int v25; // r9d
  int v26; // eax
  int v27; // ebx
  CUtlSymbolTable *p_m_SymbolTable; // [rsp+10h] [rbp-60h]
  CUtlString v29; // [rsp+20h] [rbp-50h] BYREF
  CUtlString v30; // [rsp+30h] [rbp-40h] BYREF

  m_pDict = this->m_pDict;
  if ( pResult != 0 )
  {
    _InterlockedAdd(&m_pDict->m_nAllowAddonChanges.m_value, 1u);
    if ( m_pDict->m_nAllowAddonChanges.m_value < 0 )
    {
LABEL_38:
      CTier2AppSystemDict::SetAllowAddonChanges(this, pResult);
LABEL_39:
      CTier2AppSystemDict::UnmountAddon(v3, pResult);
      v27 = v26;
      if ( v29.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v29);
      Unwind_Resume(v27, v23, v21, v22, v24, v25);
    }
    v3 = pAddonName;
    CTier2AppSystemDict::MountAddon(m_pDict, pAddonName);
    v6 = 0;
    if ( g_pFullFileSystem != 0 )
      v6 = &g_pFullFileSystem->IBaseFileSystem;
    v7 = KeyValues::LoadFromFile(pResult, v6, "addoninfo.txt", "GAME", 0);
    if ( v3 != 0 && LOBYTE(v3->_vptr_CAppSystemDict) != 0 )
    {
      if ( m_pDict->m_nAllowAddonChanges.m_value == 0 )
        goto LABEL_39;
      p_m_SymbolTable = &m_pDict->m_addonRefcounts.m_SymbolTable;
      CUtlSymbolTable::Find(&m_pDict->m_addonRefcounts.m_SymbolTable, v3);
      if ( LOWORD(v30.m_pString) != 0xFFFF )
      {
        CUtlSymbolTable::AddString(p_m_SymbolTable, v3);
        m_pString = v30.m_pString;
        m_Size = m_pDict->m_addonRefcounts.m_Vector.m_Size;
        if ( LOWORD(v30.m_pString) >= m_Size )
        {
          v11 = LOWORD(v30.m_pString) + 1;
          if ( m_Size < v11 )
          {
            m_nAllocationCount = m_pDict->m_addonRefcounts.m_Vector.m_Memory.m_nAllocationCount;
            if ( v11 > m_nAllocationCount )
            {
              CUtlMemory<int,int>::Grow(&m_pDict->m_addonRefcounts.m_Vector.m_Memory, v11 - m_nAllocationCount);
              m_pString = v30.m_pString;
              v11 = LOWORD(v30.m_pString) + 1;
            }
            m_pDict->m_addonRefcounts.m_Vector.m_Size = v11;
          }
        }
        if ( m_pDict->m_addonRefcounts.m_Vector.m_Memory.m_pMemory[m_pString] != 0 )
        {
          CUtlSymbolTable::AddString(p_m_SymbolTable, v3);
          v12 = v30.m_pString;
          v13 = m_pDict->m_addonRefcounts.m_Vector.m_Size;
          if ( LOWORD(v30.m_pString) >= v13 )
          {
            v14 = LOWORD(v30.m_pString) + 1;
            if ( v13 < v14 )
            {
              v19 = m_pDict->m_addonRefcounts.m_Vector.m_Memory.m_nAllocationCount;
              if ( v14 > v19 )
              {
                CUtlMemory<int,int>::Grow(&m_pDict->m_addonRefcounts.m_Vector.m_Memory, v14 - v19);
                v12 = v30.m_pString;
                v14 = LOWORD(v30.m_pString) + 1;
              }
              m_pDict->m_addonRefcounts.m_Vector.m_Size = v14;
            }
          }
          v15 = &m_pDict->m_addonRefcounts.m_Vector.m_Memory.m_pMemory[v12];
          v16 = *v15 - 1;
          v17 = *v15 == 1;
          *v15 = v16;
          if ( v16 < 0 || v17 )
          {
            v29.m_pString = 0;
            if ( CTier2AppSystemDict::GetIDFromAddonName(v3, pResult) != 0 )
            {
              CTier2AppSystemDict::GetFullAddonPathFromAddonName(&v30, m_pDict, v3);
              v29.m_pString = v30.m_pString;
              if ( v30.m_pString != 0 && strlen(v30.m_pString) > 0 )
                v3 = CUtlString::Get(&v29);
            }
            if ( V_IsAbsolutePath(v3) != 0 )
            {
              FileExtension = V_GetFileExtension(v3);
              if ( FileExtension == 0 || V_stricmp_fast(FileExtension, "vpk") != 0 )
              {
                if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 28))(g_pFullFileSystem, v3, "GAME") != 0 )
                  (*(g_pFullFileSystem->_vptr_IAppSystem + 14))(g_pFullFileSystem, v3, "GAME");
              }
              else
              {
                (*(g_pFullFileSystem->_vptr_IAppSystem + 114))(g_pFullFileSystem, v3, "GAME");
              }
              if ( v29.m_pString != 0 )
                goto LABEL_26;
            }
            else
            {
              CTier2AppSystemDict::RemoveAddonSearchPaths(m_pDict, "GAME", "ADDONS", v3);
              CTier2AppSystemDict::RemoveAddonSearchPaths(m_pDict, "CONTENT", "CONTENTADDONS", v3);
              if ( v29.m_pString != 0 )
LABEL_26:
                CUtlString::FreeMemoryBlock(&v29);
            }
          }
        }
      }
    }
    _InterlockedSub(&m_pDict->m_nAllowAddonChanges.m_value, 1u);
    if ( m_pDict->m_nAllowAddonChanges.m_value >= 0 )
      return v7;
    goto LABEL_38;
  }
  return 0;
}


// CTier2Application::IsFileInAddon  (line 317, @0x0000000002341110, libserver.so)
// calls: CTier2AppSystemDict::IsFileInAddon
bool __fastcall CTier2Application::IsFileInAddon(CTier2Application *const this, const char *pszFilePath)
{
  return CTier2AppSystemDict::IsFileInAddon(this->m_pDict, pszFilePath);
}


// CTier2Application::GetRestrictAddonsTo  (line 322, @0x000000000233b0f0, libserver.so)  // inlines: GetRestrictAddonsTo, String
// calls: CUtlString::Get
const char *__fastcall CTier2Application::GetRestrictAddonsTo(const CTier2Application *const this)
{
  CAppSystemDict *m_pDict; // rdi

  m_pDict = this->m_pDict;
  if ( HIBYTE(m_pDict[1].m_SystemDict.m_SymbolTable.m_Lookup.m_Elements.m_nAllocationCount) != 0 )
    return CUtlString::Get(&m_pDict[1].m_SystemDict.m_SymbolTable.m_Lookup.m_Root);
  else
    return 0;
}


// CTier2Application::SetAllowAddonChanges  (line 327, @0x000000000233c360, libserver.so)  // inlines: SetAllowAddonChanges, ThreadInterlockedDecrement, ThreadInterlockedIncrement, operator int, operator++, operator--
// calls: CTier2AppSystemDict::SetAllowAddonChanges
void __fastcall CTier2Application::SetAllowAddonChanges(CTier2Application *const this, bool bAllow)
{
  CAppSystemDict *m_pDict; // rax

  m_pDict = this->m_pDict;
  if ( bAllow )
    _InterlockedAdd(&m_pDict[1].m_SystemDict.m_SymbolTable.m_Lookup.m_Elements.m_nGrowSize, 1u);
  else
    _InterlockedSub(&m_pDict[1].m_SystemDict.m_SymbolTable.m_Lookup.m_Elements.m_nGrowSize, 1u);
  if ( (m_pDict[1].m_SystemDict.m_SymbolTable.m_Lookup.m_Elements.m_nGrowSize & 0x80000000) != 0 )
  {
    CTier2AppSystemDict::SetAllowAddonChanges(this, bAllow);
    JUMPOUT(0x233C395);
  }
}


// CTier2Application::SetUGCAddonPathResolver  (line 332, @0x0000000002339c30, libserver.so)  // inlines: SetUGCAddonPathResolver
void __fastcall CTier2Application::SetUGCAddonPathResolver(
        CTier2Application *const this,
        IUGCAddonPathResolver *pResolver)
{
  this->m_pDict[1].m_SystemDict.m_SymbolTable.m_Lookup.m_pElements = pResolver;
}


// CTier2Application::GetAddonNameFromID  (line 337, @0x0000000002340920, libserver.so)
// calls: CTier2AppSystemDict::GetAddonNameFromID
CUtlString __fastcall CTier2Application::GetAddonNameFromID(
        CUtlString *a1,
        const CTier2Application *const this,
        uint64 uID)
{
  CTier2AppSystemDict::GetAddonNameFromID(a1, this->m_pDict, uID);
  return a1;
}


// CTier2Application::GetIDFromAddonName  (line 342, @0x000000000233c2f0, libserver.so)  // inlines: GetIDFromAddonName
// calls: V_sscanf
uint64 __fastcall CTier2Application::GetIDFromAddonName(const CTier2Application *const this, const char *pAddonName)
{
  int v2; // eax
  uint64 v3; // rdx
  uint64 v5; // [rsp+8h] [rbp-8h] BYREF

  v5 = 0;
  v2 = V_sscanf(pAddonName, "%lld", &v5);
  v3 = 0;
  if ( v2 != 0 )
    return v5;
  return v3;
}


// CTier2Application::GetFullAddonPathFromAddonName  (line 347, @0x000000000233e5f0, libserver.so)
// calls: CTier2AppSystemDict::GetFullAddonPathFromAddonName
CUtlString __fastcall CTier2Application::GetFullAddonPathFromAddonName(
        CUtlString *a1,
        const CTier2Application *const this,
        const char *pAddonName)
{
  CTier2AppSystemDict::GetFullAddonPathFromAddonName(a1, this->m_pDict, pAddonName);
  return a1;
}


// CTier2Application::GetAvailableAddonMaps  (line 352, @0x0000000002346a30, libserver.so)  // inlines: GetAvailableAddonMaps, Purge, SetAllowAddonChanges, ThreadInterlockedDecrement, ThreadInterlockedIncrement, operator int, operator++, operator--
// calls: CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll, CUtlMemory<CUtlString, int>::Purge, CTier2AppSystemDict::MountAddon, KeyValues::operator new, KeyValues::KeyValues, CTier2AppSystemDict::GetAvailableAddonMaps_, KeyValues::deleteThis, CTier2AppSystemDict::UnmountAddon, CTier2AppSystemDict::SetAllowAddonChanges, KeyValues::operator delete, _Unwind_Resume
// strings: "AddOnInfo"
void __fastcall CTier2Application::GetAvailableAddonMaps(
        CTier2Application *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pResult,
        const char *pszAddonName)
{
  KeyValues *v3; // r15
  CTier2AppSystemDict *m_pDict; // rbx
  CTier2AppSystemDict *v7; // rdi
  bool v8; // si
  int v9; // eax
  int v10; // ebx
  int v11; // edx
  int v12; // ecx
  int v13; // esi
  int v14; // r8d
  int v15; // r9d

  m_pDict = this->m_pDict;
  if ( pResult != 0 && pszAddonName != 0 )
  {
    CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::RemoveAll(pResult);
    if ( (pResult->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&pResult->m_Memory);
    _InterlockedAdd(&m_pDict->m_nAllowAddonChanges.m_value, 1u);
    if ( m_pDict->m_nAllowAddonChanges.m_value < 0 )
      goto LABEL_10;
    CTier2AppSystemDict::MountAddon(m_pDict, pszAddonName);
    v3 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v3, "AddOnInfo");
    if ( v3 != 0 )
    {
      CTier2AppSystemDict::GetAvailableAddonMaps_(m_pDict, v3, pszAddonName, pResult);
      KeyValues::deleteThis(v3);
    }
    CTier2AppSystemDict::UnmountAddon(m_pDict, pszAddonName);
    _InterlockedSub(&m_pDict->m_nAllowAddonChanges.m_value, 1u);
    if ( m_pDict->m_nAllowAddonChanges.m_value < 0 )
    {
LABEL_10:
      CTier2AppSystemDict::SetAllowAddonChanges(v7, v8);
      v10 = v9;
      KeyValues::operator delete(v3);
      Unwind_Resume(v10, v13, v11, v12, v14, v15);
    }
  }
}


// CTier2Application::LoadStartupManifestGroup  (line 357, @0x0000000002342500, libserver.so)  // inlines: AddToTail, CopyConstruct<HResourceManifest__*>, Element, GrowMemory, LoadStartupManifestGroup, operator[]
// calls: CUtlMemory<HResourceManifest__*, int>::Grow
// strings: "CTier2AppSystemDict::LoadStartupManifestGroup"
void __fastcall CTier2Application::LoadStartupManifestGroup(CTier2Application *const this, const char *pGroupName)
{
  CUtlMemory<HResourceManifest__*,int> *m_pDict; // r12
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 m_nAllocationCount; // rbx
  int v6; // eax
  HResourceManifest__ **v7; // rax

  m_pDict = this->m_pDict;
  v3 = (*(*g_pResourceSystem + 176LL))(
         g_pResourceSystem,
         pGroupName,
         0,
         "CTier2AppSystemDict::LoadStartupManifestGroup",
         0xFFFFFFFFLL);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*g_pResourceSystem + 232LL))(g_pResourceSystem, v3);
    (*(*g_pResourceSystem + 368LL))(g_pResourceSystem);
    (*(*g_pResourceSystem + 112LL))(g_pResourceSystem);
    m_nAllocationCount = m_pDict[27].m_nAllocationCount;
    v6 = m_pDict[27].m_nAllocationCount;
    if ( m_nAllocationCount == m_pDict[28].m_nAllocationCount )
    {
      CUtlMemory<HResourceManifest__ *,int>::Grow(m_pDict + 28, 1);
      v6 = m_pDict[27].m_nAllocationCount;
    }
    m_pDict[27].m_nAllocationCount = v6 + 1;
    v7 = &m_pDict[28].m_pMemory[m_nAllocationCount];
    if ( v7 != 0 )
      *v7 = v4;
  }
}


// CTier2AppSystemDict::~CTier2AppSystemDict  (line 456, @0x000000000234a0c0, libserver.so)  // inlines: Purge, RemoveAll, ~CTier1AppSystemDict, ~CUtlMemory, ~CUtlString, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: Msg, CFileLoggingListener::~CFileLoggingListener, CUtlString::FreeMemoryBlock, CUtlSymbolTable::~CUtlSymbolTable, CAppSystemDict::~CAppSystemDict, CUtlMemory<int, int>::Purge, CUtlMemory<HResourceManifest__*, int>::Purge, DisconnectTier2Libraries, CFileLoggingListener::EndLoggingToFile, LoggingSystem_ResetBackdoorLoggingState
// strings: "Destroying %d startup resource manifests\n"
void __fastcall CTier2AppSystemDict::~CTier2AppSystemDict(CTier2AppSystemDict *const this)
{
  int m_Size; // r12d
  double v3; // xmm0_8
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  HResourceManifest__ *v6; // rsi
  bool v7; // zf

  this->_vptr_CAppSystemDict = off_408C3D0;
  if ( g_pResourceSystem != 0 )
  {
    m_Size = this->m_StartupManifests.m_Size;
    if ( m_Size > 0 )
    {
      *&v3 = Msg("Destroying %d startup resource manifests\n", m_Size).m128_u64[0];
      v4 = 8LL * (m_Size - 1) + 8;
      v5 = 0;
      do
      {
        v6 = this->m_StartupManifests.m_Memory.m_pMemory[v5 / 8];
        v5 += 8LL;
        (*(*g_pResourceSystem + 216LL))(g_pResourceSystem, v6, v3);
      }
      while ( v5 != v4 );
      (*(*g_pResourceSystem + 112LL))(g_pResourceSystem);
      this->m_StartupManifests.m_Size = 0;
    }
  }
  if ( this->m_bLogToFile )
  {
    CFileLoggingListener::EndLoggingToFile(&this->m_LogToFileListener, this->m_bLogFileHandle);
    this->m_bLogToFile = 0;
    LoggingSystem_ResetBackdoorLoggingState();
  }
  if ( this->m_bLibrariesConnected )
  {
    DisconnectTier2Libraries();
    this->m_bLibrariesConnected = 0;
  }
  CFileLoggingListener::~CFileLoggingListener(&this->m_LogToFileListener);
  if ( this->m_LogFileSuffix.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_LogFileSuffix);
  if ( this->m_LogFilename.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_LogFilename);
  if ( this->m_addonToRestrictTo.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_addonToRestrictTo);
  v7 = (this->m_StartupManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_StartupManifests.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<HResourceManifest__ *,int>::Purge(&this->m_StartupManifests.m_Memory);
    if ( (this->m_StartupManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<HResourceManifest__ *,int>::Purge(&this->m_StartupManifests.m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_addonRefcounts.m_SymbolTable);
  v7 = (this->m_addonRefcounts.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_addonRefcounts.m_Vector.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<int,int>::Purge(&this->m_addonRefcounts.m_Vector.m_Memory);
    if ( (this->m_addonRefcounts.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_addonRefcounts.m_Vector.m_Memory);
  }
  this->_vptr_CAppSystemDict = off_408C190;
  CAppSystemDict::~CAppSystemDict(this);
}


// CTier2AppSystemDict::~CTier2AppSystemDict  (line 456, @0x000000000234a2a0, libserver.so)  // inlines: Purge, RemoveAll, ~CTier1AppSystemDict, ~CTier2AppSystemDict, ~CUtlMemory, ~CUtlString, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: Msg, CFileLoggingListener::~CFileLoggingListener, CUtlString::FreeMemoryBlock, CUtlSymbolTable::~CUtlSymbolTable, CAppSystemDict::~CAppSystemDict, operator delete, CUtlMemory<int, int>::Purge, CUtlMemory<HResourceManifest__*, int>::Purge, DisconnectTier2Libraries, CFileLoggingListener::EndLoggingToFile, LoggingSystem_ResetBackdoorLoggingState
// strings: "Destroying %d startup resource manifests\n"
void __fastcall CTier2AppSystemDict::~CTier2AppSystemDict(CTier2AppSystemDict *const this)
{
  int m_Size; // r12d
  double v3; // xmm0_8
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  HResourceManifest__ *v6; // rsi
  bool v7; // zf

  this->_vptr_CAppSystemDict = off_408C3D0;
  if ( g_pResourceSystem != 0 )
  {
    m_Size = this->m_StartupManifests.m_Size;
    if ( m_Size > 0 )
    {
      *&v3 = Msg("Destroying %d startup resource manifests\n", m_Size).m128_u64[0];
      v4 = 8LL * (m_Size - 1) + 8;
      v5 = 0;
      do
      {
        v6 = this->m_StartupManifests.m_Memory.m_pMemory[v5 / 8];
        v5 += 8LL;
        (*(*g_pResourceSystem + 216LL))(g_pResourceSystem, v6, v3);
      }
      while ( v5 != v4 );
      (*(*g_pResourceSystem + 112LL))(g_pResourceSystem);
      this->m_StartupManifests.m_Size = 0;
    }
  }
  if ( this->m_bLogToFile )
  {
    CFileLoggingListener::EndLoggingToFile(&this->m_LogToFileListener, this->m_bLogFileHandle);
    this->m_bLogToFile = 0;
    LoggingSystem_ResetBackdoorLoggingState();
  }
  if ( this->m_bLibrariesConnected )
  {
    DisconnectTier2Libraries();
    this->m_bLibrariesConnected = 0;
  }
  CFileLoggingListener::~CFileLoggingListener(&this->m_LogToFileListener);
  if ( this->m_LogFileSuffix.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_LogFileSuffix);
  if ( this->m_LogFilename.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_LogFilename);
  if ( this->m_addonToRestrictTo.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_addonToRestrictTo);
  v7 = (this->m_StartupManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_StartupManifests.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<HResourceManifest__ *,int>::Purge(&this->m_StartupManifests.m_Memory);
    if ( (this->m_StartupManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<HResourceManifest__ *,int>::Purge(&this->m_StartupManifests.m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_addonRefcounts.m_SymbolTable);
  v7 = (this->m_addonRefcounts.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_addonRefcounts.m_Vector.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<int,int>::Purge(&this->m_addonRefcounts.m_Vector.m_Memory);
    if ( (this->m_addonRefcounts.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_addonRefcounts.m_Vector.m_Memory);
  }
  this->_vptr_CAppSystemDict = off_408C190;
  CAppSystemDict::~CAppSystemDict(this);
  operator delete(this);
}


// CTier2AppSystemDict::GetConsoleLogFilename  (line 524, @0x000000000233c0c0, libserver.so)  // inlines: CUtlString, SetPtr, operator char const*, operator=, ~CUtlString
// calls: CUtlString::Get, CUtlString::Set, CUtlString::GetExtension, CUtlString::StripExtension, CUtlString::FreeMemoryBlock, CUtlString::Append, _Unwind_Resume
CUtlString __fastcall CTier2AppSystemDict::GetConsoleLogFilename(CUtlString *a1, const CTier2AppSystemDict *const this)
{
  CUtlString *p_m_LogFileSuffix; // r13
  const char *v4; // rax
  char *v5; // r15
  const char *v6; // rax
  const char *v7; // rax
  CUtlString extension; // [rsp+0h] [rbp-50h] BYREF
  char *v10; // [rsp+10h] [rbp-40h]

  p_m_LogFileSuffix = &this->m_LogFileSuffix;
  a1->m_pString = 0;
  v4 = CUtlString::Get(&this->m_LogFilename);
  CUtlString::Set(a1, v4);
  if ( CUtlString::Get(p_m_LogFileSuffix) != 0 )
  {
    CUtlString::GetExtension(a1);
    if ( CUtlString::Get(&extension) != 0 )
    {
      CUtlString::StripExtension(a1);
      v5 = v10;
      if ( a1->m_pString != 0 )
        CUtlString::FreeMemoryBlock(a1);
      a1->m_pString = v5;
      v6 = CUtlString::Get(p_m_LogFileSuffix);
      CUtlString::Append(a1, v6);
      CUtlString::Append(a1, ".");
      v7 = CUtlString::Get(&extension);
    }
    else
    {
      v7 = CUtlString::Get(p_m_LogFileSuffix);
    }
    CUtlString::Append(a1, v7);
    if ( extension.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&extension);
  }
  return a1;
}


// CTier2AppSystemDict::ChangeLogFileSuffix  (line 551, @0x000000000234a490, libserver.so)  // inlines: operator char const*, ~CUtlString
// calls: CUtlString::operator=, CUtlString::Get, CFileLoggingListener::ReOpenLoggingToFile, CUtlString::FreeMemoryBlock, _Unwind_Resume
void __fastcall CTier2AppSystemDict::ChangeLogFileSuffix(CTier2AppSystemDict *const this, const char *suffix)
{
  const char *v3; // rax
  CUtlString v4; // [rsp+0h] [rbp-20h] BYREF

  CUtlString::operator=(&this->m_LogFileSuffix, suffix);
  if ( this->m_bLogFileHandle != -1 )
  {
    (*(this->_vptr_CAppSystemDict + 3))(&v4, this);
    v3 = CUtlString::Get(&v4);
    CFileLoggingListener::ReOpenLoggingToFile(&this->m_LogToFileListener, this->m_bLogFileHandle, v3, "a", "GAME");
    if ( v4.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v4);
  }
}


// CTier2AppSystemDict::CreateApplication  (line 566, @0x000000000233af90, libserver.so)  // inlines: CTier1Application, CTier2Application
// calls: operator new
IApplication *__fastcall CTier2AppSystemDict::CreateApplication(CTier2AppSystemDict *const this)
{
  IApplication *result; // rax

  result = operator new(0x18u);
  result[1]._vptr_IAppSystem = this;
  result->_vptr_IAppSystem = &off_408C1F0;
  LODWORD(result[2]._vptr_IAppSystem) = 0;
  return result;
}


// CTier2AppSystemDict::Init  (line 575, @0x000000000234a520, libserver.so)  // inlines: InitLoggingToFile, operator char const*, ~CUtlString
// calls: CTier1AppSystemDict::Init, CAppSystemDict::AddSystem, CAppSystemDict::GetFactory, ConnectTier2Libraries, CTier2AppSystemDict::SetupFileSystemPaths, CommandLine, CUtlString::operator=, CFileLoggingListener::SetLogTimestamps, CUtlString::Get, CFileLoggingListener::BeginLoggingToFile, CUtlString::FreeMemoryBlock, CFileLoggingListener::AssignAllLogChannels (14 total)
// strings: "VFileSystem017", "filesystem_stdio", "-condebug", "-consolelog", "-con_logfile", "console.log" (8 total)
bool __fastcall CTier2AppSystemDict::Init(CTier2AppSystemDict *const this)
{
  bool v2; // r12
  IUtlStringTokenSystem *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  const char *v8; // r13
  char v9; // al
  __int64 v10; // rdi
  __int64 v11; // rax
  const char *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  char v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rax
  const char *v18; // rax
  LoggingFileHandle_t v19; // eax
  bool v20; // zf
  LoggingFileHandle_t m_bLogFileHandle; // esi
  __int64 v22; // rax
  __int64 v23; // rax
  const char *v24; // rax
  void (__fastcall *v25)(IFileSystem *, const char *, char *); // [rsp+8h] [rbp-48h]
  CUtlString v26; // [rsp+10h] [rbp-40h] BYREF
  CreateInterfaceFn factory; // [rsp+18h] [rbp-38h] BYREF

  if ( !CTier1AppSystemDict::Init(this) )
    return 0;
  if ( CAppSystemDict::AddSystem(this, "filesystem_stdio", "VFileSystem017", ErrorResponse_t::QUIT_ON_ERROR) == 0 )
    return 0;
  factory = CAppSystemDict::GetFactory(this);
  ConnectTier2Libraries(&factory, 1);
  this->m_bLibrariesConnected = 1;
  v2 = CTier2AppSystemDict::SetupFileSystemPaths(this);
  if ( !v2 )
    return 0;
  v4 = g_pStringTokenSystem;
  if ( g_pStringTokenSystem != 0 )
    (*(*g_pStringTokenSystem + 96LL))(g_pStringTokenSystem);
  v5 = CommandLine(v4);
  if ( (*(*v5 + 32LL))(v5, "-condebug") != 0
    || (v22 = CommandLine(v6), (*(*v22 + 32LL))(v22, "-con_logfile") != 0)
    || (v23 = CommandLine(v6), (*(*v23 + 32LL))(v23, "-consolelog") != 0) )
  {
    v7 = CommandLine(v6);
    v8 = "-con_logfile";
    v9 = (*(*v7 + 32LL))(v7, "-consolelog");
    this->m_bLogToFile = 1;
    if ( v9 != 0 )
      v8 = "-consolelog";
    v11 = CommandLine(v10);
    v12 = (*(*v11 + 80LL))(v11, v8, "console.log");
    CUtlString::operator=(&this->m_LogFilename, v12);
    v14 = CommandLine(v13);
    v15 = (*(*v14 + 32LL))(v14, "-con_timestamp");
    v17 = CommandLine(v16);
    if ( (*(*v17 + 32LL))(v17, "-conclearlog") != 0 )
    {
      v25 = *(g_pFullFileSystem->_vptr_IAppSystem + 25);
      v24 = CUtlString::Get(&this->m_LogFilename);
      v25(g_pFullFileSystem, v24, "GAME");
    }
    CFileLoggingListener::SetLogTimestamps(&this->m_LogToFileListener, v15);
    (*(this->_vptr_CAppSystemDict + 3))(&v26, this);
    v18 = CUtlString::Get(&v26);
    v19 = CFileLoggingListener::BeginLoggingToFile(&this->m_LogToFileListener, v18, "a", "GAME");
    v20 = v26.m_pString == 0;
    this->m_bLogFileHandle = v19;
    m_bLogFileHandle = v19;
    if ( !v20 )
    {
      CUtlString::FreeMemoryBlock(&v26);
      m_bLogFileHandle = this->m_bLogFileHandle;
    }
    CFileLoggingListener::AssignAllLogChannels(&this->m_LogToFileListener, m_bLogFileHandle);
    LoggingSystem_RegisterBackdoorLoggingListener(&this->m_LogToFileListener);
  }
  return v2;
}


// CTier2AppSystemDict::OnAppSystemLoaded  (line 663, @0x0000000002342390, libserver.so)  // inlines: LoadStartupManifest
// calls: CTier2AppSystemDict::LoadStartupManifestGroup, CAppSystemDict::IsInVRMode
// strings: "ConsoleStartup", "ToolsStartupPreGame", "ToolsStartup", "VRStartup"
void __fastcall CTier2AppSystemDict::OnAppSystemLoaded(CTier2AppSystemDict *const this)
{
  bool v2; // zf
  bool m_bEnsureToolStartupManifests; // r12
  char v4; // r13

  if ( g_pSchemaSystem != 0 )
    (*(*g_pSchemaSystem + 176LL))(g_pSchemaSystem, this->m_bIsConsoleApp);
  if ( g_pResourceSystem != 0 && this->m_nStartupManifestsDisabledCount <= 0 )
  {
    if ( this->m_nStartupManifestSuppressionCount > 0 )
    {
      this->m_bStaleStartupResources = 1;
      return;
    }
    v2 = !this->m_bInToolsMode;
    this->m_bStaleStartupResources = 0;
    if ( v2 )
    {
      m_bEnsureToolStartupManifests = this->m_bEnsureToolStartupManifests;
      if ( this->m_bIsConsoleApp && !m_bEnsureToolStartupManifests && !this->m_bEnsureGameStartupManifests )
      {
        v4 = 0;
LABEL_13:
        CTier2AppSystemDict::LoadStartupManifestGroup(this, "ConsoleStartup");
        if ( m_bEnsureToolStartupManifests )
          CTier2AppSystemDict::LoadStartupManifestGroup(this, "ToolsStartupPreGame");
        if ( v4 != 0 )
          CTier2AppSystemDict::LoadStartupManifestGroup(this, "GameStartup");
        if ( !this->m_bIsConsoleApp && (CAppSystemDict::IsInVRMode(this) || this->m_bEnsureVRStartupManifests) )
          CTier2AppSystemDict::LoadStartupManifestGroup(this, "VRStartup");
        if ( m_bEnsureToolStartupManifests )
          CTier2AppSystemDict::LoadStartupManifestGroup(this, "ToolsStartup");
        return;
      }
    }
    else
    {
      m_bEnsureToolStartupManifests = 1;
    }
    v4 = 1;
    goto LABEL_13;
  }
}


// CTier2AppSystemDict::LoadStartupManifestGroup  (line 751, @0x00000000023422d0, libserver.so)  // inlines: AddToTail, CopyConstruct<HResourceManifest__*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<HResourceManifest__*, int>::Grow
// callers: CTier2AppSystemDict::OnAppSystemLoaded
// strings: "CTier2AppSystemDict::LoadStartupManifestGroup"
void __fastcall CTier2AppSystemDict::LoadStartupManifestGroup(CTier2AppSystemDict *const this, const char *pGroupName)
{
  __int64 v3; // rax
  HResourceManifest__ *v4; // r13
  __int64 m_Size; // rbx
  int v6; // eax
  HResourceManifest__ **v7; // rax

  v3 = (*(*g_pResourceSystem + 176LL))(
         g_pResourceSystem,
         pGroupName,
         0,
         "CTier2AppSystemDict::LoadStartupManifestGroup",
         0xFFFFFFFFLL);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*g_pResourceSystem + 232LL))(g_pResourceSystem, v3);
    (*(*g_pResourceSystem + 368LL))(g_pResourceSystem);
    (*(*g_pResourceSystem + 112LL))(g_pResourceSystem);
    m_Size = this->m_StartupManifests.m_Size;
    v6 = this->m_StartupManifests.m_Size;
    if ( m_Size == this->m_StartupManifests.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<HResourceManifest__ *,int>::Grow(&this->m_StartupManifests.m_Memory, 1);
      v6 = this->m_StartupManifests.m_Size;
    }
    this->m_StartupManifests.m_Size = v6 + 1;
    v7 = &this->m_StartupManifests.m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
      *v7 = v4;
  }
}


// CTier2AppSystemDict::AddGameSearchPath  (line 771, @0x000000000233e420, libserver.so)
// calls: V_snprintf, __stack_chk_fail
// callers: CTier2AppSystemDict::SetupFileSystemPaths
// strings: "%s_tempcontent"
void __fastcall CTier2AppSystemDict::AddGameSearchPath(
        CTier2AppSystemDict *const this,
        const char *pPathID,
        const char *pFullPath,
        bool bTempContent)
{
  char szPath[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v7; // [rsp+108h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  if ( bTempContent )
  {
    V_snprintf(szPath, 260, "%s_tempcontent", pFullPath);
    (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, szPath, pPathID, 1, 0);
  }
  (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, pFullPath, pPathID, 1, 0);
}


// CTier2AppSystemDict::SetupFileSystemPaths  (line 790, @0x000000000233f7e0, libserver.so)  // inlines: GetBool, GetExecutablePath, GetLanguage, GetModPath, IsEmpty, V_ComposeFileName<long unsigned int>, V_FixupPathName<long unsigned int>, V_StripLastDir<long unsigned int>, V_strcat, V_strcat_safe<260ul>, V_strcpy_safe<260ul>, V_stristr_fast, V_strlen, V_strncat<int>, V_strncpy<int>, V_strncpy<long unsigned int>, _V_strcpy, strcpy
// calls: CommandLine, KeyValues::GetInt, _V_FixupPathName, _V_ComposeFileName, Plat_IsDirectory, Plat_FileExists, _V_StripLastDir, V_StripTrailingSlash, KeyValues::FindKey, KeyValues::GetFirstValue, CUtlString::Get, V_stricmp_fast (26 total)
// callers: CTier2AppSystemDict::Init
// strings: "-novpk", "NoDefaultModPath", "EXECUTABLE_PATH", "game/bin", "bin/linuxsteamrt64/libtier0.so", "PLATFORM" (34 total)
// globals: CTier2AppSystemDict::SetupFileSystemPaths(void)::bAddedTestModelsGamePath, CTier2AppSystemDict::SetupFileSystemPaths(void)::bAddedTestModelsContentPath
bool __fastcall CTier2AppSystemDict::SetupFileSystemPaths(CTier2AppSystemDict *const this)
{
  __int64 v1; // rax
  KeyValues *m_pApplicationInfo; // rdi
  char *v3; // r12
  int v4; // edx
  unsigned int v5; // eax
  signed int v6; // r12d
  signed int v7; // edx
  __int64 v8; // rdi
  __int64 v9; // rax
  _BYTE *v10; // rax
  KeyValues *m_pGameInfo; // rdi
  KeyValues *Key; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  char v15; // al
  bool v16; // r12
  __int64 v17; // rax
  KeyValues *FirstValue; // rbx
  char *v19; // rax
  CUtlString *p_m_UILanguage; // rdi
  const char *v21; // rax
  const char *v22; // r12
  char *v23; // rax
  const char *Name; // r12
  const char *String; // r13
  char *p_pFullFilename; // r12
  KeyValues *NextValue; // rbx
  char v28; // r14
  const char *v29; // r12
  const char *v30; // r13
  char *v32; // rax
  __int64 v33; // rdi
  char *m_pString; // rax
  const char *v35; // rsi
  const char *v36; // rax
  __int64 v37; // r13
  const char *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rax
  bool bFoundMod; // [rsp+26h] [rbp-B1Ah]
  bool bFoundWrite; // [rsp+27h] [rbp-B19h]
  char *pLanguageToken; // [rsp+28h] [rbp-B18h]
  KeyValues *pSearchPaths; // [rsp+30h] [rbp-B10h]
  bool bFoundGame; // [rsp+48h] [rbp-AF8h]
  char bAddDefaultModPath; // [rsp+49h] [rbp-AF7h]
  char bPublicContent; // [rsp+4Ah] [rbp-AF6h]
  bool m_bIsLowViolence; // [rsp+4Bh] [rbp-AF5h]
  bool bUsingTempContent; // [rsp+4Ch] [rbp-AF4h]
  char pExecutableDir[272]; // [rsp+60h] [rbp-AE0h] BYREF
  char pBaseDir[272]; // [rsp+170h] [rbp-9D0h] BYREF
  char pPlatformPath[272]; // [rsp+280h] [rbp-8C0h] BYREF
  char pContentDir[272]; // [rsp+390h] [rbp-7B0h] BYREF
  char pContentDirTemp[260]; // [rsp+4A0h] [rbp-6A0h] BYREF
  char pFirstGamePath[272]; // [rsp+5B0h] [rbp-590h] BYREF
  char pFullAddonPath[272]; // [rsp+6C0h] [rbp-480h] BYREF
  char pFullPath[272]; // [rsp+7D0h] [rbp-370h] BYREF
  char szPath[272]; // [rsp+8E0h] [rbp-260h] BYREF
  CFmtStrN<256,false> pFullFilename; // [rsp+9F0h] [rbp-150h] BYREF
  unsigned __int64 v66; // [rsp+B08h] [rbp-38h]

  v66 = __readfsqword(0x28u);
  if ( g_pApplication != 0 )
  {
    v1 = CommandLine(this);
    if ( (*(*v1 + 64LL))(v1, "-novpk") == 0 )
      (*(g_pFullFileSystem->_vptr_IAppSystem + 116))(g_pFullFileSystem, 1);
  }
  bAddDefaultModPath = 1;
  m_pApplicationInfo = this->m_pApplicationInfo;
  if ( m_pApplicationInfo != 0 )
    bAddDefaultModPath = KeyValues::GetInt(m_pApplicationInfo, "NoDefaultModPath", 0) == 0;
  memset(pExecutableDir, 0, 260);
  if ( !this->m_bUseModPathBinDir
    || (m_pString = this->m_ModPath.m_pString) == 0
    || *m_pString == 0
    || (v35 = CUtlString::Get(&this->m_ModPath)) == 0
    || (_V_strncpy(pExecutableDir, v35, 260),
        _V_StripLastDir(pExecutableDir, 260),
        _V_strncat(pExecutableDir, "bin/linuxsteamrt64", 260, 0xFFFFFFFFLL),
        pExecutableDir[0] == 0) )
  {
    v36 = CUtlString::Get(&this->m_ExecutablePath);
    _V_strncpy(pExecutableDir, v36, 260);
  }
  v3 = szPath;
  (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, pExecutableDir, "EXECUTABLE_PATH", 1, 0);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 20))(g_pFullFileSystem, "EXECUTABLE_PATH", 1);
  memset(pBaseDir, 0, 260);
  _V_FixupPathName(szPath, 260, pExecutableDir, 0);
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
  v6 = v3 - (__CFADD__(v5, v5) + 3) - szPath;
  while ( Plat_IsDirectory(szPath) != 0 )
  {
    _V_ComposeFileName(szPath, "game/bin", &pFullFilename, 260);
    if ( Plat_IsDirectory(&pFullFilename) != 0 )
    {
      _V_ComposeFileName(szPath, "game", pBaseDir, 260);
      break;
    }
    _V_ComposeFileName(szPath, "bin/linuxsteamrt64/libtier0.so", &pFullFilename, 260);
    if ( Plat_FileExists(&pFullFilename) != 0 )
    {
      _V_strncpy(pBaseDir, szPath, 260);
      break;
    }
    if ( _V_StripLastDir(szPath, 260) == 0 )
      break;
    V_StripTrailingSlash(szPath);
    v7 = strlen(szPath);
    if ( v6 <= v7 )
      break;
    v6 = v7;
  }
  if ( pBaseDir[0] == 0 )
  {
    CFmtStrN<256,false>::CFmtStrN(&pFullFilename, "Failed to determine base game directory from %s", pExecutableDir);
    Plat_MessageBox("Error", pFullFilename.m_szBuf);
    return 0;
  }
  _V_ComposeFileName(pBaseDir, "core", pPlatformPath, 260);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, pPlatformPath, "PLATFORM", 1, 0);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 20))(g_pFullFileSystem, "PLATFORM", 1);
  v9 = CommandLine(v8);
  v10 = (*(*v9 + 80LL))(v9, "-contentroot", "");
  if ( v10 != 0 && *v10 != 0 )
    _V_strncpy(pContentDirTemp, v10, 260);
  else
    _V_ComposeFileName(pBaseDir, "..\\content", pContentDirTemp, 260);
  _V_FixupPathName(pContentDir, 260, pContentDirTemp, 0);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, pContentDir, "CONTENTROOT", 1, 0);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 20))(g_pFullFileSystem, "CONTENTROOT", 1);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, pBaseDir, "GAMEROOT", 1, 0);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 20))(g_pFullFileSystem, "GAMEROOT", 1);
  m_pGameInfo = this->m_pGameInfo;
  if ( m_pGameInfo == 0
    || (Key = KeyValues::FindKey(m_pGameInfo, "FileSystem", 0)) == 0
    || (pSearchPaths = KeyValues::FindKey(Key, "SearchPaths", 0)) == 0 )
  {
    Plat_getwd(&pFullFilename, 260, 1);
    (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, &pFullFilename, "DEFAULT_WRITE_PATH", 1, 0);
    (*(g_pFullFileSystem->_vptr_IAppSystem + 20))(g_pFullFileSystem, "DEFAULT_WRITE_PATH", 1);
    (*(g_pFullFileSystem->_vptr_IAppSystem + 20))(g_pFullFileSystem, "PLATFORM", 0);
    return 1;
  }
  m_bIsLowViolence = this->m_bIsLowViolence;
  v14 = CommandLine(v13);
  v15 = (*(*v14 + 32LL))(v14, "-tempcontent");
  memset(pFirstGamePath, 0, 260);
  v16 = v15;
  v17 = CommandLine(&pFirstGamePath[256]);
  bPublicContent = (*(*v17 + 32LL))(v17, "-publiccontent");
  bFoundWrite = 0;
  FirstValue = KeyValues::GetFirstValue(pSearchPaths);
  if ( FirstValue == 0 )
    goto LABEL_81;
  bUsingTempContent = v16;
  bFoundMod = 0;
  bFoundGame = 0;
  do
  {
    while ( 1 )
    {
      Name = KeyValues::GetName(FirstValue);
      String = KeyValues::GetString(FirstValue, 0, "", 0, 0);
      _V_ComposeFileName(pBaseDir, String, pFullPath, 260);
      if ( V_stricmp_fast(Name, "game_language") != 0 )
      {
        if ( V_stricmp_fast(Name, "game_lowviolence") != 0 )
        {
          if ( V_stricmp_fast(Name, "game") != 0 )
          {
            if ( V_stricmp_fast(Name, "mod") != 0 )
            {
              if ( V_stricmp_fast(Name, "addonroot") != 0 )
              {
                if ( bFoundWrite || V_stricmp_fast(Name, "write") != 0 )
                {
                  if ( bPublicContent != 0 && V_stricmp_fast(Name, "publiccontent") == 0 )
                  {
LABEL_40:
                    p_pFullFilename = &pFullFilename;
                    _V_ComposeFileName(pContentDir, String, &pFullFilename, 260);
                    goto LABEL_41;
                  }
                }
                else
                {
                  (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(
                    g_pFullFileSystem,
                    pFullPath,
                    "DEFAULT_WRITE_PATH",
                    1,
                    0);
                  bFoundWrite = 1;
                }
              }
              else
              {
                _V_strncpy(pFullAddonPath, pFullPath, 260);
                (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, pFullAddonPath, "ADDONS", 1, 0);
                _V_ComposeFileName(pContentDir, String, &pFullFilename, 260);
                (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, &pFullFilename, "CONTENTADDONS", 1, 0);
              }
            }
            else
            {
              (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, pFullPath, "MOD", 1, 0);
              bFoundMod = 1;
            }
          }
          else
          {
            CTier2AppSystemDict::AddGameSearchPath(this, "GAME", pFullPath, bUsingTempContent);
            if ( !CTier2AppSystemDict::SetupFileSystemPaths(void)::bAddedTestModelsGamePath )
            {
              v39 = CommandLine(v33);
              if ( (*(*v39 + 32LL))(v39, "-dotatestmodels") != 0 )
              {
                v41 = CommandLine(v40);
                if ( (*(*v41 + 32LL))(v41, "-tools") == 0 )
                {
                  _V_ComposeFileName(pBaseDir, "dota_models_imported", &pFullFilename, 260);
                  CTier2AppSystemDict::AddGameSearchPath(this, "GAME", &pFullFilename, bUsingTempContent);
                  CTier2AppSystemDict::SetupFileSystemPaths(void)::bAddedTestModelsGamePath = 1;
                }
              }
            }
            if ( bPublicContent == 0 )
            {
              _V_ComposeFileName(pContentDir, String, szPath, 260);
              CTier2AppSystemDict::AddGameSearchPath(this, "CONTENT", szPath, bUsingTempContent);
              if ( !CTier2AppSystemDict::SetupFileSystemPaths(void)::bAddedTestModelsContentPath )
              {
                v43 = CommandLine(v42);
                if ( (*(*v43 + 32LL))(v43, "-dotatestmodels") != 0 )
                {
                  v45 = CommandLine(v44);
                  if ( (*(*v45 + 32LL))(v45, "-tools") == 0 )
                  {
                    _V_ComposeFileName(pContentDir, "dota_models_imported", &pFullFilename, 260);
                    CTier2AppSystemDict::AddGameSearchPath(this, "CONTENT", &pFullFilename, bUsingTempContent);
                    CTier2AppSystemDict::SetupFileSystemPaths(void)::bAddedTestModelsContentPath = 1;
                  }
                }
              }
            }
            _V_ComposeFileName(pFullPath, "bin/linuxsteamrt64", &pFullFilename, 260);
            (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, &pFullFilename, "GAMEBIN", 1, 0);
            _V_ComposeFileName(pFullPath, "bin", &pFullFilename, 260);
            (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, &pFullFilename, "GAMEBIN", 1, 0);
            if ( !bFoundGame )
              _V_strncpy(pFirstGamePath, pFullPath, 260);
            bFoundGame = 1;
          }
        }
        else if ( m_bIsLowViolence )
        {
          CTier2AppSystemDict::AddGameSearchPath(this, "GAME", pFullPath, bUsingTempContent);
          if ( bPublicContent == 0 )
            goto LABEL_40;
        }
        goto LABEL_35;
      }
      v19 = this->m_AudioLanguage.m_pString;
      p_m_UILanguage = &this->m_UILanguage;
      if ( v19 != 0 && *v19 != 0 )
      {
        p_m_UILanguage = &this->m_AudioLanguage;
      }
      else
      {
        v32 = this->m_UILanguage.m_pString;
        if ( v32 == 0 || *v32 == 0 )
          goto LABEL_35;
      }
      v21 = CUtlString::Get(p_m_UILanguage);
      v22 = v21;
      if ( v21 != 0 && V_stricmp_fast(v21, "english") != 0 )
      {
        v23 = V_stristr_fast(pFullPath, "*LANGUAGE*");
        if ( v23 == 0 )
        {
          Warning(
            "Invalid search path specified for 'game_language'. Search path '%s' does not contain '%s'\n",
            String,
            "*LANGUAGE*");
          goto LABEL_35;
        }
        pLanguageToken = v23;
        _V_strncpy(szPath, pFullPath, v23 - pFullPath + 1);
        _V_strncat(szPath, v22, 260, 0xFFFFFFFFLL);
        _V_strncat(szPath, pLanguageToken + 10, 260, 0xFFFFFFFFLL);
        CTier2AppSystemDict::AddGameSearchPath(this, "GAME", szPath, bUsingTempContent);
        if ( bPublicContent == 0 )
          break;
      }
LABEL_35:
      FirstValue = KeyValues::GetNextValue(FirstValue);
      if ( FirstValue == 0 )
        goto LABEL_42;
    }
    _V_ComposeFileName(pContentDir, String, &pFullFilename, 260);
    v37 = V_stristr_fast(&pFullFilename, "*LANGUAGE*");
    _V_strncpy(szPath, &pFullFilename, v37 - &pFullFilename + 1);
    v38 = v22;
    p_pFullFilename = szPath;
    _V_strncat(szPath, v38, 260, 0xFFFFFFFFLL);
    _V_strncat(szPath, v37 + 10, 260, 0xFFFFFFFFLL);
LABEL_41:
    CTier2AppSystemDict::AddGameSearchPath(this, "CONTENT", p_pFullFilename, bUsingTempContent);
    FirstValue = KeyValues::GetNextValue(FirstValue);
  }
  while ( FirstValue != 0 );
LABEL_42:
  if ( bFoundMod )
    goto LABEL_43;
LABEL_81:
  if ( bAddDefaultModPath != 0 )
  {
    (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, pFirstGamePath, "MOD", 1, 0);
    if ( !bFoundWrite )
LABEL_83:
      (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, pFirstGamePath, "DEFAULT_WRITE_PATH", 1, 0);
  }
  else
  {
LABEL_43:
    if ( !bFoundWrite )
      goto LABEL_83;
  }
  (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, pPlatformPath, "GAME", 1, 0);
  __strcpy_chk(szPath, pBaseDir, 260);
  V_StripFilename(szPath);
  _V_strncat(szPath, "\\src\\shaders\\", 260, 0xFFFFFFFFLL);
  NextValue = KeyValues::GetFirstValue(pSearchPaths);
  if ( NextValue != 0 )
  {
    v28 = 0;
    do
    {
      while ( 1 )
      {
        v29 = KeyValues::GetName(NextValue);
        v30 = KeyValues::GetString(NextValue, 0, "", 0, 0);
        if ( V_stricmp_fast(v29, "game_language") != 0 && V_stricmp_fast(v29, "game_lowviolence") != 0 )
          break;
        NextValue = KeyValues::GetNextValue(NextValue);
        if ( NextValue == 0 )
          goto LABEL_52;
      }
      _V_ComposeFileName(szPath, v30, &pFullFilename, 260);
      if ( v28 == 0 )
      {
        (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, szPath, "SHADER_SOURCE_ROOT", 1, 0);
        (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, &pFullFilename, "SHADER_SOURCE_MOD", 1, 0);
      }
      v28 = 1;
      (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, &pFullFilename, "SHADER_SOURCE", 1, 0);
      NextValue = KeyValues::GetNextValue(NextValue);
    }
    while ( NextValue != 0 );
  }
LABEL_52:
  (*(g_pFullFileSystem->_vptr_IAppSystem + 20))(g_pFullFileSystem, "ADDONS", 1);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 20))(g_pFullFileSystem, "CONTENTADDONS", 1);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 20))(g_pFullFileSystem, "CONTENT", 1);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 20))(g_pFullFileSystem, "DEFAULT_WRITE_PATH", 1);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 20))(g_pFullFileSystem, "EXECUTABLE_PATH", 1);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 20))(g_pFullFileSystem, "GAMEBIN", 1);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 20))(g_pFullFileSystem, "MOD", 1);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 20))(g_pFullFileSystem, "SHADER_SOURCE_MOD", 1);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 20))(g_pFullFileSystem, "SHADER_SOURCE", 1);
  return 1;
}


// CTier2AppSystemDict::SetAllowAddonChanges  (line 1220, @0x0000000001999fa4, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CTier2Application::SetAllowAddonChanges, CTier2AppSystemDict::GetAvailableAddonMaps_, CTier2Application::GetAvailableAddonMaps, CTier2Application::GetAddonInfo
// strings: "../../public/appframework/tier2app.h", "SetAllowAddonChanges", "Mismatched CTier2AppSystemDict::SetAllowAddonChanges!!!\n"
void __fastcall CTier2AppSystemDict::SetAllowAddonChanges(CTier2AppSystemDict *const this, bool bAllow)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  CTier2AppSystemDict *const v8; // rdi
  const char *v9; // rsi
  LeafCodeInfo_t v10; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v10.m_szFile = "../../public/appframework/tier2app.h";
    v10.m_szFunction = "SetAllowAddonChanges";
    v10.m_nLine = 1233;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v10,
      "Mismatched CTier2AppSystemDict::SetAllowAddonChanges!!!\n",
      v6,
      v7);
  }
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v4, v5, v2, v3) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
  CTier2AppSystemDict::UnmountAddon(v8, v9);
}


// CTier2AppSystemDict::MountAddon  (line 1250, @0x0000000002345ba0, libserver.so)  // inlines: AddMultipleToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Defined, EnsureCount, GetSearchPath, GrowMemory, GrowVector, InsertMultipleBefore, IsUGCAddonName, LeafCodeInfo_t, Length, RemoveAll, SetPtr, V_ComposeFileName<long unsigned int>, V_strlen, operator char const*, operator const UtlSymId_t, operator=, operator==, operator[], ~CUtlString, ~CUtlVector
// calls: CUtlString::Get, V_stricmp_fast, Warning, CUtlSymbolTable::Find, CUtlSymbolTable::AddString, CUtlStringMap<int, CUtlSymbolTable>::operator[], CTier2AppSystemDict::GetIDFromAddonName, CTier2AppSystemDict::GetFullAddonPathFromAddonName, CUtlString::FreeMemoryBlock, strlen, V_IsAbsolutePath, V_GetFileExtension (23 total)
// callers: CTier2Application::MountAddon, CTier2AppSystemDict::GetAvailableAddonMaps_, CTier2Application::GetAvailableAddonMaps, CTier2Application::GetAddonInfo
// strings: "WARNING: You are trying to mount an addon (%s) in tools mode that is different from the a, "CONTENTADDONS", "MountAddon: Failed to find ADDONS search path.\n", "WARNING: You are trying to mount an addon but have not specified an addon name via the -a, "%svpks/%s.vpk", "MountAddonSearchPaths: Failed to find CONTENTADDONS search path.\n" (10 total)
void __fastcall CTier2AppSystemDict::MountAddon(CTier2AppSystemDict *const this, const char *pAddonName)
{
  const char *v2; // rbx
  const char *v4; // rax
  const char *v5; // r13
  __int64 m_Size_low; // r13
  int m_Size; // eax
  int v8; // r14d
  int *v9; // rdx
  int v10; // eax
  int v11; // r14d
  int v12; // eax
  void *v13; // rsp
  const char *v14; // rsi
  int m_nAllocationCount; // eax
  char *v16; // r12
  __int64 FileExtension; // rax
  int v18; // edx
  unsigned __int64 v19; // r12
  const char *v20; // r14
  int v21; // edx
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  unsigned int v28; // [rsp+Ch] [rbp-2B4h]
  char *pAddonModPaths; // [rsp+10h] [rbp-2B0h] BYREF
  unsigned __int64 v30; // [rsp+18h] [rbp-2A8h]
  CUtlVectorBase<char*,CUtlMemory<char*,int> > *p_paths; // [rsp+20h] [rbp-2A0h]
  char (*pDest)[260]; // [rsp+28h] [rbp-298h]
  CUtlString sAddonFullPath; // [rsp+30h] [rbp-290h] BYREF
  char *s; // [rsp+40h] [rbp-280h] BYREF
  CUtlVector<char*,CUtlMemory<char*,int> > paths; // [rsp+50h] [rbp-270h] BYREF
  char pAddonPath[272]; // [rsp+70h] [rbp-250h] BYREF
  char pContentAddonPath[264]; // [rsp+180h] [rbp-140h] BYREF
  unsigned __int64 v38; // [rsp+288h] [rbp-38h]

  v2 = pAddonName;
  v38 = __readfsqword(0x28u);
  if ( pAddonName == 0 || *pAddonName == 0 )
    return;
  if ( this->m_nAllowAddonChanges.m_value == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_58;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v26, v27, v24, v25) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_58:
      *&paths.m_Size = "../../public/appframework/tier2app.h";
      *&paths.m_Memory.m_nAllocationCount = "MountAddon";
      LODWORD(paths.m_Memory.m_pMemory) = 1257;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &paths,
        "ERROR: You are trying to mount addon '%s' but SetAllowAddonChanges is false which probably means you shouldn't b"
        "e calling this directly.\n",
        v2);
    }
  }
  if ( this->m_bAddonsOnRestricted )
  {
    v4 = CUtlString::Get(&this->m_addonToRestrictTo);
    v5 = v4;
    if ( v4 == 0 && loc_0 == 0 )
    {
      Warning(
        "WARNING: You are trying to mount an addon but have not specified an addon name via the -addon command line option.\n");
      return;
    }
    if ( V_stricmp_fast(v2, v4) != 0 )
    {
      Warning(
        "WARNING: You are trying to mount an addon (%s) in tools mode that is different from the addon tools mode was lau"
        "nched with (%s).\n",
        v2,
        v5);
      return;
    }
  }
  p_paths = &paths;
  CUtlSymbolTable::Find(&this->m_addonRefcounts.m_SymbolTable, v2);
  if ( LOWORD(paths.m_Size) == 0xFFFF )
    *CUtlStringMap<int,CUtlSymbolTable>::operator[](&this->m_addonRefcounts, v2) = 0;
  CUtlSymbolTable::AddString(&this->m_addonRefcounts.m_SymbolTable, v2);
  m_Size_low = LOWORD(paths.m_Size);
  m_Size = this->m_addonRefcounts.m_Vector.m_Size;
  if ( LOWORD(paths.m_Size) >= m_Size )
  {
    v8 = LOWORD(paths.m_Size) + 1;
    if ( m_Size < v8 )
    {
      m_nAllocationCount = this->m_addonRefcounts.m_Vector.m_Memory.m_nAllocationCount;
      if ( v8 > m_nAllocationCount )
        CUtlMemory<int,int>::Grow(&this->m_addonRefcounts.m_Vector.m_Memory, v8 - m_nAllocationCount);
      this->m_addonRefcounts.m_Vector.m_Size = v8;
    }
  }
  v9 = &this->m_addonRefcounts.m_Vector.m_Memory.m_pMemory[m_Size_low];
  v10 = (*v9)++;
  if ( v10 > 0 )
    return;
  v11 = (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "ADDONS", 0, 0, 0);
  v12 = (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "CONTENTADDONS", 0, 0, 0);
  if ( v12 >= v11 )
    v11 = v12;
  v13 = alloca(((v11 + 32) & 0xFFFFFFF0) + 16LL);
  pAddonModPaths = (&pAddonModPaths & 0xFFFFFFFFFFFFFFEFLL);
  v28 = v11 + 1;
  if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(
         g_pFullFileSystem,
         "ADDONS",
         0,
         &pAddonModPaths & 0xFFFFFFFFFFFFFFEFLL,
         (v11 + 1)) == 0 )
  {
    Warning("MountAddon: Failed to find ADDONS search path.\n");
    return;
  }
  sAddonFullPath.m_pString = 0;
  if ( CTier2AppSystemDict::GetIDFromAddonName(v2, v14) != 0 )
  {
    CTier2AppSystemDict::GetFullAddonPathFromAddonName(&s, this, v2);
    v16 = s;
    if ( sAddonFullPath.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&sAddonFullPath);
    sAddonFullPath.m_pString = v16;
    if ( v16 != 0 && strlen(v16) > 0 )
      v2 = CUtlString::Get(&sAddonFullPath);
  }
  if ( V_IsAbsolutePath(v2) != 0 )
  {
    FileExtension = V_GetFileExtension(v2);
    if ( FileExtension != 0
      && V_stricmp_fast(FileExtension, "vpk") == 0
      && (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(&g_pFullFileSystem->IBaseFileSystem, v2, 0) != 0 )
    {
      (*(g_pFullFileSystem->_vptr_IAppSystem + 113))(g_pFullFileSystem, v2, "GAME", 0);
    }
    else if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 28))(g_pFullFileSystem, v2, "GAME") != 0 )
    {
      (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, v2, "GAME", 0, 2);
    }
  }
  else
  {
    paths.m_Size = 0;
    paths.m_Memory.m_pMemory = 0;
    paths.m_Memory.m_nAllocationCount = 0;
    paths.m_Memory.m_nGrowSize = 0;
    V_SplitString(pAddonModPaths, ";", p_paths);
    v18 = paths.m_Size - 1;
    if ( paths.m_Size - 1 >= 0 )
    {
      v19 = 8LL * v18;
      v30 = 8 * (v18 - v18) - 8;
      pDest = pContentAddonPath;
      do
      {
        v20 = paths.m_Memory.m_pMemory[v19 / 8];
        _V_ComposeFileName(v20, v2, pAddonPath, 260);
        V_sprintf_safe<260ul>(pDest, "%svpks/%s.vpk", v20, v2);
        if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(&g_pFullFileSystem->IBaseFileSystem, pAddonPath, 0) != 0 )
        {
          (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, pAddonPath, "GAME", 0, 2);
        }
        else if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(&g_pFullFileSystem->IBaseFileSystem, pDest, 0) != 0 )
        {
          (*(g_pFullFileSystem->_vptr_IAppSystem + 113))(g_pFullFileSystem, pDest, "GAME", 0);
        }
        v19 -= 8LL;
      }
      while ( v19 != v30 );
    }
    if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "CONTENTADDONS", 0, pAddonModPaths, v28) != 0 )
    {
      paths.m_Size = 0;
      V_SplitString(pAddonModPaths, ";", p_paths);
      v21 = paths.m_Size - 1;
      if ( paths.m_Size - 1 >= 0 )
      {
        v22 = 8LL * v21;
        v23 = 8 * (v21 - v21) - 8;
        do
        {
          _V_ComposeFileName(paths.m_Memory.m_pMemory[v22 / 8], v2, pContentAddonPath, 260);
          if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(
                 &g_pFullFileSystem->IBaseFileSystem,
                 pContentAddonPath,
                 0) != 0 )
            (*(g_pFullFileSystem->_vptr_IAppSystem + 13))(g_pFullFileSystem, pContentAddonPath, "CONTENT", 0, 0);
          v22 -= 8LL;
        }
        while ( v22 != v23 );
      }
      CUtlVectorBase<char *,CUtlMemory<char *,int>>::~CUtlVectorBase(p_paths);
      if ( sAddonFullPath.m_pString != 0 )
        goto LABEL_35;
      return;
    }
    Warning("MountAddonSearchPaths: Failed to find CONTENTADDONS search path.\n");
    CUtlVectorBase<char *,CUtlMemory<char *,int>>::~CUtlVectorBase(p_paths);
  }
  if ( sAddonFullPath.m_pString != 0 )
LABEL_35:
    CUtlString::FreeMemoryBlock(&sAddonFullPath);
}


// CTier2AppSystemDict::RemoveAddonSearchPaths  (line 1399, @0x0000000002341120, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetSearchPath, Purge, RemoveAll, V_ComposeFileName<long unsigned int>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), _V_ComposeFileName, V_sprintf_safe<512ul>, Warning, CUtlMemory<char*, int>::Purge, __stack_chk_fail, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CTier2AppSystemDict::UnmountAddon, CTier2Application::UnmountAddon, CTier2Application::GetAddonInfo
// strings: "%svpks/%s.vpk", "UnmountAddon: Failed to find %s search path.\n"
void __fastcall CTier2AppSystemDict::RemoveAddonSearchPaths(
        CTier2AppSystemDict *const this,
        const char *pPathID,
        const char *pAddonPathId,
        const char *pAddonName)
{
  int v7; // eax
  void *v8; // rsp
  __int64 v9; // rbx
  char *v10; // r12
  const char *v11; // rdx
  char *v12; // r12
  char (*pDest)[512]; // [rsp+10h] [rbp-470h] BYREF
  char *v14; // [rsp+18h] [rbp-468h]
  CUtlVector<char*,CUtlMemory<char*,int> > addonPaths; // [rsp+20h] [rbp-460h] BYREF
  char pAddonPath[512]; // [rsp+40h] [rbp-440h] BYREF
  char pVPKPath[512]; // [rsp+240h] [rbp-240h] BYREF
  unsigned __int64 v18; // [rsp+448h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  v7 = (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, pAddonPathId, 0, 0, 0);
  v8 = alloca(((v7 + 32) & 0xFFFFFFF0) + 16LL);
  if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(
         g_pFullFileSystem,
         pAddonPathId,
         0,
         &pDest & 0xFFFFFFFFFFFFFFEFLL,
         (v7 + 1)) != 0 )
  {
    addonPaths.m_Size = 0;
    addonPaths.m_Memory.m_pMemory = 0;
    addonPaths.m_Memory.m_nAllocationCount = 0;
    addonPaths.m_Memory.m_nGrowSize = 0;
    V_SplitString(&pDest & 0xFFFFFFFFFFFFFFEFLL, ";", &addonPaths);
    if ( addonPaths.m_Size > 0 )
    {
      v9 = 0;
      v14 = pAddonPath;
      pDest = pVPKPath;
      do
      {
        v10 = addonPaths.m_Memory.m_pMemory[v9];
        _V_ComposeFileName(v10, pAddonName, v14, 512);
        v11 = v10;
        v12 = pDest;
        V_sprintf_safe<512ul>(pDest, "%svpks/%s.vpk", v11, pAddonName);
        (*(g_pFullFileSystem->_vptr_IAppSystem + 14))(g_pFullFileSystem, v14, pPathID);
        (*(g_pFullFileSystem->_vptr_IAppSystem + 14))(g_pFullFileSystem, v12, pPathID);
        ++v9;
      }
      while ( v9 < addonPaths.m_Size );
    }
    addonPaths.m_Size = 0;
    if ( (addonPaths.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char *,int>::Purge(&addonPaths.m_Memory);
      if ( (addonPaths.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<char *,int>::Purge(&addonPaths.m_Memory);
    }
  }
  else
  {
    Warning("UnmountAddon: Failed to find %s search path.\n", pAddonPathId);
  }
}


// CTier2AppSystemDict::UnmountAddon  (line 1430, @0x000000000199a018, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CTier2AppSystemDict::UnmountAddon, CTier2Application::UnmountAddon, CTier2Application::GetAddonInfo
// strings: "../../public/appframework/tier2app.h", "UnmountAddon", "ERROR: You are trying to unmount addon '%s', but SetAllowAddonChanges is false which prob
void __fastcall CTier2AppSystemDict::UnmountAddon(CTier2AppSystemDict *const this, const char *pAddonName)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  const char *v7; // rdi
  LeafCodeInfo_t v8; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v8.m_szFile = "../../public/appframework/tier2app.h";
    v8.m_szFunction = "UnmountAddon";
    v8.m_nLine = 1437;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v8,
      "ERROR: You are trying to unmount addon '%s', but SetAllowAddonChanges is false which probably means you should be "
      "using calling this directly.\n",
      this);
  }
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v5, v6, v3, v4) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
  GetNetworkGroupColor(v7);
}


// CTier2AppSystemDict::UnmountAddon  (line 1430, @0x00000000023458b0, libserver.so)  // inlines: AddMultipleToTail, CUtlString, Defined, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, IsUGCAddonName, Length, SetPtr, V_strlen, operator char const*, operator const UtlSymId_t, operator=, operator==, operator[], ~CUtlString
// calls: CUtlSymbolTable::Find, CUtlSymbolTable::AddString, CUtlMemory<int, int>::Grow, CTier2AppSystemDict::GetIDFromAddonName, CTier2AppSystemDict::GetFullAddonPathFromAddonName, CUtlString::FreeMemoryBlock, strlen, CUtlString::Get, V_IsAbsolutePath, V_GetFileExtension, V_stricmp_fast, CTier2AppSystemDict::RemoveAddonSearchPaths (14 total)
// callers: CTier2AppSystemDict::GetAvailableAddonMaps_, CTier2Application::GetAvailableAddonMaps
// strings: "CONTENTADDONS", "CONTENT"
void __fastcall CTier2AppSystemDict::UnmountAddon(CTier2AppSystemDict *const this, const char *pAddonName)
{
  const char *v2; // rbx
  CUtlSymbolTable *p_m_SymbolTable; // r14
  __int64 v5; // r15
  int m_Size; // eax
  int v7; // edx
  int m_nAllocationCount; // eax
  const char *v9; // rsi
  __int64 v10; // r14
  int v11; // eax
  int v12; // r15d
  int *v13; // rdx
  int v14; // eax
  bool v15; // zf
  int v16; // eax
  __int64 FileExtension; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // esi
  int v21; // r8d
  int v22; // r9d
  int v23; // eax
  int v24; // ebx
  CUtlString sAddonFullPath; // [rsp+10h] [rbp-50h] BYREF
  char *s; // [rsp+20h] [rbp-40h] BYREF

  v2 = pAddonName;
  if ( pAddonName != 0 && *pAddonName != 0 )
  {
    if ( this->m_nAllowAddonChanges.m_value == 0 )
    {
      CTier2AppSystemDict::UnmountAddon(pAddonName, pAddonName);
      v24 = v23;
      if ( sAddonFullPath.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&sAddonFullPath);
      Unwind_Resume(v24, v20, v18, v19, v21, v22);
    }
    p_m_SymbolTable = &this->m_addonRefcounts.m_SymbolTable;
    CUtlSymbolTable::Find(&this->m_addonRefcounts.m_SymbolTable, pAddonName);
    if ( s != 0xFFFF )
    {
      CUtlSymbolTable::AddString(p_m_SymbolTable, v2);
      v5 = s;
      m_Size = this->m_addonRefcounts.m_Vector.m_Size;
      if ( s >= m_Size )
      {
        v7 = s + 1;
        if ( m_Size < v7 )
        {
          m_nAllocationCount = this->m_addonRefcounts.m_Vector.m_Memory.m_nAllocationCount;
          if ( v7 > m_nAllocationCount )
          {
            CUtlMemory<int,int>::Grow(&this->m_addonRefcounts.m_Vector.m_Memory, v7 - m_nAllocationCount);
            v7 = s + 1;
          }
          this->m_addonRefcounts.m_Vector.m_Size = v7;
        }
      }
      if ( this->m_addonRefcounts.m_Vector.m_Memory.m_pMemory[v5] != 0 )
      {
        CUtlSymbolTable::AddString(p_m_SymbolTable, v2);
        v10 = s;
        v11 = this->m_addonRefcounts.m_Vector.m_Size;
        if ( s >= v11 )
        {
          v12 = s + 1;
          if ( v11 < v12 )
          {
            v16 = this->m_addonRefcounts.m_Vector.m_Memory.m_nAllocationCount;
            if ( v12 > v16 )
              CUtlMemory<int,int>::Grow(&this->m_addonRefcounts.m_Vector.m_Memory, v12 - v16);
            this->m_addonRefcounts.m_Vector.m_Size = v12;
          }
        }
        v13 = &this->m_addonRefcounts.m_Vector.m_Memory.m_pMemory[v10];
        v14 = *v13 - 1;
        v15 = *v13 == 1;
        *v13 = v14;
        if ( v14 < 0 || v15 )
        {
          sAddonFullPath.m_pString = 0;
          if ( CTier2AppSystemDict::GetIDFromAddonName(v2, v9) != 0 )
          {
            CTier2AppSystemDict::GetFullAddonPathFromAddonName(&s, this, v2);
            sAddonFullPath.m_pString = s;
            if ( s != 0 && strlen(s) > 0 )
              v2 = CUtlString::Get(&sAddonFullPath);
          }
          if ( V_IsAbsolutePath(v2) != 0 )
          {
            FileExtension = V_GetFileExtension(v2);
            if ( FileExtension == 0 || V_stricmp_fast(FileExtension, "vpk") != 0 )
            {
              if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 28))(g_pFullFileSystem, v2, "GAME") != 0 )
                (*(g_pFullFileSystem->_vptr_IAppSystem + 14))(g_pFullFileSystem, v2, "GAME");
            }
            else
            {
              (*(g_pFullFileSystem->_vptr_IAppSystem + 114))(g_pFullFileSystem, v2, "GAME");
            }
            if ( sAddonFullPath.m_pString == 0 )
              return;
          }
          else
          {
            CTier2AppSystemDict::RemoveAddonSearchPaths(this, "GAME", "ADDONS", v2);
            CTier2AppSystemDict::RemoveAddonSearchPaths(this, "CONTENT", "CONTENTADDONS", v2);
            if ( sAddonFullPath.m_pString == 0 )
              return;
          }
          CUtlString::FreeMemoryBlock(&sAddonFullPath);
        }
      }
    }
  }
}


// CTier2AppSystemDict::GetAddonsDirectory  (line 1508, @0x000000000233f540, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetSearchPath, Purge, RemoveAll, V_strncpy<int>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), _V_strncpy, Warning, CUtlMemory<char*, int>::Purge, __stack_chk_fail, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CTier2Application::GetAddonsDirectory
// strings: "GetAddonsDirectory: Failed to find ADDONS search path.\n"
bool __fastcall CTier2AppSystemDict::GetAddonsDirectory(CTier2AppSystemDict *const this, char *pszResult, int nChars)
{
  CUtlVector<char*,CUtlMemory<char*,int> > paths; // [rsp+0h] [rbp-460h] BYREF
  char szAddonPaths[1048]; // [rsp+20h] [rbp-440h] BYREF
  unsigned __int64 v8; // [rsp+438h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "ADDONS", 0, szAddonPaths, 1040) != 0 )
  {
    paths.m_Size = 0;
    paths.m_Memory.m_pMemory = 0;
    paths.m_Memory.m_nAllocationCount = 0;
    paths.m_Memory.m_nGrowSize = 0;
    V_SplitString(szAddonPaths, ";", &paths);
    _V_strncpy(pszResult, *paths.m_Memory.m_pMemory, nChars);
    paths.m_Size = 0;
    if ( (paths.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char *,int>::Purge(&paths.m_Memory);
      if ( (paths.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<char *,int>::Purge(&paths.m_Memory);
    }
    return 1;
  }
  else
  {
    Warning("GetAddonsDirectory: Failed to find ADDONS search path.\n");
    return 0;
  }
}


// CTier2AppSystemDict::GetAddonsContentDirectory  (line 1523, @0x000000000233f690, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetSearchPath, Purge, RemoveAll, V_strncpy<int>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), _V_strncpy, Warning, CUtlMemory<char*, int>::Purge, __stack_chk_fail, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CTier2Application::GetAddonsContentDirectory
// strings: "CONTENTADDONS", "GetAddonsContentDirectory: Failed to find CONTENTADDONS search path.\n"
bool __fastcall CTier2AppSystemDict::GetAddonsContentDirectory(
        CTier2AppSystemDict *const this,
        char *pszResult,
        int nChars)
{
  CUtlVector<char*,CUtlMemory<char*,int> > paths; // [rsp+0h] [rbp-460h] BYREF
  char szAddonPaths[1048]; // [rsp+20h] [rbp-440h] BYREF
  unsigned __int64 v8; // [rsp+438h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "CONTENTADDONS", 0, szAddonPaths, 1040) != 0 )
  {
    paths.m_Size = 0;
    paths.m_Memory.m_pMemory = 0;
    paths.m_Memory.m_nAllocationCount = 0;
    paths.m_Memory.m_nGrowSize = 0;
    V_SplitString(szAddonPaths, ";", &paths);
    _V_strncpy(pszResult, *paths.m_Memory.m_pMemory, nChars);
    paths.m_Size = 0;
    if ( (paths.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char *,int>::Purge(&paths.m_Memory);
      if ( (paths.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<char *,int>::Purge(&paths.m_Memory);
    }
    return 1;
  }
  else
  {
    Warning("GetAddonsContentDirectory: Failed to find CONTENTADDONS search path.\n");
    return 0;
  }
}


// CTier2AppSystemDict::GetAvailableAddons  (line 1538, @0x00000000023449c0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<CUtlString>, Element, FileFindHandle_t, GetSearchPath, GrowMemory, Purge, RemoveAll, V_ComposeFileName<long unsigned int>, V_StripExtension<long unsigned int>, _V_strcmp, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~FileFindHandle_t
// calls: CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), _V_ComposeFileName, CUtlString::FreeMemoryBlock, V_GetFileExtensionSafe, V_stricmp_fast, V_UnqualifiedFileName, _V_StripExtension, CUtlString::Set, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Find, CUtlString::Get, CUtlMemory<CUtlString, int>::Grow (17 total)
// callers: CTier2Application::GetAvailableAddons
// strings: "vpks"
void __fastcall CTier2AppSystemDict::GetAvailableAddons(
        CTier2AppSystemDict *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pResult,
        int nSearchType)
{
  int v4; // eax
  _BYTE *j; // rax
  _BYTE *v6; // rbx
  __int64 FileExtensionSafe; // rax
  __int64 v8; // rax
  __int64 m_Size; // rbx
  int v10; // eax
  CUtlString *v11; // rbx
  const char *v12; // rax
  const char *k; // rax
  const char *v14; // rbx
  __int64 v15; // rbx
  int v16; // eax
  CUtlString *v17; // rbx
  const char *v18; // rax
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int> >::CAllocator *p_m_Memory; // [rsp+10h] [rbp-6E0h]
  char nSearchTypea; // [rsp+24h] [rbp-6CCh]
  char *szAddonsDirectory; // [rsp+28h] [rbp-6C8h]
  __int64 i; // [rsp+30h] [rbp-6C0h]
  CUtlString addonID; // [rsp+40h] [rbp-6B0h] BYREF
  FileFindHandle_t hDirectory; // [rsp+50h] [rbp-6A0h] BYREF
  CUtlVector<char*,CUtlMemory<char*,int> > paths; // [rsp+60h] [rbp-690h] BYREF
  char szAddonsWildcard[272]; // [rsp+80h] [rbp-670h] BYREF
  char szAddonName[272]; // [rsp+190h] [rbp-560h] BYREF
  char szAddonPaths[1048]; // [rsp+2A0h] [rbp-450h] BYREF
  unsigned __int64 v29; // [rsp+6B8h] [rbp-38h]

  nSearchTypea = nSearchType;
  v29 = __readfsqword(0x28u);
  if ( pResult != 0 )
  {
    CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::RemoveAll(pResult);
    p_m_Memory = &pResult->m_Memory;
    if ( (pResult->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&pResult->m_Memory);
    (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "ADDONS", 0, szAddonPaths, 1040);
    paths.m_Size = 0;
    paths.m_Memory.m_pMemory = 0;
    paths.m_Memory.m_nAllocationCount = 0;
    paths.m_Memory.m_nGrowSize = 0;
    V_SplitString(szAddonPaths, ";", &paths);
    if ( paths.m_Size > 0 )
    {
      i = 0;
      do
      {
        szAddonsDirectory = paths.m_Memory.m_pMemory[i];
        if ( (nSearchTypea & 2) == 0 )
          goto LABEL_6;
        _V_ComposeFileName(paths.m_Memory.m_pMemory[i], "vpks", szAddonsWildcard, 260);
        _V_ComposeFileName(szAddonsWildcard, "*.*", szAddonsWildcard, 260);
        hDirectory.m_pFileSystem = 0;
        hDirectory.m_nFindDataIndex = 0;
        for ( j = (*(g_pFullFileSystem->_vptr_IAppSystem + 37))(g_pFullFileSystem, szAddonsWildcard, &hDirectory);
              ;
              j = (*(g_pFullFileSystem->_vptr_IAppSystem + 38))(g_pFullFileSystem, &hDirectory) )
        {
          v6 = j;
          if ( j == 0 )
            break;
          if ( *j != 46 )
          {
            FileExtensionSafe = V_GetFileExtensionSafe(j);
            if ( V_stricmp_fast(FileExtensionSafe, "vpk") == 0 )
            {
              v8 = V_UnqualifiedFileName(v6);
              _V_StripExtension(v8, szAddonName, 260);
              addonID.m_pString = 0;
              CUtlString::Set(&addonID, szAddonName);
              if ( CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::Find(pResult, &addonID) == -1 )
              {
                m_Size = pResult->m_Size;
                v10 = pResult->m_Size;
                if ( m_Size == pResult->m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CUtlString,int>::Grow(p_m_Memory, 1);
                  v10 = pResult->m_Size;
                }
                pResult->m_Size = v10 + 1;
                v11 = &pResult->m_Memory.m_pMemory[m_Size];
                if ( v11 != 0 )
                {
                  v11->m_pString = 0;
                  v12 = CUtlString::Get(&addonID);
                  CUtlString::Set(v11, v12);
                }
              }
              if ( addonID.m_pString != 0 )
                CUtlString::FreeMemoryBlock(&addonID);
            }
          }
        }
        (*(g_pFullFileSystem->_vptr_IAppSystem + 40))(g_pFullFileSystem, &hDirectory);
        if ( hDirectory.m_pFileSystem != 0 )
        {
          (*(hDirectory.m_pFileSystem->_vptr_IAppSystem + 40))(hDirectory.m_pFileSystem, &hDirectory);
          if ( (nSearchTypea & 1) != 0 )
          {
LABEL_23:
            _V_ComposeFileName(szAddonsDirectory, "*.*", szAddonsWildcard, 260);
            hDirectory.m_pFileSystem = 0;
            hDirectory.m_nFindDataIndex = 0;
            for ( k = (*(g_pFullFileSystem->_vptr_IAppSystem + 37))(g_pFullFileSystem, szAddonsWildcard, &hDirectory);
                  ;
                  k = (*(g_pFullFileSystem->_vptr_IAppSystem + 38))(g_pFullFileSystem, &hDirectory) )
            {
              v14 = k;
              if ( k == 0 )
                break;
              if ( *k != 46
                && strcmp(k, "vpks") != 0
                && (*(g_pFullFileSystem->_vptr_IAppSystem + 39))(g_pFullFileSystem, &hDirectory) != 0 )
              {
                addonID.m_pString = 0;
                CUtlString::Set(&addonID, v14);
                if ( CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::Find(pResult, &addonID) == -1 )
                {
                  v15 = pResult->m_Size;
                  v16 = pResult->m_Size;
                  if ( v15 == pResult->m_Memory.m_nAllocationCount )
                  {
                    CUtlMemory<CUtlString,int>::Grow(p_m_Memory, 1);
                    v16 = pResult->m_Size;
                  }
                  pResult->m_Size = v16 + 1;
                  v17 = &pResult->m_Memory.m_pMemory[v15];
                  if ( v17 != 0 )
                  {
                    v17->m_pString = 0;
                    v18 = CUtlString::Get(&addonID);
                    CUtlString::Set(v17, v18);
                  }
                }
                if ( addonID.m_pString != 0 )
                  CUtlString::FreeMemoryBlock(&addonID);
              }
            }
            (*(g_pFullFileSystem->_vptr_IAppSystem + 40))(g_pFullFileSystem, &hDirectory);
            if ( hDirectory.m_pFileSystem != 0 )
              (*(hDirectory.m_pFileSystem->_vptr_IAppSystem + 40))(hDirectory.m_pFileSystem, &hDirectory);
          }
        }
        else
        {
LABEL_6:
          if ( (nSearchTypea & 1) != 0 )
            goto LABEL_23;
        }
        v4 = i++;
      }
      while ( v4 + 1 < paths.m_Size );
    }
    paths.m_Size = 0;
    if ( (paths.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char *,int>::Purge(&paths.m_Memory);
      if ( (paths.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<char *,int>::Purge(&paths.m_Memory);
    }
  }
}


// CTier2AppSystemDict::IsFileInAddon  (line 1693, @0x0000000002340fa0, libserver.so)  // inlines: String, V_strEndsWith, V_strlen, _V_strEndsWithInner<true>, _V_strcmp, _V_strstr, strstr
// calls: strstr, CUtlSymbolTable::String, strlen, V_sprintf_safe<260ul>, V_FixSlashes, __stack_chk_fail
// callers: CTier2Application::IsFileInAddon
// strings: "/game/dota_addons/%s/"
bool __fastcall CTier2AppSystemDict::IsFileInAddon(CTier2AppSystemDict *const this, const char *pFileName)
{
  int m_Size; // r13d
  int v4; // ebx
  const char *v5; // rax
  const char *v6; // r15
  int v7; // eax
  const CUtlSymbolTable *p_m_SymbolTable; // [rsp+18h] [rbp-268h]
  CUtlSymbol id; // [rsp+20h] [rbp-260h] BYREF
  char pszFullPathBuf[272]; // [rsp+30h] [rbp-250h] BYREF
  char pszTemp[260]; // [rsp+140h] [rbp-140h] BYREF
  unsigned __int64 v13; // [rsp+248h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 23))(g_pFullFileSystem, pFileName, "GAME", pszFullPathBuf, 260, 0, 0) != 0 )
  {
    m_Size = this->m_addonRefcounts.m_Vector.m_Size;
    if ( m_Size > 0 )
    {
      v4 = 0;
      p_m_SymbolTable = &this->m_addonRefcounts.m_SymbolTable;
      do
      {
        id.m_Id = v4;
        v5 = CUtlSymbolTable::String(p_m_SymbolTable, &id);
        v6 = v5;
        if ( v5 != 0 && (v7 = strlen(v5)) > 3 && strcmp(&v6[v7 - 4], ".vpk") == 0 )
        {
          if ( strstr(pszFullPathBuf, v6) != 0 )
            return 1;
        }
        else
        {
          V_sprintf_safe<260ul>(pszTemp, "/game/dota_addons/%s/", v6);
          V_FixSlashes(pszTemp, 47);
          if ( strstr(pszFullPathBuf, pszTemp) != 0 )
            return 1;
        }
        ++v4;
      }
      while ( v4 != m_Size );
    }
  }
  return 0;
}


// CTier2AppSystemDict::GetAddonNameFromID  (line 1731, @0x0000000002340800, libserver.so)  // inlines: CUtlString, GetFullAddonPathFromAddonName
// calls: CFmtStrN<256, false>::CFmtStrN, CommandLine, memset, CUtlString::Set, __stack_chk_fail
// callers: CTier2Application::GetAddonNameFromID
// strings: "-addon_path"
CUtlString __fastcall CTier2AppSystemDict::GetAddonNameFromID(
        CUtlString *a1,
        const CTier2AppSystemDict *const this,
        uint64 uID)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  IUGCAddonPathResolver *m_pUGCAddonPathResolver; // r12
  char pValue[272]; // [rsp+0h] [rbp-650h] BYREF
  CFmtStr sName; // [rsp+110h] [rbp-540h] BYREF
  char s[1032]; // [rsp+220h] [rbp-430h] BYREF
  unsigned __int64 v12; // [rsp+628h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  CFmtStrN<256,false>::CFmtStrN(&sName, "%llu", uID);
  v6 = CommandLine(v5);
  (*(*v6 + 104LL))(v6, "-addon_path", "", pValue, 260);
  if ( pValue[0] != 0 )
  {
    a1->m_pString = 0;
    CUtlString::Set(a1, pValue);
  }
  else
  {
    m_pUGCAddonPathResolver = this->m_pUGCAddonPathResolver;
    if ( m_pUGCAddonPathResolver != 0 )
    {
      memset(s, 0, 0x400u);
      (*m_pUGCAddonPathResolver->_vptr_IUGCAddonPathResolver)(m_pUGCAddonPathResolver, sName.m_szBuf, s, 1024);
      a1->m_pString = 0;
      CUtlString::Set(a1, s);
    }
    else
    {
      a1->m_pString = 0;
      CUtlString::Set(a1, sName.m_szBuf);
    }
  }
  return a1;
}


// CTier2AppSystemDict::GetIDFromAddonName  (line 1737, @0x000000000231f370, libserver.so)
// calls: V_sscanf
// callers: CTier2AppSystemDict::UnmountAddon, CTier2AppSystemDict::MountAddon, CTier2Application::UnmountAddon, CTier2Application::GetAddonInfo
uint64 __fastcall CTier2AppSystemDict::GetIDFromAddonName(
        const CTier2AppSystemDict *const this,
        const char *pAddonName)
{
  int v2; // eax
  __int64 v3; // rdx
  uint64 nFileID; // [rsp+8h] [rbp-8h] BYREF

  nFileID = 0;
  v2 = V_sscanf(this, "%lld", &nFileID);
  v3 = 0;
  if ( v2 != 0 )
    return nFileID;
  return v3;
}


// CTier2AppSystemDict::GetFullAddonPathFromAddonName  (line 1746, @0x000000000233e4e0, libserver.so)  // inlines: CUtlString
// calls: CommandLine, memset, CUtlString::Set, __stack_chk_fail
// callers: CTier2Application::GetFullAddonPathFromAddonName, CTier2AppSystemDict::UnmountAddon, CTier2AppSystemDict::MountAddon, CTier2Application::UnmountAddon, CTier2Application::GetAddonInfo
// strings: "-addon_path"
CUtlString __fastcall CTier2AppSystemDict::GetFullAddonPathFromAddonName(
        CUtlString *a1,
        const CTier2AppSystemDict *const this,
        const char *pAddonName)
{
  __int64 v6; // rax
  IUGCAddonPathResolver *m_pUGCAddonPathResolver; // r12
  char szAddonPath[272]; // [rsp+0h] [rbp-540h] BYREF
  char sAddonFullPath[1032]; // [rsp+110h] [rbp-430h] BYREF
  unsigned __int64 v11; // [rsp+518h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  v6 = CommandLine(a1, this);
  (*(*v6 + 104LL))(v6, "-addon_path", "", szAddonPath, 260);
  if ( szAddonPath[0] != 0 )
  {
    a1->m_pString = 0;
    CUtlString::Set(a1, szAddonPath);
  }
  else
  {
    m_pUGCAddonPathResolver = this->m_pUGCAddonPathResolver;
    if ( m_pUGCAddonPathResolver != 0 )
    {
      memset(sAddonFullPath, 0, 0x400u);
      (*m_pUGCAddonPathResolver->_vptr_IUGCAddonPathResolver)(m_pUGCAddonPathResolver, pAddonName, sAddonFullPath, 1024);
      a1->m_pString = 0;
      CUtlString::Set(a1, sAddonFullPath);
    }
    else
    {
      a1->m_pString = 0;
      CUtlString::Set(a1, pAddonName);
    }
  }
  return a1;
}


// CTier2AppSystemDict::GetAvailableAddonMaps_  (line 1788, @0x00000000023462a0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<CUtlString>, Element, FileFindHandle_t, GetAddonInfo, GrowMemory, Purge, RemoveAll, SetAllowAddonChanges, ThreadInterlockedDecrement, ThreadInterlockedIncrement, V_ComposeFileName<long unsigned int>, V_StripExtension<long unsigned int>, _V_strstr, operator int, operator++, operator--, operator[], strstr, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~FileFindHandle_t
// calls: CTier2AppSystemDict::MountAddon, KeyValues::LoadFromFile, CTier2AppSystemDict::UnmountAddon, KeyValues::GetString, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Grow, CUtlMemory<char*, int>::Purge, GetModAndAddonPathsFromModOrAddonName, V_UnqualifiedFileName (24 total)
// callers: CTier2Application::GetAvailableAddonMaps
// strings: "addoninfo.txt", "GAMEROOT"
// globals: CTier2AppSystemDict::GetAvailableAddonMaps_(KeyValues *,char const*,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::szAddonsWildcard
void __fastcall CTier2AppSystemDict::GetAvailableAddonMaps_(
        CTier2AppSystemDict *const this,
        KeyValues *pKV,
        const char *pszAddonName,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pResult)
{
  CInterlockedInt *p_m_nAllowAddonChanges; // r13
  IBaseFileSystem *v8; // rsi
  const char *String; // rax
  __int64 v10; // r14
  int v11; // r13d
  CUtlString *v12; // r12
  const char *v13; // rax
  const char *v14; // rsi
  __int64 m_Size; // r12
  int v16; // eax
  __int64 i; // r12
  bool v18; // r13
  const char *v19; // rax
  __int64 v20; // r12
  int v21; // eax
  CUtlString *v22; // r12
  const char *v23; // rax
  __int64 FileExtensionSafe; // rax
  __int64 v25; // r12
  int v26; // eax
  CUtlString *v27; // r12
  const char *v28; // rax
  __int64 v29; // r12
  int v30; // eax
  unsigned __int64 v31; // r13
  CUtlString *v32; // r12
  const char *v33; // rax
  int v34; // eax
  unsigned __int64 v36; // [rsp+30h] [rbp-5E0h]
  const CUtlString *v37; // [rsp+38h] [rbp-5D8h]
  CUtlString v38; // [rsp+40h] [rbp-5D0h] BYREF
  CUtlString v39; // [rsp+50h] [rbp-5C0h] BYREF
  FileFindHandle_t hDirectory; // [rsp+60h] [rbp-5B0h] BYREF
  CUtlVector<char*,CUtlMemory<char*,int> > mapList; // [rsp+70h] [rbp-5A0h] BYREF
  char szMapFileName[272]; // [rsp+90h] [rbp-580h] BYREF
  char pFullPath[272]; // [rsp+1A0h] [rbp-470h] BYREF
  char pModName[272]; // [rsp+2B0h] [rbp-360h] BYREF
  char pMod[272]; // [rsp+3C0h] [rbp-250h] BYREF
  char pAddon[264]; // [rsp+4D0h] [rbp-140h] BYREF
  unsigned __int64 v47; // [rsp+5D8h] [rbp-38h]

  v47 = __readfsqword(0x28u);
  if ( pKV != 0 )
  {
    p_m_nAllowAddonChanges = &this->m_nAllowAddonChanges;
    _InterlockedAdd(&this->m_nAllowAddonChanges.m_value, 1u);
    if ( this->m_nAllowAddonChanges.m_value < 0 )
      goto LABEL_57;
    CTier2AppSystemDict::MountAddon(this, pszAddonName);
    v8 = 0;
    if ( g_pFullFileSystem != 0 )
      v8 = &g_pFullFileSystem->IBaseFileSystem;
    KeyValues::LoadFromFile(pKV, v8, "addoninfo.txt", "GAME", 0);
    CTier2AppSystemDict::UnmountAddon(this, pszAddonName);
    _InterlockedSub(&p_m_nAllowAddonChanges->m_value, 1u);
    if ( this->m_nAllowAddonChanges.m_value < 0 )
LABEL_57:
      CTier2AppSystemDict::SetAllowAddonChanges(this, pKV);
  }
  String = KeyValues::GetString(pKV, "maps", 0, 0, 0);
  mapList.m_Size = 0;
  mapList.m_Memory.m_pMemory = 0;
  mapList.m_Memory.m_nAllocationCount = 0;
  mapList.m_Memory.m_nGrowSize = 0;
  if ( String != 0 )
  {
    V_SplitString(String, " ", &mapList);
    if ( mapList.m_Size > 0 )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        v14 = mapList.m_Memory.m_pMemory[v10];
        hDirectory.m_pFileSystem = 0;
        CUtlString::Set(&hDirectory, v14);
        m_Size = pResult->m_Size;
        v16 = pResult->m_Size;
        if ( m_Size == pResult->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CUtlString,int>::Grow(&pResult->m_Memory, 1);
          v16 = pResult->m_Size;
        }
        pResult->m_Size = v16 + 1;
        v12 = &pResult->m_Memory.m_pMemory[m_Size];
        if ( v12 != 0 )
        {
          v12->m_pString = 0;
          v13 = CUtlString::Get(&hDirectory);
          CUtlString::Set(v12, v13);
        }
        if ( hDirectory.m_pFileSystem != 0 )
          CUtlString::FreeMemoryBlock(&hDirectory);
        ++v11;
        ++v10;
      }
      while ( mapList.m_Size > v11 );
    }
    mapList.m_Size = 0;
    if ( (mapList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char *,int>::Purge(&mapList.m_Memory);
      if ( (mapList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<char *,int>::Purge(&mapList.m_Memory);
    }
  }
  else
  {
    hDirectory.m_pFileSystem = 0;
    hDirectory.m_nFindDataIndex = 0;
    for ( i = (*(g_pFullFileSystem->_vptr_IAppSystem + 41))(
                g_pFullFileSystem,
                CTier2AppSystemDict::GetAvailableAddonMaps_(KeyValues *,char const*,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::szAddonsWildcard,
                "GAME",
                &hDirectory); i != 0; i = (*(g_pFullFileSystem->_vptr_IAppSystem + 38))(g_pFullFileSystem, &hDirectory) )
    {
      FileExtensionSafe = V_GetFileExtensionSafe(i);
      if ( V_stricmp_fast(FileExtensionSafe, "vpk") == 0 )
      {
        _V_ComposeFileName("maps/", i, szMapFileName, 259);
        (*(g_pFullFileSystem->_vptr_IAppSystem + 23))(g_pFullFileSystem, szMapFileName, "GAME", pFullPath, 260, 0, 0);
        if ( SplitFullPath(pFullPath, "GAMEROOT", 0, pModName, 0, 260) )
        {
          GetModAndAddonPathsFromModOrAddonName(pMod, 260, pAddon, 260, pModName);
          v18 = pAddon[0] != 0;
        }
        else
        {
          v18 = 0;
        }
        v19 = V_UnqualifiedFileName(pszAddonName);
        if ( v19 != 0 && !v18 )
          v18 = strstr(pFullPath, v19) != 0;
        _V_StripExtension(i, pAddon, 260);
        if ( v18 )
        {
          v38.m_pString = 0;
          CUtlString::Set(&v38, pAddon);
          v20 = pResult->m_Size;
          v21 = pResult->m_Size;
          if ( v20 == pResult->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CUtlString,int>::Grow(&pResult->m_Memory, 1);
            v21 = pResult->m_Size;
          }
          pResult->m_Size = v21 + 1;
          v22 = &pResult->m_Memory.m_pMemory[v20];
          if ( v22 != 0 )
          {
            v22->m_pString = 0;
            v23 = CUtlString::Get(&v38);
            CUtlString::Set(v22, v23);
          }
          if ( v38.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&v38);
        }
        else
        {
          v39.m_pString = 0;
          CUtlString::Set(&v39, pAddon);
          v25 = mapList.m_Size;
          v26 = mapList.m_Size;
          if ( mapList.m_Size == mapList.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CUtlString,int>::Grow(&mapList.m_Memory, 1);
            v26 = mapList.m_Size;
          }
          mapList.m_Size = v26 + 1;
          v27 = &mapList.m_Memory.m_pMemory[v25];
          if ( v27 != 0 )
          {
            v27->m_pString = 0;
            v28 = CUtlString::Get(&v39);
            CUtlString::Set(v27, v28);
          }
          if ( v39.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&v39);
        }
      }
    }
    v29 = pResult->m_Size;
    if ( v29 == 0 )
    {
      v30 = mapList.m_Size - 1;
      if ( mapList.m_Size - 1 >= 0 )
      {
        v31 = 8LL * v30;
        v36 = 8 * (v30 - v30);
        while ( 1 )
        {
          v37 = &mapList.m_Memory.m_pMemory[v31 / 8];
          v34 = v29;
          if ( v29 == pResult->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CUtlString,int>::Grow(&pResult->m_Memory, 1);
            v34 = pResult->m_Size;
          }
          pResult->m_Size = v34 + 1;
          v32 = &pResult->m_Memory.m_pMemory[v29];
          if ( v32 != 0 )
          {
            v32->m_pString = 0;
            v33 = CUtlString::Get(v37);
            CUtlString::Set(v32, v33);
          }
          if ( v31 == v36 )
            break;
          v29 = pResult->m_Size;
          v31 -= 8LL;
        }
      }
    }
    (*(g_pFullFileSystem->_vptr_IAppSystem + 40))(g_pFullFileSystem, &hDirectory);
    if ( hDirectory.m_pFileSystem != 0 )
      (*(hDirectory.m_pFileSystem->_vptr_IAppSystem + 40))(hDirectory.m_pFileSystem, &hDirectory);
    hDirectory.m_pFileSystem = 0;
    hDirectory.m_nFindDataIndex = 0;
    CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::RemoveAll(&mapList);
    if ( (mapList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CUtlString,int>::Purge(&mapList.m_Memory);
      if ( (mapList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlString,int>::Purge(&mapList.m_Memory);
    }
  }
}


