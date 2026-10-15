
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CommandCompletionCallback_V1_Adaptor<NBDebugAutocomplete>  (line 102, @0x0000000002f21780, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, EnsureCapacity, GrowMemory, memcpy, operator[], ~CUtlString
// calls: NBDebugAutocomplete, CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Grow, memcpy, _Unwind_Resume
// globals: CommandCompletionCallback_V1_Adaptor<&(NBDebugAutocomplete(char const*,char (*)[64]))>(char const*,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> &)::command
void __fastcall CommandCompletionCallback_V1_Adaptor<&(NBDebugAutocomplete(char const*,char (*)[64]))>(
        const char *pPartial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  int v3; // eax
  int v4; // r15d
  uint32 m_nGrowSize; // eax
  CUtlString *v6; // rsi
  __int64 v7; // rax
  const char *v8; // r12
  char *v9; // r15
  CUtlString *v10; // r13
  const char *v11; // rax
  __int64 m_Size; // r13
  int v13; // eax
  CUtlString *m_pMemory; // r12
  CUtlString *v15; // rax
  CUtlString v16; // [rsp+10h] [rbp-40h] BYREF

  v3 = NBDebugAutocomplete(
         pPartial,
         CommandCompletionCallback_V1_Adaptor<&(NBDebugAutocomplete(char const*,char (*)[64]))>(char const*,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> &)::commandsOld);
  v4 = v3;
  if ( v3 != 0 )
  {
    if ( v3 > commands->m_Memory.m_nAllocationCount )
    {
      m_nGrowSize = commands->m_Memory.m_nGrowSize;
      if ( (m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (m_nGrowSize & 0xC0000000) != 0 )
        {
          m_pMemory = commands->m_Memory.m_pMemory;
          v15 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v4);
          commands->m_Memory.m_pMemory = v15;
          if ( m_pMemory != 0 )
            memcpy(v15, m_pMemory, 8LL * commands->m_Memory.m_nAllocationCount);
          commands->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          v6 = commands->m_Memory.m_pMemory;
          v7 = *g_pMemAlloc;
          if ( v6 != 0 )
            commands->m_Memory.m_pMemory = (*(v7 + 8))(g_pMemAlloc, v6, 8LL * v4);
          else
            commands->m_Memory.m_pMemory = (*v7)(g_pMemAlloc, 8LL * v4);
        }
        commands->m_Memory.m_nAllocationCount = v4;
      }
    }
    if ( v4 > 0 )
    {
      v8 = CommandCompletionCallback_V1_Adaptor<&(NBDebugAutocomplete(char const*,char (*)[64]))>(char const*,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> &)::commandsOld;
      v9 = &CommandCompletionCallback_V1_Adaptor<&(NBDebugAutocomplete(char const*,char (*)[64]))>(char const*,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> &)::commandsOld[64 * (v4 - 1) + 64];
      do
      {
        v16.m_pString = 0;
        CUtlString::Set(&v16, v8);
        m_Size = commands->m_Size;
        v13 = commands->m_Size;
        if ( m_Size == commands->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CUtlString,int>::Grow(&commands->m_Memory, 1);
          v13 = commands->m_Size;
        }
        commands->m_Size = v13 + 1;
        v10 = &commands->m_Memory.m_pMemory[m_Size];
        if ( v10 != 0 )
        {
          v10->m_pString = 0;
          v11 = CUtlString::Get(&v16);
          CUtlString::Set(v10, v11);
        }
        if ( v16.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v16);
        v8 += 64;
      }
      while ( v8 != v9 );
    }
  }
}


// ConVar::GetFloatVirtualized  (line 497, @0x0000000001b2c300, libserver.so)  // inlines: GetFloat
float __fastcall ConVar::GetFloatVirtualized(const ConVar *const this)
{
  return this->m_pParent->m_Value.m_fValue;
}


