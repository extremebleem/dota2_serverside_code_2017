
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CResourceManifestPrerequisite::GetPrerequisiteStatus  (line 224, @0x0000000001f77360, libserver.so)
__int64 __fastcall CResourceManifestPrerequisite::GetPrerequisiteStatus(
        CResourceManifestPrerequisite *const this,
        double a2,
        float64 flTimeoutTime)
{
  int m_Size; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // r13

  m_Size = this->m_hResourceManifests.m_Size;
  if ( m_Size <= 0 )
    return 1;
  v5 = 0;
  v6 = 8LL * (m_Size - 1) + 8;
  while ( (*(*g_pResourceSystem + 208LL))(
            g_pResourceSystem,
            this->m_hResourceManifests.m_Memory.m_pMemory[v5 / 8],
            a2,
            flTimeoutTime) != 0 )
  {
    v5 += 8LL;
    if ( v5 == v6 )
      return 1;
  }
  return 0;
}


// CResourceManifestPrerequisite::GetName  (line 236, @0x0000000001f71a10, libserver.so)
// strings: "CResourceManifestPrerequisite"
const char *__fastcall CResourceManifestPrerequisite::GetName(const CResourceManifestPrerequisite *const this)
{
  return "CResourceManifestPrerequisite";
}


// CResourceManifestPrerequisite::~CResourceManifestPrerequisite  (line 241, @0x0000000001f78d40, libserver.so)  // inlines: Purge, RemoveAll, RemoveAllManifests, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IPrerequisite
// calls: CUtlMemory<HResourceManifest__*, int>::Purge
void __fastcall CResourceManifestPrerequisite::~CResourceManifestPrerequisite(
        CResourceManifestPrerequisite *const this)
{
  int m_Size; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  HResourceManifest__ *v5; // rsi
  bool v6; // zf

  this->_vptr_IPrerequisite = off_3FCABD0;
  m_Size = this->m_hResourceManifests.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 8LL * (m_Size - 1) + 8;
    do
    {
      v5 = this->m_hResourceManifests.m_Memory.m_pMemory[v3 / 8];
      v3 += 8LL;
      (*(*g_pResourceSystem + 216LL))(g_pResourceSystem, v5);
    }
    while ( v3 != v4 );
  }
  v6 = (this->m_hResourceManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hResourceManifests.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<HResourceManifest__ *,int>::Purge(&this->m_hResourceManifests.m_Memory);
    if ( (this->m_hResourceManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<HResourceManifest__ *,int>::Purge(&this->m_hResourceManifests.m_Memory);
  }
  this->_vptr_IPrerequisite = off_3FCAB50;
}


// CResourceManifestPrerequisite::~CResourceManifestPrerequisite  (line 241, @0x0000000001f78de0, libserver.so)  // inlines: Purge, RemoveAll, RemoveAllManifests, ~CResourceManifestPrerequisite, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IPrerequisite
// calls: operator delete, CUtlMemory<HResourceManifest__*, int>::Purge
void __fastcall CResourceManifestPrerequisite::~CResourceManifestPrerequisite(
        CResourceManifestPrerequisite *const this)
{
  int m_Size; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  HResourceManifest__ *v5; // rsi
  bool v6; // zf

  this->_vptr_IPrerequisite = off_3FCABD0;
  m_Size = this->m_hResourceManifests.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 8LL * (m_Size - 1) + 8;
    do
    {
      v5 = this->m_hResourceManifests.m_Memory.m_pMemory[v3 / 8];
      v3 += 8LL;
      (*(*g_pResourceSystem + 216LL))(g_pResourceSystem, v5);
    }
    while ( v3 != v4 );
  }
  v6 = (this->m_hResourceManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hResourceManifests.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<HResourceManifest__ *,int>::Purge(&this->m_hResourceManifests.m_Memory);
    if ( (this->m_hResourceManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<HResourceManifest__ *,int>::Purge(&this->m_hResourceManifests.m_Memory);
  }
  this->_vptr_IPrerequisite = off_3FCAB50;
  operator delete(this);
}


// CLoopModeBase::LoopInit  (line 406, @0x00000000020fb6f0, libserver.so)
// calls: operator new
bool __fastcall CLoopModeBase::LoopInit(
        CLoopModeBase *const this,
        KeyValues *pKeyValues,
        ILoopModePrerequisiteRegistry *pRegistry)
{
  CResourceManifestPrerequisite *v5; // rax

  v5 = operator new(0x28u);
  v5->_vptr_IPrerequisite = off_3FCABD0;
  v5->m_nRefCount = 0;
  v5->m_hResourceManifests.m_Size = 0;
  v5->m_hResourceManifests.m_Memory.m_pMemory = 0;
  v5->m_hResourceManifests.m_Memory.m_nAllocationCount = 0;
  v5->m_hResourceManifests.m_Memory.m_nGrowSize = 0;
  this->m_pRequiredManifests = v5;
  (*(v5->_vptr_IPrerequisite + 2))(v5);
  (**pRegistry)(pRegistry, this->m_pRequiredManifests);
  return 1;
}


// CLoopModeBase::LoopShutdown  (line 414, @0x00000000020f1010, libserver.so)
void __fastcall CLoopModeBase::LoopShutdown(CLoopModeBase *const this)
{
  CResourceManifestPrerequisite *m_pRequiredManifests; // rdi

  m_pRequiredManifests = this->m_pRequiredManifests;
  if ( m_pRequiredManifests != 0 )
  {
    (*(m_pRequiredManifests->_vptr_IPrerequisite + 3))(m_pRequiredManifests);
    this->m_pRequiredManifests = 0;
  }
}


// CLoopModeBase::OnLoopActivate  (line 423, @0x00000000020f1040, libserver.so)
void __fastcall CLoopModeBase::OnLoopActivate(
        CLoopModeBase *const this,
        const EngineLoopState_t *const state,
        CEventDispatcher<CEventIDManager_Default> *pEventDispatcher)
{
  ;
}


// CLoopModeBase::OnLoopDeactivate  (line 424, @0x00000000020f1050, libserver.so)
void __fastcall CLoopModeBase::OnLoopDeactivate(
        CLoopModeBase *const this,
        const EngineLoopState_t *const state,
        CEventDispatcher<CEventIDManager_Default> *pEventDispatcher)
{
  ;
}


// CLoopModeBase::RegisterEventMap  (line 425, @0x00000000020f1060, libserver.so)
void __fastcall CLoopModeBase::RegisterEventMap(
        CLoopModeBase *const this,
        CEventDispatcher<CEventIDManager_Default> *pEventDispatcher,
        EventMapRegistrationType_t nRegistrationType)
{
  ;
}


// CLoopModeBase::HandleInputEvent  (line 426, @0x00000000020f1070, libserver.so)
InputHandlerResult_t __fastcall CLoopModeBase::HandleInputEvent(
        CLoopModeBase *const this,
        const InputEvent_t *const event,
        CSplitScreenSlot nSplitScreenPlayerSlot)
{
  return InputHandlerResult_t::IHR_INPUT_IGNORED;
}


// CLoopModeBase::AddViewsToSceneSystem  (line 427, @0x00000000020f1080, libserver.so)
ISceneView *__fastcall CLoopModeBase::AddViewsToSceneSystem(
        CLoopModeBase *const this,
        const EngineLoopState_t *const state,
        float64 flRenderTime,
        float64 flRealTime,
        const RenderViewport_t *const viewport,
        const RHBackColorBuffer_t *const backBufferDesc)
{
  return backBufferDesc->m_pView;
}


