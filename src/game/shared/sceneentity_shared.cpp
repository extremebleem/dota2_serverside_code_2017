// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/sceneentity_shared.cpp:51
class CFlexSceneFileManager : public CAutoGameSystem, public IFlexSceneFileManager {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	typedef CAutoGameSystem BaseClass;
	CFlexSceneFileManager(CFlexSceneFileManager &);
	CFlexSceneFileManager(const CFlexSceneFileManager &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CFlexSceneFileManager *);
	CFlexSceneFileManager();
	virtual bool InitRecursive(const char *);
	virtual bool Init();
	virtual void Shutdown();
	void EnsureTranslations(CBaseFlex *, const flexsettinghdr_t *);
	virtual const flexsettinghdr_t * FindSceneFile(CBaseFlex *, const char *, bool);

private:

	void DeleteSceneFiles();
	virtual ~CFlexSceneFileManager();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[40] InitRecursive
	// vtable[0] Init
	// vtable[2] Shutdown
	// vtable[41] FindSceneFile
	// sizeof = 80
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// Scene_Printf  (line 22, @0x000000000238d0d0, libserver.so)  // inlines: GetInt, curtime
// calls: V_vsnprintf, Msg, __stack_chk_fail
// callers: CBaseFlex::AddSceneEvent, LocalScene_Printf
// strings: "sv", "%8.3f[%d] %s:  %s"
void Scene_Printf(const char *pFormat, ...)
{
  int m_nValue; // eax
  CGlobalVars *v2; // rbx
  __int64 tickcount; // rsi
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  unsigned int v5; // [rsp+Ch] [rbp-20F4h]
  va_list marker; // [rsp+18h] [rbp-20E8h] BYREF
  char msg[8192]; // [rsp+30h] [rbp-20D0h] BYREF
  unsigned __int64 v8; // [rsp+2038h] [rbp-C8h]

  v8 = __readfsqword(0x28u);
  m_nValue = scene_print.m_pParent->m_Value.m_nValue;
  if ( m_nValue != 0 && m_nValue <= 2 )
  {
    va_start(marker, pFormat);
    V_vsnprintf(msg, 0x2000, pFormat, marker);
    v2 = gpGlobals;
    tickcount = gpGlobals->tickcount;
    if ( *&gpGlobals->m_bInSimulation == 0 )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v5 = gpGlobals->tickcount;
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        tickcount = v5;
      }
    }
    Msg("%8.3f[%d] %s:  %s", tickcount, "sv", msg, v2->m_flCurrentTime);
  }
}


