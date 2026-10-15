// Reconstructed from DWARF by pahole; not original source.

// src/navlib/nav_merge.cpp:19
class BuildSelectedSet {
private:

	int m_areaCount;  // +0x0

	const CNavSelectionSet & m_rSelectionSet;  // +0x10
	BuildSelectedSet(CNavSelectionSet &, KeyValues *);
	bool operator()(CNavArea *);
	int Count();
	void WriteCorner(CNavArea *, KeyValues *, NavCornerType, const char *);
	void WriteConnections(CNavArea *, KeyValues *, NavDirType, const char *);

	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_nav_merge.cpp  (line 0, @0x0000000001a6dad0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_nav_merge_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// BuildSelectedSet::WriteConnections  (line 68, @0x00000000031f1b40, libserver.so)  // inlines: Count, Find, Indices, IsInSet
// calls: KeyValues::FindKey, CFmtStrN<32, false>::CFmtStrN, KeyValues::SetInt, __stack_chk_fail
// callers: CNavMesh::CommandNavSaveSelected
void __fastcall BuildSelectedSet::WriteConnections(
        BuildSelectedSet *const this,
        CNavArea *pArea,
        KeyValues *pAreaKey,
        NavDirType dir,
        const char *dirName)
{
  char v5; // r14
  CNavConnectVector *v8; // r13
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdx
  int m_Size; // r12d
  int v11; // r14d
  CNavArea *m_pArea; // r15
  CNavSelectionSet *m_rSelectionSet; // rax
  int v14; // edx
  CNavArea **m_pMemory; // rax
  _QWORD *v16; // rax
  int v17; // ecx
  int v18; // edx
  KeyValues *pDirKey; // [rsp+18h] [rbp-78h]
  CFmtStrN<32,false> name; // [rsp+20h] [rbp-70h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-38h]

  v5 = dir;
  v21 = __readfsqword(0x28u);
  pDirKey = KeyValues::FindKey(pAreaKey, dirName, 1);
  if ( pDirKey != 0 )
  {
    v8 = &pArea->m_connect[v5];
    m_pData = v8->m_pData;
    if ( v8->m_pData != 0 )
    {
      m_Size = m_pData->m_Size;
      if ( m_pData->m_Size != 0 )
      {
        v11 = 0;
        while ( 1 )
        {
          m_pArea = m_pData->m_Elements[v11].m_pArea;
          if ( m_pArea == 0 )
            goto LABEL_11;
          m_rSelectionSet = this->m_rSelectionSet;
          v14 = m_rSelectionSet->m_SetAreas.m_Size;
          if ( m_rSelectionSet->m_SetAreas.m_Size <= 0 )
            goto LABEL_11;
          m_pMemory = m_rSelectionSet->m_SetAreas.m_Memory.m_pMemory;
          if ( m_pArea != *m_pMemory )
            break;
LABEL_14:
          v18 = v11++;
          CFmtStrN<32,false>::CFmtStrN(&name, "%d", v18);
          KeyValues::SetInt(pDirKey, name.m_szBuf, m_pArea->m_AreaId);
          if ( v11 == m_Size )
            return;
LABEL_12:
          m_pData = v8->m_pData;
        }
        v16 = m_pMemory + 1;
        v17 = 0;
        while ( ++v17 != v14 )
        {
          if ( m_pArea == *v16++ )
          {
            if ( v17 == -1 )
              break;
            goto LABEL_14;
          }
        }
LABEL_11:
        if ( ++v11 == m_Size )
          return;
        goto LABEL_12;
      }
    }
  }
}


// CNavMesh::CommandNavSaveSelected  (line 92, @0x00000000031f0da0, libserver.so)  // inlines: BuildSelectedSet, Count, Find, ForAllSetAreas<BuildSelectedSet>, GetCorner, GetVert, Indices, IsInSet, WriteConnections, WriteCorner, operator()
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetInt, CFmtStrN<32, false>::CFmtStrN, KeyValues::FindKey, KeyValues::SetFloat, BuildSelectedSet::WriteConnections, V_snprintf, KeyValues::SaveToFile, Msg, KeyValues::deleteThis, __stack_chk_fail (14 total)
// callers: nav_save_selected
// strings: "Selected Nav Areas", "NorthWest", "NorthEast", "SouthWest", "SouthEast", "North" (12 total)
void __fastcall CNavMesh::CommandNavSaveSelected(CNavMesh *const this, const char *pMapName)
{
  int m_Size; // eax
  CNavArea *v4; // r15
  KeyValues *Key; // rax
  KeyValues *v6; // rbx
  KeyValues *v7; // rax
  KeyValues *v8; // r12
  float v9; // xmm1_4
  KeyValues *v10; // rax
  KeyValues *v11; // r12
  float v12; // xmm1_4
  KeyValues *v13; // rax
  KeyValues *v14; // r12
  float v15; // xmm1_4
  KeyValues *v16; // rax
  KeyValues *v17; // r12
  float v18; // xmm1_4
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdx
  int v20; // r12d
  int v21; // r14d
  CNavArea *v22; // r13
  CNavArea *m_pArea; // r15
  CNavArea **m_pMemory; // rax
  CNavArea **v25; // rax
  int v26; // ecx
  int v27; // edx
  int v28; // ebx
  IBaseFileSystem *v29; // rsi
  KeyValues *pData; // [rsp+8h] [rbp-1E8h]
  __int64 v33; // [rsp+30h] [rbp-1C0h]
  vec_t y; // [rsp+3Ch] [rbp-1B4h]
  vec_t v35; // [rsp+3Ch] [rbp-1B4h]
  vec_t v36; // [rsp+3Ch] [rbp-1B4h]
  vec_t v37; // [rsp+3Ch] [rbp-1B4h]
  unsigned __int64 v38; // [rsp+50h] [rbp-1A0h]
  float valuea; // [rsp+58h] [rbp-198h]
  float valueb; // [rsp+58h] [rbp-198h]
  float valuec; // [rsp+58h] [rbp-198h]
  float valued; // [rsp+58h] [rbp-198h]
  KeyValues *value; // [rsp+58h] [rbp-198h]
  BuildSelectedSet setBuilder; // [rsp+60h] [rbp-190h] BYREF
  CFmtStrN<32,false> v45; // [rsp+80h] [rbp-170h] BYREF
  CFmtStrN<32,false> path; // [rsp+B0h] [rbp-140h] BYREF
  unsigned __int64 v47; // [rsp+1B8h] [rbp-38h]

  v47 = __readfsqword(0x28u);
  pData = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(pData, "Selected Nav Areas");
  KeyValues::SetInt(pData, "version", 1);
  setBuilder.m_kv = pData;
  setBuilder.m_areaCount = 0;
  setBuilder.m_rSelectionSet = &this->m_SelectionSet;
  m_Size = this->m_SelectionSet.m_SetAreas.m_Size;
  if ( m_Size == 0 )
    goto LABEL_38;
  v38 = 0;
  v33 = 8LL * (m_Size - 1) + 8;
  do
  {
    v4 = this->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v38 / 8];
    CFmtStrN<32,false>::CFmtStrN(&v45, "%d", v4->m_AreaId);
    Key = KeyValues::FindKey(setBuilder.m_kv, v45.m_szBuf, 1);
    v6 = Key;
    if ( Key != 0 )
    {
      ++setBuilder.m_areaCount;
      v7 = KeyValues::FindKey(Key, "NorthWest", 1);
      v8 = v7;
      if ( v7 != 0 )
      {
        valuea = v4->m_vVerts[0].z;
        y = v4->m_vVerts[0].y;
        KeyValues::SetFloat(v7, "x", LODWORD(v4->m_vVerts[0].x), valuea);
        KeyValues::SetFloat(v8, "y", LODWORD(y), v9);
        KeyValues::SetFloat(v8, "z", LODWORD(valuea), valuea);
      }
      v10 = KeyValues::FindKey(v6, "NorthEast", 1);
      v11 = v10;
      if ( v10 != 0 )
      {
        valueb = v4->m_vVerts[1].z;
        v35 = v4->m_vVerts[1].y;
        KeyValues::SetFloat(v10, "x", LODWORD(v4->m_vVerts[1].x), valueb);
        KeyValues::SetFloat(v11, "y", LODWORD(v35), v12);
        KeyValues::SetFloat(v11, "z", LODWORD(valueb), valueb);
      }
      v13 = KeyValues::FindKey(v6, "SouthWest", 1);
      v14 = v13;
      if ( v13 != 0 )
      {
        valuec = v4->m_vVerts[3].z;
        v36 = v4->m_vVerts[3].y;
        KeyValues::SetFloat(v13, "x", LODWORD(v4->m_vVerts[3].x), valuec);
        KeyValues::SetFloat(v14, "y", LODWORD(v36), v15);
        KeyValues::SetFloat(v14, "z", LODWORD(valuec), valuec);
      }
      v16 = KeyValues::FindKey(v6, "SouthEast", 1);
      v17 = v16;
      if ( v16 != 0 )
      {
        valued = v4->m_vVerts[2].z;
        v37 = v4->m_vVerts[2].y;
        KeyValues::SetFloat(v16, "x", LODWORD(v4->m_vVerts[2].x), valued);
        KeyValues::SetFloat(v17, "y", LODWORD(v37), v18);
        KeyValues::SetFloat(v17, "z", LODWORD(valued), valued);
      }
      BuildSelectedSet::WriteConnections(&setBuilder, v4, v6, NavDirType::NORTH, "North");
      BuildSelectedSet::WriteConnections(&setBuilder, v4, v6, NavDirType::SOUTH, "South");
      BuildSelectedSet::WriteConnections(&setBuilder, v4, v6, NavDirType::EAST, "East");
      value = KeyValues::FindKey(v6, "West", 1);
      if ( value != 0 )
      {
        m_pData = v4->m_connect[3].m_pData;
        if ( m_pData != 0 && m_pData->m_Size != 0 )
        {
          v20 = 0;
          v21 = m_pData->m_Size;
          v22 = v4;
          while ( 2 )
          {
            m_pArea = m_pData->m_Elements[v20].m_pArea;
            if ( m_pArea != 0 && setBuilder.m_rSelectionSet->m_SetAreas.m_Size > 0 )
            {
              m_pMemory = setBuilder.m_rSelectionSet->m_SetAreas.m_Memory.m_pMemory;
              if ( m_pArea != *m_pMemory )
              {
                v25 = m_pMemory + 1;
                v26 = 0;
                while ( ++v26 != setBuilder.m_rSelectionSet->m_SetAreas.m_Size )
                {
                  if ( m_pArea == *v25++ )
                  {
                    if ( v26 == -1 )
                      goto LABEL_22;
                    goto LABEL_25;
                  }
                }
                goto LABEL_22;
              }
LABEL_25:
              v27 = v20++;
              CFmtStrN<32,false>::CFmtStrN(&path, "%d", v27);
              KeyValues::SetInt(value, path.m_szBuf, m_pArea->m_AreaId);
              if ( v20 == v21 )
              {
LABEL_26:
                v4 = v22;
                break;
              }
            }
            else
            {
LABEL_22:
              if ( ++v20 == v21 )
                goto LABEL_26;
            }
            m_pData = v22->m_connect[3].m_pData;
            continue;
          }
        }
      }
      (*(v4->_vptr_CNavPoly + 11))(v4, v6);
    }
    v38 += 8LL;
  }
  while ( v38 != v33 );
  if ( setBuilder.m_areaCount != 0 )
  {
    v28 = 0;
    while ( 1 )
    {
      V_snprintf(&path, 260, "maps/%s_selected_%4.4d.txt", pMapName, v28);
      if ( (*(filesystem->_vptr_IBaseFileSystem + 10))(&filesystem->IBaseFileSystem, &path, 0) == 0 )
        break;
      if ( ++v28 == 1000 )
      {
        Msg("Unable to find a filename to save the selected set to disk.\n");
        KeyValues::deleteThis(pData);
        return;
      }
    }
    v29 = 0;
    if ( filesystem != 0 )
      v29 = &filesystem->IBaseFileSystem;
    if ( !KeyValues::SaveToFile(pData, v29, &path, 0, 0) )
      Msg("Unable to save the selected set to disk.\n");
    Msg(
      "Selected set saved to %s.  Use 'nav_merge_mesh %s_selected_%4.4d' to merge it into another mesh.\n",
      &path,
      pMapName,
      v28);
    KeyValues::deleteThis(pData);
  }
  else
  {
LABEL_38:
    Msg("Not saving empty selected set to disk.\n");
    KeyValues::deleteThis(pData);
  }
}


// ReadCorner  (line 137, @0x00000000031f0d00, libserver.so)
// calls: KeyValues::FindKey, KeyValues::GetFloat
// callers: CNavMesh::CommandNavMergeMesh
Vector __fastcall ReadCorner(KeyValues *pAreaKey, const char *pCornerName)
{
  int v2; // r14d
  int v3; // r15d
  KeyValues *Key; // rax
  KeyValues *v6; // rbx
  __m128i v7; // xmm0
  float v8; // xmm1_4
  __m128i v9; // xmm0
  float v10; // xmm1_4
  float defaultValue; // [rsp+Ch] [rbp-44h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  defaultValue = vec3_origin.z;
  v2 = _mm_cvtsi128_si32(LODWORD(vec3_origin.x));
  v3 = _mm_cvtsi128_si32(LODWORD(vec3_origin.y));
  Key = KeyValues::FindKey(pAreaKey, pCornerName, 0);
  result.z = defaultValue;
  v6 = Key;
  if ( Key != 0 )
  {
    *v7.m128i_i32 = KeyValues::GetFloat(Key, "x", 0.0, defaultValue);
    v2 = _mm_cvtsi128_si32(v7);
    *v9.m128i_i32 = KeyValues::GetFloat(v6, "y", 0.0, v8);
    v3 = _mm_cvtsi128_si32(v9);
    result.z = KeyValues::GetFloat(v6, "z", 0.0, v10);
  }
  *&result.x = __PAIR64__(v3, v2);
  return result;
}


// ReconnectMergedArea  (line 152, @0x00000000031f13b0, libserver.so)  // inlines: Element, Find, operator[]
// calls: KeyValues::GetName, CUtlRBTree<CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find, KeyValues::FindKey, KeyValues::GetFirstValue, KeyValues::GetString, CNavArea::ConnectTo, KeyValues::GetNextValue
// callers: CNavMesh::CommandNavMergeMesh
void __fastcall ReconnectMergedArea(
        CUtlDict<CNavArea*,int> *const newAreas,
        KeyValues *areaKey,
        NavDirType dir,
        const char *dirName)
{
  const char *Name; // rax
  int v8; // eax
  CNavArea *elem; // r13
  KeyValues *Key; // rax
  KeyValues *i; // r14
  const char *String; // rax
  int v13; // eax
  NavEdgeIndex dira; // [rsp+Ch] [rbp-44h]
  CUtlMap<char const*,CNavArea*,int,bool (*)(char const* const&,char const* const&)>::Node_t search; // [rsp+10h] [rbp-40h] BYREF

  dira = dir;
  Name = KeyValues::GetName(areaKey);
  if ( Name != 0 )
  {
    search.key = Name;
    v8 = CUtlRBTree<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
           &newAreas->m_Elements.m_Tree,
           &search);
    if ( v8 != -1 )
    {
      elem = newAreas->m_Elements.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem;
      Key = KeyValues::FindKey(areaKey, dirName, 1);
      if ( Key != 0 )
      {
        for ( i = KeyValues::GetFirstValue(Key); i != 0; i = KeyValues::GetNextValue(i) )
        {
          String = KeyValues::GetString(i, 0, "", 0, 0);
          if ( String != 0 )
          {
            search.key = String;
            v13 = CUtlRBTree<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
                    &newAreas->m_Elements.m_Tree,
                    &search);
            if ( v13 != -1 )
              CNavArea::ConnectTo(elem, newAreas->m_Elements.m_Tree.m_Elements.m_pMemory[v13].m_Data.elem, dira, -1, 1);
          }
        }
      }
    }
  }
}


