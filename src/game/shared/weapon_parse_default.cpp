// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/weapon_parse_default.cpp:22
class CWeaponScriptParser : public CAutoGameSystem, public IWeaponInfo {
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
	CWeaponScriptParser(CWeaponScriptParser &);
	CWeaponScriptParser(const CWeaponScriptParser &);
	CWeaponScriptParser();

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CWeaponScriptParser *);
	virtual CAmmoDef * GetAmmoDef();
	virtual HWeaponInfo LookupWeaponInfo(const char *);

private:

	FileWeaponInfo_t * GetFileWeaponInfoFromHandle(HWeaponInfo);
	virtual bool Init();
	virtual void Shutdown();
	void LoadFileWeaponInfoDatabase(const unsigned char *);
	bool ReadWeaponDataFromFileForSlot(const char *, HWeaponInfo *, const unsigned char *);
	KeyValues * ReadEncryptedKVFile(const char *, const unsigned char *);
	virtual ~CWeaponScriptParser();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[40] GetAmmoDef
	// vtable[41] LookupWeaponInfo
	// vtable[0] Init
	// vtable[2] Shutdown
	// sizeof = 104
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CWeaponScriptParser::~CWeaponScriptParser  (line 22, @0x000000000213c250, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlDict<FileWeaponInfo_t*, int>::Purge, CUtlRBTree<CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, IGameSystem::~IGameSystem, CUtlMemory<FileWeaponInfo_t*, int>::Purge
void __fastcall CWeaponScriptParser::~CWeaponScriptParser(CWeaponScriptParser *const this)
{
  CUtlDict<FileWeaponInfo_t*,int> *p_m_WeaponLookup; // r12
  bool v3; // zf

  p_m_WeaponLookup = &this->m_WeaponLookup;
  this->_vptr_IGameSystem = &off_3FFD030;
  this->_vptr_IWeaponInfo = &off_3FFD190;
  CUtlDict<FileWeaponInfo_t *,int>::Purge(&this->m_WeaponLookup);
  CUtlRBTree<CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&p_m_WeaponLookup->m_Elements.m_Tree);
  if ( (this->m_WeaponLookup.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_WeaponLookup.m_Elements.m_Tree.m_Elements);
  v3 = (this->m_WeaponDatabase.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_WeaponDatabase.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<FileWeaponInfo_t *,int>::Purge(&this->m_WeaponDatabase.m_Memory);
    if ( (this->m_WeaponDatabase.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<FileWeaponInfo_t *,int>::Purge(&this->m_WeaponDatabase.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CWeaponScriptParser::~CWeaponScriptParser  (line 22, @0x000000000213c2e0, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~CWeaponScriptParser
// calls: CUtlDict<FileWeaponInfo_t*, int>::Purge, CUtlRBTree<CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, IGameSystem::~IGameSystem, operator delete, CUtlMemory<FileWeaponInfo_t*, int>::Purge
void __fastcall CWeaponScriptParser::~CWeaponScriptParser(CWeaponScriptParser *const this)
{
  CUtlDict<FileWeaponInfo_t*,int> *p_m_WeaponLookup; // r12
  bool v3; // zf

  p_m_WeaponLookup = &this->m_WeaponLookup;
  this->_vptr_IGameSystem = &off_3FFD030;
  this->_vptr_IWeaponInfo = &off_3FFD190;
  CUtlDict<FileWeaponInfo_t *,int>::Purge(&this->m_WeaponLookup);
  CUtlRBTree<CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&p_m_WeaponLookup->m_Elements.m_Tree);
  if ( (this->m_WeaponLookup.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_WeaponLookup.m_Elements.m_Tree.m_Elements);
  v3 = (this->m_WeaponDatabase.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_WeaponDatabase.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<FileWeaponInfo_t *,int>::Purge(&this->m_WeaponDatabase.m_Memory);
    if ( (this->m_WeaponDatabase.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<FileWeaponInfo_t *,int>::Purge(&this->m_WeaponDatabase.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CWeaponScriptParser::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 24, @0x00000000021396c0, libserver.so)
void __fastcall CWeaponScriptParser::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CWeaponScriptParser *const this)
{
  ;
}


// CWeaponScriptParser::DoesGameSystemReallocate  (line 24, @0x00000000021396d0, libserver.so)
// globals: CWeaponScriptParser::sm_Factory
bool __fastcall CWeaponScriptParser::DoesGameSystemReallocate(const CWeaponScriptParser *const this)
{
  return (*(CWeaponScriptParser::sm_Factory->_vptr_IGameSystemFactory + 8))(CWeaponScriptParser::sm_Factory);
}


// CWeaponScriptParser::SetGameSystemGlobalPtrs  (line 24, @0x00000000021396f0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CWeaponScriptParser::sm_Factory
void __fastcall CWeaponScriptParser::SetGameSystemGlobalPtrs(CWeaponScriptParser *const this, void *pValue)
{
  if ( CWeaponScriptParser::sm_Factory != 0 )
    (*(CWeaponScriptParser::sm_Factory->_vptr_IGameSystemFactory + 7))(CWeaponScriptParser::sm_Factory, pValue);
}


// CWeaponScriptParser::GetAmmoDef  (line 28, @0x0000000002139f60, libserver.so)
// calls: GetHostAmmoDef
CAmmoDef *__fastcall CWeaponScriptParser::GetAmmoDef(const CWeaponScriptParser *const this)
{
  return GetHostAmmoDef();
}


// CWeaponScriptParser::LookupWeaponInfo  (line 34, @0x000000000213a070, libserver.so)  // inlines: Element, Find, LeftChild, RightChild, operator(), operator[]
HWeaponInfo __fastcall CWeaponScriptParser::LookupWeaponInfo(
        const CWeaponScriptParser *const this,
        const char *szWeaponName)
{
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<char const*,FileWeaponInfo_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  unsigned __int64 v5; // rbx
  _QWORD v7[9]; // [rsp-48h] [rbp-48h] BYREF

  if ( szWeaponName == 0 )
    return 0;
  v7[0] = szWeaponName;
  m_Root = this->m_WeaponLookup.m_Elements.m_Tree.m_Root;
  if ( m_Root == -1 )
    return 0;
  m_pMemory = this->m_WeaponLookup.m_Elements.m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = m_Root;
      if ( !this->m_WeaponLookup.m_Elements.m_Tree.m_LessFunc.m_LessFunc(v7, &m_pMemory[v5].m_Data) )
        break;
      m_pMemory = this->m_WeaponLookup.m_Elements.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[m_Root].m_Left;
      if ( m_Root == -1 )
        return 0;
    }
    if ( !this->m_WeaponLookup.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &this->m_WeaponLookup.m_Elements.m_Tree.m_Elements.m_pMemory[v5].m_Data,
            v7) )
      break;
    m_pMemory = this->m_WeaponLookup.m_Elements.m_Tree.m_Elements.m_pMemory;
    m_Root = m_pMemory[v5].m_Right;
    if ( m_Root == -1 )
      return 0;
  }
  return this->m_WeaponDatabase.m_Memory.m_pMemory[m_Root];
}


// CWeaponScriptParser::Init  (line 50, @0x000000000213cb20, libserver.so)
// calls: InitAmmoDef, CWeaponScriptParser::LoadFileWeaponInfoDatabase
bool __fastcall CWeaponScriptParser::Init(CWeaponScriptParser *const this)
{
  const unsigned __int8 *v2; // rax

  InitAmmoDef();
  v2 = (*(g_pGameConfiguration->ISource2ClientConfig::IAppSystem::_vptr_IAppSystem + 18))(g_pGameConfiguration);
  CWeaponScriptParser::LoadFileWeaponInfoDatabase(this, v2);
  return 1;
}


// CWeaponScriptParser::Shutdown  (line 64, @0x000000000213bd80, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~FileWeaponInfo_t
// calls: ShutdownAmmoDef, CUtlVectorBase<WeaponTextureData_t, CUtlMemory<WeaponTextureData_t, int> >::RemoveAll, CUtlString::FreeMemoryBlock, operator delete, CUtlVectorBase<WeaponSoundData_t, CUtlMemory<WeaponSoundData_t, int> >::RemoveAll, CUtlMemory<WeaponSoundData_t, int>::Purge, CUtlMemory<WeaponTextureData_t, int>::Purge, CUtlMemory<FileWeaponInfo_t*, int>::Purge
void __fastcall CWeaponScriptParser::Shutdown(CWeaponScriptParser *const this)
{
  __int64 v2; // r13
  int v3; // r12d
  FileWeaponInfo_t *v4; // rbx
  bool v5; // zf

  v2 = 0;
  v3 = 0;
  ShutdownAmmoDef();
  if ( this->m_WeaponDatabase.m_Size > 0 )
  {
    do
    {
      v4 = this->m_WeaponDatabase.m_Memory.m_pMemory[v2];
      if ( v4 != 0 )
      {
        v4->_vptr_FileWeaponInfo_t = &off_3FFCFF0;
        CUtlVectorBase<WeaponSoundData_t,CUtlMemory<WeaponSoundData_t,int>>::RemoveAll(&v4->m_aShootSounds);
        if ( (v4->m_aShootSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<WeaponSoundData_t,int>::Purge(&v4->m_aShootSounds.m_Memory);
          if ( (v4->m_aShootSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<WeaponSoundData_t,int>::Purge(&v4->m_aShootSounds.m_Memory);
        }
        CUtlVectorBase<WeaponTextureData_t,CUtlMemory<WeaponTextureData_t,int>>::RemoveAll(&v4->m_aTextureData);
        if ( (v4->m_aTextureData.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<WeaponTextureData_t,int>::Purge(&v4->m_aTextureData.m_Memory);
          if ( (v4->m_aTextureData.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<WeaponTextureData_t,int>::Purge(&v4->m_aTextureData.m_Memory);
        }
        if ( v4->m_szAIAddOn.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v4->m_szAIAddOn);
        if ( v4->m_szAmmo2.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v4->m_szAmmo2);
        if ( v4->m_szAmmo1.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v4->m_szAmmo1);
        if ( v4->m_szAnimationPrefix.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v4->m_szAnimationPrefix);
        if ( v4->m_szWorldModel.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v4->m_szWorldModel);
        if ( v4->m_szViewModel.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v4->m_szViewModel);
        if ( v4->m_szPrintName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v4->m_szPrintName);
        if ( v4->m_szClassName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v4->m_szClassName);
        operator delete(v4);
      }
      ++v3;
      ++v2;
    }
    while ( v3 < this->m_WeaponDatabase.m_Size );
  }
  v5 = (this->m_WeaponDatabase.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_WeaponDatabase.m_Size = 0;
  if ( v5 )
    CUtlMemory<FileWeaponInfo_t *,int>::Purge(&this->m_WeaponDatabase.m_Memory);
}


// CWeaponScriptParser::LoadFileWeaponInfoDatabase  (line 82, @0x00000000021392c0, libserver.so)  // inlines: LeafCodeInfo_t, V_FileBase<long unsigned int>
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::deleteThis, LoggingSystem_IsChannelEnabled, KeyValues::GetFirstSubKey, KeyValues::GetString, _V_FileBase, CWeaponScriptParser::ReadWeaponDataFromFileForSlot, KeyValues::GetNextKey, KeyValues::GetName, V_stricmp_fast (17 total)
// callers: CWeaponScriptParser::Init
// strings: "weaponscripts", "scripts/weapon_manifest.txt", "Expecting 'file', got %s\n", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/weapon_pa, "LoadFileWeaponInfoDatabase", "reading weapons from %s\n"
void __fastcall CWeaponScriptParser::LoadFileWeaponInfoDatabase(
        CWeaponScriptParser *const this,
        const unsigned __int8 *pICEKey)
{
  KeyValues *v4; // r13
  IBaseFileSystem *v5; // rsi
  KeyValues *i; // rbx
  const char *String; // rax
  const char *Name; // rax
  const char *v9; // rax
  HWeaponInfo tmp; // [rsp+10h] [rbp-370h] BYREF
  int v11; // [rsp+18h] [rbp-368h]
  const char *v12; // [rsp+20h] [rbp-360h]
  char fullpath[272]; // [rsp+30h] [rbp-350h] BYREF
  char fileBase[520]; // [rsp+140h] [rbp-240h] BYREF
  unsigned __int64 v15; // [rsp+348h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  if ( this->m_WeaponDatabase.m_Size == 0 )
  {
    v4 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v4, "weaponscripts");
    v5 = 0;
    if ( g_pFullFileSystem != 0 )
      v5 = &g_pFullFileSystem->IBaseFileSystem;
    if ( KeyValues::LoadFromFile(v4, v5, "scripts/weapon_manifest.txt", "GAME", 0) )
    {
      (*(g_pFullFileSystem->_vptr_IAppSystem + 23))(
        g_pFullFileSystem,
        "scripts/weapon_manifest.txt",
        "GAME",
        fullpath,
        260,
        0,
        0);
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
        LoggingSystem_Log(LOG_SERVER, 0, "reading weapons from %s\n", fullpath);
      for ( i = KeyValues::GetFirstSubKey(v4); i != 0; i = KeyValues::GetNextKey(i) )
      {
        Name = KeyValues::GetName(i);
        if ( V_stricmp_fast(Name, "file") != 0 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 4) != 0 )
          {
            v9 = KeyValues::GetName(i);
            v11 = 107;
            tmp = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/weapon_parse_default.cpp";
            v12 = "LoadFileWeaponInfoDatabase";
            LoggingSystem_Log(LOG_SERVER, LoggingSeverity_t::LS_ERROR, &tmp, "Expecting 'file', got %s\n", v9);
          }
        }
        else
        {
          String = KeyValues::GetString(i, 0, "", 0, 0);
          _V_FileBase(String, fileBase, 512);
          CWeaponScriptParser::ReadWeaponDataFromFileForSlot(this, fileBase, &tmp, pICEKey);
        }
      }
    }
    KeyValues::deleteThis(v4);
  }
}


// CWeaponScriptParser::ReadEncryptedKVFile  (line 114, @0x0000000002135780, libserver.so)
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::UsesEscapeSequences, V_snprintf, COM_TimestampedLog, KeyValues::LoadFromFile, UTIL_DecodeICE, KeyValues::LoadFromBuffer, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, KeyValues::deleteThis, __stack_chk_fail (14 total)
// callers: CWeaponScriptParser::ReadWeaponDataFromFileForSlot
// strings: "WeaponDatafile", "ReadEncryptedKVFile(%s)", "%s.ctx", "Host: Weapon Script \"%s\" loaded.\n"
KeyValues *__fastcall CWeaponScriptParser::ReadEncryptedKVFile(
        CWeaponScriptParser *const this,
        const char *szFilenameWithoutExtension,
        const unsigned __int8 *pICEKey)
{
  KeyValues *v5; // r12
  IBaseFileSystem *v6; // rsi
  __int64 v7; // r8
  int v8; // r15d
  void *v9; // rsp
  IBaseFileSystem *v10; // rcx
  KeyValues *v12; // rdi
  FileHandle_t f; // [rsp+10h] [rbp-250h]
  char szFullName[520]; // [rsp+20h] [rbp-240h] BYREF
  unsigned __int64 v17; // [rsp+228h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  v5 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v5, "WeaponDatafile");
  KeyValues::UsesEscapeSequences(v5, 1);
  V_snprintf(szFullName, 512, "%s.txt", szFilenameWithoutExtension);
  COM_TimestampedLog("ReadEncryptedKVFile(%s)", szFullName);
  v6 = &g_pFullFileSystem->IBaseFileSystem;
  if ( g_pFullFileSystem == 0 )
    v6 = 0;
  if ( KeyValues::LoadFromFile(v5, v6, szFullName, "GAME", 0) )
    goto LABEL_9;
  if ( pICEKey == 0 )
    goto LABEL_12;
  V_snprintf(szFullName, 512, "%s.ctx", szFilenameWithoutExtension);
  v7 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 2))(&g_pFullFileSystem->IBaseFileSystem, szFullName, "rb", "GAME");
  if ( v7 == 0 )
    goto LABEL_12;
  f = v7;
  v8 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 6))(&g_pFullFileSystem->IBaseFileSystem, v7);
  v9 = alloca(((v8 + 32) & 0xFFFFFFF0) + 16LL);
  (*g_pFullFileSystem->_vptr_IBaseFileSystem)(
    &g_pFullFileSystem->IBaseFileSystem,
    szFullName & 0xFFFFFFFFFFFFFFEFLL,
    v8,
    f);
  *((szFullName & 0xFFFFFFFFFFFFFFEFLL) + v8) = 0;
  (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(&g_pFullFileSystem->IBaseFileSystem, f);
  UTIL_DecodeICE((szFullName & 0xFFFFFFFFFFFFFFEFLL), v8, pICEKey);
  v10 = &g_pFullFileSystem->IBaseFileSystem;
  if ( g_pFullFileSystem == 0 )
    v10 = 0;
  if ( KeyValues::LoadFromBuffer(v5, szFullName, (szFullName & 0xFFFFFFFFFFFFFFEFLL), v10, 0, 0, 0) )
  {
LABEL_9:
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
      LoggingSystem_Log(LOG_SERVER, 0, "Host: Weapon Script \"%s\" loaded.\n", szFilenameWithoutExtension);
  }
  else
  {
LABEL_12:
    v12 = v5;
    v5 = 0;
    KeyValues::deleteThis(v12);
  }
  return v5;
}


// CWeaponScriptParser::GetFileWeaponInfoFromHandle  (line 171, @0x00000000021385b0, libserver.so)  // inlines: CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, FileWeaponInfo_t, Find, GameFileWeaponInfo_t, GetNullWeaponInfo
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: CWeaponScriptParser::ReadWeaponDataFromFileForSlot
// globals: `guard variable for'GetNullWeaponInfo(void)::gNullInfo, GetNullWeaponInfo(void)::gNullInfo, __dso_handle, GameFileWeaponInfo_t::~GameFileWeaponInfo_t()
FileWeaponInfo_t *__fastcall CWeaponScriptParser::GetFileWeaponInfoFromHandle(
        CWeaponScriptParser *const this,
        HWeaponInfo handle)
{
  int m_Size; // r8d
  FileWeaponInfo_t **m_pMemory; // rcx
  FileWeaponInfo_t **v4; // rcx
  int v5; // edx

  m_Size = this->m_WeaponDatabase.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_WeaponDatabase.m_Memory.m_pMemory;
    if ( handle == *m_pMemory )
      return handle;
    v4 = m_pMemory + 1;
    v5 = 0;
    while ( ++v5 != m_Size )
    {
      if ( handle == *v4++ )
      {
        if ( v5 == -1 )
          break;
        return handle;
      }
    }
  }
  if ( `guard variable for'GetNullWeaponInfo(void)::gNullInfo != 0 )
    return &GetNullWeaponInfo(void)::gNullInfo;
  if ( __cxa_guard_acquire(&`guard variable for'GetNullWeaponInfo(void)::gNullInfo) != 0 )
  {
    byte_4AFCB48 = 0;
    byte_4AFCB49 = 0;
    qword_4AFCB50 = 0;
    qword_4AFCB58 = 0;
    qword_4AFCB60 = 0;
    qword_4AFCB68 = 0;
    qword_4AFCB70 = 0;
    dword_4AFCB78 = 0;
    dword_4AFCB7C = 0;
    dword_4AFCB80 = 0;
    dword_4AFCB84 = 0;
    dword_4AFCB88 = 0;
    dword_4AFCB8C = 0;
    dword_4AFCB90 = 0;
    dword_4AFCB94 = -1;
    byte_4AFCB98 = 0;
    byte_4AFCB99 = 0;
    dword_4AFCB9C = 0;
    qword_4AFCBA0 = 0;
    qword_4AFCBA8 = 0;
    qword_4AFCBB0 = 0;
    byte_4AFCBB8 = 0;
    byte_4AFCBB9 = 1;
    byte_4AFCBBA = 1;
    dword_4AFCBBC = 0;
    dword_4AFCBC0 = 0;
    dword_4AFCBC8 = 0;
    qword_4AFCBD0 = 0;
    dword_4AFCBD8 = 0;
    dword_4AFCBDC = 0;
    qword_4AFCBE0 = 0;
    qword_4AFCBE8 = 0;
    qword_4AFCBF0 = 0;
    qword_4AFCBF8 = 0;
    qword_4AFCC00 = 0;
    qword_4AFCC08 = 0;
    qword_4AFCC10 = 0;
    qword_4AFCC18 = 0;
    qword_4AFCC20 = 0;
    dword_4AFCC28 = 0;
    qword_4AFCC30 = 0;
    dword_4AFCC38 = 0;
    dword_4AFCC3C = 0;
    GetNullWeaponInfo(void)::gNullInfo = &off_3FE29B0;
    __cxa_guard_release(&`guard variable for'GetNullWeaponInfo(void)::gNullInfo);
    __cxa_atexit(GameFileWeaponInfo_t::~GameFileWeaponInfo_t, &GetNullWeaponInfo(void)::gNullInfo, &_dso_handle);
  }
  return &GetNullWeaponInfo(void)::gNullInfo;
}


// CWeaponScriptParser::ReadWeaponDataFromFileForSlot  (line 180, @0x0000000002138fb0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<FileWeaponInfo_t*>, CreateWeaponInfo, Element, FileWeaponInfo_t, GameFileWeaponInfo_t, GrowMemory, operator char const*, operator[]
// calls: CWeaponScriptParser::GetFileWeaponInfoFromHandle, CFmtStrN<256, false>::CFmtStrN, operator new, CWeaponScriptParser::ReadEncryptedKVFile, CUtlString::Get, CUtlDict<FileWeaponInfo_t*, int>::Insert, KeyValues::deleteThis, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CUtlMemory<FileWeaponInfo_t*, int>::Grow, __stack_chk_fail
// callers: CWeaponScriptParser::LoadFileWeaponInfoDatabase
// strings: "read weapon file '%s'\n"
bool __fastcall CWeaponScriptParser::ReadWeaponDataFromFileForSlot(
        CWeaponScriptParser *const this,
        const char *szWeaponName,
        HWeaponInfo *phandle,
        const unsigned __int8 *pICEKey)
{
  HWeaponInfo v8; // rax
  FileWeaponInfo_t *FileWeaponInfoFromHandle; // rax
  bool v10; // zf
  char IsChannelEnabled; // bl
  FileWeaponInfo_t *v13; // rax
  KeyValues *EncryptedKVFile; // rax
  KeyValues *v15; // r14
  __int64 m_Size; // r13
  int v17; // eax
  FileWeaponInfo_t **v18; // rax
  const char *v19; // rax
  FileWeaponInfo_t *pFileInfo; // [rsp+8h] [rbp-148h] BYREF
  CFmtStr s; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v22; // [rsp+128h] [rbp-28h]

  v22 = __readfsqword(0x28u);
  if ( phandle != 0 )
  {
    v8 = (*(this->_vptr_IGameSystem + 41))(this);
    *phandle = v8;
    FileWeaponInfoFromHandle = CWeaponScriptParser::GetFileWeaponInfoFromHandle(this, v8);
    v10 = !FileWeaponInfoFromHandle->m_bParsedScript;
    pFileInfo = FileWeaponInfoFromHandle;
    if ( !v10 )
      return 1;
    CFmtStrN<256,false>::CFmtStrN(&s, "scripts/%s", szWeaponName);
    v13 = operator new(0x100u);
    v13->m_bParsedScript = 0;
    v13->m_bLoadedHudElements = 0;
    v13->m_szClassName.m_pString = 0;
    v13->m_szPrintName.m_pString = 0;
    v13->m_szViewModel.m_pString = 0;
    v13->m_szWorldModel.m_pString = 0;
    v13->m_szAnimationPrefix.m_pString = 0;
    v13->m_iSlot = 0;
    v13->m_iPosition = 0;
    v13->m_iMaxClip1 = 0;
    v13->m_iMaxClip2 = 0;
    v13->m_iDefaultClip1 = 0;
    v13->m_iDefaultClip2 = 0;
    v13->m_iWeight = 0;
    v13->m_iRumbleEffect = -1;
    v13->m_bAutoSwitchTo = 0;
    v13->m_bAutoSwitchFrom = 0;
    v13->m_iFlags = 0;
    v13->m_szAmmo1.m_pString = 0;
    v13->m_szAmmo2.m_pString = 0;
    v13->m_szAIAddOn.m_pString = 0;
    v13->m_bMeleeWeapon = 0;
    v13->m_bBuiltRightHanded = 1;
    v13->m_bAllowFlipping = 1;
    v13->m_iAmmoType = 0;
    v13->m_iAmmo2Type = 0;
    v13->m_aTextureData.m_Size = 0;
    v13->m_aTextureData.m_Memory.m_pMemory = 0;
    v13->m_aTextureData.m_Memory.m_nAllocationCount = 0;
    v13->m_aTextureData.m_Memory.m_nGrowSize = 0;
    v13->m_iconActive = 0;
    v13->m_iconInactive = 0;
    v13->m_iconAmmo = 0;
    v13->m_iconAmmo2 = 0;
    v13->_vptr_FileWeaponInfo_t = &off_3FE29B0;
    v13->m_iconCrosshair = 0;
    v13->m_iconAutoaim = 0;
    v13->m_iconZoomedCrosshair = 0;
    v13->m_iconZoomedAutoaim = 0;
    v13->m_iconSmall = 0;
    v13->m_aShootSounds.m_Size = 0;
    v13->m_aShootSounds.m_Memory.m_pMemory = 0;
    v13->m_aShootSounds.m_Memory.m_nAllocationCount = 0;
    v13->m_aShootSounds.m_Memory.m_nGrowSize = 0;
    pFileInfo = v13;
    EncryptedKVFile = CWeaponScriptParser::ReadEncryptedKVFile(this, s.m_szBuf, pICEKey);
    v15 = EncryptedKVFile;
    if ( EncryptedKVFile != 0 )
    {
      (*(pFileInfo->_vptr_FileWeaponInfo_t + 2))(pFileInfo, EncryptedKVFile, szWeaponName);
      m_Size = this->m_WeaponDatabase.m_Size;
      v17 = this->m_WeaponDatabase.m_Size;
      if ( m_Size == this->m_WeaponDatabase.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<FileWeaponInfo_t *,int>::Grow(&this->m_WeaponDatabase.m_Memory, 1);
        v17 = this->m_WeaponDatabase.m_Size;
      }
      this->m_WeaponDatabase.m_Size = v17 + 1;
      v18 = &this->m_WeaponDatabase.m_Memory.m_pMemory[m_Size];
      if ( v18 != 0 )
        *v18 = pFileInfo;
      v19 = CUtlString::Get(&pFileInfo->m_szClassName);
      CUtlDict<FileWeaponInfo_t *,int>::Insert(&this->m_WeaponLookup, v19, &pFileInfo);
      KeyValues::deleteThis(v15);
      IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_SERVER, 0);
      if ( IsChannelEnabled != 0 )
      {
        LoggingSystem_Log(LOG_SERVER, 0, "read weapon file '%s'\n", s.m_szBuf);
        return IsChannelEnabled;
      }
      return 1;
    }
  }
  return 0;
}


// FileWeaponInfo_t::Parse  (line 230, @0x00000000021388d0, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, CUtlString, Construct<WeaponSoundData_t>, Construct<WeaponTextureData_t>, Element, GetNameByToken, GrowMemory, Purge, String, WeaponSoundData_t, WeaponTextureData_t, operator[], ~CUtlString
// calls: CUtlString::operator=, KeyValues::GetString, KeyValues::GetInt, CUtlString::Clear, CUtlString::Get, CAmmoDef::Index, CUtlVectorBase<WeaponSoundData_t, CUtlMemory<WeaponSoundData_t, int> >::RemoveAll, CUtlMemory<WeaponSoundData_t, int>::Purge, KeyValues::FindKey, KeyValues::GetFirstSubKey, CUtlString::FreeMemoryBlock, KeyValues::GetNextKey (17 total)
// strings: "!!! Missing printname on weapon", "printname", "playermodel", "anim_prefix", "bucket_position", "clip_size" (18 total)
// globals: g_ItemFlags, g_pWeaponInfo, g_WeaponSoundCategories, tokenset_t<WeaponSound_t>::GetNameByToken(WeaponSound_t)::unknown
void __fastcall FileWeaponInfo_t::Parse(
        FileWeaponInfo_t *const this,
        KeyValues *pKeyValuesData,
        const char *pWeaponName)
{
  CUtlString *p_m_szClassName; // rdi
  tokenset_t<int> *v5; // r12
  const char *String; // rax
  const char *v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  int Int; // eax
  int m_iMaxClip1; // edx
  int v13; // eax
  int m_iMaxClip2; // edx
  int v15; // eax
  const char *name; // rsi
  int v17; // eax
  int token; // eax
  const char *v19; // rax
  const char *v20; // r14
  CAmmoDef *v21; // rax
  const char *v22; // rax
  const char *v23; // r12
  CAmmoDef *v24; // rax
  WeaponSound_t v25; // r15d
  KeyValues *Key; // r12
  char *v27; // rsi
  tokenset_t<WeaponSound_t> *v28; // rdx
  const char *v29; // rax
  KeyValues *v30; // rax
  KeyValues *i; // rbx
  __int64 v32; // r12
  WeaponTextureData_t *v33; // rax
  WeaponTextureData_t *v34; // r12
  const char *v35; // rax
  const char *v36; // rax
  int v37; // eax
  bool v38; // zf
  const char *v39; // rax
  __int64 v40; // r12
  int v41; // eax
  int m_Size; // r14d
  int v43; // ecx
  WeaponSoundData_t *v44; // rcx
  WeaponSoundData_t *v45; // r14
  const char *soundname; // [rsp+0h] [rbp-50h]
  CUtlString sItemName; // [rsp+10h] [rbp-40h] BYREF

  p_m_szClassName = &this->m_szClassName;
  v5 = g_ItemFlags;
  LOBYTE(p_m_szClassName[-1].m_pString) = 1;
  CUtlString::operator=(p_m_szClassName, pWeaponName);
  String = KeyValues::GetString(pKeyValuesData, "printname", "!!! Missing printname on weapon", 0, 0);
  CUtlString::operator=(&this->m_szPrintName, String);
  v8 = KeyValues::GetString(pKeyValuesData, "viewmodel", "", 0, 0);
  CUtlString::operator=(&this->m_szViewModel, v8);
  v9 = KeyValues::GetString(pKeyValuesData, "playermodel", "", 0, 0);
  CUtlString::operator=(&this->m_szWorldModel, v9);
  v10 = KeyValues::GetString(pKeyValuesData, "anim_prefix", "", 0, 0);
  CUtlString::operator=(&this->m_szAnimationPrefix, v10);
  this->m_iSlot = KeyValues::GetInt(pKeyValuesData, "bucket", 0);
  this->m_iPosition = KeyValues::GetInt(pKeyValuesData, "bucket_position", 0);
  this->m_iMaxClip1 = KeyValues::GetInt(pKeyValuesData, "clip_size", -1);
  Int = KeyValues::GetInt(pKeyValuesData, "clip2_size", -1);
  m_iMaxClip1 = this->m_iMaxClip1;
  this->m_iMaxClip2 = Int;
  v13 = KeyValues::GetInt(pKeyValuesData, "default_clip", m_iMaxClip1);
  m_iMaxClip2 = this->m_iMaxClip2;
  this->m_iDefaultClip1 = v13;
  this->m_iDefaultClip2 = KeyValues::GetInt(pKeyValuesData, "default_clip2", m_iMaxClip2);
  this->m_iWeight = KeyValues::GetInt(pKeyValuesData, "weight", 0);
  this->m_iRumbleEffect = KeyValues::GetInt(pKeyValuesData, "rumble", -1);
  v15 = KeyValues::GetInt(pKeyValuesData, "item_flags", 8);
  name = g_ItemFlags[0].name;
  this->m_iFlags = v15;
  if ( name != 0 )
  {
    do
    {
      while ( 1 )
      {
        v17 = KeyValues::GetInt(pKeyValuesData, name, -1);
        if ( v17 != 0 )
          break;
        this->m_iFlags &= ~v5->token;
LABEL_4:
        ++v5;
        name = v5->name;
        if ( v5->name == 0 )
          goto LABEL_8;
      }
      if ( v17 != 1 )
        goto LABEL_4;
      token = v5->token;
      ++v5;
      this->m_iFlags |= token;
      name = v5->name;
    }
    while ( v5->name != 0 );
  }
LABEL_8:
  this->m_bAutoSwitchTo = KeyValues::GetInt(pKeyValuesData, "autoswitchto", 1) != 0;
  this->m_bAutoSwitchFrom = KeyValues::GetInt(pKeyValuesData, "autoswitchfrom", 1) != 0;
  this->m_bBuiltRightHanded = KeyValues::GetInt(pKeyValuesData, "BuiltRightHanded", 1) != 0;
  this->m_bAllowFlipping = KeyValues::GetInt(pKeyValuesData, "AllowFlipping", 1) != 0;
  this->m_bMeleeWeapon = KeyValues::GetInt(pKeyValuesData, "MeleeWeapon", 0) != 0;
  v19 = KeyValues::GetString(pKeyValuesData, "primary_ammo", "None", 0, 0);
  if ( strcmp("None", v19) == 0 )
    CUtlString::Clear(&this->m_szAmmo1);
  else
    CUtlString::operator=(&this->m_szAmmo1, v19);
  v20 = CUtlString::Get(&this->m_szAmmo1);
  v21 = g_pWeaponInfo->GetAmmoDef();
  this->m_iAmmoType = CAmmoDef::Index(v21, v20);
  v22 = KeyValues::GetString(pKeyValuesData, "secondary_ammo", "None", 0, 0);
  if ( strcmp("None", v22) == 0 )
    CUtlString::Clear(&this->m_szAmmo2);
  else
    CUtlString::operator=(&this->m_szAmmo2, v22);
  v23 = CUtlString::Get(&this->m_szAmmo2);
  v24 = g_pWeaponInfo->GetAmmoDef();
  this->m_iAmmo2Type = CAmmoDef::Index(v24, v23);
  CUtlVectorBase<WeaponSoundData_t,CUtlMemory<WeaponSoundData_t,int>>::RemoveAll(&this->m_aShootSounds);
  if ( (this->m_aShootSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<WeaponSoundData_t,int>::Purge(&this->m_aShootSounds.m_Memory);
  v25 = WeaponSound_t::WEAPON_SOUND_EMPTY;
  Key = KeyValues::FindKey(pKeyValuesData, "SoundData", 0);
  if ( Key != 0 )
  {
    do
    {
      v27 = g_WeaponSoundCategories[0].name;
      if ( g_WeaponSoundCategories[0].name != 0 )
      {
        if ( v25 == g_WeaponSoundCategories[0].token )
          goto LABEL_21;
        v28 = g_WeaponSoundCategories;
        while ( 1 )
        {
          ++v28;
          v27 = v28->name;
          if ( v28->name == 0 )
            break;
          if ( v25 == v28->token )
            goto LABEL_21;
        }
      }
      v27 = tokenset_t<WeaponSound_t>::GetNameByToken(WeaponSound_t)const::unknown;
LABEL_21:
      v29 = KeyValues::GetString(Key, v27, 0, 0, 0);
      if ( v29 != 0 && *v29 != 0 )
      {
        m_Size = this->m_aShootSounds.m_Size;
        v43 = m_Size;
        if ( m_Size == this->m_aShootSounds.m_Memory.m_nAllocationCount )
        {
          soundname = v29;
          CUtlMemory<WeaponSoundData_t,int>::Grow(&this->m_aShootSounds.m_Memory, 1);
          v43 = this->m_aShootSounds.m_Size;
          v29 = soundname;
        }
        this->m_aShootSounds.m_Size = v43 + 1;
        v44 = &this->m_aShootSounds.m_Memory.m_pMemory[m_Size];
        if ( v44 != 0 )
        {
          v44->m_Type = WeaponSound_t::WEAPON_SOUND_EMPTY;
          v44->m_Sound.m_pString = 0;
          v45 = &this->m_aShootSounds.m_Memory.m_pMemory[m_Size];
        }
        else
        {
          v45 = 0;
        }
        CUtlString::operator=(&v45->m_Sound, v29);
        v45->m_Type = v25;
      }
      ++v25;
    }
    while ( v25 != WeaponSound_t::WEAPON_SOUND_NUM_TYPES );
  }
  v30 = KeyValues::FindKey(pKeyValuesData, "TextureData", 0);
  if ( v30 != 0 )
  {
    for ( i = KeyValues::GetFirstSubKey(v30); i != 0; i = KeyValues::GetNextKey(i) )
    {
      v39 = KeyValues::GetName(i);
      sItemName.m_pString = 0;
      CUtlString::Set(&sItemName, v39);
      v40 = this->m_aTextureData.m_Size;
      v41 = this->m_aTextureData.m_Size;
      if ( v40 == this->m_aTextureData.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<WeaponTextureData_t,int>::Grow(&this->m_aTextureData.m_Memory, 1);
        v41 = this->m_aTextureData.m_Size;
      }
      v32 = v40;
      this->m_aTextureData.m_Size = v41 + 1;
      v33 = &this->m_aTextureData.m_Memory.m_pMemory[v32];
      if ( v33 != 0 )
      {
        v33->m_Name.m_pString = 0;
        v33->m_Sprite.m_pString = 0;
        v33->m_Font.m_pString = 0;
        v33->m_x = 0;
        v33->m_y = 0;
        v33->m_width = 0;
        v33->m_height = 0;
        v33->m_FontCharacter = 0;
        v34 = &this->m_aTextureData.m_Memory.m_pMemory[v32];
      }
      else
      {
        v34 = 0;
      }
      CUtlString::operator=(&v34->m_Name, &sItemName);
      v35 = KeyValues::GetString(i, "file", "", 0, 0);
      CUtlString::operator=(&v34->m_Sprite, v35);
      v36 = KeyValues::GetString(i, "font", "", 0, 0);
      CUtlString::operator=(&v34->m_Font, v36);
      v34->m_FontCharacter = *KeyValues::GetString(i, "character", "", 0, 0);
      v34->m_x = KeyValues::GetInt(i, "x", 0);
      v34->m_y = KeyValues::GetInt(i, "y", 0);
      v34->m_width = KeyValues::GetInt(i, "width", 0);
      v37 = KeyValues::GetInt(i, "height", 0);
      v38 = sItemName.m_pString == 0;
      v34->m_height = v37;
      if ( !v38 )
        CUtlString::FreeMemoryBlock(&sItemName);
    }
  }
}


// CWeaponScriptParser::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 357, @0x00000000021359e0, libserver.so)
void __cdecl CWeaponScriptParser::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


