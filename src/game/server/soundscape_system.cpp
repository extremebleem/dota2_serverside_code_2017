
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// soundscape_flush  (line 23, @0x00000000023a64b0, libserver.so)  // inlines: ToBasePlayer, entindex
// calls: UTIL_GetCommandClient, UTIL_GetListenServerHost, CSoundscapeSystem::ReloadSoundscapes, UTIL_PlayerByIndex, CEntityInstance::GetEntityIndex
// strings: "cl_soundscape_flush\n"
// globals: g_pSoundscapeSystem
void __fastcall soundscape_flush(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v3; // rbx
  int v4; // ebx
  CBasePlayer *v5; // rax
  void (__fastcall *v6)(IVEngineServer2 *, _QWORD, const char *); // r14
  CEntityIndex v7; // eax
  void (__fastcall *v8)(IVEngineServer2 *, _QWORD, const char *); // r13
  CEntityIndex v9; // eax

  CommandClient = UTIL_GetCommandClient();
  v3 = CommandClient;
  if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
  {
    if ( (*(*engine + 160LL))(engine) != 0 || v3 != UTIL_GetListenServerHost() )
      return;
  }
  else
  {
    if ( (*(*engine + 160LL))(engine) == 0 )
      return;
    v3 = 0;
  }
  if ( g_pSoundscapeSystem != 0 )
    CSoundscapeSystem::ReloadSoundscapes(g_pSoundscapeSystem);
  if ( (*(*engine + 160LL))(engine) != 0 )
  {
    v4 = 1;
    if ( gpGlobals->maxClients > 0 )
    {
      do
      {
        v5 = UTIL_PlayerByIndex(v4);
        if ( v5 != 0 )
        {
          v6 = *(*engine + 288LL);
          v7.m_Data = CEntityInstance::GetEntityIndex(v5).m_Data;
          v6(engine, v7.m_Data, "cl_soundscape_flush\n");
        }
        ++v4;
      }
      while ( gpGlobals->maxClients >= v4 );
    }
  }
  else
  {
    v8 = *(*engine + 288LL);
    v9.m_Data = CEntityInstance::GetEntityIndex(v3).m_Data;
    v8(engine, v9.m_Data, "cl_soundscape_flush\n");
  }
}


// CSoundscapeSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 64, @0x0000000002397d10, libserver.so)
void __cdecl CSoundscapeSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CSoundscapeSystem::AddSoundscapeFile  (line 68, @0x0000000002397d20, libserver.so)  // inlines: GetBool, GetInt, _V_strstr, strstr
// calls: KeyValues::KeyValues, CStringRegistry::GetStringText, Warning, KeyValues::GetName, CStringRegistry::AddString, KeyValues::GetNextKey, KeyValues::GetFirstSubKey, CStringRegistry::GetNumStrings, strchr, KeyValues::~KeyValues, _Unwind_Resume, __stack_chk_fail
// callers: CSoundscapeSystem::InitGlobalSoundscapes, CSoundscapeSystem::InitForSpawnGroup
// strings: "Error parsing soundscape file %s after %s\n"
void __fastcall CSoundscapeSystem::AddSoundscapeFile(
        CSoundscapeSystem *const this,
        const char *pFileName,
        CSoundscapeSystem::SoundscapeInfo_t *pInfo)
{
  KeyValues *p_keyValuesData; // rbx
  char *StringText; // rdx
  const char *v7; // rax
  int NumStrings; // r12d
  const char *Name; // rax
  KeyValues keyValuesData; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  KeyValues::KeyValues(&keyValuesData, pFileName);
  p_keyValuesData = &keyValuesData;
  if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 83))(g_pFullFileSystem, &keyValuesData, 2, pFileName, 0) != 0 )
  {
    do
    {
      if ( KeyValues::GetFirstSubKey(p_keyValuesData) != 0 )
      {
        NumStrings = CStringRegistry::GetNumStrings(&pInfo->m_soundscapes);
        if ( g_pDeveloper->m_pParent->m_Value.m_nValue != 0 )
        {
          Name = KeyValues::GetName(p_keyValuesData);
          if ( strchr(Name, 123) != 0 )
          {
            if ( NumStrings > 0 )
              StringText = CStringRegistry::GetStringText(&pInfo->m_soundscapes, NumStrings - 1);
            else
              StringText = "FIRST";
            Warning("Error parsing soundscape file %s after %s\n", pFileName, StringText);
          }
        }
        v7 = KeyValues::GetName(p_keyValuesData);
        CStringRegistry::AddString(&pInfo->m_soundscapes, v7, NumStrings);
      }
      p_keyValuesData = KeyValues::GetNextKey(p_keyValuesData);
    }
    while ( p_keyValuesData != 0 );
  }
  KeyValues::~KeyValues(&keyValuesData);
}


// sv_soundscape_printdebuginfo  (line 99, @0x0000000002398060, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CSoundscapeSystem::PrintDebugInfo
// globals: g_pSoundscapeSystem
void __fastcall sv_soundscape_printdebuginfo(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() && g_pSoundscapeSystem != 0 )
    CSoundscapeSystem::PrintDebugInfo(g_pSoundscapeSystem);
}