// CNavMesh::CommandNavMergeMesh  (line 185, @0x00000000031f14b0, libserver.so)  // inlines: AddToTail, CUtlDict, CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, CopyConstruct<CNavArea*>, Element, Find, GrowMemory, Purge, RemoveAll, ResetDbgInfo, SetCompareType, SetLessFunc, V_FileBase<long unsigned int>, operator[], ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: Msg, _V_FileBase, V_snprintf, KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::deleteThis, KeyValues::GetFirstSubKey, CUtlRBTree<CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find, KeyValues::GetNextKey, ReadCorner, CNavPoly::SetCorners (24 total)
// callers: nav_merge_mesh
// strings: "Usage: nav_merge_mesh filename\n", "maps/%s.txt", "Nav Selected Set", "Unable to load %s.\n", "NorthWest", "NorthEast" (10 total)
// globals: FastCaselessStringLessThan(char const* const&,char const* const&)
void __fastcall CNavMesh::CommandNavMergeMesh(
        CNavMesh *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  IBaseFileSystem *v4; // rsi
  KeyValues *FirstSubKey; // rbx
  int (**vptr_CNavMesh)(...); // rax
  CNavArea *v7; // rax
  __int64 m_Size; // r14
  int v9; // eax
  CNavArea **v10; // rax
  const char *Name; // rax
  const char *v12; // rax
  KeyValues *i; // rax
  KeyValues *v14; // rbx
  KeyValues *data; // [rsp+10h] [rbp-240h]
  CNavArea *pNewArea; // [rsp+28h] [rbp-228h] BYREF
  Vector vNorthWest; // [rsp+30h] [rbp-220h] BYREF
  Vector vNorthEast; // [rsp+40h] [rbp-210h] BYREF
  Vector vSouthWest; // [rsp+50h] [rbp-200h] BYREF
  Vector vSouthEast; // [rsp+60h] [rbp-1F0h] BYREF
  CUtlMap<char const*,CNavArea*,int,bool (*)(char const* const&,char const* const&)>::Node_t search; // [rsp+70h] [rbp-1E0h] BYREF
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > areaVector; // [rsp+80h] [rbp-1D0h] BYREF
  CUtlDict<CNavArea*,int> newAreas; // [rsp+A0h] [rbp-1B0h] BYREF
  char fname[64]; // [rsp+D0h] [rbp-180h] BYREF
  char path[264]; // [rsp+110h] [rbp-140h] BYREF
  unsigned __int64 v26; // [rsp+218h] [rbp-38h]
  Vector Corner; // 0:kr34_12.12

  v26 = __readfsqword(0x28u);
  if ( args->m_nArgc != 2 )
  {
    Msg("Usage: nav_merge_mesh filename\n", ctx);
    return;
  }
  _V_FileBase(args->m_ppArgv[1], fname, 64);
  V_snprintf(path, 260, "maps/%s.txt", fname);
  data = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(data, "Nav Selected Set");
  v4 = 0;
  if ( filesystem != 0 )
    v4 = &filesystem->IBaseFileSystem;
  if ( !KeyValues::LoadFromFile(data, v4, path, 0, 0) )
  {
    Msg("Unable to load %s.\n", path);
LABEL_8:
    KeyValues::deleteThis(data);
    return;
  }
  newAreas.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  newAreas.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  newAreas.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  newAreas.m_Elements.m_Tree.m_Root = -1;
  newAreas.m_Elements.m_Tree.m_NumElements = 0;
  newAreas.m_Elements.m_Tree.m_FirstFree = -1;
  newAreas.m_Elements.m_Tree.m_LastAlloc.index = -1;
  newAreas.m_Elements.m_Tree.m_pElements = 0;
  newAreas.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  areaVector.m_Size = 0;
  areaVector.m_Memory.m_pMemory = 0;
  areaVector.m_Memory.m_nAllocationCount = 0;
  areaVector.m_Memory.m_nGrowSize = 0;
  FirstSubKey = KeyValues::GetFirstSubKey(data);
  if ( FirstSubKey == 0 )
  {
LABEL_20:
    for ( i = KeyValues::GetFirstSubKey(data); ; i = KeyValues::GetNextKey(v14) )
    {
      v14 = i;
      if ( i == 0 )
        break;
      ReconnectMergedArea(&newAreas, i, NavDirType::NORTH, "North");
      ReconnectMergedArea(&newAreas, v14, NavDirType::SOUTH, "South");
      ReconnectMergedArea(&newAreas, v14, NavDirType::EAST, "East");
      ReconnectMergedArea(&newAreas, v14, NavDirType::WEST, "West");
    }
    CNavMesh::StitchAreaSet(this, &areaVector);
    areaVector.m_Size = 0;
    if ( (areaVector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CNavArea *,int>::Purge(&areaVector.m_Memory);
      if ( (areaVector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CNavArea *,int>::Purge(&areaVector.m_Memory);
    }
    CUtlDict<CNavArea *,int>::Purge(&newAreas);
    CUtlRBTree<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&newAreas.m_Elements.m_Tree);
    if ( (newAreas.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&newAreas.m_Elements.m_Tree.m_Elements);
    goto LABEL_8;
  }
  while ( 1 )
  {
    vNorthWest = ReadCorner(FirstSubKey, "NorthWest");
    vNorthEast = ReadCorner(FirstSubKey, "NorthEast");
    vSouthWest = ReadCorner(FirstSubKey, "SouthWest");
    Corner = ReadCorner(FirstSubKey, "SouthEast");
    vptr_CNavMesh = this->_vptr_CNavMesh;
    vSouthEast = Corner;
    v7 = (vptr_CNavMesh[4])(this);
    pNewArea = v7;
    if ( v7 == 0 )
      break;
    CNavPoly::SetCorners(v7, &vNorthWest, &vNorthEast, &vSouthEast, &vSouthWest);
    (*(this->_vptr_CNavMesh + 28))(this, pNewArea);
    m_Size = areaVector.m_Size;
    v9 = areaVector.m_Size;
    if ( areaVector.m_Size == areaVector.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CNavArea *,int>::Grow(&areaVector.m_Memory, 1);
      v9 = areaVector.m_Size;
    }
    areaVector.m_Size = v9 + 1;
    v10 = &areaVector.m_Memory.m_pMemory[m_Size];
    if ( v10 != 0 )
      *v10 = pNewArea;
    Name = KeyValues::GetName(FirstSubKey);
    if ( Name == 0
      || (search.key = Name,
          CUtlRBTree<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
            &newAreas.m_Elements.m_Tree,
            &search) == -1) )
    {
      v12 = KeyValues::GetName(FirstSubKey);
      CUtlDict<CNavArea *,int>::Insert(&newAreas, v12, &pNewArea);
    }
    (*(pNewArea->_vptr_CNavPoly + 12))(pNewArea, FirstSubKey);
    FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
    if ( FirstSubKey == 0 )
      goto LABEL_20;
  }
  areaVector.m_Size = 0;
  if ( (areaVector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CNavArea *,int>::Purge(&areaVector.m_Memory);
    if ( (areaVector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(&areaVector.m_Memory);
  }
  CUtlDict<CNavArea *,int>::Purge(&newAreas);
  CUtlRBTree<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&newAreas.m_Elements.m_Tree);
  if ( (newAreas.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&newAreas.m_Elements.m_Tree.m_Elements);
}


