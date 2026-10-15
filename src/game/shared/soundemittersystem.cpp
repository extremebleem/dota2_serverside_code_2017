// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/soundemittersystem.cpp:70
class CCaptionRepeatMgr {
private:

	CUtlMap<unsigned int, float, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> m_rbCaptionHistory;  // +0x0
	CCaptionRepeatMgr();
	bool CanEmitCaption(unsigned int);
	void Clear();
	void RemoveCaptionsBefore(float);
	~CCaptionRepeatMgr();

	// sizeof = 40
};

// src/game/shared/soundemittersystem.cpp:191
class CSoundEmitterSystem : public IGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	typedef IGameSystem BaseClass;
	CSoundEmitterSystem(CSoundEmitterSystem &);
	CSoundEmitterSystem(const CSoundEmitterSystem &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CSoundEmitterSystem *);
	CSoundEmitterSystem();
	void LoadServerCaptions();
	virtual bool Init();
	void AddCaptionFile(const char *);
	virtual void Shutdown();
	virtual void TraceEmitSound(CEntityIndex, const char *, ...);
	virtual void GameInit(const EventGameInit_t &);
	virtual void PostSpawnGroupLoad(const EventPostSpawnGroupLoad_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	void PrecacheSOSScriptSounds(KeyValues *);
	void PrecacheScriptSound(const char *);
	void PrefetchScriptSound(const char *);
	void TraceEmitSoundEntry(int, const char *, CSoundParameters &, int);
	SndOpEventGuid_t EmitSoundByHandle(IRecipientFilter &, CEntityIndex, const EmitSound_t &);
	SndOpEventGuid_t EmitSound(IRecipientFilter &, CEntityIndex, const EmitSound_t &);
	SndOpEventGuid_t EmitAmbientSound(CEntityIndex, const Vector &, const char *, float, int, int, float, float *);
	void StopSound(SndOpEventGuid_t);
	SndOpEventGuid_t EmitAmbientSound(CEntityIndex, const Vector &, const char *, float, soundlevel_t, int, int, float, float *);
	bool GetCaptionHash(const char *, bool, unsigned int &);
	void StopSpeakerSounds(const char *);
	virtual ~CSoundEmitterSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[0] Init
	// vtable[2] Shutdown
	// vtable[40] TraceEmitSound
	// vtable[3] GameInit
	// vtable[15] PostSpawnGroupLoad
	// vtable[4] GameShutdown
	// sizeof = 128
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// Register_LOG_SND_EMITTERSYSTEM_Tags  (line 45, @0x0000000002381c00, libserver.so)
// calls: LoggingSystem_AddTagToChannel
// strings: "SndEmitterSystem"
void __fastcall Register_LOG_SND_EMITTERSYSTEM_Tags(LoggingChannelID_t channelID)
{
  LoggingSystem_AddTagToChannel(channelID, "SndEmitterSystem");
}


// CCaptionRepeatMgr::~CCaptionRepeatMgr  (line 70, @0x00000000023b2600, libserver.so)  // inlines: Purge, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<unsigned int, float>::Node_t, short unsigned int, CUtlMap<unsigned int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, float>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, float>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CCaptionRepeatMgr::~CCaptionRepeatMgr(CCaptionRepeatMgr *const this)
{
  CUtlRBTree<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_rbCaptionHistory.m_Tree);
  if ( (this->m_rbCaptionHistory.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_rbCaptionHistory.m_Tree.m_Elements);
}


// CCaptionRepeatMgr::Clear  (line 103, @0x000000000239e770, libserver.so)  // inlines: Purge
// calls: CUtlRBTree<CUtlMap<unsigned int, float>::Node_t, short unsigned int, CUtlMap<unsigned int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, float>::Node_t, short unsigned int>, short unsigned int> >::Purge
void __fastcall CCaptionRepeatMgr::Clear(CCaptionRepeatMgr *const this)
{
  CUtlRBTree<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_rbCaptionHistory.m_Tree);
}


// CCaptionRepeatMgr::CanEmitCaption  (line 108, @0x00000000023a6940, libserver.so)  // inlines: Element, Find, FindInsertionPosition, GetFloat, Insert, InsertAt, LeftChild, RightChild, operator(), operator[]
// calls: CCaptionRepeatMgr::RemoveCaptionsBefore, CUtlRBTree<CUtlMap<unsigned int, float>::Node_t, short unsigned int, CUtlMap<unsigned int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, float>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CUtlMap<unsigned int, float>::Node_t, short unsigned int, CUtlMap<unsigned int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, float>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<unsigned int, float>::Node_t, short unsigned int, CUtlMap<unsigned int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, float>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
// callers: CanEmitCaption, CSceneEntity::DispatchStartSpeak
bool __fastcall CCaptionRepeatMgr::CanEmitCaption(CCaptionRepeatMgr *const this, unsigned int hash)
{
  unsigned __int16 v4; // ax
  UtlRBTreeNode_t<CUtlMap<unsigned int,float>::Node_t,short unsigned int> *v5; // rdx
  unsigned __int16 m_Root; // r14
  unsigned __int16 m_Right; // ax
  char v9; // cl
  bool v10; // zf
  UtlRBTreeNode_t<CUtlMap<unsigned int,float>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v12; // ax
  bool v13; // r12
  float realtime; // [rsp+Ch] [rbp-34h]
  CUtlMap<unsigned int,float,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+10h] [rbp-30h] BYREF

  if ( gpGlobals->maxClients == 1 )
    return 1;
  realtime = gpGlobals->realtime;
  CCaptionRepeatMgr::RemoveCaptionsBefore(
    this,
    gpGlobals->realtime - cc_norepeat.m_pParent->m_Value.m_fValue,
    gpGlobals->realtime);
  search.key = hash;
  v4 = CUtlRBTree<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_rbCaptionHistory.m_Tree,
         &search);
  if ( v4 == 0xFFFF )
  {
    search.key = hash;
    m_Root = this->m_rbCaptionHistory.m_Tree.m_Root;
    search.elem = realtime;
    if ( m_Root == 0xFFFF )
    {
      m_Root = -1;
      v13 = 0;
    }
    else
    {
      while ( 1 )
      {
        v10 = this->m_rbCaptionHistory.m_Tree.m_LessFunc.m_LessFunc(
                &search,
                &this->m_rbCaptionHistory.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
        m_pMemory = this->m_rbCaptionHistory.m_Tree.m_Elements.m_pMemory;
        if ( v10 )
        {
          m_Right = m_pMemory[m_Root].m_Right;
          v9 = 0;
        }
        else
        {
          m_Right = m_pMemory[m_Root].m_Left;
          v9 = 1;
        }
        if ( m_Right == 0xFFFF )
          break;
        m_Root = m_Right;
      }
      v13 = v9;
    }
    v12 = CUtlRBTree<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
            &this->m_rbCaptionHistory.m_Tree,
            &search);
    CUtlRBTree<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
      &this->m_rbCaptionHistory.m_Tree,
      v12,
      m_Root,
      v13);
    ++this->m_rbCaptionHistory.m_Tree.m_NumElements;
    return 1;
  }
  v5 = &this->m_rbCaptionHistory.m_Tree.m_Elements.m_pMemory[v4];
  if ( (realtime - v5->m_Data.elem) > cc_norepeat.m_pParent->m_Value.m_fValue )
  {
    v5->m_Data.elem = realtime;
    return 1;
  }
  return 0;
}