// CSoundscapeSystem::PrintDebugInfo  (line 111, @0x0000000002397e70, libserver.so)  // inlines: CUtlSymbolLarge, GetSoundscapeName
// calls: Msg, CStringRegistry::First, CStringRegistry::GetIDForKey, CStringRegistry::GetStringForKey, CStringRegistry::Next, CStringRegistry::InvalidIndex, CBaseEntity::GetAbsOrigin
// callers: sv_soundscape_printdebuginfo
// strings: "\n------- SERVER SOUNDSCAPES -------\n", "- %d: %s\n", "-------- SOUNDSCAPE ENTITIES -----\n", "- %d: %s x:%.4f y:%.4f z:%.4f\n", "- %d: REMOVED\n", "----------------------------------\n\n"
void __fastcall CSoundscapeSystem::PrintDebugInfo(CSoundscapeSystem *const this)
{
  CSoundscapeSystem::SoundscapeInfo_t *p_m_globalSoundscapes; // r12
  int i; // r13d
  int IDForKey; // r14d
  const char *StringForKey; // rax
  CSoundscapeSystem::SoundscapeInfo_t *m_pActiveSpawnGroupSoundscapes; // rdi
  int j; // r12d
  int v8; // r13d
  const char *v9; // rax
  __int64 v10; // r14
  int v11; // r13d
  unsigned __int64 k; // xmm0_8
  const Vector *AbsOrigin; // rax
  const char *m_pAsString; // rdx
  __int64 v15; // rsi
  CEnvSoundscape **m_pMemory; // rax
  CEnvSoundscape *v17; // r12
  int v18; // esi
  double z; // [rsp+0h] [rbp-40h]
  double y; // [rsp+8h] [rbp-38h]

  p_m_globalSoundscapes = &this->m_globalSoundscapes;
  Msg("\n------- SERVER SOUNDSCAPES -------\n");
  for ( i = CStringRegistry::First(&p_m_globalSoundscapes->m_soundscapes);
        i != CStringRegistry::InvalidIndex(&p_m_globalSoundscapes->m_soundscapes);
        i = CStringRegistry::Next(&p_m_globalSoundscapes->m_soundscapes, i) )
  {
    IDForKey = CStringRegistry::GetIDForKey(&p_m_globalSoundscapes->m_soundscapes, i);
    StringForKey = CStringRegistry::GetStringForKey(&p_m_globalSoundscapes->m_soundscapes, i);
    Msg("- %d: %s\n", IDForKey, StringForKey);
  }
  m_pActiveSpawnGroupSoundscapes = this->m_pActiveSpawnGroupSoundscapes;
  if ( m_pActiveSpawnGroupSoundscapes != 0 )
  {
    for ( j = CStringRegistry::First(&m_pActiveSpawnGroupSoundscapes->m_soundscapes);
          j != CStringRegistry::InvalidIndex(&this->m_pActiveSpawnGroupSoundscapes->m_soundscapes);
          j = CStringRegistry::Next(&this->m_pActiveSpawnGroupSoundscapes->m_soundscapes, j) )
    {
      v8 = CStringRegistry::GetIDForKey(&this->m_pActiveSpawnGroupSoundscapes->m_soundscapes, j)
         + this->m_nGlobalSoundscapeCount;
      v9 = CStringRegistry::GetStringForKey(&this->m_pActiveSpawnGroupSoundscapes->m_soundscapes, j);
      Msg("- %d: %s\n", v8, v9);
    }
  }
  v10 = 0;
  v11 = 0;
  for ( k = Msg("-------- SOUNDSCAPE ENTITIES -----\n").m128_u64[0];
        this->m_soundscapeEntities.m_Size > v11;
        k = Msg("- %d: %s x:%.4f y:%.4f z:%.4f\n", v15, m_pAsString, AbsOrigin->x, y, z).m128_u64[0] )
  {
    while ( 1 )
    {
      m_pMemory = this->m_soundscapeEntities.m_Memory.m_pMemory;
      v17 = m_pMemory[v10];
      if ( v17 != 0 )
        break;
      v18 = v11++;
      ++v10;
      k = Msg("- %d: REMOVED\n", v18).m128_u64[0];
      if ( this->m_soundscapeEntities.m_Size <= v11 )
        goto LABEL_15;
    }
    z = CBaseEntity::GetAbsOrigin(m_pMemory[v10])->z;
    y = CBaseEntity::GetAbsOrigin(v17)->y;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v17);
    m_pAsString = v17->m_soundscapeName.u.m_pAsString;
    v15 = v11;
    if ( m_pAsString == 0 )
      m_pAsString = "";
    ++v11;
    ++v10;
  }
LABEL_15:
  Msg("----------------------------------\n\n", *&k);
}


// CSoundscapeSystem::InitGlobalSoundscapes  (line 152, @0x000000000239b0a0, libserver.so)  // inlines: CleanupSoundscape, LeafCodeInfo_t
// calls: CStringRegistry::ClearStrings, CUtlVectorBase<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, int> >::RemoveAll, KeyValues::KeyValues, KeyValues::GetFirstSubKey, KeyValues::GetString, CSoundscapeSystem::AddSoundscapeFile, KeyValues::GetNextKey, KeyValues::GetName, V_stricmp_fast, Warning, CStringRegistry::GetNumStrings, KeyValues::~KeyValues (18 total)
// callers: CSoundscapeSystem::GameInit, CSoundscapeSystem::ReloadSoundscapes
// strings: "scripts/soundscapes_manifest.txt", "CSoundscapeSystem::Init:  Manifest '%s' with bogus file type '%s', expecting 'file'\n", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/soundscap, "InitGlobalSoundscapes", "Unable to load manifest file '%s'\n"
void __fastcall CSoundscapeSystem::InitGlobalSoundscapes(CSoundscapeSystem *const this)
{
  CSoundscapeSystem::SoundscapeInfo_t *p_m_globalSoundscapes; // r13
  KeyValues *i; // rax
  const char *String; // rax
  KeyValues *v5; // rbx
  const char *Name; // rax
  const char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  LeafCodeInfo_t v12; // [rsp+0h] [rbp-60h] BYREF
  KeyValues manifest; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-28h]

  p_m_globalSoundscapes = &this->m_globalSoundscapes;
  v14 = __readfsqword(0x28u);
  CStringRegistry::ClearStrings(&this->m_globalSoundscapes.m_soundscapes);
  CUtlVectorBase<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,int>>::RemoveAll(&this->m_globalSoundscapes.m_sounds);
  KeyValues::KeyValues(&manifest, "scripts/soundscapes_manifest.txt");
  if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 83))(
         g_pFullFileSystem,
         &manifest,
         2,
         "scripts/soundscapes_manifest.txt",
         0) == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_13;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v10, v11, v8, v9) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_13:
      v12.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/soundscape_system.cpp";
      v12.m_szFunction = "InitGlobalSoundscapes";
      v12.m_nLine = 175;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v12,
        "Unable to load manifest file '%s'\n",
        "scripts/soundscapes_manifest.txt");
    }
  }
  for ( i = KeyValues::GetFirstSubKey(&manifest); ; i = KeyValues::GetNextKey(v5) )
  {
    v5 = i;
    if ( i == 0 )
      break;
    Name = KeyValues::GetName(i);
    if ( V_stricmp_fast(Name, "file") != 0 )
    {
      v7 = KeyValues::GetName(v5);
      Warning(
        "CSoundscapeSystem::Init:  Manifest '%s' with bogus file type '%s', expecting 'file'\n",
        "scripts/soundscapes_manifest.txt",
        v7);
    }
    else
    {
      String = KeyValues::GetString(v5, 0, "", 0, 0);
      CSoundscapeSystem::AddSoundscapeFile(this, String, p_m_globalSoundscapes);
    }
  }
  this->m_nGlobalSoundscapeCount = CStringRegistry::GetNumStrings(&p_m_globalSoundscapes->m_soundscapes);
  KeyValues::~KeyValues(&manifest);
}


// CSoundscapeSystem::CleanupSoundscape  (line 181, @0x000000000239b070, libserver.so)
// calls: CStringRegistry::ClearStrings, CUtlVectorBase<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, int> >::RemoveAll
void __fastcall CSoundscapeSystem::CleanupSoundscape(
        CSoundscapeSystem *const this,
        CSoundscapeSystem::SoundscapeInfo_t *pInfo)
{
  CStringRegistry::ClearStrings(&pInfo->m_soundscapes);
  CUtlVectorBase<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,int>>::RemoveAll(&pInfo->m_sounds);
}