// ConVar::GetIntVirtualized  (line 503, @0x0000000001b2c310, libserver.so)  // inlines: GetInt
int __fastcall ConVar::GetIntVirtualized(const ConVar *const this)
{
  return this->m_pParent->m_Value.m_nValue;
}


// ConVar::GetBoolVirtualized  (line 508, @0x0000000001b2c320, libserver.so)  // inlines: GetBool, GetInt
bool __fastcall ConVar::GetBoolVirtualized(const ConVar *const this)
{
  return this->m_pParent->m_Value.m_nValue != 0;
}


// CSplitScreenAddedConVar::~CSplitScreenAddedConVar  (line 622, @0x0000000001b2c660, libserver.so)
// calls: ConVar::~ConVar
void __fastcall CSplitScreenAddedConVar::~CSplitScreenAddedConVar(CSplitScreenAddedConVar *const this)
{
  this->_vptr_ConCommandBase = off_3F79230;
  this->_vptr_IConVar = &off_3F79330;
  ConVar::~ConVar(this);
}


// CSplitScreenAddedConVar::~CSplitScreenAddedConVar  (line 622, @0x0000000001b2c680, libserver.so)  // inlines: ~CSplitScreenAddedConVar
// calls: ConVar::~ConVar, operator delete
void __fastcall CSplitScreenAddedConVar::~CSplitScreenAddedConVar(CSplitScreenAddedConVar *const this)
{
  this->_vptr_ConCommandBase = off_3F79230;
  this->_vptr_IConVar = &off_3F79330;
  ConVar::~ConVar(this);
  operator delete(this);
}


// CSplitScreenAddedConVar::GetBaseName  (line 670, @0x0000000001b2c340, libserver.so)
const char *__fastcall CSplitScreenAddedConVar::GetBaseName(const CSplitScreenAddedConVar *const this)
{
  return (*(this->m_pBaseVar->_vptr_ConCommandBase + 8))(this->m_pBaseVar);
}


// CSplitScreenAddedConVar::GetSplitScreenPlayerSlot  (line 681, @0x0000000001b2c370, libserver.so)
CSplitScreenSlot __fastcall CSplitScreenAddedConVar::GetSplitScreenPlayerSlot(
        const CSplitScreenAddedConVar *const this)
{
  return this->m_nSplitScreenSlot.m_Data;
}


// CConCommandMemberAccessor<CEntityDebugGameSystem>::~CConCommandMemberAccessor  (line 1012, @0x0000000001f74340, libserver.so)
// calls: ConCommandBase::Shutdown, ConCommand::~ConCommand
// callers: CEntityDebugGameSystem::CEntityDebugGameSystem
void __fastcall CConCommandMemberAccessor<CEntityDebugGameSystem>::~CConCommandMemberAccessor(
        CConCommandMemberAccessor<CEntityDebugGameSystem> *const this)
{
  this->_vptr_ConCommandBase = &off_3FCADF0;
  this->_vptr_ICommandCallback = &off_3FCAE98;
  this->_vptr_ICommandCompletionCallback = &off_3FCAEB0;
  ConCommandBase::Shutdown(this);
  ConCommand::~ConCommand(this);
}


// CConCommandMemberAccessor<CDecalGameSystem>::~CConCommandMemberAccessor  (line 1012, @0x0000000001f74380, libserver.so)
// calls: ConCommandBase::Shutdown, ConCommand::~ConCommand
// callers: CDecalGameSystem::CDecalGameSystem
void __fastcall CConCommandMemberAccessor<CDecalGameSystem>::~CConCommandMemberAccessor(
        CConCommandMemberAccessor<CDecalGameSystem> *const this)
{
  this->_vptr_ConCommandBase = &off_3FCBC50;
  this->_vptr_ICommandCallback = &off_3FCBCF8;
  this->_vptr_ICommandCompletionCallback = &off_3FCBD10;
  ConCommandBase::Shutdown(this);
  ConCommand::~ConCommand(this);
}


