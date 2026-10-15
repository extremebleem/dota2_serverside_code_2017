
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// WorldMap  (line 28, @0x00000000027cbb60, libserver.so)
// calls: __cxa_guard_acquire, CDOTA_World_Map::CDOTA_World_Map, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// globals: `guard variable for'WorldMap(void)::s_WorldMap, WorldMap(void)::s_WorldMap, __dso_handle, CDOTA_World_Map::~CDOTA_World_Map()
CDOTA_World_Map *__cdecl WorldMap()
{
  if ( `guard variable for'WorldMap(void)::s_WorldMap != 0 )
    return &WorldMap(void)::s_WorldMap;
  if ( __cxa_guard_acquire(&`guard variable for'WorldMap(void)::s_WorldMap) != 0 )
  {
    CDOTA_World_Map::CDOTA_World_Map(&WorldMap(void)::s_WorldMap);
    __cxa_guard_release(&`guard variable for'WorldMap(void)::s_WorldMap);
    __cxa_atexit(CDOTA_World_Map::~CDOTA_World_Map, &WorldMap(void)::s_WorldMap, &_dso_handle);
  }
  return &WorldMap(void)::s_WorldMap;
}


// CDOTA_World_Map::CDOTA_World_Map  (line 34, @0x00000000027cbae0, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, ResetDbgInfo, SetDefLessFunc<CUtlMap<int, CDOTA_World_Map_Location*> >, SetLessFunc, ~CUtlMap
// calls: CDOTA_World_Map::LoadWorldMap, CUtlRBTree<CUtlMap<int, CDOTA_World_Map_Location*>::Node_t, short unsigned int, CUtlMap<int, CDOTA_World_Map_Location*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CDOTA_World_Map_Location*>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, _Unwind_Resume
// callers: WorldMap
// globals: CDefOps<int>::LessFunc(int const&,int const&)
void __fastcall CDOTA_World_Map::CDOTA_World_Map(CDOTA_World_Map *const this)
{
  this->m_mapLocations.m_Tree.m_NumElements = 0;
  this->m_mapLocations.m_Tree.m_FirstFree = -1;
  this->m_mapLocations.m_Tree.m_LastAlloc.index = -1;
  this->m_mapLocations.m_Tree.m_Elements.m_pMemory = 0;
  this->m_mapLocations.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_mapLocations.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_mapLocations.m_Tree.m_Root = -1;
  this->m_mapLocations.m_Tree.m_pElements = 0;
  this->m_mapLocations.m_Tree.m_LessFunc.m_LessFunc = CDefOps<int>::LessFunc;
  CDOTA_World_Map::LoadWorldMap(this);
}


// CDOTA_World_Map::~CDOTA_World_Map  (line 40, @0x00000000027b8380, libserver.so)  // inlines: Purge, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<int, CDOTA_World_Map_Location*>::Node_t, short unsigned int, CUtlMap<int, CDOTA_World_Map_Location*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CDOTA_World_Map_Location*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CDOTA_World_Map_Location*>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CDOTA_World_Map::~CDOTA_World_Map(CDOTA_World_Map *const this)
{
  CUtlRBTree<CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapLocations.m_Tree);
  if ( (this->m_mapLocations.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapLocations.m_Tree.m_Elements);
}


// CDOTA_World_Map::LoadWorldMap  (line 44, @0x00000000027cba80, libserver.so)  // inlines: PurgeAndDeleteElements
// calls: CUtlRBTree<CUtlMap<int, CDOTA_World_Map_Location*>::Node_t, short unsigned int, CUtlMap<int, CDOTA_World_Map_Location*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CDOTA_World_Map_Location*>::Node_t, short unsigned int>, short unsigned int> >::PurgeAndDeleteElements, CDOTA_World_Map::LoadWorldMapFile, IsAppDota2Main
// callers: CDOTA_World_Map::CDOTA_World_Map
// strings: "scripts/world_map.txt", "scripts/world_map_staging.txt", "scripts/world_map_custom.txt"
void __fastcall CDOTA_World_Map::LoadWorldMap(CDOTA_World_Map *const this)
{
  CUtlRBTree<CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::PurgeAndDeleteElements(&this->m_mapLocations.m_Tree);
  CDOTA_World_Map::LoadWorldMapFile(this, "scripts/world_map.txt");
  if ( IsAppDota2Main() )
  {
    CDOTA_World_Map::LoadWorldMapFile(this, "scripts/world_map_staging.txt");
    CDOTA_World_Map::LoadWorldMapFile(this, "scripts/world_map_custom.txt");
  }
}


// CDOTA_World_Map::LoadWorldMapFile  (line 57, @0x00000000027cb690, libserver.so)  // inlines: CUtlString, Element, Find, FindInsertionPosition, GetBool, Insert, InsertAt, LeafCodeInfo_t, LeftChild, RightChild, atoi, operator(), operator[]
// calls: KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetName, strtol, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, CUtlRBTree<CUtlMap<int, CDOTA_World_Map_Location*>::Node_t, short unsigned int, CUtlMap<int, CDOTA_World_Map_Location*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CDOTA_World_Map_Location*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<int, CDOTA_World_Map_Location*>::Node_t, short unsigned int, CUtlMap<int, CDOTA_World_Map_Location*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CDOTA_World_Map_Location*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent (21 total)
// callers: CDOTA_World_Map::LoadWorldMap
// strings: "WorldMap", "Locations", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/dota/dota, "LoadWorldMapFile", "Invalid or duplicate world map location %d\n", "LaunchCommand" (12 total)
void __fastcall CDOTA_World_Map::LoadWorldMapFile(CDOTA_World_Map *const this, const char *pszWorldMapFilename)
{
  unsigned __int16 m_Root; // r14
  IBaseFileSystem *v5; // rsi
  KeyValues *Key; // rax
  KeyValues *i; // r15
  const char *Name; // rax
  CUtlMap<int,CDOTA_World_Map_Location*,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t v9; // eax
  CUtlMap<int,CDOTA_World_Map_Location*,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t v10; // r13d
  CUtlMap<int,CDOTA_World_Map_Location*,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  bool v16; // r12
  unsigned __int16 v17; // ax
  _QWORD *v18; // rax
  _QWORD *v19; // r12
  const char *String; // rax
  const char *v21; // rax
  const char *v22; // rax
  const char *v23; // rax
  unsigned __int16 m_Right; // ax
  bool v25; // zf
  UtlRBTreeNode_t<CUtlMap<int,CDOTA_World_Map_Location*>::Node_t,short unsigned int> *m_pMemory; // rax
  CUtlMap<int,CDOTA_World_Map_Location*,short unsigned int,bool (*)(int const&,int const&)>::Node_t v27; // [rsp+20h] [rbp-80h] BYREF
  LeafCodeInfo_t v28; // [rsp+30h] [rbp-70h] BYREF
  KeyValues worldMapKV; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  KeyValues::KeyValues(&worldMapKV, "WorldMap");
  v5 = 0;
  if ( g_pFullFileSystem != 0 )
    v5 = &g_pFullFileSystem->IBaseFileSystem;
  if ( KeyValues::LoadFromFile(&worldMapKV, v5, pszWorldMapFilename, "GAME", 0) )
  {
    Key = KeyValues::FindKey(&worldMapKV, "Locations", 0);
    if ( Key != 0 )
    {
      for ( i = KeyValues::GetFirstSubKey(Key); i != 0; i = KeyValues::GetNextKey(i) )
      {
        Name = KeyValues::GetName(i);
        v9 = strtol(Name, 0, 10);
        v10 = v9;
        v11 = v9;
        if ( v9 != 0
          && (v27.key = v9,
              CUtlRBTree<CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
                &this->m_mapLocations.m_Tree,
                &v27) == 0xFFFF) )
        {
          v18 = operator new(0x40u);
          v18[2] = 0;
          v18[3] = 0;
          v19 = v18;
          v18[4] = 0;
          v18[7] = 0;
          *v18 = v10;
          *(v18 + 4) = KeyValues::GetInt(i, "Disabled", 0) != 0;
          *(v19 + 2) = KeyValues::GetInt(i, "X", 0);
          *(v19 + 3) = KeyValues::GetInt(i, "Y", 0);
          String = KeyValues::GetString(i, "LaunchCommand", "", 0, 0);
          CUtlString::operator=(v19 + 2, String);
          v21 = KeyValues::GetString(i, "MapName", "", 0, 0);
          CUtlString::operator=(v19 + 3, v21);
          v22 = KeyValues::GetString(i, "LessonName", "", 0, 0);
          CUtlString::operator=(v19 + 4, v22);
          *(v19 + 10) = KeyValues::GetInt(i, "VisibleWhenOtherLocationComplete", 0);
          *(v19 + 11) = KeyValues::GetInt(i, "VisibleOnlyWhenBotMatchesComplete", 0);
          *(v19 + 12) = KeyValues::GetInt(i, "VisibleOnlyWhenLaningTutorialsComplete", 0);
          *(v19 + 13) = KeyValues::GetInt(i, "PlayableWhenOtherLocationComplete", 0);
          v23 = KeyValues::GetString(i, "RewardItem", "", 0, 0);
          CUtlString::operator=(v19 + 7, v23);
          m_Root = this->m_mapLocations.m_Tree.m_Root;
          LODWORD(v28.m_szFile) = v10;
          *&v28.m_nLine = v19;
          if ( m_Root != 0xFFFF )
          {
            while ( 1 )
            {
              v25 = this->m_mapLocations.m_Tree.m_LessFunc.m_LessFunc(
                      &v28,
                      &this->m_mapLocations.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
              m_pMemory = this->m_mapLocations.m_Tree.m_Elements.m_pMemory;
              if ( v25 )
              {
                m_Right = m_pMemory[m_Root].m_Right;
                v16 = 0;
              }
              else
              {
                m_Right = m_pMemory[m_Root].m_Left;
                v16 = 1;
              }
              if ( m_Right == 0xFFFF )
                break;
              m_Root = m_Right;
            }
            goto LABEL_13;
          }
        }
        else
        {
          this = &LOG_GENERAL;
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            v28.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/dota/dota_world_map.cpp";
            v28.m_szFunction = "LoadWorldMapFile";
            v28.m_nLine = 71;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v28,
              "Invalid or duplicate world map location %d\n",
              v11);
          }
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v14, v15, v12, v13) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
        }
        v16 = 0;
LABEL_13:
        v17 = CUtlRBTree<CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                &this->m_mapLocations.m_Tree,
                &v28);
        CUtlRBTree<CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
          &this->m_mapLocations.m_Tree,
          v17,
          m_Root,
          v16);
        ++this->m_mapLocations.m_Tree.m_NumElements;
      }
    }
  }
  KeyValues::~KeyValues(&worldMapKV);
}


// CDOTA_World_Map::GetLocationByID  (line 92, @0x00000000027b83c0, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<int, CDOTA_World_Map_Location*>::Node_t, short unsigned int, CUtlMap<int, CDOTA_World_Map_Location*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CDOTA_World_Map_Location*>::Node_t, short unsigned int>, short unsigned int> >::Find
CDOTA_World_Map_Location *__fastcall CDOTA_World_Map::GetLocationByID(CDOTA_World_Map *const this, int nLocationID)
{
  unsigned __int16 v3; // ax
  CUtlMap<int,CDOTA_World_Map_Location*,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  search.key = nLocationID;
  v3 = CUtlRBTree<CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CDOTA_World_Map_Location *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_mapLocations.m_Tree,
         &search);
  if ( v3 == 0xFFFF )
    return 0;
  else
    return this->m_mapLocations.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem;
}


// CDOTA_World_Map::FindLocationID  (line 100, @0x00000000027b2a20, libserver.so)  // inlines: IsIdxValid, IsValidIndex, LeftChild
// calls: CUtlString::Get, V_stricmp_fast
int __fastcall CDOTA_World_Map::FindLocationID(CDOTA_World_Map *const this, const char *pszTutorialStartLesson)
{
  __int64 v4; // r12
  int v5; // ebx
  int m_nAllocationCount; // eax
  UtlRBTreeNode_t<CUtlMap<int,CDOTA_World_Map_Location*>::Node_t,short unsigned int> *m_pMemory; // rcx
  const char *v8; // rax

  v4 = 0;
  v5 = 0;
  m_nAllocationCount = this->m_mapLocations.m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount == 0 )
    return 0;
  while ( 1 )
  {
    if ( m_nAllocationCount > v5 )
    {
      if ( v5 > this->m_mapLocations.m_Tree.m_LastAlloc.index )
        goto LABEL_7;
      m_pMemory = this->m_mapLocations.m_Tree.m_Elements.m_pMemory;
      if ( m_pMemory[v5].m_Left == v5 )
        goto LABEL_7;
      v8 = CUtlString::Get(&m_pMemory[v4].m_Data.elem->m_sLessonName);
      if ( V_stricmp_fast(pszTutorialStartLesson, v8) == 0 )
        return this->m_mapLocations.m_Tree.m_Elements.m_pMemory[v4].m_Data.key;
      m_nAllocationCount = this->m_mapLocations.m_Tree.m_Elements.m_nAllocationCount;
    }
LABEL_7:
    ++v5;
    ++v4;
    if ( m_nAllocationCount <= v5 )
      return 0;
  }
}


// CDOTAMapLocationState::CDOTAMapLocationState  (line 115, @0x00000000027b2ac0, libserver.so)  // inlines: CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSODOTAMapLocationState::CSODOTAMapLocationState, _Unwind_Resume
void __fastcall CDOTAMapLocationState::CDOTAMapLocationState(CDOTAMapLocationState *const this)
{
  CSODOTAMapLocationState *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_42B4C50;
  CSODOTAMapLocationState::CSODOTAMapLocationState(v2);
  *this = off_42B4CD0;
}