// CSoundscapeSystem::InitForSpawnGroup  (line 187, @0x00000000023a6170, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CleanupSoundscape, Element, Find, FindInsertionPosition, Insert, InsertAt, LeftChild, RightChild, SoundscapeInfo_t, V_ExtractFilePath<long unsigned int>, operator(), operator[]
// calls: CUtlRBTree<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int, CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int>, short unsigned int> >::Find, CStringRegistry::ClearStrings, CUtlVectorBase<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, int> >::RemoveAll, CSpawnGroupMgrGameSystem::GetSpawnGroupName, _V_ExtractFilePath, UTIL_VarArgs, CSoundscapeSystem::AddSoundscapeFile, operator new, CStringRegistry::CStringRegistry, CUtlRBTree<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int, CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int, CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, __stack_chk_fail (14 total)
// callers: CSoundscapeSystem::ReloadSoundscapes, CSoundscapeSystem::PreSpawnGroupLoad
// strings: "scripts/soundscapes_%s.txt"
void __fastcall CSoundscapeSystem::InitForSpawnGroup(CSoundscapeSystem *const this, SpawnGroupHandle_t hSpawnGroup)
{
  CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *p_m_spawnGroupSoundscapes; // r15
  unsigned __int16 v5; // ax
  __int64 v6; // r14
  const char *SpawnGroupName; // rax
  CSoundscapeSystem::SoundscapeInfo_t *v8; // r14
  unsigned __int16 m_Root; // ax
  unsigned __int16 m_Right; // ax
  char v11; // dl
  bool v12; // zf
  UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t*>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // r12
  char v16; // cl
  char *pSpawnGroupSoundscapeFilename; // [rsp+0h] [rbp-160h]
  char *pSpawnGroupNameb; // [rsp+8h] [rbp-158h]
  const char *pSpawnGroupName; // [rsp+8h] [rbp-158h]
  unsigned __int16 pSpawnGroupNamea; // [rsp+8h] [rbp-158h]
  bool pSpawnGroupNamec; // [rsp+8h] [rbp-158h]
  CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+10h] [rbp-150h] BYREF
  char pDir[264]; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v24; // [rsp+128h] [rbp-38h]

  p_m_spawnGroupSoundscapes = &this->m_spawnGroupSoundscapes;
  search.key = hSpawnGroup;
  v24 = __readfsqword(0x28u);
  v5 = CUtlRBTree<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_spawnGroupSoundscapes.m_Tree,
         &search);
  v6 = v5;
  if ( v5 != 0xFFFF )
  {
    pSpawnGroupNameb = this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_pMemory[v5].m_Data.elem;
    CStringRegistry::ClearStrings(pSpawnGroupNameb);
    CUtlVectorBase<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,int>>::RemoveAll((pSpawnGroupNameb + 8));
  }
  SpawnGroupName = CSpawnGroupMgrGameSystem::GetSpawnGroupName(g_pSpawnGroupMgr, hSpawnGroup);
  if ( SpawnGroupName != 0 && *SpawnGroupName != 0 )
  {
    pSpawnGroupName = SpawnGroupName;
    _V_ExtractFilePath(SpawnGroupName, pDir, 260);
    if ( pDir[0] == 0 )
    {
      pSpawnGroupSoundscapeFilename = UTIL_VarArgs("scripts/soundscapes_%s.txt", pSpawnGroupName);
      if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(
             &g_pFullFileSystem->IBaseFileSystem,
             pSpawnGroupSoundscapeFilename,
             0) != 0 )
      {
        if ( v6 == 0xFFFF )
        {
          v8 = operator new(0x20u);
          CStringRegistry::CStringRegistry(&v8->m_soundscapes);
          v8->m_sounds.m_Size = 0;
          v8->m_sounds.m_Memory.m_pMemory = 0;
          v8->m_sounds.m_Memory.m_nAllocationCount = 0;
          v8->m_sounds.m_Memory.m_nGrowSize = 0;
          m_Root = this->m_spawnGroupSoundscapes.m_Tree.m_Root;
          search.key = hSpawnGroup;
          search.elem = v8;
          pSpawnGroupNamea = m_Root;
          if ( m_Root == 0xFFFF )
          {
            v15 = -1;
            v16 = 0;
          }
          else
          {
            while ( 1 )
            {
              v12 = !this->m_spawnGroupSoundscapes.m_Tree.m_LessFunc.m_LessFunc(
                       &search,
                       &this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_pMemory[pSpawnGroupNamea].m_Data);
              m_pMemory = this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_pMemory;
              if ( v12 )
              {
                m_Right = m_pMemory[pSpawnGroupNamea].m_Right;
                v11 = 0;
              }
              else
              {
                m_Right = m_pMemory[pSpawnGroupNamea].m_Left;
                v11 = 1;
              }
              if ( m_Right == 0xFFFF )
                break;
              pSpawnGroupNamea = m_Right;
            }
            v15 = pSpawnGroupNamea;
            v16 = v11;
          }
          pSpawnGroupNamec = v16;
          v14 = CUtlRBTree<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                  &p_m_spawnGroupSoundscapes->m_Tree,
                  &search);
          v6 = v14;
          CUtlRBTree<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
            &p_m_spawnGroupSoundscapes->m_Tree,
            v14,
            v15,
            pSpawnGroupNamec);
          ++this->m_spawnGroupSoundscapes.m_Tree.m_NumElements;
        }
        CSoundscapeSystem::AddSoundscapeFile(
          this,
          pSpawnGroupSoundscapeFilename,
          this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem);
      }
    }
  }
}