// CConCommandMemberAccessor<CSpawnGroupMgrGameSystem>::~CConCommandMemberAccessor  (line 1012, @0x0000000001f743c0, libserver.so)
// calls: ConCommandBase::Shutdown, ConCommand::~ConCommand
// callers: CSpawnGroupMgrGameSystem::CSpawnGroupMgrGameSystem
void __fastcall CConCommandMemberAccessor<CSpawnGroupMgrGameSystem>::~CConCommandMemberAccessor(
        CConCommandMemberAccessor<CSpawnGroupMgrGameSystem> *const this)
{
  this->_vptr_ConCommandBase = &off_3FCCDB0;
  this->_vptr_ICommandCallback = &off_3FCCE58;
  this->_vptr_ICommandCompletionCallback = &off_3FCCE70;
  ConCommandBase::Shutdown(this);
  ConCommand::~ConCommand(this);
}


// CConCommandMemberAccessor<CSoundOpGameSystem>::~CConCommandMemberAccessor  (line 1012, @0x0000000001f74400, libserver.so)
// calls: ConCommandBase::Shutdown, ConCommand::~ConCommand
// callers: CSoundOpGameSystem::CSoundOpGameSystem
void __fastcall CConCommandMemberAccessor<CSoundOpGameSystem>::~CConCommandMemberAccessor(
        CConCommandMemberAccessor<CSoundOpGameSystem> *const this)
{
  this->_vptr_ConCommandBase = &off_3FCD990;
  this->_vptr_ICommandCallback = &off_3FCDA38;
  this->_vptr_ICommandCompletionCallback = &off_3FCDA50;
  ConCommandBase::Shutdown(this);
  ConCommand::~ConCommand(this);
}


// CConCommandMemberAccessor<CEntityDebugGameSystem>::~CConCommandMemberAccessor  (line 1012, @0x0000000001f77e30, libserver.so)  // inlines: ~CConCommandMemberAccessor
// calls: ConCommandBase::Shutdown, ConCommand::~ConCommand, operator delete
void __fastcall CConCommandMemberAccessor<CEntityDebugGameSystem>::~CConCommandMemberAccessor(
        CConCommandMemberAccessor<CEntityDebugGameSystem> *const this)
{
  this->_vptr_ConCommandBase = &off_3FCADF0;
  this->_vptr_ICommandCallback = &off_3FCAE98;
  this->_vptr_ICommandCompletionCallback = &off_3FCAEB0;
  ConCommandBase::Shutdown(this);
  ConCommand::~ConCommand(this);
  operator delete(this);
}


// CConCommandMemberAccessor<CSoundOpGameSystem>::~CConCommandMemberAccessor  (line 1012, @0x0000000001f77f00, libserver.so)  // inlines: ~CConCommandMemberAccessor
// calls: ConCommandBase::Shutdown, ConCommand::~ConCommand, operator delete
void __fastcall CConCommandMemberAccessor<CSoundOpGameSystem>::~CConCommandMemberAccessor(
        CConCommandMemberAccessor<CSoundOpGameSystem> *const this)
{
  this->_vptr_ConCommandBase = &off_3FCD990;
  this->_vptr_ICommandCallback = &off_3FCDA38;
  this->_vptr_ICommandCompletionCallback = &off_3FCDA50;
  ConCommandBase::Shutdown(this);
  ConCommand::~ConCommand(this);
  operator delete(this);
}


// CConCommandMemberAccessor<CSpawnGroupMgrGameSystem>::~CConCommandMemberAccessor  (line 1012, @0x0000000001f78010, libserver.so)  // inlines: ~CConCommandMemberAccessor
// calls: ConCommandBase::Shutdown, ConCommand::~ConCommand, operator delete
void __fastcall CConCommandMemberAccessor<CSpawnGroupMgrGameSystem>::~CConCommandMemberAccessor(
        CConCommandMemberAccessor<CSpawnGroupMgrGameSystem> *const this)
{
  this->_vptr_ConCommandBase = &off_3FCCDB0;
  this->_vptr_ICommandCallback = &off_3FCCE58;
  this->_vptr_ICommandCompletionCallback = &off_3FCCE70;
  ConCommandBase::Shutdown(this);
  ConCommand::~ConCommand(this);
  operator delete(this);
}


