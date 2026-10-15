
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_nav_place.cpp  (line 0, @0x0000000001a6dd00, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_nav_place_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CNavPlaceDatabase::CNavPlaceDatabase  (line 45, @0x00000000031ff060, libserver.so)
// calls: CNavPlaceDatabase::LoadPlaceDatabase
// callers: CNavMesh::CNavMesh
void __fastcall CNavPlaceDatabase::CNavPlaceDatabase(CNavPlaceDatabase *const this)
{
  CNavPlaceDatabase::LoadPlaceDatabase(this, 1);
}


// CNavPlaceDatabase::~CNavPlaceDatabase  (line 53, @0x00000000031fe5b0, libserver.so)
// calls: operator delete []
// callers: CNavMesh::~CNavMesh, CNavMesh::CNavMesh
void __fastcall CNavPlaceDatabase::~CNavPlaceDatabase(CNavPlaceDatabase *const this)
{
  uint32 i; // ebx
  char *v3; // rdi

  for ( i = 0; this->m_nPlaceCount > i; ++i )
  {
    v3 = this->m_ppPlaceName[i];
    if ( v3 != 0 )
      operator delete[](v3);
  }
}


// CNavPlaceDatabase::LoadPlaceDatabase  (line 64, @0x00000000031feac0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CloneString_navlib, CopyConstruct<char*>, Element, FStrEq_navlib, GrowMemory, Purge, RemoveAll, V_strlen, V_strncpy<int>, _V_strcmp, operator[], strcpy, ~CUtlBuffer, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlBuffer::CUtlBuffer, CUtlBuffer::GetLine, operator new [], _V_strncpy, KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetName, strlen, strcpy (20 total)
// callers: CNavPlaceDatabase::CNavPlaceDatabase
// strings: "NavPlace.db", "population", "scripts/population.txt", "default"
void __fastcall CNavPlaceDatabase::LoadPlaceDatabase(CNavPlaceDatabase *const this, bool bLoadFromScriptsDir)
{
  int v2; // edx
  int v3; // r15d
  __int64 v4; // rax
  char v5; // dl
  int v6; // r15d
  __int64 m_Size; // r15
  int v8; // eax
  char **v9; // rax
  IBaseFileSystem *v10; // rsi
  KeyValues *i; // rbx
  char **v12; // rax
  char *Name; // rax
  const char *v14; // rax
  const char *v15; // r14
  size_t v16; // rdi
  char *v17; // r15
  __int64 v18; // r14
  int v19; // eax
  char **m_ppPlaceName; // rax
  uint32 m_nPlaceCount; // r9d
  uint32 v22; // edx
  char *v23; // rsi
  __int64 v24; // rcx
  size_t v25; // rdi
  char **v26; // rax
  uint32 v27; // r11d
  uint32 v28; // edx
  char *v29; // rsi
  __int64 v30; // rcx
  char *pName; // [rsp+10h] [rbp-140h]
  KeyValues *pNamea; // [rsp+10h] [rbp-140h]
  CUtlVector<char*,CUtlMemory<char*,int> > vecPlaceNames; // [rsp+20h] [rbp-130h] BYREF
  CUtlVector<char*,CUtlMemory<char*,int> > placeNames; // [rsp+40h] [rbp-110h] BYREF
  char v36; // [rsp+58h] [rbp-F8h]
  int v37; // [rsp+60h] [rbp-F0h]
  char buffer[136]; // [rsp+90h] [rbp-C0h] BYREF
  unsigned __int64 v39; // [rsp+118h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  this->m_nPlaceCount = 0;
  if ( !bLoadFromScriptsDir )
  {
LABEL_2:
    CUtlBuffer::CUtlBuffer(&placeNames, 0, 0, 1);
    (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 14))(
      &g_pFullFileSystem->IBaseFileSystem,
      "NavPlace.db",
      "GAME",
      &placeNames,
      0,
      0,
      0);
    if ( v37 != 0 )
    {
      vecPlaceNames.m_Size = 0;
      vecPlaceNames.m_Memory.m_pMemory = 0;
      vecPlaceNames.m_Memory.m_nAllocationCount = 0;
      vecPlaceNames.m_Memory.m_nGrowSize = 0;
      while ( 1 )
      {
        CUtlBuffer::GetLine(&placeNames, buffer, 128);
        if ( v36 != 0 )
          break;
        v2 = strlen(buffer);
        v3 = v2;
        if ( v2 > 1 )
        {
          v4 = v2 - 1;
          v5 = buffer[v4];
          if ( v5 == 13 || v5 == 10 )
            buffer[v4] = 0;
          if ( buffer[v3 - 2] == 13 )
            buffer[v3 - 2] = 0;
          v6 = v3 + 1;
          pName = operator new[](v6);
          _V_strncpy(pName, buffer, v6);
          m_Size = vecPlaceNames.m_Size;
          v8 = vecPlaceNames.m_Size;
          if ( vecPlaceNames.m_Size == vecPlaceNames.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<char *,int>::Grow(&vecPlaceNames.m_Memory, 1);
            v8 = vecPlaceNames.m_Size;
          }
          vecPlaceNames.m_Size = v8 + 1;
          v9 = &vecPlaceNames.m_Memory.m_pMemory[m_Size];
          if ( v9 != 0 )
            *v9 = pName;
        }
      }
      this->m_nPlaceCount = vecPlaceNames.m_Size;
      m_ppPlaceName = operator new[](8LL * vecPlaceNames.m_Size);
      m_nPlaceCount = this->m_nPlaceCount;
      v22 = 0;
      this->m_ppPlaceName = m_ppPlaceName;
      if ( m_nPlaceCount != 0 )
      {
        while ( 1 )
        {
          v23 = vecPlaceNames.m_Memory.m_pMemory[v22];
          v24 = v22++;
          m_ppPlaceName[v24] = v23;
          if ( this->m_nPlaceCount <= v22 )
            break;
          m_ppPlaceName = this->m_ppPlaceName;
        }
      }
      if ( (vecPlaceNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<char *,int>::Purge(&vecPlaceNames.m_Memory);
        if ( (vecPlaceNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<char *,int>::Purge(&vecPlaceNames.m_Memory);
      }
      CUtlMemory<unsigned char,int>::Purge(&placeNames);
    }
    else
    {
      CUtlMemory<unsigned char,int>::Purge(&placeNames);
    }
    return;
  }
  pNamea = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(pNamea, "population");
  v10 = 0;
  if ( g_pFullFileSystem != 0 )
    v10 = &g_pFullFileSystem->IBaseFileSystem;
  if ( !KeyValues::LoadFromFile(pNamea, v10, "scripts/population.txt", 0, 0) )
  {
    KeyValues::deleteThis(pNamea);
    goto LABEL_2;
  }
  placeNames.m_Size = 0;
  placeNames.m_Memory.m_pMemory = 0;
  placeNames.m_Memory.m_nAllocationCount = 0;
  placeNames.m_Memory.m_nGrowSize = 0;
  for ( i = KeyValues::GetFirstTrueSubKey(pNamea); i != 0; i = KeyValues::GetNextTrueSubKey(i) )
  {
    Name = KeyValues::GetName(i);
    if ( Name != "default" && strcmp(Name, "default") != 0 )
    {
      v14 = KeyValues::GetName(i);
      v15 = v14;
      if ( v14 != 0 )
        v16 = (strlen(v14) + 1);
      else
        v16 = 1;
      v17 = operator new[](v16);
      strcpy(v17, v15);
      v18 = placeNames.m_Size;
      v19 = placeNames.m_Size;
      if ( placeNames.m_Size == placeNames.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<char *,int>::Grow(&placeNames.m_Memory, 1);
        v19 = placeNames.m_Size;
      }
      placeNames.m_Size = v19 + 1;
      v12 = &placeNames.m_Memory.m_pMemory[v18];
      if ( v12 != 0 )
        *v12 = v17;
    }
  }
  v25 = 8LL * placeNames.m_Size;
  this->m_nPlaceCount = placeNames.m_Size;
  v26 = operator new[](v25);
  v27 = this->m_nPlaceCount;
  v28 = 0;
  this->m_ppPlaceName = v26;
  if ( v27 != 0 )
  {
    while ( 1 )
    {
      v29 = placeNames.m_Memory.m_pMemory[v28];
      v30 = v28++;
      v26[v30] = v29;
      if ( this->m_nPlaceCount <= v28 )
        break;
      v26 = this->m_ppPlaceName;
    }
  }
  KeyValues::deleteThis(pNamea);
  placeNames.m_Size = 0;
  if ( (placeNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&placeNames.m_Memory);
    if ( (placeNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&placeNames.m_Memory);
  }
}


// CNavPlaceDatabase::PlaceToName  (line 151, @0x00000000031fe5f0, libserver.so)
// callers: CommandNavUsePlace, CNavAreaExtended::GetNavDataProperties, CNavAreaExtended::SaveToSelectedSet
const char *__fastcall CNavPlaceDatabase::PlaceToName(const CNavPlaceDatabase *const this, Place place)
{
  if ( place != 0 && place <= this->m_nPlaceCount )
    return this->m_ppPlaceName[place - 1];
  else
    return 0;
}


// CNavPlaceDatabase::NameToPlace  (line 162, @0x00000000031fe620, libserver.so)  // inlines: FStrEq_navlib, _V_strcmp
// calls: strcmp
// callers: CNavAreaExtended::SetNavDataProperty, CNavAreaExtended::RestoreFromSelectedSet, CNavPlaceDatabase::PartialNameToPlace, CNavPlaceDatabase::PrintAllPlaces, CNavPlaceDirectory::Load
Place __fastcall CNavPlaceDatabase::NameToPlace(const CNavPlaceDatabase *const this, const char *pName)
{
  uint32 m_nPlaceCount; // r14d
  char **m_ppPlaceName; // r12
  char *v5; // rdi
  char **v6; // r12
  int v7; // ebx

  m_nPlaceCount = this->m_nPlaceCount;
  if ( m_nPlaceCount == 0 )
    return 0;
  m_ppPlaceName = this->m_ppPlaceName;
  v5 = *this->m_ppPlaceName;
  if ( v5 == pName )
    return 1;
  v6 = m_ppPlaceName + 1;
  v7 = 0;
  do
  {
    if ( strcmp(v5, pName) == 0 )
      break;
    if ( ++v7 == m_nPlaceCount )
      return 0;
    v5 = *v6++;
  }
  while ( v5 != pName );
  return v7 + 1;
}


// CNavPlaceDatabase::PartialNameToPlace  (line 176, @0x00000000031fe6a0, libserver.so)  // inlines: V_strlen, V_strnicmp_fast<int>
// calls: strlen, _V_strnicmp_fast, V_stricmp_fast, CNavPlaceDatabase::NameToPlace
// callers: CommandNavUsePlace
Place __fastcall CNavPlaceDatabase::PartialNameToPlace(const CNavPlaceDatabase *const this, const char *pName)
{
  uint32 v4; // ebx
  __int64 v5; // rdx
  Place result; // eax
  bool bIsAmbiguous; // [rsp+Bh] [rbp-35h]
  Place found; // [rsp+Ch] [rbp-34h]

  if ( this->m_nPlaceCount != 0 )
  {
    v4 = 0;
    bIsAmbiguous = 0;
    found = 0;
    while ( 1 )
    {
      if ( pName != 0 )
        v5 = strlen(pName);
      else
        v5 = 0;
      if ( _V_strnicmp_fast(this->m_ppPlaceName[v4], pName, v5) != 0 )
        goto LABEL_3;
      if ( V_stricmp_fast(this->m_ppPlaceName[v4], pName) == 0 )
        return CNavPlaceDatabase::NameToPlace(this, this->m_ppPlaceName[v4]);
      if ( found != 0 )
      {
        ++v4;
        bIsAmbiguous = 1;
        if ( this->m_nPlaceCount <= v4 )
        {
LABEL_10:
          result = 0;
          if ( !bIsAmbiguous )
            return found;
          return result;
        }
      }
      else
      {
        found = CNavPlaceDatabase::NameToPlace(this, this->m_ppPlaceName[v4]);
LABEL_3:
        if ( this->m_nPlaceCount <= ++v4 )
          goto LABEL_10;
      }
    }
  }
  return 0;
}


// CNavPlaceDatabase::PlaceNameAutocomplete  (line 213, @0x00000000031ff070, libserver.so)  // inlines: AddToTail, CUtlString, Construct<CUtlString>, Element, GrowMemory, V_strlen, V_strnicmp_fast<int>, operator[]
// calls: strlen, _V_strnicmp_fast, CUtlString::Format, CUtlMemory<CUtlString, int>::Grow
// callers: PlaceNameAutocompleteCallback
// strings: "nav_use_place %s"
int __fastcall CNavPlaceDatabase::PlaceNameAutocomplete(
        const CNavPlaceDatabase *const this,
        const char *partial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  bool v5; // zf
  const char *v6; // rsi
  const char *v7; // r13
  uint32 i; // ebx
  const char *v9; // rdx
  __int64 m_Size; // rax
  int v11; // esi
  __int64 v12; // rdi
  CUtlString *v13; // rax
  CUtlString *v14; // rdi
  char *v16; // [rsp+8h] [rbp-48h]
  int v17; // [rsp+18h] [rbp-38h]
  unsigned int v18; // [rsp+1Ch] [rbp-34h]

  v5 = partial + 14 == 0;
  v6 = partial + 14;
  v7 = v6;
  if ( v5 )
    v18 = 0;
  else
    v18 = strlen(v6);
  for ( i = 0; this->m_nPlaceCount > i; ++i )
  {
    while ( _V_strnicmp_fast(this->m_ppPlaceName[i], v7, v18) != 0 )
    {
      if ( this->m_nPlaceCount <= ++i )
        return commands->m_Size;
    }
    v9 = this->m_ppPlaceName[i];
    m_Size = commands->m_Size;
    v11 = commands->m_Size;
    if ( m_Size == commands->m_Memory.m_nAllocationCount )
    {
      v17 = commands->m_Size;
      v16 = this->m_ppPlaceName[i];
      CUtlMemory<CUtlString,int>::Grow(&commands->m_Memory, 1);
      v11 = commands->m_Size;
      m_Size = v17;
      v9 = v16;
    }
    v12 = m_Size;
    commands->m_Size = v11 + 1;
    v13 = &commands->m_Memory.m_pMemory[m_Size];
    if ( v13 != 0 )
    {
      v13->m_pString = 0;
      v14 = &commands->m_Memory.m_pMemory[v12];
    }
    else
    {
      v14 = 0;
    }
    CUtlString::Format(v14, "nav_use_place %s", v9);
  }
  return commands->m_Size;
}


// StringSort  (line 233, @0x00000000031fe520, libserver.so)
// calls: strcmp
// callers: CNavPlaceDatabase::PrintAllPlaces
int __fastcall StringSort(const SortStringType *s1, const SortStringType *s2)
{
  return strcmp(*s1, *s2);
}


// CNavPlaceDatabase::PrintAllPlaces  (line 240, @0x00000000031ff180, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char const*>, Element, GrowMemory, Purge, RemoveAll, Sort, V_swap<char const*>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<char const*, int>::Grow, V_qsort, CNavPlaceDatabase::NameToPlace, Msg, StringSort, CUtlMemory<char const*, int>::Purge, _Unwind_Resume
// callers: CommandNavUsePlace
// strings: "%-30s", "--> %-26s", "There are no entries in the Place database.\n"
// globals: StringSort(char const* const*,char const* const*)
void __fastcall CNavPlaceDatabase::PrintAllPlaces(const CNavPlaceDatabase *const this, Place editPlace)
{
  int m_nAllocationCount; // edx
  __int64 v5; // r13
  int v6; // r12d
  int v7; // eax
  const char **v8; // rdx
  char *v9; // r15
  int m_Size; // eax
  __int64 v11; // r15
  int v12; // r12d
  const char *v13; // r13
  int v14; // r15d
  CUtlMemory<char const*,int> *v15; // r12
  CUtlMemory<char const*,int> *p_m_nAllocationCount; // r15
  SortStringType *v17; // r13
  SortStringType *v18; // r12
  SortStringType v19; // rax
  int v20; // [rsp+4h] [rbp-5Ch]
  CUtlMemory<char const*,int> *v21; // [rsp+8h] [rbp-58h]
  CUtlVector<char const*,CUtlMemory<char const*,int> > placeNames; // [rsp+10h] [rbp-50h] BYREF

  if ( this->m_nPlaceCount == 0 )
  {
    Msg("There are no entries in the Place database.\n", editPlace);
    return;
  }
  placeNames.m_Size = 0;
  placeNames.m_Memory.m_pMemory = 0;
  m_nAllocationCount = 0;
  v5 = 0;
  placeNames.m_Memory.m_nAllocationCount = 0;
  v6 = 0;
  placeNames.m_Memory.m_nGrowSize = 0;
  while ( 1 )
  {
    v9 = this->m_ppPlaceName[v6];
    m_Size = v5;
    if ( m_nAllocationCount == v5 )
    {
      CUtlMemory<char const*,int>::Grow(&placeNames.m_Memory, 1);
      m_Size = placeNames.m_Size;
    }
    v7 = m_Size + 1;
    placeNames.m_Size = v7;
    v8 = &placeNames.m_Memory.m_pMemory[v5];
    if ( v8 != 0 )
      *v8 = v9;
    if ( this->m_nPlaceCount <= ++v6 )
      break;
    m_nAllocationCount = placeNames.m_Memory.m_nAllocationCount;
    v5 = v7;
  }
  if ( v7 <= 1 )
    goto LABEL_13;
  if ( placeNames.m_Memory.m_pMemory != 0 )
  {
    V_qsort(placeNames.m_Memory.m_pMemory, v7, 8, StringSort);
    goto LABEL_12;
  }
  v14 = v7 - 1;
  while ( 2 )
  {
    v15 = 0;
    v20 = v14 - 1;
    v21 = (8LL * (v14 - 1) + 8);
    while ( 1 )
    {
      p_m_nAllocationCount = &v15->m_nAllocationCount;
      v17 = (placeNames.m_Memory.m_pMemory + &v15->m_nAllocationCount);
      v18 = (placeNames.m_Memory.m_pMemory + v15);
      if ( StringSort(v18, v17) < 0 )
        break;
      if ( p_m_nAllocationCount == v21 )
        goto LABEL_30;
LABEL_27:
      v15 = p_m_nAllocationCount;
    }
    v19 = *v18;
    *v18 = *v17;
    *v17 = v19;
    if ( p_m_nAllocationCount != v21 )
      goto LABEL_27;
LABEL_30:
    v14 = v20;
    if ( v20 != -1 )
    {
      while ( v14 <= 0 )
      {
        if ( --v14 == -1 )
          goto LABEL_12;
      }
      continue;
    }
    break;
  }
LABEL_12:
  v7 = placeNames.m_Size;
LABEL_13:
  v11 = 0;
  v12 = 0;
  while ( v12 < v7 )
  {
    v13 = placeNames.m_Memory.m_pMemory[v11];
    if ( CNavPlaceDatabase::NameToPlace(this, v13) == editPlace )
      Msg("--> %-26s", v13);
    else
      Msg("%-30s", v13);
    ++v12;
    if ( v12 == 3 * (v12 / 3) )
      Msg("\n");
    v7 = placeNames.m_Size;
    ++v11;
  }
  Msg("\n");
  if ( (placeNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char const*,int>::Purge(&placeNames.m_Memory);
    if ( (placeNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char const*,int>::Purge(&placeNames.m_Memory);
  }
}


// CNavPlaceDirectory::Reset  (line 277, @0x00000000031fe7c0, libserver.so)  // inlines: RemoveAll
// callers: CNavPrecacheInfo::Reset, CNavGameSystem::PrecacheNavForSpawnGroup, CNavMesh::SaveNavMeshToBuffer, CNavMesh::LoadNavMesh
void __fastcall CNavPlaceDirectory::Reset(CNavPlaceDirectory *const this)
{
  this->m_Directory.m_Size = 0;
  this->m_bHasUnnamedAreas = 0;
}


// CNavPlaceDirectory::IsKnown  (line 285, @0x00000000031fea70, libserver.so)  // inlines: HasElement
// calls: CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Find
bool __fastcall CNavPlaceDirectory::IsKnown(const CNavPlaceDirectory *const this, Place place)
{
  Place placea; // [rsp+Ch] [rbp-4h] BYREF

  placea = place;
  return CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::Find(&this->m_Directory, &placea) >= 0;
}


// CNavPlaceDirectory::GetIndex  (line 293, @0x00000000031fea90, libserver.so)
// calls: CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Find
// callers: CNavAreaExtended::Save
CNavPlaceDirectory::IndexType __fastcall CNavPlaceDirectory::GetIndex(
        const CNavPlaceDirectory *const this,
        Place place)
{
  CNavPlaceDirectory::IndexType v2; // bx
  int v3; // eax
  Place placea[5]; // [rsp+Ch] [rbp-14h] BYREF

  v2 = 0;
  placea[0] = place;
  if ( place != 0 )
  {
    v3 = CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::Find(&this->m_Directory, placea);
    if ( v3 >= 0 )
      return v3 + 1;
  }
  return v2;
}


// CNavPlaceDirectory::AddPlace  (line 313, @0x00000000031ff440, libserver.so)  // inlines: AddToTail, CopyConstruct<unsigned int>, Element, GrowMemory, HasElement, IsKnown, operator[]
// calls: CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Find, CUtlMemory<unsigned int, int>::Grow
// callers: CNavMesh::SaveNavMeshToBuffer, CNavPlaceDirectory::Load
void __fastcall CNavPlaceDirectory::AddPlace(CNavPlaceDirectory *const this, Place place)
{
  __int64 m_Size; // r13
  int v5; // eax
  unsigned int *v6; // rax
  unsigned int src[9]; // [rsp+Ch] [rbp-24h] BYREF

  if ( place != 0 )
  {
    src[0] = place;
    if ( CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::Find(&this->m_Directory, src) < 0 )
    {
      m_Size = this->m_Directory.m_Size;
      v5 = this->m_Directory.m_Size;
      if ( m_Size == this->m_Directory.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<unsigned int,int>::Grow(&this->m_Directory.m_Memory, 1);
        v5 = this->m_Directory.m_Size;
      }
      this->m_Directory.m_Size = v5 + 1;
      v6 = &this->m_Directory.m_Memory.m_pMemory[m_Size];
      if ( v6 != 0 )
        *v6 = place;
    }
  }
  else
  {
    this->m_bHasUnnamedAreas = 1;
  }
}


// CNavPlaceDirectory::IndexToPlace  (line 333, @0x00000000031fe7d0, libserver.so)  // inlines: operator[]
// callers: CNavAreaExtended::Load, CNavArea::LoadCore
Place __fastcall CNavPlaceDirectory::IndexToPlace(
        const CNavPlaceDirectory *const this,
        CNavPlaceDirectory::IndexType entry)
{
  Place result; // eax
  int v3; // esi

  result = 0;
  if ( entry != 0 )
  {
    v3 = entry - 1;
    if ( v3 < this->m_Directory.m_Size )
      return this->m_Directory.m_Memory.m_pMemory[v3];
  }
  return result;
}


// CNavPlaceDirectory::Save  (line 353, @0x00000000031fe800, libserver.so)  // inlines: LowLevelByteSwap<short unsigned int>, PeekPut, PlaceToName, PutType<short unsigned int>, PutTypeBin<short unsigned int>, PutTypeBin<unsigned char>, PutUnsignedChar, PutUnsignedShort, SwapBufferToTargetEndian<short unsigned int>, V_memcpy, V_strlen, memcpy, operator[]
// calls: CUtlBuffer::Printf, strlen, CUtlBuffer::Put, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CNavMesh::SaveNavMeshToBuffer
// strings: "%hu"
void __fastcall CNavPlaceDirectory::Save(
        CNavPlaceDirectory *const this,
        const CNavPlaceDatabase *const rDatabase,
        CUtlBuffer *const rFileBuffer)
{
  __int16 m_Size; // r12
  __int64 v6; // r13
  int i; // r12d
  char *v8; // r14
  unsigned __int16 v9; // dx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rax
  bool v13; // al
  int v14; // eax
  unsigned __int8 *v15; // rdx
  bool m_bHasUnnamedAreas; // r12
  int m_Put; // eax
  unsigned __int8 *v18; // rdx
  unsigned __int16 v20; // [rsp+8h] [rbp-48h]
  int sizea; // [rsp+Ch] [rbp-44h]
  int size; // [rsp+Ch] [rbp-44h]
  unsigned __int16 v23; // [rsp+1Ch] [rbp-34h]
  __int16 v24; // [rsp+1Eh] [rbp-32h]
  __int16 v25; // [rsp+1Eh] [rbp-32h]

  m_Size = this->m_Directory.m_Size;
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(rFileBuffer, "%hu", LOWORD(this->m_Directory.m_Size));
  }
  else if ( CUtlBuffer::CheckPut(rFileBuffer, 2) )
  {
    if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
    {
      m_Put = rFileBuffer->m_Put;
      v18 = &rFileBuffer->m_Memory.m_pMemory[m_Put - rFileBuffer->m_nOffset];
      if ( v18 != 0 )
      {
        LOBYTE(v25) = HIBYTE(m_Size);
        HIBYTE(v25) = m_Size;
        *v18 = v25;
        m_Put = rFileBuffer->m_Put;
      }
    }
    else
    {
      *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = m_Size;
      m_Put = rFileBuffer->m_Put;
    }
    rFileBuffer->m_Put = m_Put + 2;
    CUtlBuffer::AddNullTermination(rFileBuffer);
  }
  v6 = 0;
  for ( i = 0; this->m_Directory.m_Size > i; ++v6 )
  {
    v12 = this->m_Directory.m_Memory.m_pMemory[v6];
    if ( v12 != 0 && v12 <= rDatabase->m_nPlaceCount )
    {
      v8 = rDatabase->m_ppPlaceName[v12 - 1];
      if ( v8 != 0 )
      {
        v9 = strlen(rDatabase->m_ppPlaceName[v12 - 1]) + 1;
        v10 = v9;
      }
      else
      {
        v10 = 1;
        v9 = 1;
      }
      if ( (rFileBuffer->m_Flags & 1) == 0 )
      {
LABEL_13:
        size = v10;
        v23 = v9;
        v20 = v9;
        v13 = CUtlBuffer::CheckPut(rFileBuffer, 2);
        v11 = size;
        if ( v13 )
        {
          if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
          {
            v14 = rFileBuffer->m_Put;
            v15 = &rFileBuffer->m_Memory.m_pMemory[v14 - rFileBuffer->m_nOffset];
            if ( v15 != 0 )
            {
              LOBYTE(v24) = HIBYTE(v23);
              HIBYTE(v24) = v23;
              *v15 = v24;
              v14 = rFileBuffer->m_Put;
            }
          }
          else
          {
            *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = v20;
            v14 = rFileBuffer->m_Put;
          }
          rFileBuffer->m_Put = v14 + 2;
          CUtlBuffer::AddNullTermination(rFileBuffer);
          v11 = size;
        }
        goto LABEL_10;
      }
    }
    else
    {
      v8 = 0;
      v10 = 1;
      v9 = 1;
      if ( (rFileBuffer->m_Flags & 1) == 0 )
        goto LABEL_13;
    }
    sizea = v10;
    CUtlBuffer::Printf(rFileBuffer, "%hu", v10);
    v11 = sizea;
LABEL_10:
    CUtlBuffer::Put(rFileBuffer, v8, v11);
    ++i;
  }
  m_bHasUnnamedAreas = this->m_bHasUnnamedAreas;
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(rFileBuffer, "%hu", m_bHasUnnamedAreas);
  }
  else if ( CUtlBuffer::CheckPut(rFileBuffer, 1) )
  {
    rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = m_bHasUnnamedAreas;
    ++rFileBuffer->m_Put;
    CUtlBuffer::AddNullTermination(rFileBuffer);
  }
}


// CNavPlaceDirectory::Load  (line 375, @0x00000000031ff4c0, libserver.so)  // inlines: GetType<short unsigned int>, GetTypeBin<short unsigned int>, GetTypeBin<unsigned char>, GetTypeText<short unsigned int>, GetUnsignedChar, GetUnsignedShort, LowLevelByteSwap<short unsigned int>, PeekGet, RemoveAll, StringToNumber<short unsigned int>, SwapBufferToTargetEndian<short unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::Get, CNavPlaceDatabase::NameToPlace, CNavPlaceDirectory::AddPlace, CUtlBuffer::CheckGet, Warning, V_strtoui64, __stack_chk_fail
// callers: CNavMesh::LoadNavMesh
// strings: "Warning: NavMesh place %s is undefined?\n"
void __fastcall CNavPlaceDirectory::Load(
        CNavPlaceDirectory *const this,
        const CNavPlaceDatabase *const rDatabase,
        CUtlBuffer *const rFileBuffer,
        int nVersion)
{
  int v6; // r15d
  int v7; // r12d
  bool v8; // al
  CNavPlaceDirectory::IndexType v9; // cx
  int v10; // edx
  Place v11; // edx
  bool v12; // al
  int v13; // eax
  int v14; // edx
  CNavPlaceDirectory::IndexType *v15; // rdx
  int v16; // r12d
  CNavPlaceDirectory::IndexType v17; // ax
  bool v18; // al
  int m_Get; // eax
  int v20; // r12d
  char v21; // al
  int v22; // edx
  int v23; // eax
  CNavPlaceDirectory::IndexType *p_count; // rdx
  int place; // [rsp+18h] [rbp-168h]
  CNavPlaceDirectory::IndexType count; // [rsp+32h] [rbp-14Eh] BYREF
  int nIncrement; // [rsp+34h] [rbp-14Ch] BYREF
  unsigned __int8 *v30; // [rsp+38h] [rbp-148h] BYREF
  char placeName[264]; // [rsp+40h] [rbp-140h] BYREF
  unsigned __int64 v32; // [rsp+148h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    v6 = 0;
    nIncrement = 128;
    if ( CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement) )
    {
      v30 = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
      v16 = v30;
      v17 = V_strtoui64(v30, &v30, 10);
      count = v17;
      if ( v30 != v16 )
        rFileBuffer->m_Get += v30 - v16;
      v6 = v17;
    }
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(rFileBuffer, 2) )
    {
      this->m_Directory.m_Size = 0;
      goto LABEL_21;
    }
    if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
    {
      m_Get = rFileBuffer->m_Get;
      p_count = &rFileBuffer->m_Memory.m_pMemory[m_Get - rFileBuffer->m_nOffset];
      if ( p_count == 0 )
        p_count = &count;
      LOWORD(v30) = count;
      LOBYTE(v30) = *(p_count + 1);
      BYTE1(v30) = *p_count;
      v6 = v30;
    }
    else
    {
      m_Get = rFileBuffer->m_Get;
      v6 = *&rFileBuffer->m_Memory.m_pMemory[m_Get - rFileBuffer->m_nOffset];
    }
    rFileBuffer->m_Get = m_Get + 2;
  }
  this->m_Directory.m_Size = 0;
  if ( v6 != 0 )
  {
    v7 = 0;
    while ( (rFileBuffer->m_Flags & 1) != 0 )
    {
      nIncrement = 128;
      v8 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
      v9 = 0;
      if ( v8 )
      {
        v30 = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
        place = v30;
        count = V_strtoui64(v30, &v30, 10);
        v9 = count;
        if ( v30 != place )
          rFileBuffer->m_Get += v30 - place;
LABEL_15:
        v10 = 256;
        if ( v9 > 0x100u )
          goto LABEL_7;
      }
      v10 = v9;
LABEL_7:
      CUtlBuffer::Get(rFileBuffer, placeName, v10);
      v11 = CNavPlaceDatabase::NameToPlace(rDatabase, placeName);
      if ( v11 == 0 )
      {
        Warning("Warning: NavMesh place %s is undefined?\n", placeName);
        v11 = 0;
      }
      ++v7;
      CNavPlaceDirectory::AddPlace(this, v11);
      if ( v7 == v6 )
        goto LABEL_21;
    }
    v12 = CUtlBuffer::CheckGet(rFileBuffer, 2);
    v10 = 0;
    if ( !v12 )
      goto LABEL_7;
    if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
    {
      v13 = rFileBuffer->m_Get;
      v14 = v13 - rFileBuffer->m_nOffset;
      LOWORD(v30) = count;
      v15 = &rFileBuffer->m_Memory.m_pMemory[v14];
      if ( v15 == 0 )
        v15 = &count;
      LOBYTE(v30) = *(v15 + 1);
      BYTE1(v30) = *v15;
      v9 = v30;
    }
    else
    {
      v13 = rFileBuffer->m_Get;
      v9 = *&rFileBuffer->m_Memory.m_pMemory[v13 - rFileBuffer->m_nOffset];
    }
    rFileBuffer->m_Get = v13 + 2;
    goto LABEL_15;
  }
LABEL_21:
  if ( nVersion > 11 )
  {
    if ( (rFileBuffer->m_Flags & 1) != 0 )
    {
      nIncrement = 128;
      v18 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
      if ( v18 )
      {
        v30 = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
        v20 = v30;
        v21 = V_strtoui64(v30, &v30, 10);
        if ( v30 != v20 )
          rFileBuffer->m_Get += v30 - v20;
        v18 = v21 != 0;
      }
    }
    else
    {
      v18 = CUtlBuffer::CheckGet(rFileBuffer, 1);
      if ( v18 )
      {
        v22 = rFileBuffer->m_Get;
        v23 = v22 + 1;
        LOBYTE(v22) = rFileBuffer->m_Memory.m_pMemory[v22 - rFileBuffer->m_nOffset];
        rFileBuffer->m_Get = v23;
        v18 = v22 != 0;
      }
    }
    this->m_bHasUnnamedAreas = v18;
  }
}