// CSoundscapeSystem::CSoundscapeSystem  (line 216, @0x000000000239ede0, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, ResetDbgInfo, SetLessFunc, SoundscapeInfo_t, ~CAutoGameSystem
// calls: CStringRegistry::CStringRegistry, IGameSystem::~IGameSystem, _Unwind_Resume
// callers: CGameSystemReallocatingFactory<CSoundscapeSystem, CSoundscapeSystem>::CreateGameSystem
// globals: CDefOps<uint>::LessFunc(uint const&,uint const&)
void __fastcall CSoundscapeSystem::CSoundscapeSystem(CSoundscapeSystem *const this)
{
  this->_vptr_IGameSystem = off_40AE570;  // vptr: CSoundscapeSystem
  CStringRegistry::CStringRegistry(&this->m_globalSoundscapes.m_soundscapes);
  this->m_globalSoundscapes.m_sounds.m_Size = 0;
  this->m_globalSoundscapes.m_sounds.m_Memory.m_pMemory = 0;
  this->m_globalSoundscapes.m_sounds.m_Memory.m_nAllocationCount = 0;
  this->m_globalSoundscapes.m_sounds.m_Memory.m_nGrowSize = 0;
  this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_pMemory = 0;
  this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_spawnGroupSoundscapes.m_Tree.m_Root = -1;
  this->m_spawnGroupSoundscapes.m_Tree.m_NumElements = 0;
  this->m_spawnGroupSoundscapes.m_Tree.m_FirstFree = -1;
  this->m_spawnGroupSoundscapes.m_Tree.m_LastAlloc.index = -1;
  this->m_spawnGroupSoundscapes.m_Tree.m_pElements = 0;
  this->m_soundscapeEntities.m_Size = 0;
  this->m_soundscapeEntities.m_Memory.m_pMemory = 0;
  this->m_soundscapeEntities.m_Memory.m_nAllocationCount = 0;
  this->m_soundscapeEntities.m_Memory.m_nGrowSize = 0;
  this->m_soundscapesInCluster.m_Size = 0;
  this->m_soundscapesInCluster.m_Memory.m_pMemory = 0;
  this->m_soundscapesInCluster.m_Memory.m_nAllocationCount = 0;
  this->m_soundscapesInCluster.m_Memory.m_nGrowSize = 0;
  this->m_soundscapeIndexList.m_Size = 0;
  this->m_soundscapeIndexList.m_Memory.m_pMemory = 0;
  this->m_soundscapeIndexList.m_Memory.m_nAllocationCount = 0;
  this->m_soundscapeIndexList.m_Memory.m_nGrowSize = 0;
  this->m_spawnGroupSoundscapes.m_Tree.m_LessFunc.m_LessFunc = CDefOps<unsigned int>::LessFunc;
  this->m_nGlobalSoundscapeCount = 0;
  this->m_pActiveSpawnGroupSoundscapes = 0;
  this->m_nSpawnGroupSoundscapeCount = 0;
  this->m_activeIndex = 0;
  this->m_bCacheDirty = 0;
  this->m_nPVSClusterSpawnGroup = -1;
}