// CCaptionRepeatMgr::RemoveCaptionsBefore  (line 135, @0x00000000023a6730, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<unsigned int>, Element, FirstInorder, FreeNode, GrowMemory, LeftChild, Links, NextInorder, Purge, Remove, RemoveAll, RemoveAt, SetLeftChild, SetRightChild, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlRBTree<CUtlMap<unsigned int, float>::Node_t, short unsigned int, CUtlMap<unsigned int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, float>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlMemory<unsigned int, int>::Grow, CUtlRBTree<CUtlMap<unsigned int, float>::Node_t, short unsigned int, CUtlMap<unsigned int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, float>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CUtlMap<unsigned int, float>::Node_t, short unsigned int, CUtlMap<unsigned int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, float>::Node_t, short unsigned int>, short unsigned int> >::Unlink, CUtlMemory<unsigned int, int>::Purge, _Unwind_Resume
// callers: CCaptionRepeatMgr::CanEmitCaption
void __fastcall CCaptionRepeatMgr::RemoveCaptionsBefore(
        CCaptionRepeatMgr *const this,
        CUtlMap<unsigned int,float,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::ElemType_t a2,
        float t)
{
  unsigned __int16 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<unsigned int,float>::Node_t,short unsigned int> *m_pMemory; // rax
  __int64 v6; // r14
  unsigned __int16 m_Left; // cx
  __int64 v8; // r13
  int v9; // edx
  unsigned int *v10; // rax
  UtlRBTreeNode_t<CUtlMap<unsigned int,float>::Node_t,short unsigned int> *v11; // r14
  int m_Size; // eax
  __int64 v13; // r13
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // r12
  __int64 v16; // rax
  CUtlMap<unsigned int,float,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+10h] [rbp-60h] BYREF
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > toRemove; // [rsp+20h] [rbp-50h] BYREF

  m_Root = this->m_rbCaptionHistory.m_Tree.m_Root;
  toRemove.m_Size = 0;
  toRemove.m_Memory.m_pMemory = 0;
  toRemove.m_Memory.m_nAllocationCount = 0;
  toRemove.m_Memory.m_nGrowSize = 0;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_rbCaptionHistory.m_Tree.m_Elements.m_pMemory;
    v6 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v6 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    v8 = 0;
    while ( 1 )
    {
      v11 = &m_pMemory[v6];
      if ( a2 > v11->m_Data.elem )
      {
        m_Size = v8;
        if ( toRemove.m_Memory.m_nAllocationCount == v8 )
        {
          CUtlMemory<unsigned int,int>::Grow(&toRemove.m_Memory, 1);
          m_Size = toRemove.m_Size;
        }
        v9 = m_Size + 1;
        toRemove.m_Size = m_Size + 1;
        v10 = &toRemove.m_Memory.m_pMemory[v8];
        if ( v10 != 0 )
        {
          *v10 = v11->m_Data.key;
          v8 = toRemove.m_Size;
        }
        else
        {
          v8 = v9;
        }
      }
      m_Root = CUtlRBTree<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_rbCaptionHistory.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_rbCaptionHistory.m_Tree.m_Elements.m_pMemory;
      v6 = m_Root;
    }
    if ( v8 > 0 )
    {
      v13 = 0;
      do
      {
        search.key = toRemove.m_Memory.m_pMemory[v13];
        v14 = CUtlRBTree<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
                &this->m_rbCaptionHistory.m_Tree,
                &search);
        v15 = v14;
        if ( v14 != 0xFFFF )
        {
          CUtlRBTree<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
            &this->m_rbCaptionHistory.m_Tree,
            v14);
          v16 = v15;
          this->m_rbCaptionHistory.m_Tree.m_Elements.m_pMemory[v16].m_Left = v15;
          this->m_rbCaptionHistory.m_Tree.m_Elements.m_pMemory[v16].m_Right = this->m_rbCaptionHistory.m_Tree.m_FirstFree;
          --this->m_rbCaptionHistory.m_Tree.m_NumElements;
          this->m_rbCaptionHistory.m_Tree.m_FirstFree = v15;
        }
        ++v13;
      }
      while ( toRemove.m_Size > v13 );
    }
  }
  toRemove.m_Size = 0;
  if ( (toRemove.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&toRemove.m_Memory);
    if ( (toRemove.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&toRemove.m_Memory);
  }
}


// Hack_FixEscapeChars  (line 156, @0x0000000002392000, libserver.so)  // inlines: V_strlen, V_strncpy<int>
// calls: strlen, _V_strncpy, __stack_chk_fail
void __fastcall Hack_FixEscapeChars(char *str)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rax
  void *v5; // rsp
  char v6; // al
  _BYTE *v7; // rcx
  char *v8; // r8
  char *v9; // rax
  __int64 v10; // [rsp+10h] [rbp-10h] BYREF

  if ( str != 0 )
  {
    v2 = strlen(str);
    v3 = (v2 + 1);
    v4 = ((v2 + 32) & 0xFFFFFFF0);
  }
  else
  {
    v4 = 32;
    v3 = 1;
  }
  v5 = alloca(v4 + 16);
  v6 = *str;
  v7 = (&v10 & 0xFFFFFFFFFFFFFFEFLL);
  if ( *str != 0 )
  {
    v8 = str;
    do
    {
      while ( v6 != 92 )
      {
        *v7 = v6;
        v9 = v8;
LABEL_6:
        v8 = v9 + 1;
        v6 = v9[1];
        ++v7;
        if ( v6 == 0 )
          goto LABEL_10;
      }
      if ( v8[1] != 110 )
      {
        *v7 = 92;
        v9 = v8;
        goto LABEL_6;
      }
      *v7++ = 10;
      v8 += 2;
      v6 = *v8;
    }
    while ( *v8 != 0 );
  }
LABEL_10:
  *v7 = 0;
  _V_strncpy(str, &v10 & 0xFFFFFFFFFFFFFFEFLL, v3);
}