// CConCommandMemberAccessor<CDecalGameSystem>::~CConCommandMemberAccessor  (line 1012, @0x0000000001f78060, libserver.so)  // inlines: ~CConCommandMemberAccessor
// calls: ConCommandBase::Shutdown, ConCommand::~ConCommand, operator delete
void __fastcall CConCommandMemberAccessor<CDecalGameSystem>::~CConCommandMemberAccessor(
        CConCommandMemberAccessor<CDecalGameSystem> *const this)
{
  this->_vptr_ConCommandBase = &off_3FCBC50;
  this->_vptr_ICommandCallback = &off_3FCBCF8;
  this->_vptr_ICommandCompletionCallback = &off_3FCBD10;
  ConCommandBase::Shutdown(this);
  ConCommand::~ConCommand(this);
  operator delete(this);
}


// CConCommandMemberAccessor<CLoopModeGame>::~CConCommandMemberAccessor  (line 1012, @0x00000000020f6010, libserver.so)
// calls: ConCommandBase::Shutdown, ConCommand::~ConCommand
// callers: CLoopModeGame::CLoopModeGame
void __fastcall CConCommandMemberAccessor<CLoopModeGame>::~CConCommandMemberAccessor(
        CConCommandMemberAccessor<CLoopModeGame> *const this)
{
  this->_vptr_ConCommandBase = &off_3FFB770;
  this->_vptr_ICommandCallback = &off_3FFB818;
  this->_vptr_ICommandCompletionCallback = &off_3FFB830;
  ConCommandBase::Shutdown(this);
  ConCommand::~ConCommand(this);
}


// CConCommandMemberAccessor<CLoopModeGame>::~CConCommandMemberAccessor  (line 1012, @0x00000000020fb910, libserver.so)  // inlines: ~CConCommandMemberAccessor
// calls: ConCommandBase::Shutdown, ConCommand::~ConCommand, operator delete
void __fastcall CConCommandMemberAccessor<CLoopModeGame>::~CConCommandMemberAccessor(
        CConCommandMemberAccessor<CLoopModeGame> *const this)
{
  this->_vptr_ConCommandBase = &off_3FFB770;
  this->_vptr_ICommandCallback = &off_3FFB818;
  this->_vptr_ICommandCompletionCallback = &off_3FFB830;
  ConCommandBase::Shutdown(this);
  ConCommand::~ConCommand(this);
  operator delete(this);
}


// CConCommandMemberAccessor<CSoundOpGameSystem>::CommandCallback  (line 1022, @0x0000000001f72d50, libserver.so)
void __fastcall CConCommandMemberAccessor<CSoundOpGameSystem>::CommandCallback(
        CConCommandMemberAccessor<CSoundOpGameSystem> *const this,
        const CCommandContext *const ctx,
        const CCommand *const command)
{
  void (*pfn)(CSoundOpGameSystem *, const CCommandContext *, const CCommand *); // rcx
  CSoundOpGameSystem *v4; // rax

  pfn = this->m_Func.__pfn;
  v4 = (this->m_pOwner + this->m_Func.__delta);
  if ( (pfn & 1) != 0 )
    pfn = *(v4->_vptr_IGameSystem + pfn - 1);
  pfn(v4, ctx, command);
}