// CFlexSceneFileManager::~CFlexSceneFileManager  (line 51, @0x00000000023b6970, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlDict<const flexsettinghdr_t*, int>::Purge, CUtlRBTree<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, IGameSystem::~IGameSystem
void __fastcall CFlexSceneFileManager::~CFlexSceneFileManager(CFlexSceneFileManager *const this)
{
  CUtlDict<const flexsettinghdr_t*,int> *p_m_FileList; // r12

  p_m_FileList = &this->m_FileList;
  this->_vptr_IGameSystem = &off_40A8A30;
  this->_vptr_IFlexSceneFileManager = &off_40A8B90;
  CUtlDict<flexsettinghdr_t const*,int>::Purge(&this->m_FileList);
  CUtlRBTree<CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&p_m_FileList->m_Elements.m_Tree);
  if ( (this->m_FileList.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_FileList.m_Elements.m_Tree.m_Elements);
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CFlexSceneFileManager::~CFlexSceneFileManager  (line 51, @0x00000000023b69d0, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CFlexSceneFileManager, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlDict<const flexsettinghdr_t*, int>::Purge, CUtlRBTree<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, IGameSystem::~IGameSystem, operator delete
void __fastcall CFlexSceneFileManager::~CFlexSceneFileManager(CFlexSceneFileManager *const this)
{
  CUtlDict<const flexsettinghdr_t*,int> *p_m_FileList; // r12

  p_m_FileList = &this->m_FileList;
  this->_vptr_IGameSystem = &off_40A8A30;
  this->_vptr_IFlexSceneFileManager = &off_40A8B90;
  CUtlDict<flexsettinghdr_t const*,int>::Purge(&this->m_FileList);
  CUtlRBTree<CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&p_m_FileList->m_Elements.m_Tree);
  if ( (this->m_FileList.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_FileList.m_Elements.m_Tree.m_Elements);
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CFlexSceneFileManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 53, @0x00000000023a8fb0, libserver.so)
void __fastcall CFlexSceneFileManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CFlexSceneFileManager *const this)
{
  ;
}


// CFlexSceneFileManager::DoesGameSystemReallocate  (line 53, @0x00000000023a8fc0, libserver.so)
// globals: CFlexSceneFileManager::sm_Factory
bool __fastcall CFlexSceneFileManager::DoesGameSystemReallocate(const CFlexSceneFileManager *const this)
{
  return (*(CFlexSceneFileManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CFlexSceneFileManager::sm_Factory);
}


// CFlexSceneFileManager::SetGameSystemGlobalPtrs  (line 53, @0x00000000023a8fe0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CFlexSceneFileManager::sm_Factory
void __fastcall CFlexSceneFileManager::SetGameSystemGlobalPtrs(CFlexSceneFileManager *const this, void *pValue)
{
  if ( CFlexSceneFileManager::sm_Factory != 0 )
    (*(CFlexSceneFileManager::sm_Factory->_vptr_IGameSystemFactory + 7))(CFlexSceneFileManager::sm_Factory, pValue);
}


// CFlexSceneFileManager::InitRecursive  (line 61, @0x00000000023aaf50, libserver.so)  // inlines: FileFindHandle_t, V_StripExtension<long unsigned int>, _V_strcmp, ~FileFindHandle_t
// calls: V_snprintf, V_GetFileExtension, V_stricmp_fast, _V_StripExtension, V_FixSlashes, _Unwind_Resume, __stack_chk_fail
// strings: "%s/*.*", "expressions", "%s/%s"
bool __fastcall CFlexSceneFileManager::InitRecursive(CFlexSceneFileManager *const this, const char *pFolder)
{
  const char *v3; // rax
  const char *i; // rbx
  __int64 FileExtension; // rax
  const char *pFoldera; // [rsp+18h] [rbp-378h]
  FileFindHandle_t fh; // [rsp+20h] [rbp-370h] BYREF
  char directory[272]; // [rsp+30h] [rbp-360h] BYREF
  char fullFileName[260]; // [rsp+140h] [rbp-250h] BYREF
  char folderpath[264]; // [rsp+250h] [rbp-140h] BYREF
  unsigned __int64 v12; // [rsp+358h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  v3 = "expressions";
  if ( pFolder != 0 )
    v3 = pFolder;
  pFoldera = v3;
  V_snprintf(directory, 260, "%s/*.*", v3);
  fh.m_pFileSystem = 0;
  fh.m_nFindDataIndex = 0;
  for ( i = (*(g_pFullFileSystem->_vptr_IAppSystem + 37))(g_pFullFileSystem, directory, &fh);
        i != 0;
        i = (*(g_pFullFileSystem->_vptr_IAppSystem + 38))(g_pFullFileSystem, &fh) )
  {
    if ( strcmp(i, ".") != 0 && strcmp(i, "..") != 0 )
    {
      if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 39))(g_pFullFileSystem, &fh) != 0 )
      {
        V_snprintf(folderpath, 260, "%s/%s", pFoldera, i);
        (*(this->_vptr_IGameSystem + 40))(this, folderpath);
      }
      else
      {
        FileExtension = V_GetFileExtension(i);
        if ( FileExtension == 0 || V_stricmp_fast(FileExtension, "vfe") == 0 )
        {
          V_snprintf(fullFileName, 260, "%s/%s", pFoldera, i);
          _V_StripExtension(&fullFileName[12], folderpath, 260);
          V_FixSlashes(folderpath, 47);
          (*(this->_vptr_IGameSystem + 41))(this, 0, folderpath, 1);
        }
      }
    }
  }
  (*(g_pFullFileSystem->_vptr_IAppSystem + 40))(g_pFullFileSystem, &fh);
  if ( fh.m_pFileSystem != 0 )
    (*(fh.m_pFileSystem->_vptr_IAppSystem + 40))(fh.m_pFileSystem, &fh);
  return 1;
}


// CFlexSceneFileManager::Init  (line 111, @0x00000000023a9010, libserver.so)
// strings: "phonemes", "phonemes_weak", "phonemes_strong"
bool __fastcall CFlexSceneFileManager::Init(CFlexSceneFileManager *const this)
{
  (*(this->_vptr_IGameSystem + 41))(this, 0, "phonemes", 1);
  (*(this->_vptr_IGameSystem + 41))(this, 0, "phonemes_weak", 1);
  (*(this->_vptr_IGameSystem + 41))(this, 0, "phonemes_strong", 1);
  (*(this->_vptr_IGameSystem + 40))(this, 0);
  return 1;
}


