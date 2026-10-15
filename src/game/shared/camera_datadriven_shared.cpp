
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDataDrivenCameraLoader::CDataDrivenCameraLoader  (line 23, @0x0000000002194330, libserver.so)  // inlines: CUtlString
void __fastcall CDataDrivenCameraLoader::CDataDrivenCameraLoader(
        CDataDrivenCameraLoader *const this,
        IDataDrivenCameraLoaderObserver *pObserver)
{
  this->m_pObserver = pObserver;
  this->m_flFOWAmount = 0.0;
  this->m_strCameraName.m_pString = 0;
  *&this->m_flPlaybackDuration = 0;
}


// CDataDrivenCameraLoader::GetPlaybackDurationFromFile  (line 32, @0x00000000021b0690, libserver.so)  // inlines: CDataDrivenCameraLoader, CUtlString, Element, Find, FindInsertionPosition, GetBool, GetInt, Insert, InsertAt, IsIdxValid, IsValidIndex, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy, ~CDataDrivenCameraLoader, ~CUtlString
// calls: CDataDrivenCameraLoader::LoadFromFile, strlen, strcpy, CUtlRBTree<CUtlMap<char const*, float, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, float, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, float, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, float, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, float, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, float, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent, CUtlString::FreeMemoryBlock, Warning, _Unwind_Resume
// strings: "Failed to load camera from file, '%s'\n"
// globals: CDataDrivenCameraLoader::sm_dictPlaybackDurations
bool __fastcall CDataDrivenCameraLoader::GetPlaybackDurationFromFile(const char *pszDataFile, float *out_pDuration)
{
  int m_Root; // r15d
  UtlRBTreeNode_t<CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  __int64 v6; // r12
  UtlRBTreeNode_t<CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v7; // rax
  float elem; // xmm0_4
  bool result; // al
  size_t v10; // rax
  char *v11; // rax
  char *v12; // rax
  int v13; // r13d
  int m_Left; // eax
  bool v15; // r12
  int v16; // r15d
  float flPlaybackDuration; // [rsp+Ch] [rbp-64h]
  bool flPlaybackDurationa; // [rsp+Ch] [rbp-64h]
  CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+10h] [rbp-60h] BYREF
  CDataDrivenCameraLoader Loader; // [rsp+20h] [rbp-50h] BYREF

  m_Root = -1;
  *out_pDuration = 0.0;
  if ( pszDataFile != 0 )
  {
    m_Root = CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_Root;
    Loader.m_pObserver = pszDataFile;
    if ( CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_Root == -1 )
    {
LABEL_8:
      m_Root = -1;
    }
    else
    {
      m_pMemory = CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_Elements.m_pMemory;
      while ( 1 )
      {
        while ( 1 )
        {
          v6 = m_Root;
          if ( !CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
                  &Loader,
                  &m_pMemory[v6].m_Data.key) )
            break;
          m_pMemory = CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_Elements.m_pMemory;
          m_Root = CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Left;
          if ( m_Root == -1 )
            goto LABEL_8;
        }
        if ( !CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
                &CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_Elements.m_pMemory[v6].m_Data.key,
                &Loader) )
          break;
        m_pMemory = CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_Elements.m_pMemory;
        m_Root = CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_Elements.m_pMemory[v6].m_Right;
        if ( m_Root == -1 )
          goto LABEL_8;
      }
    }
  }
  if ( camera_datadriven_disable_cache.m_pParent->m_Value.m_nValue != 0
    || m_Root >= CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_Elements.m_nAllocationCount
    || m_Root > CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_LastAlloc.index
    || m_Root < 0
    || (v7 = &CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_Elements.m_pMemory[m_Root],
        m_Root == v7->m_Left) )
  {
    Loader.m_pObserver = 0;
    Loader.m_flFOWAmount = 0.0;
    Loader.m_strCameraName.m_pString = 0;
    Loader.m_flPlaybackDuration = 0.0;
    Loader.m_eEeasing = CDataDrivenCameraLoader::EEaseType::k_EEaseType_Invalid;
    if ( CDataDrivenCameraLoader::LoadFromFile(&Loader, pszDataFile) )
    {
      flPlaybackDuration = Loader.m_flPlaybackDuration;
    }
    else
    {
      Warning("Failed to load camera from file, '%s'\n", pszDataFile);
      flPlaybackDuration = -1.0;
    }
    if ( pszDataFile != 0 )
    {
      v10 = strlen(pszDataFile);
      v11 = (**g_pMemAlloc)(g_pMemAlloc, v10 + 1);
      v12 = strcpy(v11, pszDataFile);
    }
    else
    {
      v12 = 0;
    }
    v13 = CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_Root;
    pCopyFrom.key = v12;
    pCopyFrom.elem = flPlaybackDuration;
    if ( CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_Root != -1 )
    {
      while ( 1 )
      {
        if ( CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
               &pCopyFrom.key,
               &CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_Elements.m_pMemory[v13].m_Data.key) )
        {
          m_Left = CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_Elements.m_pMemory[v13].m_Left;
          v15 = 1;
          if ( m_Left == -1 )
            goto LABEL_27;
        }
        else
        {
          m_Left = CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_Elements.m_pMemory[v13].m_Right;
          v15 = 0;
          if ( m_Left == -1 )
            goto LABEL_27;
        }
        v13 = m_Left;
      }
    }
    v15 = 0;