// CConCommandMemberAccessor<CSpawnGroupMgrGameSystem>::CommandCallback  (line 1022, @0x0000000001f72fc0, libserver.so)
void __fastcall CConCommandMemberAccessor<CSpawnGroupMgrGameSystem>::CommandCallback(
        CConCommandMemberAccessor<CSpawnGroupMgrGameSystem> *const this,
        const CCommandContext *const ctx,
        const CCommand *const command)
{
  void (*pfn)(CSpawnGroupMgrGameSystem *, const CCommandContext *, const CCommand *); // rcx
  CSpawnGroupMgrGameSystem *v4; // rax

  pfn = this->m_Func.__pfn;
  v4 = (this->m_pOwner + this->m_Func.__delta);
  if ( (pfn & 1) != 0 )
    pfn = *(v4->_vptr_IGameSpawnGroupMgr + pfn - 1);
  pfn(v4, ctx, command);
}


// CConCommandMemberAccessor<CDecalGameSystem>::CommandCallback  (line 1022, @0x0000000001f735d0, libserver.so)
void __fastcall CConCommandMemberAccessor<CDecalGameSystem>::CommandCallback(
        CConCommandMemberAccessor<CDecalGameSystem> *const this,
        const CCommandContext *const ctx,
        const CCommand *const command)
{
  void (*pfn)(CDecalGameSystem *, const CCommandContext *, const CCommand *); // rcx
  CDecalGameSystem *v4; // rax

  pfn = this->m_Func.__pfn;
  v4 = (this->m_pOwner + this->m_Func.__delta);
  if ( (pfn & 1) != 0 )
    pfn = *(v4->_vptr_IGameSystem + pfn - 1);
  pfn(v4, ctx, command);
}


// CConCommandMemberAccessor<CEntityDebugGameSystem>::CommandCallback  (line 1022, @0x0000000001f73a50, libserver.so)
void __fastcall CConCommandMemberAccessor<CEntityDebugGameSystem>::CommandCallback(
        CConCommandMemberAccessor<CEntityDebugGameSystem> *const this,
        const CCommandContext *const ctx,
        const CCommand *const command)
{
  void (*pfn)(CEntityDebugGameSystem *, const CCommandContext *, const CCommand *); // rcx
  CEntityDebugGameSystem *v4; // rax

  pfn = this->m_Func.__pfn;
  v4 = (this->m_pOwner + this->m_Func.__delta);
  if ( (pfn & 1) != 0 )
    pfn = *(v4->_vptr_IGameSystem + pfn - 1);
  pfn(v4, ctx, command);
}


// CConCommandMemberAccessor<CLoopModeGame>::CommandCallback  (line 1022, @0x00000000020f2570, libserver.so)
void __fastcall CConCommandMemberAccessor<CLoopModeGame>::CommandCallback(
        CConCommandMemberAccessor<CLoopModeGame> *const this,
        const CCommandContext *const ctx,
        const CCommand *const command)
{
  void (*pfn)(CLoopModeGame *, const CCommandContext *, const CCommand *); // rcx
  CLoopModeGame *v4; // rax

  pfn = this->m_Func.__pfn;
  v4 = (this->m_pOwner + this->m_Func.__delta);
  if ( (pfn & 1) != 0 )
    pfn = *(v4->_vptr_ILoopMode + pfn - 1);
  pfn(v4, ctx, command);
}


// CConCommandMemberAccessor<CSoundOpGameSystem>::CommandCompletionCallback  (line 1028, @0x0000000001f72d90, libserver.so)
int __fastcall CConCommandMemberAccessor<CSoundOpGameSystem>::CommandCompletionCallback(
        CConCommandMemberAccessor<CSoundOpGameSystem> *const this,
        const char *pPartial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  void (*pfn)(CSoundOpGameSystem *, const char *, CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *); // rdx
  void (__fastcall *v5)(char *, const char *, CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const); // rcx

  pfn = this->m_CompletionFunc.__pfn;
  v5 = pfn;
  if ( (pfn & 1) != 0 )
    v5 = *(*(&this->m_pOwner->_vptr_IGameSystem + this->m_CompletionFunc.__delta) + pfn - 1);
  v5(this->m_pOwner + this->m_CompletionFunc.__delta, pPartial, commands);
  return commands->m_Size;
}


