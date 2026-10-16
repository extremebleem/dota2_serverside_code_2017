
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAHLTVDirector::~CDOTAHLTVDirector  (line 15, @0x00000000025caf80, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CHLTVDirector::~CHLTVDirector, CUtlMemory<int, int>::Purge
void __fastcall CDOTAHLTVDirector::~CDOTAHLTVDirector(CDOTAHLTVDirector *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_replayUploadChildren.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameEventListener2 = off_41018F0;  // vptr: CDOTAHLTVDirector
  this->_vptr_IGameSystem = &off_4101A50;
  this->m_replayUploadChildren.m_Size = 0;
  this->_vptr_IHLTVDirector = off_4101BA0;
  if ( !v2
    || (p_m_Memory = &this->m_replayUploadChildren.m_Memory,
        CUtlMemory<int,int>::Purge(&this->m_replayUploadChildren.m_Memory),
        (this->m_replayUploadChildren.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CHLTVDirector::~CHLTVDirector(this);
  }
  else
  {
    CUtlMemory<int,int>::Purge(p_m_Memory);
    CHLTVDirector::~CHLTVDirector(this);
  }
}


// CDOTAHLTVDirector::~CDOTAHLTVDirector  (line 15, @0x00000000025cb0b0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTAHLTVDirector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CHLTVDirector::~CHLTVDirector, operator delete, CUtlMemory<int, int>::Purge
void __fastcall CDOTAHLTVDirector::~CDOTAHLTVDirector(CDOTAHLTVDirector *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_replayUploadChildren.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameEventListener2 = off_41018F0;  // vptr: CDOTAHLTVDirector
  this->_vptr_IGameSystem = &off_4101A50;
  this->m_replayUploadChildren.m_Size = 0;
  this->_vptr_IHLTVDirector = off_4101BA0;
  if ( v2 )
  {
    p_m_Memory = &this->m_replayUploadChildren.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_replayUploadChildren.m_Memory);
    if ( (this->m_replayUploadChildren.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  CHLTVDirector::~CHLTVDirector(this);
  operator delete(this);
}


// CDOTAHLTVDirector::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 17, @0x00000000025c4de0, libserver.so)
void __fastcall CDOTAHLTVDirector::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CDOTAHLTVDirector *const this)
{
  ;
}


// CDOTAHLTVDirector::DoesGameSystemReallocate  (line 17, @0x00000000025c4e00, libserver.so)
// globals: CDOTAHLTVDirector::sm_Factory
bool __fastcall CDOTAHLTVDirector::DoesGameSystemReallocate(const CDOTAHLTVDirector *const this)
{
  return (*(CDOTAHLTVDirector::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTAHLTVDirector::sm_Factory);
}


// CDOTAHLTVDirector::SetGameSystemGlobalPtrs  (line 17, @0x00000000025c85b0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTAHLTVDirector::sm_Factory
void __fastcall CDOTAHLTVDirector::SetGameSystemGlobalPtrs(CDOTAHLTVDirector *const this, void *pValue)
{
  if ( CHLTVDirector::sm_Factory != 0 )
    (*(CHLTVDirector::sm_Factory->_vptr_IGameSystemFactory + 7))(CHLTVDirector::sm_Factory);
  if ( CDOTAHLTVDirector::sm_Factory != 0 )
    (*(CDOTAHLTVDirector::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTAHLTVDirector::sm_Factory, pValue);
}