LABEL_27:
    v16 = CUtlRBTree<CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
            &CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree,
            &pCopyFrom);
    CUtlRBTree<CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
      &CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree,
      v16,
      v13,
      v15);
    result = 0;
    ++CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_NumElements;
    if ( v16 < CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_Elements.m_nAllocationCount
      && v16 <= CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_LastAlloc.index
      && v16 >= 0
      && v16 != CDataDrivenCameraLoader::sm_dictPlaybackDurations.m_Elements.m_Tree.m_Elements.m_pMemory[v16].m_Left )
    {
      *out_pDuration = flPlaybackDuration;
      result = flPlaybackDuration >= 0.0;
    }
    if ( Loader.m_strCameraName.m_pString != 0 )
    {
      flPlaybackDurationa = result;
      CUtlString::FreeMemoryBlock(&Loader.m_strCameraName);
      return flPlaybackDurationa;
    }
  }
  else
  {
    elem = v7->m_Data.elem;
    result = 0;
    if ( elem >= 0.0 )
    {
      *out_pDuration = elem;
      return 1;
    }
  }
  return result;
}


// CDataDrivenCameraLoader::LoadFromFile  (line 83, @0x00000000021943f0, libserver.so)  // inlines: atof
// calls: KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::GetName, CUtlString::operator=, KeyValues::GetFloat, KeyValues::GetString, CDataDrivenCameraLoader::GetEaseTypeFromString, KeyValues::FindKey, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, strtod, Warning (16 total)
// callers: CDataDrivenCameraLoader::GetPlaybackDurationFromFile
// strings: "fow_amount", "easing", "keyframes", "Unable to load '%s'\n", "Invalid ease type specified. No ease type is fine. Value specified: \"%s\"\n", "Missing keyframe data\n" (7 total)
bool __fastcall CDataDrivenCameraLoader::LoadFromFile(CDataDrivenCameraLoader *const this, const char *pszDataFile)
{
  IBaseFileSystem *v4; // rsi
  bool v5; // r13
  const char *Name; // rax
  float v7; // xmm1_4
  const char *String; // rbx
  CDataDrivenCameraLoader::EEaseType EaseTypeFromString; // eax
  float v10; // xmm1_4
  float Float; // xmm0_4
  KeyValues *Key; // rax
  KeyValues *v13; // rbx
  KeyValues *FirstTrueSubKey; // rax
  KeyValues *NextTrueSubKey; // rbx
  const char *v16; // rax
  float v17; // xmm0_4
  IDataDrivenCameraLoaderObserver *m_pObserver; // rdi
  float flGlobalTimeScale; // [rsp+4h] [rbp-4Ch]
  double v21; // [rsp+8h] [rbp-48h]
  KeyValues kvCameraData; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-28h]

  v23 = __readfsqword(0x28u);
  if ( pszDataFile == 0 )
    return 0;
  KeyValues::KeyValues(&kvCameraData, "camera");
  v4 = 0;
  if ( g_pFullFileSystem != 0 )
    v4 = &g_pFullFileSystem->IBaseFileSystem;
  v5 = KeyValues::LoadFromFile(&kvCameraData, v4, pszDataFile, "MOD", 0);
  if ( v5 )
  {
    Name = KeyValues::GetName(&kvCameraData);
    CUtlString::operator=(&this->m_strCameraName, Name);
    this->m_flFOWAmount = KeyValues::GetFloat(&kvCameraData, "fow_amount", v7);
    String = KeyValues::GetString(&kvCameraData, "easing", "linear", 0, 0);
    EaseTypeFromString = CDataDrivenCameraLoader::GetEaseTypeFromString(String);
    if ( EaseTypeFromString != CDataDrivenCameraLoader::EEaseType::k_EEaseType_Invalid )
    {
      this->m_eEeasing = EaseTypeFromString;
      Float = KeyValues::GetFloat(&kvCameraData, "timescale", v10);
      if ( Float == 0.0 )
        flGlobalTimeScale = 1.0;
      else
        flGlobalTimeScale = 1.0 / Float;
      Key = KeyValues::FindKey(&kvCameraData, "keyframes", 0);
      v13 = Key;
      if ( Key != 0 )
      {
        FirstTrueSubKey = KeyValues::GetFirstTrueSubKey(Key);
        if ( FirstTrueSubKey != 0 && KeyValues::GetNextTrueSubKey(FirstTrueSubKey) != 0 )
        {
          NextTrueSubKey = KeyValues::GetFirstTrueSubKey(v13);
          if ( NextTrueSubKey != 0 )
          {
            do
            {
              v16 = KeyValues::GetName(NextTrueSubKey);
              v21 = strtod(v16, 0);
              NextTrueSubKey = KeyValues::GetNextTrueSubKey(NextTrueSubKey);
            }
            while ( NextTrueSubKey != 0 );
            v17 = v21 * flGlobalTimeScale;
          }
          else
          {
            v17 = 0.0;
          }
          m_pObserver = this->m_pObserver;
          this->m_flPlaybackDuration = v17;
          if ( m_pObserver == 0 || (**m_pObserver)(m_pObserver, &kvCameraData) != 0 )
            goto LABEL_19;
        }
        else
        {
          DevMsg("Not enough keyframes.\n");
        }
      }
      else
      {
        DevMsg("Missing keyframe data\n");
      }
    }
    else
    {
      DevMsg("Invalid ease type specified. No ease type is fine. Value specified: \"%s\"\n", String);
    }
  }
  else
  {
    Warning("Unable to load '%s'\n", pszDataFile);
  }
  v5 = 0;