// CConCommandMemberAccessor<CSpawnGroupMgrGameSystem>::CommandCompletionCallback  (line 1028, @0x0000000001f73000, libserver.so)
int __fastcall CConCommandMemberAccessor<CSpawnGroupMgrGameSystem>::CommandCompletionCallback(
        CConCommandMemberAccessor<CSpawnGroupMgrGameSystem> *const this,
        const char *pPartial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  void (*pfn)(CSpawnGroupMgrGameSystem *, const char *, CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *); // rdx
  void (__fastcall *v5)(char *, const char *, CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const); // rcx

  pfn = this->m_CompletionFunc.__pfn;
  v5 = pfn;
  if ( (pfn & 1) != 0 )
    v5 = *(*(&this->m_pOwner->_vptr_IGameSpawnGroupMgr + this->m_CompletionFunc.__delta) + pfn - 1);
  v5(this->m_pOwner + this->m_CompletionFunc.__delta, pPartial, commands);
  return commands->m_Size;
}


// CConCommandMemberAccessor<CDecalGameSystem>::CommandCompletionCallback  (line 1028, @0x0000000001f73610, libserver.so)
int __fastcall CConCommandMemberAccessor<CDecalGameSystem>::CommandCompletionCallback(
        CConCommandMemberAccessor<CDecalGameSystem> *const this,
        const char *pPartial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  void (*pfn)(CDecalGameSystem *, const char *, CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *); // rdx
  void (__fastcall *v5)(char *, const char *, CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const); // rcx

  pfn = this->m_CompletionFunc.__pfn;
  v5 = pfn;
  if ( (pfn & 1) != 0 )
    v5 = *(*(&this->m_pOwner->_vptr_IGameSystem + this->m_CompletionFunc.__delta) + pfn - 1);
  v5(this->m_pOwner + this->m_CompletionFunc.__delta, pPartial, commands);
  return commands->m_Size;
}


// CConCommandMemberAccessor<CEntityDebugGameSystem>::CommandCompletionCallback  (line 1028, @0x0000000001f73a90, libserver.so)
int __fastcall CConCommandMemberAccessor<CEntityDebugGameSystem>::CommandCompletionCallback(
        CConCommandMemberAccessor<CEntityDebugGameSystem> *const this,
        const char *pPartial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  void (*pfn)(CEntityDebugGameSystem *, const char *, CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *); // rdx
  void (__fastcall *v5)(char *, const char *, CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const); // rcx

  pfn = this->m_CompletionFunc.__pfn;
  v5 = pfn;
  if ( (pfn & 1) != 0 )
    v5 = *(*(&this->m_pOwner->_vptr_IGameSystem + this->m_CompletionFunc.__delta) + pfn - 1);
  v5(this->m_pOwner + this->m_CompletionFunc.__delta, pPartial, commands);
  return commands->m_Size;
}


// CConCommandMemberAccessor<CLoopModeGame>::CommandCompletionCallback  (line 1028, @0x00000000020f25b0, libserver.so)
int __fastcall CConCommandMemberAccessor<CLoopModeGame>::CommandCompletionCallback(
        CConCommandMemberAccessor<CLoopModeGame> *const this,
        const char *pPartial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  void (*pfn)(CLoopModeGame *, const char *, CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *); // rdx
  void (__fastcall *v5)(char *, const char *, CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const); // rcx

  pfn = this->m_CompletionFunc.__pfn;
  v5 = pfn;
  if ( (pfn & 1) != 0 )
    v5 = *(*(&this->m_pOwner->_vptr_ILoopMode + this->m_CompletionFunc.__delta) + pfn - 1);
  v5(this->m_pOwner + this->m_CompletionFunc.__delta, pPartial, commands);
  return commands->m_Size;
}