// CSoundEmitterSystem::~CSoundEmitterSystem  (line 191, @0x00000000023b2900, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<AsyncCaption_t, CUtlMemory<AsyncCaption_t, int> >::RemoveAll, CUtlSymbolTable::~CUtlSymbolTable, IGameSystem::~IGameSystem, CUtlMemory<AsyncCaption_t, int>::Purge
void __fastcall CSoundEmitterSystem::~CSoundEmitterSystem(CSoundEmitterSystem *const this)
{
  this->_vptr_IGameSystem = &off_40AA8F0;
  CUtlVectorBase<AsyncCaption_t,CUtlMemory<AsyncCaption_t,int>>::RemoveAll(&this->m_ServerCaptions);
  if ( (this->m_ServerCaptions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<AsyncCaption_t,int>::Purge(&this->m_ServerCaptions.m_Memory);
    if ( (this->m_ServerCaptions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<AsyncCaption_t,int>::Purge(&this->m_ServerCaptions.m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_PrecachedScriptSounds);
  IGameSystem::~IGameSystem(this);
}


// CSoundEmitterSystem::~CSoundEmitterSystem  (line 191, @0x00000000023b2960, libserver.so)  // inlines: Purge, ~CSoundEmitterSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<AsyncCaption_t, CUtlMemory<AsyncCaption_t, int> >::RemoveAll, CUtlSymbolTable::~CUtlSymbolTable, IGameSystem::~IGameSystem, operator delete, CUtlMemory<AsyncCaption_t, int>::Purge
void __fastcall CSoundEmitterSystem::~CSoundEmitterSystem(CSoundEmitterSystem *const this)
{
  this->_vptr_IGameSystem = &off_40AA8F0;
  CUtlVectorBase<AsyncCaption_t,CUtlMemory<AsyncCaption_t,int>>::RemoveAll(&this->m_ServerCaptions);
  if ( (this->m_ServerCaptions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<AsyncCaption_t,int>::Purge(&this->m_ServerCaptions.m_Memory);
    if ( (this->m_ServerCaptions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<AsyncCaption_t,int>::Purge(&this->m_ServerCaptions.m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_PrecachedScriptSounds);
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CSoundEmitterSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 193, @0x00000000023a9260, libserver.so)
void __fastcall CSoundEmitterSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CSoundEmitterSystem *const this)
{
  ;
}


// CSoundEmitterSystem::DoesGameSystemReallocate  (line 193, @0x00000000023a9270, libserver.so)
// globals: CSoundEmitterSystem::sm_Factory
bool __fastcall CSoundEmitterSystem::DoesGameSystemReallocate(const CSoundEmitterSystem *const this)
{
  return (*(CSoundEmitterSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CSoundEmitterSystem::sm_Factory);
}


// CSoundEmitterSystem::SetGameSystemGlobalPtrs  (line 193, @0x00000000023a9290, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CSoundEmitterSystem::sm_Factory
void __fastcall CSoundEmitterSystem::SetGameSystemGlobalPtrs(CSoundEmitterSystem *const this, void *pValue)
{
  if ( CSoundEmitterSystem::sm_Factory != 0 )
    (*(CSoundEmitterSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CSoundEmitterSystem::sm_Factory, pValue);
}


// CSoundEmitterSystem::Init  (line 217, @0x00000000023b5fc0, libserver.so)  // inlines: LoadServerCaptions, Purge
// calls: CUtlVectorBase<AsyncCaption_t, CUtlMemory<AsyncCaption_t, int> >::RemoveAll, CUtlMemory<AsyncCaption_t, int>::Purge, CSoundEmitterSystem::AddCaptionFile
// strings: "closecaption", "resource/closecaption_english.dat", "resource/subtitles_english.dat"
// globals: g_pClosecaption
bool __fastcall CSoundEmitterSystem::Init(CSoundEmitterSystem *const this)
{
  g_pClosecaption = (*(*g_pCVar + 144LL))(g_pCVar, "closecaption");
  CUtlVectorBase<AsyncCaption_t,CUtlMemory<AsyncCaption_t,int>>::RemoveAll(&this->m_ServerCaptions);
  if ( (this->m_ServerCaptions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<AsyncCaption_t,int>::Purge(&this->m_ServerCaptions.m_Memory);
  CSoundEmitterSystem::AddCaptionFile(this, "resource/closecaption_english.dat");
  CSoundEmitterSystem::AddCaptionFile(this, "resource/subtitles_english.dat");
  return 1;
}


// CSoundEmitterSystem::AddCaptionFile  (line 230, @0x00000000023b5d60, libserver.so)  // inlines: AddToTail, AsyncCaption_t, CUtlMemory, CUtlRBTree, CUtlSortVector, CUtlSymbol, CUtlVector, CUtlVectorBase, Construct<AsyncCaption_t>, Element, GetSearchPath, GrowMemory, ResetDbgInfo, V_memset, memset, operator[]
// calls: strtok, CUtlVectorBase<AsyncCaption_t, CUtlMemory<AsyncCaption_t, int> >::Remove, V_snprintf, V_FixSlashes, V_strlower_fast, AsyncCaption_t::LoadFromFile, DevMsg(char const*,...), CUtlMemory<AsyncCaption_t, int>::Grow, __stack_chk_fail
// callers: CSoundEmitterSystem::Init, sv_soundemitter_reload
// strings: "Server: added caption file: %s\n"
// globals: AsyncCaption_t::BlockInfo_t::Less(AsyncCaption_t::BlockInfo_t const&,AsyncCaption_t::BlockInfo_t const&)
void __fastcall CSoundEmitterSystem::AddCaptionFile(CSoundEmitterSystem *const this, const char *filename)
{
  unsigned int v4; // eax
  void *v5; // rsp
  char *i; // rax
  int m_Size; // r15d
  int v8; // eax
  AsyncCaption_t *v9; // rdi
  AsyncCaption_t *v10; // rax
  char fullpath[264]; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v12; // [rsp+118h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  v4 = (*(filesystem->_vptr_IAppSystem + 24))(filesystem, "GAME", 0, 0, 0);
  v5 = alloca(((v4 + 32) & 0xFFFFFFF0) + 16LL);
  (*(filesystem->_vptr_IAppSystem + 24))(filesystem, "GAME", 0, fullpath & 0xFFFFFFFFFFFFFFEFLL, v4);
  for ( i = strtok((fullpath & 0xFFFFFFFFFFFFFFEFLL), ";"); i != 0; i = strtok(0, ";") )
  {
    V_snprintf(fullpath, 260, "%s%s", i, filename);
    V_FixSlashes(fullpath, 47);
    V_strlower_fast(fullpath);
    m_Size = this->m_ServerCaptions.m_Size;
    v8 = m_Size;
    if ( m_Size == this->m_ServerCaptions.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<AsyncCaption_t,int>::Grow(&this->m_ServerCaptions.m_Memory, 1);
      v8 = this->m_ServerCaptions.m_Size;
    }
    v9 = 0;
    this->m_ServerCaptions.m_Size = v8 + 1;
    v10 = &this->m_ServerCaptions.m_Memory.m_pMemory[m_Size];
    if ( v10 != 0 )
    {
      v10->m_RequestedBlocks.m_Root = -1;
      v10->m_RequestedBlocks.m_Elements.m_pMemory = 0;
      v10->m_RequestedBlocks.m_LessFunc = AsyncCaption_t::BlockInfo_t::Less;
      v10->m_RequestedBlocks.m_Elements.m_nAllocationCount = 0;
      v10->m_RequestedBlocks.m_Elements.m_nGrowSize = 0;
      v10->m_RequestedBlocks.m_NumElements = 0;
      v10->m_RequestedBlocks.m_FirstFree = -1;
      v10->m_RequestedBlocks.m_LastAlloc.index = -1;
      v10->m_RequestedBlocks.m_pElements = 0;
      v10->m_CaptionDirectory.m_Size = 0;
      v10->m_CaptionDirectory.m_Memory.m_pMemory = 0;
      v10->m_CaptionDirectory.m_Memory.m_nAllocationCount = 0;
      v10->m_CaptionDirectory.m_Memory.m_nGrowSize = 0;
      v10->m_CaptionDirectory.m_pLessContext = 0;
      v10->m_CaptionDirectory.m_bNeedsSort = 0;
      v10->m_DataBaseFile.m_Id = -1;
      *&v10->m_Header.magic = 0;
      *&v10->m_Header.numblocks = 0;
      *&v10->m_Header.directorysize = 0;
      v9 = &this->m_ServerCaptions.m_Memory.m_pMemory[m_Size];
    }
    if ( AsyncCaption_t::LoadFromFile(v9, fullpath) )
      DevMsg("Server: added caption file: %s\n", fullpath);
    else
      CUtlVectorBase<AsyncCaption_t,CUtlMemory<AsyncCaption_t,int>>::Remove(&this->m_ServerCaptions, m_Size);
  }
}


// CSoundEmitterSystem::Shutdown  (line 270, @0x00000000023a92c0, libserver.so)
void __fastcall CSoundEmitterSystem::Shutdown(CSoundEmitterSystem *const this)
{
  ;
}


// CSoundEmitterSystem::TraceEmitSound  (line 274, @0x00000000023aa650, libserver.so)  // inlines: GetInt
// calls: V_vsnprintf, Msg, __stack_chk_fail
// strings: "(sv)"
void CSoundEmitterSystem::TraceEmitSound(CSoundEmitterSystem *const this, CEntityIndex originEnt, const char *fmt, ...)
{
  int m_nValue; // eax
  va_list argptr; // [rsp+8h] [rbp-1E8h] BYREF
  char string[264]; // [rsp+20h] [rbp-1D0h] BYREF
  unsigned __int64 v6; // [rsp+128h] [rbp-C8h]

  v6 = __readfsqword(0x28u);
  m_nValue = sv_soundemitter_trace.m_pParent->m_Value.m_nValue;
  if ( m_nValue != -1 && (m_nValue == 0 || m_nValue == originEnt.m_Data) )
  {
    va_start(argptr, fmt);
    V_vsnprintf(string, 256, fmt, argptr);
    Msg("%s %s", "(sv)", string);
  }
}


// CSoundEmitterSystem::GameInit  (line 292, @0x00000000023b25c0, libserver.so)  // inlines: Clear, Purge
// calls: CUtlRBTree<CUtlMap<unsigned int, float>::Node_t, short unsigned int, CUtlMap<unsigned int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, float>::Node_t, short unsigned int>, short unsigned int> >::Purge
// globals: g_CaptionRepeats
void __fastcall CSoundEmitterSystem::GameInit(CSoundEmitterSystem *const this, const EventGameInit_t *const msg)
{
  CUtlRBTree<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&g_CaptionRepeats.m_rbCaptionHistory.m_Tree);
}


// CSoundEmitterSystem::PostSpawnGroupLoad  (line 299, @0x00000000023a92d0, libserver.so)
void __fastcall CSoundEmitterSystem::PostSpawnGroupLoad(
        CSoundEmitterSystem *const this,
        const EventPostSpawnGroupLoad_t *const msg)
{
  ;
}


// CSoundEmitterSystem::GameShutdown  (line 303, @0x00000000023b25e0, libserver.so)  // inlines: Clear, Purge
// calls: CUtlRBTree<CUtlMap<unsigned int, float>::Node_t, short unsigned int, CUtlMap<unsigned int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, float>::Node_t, short unsigned int>, short unsigned int> >::Purge
// globals: g_CaptionRepeats
void __fastcall CSoundEmitterSystem::GameShutdown(
        CSoundEmitterSystem *const this,
        const EventGameShutdown_t *const msg)
{
  CUtlRBTree<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,float,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&g_CaptionRepeats.m_rbCaptionHistory.m_Tree);
}


// CSoundEmitterSystem::EmitAmbientSound  (line 671, @0x0000000002383800, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::StartSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CBaseEntity::EmitAmbientSound
SndOpEventGuid_t __fastcall CSoundEmitterSystem::EmitAmbientSound(
        CSoundEmitterSystem *const this,
        const char *entindex,
        const Vector *const origin,
        const char *soundname,
        float flVolume,
        int iFlags,
        int iPitch,
        float soundtime)
{
  CEntityIndex v8; // r13d
  SndOpEventGuid_t started; // r12
  CRecipientFilter v11; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v12; // [rsp+138h] [rbp-28h]

  v8.m_Data = this;
  v12 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&v11);
  v11._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&v11);
  v11._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&v11);
  started = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &v11, entindex, v8, -1, 0.0);
  v11._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&v11);
  return started;
}


// CSoundEmitterSystem::EmitAmbientSound  (line 706, @0x00000000023af3f0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEnvMicrophone::OnSoundPlayed, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::StartSoundEvent, CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: UTIL_EmitAmbientSound
SndOpEventGuid_t __fastcall CSoundEmitterSystem::EmitAmbientSound(
        CSoundEmitterSystem *const this,
        CEntityIndex entindex,
        const Vector *const origin,
        const char *pSample,
        float volume,
        soundlevel_t soundlevel,
        int flags,
        float soundtime,
        int pitch)
{
  SndOpEventGuid_t started; // r12
  CUtlVector<Vector,CUtlMemory<Vector,int> > dummyorigins; // [rsp+10h] [rbp-180h] BYREF
  CRecipientFilter v13; // [rsp+30h] [rbp-160h] BYREF
  unsigned __int64 v14; // [rsp+168h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  dummyorigins.m_Size = 0;
  dummyorigins.m_Memory.m_pMemory = 0;
  dummyorigins.m_Memory.m_nAllocationCount = 0;
  dummyorigins.m_Memory.m_nGrowSize = 0;
  if ( CEnvMicrophone::OnSoundPlayed(
         entindex,
         pSample,
         soundlevel,
         volume,
         flags,
         pitch,
         origin,
         soundtime,
         &dummyorigins) != 0 )
  {
    started = 0xFFFFFFFF00000000LL;
  }
  else
  {
    CRecipientFilter::CRecipientFilter(&v13);
    v13._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&v13);
    v13._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&v13);
    started = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &v13, pSample, entindex, -1, 0.0);
    v13._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&v13);
  }
  dummyorigins.m_Size = 0;
  if ( (dummyorigins.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&dummyorigins.m_Memory);
    if ( (dummyorigins.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&dummyorigins.m_Memory);
  }
  return started;
}


// CSoundEmitterSystem::GetCaptionHash  (line 731, @0x00000000023b6bc0, libserver.so)  // inlines: CUtlMemory, CUtlRBTree, Element, Find, Find<CaptionLookup_t>, FindInsertionPosition, GetBool, GetInt, Insert, InsertAt, LeftChild, Less, ResetDbgInfo, RightChild, operator[]
// calls: CaptionLookup_t::SetHash, CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int> >::LinkToParent, Msg, AssertMsg_ConditionFailed, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: GetCaptionHash, CSceneEntity::DispatchStartSpeak
// strings: "Missing caption for %s\n"
// globals: `guard variable for'CSoundEmitterSystem::GetCaptionHash(char const*,bool,uint &)::s_MissingHashes, CSoundEmitterSystem::GetCaptionHash(char const*,bool,uint &)::s_MissingHashes, CUtlSortVector<CaptionLookup_t,CCaptionLookupLess,CUtlVector<CaptionLookup_t,CUtlMemory<CaptionLookup_t,int>>>::Find<CaptionLookup_t>(CaptionLookup_t const&)::_, CDefOps<uint>::LessFunc(uint const&,uint const&), __dso_handle, CUtlRBTree<uint,ushort,bool (*)(uint const&,uint const&),CUtlMemory<UtlRBTreeNode_t<uint,ushort>,ushort>>::~CUtlRBTree()
bool __fastcall CSoundEmitterSystem::GetCaptionHash(
        CSoundEmitterSystem *const this,
        const char *pchStringName,
        bool bWarnIfMissing,
        unsigned int *const hash)
{
  int v5; // r14d
  __int64 v6; // r12
  int m_Size; // r13d
  AsyncCaption_t *v9; // rdx
  int v10; // ecx
  CaptionLookup_t *m_pMemory; // r11
  int v12; // edx
  int v13; // eax
  __int64 v14; // rsi
  __int64 m_Root; // rax
  UtlRBTreeNode_t<unsigned int,short unsigned int> *v16; // rdx
  __int64 v17; // r13
  __int64 v18; // r14
  unsigned __int16 v19; // r13
  unsigned __int16 m_Left; // ax
  bool v21; // r14
  unsigned __int16 v22; // ax
  char v24; // al
  AsyncCaption_t *v27; // [rsp+18h] [rbp-48h]
  CaptionLookup_t search; // [rsp+20h] [rbp-40h] BYREF

  v5 = 0;
  v6 = 0;
  CaptionLookup_t::SetHash(&search, pchStringName);
  *hash = search.hash;
  m_Size = this->m_ServerCaptions.m_Size;
  if ( m_Size > 0 )
  {
    while ( 1 )
    {
      v9 = &this->m_ServerCaptions.m_Memory.m_pMemory[v6];
      if ( v9->m_CaptionDirectory.m_bNeedsSort )
      {
        v27 = &this->m_ServerCaptions.m_Memory.m_pMemory[v6];
        v24 = AssertMsg_ConditionFailed(
                &CUtlSortVector<CaptionLookup_t,CCaptionLookupLess,CUtlVector<CaptionLookup_t,CUtlMemory<CaptionLookup_t,int>>>::Find<CaptionLookup_t>(CaptionLookup_t const&)const::_assertionConstants,
                0);
        v9 = v27;
        if ( v24 != 0 )
          __debugbreak();
      }
      v10 = v9->m_CaptionDirectory.m_Size - 1;
      if ( v10 >= 0 )
      {
        m_pMemory = v9->m_CaptionDirectory.m_Memory.m_pMemory;
        v12 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v13 = (v12 + v10) >> 1;
            v14 = v13;
            if ( m_pMemory[v14].hash >= search.hash )
              break;
            v12 = v13 + 1;
            if ( v13 + 1 > v10 )
              goto LABEL_9;
          }
          if ( m_pMemory[v13].hash <= search.hash )
            break;
          v10 = v13 - 1;
          if ( v12 > v13 - 1 )
            goto LABEL_9;
        }
        if ( v13 != -1 )
          break;
      }
LABEL_9:
      ++v5;
      ++v6;
      if ( v5 == m_Size )
        goto LABEL_10;
    }
    if ( m_Size > v5 )
      return this->m_ServerCaptions.m_Memory.m_pMemory[v5].m_CaptionDirectory.m_Memory.m_pMemory[v14].length > 4u;
  }