LABEL_19:
  KeyValues::~KeyValues(&kvCameraData);
  return v5;
}


// CDataDrivenCameraLoader::GetEaseTypeFromString  (line 279, @0x0000000002194360, libserver.so)
// calls: V_stricmp_fast
// callers: CDataDrivenCameraLoader::LoadFromFile
// strings: "ease-in-ease-out", "ease-in"
CDataDrivenCameraLoader::EEaseType __fastcall CDataDrivenCameraLoader::GetEaseTypeFromString(const char *pchEaseType)
{
  CDataDrivenCameraLoader::EEaseType result; // eax
  int v3; // edx
  int v4; // edx

  if ( pchEaseType == 0 || *pchEaseType == 0 || V_stricmp_fast(pchEaseType, "linear") == 0 )
    return CDataDrivenCameraLoader::EEaseType::k_EEaseType_Linear;
  v3 = V_stricmp_fast(pchEaseType, "ease-in-ease-out");
  result = CDataDrivenCameraLoader::EEaseType::k_EEaseType_EaseInEaseOut;
  if ( v3 != 0 )
  {
    v4 = V_stricmp_fast(pchEaseType, "ease-in");
    result = CDataDrivenCameraLoader::EEaseType::k_EEaseType_EaseIn;
    if ( v4 != 0 )
      return V_stricmp_fast(pchEaseType, "ease-out") == 0 ? 4 : 0;
  }
  return result;
}