// CSoundscapeSystem::ReloadSoundscapes  (line 227, @0x00000000023a63f0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, operator[]
// calls: CSoundscapeSystem::InitGlobalSoundscapes, CSoundscapeSystem::InitForSpawnGroup, CUtlRBTree<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int, CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CStringRegistry::GetNumStrings, CSoundscapeSystem::ReassignSoundscapeIndicesForEntities
// callers: soundscape_flush
void __fastcall CSoundscapeSystem::ReloadSoundscapes(CSoundscapeSystem *const this)
{
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v4; // rax
  unsigned __int16 m_Left; // si
  CSoundscapeSystem::SoundscapeInfo_t *m_pActiveSpawnGroupSoundscapes; // rdi

  CSoundscapeSystem::InitGlobalSoundscapes(this);
  m_Root = this->m_spawnGroupSoundscapes.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      CSoundscapeSystem::InitForSpawnGroup(this, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_spawnGroupSoundscapes.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  m_pActiveSpawnGroupSoundscapes = this->m_pActiveSpawnGroupSoundscapes;
  if ( m_pActiveSpawnGroupSoundscapes != 0 )
    this->m_nSpawnGroupSoundscapeCount = CStringRegistry::GetNumStrings(&m_pActiveSpawnGroupSoundscapes->m_soundscapes);
  CSoundscapeSystem::ReassignSoundscapeIndicesForEntities(this);
  this->m_activeIndex = 0;
}


// CSoundscapeSystem::GameInit  (line 242, @0x000000000239b270, libserver.so)
// calls: CSoundscapeSystem::InitGlobalSoundscapes
void __fastcall CSoundscapeSystem::GameInit(CSoundscapeSystem *const this, const EventGameInit_t *const msg)
{
  CSoundscapeSystem::InitGlobalSoundscapes(this);
  this->m_activeIndex = 0;
  this->m_nPVSClusterSpawnGroup = -1;
}


// CSoundscapeSystem::GameShutdown  (line 249, @0x000000000239ef30, libserver.so)  // inlines: CleanupSoundscape, FirstInorder, LeftChild, NextInorder, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~SoundscapeInfo_t
// calls: CStringRegistry::~CStringRegistry, operator delete, CUtlRBTree<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int, CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlVectorBase<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, int> >::RemoveAll, CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, int>::Purge, CUtlRBTree<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int, CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CStringRegistry::ClearStrings
void __fastcall CSoundscapeSystem::GameShutdown(CSoundscapeSystem *const this, const EventGameShutdown_t *const msg)
{
  unsigned __int16 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v5; // rax
  unsigned __int16 m_Left; // si
  CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *p_m_spawnGroupSoundscapes; // r14
  CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::ElemType_t elem; // rbx

  m_Root = this->m_spawnGroupSoundscapes.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
  {
    p_m_spawnGroupSoundscapes = &this->m_spawnGroupSoundscapes;
  }
  else
  {
    m_pMemory = this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_pMemory;
    v5 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v5 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    p_m_spawnGroupSoundscapes = &this->m_spawnGroupSoundscapes;
    while ( 1 )
    {
      elem = m_pMemory[v5].m_Data.elem;
      if ( elem != 0 )
      {
        CUtlVectorBase<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,int>>::RemoveAll(&elem->m_sounds);
        if ( (elem->m_sounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,int>::Purge(&elem->m_sounds.m_Memory);
          if ( (elem->m_sounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,int>::Purge(&elem->m_sounds.m_Memory);
        }
        CStringRegistry::~CStringRegistry(&elem->m_soundscapes);
        operator delete(elem);
      }
      m_Root = CUtlRBTree<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_spawnGroupSoundscapes.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_pMemory;
      v5 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&p_m_spawnGroupSoundscapes->m_Tree);
  CStringRegistry::ClearStrings(&this->m_globalSoundscapes.m_soundscapes);
  CUtlVectorBase<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,int>>::RemoveAll(&this->m_globalSoundscapes.m_sounds);
  this->m_soundscapeEntities.m_Size = 0;
  this->m_activeIndex = 0;
  this->m_nPVSClusterSpawnGroup = -1;
}


// CSoundscapeSystem::PreSpawnGroupLoad  (line 263, @0x00000000023a65f0, libserver.so)
// calls: CSoundscapeSystem::InitForSpawnGroup
void __fastcall CSoundscapeSystem::PreSpawnGroupLoad(
        CSoundscapeSystem *const this,
        const EventPreSpawnGroupLoad_t *const msg)
{
  CSoundscapeSystem::InitForSpawnGroup(this, msg->m_SpawnGroupHandle);
}


// CSoundscapeSystem::PostSpawnGroupUnload  (line 268, @0x00000000023a6600, libserver.so)  // inlines: Element, Find, FreeNode, Purge, RemoveAt, SetLeftChild, SetRightChild, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~SoundscapeInfo_t
// calls: CUtlRBTree<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int, CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlVectorBase<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, int> >::RemoveAll, CStringRegistry::~CStringRegistry, operator delete, CUtlRBTree<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int, CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int>, short unsigned int> >::Unlink, CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, int>::Purge, CSoundscapeSystem::ReassignSoundscapeIndicesForEntities
void __fastcall CSoundscapeSystem::PostSpawnGroupUnload(
        CSoundscapeSystem *const this,
        const EventPostSpawnGroupUnload_t *const msg)
{
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // r15
  unsigned __int16 v5; // r14
  __int64 v6; // r13
  CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::ElemType_t elem; // r12
  UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t*>::Node_t,short unsigned int> *m_pMemory; // rdx
  CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *p_m_spawnGroupSoundscapes; // [rsp+8h] [rbp-48h]
  CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+10h] [rbp-40h] BYREF

  search.key = msg->m_SpawnGroupHandle;
  p_m_spawnGroupSoundscapes = &this->m_spawnGroupSoundscapes;
  v3 = CUtlRBTree<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_spawnGroupSoundscapes.m_Tree,
         &search);
  v4 = v3;
  v5 = v3;
  if ( v3 != 0xFFFF )
  {
    v6 = v3;
    elem = this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem;
    if ( this->m_pActiveSpawnGroupSoundscapes == elem )
    {
      this->m_pActiveSpawnGroupSoundscapes = 0;
      this->m_nSpawnGroupSoundscapeCount = 0;
      CSoundscapeSystem::ReassignSoundscapeIndicesForEntities(this);
      m_pMemory = this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_pMemory;
      this->m_activeIndex = 0;
      elem = m_pMemory[v6].m_Data.elem;
    }
    if ( elem != 0 )
    {
      CUtlVectorBase<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,int>>::RemoveAll(&elem->m_sounds);
      if ( (elem->m_sounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,int>::Purge(&elem->m_sounds.m_Memory);
        if ( (elem->m_sounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,int>::Purge(&elem->m_sounds.m_Memory);
      }
      CStringRegistry::~CStringRegistry(&elem->m_soundscapes);
      operator delete(elem);
    }
    if ( v5 != 0xFFFF )
    {
      CUtlRBTree<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
        &p_m_spawnGroupSoundscapes->m_Tree,
        v4);
      this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_pMemory[v6].m_Left = v5;
      this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_pMemory[v6].m_Right = this->m_spawnGroupSoundscapes.m_Tree.m_FirstFree;
      --this->m_spawnGroupSoundscapes.m_Tree.m_NumElements;
      this->m_spawnGroupSoundscapes.m_Tree.m_FirstFree = v5;
    }
  }
}


// CSoundscapeSystem::ActiveSpawnGroupChanged  (line 286, @0x00000000023a7f70, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int, CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int>, short unsigned int> >::Find, CSoundscapeSystem::ReassignSoundscapeIndicesForEntities, CSoundscapeSystem::CacheClusterInfoForSpawnGroup, CStringRegistry::GetNumStrings
void __fastcall CSoundscapeSystem::ActiveSpawnGroupChanged(
        CSoundscapeSystem *const this,
        const EventActiveSpawnGroupChanged_t *const msg)
{
  unsigned __int16 v4; // ax
  CSoundscapeSystem::SoundscapeInfo_t *elem; // rdi
  CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  search.key = msg->m_SpawnGroupHandle;
  v4 = CUtlRBTree<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_spawnGroupSoundscapes.m_Tree,
         &search);
  if ( v4 == 0xFFFF )
  {
    this->m_pActiveSpawnGroupSoundscapes = 0;
    this->m_nSpawnGroupSoundscapeCount = 0;
  }
  else
  {
    elem = this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_pMemory[v4].m_Data.elem;
    this->m_pActiveSpawnGroupSoundscapes = elem;
    this->m_nSpawnGroupSoundscapeCount = CStringRegistry::GetNumStrings(&elem->m_soundscapes);
  }
  CSoundscapeSystem::ReassignSoundscapeIndicesForEntities(this);
  CSoundscapeSystem::CacheClusterInfoForSpawnGroup(this, msg->m_SpawnGroupHandle);
}


// CSoundscapeSystem::ReassignSoundscapeIndicesForEntities  (line 304, @0x0000000002398170, libserver.so)
// calls: CEnvSoundscape::RecomputeSoundscapeIndex
// callers: CSoundscapeSystem::ReloadSoundscapes, CSoundscapeSystem::PostSpawnGroupUnload, CSoundscapeSystem::ActiveSpawnGroupChanged
void __fastcall CSoundscapeSystem::ReassignSoundscapeIndicesForEntities(CSoundscapeSystem *const this)
{
  int m_Size; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  CEnvSoundscape *v5; // rdi

  m_Size = this->m_soundscapeEntities.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 8LL * (m_Size - 1) + 8;
    do
    {
      v5 = this->m_soundscapeEntities.m_Memory.m_pMemory[v3 / 8];
      if ( v5 != 0 )
        CEnvSoundscape::RecomputeSoundscapeIndex(v5);
      v3 += 8LL;
    }
    while ( v3 != v4 );
  }
}


// CSoundscapeSystem::CacheClusterInfoForSpawnGroup  (line 316, @0x00000000023a77b0, libserver.so)  // inlines: AddToTail, BitVec_IsBitSet, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<short int>, Element, GrowMemory, IsInPVS, LeafCodeInfo_t, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<bbox_t, CUtlMemory<bbox_t, int> >::SetCount, CUtlVectorBase<clusterSoundscapeList_t, CUtlMemory<clusterSoundscapeList_t, int> >::SetCount, CBaseEntity::GetAbsOrigin, CalcSqrDistanceToAABB, CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::SetCount, CUtlMemory<short int, int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, CUtlMemory<bbox_t, int>::Purge, CUtlMemory<short int, int>::Purge, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...) (15 total)
// callers: CSoundscapeSystem::ActiveSpawnGroupChanged, CSoundscapeSystem::RefreshCacheClusters
// strings: "../../public/scenesystem/iscenesystem.h", "IsInPVS", "CheckOriginInPVS:  cluster would read past end of pvs data (cluster %d, offset %u:%u)\n"
void __fastcall CSoundscapeSystem::CacheClusterInfoForSpawnGroup(
        CSoundscapeSystem *const this,
        SpawnGroupHandle_t handle)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  int m_Size; // r13d
  CEnvSoundscape *v8; // rdi
  float m_flRadius; // xmm0_4
  void (__fastcall *v10)(__int64 *, IPVS *, _QWORD, _QWORD); // rbx
  unsigned int v11; // eax
  __int64 v12; // r14
  unsigned int v13; // r15d
  __int64 v14; // rbx
  __int64 v15; // r12
  int v16; // eax
  __int16 *v17; // rax
  __int64 v18; // r12
  int v19; // eax
  __int16 *v20; // rax
  int v21; // esi
  int v22; // edx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  _WORD *v25; // rcx
  __int64 v26; // rax
  int j; // ecx
  clusterSoundscapeList_t *v28; // rdx
  int firstSoundscape; // r8d
  int v30; // r9d
  __int64 v31; // rsi
  bool v32; // zf
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  IPVS *pPVS; // [rsp+20h] [rbp-130h]
  __int64 v38; // [rsp+30h] [rbp-120h]
  int i; // [rsp+38h] [rbp-118h]
  float flRadiusSq; // [rsp+68h] [rbp-E8h]
  int nClusterCount; // [rsp+6Ch] [rbp-E4h]
  Vector vPosition; // [rsp+70h] [rbp-E0h] BYREF
  CUtlVector<bbox_t,CUtlMemory<bbox_t,int> > clusterbounds; // [rsp+80h] [rbp-D0h] BYREF
  CUtlVector<short int,CUtlMemory<short int,int> > clusterIndexList; // [rsp+A0h] [rbp-B0h] BYREF
  CUtlVector<short int,CUtlMemory<short int,int> > soundscapeIndexList; // [rsp+C0h] [rbp-90h] BYREF
  __int64 v47; // [rsp+E0h] [rbp-70h] BYREF
  unsigned int v48; // [rsp+E8h] [rbp-68h]
  LeafCodeInfo_t v49; // [rsp+100h] [rbp-50h] BYREF

  clusterbounds.m_Size = 0;
  clusterbounds.m_Memory.m_pMemory = 0;
  clusterbounds.m_Memory.m_nAllocationCount = 0;
  clusterbounds.m_Memory.m_nGrowSize = 0;
  v4 = g_pPVSManager->GetPVS(handle);
  pPVS = v4;
  if ( v4 == 0 )
  {
    CUtlVectorBase<bbox_t,CUtlMemory<bbox_t,int>>::~CUtlVectorBase(&clusterbounds);
    return;
  }
  this->m_nPVSClusterSpawnGroup = handle;
  v5 = v4;
  nClusterCount = (*(*v4 + 40LL))(v4);
  CUtlVectorBase<bbox_t,CUtlMemory<bbox_t,int>>::SetCount(&clusterbounds, nClusterCount);
  (*(*v5 + 48LL))(v5, clusterbounds.m_Memory.m_pMemory, nClusterCount);
  CUtlVectorBase<clusterSoundscapeList_t,CUtlMemory<clusterSoundscapeList_t,int>>::SetCount(
    &this->m_soundscapesInCluster,
    nClusterCount);
  if ( nClusterCount > 0 )
  {
    v6 = 0;
    do
    {
      this->m_soundscapesInCluster.m_Memory.m_pMemory[v6 / 4].soundscapeCount = 0;
      this->m_soundscapesInCluster.m_Memory.m_pMemory[v6 / 4].firstSoundscape = 0;
      v6 += 4LL;
    }
    while ( v6 != 4LL * (nClusterCount - 1) + 4 );
  }
  clusterIndexList.m_Size = 0;
  clusterIndexList.m_Memory.m_pMemory = 0;
  clusterIndexList.m_Memory.m_nAllocationCount = 0;
  clusterIndexList.m_Memory.m_nGrowSize = 0;
  m_Size = this->m_soundscapeEntities.m_Size;
  soundscapeIndexList.m_Size = 0;
  soundscapeIndexList.m_Memory.m_pMemory = 0;
  soundscapeIndexList.m_Memory.m_nAllocationCount = 0;
  soundscapeIndexList.m_Memory.m_nGrowSize = 0;
  if ( m_Size <= 0 )
  {
    v21 = 0;
LABEL_28:
    CUtlVectorBase<unsigned short,CUtlMemory<unsigned short,int>>::SetCount(&this->m_soundscapeIndexList, v21);
    if ( nClusterCount > 0 )
    {
      v22 = 0;
      v23 = 0;
      do
      {
        this->m_soundscapesInCluster.m_Memory.m_pMemory[v23 / 4].firstSoundscape = v22;
        v24 = v23;
        v23 += 4LL;
        v25 = (&this->m_soundscapesInCluster.m_Memory.m_pMemory->soundscapeCount + v24);
        v22 += *v25;
        *v25 = 0;
      }
      while ( v23 != 4LL * (nClusterCount - 1) + 4 );
    }
    v26 = 0;
    for ( j = 0; soundscapeIndexList.m_Size > j; this->m_soundscapeIndexList.m_Memory.m_pMemory[v31] = firstSoundscape )
    {
      ++j;
      v28 = &this->m_soundscapesInCluster.m_Memory.m_pMemory[clusterIndexList.m_Memory.m_pMemory[v26]];
      firstSoundscape = v28->firstSoundscape;
      v30 = v28->soundscapeCount++;
      v31 = v30 + firstSoundscape;
      LOWORD(firstSoundscape) = soundscapeIndexList.m_Memory.m_pMemory[v26++];
    }
    soundscapeIndexList.m_Size = 0;
    v32 = (soundscapeIndexList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_bCacheDirty = 0;
    if ( v32 )
    {
      CUtlMemory<short,int>::Purge(&soundscapeIndexList.m_Memory);
      if ( (soundscapeIndexList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<short,int>::Purge(&soundscapeIndexList.m_Memory);
    }
    clusterIndexList.m_Size = 0;
    if ( (clusterIndexList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<short,int>::Purge(&clusterIndexList.m_Memory);
      if ( (clusterIndexList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<short,int>::Purge(&clusterIndexList.m_Memory);
    }
    clusterbounds.m_Size = 0;
    if ( (clusterbounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      goto LABEL_42;
    return;
  }
  v38 = 0;
  i = 0;
  while ( 1 )
  {
    v8 = this->m_soundscapeEntities.m_Memory.m_pMemory[v38];
    if ( v8 != 0 )
    {
      flRadiusSq = 3221225500.0;
      vPosition = *CBaseEntity::GetAbsOrigin(v8);
      m_flRadius = this->m_soundscapeEntities.m_Memory.m_pMemory[v38]->m_flRadius;
      if ( m_flRadius >= 0.0 )
        flRadiusSq = m_flRadius * m_flRadius;
      v10 = *(*pPVS + 32LL);
      v11 = (*(*pPVS + 56LL))(pPVS, &vPosition);
      v10(&v47, pPVS, v11, 0);
      v12 = v47;
      v13 = v48;
      if ( nClusterCount > 0 )
        break;
    }
LABEL_26:
    ++i;
    ++v38;
    if ( this->m_soundscapeEntities.m_Size <= i )
    {
      v21 = soundscapeIndexList.m_Size;
      goto LABEL_28;
    }
  }
  v14 = 0;
  while ( 1 )
  {
    while ( v13 == 0 || v12 == 0 )
    {
LABEL_12:
      if ( nClusterCount <= ++v14 )
        goto LABEL_26;
    }
    if ( v13 < v14 >> 3 )
      break;
    if ( ((1 << v14) & *(v12 + 4LL * (v14 >> 5))) == 0
      || flRadiusSq <= CalcSqrDistanceToAABB(
                         &clusterbounds.m_Memory.m_pMemory[v14].mins,
                         &clusterbounds.m_Memory.m_pMemory[v14].maxs,
                         &vPosition) )
    {
      goto LABEL_12;
    }
    ++this->m_soundscapesInCluster.m_Memory.m_pMemory[v14].soundscapeCount;
    v15 = clusterIndexList.m_Size;
    v16 = clusterIndexList.m_Size;
    if ( clusterIndexList.m_Size == clusterIndexList.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<short,int>::Grow(&clusterIndexList.m_Memory, 1);
      v16 = clusterIndexList.m_Size;
    }
    clusterIndexList.m_Size = v16 + 1;
    v17 = &clusterIndexList.m_Memory.m_pMemory[v15];
    if ( v17 != 0 )
      *v17 = v14;
    v18 = soundscapeIndexList.m_Size;
    v19 = soundscapeIndexList.m_Size;
    if ( soundscapeIndexList.m_Size == soundscapeIndexList.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<short,int>::Grow(&soundscapeIndexList.m_Memory, 1);
      v19 = soundscapeIndexList.m_Size;
    }
    soundscapeIndexList.m_Size = v19 + 1;
    v20 = &soundscapeIndexList.m_Memory.m_pMemory[v18];
    if ( v20 == 0 )
      goto LABEL_12;
    ++v14;
    *v20 = i;
    if ( nClusterCount <= v14 )
      goto LABEL_26;
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v49.m_szFile = "../../public/scenesystem/iscenesystem.h";
    v49.m_szFunction = "IsInPVS";
    v49.m_nLine = 265;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v49,
      "CheckOriginInPVS:  cluster would read past end of pvs data (cluster %d, offset %u:%u)\n",
      v14,
      v14 >> 3,
      v13);
  }
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v35, v36, v33, v34) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
LABEL_42:
  CUtlMemory<bbox_t,int>::Purge(&clusterbounds.m_Memory);
  if ( (clusterbounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<bbox_t,int>::Purge(&clusterbounds.m_Memory);
}


// CSoundscapeSystem::RefreshCacheClusters  (line 409, @0x00000000023a7ff0, libserver.so)
// calls: CSoundscapeSystem::CacheClusterInfoForSpawnGroup
// callers: CSoundscapeSystem::FrameUpdatePreEntityThink
void __fastcall CSoundscapeSystem::RefreshCacheClusters(CSoundscapeSystem *const this)
{
  SpawnGroupHandle_t m_nPVSClusterSpawnGroup; // esi

  if ( this->m_bCacheDirty )
  {
    m_nPVSClusterSpawnGroup = this->m_nPVSClusterSpawnGroup;
    if ( m_nPVSClusterSpawnGroup != -1 )
      CSoundscapeSystem::CacheClusterInfoForSpawnGroup(this, m_nPVSClusterSpawnGroup);
  }
}


// CSoundscapeSystem::GetSoundscapeIndex  (line 420, @0x0000000002398090, libserver.so)
// calls: CStringRegistry::GetStringID
// callers: CEnvSoundscape::Spawn, CEnvSoundscape::RecomputeSoundscapeIndex
int __fastcall CSoundscapeSystem::GetSoundscapeIndex(CSoundscapeSystem *const this, const char *pName)
{
  int result; // eax
  CSoundscapeSystem::SoundscapeInfo_t *m_pActiveSpawnGroupSoundscapes; // rdi
  int StringID; // eax

  result = CStringRegistry::GetStringID(&this->m_globalSoundscapes.m_soundscapes, pName);
  if ( result == -1 )
  {
    m_pActiveSpawnGroupSoundscapes = this->m_pActiveSpawnGroupSoundscapes;
    if ( m_pActiveSpawnGroupSoundscapes == 0 )
      return -1;
    StringID = CStringRegistry::GetStringID(&m_pActiveSpawnGroupSoundscapes->m_soundscapes, pName);
    if ( StringID == -1 )
      return -1;
    else
      return this->m_nGlobalSoundscapeCount + StringID;
  }
  return result;
}


// CSoundscapeSystem::IsValidIndex  (line 438, @0x00000000023981c0, libserver.so)
bool __fastcall CSoundscapeSystem::IsValidIndex(CSoundscapeSystem *const this, int index)
{
  bool result; // al

  result = 0;
  if ( index >= 0 )
    return index < this->m_nSpawnGroupSoundscapeCount + this->m_nGlobalSoundscapeCount;
  return result;
}


// CSoundscapeSystem::AddSoundscapeEntity  (line 445, @0x00000000023a4900, libserver.so)  // inlines: AddToTail, CopyConstruct<CEnvSoundscape*>, Element, GrowMemory, operator[]
// calls: CUtlVectorBase<CEnvSoundscape*, CUtlMemory<CEnvSoundscape*, int> >::Find, CUtlMemory<CEnvSoundscape*, int>::Grow
// callers: CEnvSoundscape::Activate
void __fastcall CSoundscapeSystem::AddSoundscapeEntity(CSoundscapeSystem *const this, CEnvSoundscape *pSoundscape)
{
  CUtlVector<CEnvSoundscape*,CUtlMemory<CEnvSoundscape*,int> > *p_m_soundscapeEntities; // r12
  int m_Size; // eax
  CEnvSoundscape *v5; // rdx
  int v6; // edx
  CEnvSoundscape **v7; // rcx
  int v8; // [rsp+4h] [rbp-2Ch]
  CEnvSoundscape *pSoundscapea; // [rsp+8h] [rbp-28h] BYREF
  CEnvSoundscape *src; // [rsp+18h] [rbp-18h] BYREF

  p_m_soundscapeEntities = &this->m_soundscapeEntities;
  pSoundscapea = pSoundscape;
  if ( CUtlVectorBase<CEnvSoundscape *,CUtlMemory<CEnvSoundscape *,int>>::Find(
         &this->m_soundscapeEntities,
         &pSoundscapea) == -1 )
  {
    src = 0;
    m_Size = CUtlVectorBase<CEnvSoundscape *,CUtlMemory<CEnvSoundscape *,int>>::Find(p_m_soundscapeEntities, &src);
    if ( m_Size == -1 )
    {
      m_Size = this->m_soundscapeEntities.m_Size;
      v6 = m_Size;
      if ( m_Size == this->m_soundscapeEntities.m_Memory.m_nAllocationCount )
      {
        v8 = this->m_soundscapeEntities.m_Size;
        CUtlMemory<CEnvSoundscape *,int>::Grow(&this->m_soundscapeEntities.m_Memory, 1);
        v6 = this->m_soundscapeEntities.m_Size;
        m_Size = v8;
      }
      this->m_soundscapeEntities.m_Size = v6 + 1;
      v7 = &this->m_soundscapeEntities.m_Memory.m_pMemory[m_Size];
      v5 = pSoundscapea;
      if ( v7 != 0 )
        *v7 = pSoundscapea;
    }
    else
    {
      v5 = pSoundscapea;
      this->m_soundscapeEntities.m_Memory.m_pMemory[m_Size] = pSoundscapea;
    }
    v5->m_soundscapeEntityListId = m_Size + 1;
    this->m_bCacheDirty = 1;
  }
}


// CSoundscapeSystem::RemoveSoundscapeEntity  (line 465, @0x000000000239b2a0, libserver.so)  // inlines: IsValidIndex, SetEntityListId, operator[]
// calls: CUtlVectorBase<CEnvSoundscape*, CUtlMemory<CEnvSoundscape*, int> >::Find
// callers: CEnvSoundscape::UpdateOnRemove
void __fastcall CSoundscapeSystem::RemoveSoundscapeEntity(CSoundscapeSystem *const this, CEnvSoundscape *pSoundscape)
{
  int v3; // eax
  CEnvSoundscape *pSoundscapea; // [rsp+8h] [rbp-18h] BYREF

  pSoundscapea = pSoundscape;
  pSoundscape->m_soundscapeEntityListId = -1;
  v3 = CUtlVectorBase<CEnvSoundscape *,CUtlMemory<CEnvSoundscape *,int>>::Find(
         &this->m_soundscapeEntities,
         &pSoundscapea);
  if ( v3 >= 0 && v3 < this->m_soundscapeEntities.m_Size )
  {
    this->m_soundscapeEntities.m_Memory.m_pMemory[v3] = 0;
    this->m_bCacheDirty = 1;
  }
}


// CSoundscapeSystem::FrameUpdatePreEntityThink  (line 478, @0x00000000023a8020, libserver.so)  // inlines: GetBool, GetInt, operator=, operator[]
// calls: CSoundscapeSystem::RefreshCacheClusters, UTIL_PlayerByIndex, CEnvSoundscape::UpdateForPlayer, CEntitySystem::GetActiveSpawnGroupHandle
void __fastcall CSoundscapeSystem::FrameUpdatePreEntityThink(
        CSoundscapeSystem *const this,
        const EventServerPreEntityThink_t *const msg)
{
  int v3; // ecx
  int maxClients; // esi
  int v5; // ebx
  int v6; // edx
  CBasePlayer *v7; // rax
  CBasePlayer *v8; // r12
  int m_Value; // eax
  CEnvSoundscape *v10; // rax
  double v11; // xmm0_8
  vec_t v12; // xmm1_4
  __int64 (__fastcall *v13)(IPVSManager *, _QWORD, Vector *); // r15
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  int v15; // eax
  clusterSoundscapeList_t *m_pMemory; // r8
  __int64 v17; // r12
  clusterSoundscapeList_t *v18; // rdx
  int v19; // r15d
  CEnvSoundscape *v20; // rdi
  CEnvSoundscape *pCurrent; // [rsp+8h] [rbp-88h]
  int maxPlayers; // [rsp+10h] [rbp-80h]
  int maxTraces; // [rsp+14h] [rbp-7Ch]
  int playerCount; // [rsp+18h] [rbp-78h]
  int traceCount; // [rsp+1Ch] [rbp-74h]
  ss_update_t update; // [rsp+30h] [rbp-60h] BYREF

  CSoundscapeSystem::RefreshCacheClusters(this);
  if ( this->m_soundscapeEntities.m_Size > 0 )
  {
    v3 = -(soundscape_debug.m_pParent->m_Value.m_nValue == 0);
    maxClients = gpGlobals->maxClients;
    maxTraces = (v3 & 0xFFFFD8F5) + 9999;
    maxPlayers = (v3 & 0xFFFFFFC1) + 65;
    if ( maxClients > 0 )
    {
      playerCount = 0;
      v5 = 0;
      traceCount = 0;
      do
      {
        v6 = (this->m_activeIndex + 1) % maxClients;
        this->m_activeIndex = v6;
        v7 = UTIL_PlayerByIndex((v6 + 1));
        v8 = v7;
        if ( v7 != 0 && (*(v7->_vptr_IHandleEntity + 100))(v7) != 0 )
        {
          m_Value = v8->m_Local.m_audio.soundscapeEntityListIndex.m_Value;
          if ( m_Value <= 0 || m_Value > this->m_soundscapeEntities.m_Size )
            v10 = 0;
          else
            v10 = this->m_soundscapeEntities.m_Memory.m_pMemory[m_Value - 1];
          update.pCurrentSoundscape = v10;
          update.pPlayer = v8;
          pCurrent = v10;
          v11 = (*(v8->_vptr_IHandleEntity + 167))(v8);
          update.bInRange = 0;
          update.playerPosition.z = v12;
          *&update.playerPosition.x = v11;
          update.currentDistance = 0.0;
          update.traceCount = 0;
          if ( pCurrent != 0 )
            CEnvSoundscape::UpdateForPlayer(pCurrent, &update);
          v13 = *(g_pPVSManager->_vptr_IPVSManager + 4);
          ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
          v15 = v13(g_pPVSManager, ActiveSpawnGroupHandle, &update.playerPosition);
          if ( v15 >= 0 && v15 < this->m_soundscapesInCluster.m_Size )
          {
            m_pMemory = this->m_soundscapesInCluster.m_Memory.m_pMemory;
            v17 = v15;
            v18 = &m_pMemory[v17];
            if ( m_pMemory[v17].soundscapeCount != 0 )
            {
              v19 = 0;
              do
              {
                v20 = this->m_soundscapeEntities.m_Memory.m_pMemory[this->m_soundscapeIndexList.m_Memory.m_pMemory[v19 + v18->firstSoundscape]];
                if ( v20 != update.pCurrentSoundscape )
                {
                  CEnvSoundscape::UpdateForPlayer(v20, &update);
                  m_pMemory = this->m_soundscapesInCluster.m_Memory.m_pMemory;
                }
                v18 = &m_pMemory[v17];
                ++v19;
              }
              while ( m_pMemory[v17].soundscapeCount > v19 );
            }
          }
          ++playerCount;
          traceCount += update.traceCount;
        }
        ++v5;
        maxClients = gpGlobals->maxClients;
      }
      while ( maxClients > v5 && traceCount <= maxTraces && playerCount <= maxPlayers );
    }
  }
}


// CSoundscapeSystem::AddSoundscapeSounds  (line 550, @0x00000000023981e0, libserver.so)
void __fastcall CSoundscapeSystem::AddSoundscapeSounds(
        CSoundscapeSystem *const this,
        KeyValues *pSoundscape,
        int soundscapeIndex,
        CSoundscapeSystem::SoundscapeInfo_t *pInfo)
{
  ;
}


// CSoundscapeSystem::PrecacheSounds  (line 612, @0x00000000023981f0, libserver.so)
void __fastcall CSoundscapeSystem::PrecacheSounds(
        CSoundscapeSystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        const char *pSoundscapeName,
        const CEntityPrecacheContext *pContext)
{
  ;
}