LABEL_10:
  if ( bWarnIfMissing && cc_showmissing.m_pParent->m_Value.m_nValue != 0 )
  {
    if ( `guard variable for'CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes == 0
      && __cxa_guard_acquire(&`guard variable for'CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes) != 0 )
    {
      CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_Root = -1;
      CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_NumElements = 0;
      CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_FirstFree = -1;
      CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_LastAlloc.index = -1;
      CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_LessFunc = CDefOps<unsigned int>::LessFunc;
      CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_Elements.m_pMemory = 0;
      CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_Elements.m_nAllocationCount = 0;
      CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_Elements.m_nGrowSize = 0;
      CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_pElements = 0;
      __cxa_guard_release(&`guard variable for'CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes);
      __cxa_atexit(
        CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::~CUtlRBTree,
        &CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes,
        &_dso_handle);
    }
    m_Root = CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_Root;
    if ( CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_Root == 0xFFFF )
      goto LABEL_26;
    v16 = CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_Elements.m_pMemory;
    do
    {
      while ( 1 )
      {
        v17 = m_Root;
        v18 = m_Root;
        if ( !CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_LessFunc(
                hash,
                &v16[m_Root].m_Data) )
          break;
        v16 = CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_Elements.m_pMemory;
        m_Root = CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_Elements.m_pMemory[v17].m_Left;
        if ( m_Root == 0xFFFF )
          goto LABEL_19;
      }
      if ( !CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_LessFunc(
              &CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_Elements.m_pMemory[v18].m_Data,
              hash) )
        return 0;
      v16 = CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_Elements.m_pMemory;
      m_Root = CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_Elements.m_pMemory[v18].m_Right;
    }
    while ( m_Root != 0xFFFF );
LABEL_19:
    v19 = CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_Root;
    if ( CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_Root == 0xFFFF )
    {
LABEL_26:
      v19 = -1;
      v21 = 0;
    }
    else
    {
      while ( 1 )
      {
        if ( CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_LessFunc(
               hash,
               &CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_Elements.m_pMemory[v19].m_Data) )
        {
          m_Left = CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_Elements.m_pMemory[v19].m_Left;
          v21 = 1;
        }
        else
        {
          m_Left = CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_Elements.m_pMemory[v19].m_Right;
          v21 = 0;
        }
        if ( m_Left == 0xFFFF )
          break;
        v19 = m_Left;
      }
    }
    v22 = CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::NewNode(
            &CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes,
            hash);
    CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::LinkToParent(
      &CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes,
      v22,
      v19,
      v21);
    ++CSoundEmitterSystem::GetCaptionHash(char const*,bool,unsigned int &)::s_MissingHashes.m_NumElements;
    Msg("Missing caption for %s\n", pchStringName);
  }
  return 0;
}


// CSoundEmitterSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 787, @0x00000000023920f0, libserver.so)
void __cdecl CSoundEmitterSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// SoundEmitterSystem  (line 789, @0x0000000002392100, libserver.so)
// callers: CLoopModeGame::AddModIndependentGameSystems
// globals: g_SoundEmitterSystem
IGameSystem *__cdecl SoundEmitterSystem()
{
  return &g_SoundEmitterSystem;
}


// SoundSystemPreloadSounds  (line 794, @0x0000000002392110, libserver.so)
// callers: PrecacheGameSoundsFile, CDOTA_BaseNPC::LoadVoiceFile
void __cdecl SoundSystemPreloadSounds()
{
  ;
}


// sv_soundemitter_reload  (line 802, @0x00000000023a41c0, libserver.so)  // inlines: LoadServerCaptions, Purge
// calls: CUtlVectorBase<AsyncCaption_t, CUtlMemory<AsyncCaption_t, int> >::RemoveAll, CUtlMemory<AsyncCaption_t, int>::Purge, CSoundEmitterSystem::AddCaptionFile
// strings: "resource/closecaption_english.dat", "resource/subtitles_english.dat"
// globals: g_SoundEmitterSystem
void __fastcall sv_soundemitter_reload(const CCommandContext *const ctx, const CCommand *const args)
{
  CUtlVectorBase<AsyncCaption_t,CUtlMemory<AsyncCaption_t,int>>::RemoveAll(&g_SoundEmitterSystem.m_ServerCaptions);
  if ( (g_SoundEmitterSystem.m_ServerCaptions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<AsyncCaption_t,int>::Purge(&g_SoundEmitterSystem.m_ServerCaptions.m_Memory);
  CSoundEmitterSystem::AddCaptionFile(&g_SoundEmitterSystem, "resource/closecaption_english.dat");
  CSoundEmitterSystem::AddCaptionFile(&g_SoundEmitterSystem, "resource/subtitles_english.dat");
}


// CBaseEntity::ScriptEmitSound  (line 811, @0x0000000002399590, libserver.so)
// calls: CBaseEntity::EmitSound
void __fastcall CBaseEntity::ScriptEmitSound(CBaseEntity *const this, const char *soundname)
{
  CBaseEntity::EmitSound(this, soundname, 0.0, 0);
}


// CBaseEntity::ScriptEmitSoundParams  (line 816, @0x0000000002399070, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, curtime, entindex, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
void __fastcall CBaseEntity::ScriptEmitSoundParams(
        CBaseEntity *const this,
        const char *soundname,
        int nPitch,
        float flVolume,
        float flSoundTime)
{
  int v7; // r13d
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v9; // rbx
  double v10; // xmm0_8
  vec_t v11; // xmm1_4
  CEntityIndex v12; // eax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  Vector origin; // [rsp+10h] [rbp-1D0h] BYREF
  EmitSound_t params; // [rsp+20h] [rbp-1C0h] BYREF
  CPASAttenuationFilter filter; // [rsp+80h] [rbp-160h] BYREF
  unsigned __int64 v18; // [rsp+1B8h] [rbp-28h]

  v18 = __readfsqword(0x28u);
  params.m_nChannel = 0;
  params.m_pSoundName = 0;
  params.m_flVolume = 1.0;
  params.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
  params.m_nFlags = 0;
  params.m_nPitch = 100;
  params.m_pOrigin = 0;
  params.m_flSoundTime = 0.0;
  params.m_pflSoundDuration = 0;
  params.m_bEmitCloseCaption = 1;
  params.m_bWarnOnMissingCloseCaption = 0;
  params.m_bWarnOnDirectWaveReference = 0;
  params.m_nSpeakerEntity.m_Data = -1;
  params.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&params.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  if ( nPitch <= 0 || nPitch == 100 )
  {
    v7 = 0;
  }
  else
  {
    params.m_nPitch = nPitch;
    v7 = 2;
  }
  m_flCurrentTime = 0.0;
  if ( flVolume >= 0.0 )
  {
    v7 |= 1u;
    params.m_flVolume = flVolume;
  }
  if ( flSoundTime >= 0.0 )
  {
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      m_flCurrentTime = v9->m_flCurrentTime;
    }
    params.m_flSoundTime = m_flCurrentTime + flSoundTime;
  }
  v10 = (*(this->_vptr_IHandleEntity + 186))(this);
  origin.z = v11;
  *&origin.x = v10;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
  params.m_nFlags = v7;
  filter._vptr_IRecipientFilter = &off_3FECD70;
  params.m_pSoundName = soundname;
  params.m_bWarnOnDirectWaveReference = 1;
  v12.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  CBaseEntity::EmitSound(&filter, v12, &params);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
  params.m_UtlVecSoundOrigin.m_Size = 0;
  if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
    if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
  }
}


// CBaseEntity::ScriptStopSound  (line 848, @0x0000000002392790, libserver.so)
// calls: CBaseEntity::StopSound
void __fastcall CBaseEntity::ScriptStopSound(CBaseEntity *const this, const char *soundname)
{
  CBaseEntity::StopSound(this, soundname);
}


// CBaseEntity::ScriptSoundDuration  (line 853, @0x0000000002392f40, libserver.so)
// calls: CBaseEntity::GetSoundDuration
float __fastcall CBaseEntity::ScriptSoundDuration(
        CBaseEntity *const this,
        const char *soundname,
        const char *actormodel)
{
  return CBaseEntity::GetSoundDuration(soundname, actormodel);
}


// CBaseEntity::EmitSound  (line 865, @0x0000000002399350, libserver.so)  // inlines: CAbsQueryScopeGuard, CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, IsAbsQueriesValid, Purge, RemoveAll, SetAbsQueriesValid, SetSoundName, SoundEventGuid_t, entindex, ~CAbsQueryScopeGuard, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
// callers: Script_EmitSoundOn, CBreakableProp::PlayPuntSound, CBaseAnimating::HandleAnimEvent, CDynamicProp::HandleAnimEvent, CBreakableProp::OnTakeDamage, CBreakableProp::Break, CBreakableProp::StickAtPosition, CBasePlayer::PlayWadeSound, CBaseCombatCharacter::CorpseGib, CBaseCombatWeapon::Materialize, CBaseCombatCharacter::GiveAmmo, CBaseCombatWeapon::FallThink (99 total)
SndOpEventGuid_t __fastcall CBaseEntity::EmitSound(
        CBaseEntity *const this,
        const char *soundname,
        float soundtime,
        float *duration)
{
  bool v6; // r14
  double v7; // xmm0_8
  vec_t v8; // xmm1_4
  CEntityIndex v9; // eax
  SndOpEventGuid_t v10; // r13
  Vector origin; // [rsp+10h] [rbp-1E0h] BYREF
  EmitSound_t params; // [rsp+20h] [rbp-1D0h] BYREF
  CPASAttenuationFilter filter; // [rsp+80h] [rbp-170h] BYREF
  unsigned __int64 v16; // [rsp+1B8h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  v6 = CBaseEntity::s_bAbsQueriesValid;
  CBaseEntity::s_bAbsQueriesValid = 1;
  v7 = (*(this->_vptr_IHandleEntity + 186))(this);
  origin.z = v8;
  *&origin.x = v7;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  params.m_pSoundName = soundname;
  params.m_nChannel = 0;
  params.m_flVolume = 1.0;
  params.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
  params.m_nFlags = 0;
  params.m_nPitch = 100;
  params.m_pOrigin = 0;
  params.m_bEmitCloseCaption = 1;
  params.m_bWarnOnMissingCloseCaption = 0;
  params.m_nSpeakerEntity.m_Data = -1;
  params.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&params.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  params.m_flSoundTime = soundtime;
  params.m_pflSoundDuration = duration;
  params.m_bWarnOnDirectWaveReference = 1;
  v9.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  v10 = CBaseEntity::EmitSound(&filter, v9, &params);
  params.m_UtlVecSoundOrigin.m_Size = 0;
  if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
    if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
  }
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
  CBaseEntity::s_bAbsQueriesValid = v6;
  return v10;
}


// CBaseEntity::EmitSound  (line 885, @0x00000000023995a0, libserver.so)  // inlines: CAbsQueryScopeGuard, CEntityIndex, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, IsAbsQueriesValid, Purge, RemoveAll, SetAbsQueriesValid, SetSoundName, SoundEventGuid_t, entindex, ~CAbsQueryScopeGuard, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CUtlMemory<Vector, int>::Purge, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Ability_Sniper_Assassinate::OnProjectileHit, CDOTA_Unit_Courier::EnterShop, CDOTA_Ability_Sniper_Assassinate::OnSpellStart, CDOTA_Ability_Shredder_Chakram::OnSpellStart
SndOpEventGuid_t __fastcall CBaseEntity::EmitSound(
        CBaseEntity *const this,
        IRecipientFilter *const filter,
        const char *soundname,
        float soundtime,
        float *duration)
{
  bool v6; // r13
  CEntityIndex v7; // eax
  SndOpEventGuid_t v8; // [rsp+8h] [rbp-88h]
  EmitSound_t params; // [rsp+10h] [rbp-80h] BYREF
  SndOpEventGuid_t result; // 0:rax.8

  params.m_nChannel = 0;
  params.m_flVolume = 1.0;
  params.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
  params.m_nFlags = 0;
  params.m_nPitch = 100;
  v6 = CBaseEntity::s_bAbsQueriesValid;
  params.m_pOrigin = 0;
  CBaseEntity::s_bAbsQueriesValid = 1;
  params.m_bEmitCloseCaption = 1;
  params.m_bWarnOnMissingCloseCaption = 0;
  params.m_nSpeakerEntity.m_Data = -1;
  params.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&params.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  params.m_pSoundName = soundname;
  params.m_flSoundTime = soundtime;
  params.m_pflSoundDuration = duration;
  params.m_bWarnOnDirectWaveReference = 1;
  v7.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  result = CBaseEntity::EmitSound(filter, v7, &params);
  params.m_UtlVecSoundOrigin.m_Size = 0;
  if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (v8 = result,
        CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory),
        result = v8,
        (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseEntity::s_bAbsQueriesValid = v6;
  }
  else
  {
    CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
    CBaseEntity::s_bAbsQueriesValid = v6;
    return v8;
  }
  return result;
}


// CBaseEntity::EmitSound  (line 907, @0x00000000023996d0, libserver.so)  // inlines: Add, CEntityIndex, CMicroProfilerGuard, CMicroProfilerSample, CUtlMemory, CUtlVector, CUtlVectorBase, CVProfScope, EmitSound_t, EnterScope, ExitScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, ~CMicroProfilerGuard, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVProfScope, ~EmitSound_t
// calls: CBaseEntity::EmitSound, ThreadGetCurrentId, CUtlMemory<Vector, int>::Purge, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), std::terminate(void), _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, CVProfile::ExitScope
// callers: Script_EmitSoundOnClient, CBaseCombatWeapon::WeaponSound, CBaseCombatWeapon::OnPickedUp, CBasePlayer::PlayStepSound, CShatterGlassShard::EmitShatterSound, CBaseCombatCharacter::PlayFootstepSound, CMoveHelperServer::StartSound, CDOTA_UnitInventory::TryItemCombine, CDOTA_BaseNPC_Hero::PurchaseItems, CDOTA_BaseNPC_Hero::HeroLevelUp, CDOTA_Modifier_Courier_TransferItems::OnIntervalThink, CDOTA_Item_EmptyBottle::OnRune (13 total)
// strings: "CBaseEntity::EmitSound"
unsigned __int64 __fastcall CBaseEntity::EmitSound(
        IRecipientFilter *const filter,
        CEntityIndex iEntIndex,
        const char *soundname,
        const Vector *pOrigin,
        float soundtime,
        float *duration)
{
  int m_enabled; // eax
  SndOpEventGuid_t v11; // r13
  unsigned __int64 v12; // r12
  ThreadId_t v13; // r14
  uint64 v14; // rcx
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v18; // rax
  ThreadId_t m_TargetThreadId; // [rsp+0h] [rbp-B0h]
  unsigned __int64 v20; // [rsp+8h] [rbp-A8h]
  bool VProf_915; // [rsp+13h] [rbp-9Dh]
  EmitSound_t params; // [rsp+20h] [rbp-90h] BYREF

  if ( soundname == 0 || *soundname == 0 )
    return 0xFFFFFFFF00000000LL;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_915 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v20 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CBaseEntity::EmitSound" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "CBaseEntity::EmitSound", 0, "Sound", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v18 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v18->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v20 + __rdtsc();
  }
  params.m_bEmitCloseCaption = 1;
  params.m_pSoundName = soundname;
  params.m_flVolume = 1.0;
  params.m_nChannel = 0;
  params.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
  params.m_nFlags = 0;
  params.m_nPitch = 100;
  params.m_bWarnOnMissingCloseCaption = 0;
  params.m_nSpeakerEntity.m_Data = -1;
  params.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&params.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  params.m_flSoundTime = soundtime;
  params.m_pOrigin = pOrigin;
  params.m_pflSoundDuration = duration;
  params.m_bWarnOnDirectWaveReference = 1;
  v11 = CBaseEntity::EmitSound(filter, iEntIndex, &params);
  params.m_UtlVecSoundOrigin.m_Size = 0;
  if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory),
        (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    if ( !VProf_915 )
      return v11;
  }
  else
  {
    CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
    if ( !VProf_915 )
      return v11;
  }
  v12 = __rdtsc();
  if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
  {
    v13 = g_VProfCurrentProfile.m_TargetThreadId;
    if ( v13 == ThreadGetCurrentId() )
    {
      if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
      {
        m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
        if ( m_pParent != 0 )
          g_VProfCurrentProfile.m_pCurNode = m_pParent;
        else
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
      }
      else
      {
        m_pParent = g_VProfCurrentProfile.m_pCurNode;
      }
      g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
    }
  }
  v14 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
  ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
  g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v14 - v12 + __rdtsc();
  return v11;
}


// CBaseEntity::EmitSound  (line 934, @0x0000000002392120, libserver.so)  // inlines: Add, AllocateData, CMicroProfilerGuard, CMicroProfilerSample, CSosFieldData, CSosFieldDataFloat3, CSosFieldDataString, CVProfScope, ClearData, CopyData, EmitSoundByHandle, EnterScope, ExitScope, GetBool, GetDataPtr, GetElapsed, GetInstance, GetInt, GetTimebaseRegister, HasSoundEventParam, InTargetThread, InValidate, IndexToIdentity, Init, Instance, IsEnabled, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, PLAT_CPU_TIME, SetValue, SndOpEventGuid_t, V_memcpy, memcpy, operator=, ~CMicroProfilerGuard, ~CSosFieldData, ~CSosFieldDataFloat3, ~CSosFieldDataString, ~CVProfScope
// calls: CSoundOpGameSystem::StartSoundEvent, operator delete [], operator new [], CSoundOpGameSystem::SetSoundEventParam, CBaseEntity::GetAbsOrigin, ThreadGetCurrentId, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CSosFieldData::ClearData, CVProfile::ExitScope, _Unwind_Resume (13 total)
// callers: MaterialFootstepSound, CFuncRotating::RampPitchVol, CFuncRotating::UpdateSpeed, CBaseButton::ButtonActivate, CMomentaryRotButton::PlaySound, CBaseButton::ReactToDamage, CBaseButton::ButtonUse, CBaseButton::ButtonTouch, CBaseButton::Press, CBaseButton::OnTakeDamage, CBaseDoor::MovingSoundThink, CBaseDoor::DoorHitTop (59 total)
// strings: "CBaseEntity::EmitSound"
SndOpEventGuid_t __fastcall CBaseEntity::EmitSound(
        IRecipientFilter *const filter,
        CEntityIndex iEntIndex,
        const EmitSound_t *const params)
{
  int m_enabled; // r9d
  const Vector *m_pOrigin; // r13
  SndOpEventGuid_t v7; // r14
  SosFieldValueMem_t *m_pData; // rax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rax
  unsigned __int64 v11; // r12
  ThreadId_t v12; // r13
  uint64 v13; // rcx
  ThreadId_t m_TargetThreadId; // r14
  unsigned __int64 v15; // r13
  uint64 m_numTimeBaseTicks; // rcx
  _WORD *p_m_pData; // rax
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v20; // rax
  vec_t x; // [rsp+Ch] [rbp-94h]
  vec_t entIndexa; // [rsp+10h] [rbp-90h]
  __int16 entIndexb; // [rsp+10h] [rbp-90h]
  vec_t y; // [rsp+18h] [rbp-88h]
  bool VProf_936; // [rsp+1Fh] [rbp-81h]
  Vector v27; // [rsp+20h] [rbp-80h] BYREF
  CSosFieldData v28; // [rsp+30h] [rbp-70h] BYREF
  CSosFieldData fieldData; // [rsp+50h] [rbp-50h] BYREF
  SndOpEventGuid_t started; // 0:rax.8

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_936 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v15 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CBaseEntity::EmitSound" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "CBaseEntity::EmitSound", 0, "Sound", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v20 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v20->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v15 + __rdtsc();
  }
  if ( (params->m_nFlags & 0xC000) == 0xC000 )
  {
    m_pOrigin = params->m_pOrigin;
    v7 = (params->m_nForceGuid.m_Data | 0xFFFFFFFF00000000LL);
    if ( m_pOrigin != 0 )
      goto LABEL_4;
  }
  else
  {
    started = CSoundOpGameSystem::StartSoundEvent(
                g_pSoundOpGameSystem,
                filter,
                params->m_pSoundName,
                iEntIndex,
                -1,
                params->m_flSoundTime);
    m_pOrigin = params->m_pOrigin;
    v7 = started;
    if ( m_pOrigin != 0 )
      goto LABEL_4;
  }
  if ( iEntIndex.m_Data > 0x7FFE )
    goto LABEL_14;
  v9 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[iEntIndex.m_Data >> 9];
  if ( v9 == 0 )
    goto LABEL_14;
  v10 = &v9[iEntIndex.m_Data & 0x1FF];
  if ( v10 == 0 || (v10->m_EHandle.m_Index & 0x7FFF) != iEntIndex.m_Data || v10->m_pInstance == 0 )
    goto LABEL_14;
  m_pOrigin = &v27;
  v27 = *CBaseEntity::GetAbsOrigin(v10->m_pInstance);
LABEL_4:
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  fieldData.m_pData = 0;
  entIndexa = m_pOrigin->z;
  y = m_pOrigin->y;
  x = m_pOrigin->x;
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
  if ( fieldData.m_nAllocSize > 0xB )
  {
    m_pData = fieldData.m_pData;
  }
  else
  {
    if ( fieldData.m_pData != 0 && fieldData.m_nAllocSize > 8 )
      operator delete[](fieldData.m_pData);
    m_pData = operator new[](0xCu);
    fieldData.m_pData = m_pData;
    fieldData.m_nAllocSize = 12;
  }
  *(m_pData + 2) = entIndexa;
  *m_pData = x;
  *(m_pData + 1) = y;
  CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, filter, v7, "position", &fieldData, 0, 0);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
  if ( snd_new_visualize.m_pParent->m_Value.m_nValue != 0 )
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 53))(debugoverlay, m_pOrigin, "%s", params->m_pSoundName);
LABEL_14:
  if ( params->m_SpeakerGender == gender_t::GENDER_NONE )
    goto LABEL_15;
  if ( (*(*g_pSoundOpSystem + 272LL))(g_pSoundOpSystem, params->m_pSoundName, "gender") == 0 )
    goto LABEL_15;
  entIndexb = (*(*g_pHostUtils + 104LL))(g_pHostUtils, params->m_SpeakerGender);
  if ( entIndexb == -1 )
    goto LABEL_15;
  v28.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  v28.m_nAllocSize = 0;
  v28.m_pData = 0;
  v28.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 15);
  v28.m_fieldDataType = SOFieldDataType_t::SOFTYPE_STRING_HANDLE;
  if ( v28.m_nAllocSize <= 1 )
  {
    v28.m_nAllocSize = 2;
  }
  else if ( v28.m_nAllocSize > 8 )
  {
    p_m_pData = v28.m_pData;
    if ( v28.m_pData != 0 )
LABEL_35:
      *p_m_pData = entIndexb;
    CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, filter, v7, "gender", &v28, 0, 0);
    if ( v28.m_nAllocSize > 8 && v28.m_pData != 0 )
      operator delete[](v28.m_pData);
LABEL_15:
    if ( VProf_936 )
    {
      v11 = __rdtsc();
      if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
      {
        v12 = g_VProfCurrentProfile.m_TargetThreadId;
        if ( v12 == ThreadGetCurrentId() )
        {
          if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
          {
            m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
            if ( m_pParent != 0 )
              g_VProfCurrentProfile.m_pCurNode = m_pParent;
            else
              m_pParent = g_VProfCurrentProfile.m_pCurNode;
          }
          else
          {
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
          }
          g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
        }
      }
      v13 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v13 - v11 + __rdtsc();
    }
    return v7;
  }
  p_m_pData = &v28.m_pData;
  goto LABEL_35;
}


// CBaseEntity::StopSound  (line 943, @0x0000000002392740, libserver.so)
// calls: CSoundOpGameSystem::StopSoundEvent
// callers: CEntityFlame::UpdateOnRemove, CEntityFlame::FlameThink, CItemGeneric::InputStopAmbientSound, CItemGeneric::UpdateOnRemove, CItemGeneric::InputToggleAmbientSound, CItemGeneric::StopAmbientSound, CItemGeneric::DoPickup, CDOTA_Modifier_Teleporting::OnDestroy, CDOTA_Modifier_Teleporting::OnIntervalThink, DamageImpact
void __fastcall CBaseEntity::StopSound(SndOpEventGuid_t *const guid)
{
  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, guid);
}


// CBaseEntity::StopSound  (line 952, @0x0000000002392760, libserver.so)  // inlines: StopSound, entindex
// calls: CEntityInstance::GetEntityIndex, CSoundOpGameSystem::StopSoundEvent
// callers: CBaseFlex::ClearSceneEvent, Script_StopSoundOn, CFire::UpdateOnRemove, CBasePropDoor::DoorCloseMoveDone, CBasePropDoor::OnStartBlocked, CBaseEntity::ScriptStopSound, CDOTA_Modifier_Lesser_NightCrawler_Pounce::UpdateHorizontalMotion, CDOTA_Item_Tombstone::OnChannelFinish, CDOTA_Modifier_Spawnlord_Master_Freeze_Root::OnDestroy, CDOTA_Modifier_Filler_Buff_Icon::OnDestroy, CDOTA_Modifier_Greevil_Miniboss_Black_Nightmare::OnDestroy, CDOTA_Modifier_Greevil_Miniboss_Blue_IceVortexThinker::OnDestroy (118 total)
void __fastcall CBaseEntity::StopSound(CBaseEntity *const this, const char *soundname)
{
  CEntityIndex v3; // eax

  v3.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, soundname, v3);
}


// CBaseEntity::StopSound  (line 971, @0x00000000023927a0, libserver.so)
// calls: CSoundOpGameSystem::StopSoundEvent
// callers: CEnvMicrophone::SoundStopped
void __fastcall CBaseEntity::StopSound(CEntityIndex iEntIndex, const char *soundname)
{
  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, soundname, iEntIndex);
}


// CBaseEntity::StopSound  (line 977, @0x00000000023927c0, libserver.so)
// calls: CSoundOpGameSystem::StopSoundEvent
// callers: CFuncRotating::UpdateSpeed, CBaseDoor::StopMovingSound, CEnvMicrophone::InputDisable, CFuncMoveLinear::MoveTo, CFuncMoveLinear::StopMoveSound, CPhysicsCannister::Deactivate, CFuncPlat::Blocked, CBaseServerVehicle::StopSound
void __fastcall CBaseEntity::StopSound(
        CEntityIndex iEntIndex,
        int iChannel,
        const char *pSample,
        bool bIsStoppingSpeakerSound)
{
  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, pSample, iEntIndex);
}


// CBaseEntity::EmitAmbientSound  (line 990, @0x00000000023927e0, libserver.so)
// calls: CSoundEmitterSystem::EmitAmbientSound
SndOpEventGuid_t __fastcall CBaseEntity::EmitAmbientSound(
        CSoundEmitterSystem *entindex,
        const Vector *const origin,
        const char *soundname,
        const char *flags,
        float soundtime,
        float *duration,
        int a7,
        float a8)
{
  return CSoundEmitterSystem::EmitAmbientSound(entindex, soundname, soundname, flags, soundtime, duration, a7, a8);
}


// UTIL_EmitAmbientSound  (line 995, @0x000000000239a150, libserver.so)
// calls: CSoundEmitterSystem::EmitAmbientSound
// globals: g_SoundEmitterSystem
SndOpEventGuid_t __fastcall UTIL_EmitAmbientSound(
        CEntityIndex entindex,
        const Vector *const vecOrigin,
        const char *samp,
        float vol,
        soundlevel_t soundlevel,
        int fFlags,
        int pitch,
        float soundtime)
{
  return CSoundEmitterSystem::EmitAmbientSound(
           &g_SoundEmitterSystem,
           entindex,
           vecOrigin,
           samp,
           vol,
           soundlevel,
           fFlags,
           soundtime,
           pitch);
}


// CBaseEntity::GenderExpandString  (line 1000, @0x00000000023927f0, libserver.so)  // inlines: String, ToCStr
// calls: CBaseEntity::GetModelName
// callers: CAI_Expresser::IsValidResponse, InstancedScriptedScene
void __fastcall CBaseEntity::GenderExpandString(CBaseEntity *const this, const char *in, char *out, int maxlen)
{
  void (__fastcall *v7)(IHostUtils *, const char *, const char *, char *, _QWORD); // r15
  const char *v8; // rsi
  const char *v9; // [rsp+0h] [rbp-40h] BYREF

  v7 = *(*g_pHostUtils + 136LL);
  CBaseEntity::GetModelName(&v9, this);
  v8 = "";
  if ( v9 != 0 )
    v8 = v9;
  v7(g_pHostUtils, v8, in, out, maxlen);
}


// CBaseEntity::GetParametersForSound  (line 1005, @0x0000000002392c50, libserver.so)
bool __fastcall CBaseEntity::GetParametersForSound(
        const char *soundname,
        CSoundParameters *const params,
        const char *actormodel)
{
  return 1;
}


// CBaseEntity::PrecacheScriptSound  (line 1018, @0x0000000002392c60, libserver.so)
// callers: PrecacheInstancedScene, GameResponseSystem_Precache, CBreakableProp::Precache, FileWeaponInfo_t::Precache, CBaseCombatCharacter::Precache, CAmbientGeneric::Precache, CBaseButton::Precache, CBaseDoor::Precache, CFuncMoveLinear::Precache, CBasePropDoor::CalcDoorSounds, CBaseServerVehicle::Precache, CDOTAGamerules::PrecacheResourcesFromKeys
void __fastcall CBaseEntity::PrecacheScriptSound(const char *soundname, IEntityResourceManifest *pManifest)
{
  ;
}


// CBaseEntity::PrecacheScriptSound  (line 1022, @0x0000000002392c70, libserver.so)
// callers: CFuncRotating::Precache, CPointCommentaryNode::Precache, CBaseDoor::Precache, CItemSoda::Precache, CEnvGunfire::Precache, CEnvAirStrikeIndoorEffect::Precache, CEnvAirStrikeOutdoorEffect::Precache, CMessage::Precache, CEnvSpark::Precache, CEnvExplosion::Precache, CFire::Precache, CBreakable::Precache (28 total)
void __fastcall CBaseEntity::PrecacheScriptSound(const char *soundname, const CEntityPrecacheContext *pContext)
{
  ;
}


// CBaseEntity::Script_PrecacheScriptSound  (line 1029, @0x0000000002392c80, libserver.so)
void __fastcall CBaseEntity::Script_PrecacheScriptSound(CBaseEntity *const this, const char *soundname)
{
  ;
}


// CBaseEntity::PrefetchScriptSound  (line 1037, @0x0000000002392c90, libserver.so)
void __fastcall CBaseEntity::PrefetchScriptSound(const char *soundname)
{
  ;
}


// CBaseEntity::GetSoundDuration  (line 1047, @0x0000000002392ca0, libserver.so)
// callers: CAI_Expresser::GetResponseDuration, CSceneEntity::GenerateSceneForSound, CBaseEntity::ScriptSoundDuration
float __fastcall CBaseEntity::GetSoundDuration(const char *soundname, const char *actormodel)
{
  float (__fastcall *v3)(char *, const char *, __int64, float); // r13
  __int64 v4; // rax

  v3 = *(*(g_pSoundOpSystem + 1) + 192LL);
  v4 = (*(*g_pHostUtils + 112LL))(g_pHostUtils, actormodel);
  return v3(g_pSoundOpSystem + 8, soundname, v4, 2.0);
}


// CBaseEntity::PrecacheSound  (line 1084, @0x0000000002392f50, libserver.so)
// calls: CommandLine, Warning
// strings: "-herophotos", "Direct precache of %s\n"
bool __fastcall CBaseEntity::PrecacheSound(const char *name)
{
  __int64 v2; // rax
  int v3; // eax
  bool v4; // dl

  v2 = CommandLine(name);
  v3 = (*(*v2 + 64LL))(v2, "-herophotos");
  v4 = 0;
  if ( v3 == 0 )
  {
    Warning("Direct precache of %s\n", name);
    return 1;
  }
  return v4;
}


// CBaseEntity::PrefetchSound  (line 1102, @0x0000000002392fa0, libserver.so)
void __fastcall CBaseEntity::PrefetchSound(const char *name)
{
  ;
}


// GetCaptionHash  (line 1107, @0x00000000023a53e0, libserver.so)
// calls: CSoundEmitterSystem::GetCaptionHash
// globals: g_SoundEmitterSystem
bool __fastcall GetCaptionHash(const char *pchStringName, bool bWarnIfMissing, unsigned int *const hash)
{
  return CSoundEmitterSystem::GetCaptionHash(&g_SoundEmitterSystem, pchStringName, bWarnIfMissing, hash);
}


// CanEmitCaption  (line 1112, @0x00000000023a6a90, libserver.so)
// calls: CCaptionRepeatMgr::CanEmitCaption
// globals: g_CaptionRepeats
bool __fastcall CanEmitCaption(unsigned int hash)
{
  return CCaptionRepeatMgr::CanEmitCaption(&g_CaptionRepeats, hash);
}