// CFlexSceneFileManager::Shutdown  (line 207, @0x00000000023b68b0, libserver.so)  // inlines: DeleteSceneFiles, First, FirstInorder, LeftChild, Next, NextInorder, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlDict<const flexsettinghdr_t*, int>::Purge
void __fastcall CFlexSceneFileManager::Shutdown(CFlexSceneFileManager *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,const flexsettinghdr_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_FileList.m_Elements.m_Tree.m_Root;
  if ( m_Root == -1 )
  {
    CUtlDict<flexsettinghdr_t const*,int>::Purge(&this->m_FileList);
  }
  else
  {
    m_pMemory = this->m_FileList.m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(filesystem->_vptr_IAppSystem + 93))(filesystem, m_pMemory[v4].m_Data.elem);
      m_Root = CUtlRBTree<CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_FileList.m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_FileList.m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
    CUtlDict<flexsettinghdr_t const*,int>::Purge(&this->m_FileList);
  }
}


// CFlexSceneFileManager::FindSceneFile  (line 227, @0x00000000023ba2b0, libserver.so)  // inlines: Element, EnsureTranslations, Find, LeftChild, RightChild, _V_strcpy, operator(), operator[], strcpy
// calls: __strcpy_chk, V_FixSlashes, UTIL_VarArgs, CUtlDict<const flexsettinghdr_t*, int>::Insert, CBaseFlex::EnsureTranslations, __stack_chk_fail
// strings: "expressions/%s.vfe"
const flexsettinghdr_t *__fastcall CFlexSceneFileManager::FindSceneFile(
        CFlexSceneFileManager *const this,
        CBaseFlex *instance,
        const char *filename,
        bool allowBlockingIO)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,const flexsettinghdr_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  __int64 v8; // r15
  unsigned int (__fastcall *v9)(IFileSystem *, char *, char *, const flexsettinghdr_t **, _QWORD, __int64, _DWORD, _DWORD, _QWORD); // r13
  char *v10; // rax
  CBaseFlex *v11; // rdi
  const flexsettinghdr_t *result; // rax
  const flexsettinghdr_t *pFlexSettings; // [rsp+38h] [rbp-158h] BYREF
  const char *filenamea; // [rsp+40h] [rbp-150h] BYREF
  char szFilename[264]; // [rsp+50h] [rbp-140h] BYREF
  unsigned __int64 v18; // [rsp+158h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  __strcpy_chk(szFilename, filename, 260);
  V_FixSlashes(szFilename, 47);
  pFlexSettings = 0;
  if ( filename != 0 )
  {
    filenamea = filename;
    m_Root = this->m_FileList.m_Elements.m_Tree.m_Root;
    if ( m_Root != -1 )
    {
      m_pMemory = this->m_FileList.m_Elements.m_Tree.m_Elements.m_pMemory;
      while ( 1 )
      {
        while ( 1 )
        {
          v8 = m_Root;
          if ( !this->m_FileList.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&filenamea, &m_pMemory[v8].m_Data) )
            break;
          m_pMemory = this->m_FileList.m_Elements.m_Tree.m_Elements.m_pMemory;
          m_Root = m_pMemory[m_Root].m_Left;
          if ( m_Root == -1 )
            goto LABEL_8;
        }
        if ( !this->m_FileList.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
                &this->m_FileList.m_Elements.m_Tree.m_Elements.m_pMemory[v8].m_Data,
                &filenamea) )
          break;
        m_pMemory = this->m_FileList.m_Elements.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[v8].m_Right;
        if ( m_Root == -1 )
          goto LABEL_8;
      }
      v11 = instance;
      result = this->m_FileList.m_Elements.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem;
      pFlexSettings = result;
      if ( instance == 0 )
        return result;
LABEL_11:
      CBaseFlex::EnsureTranslations(v11, result);
      return pFlexSettings;
    }
  }
LABEL_8:
  if ( !allowBlockingIO )
    return 0;
  v9 = *(filesystem->_vptr_IAppSystem + 80);
  v10 = UTIL_VarArgs("expressions/%s.vfe", szFilename);
  if ( v9(filesystem, v10, "GAME", &pFlexSettings, 0, 1, 0, 0, 0) == 0 )
    return 0;
  CUtlDict<flexsettinghdr_t const*,int>::Insert(&this->m_FileList, szFilename, &pFlexSettings);
  v11 = instance;
  result = pFlexSettings;
  if ( instance != 0 )
    goto LABEL_11;
  return result;
}


// CFlexSceneFileManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 327, @0x000000000238e060, libserver.so)
void __cdecl CFlexSceneFileManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


