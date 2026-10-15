
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPropData::~CPropData  (line 204, @0x0000000002057970, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CPropData::propdata_breakablechunk_t, CUtlMemory<CPropData::propdata_breakablechunk_t, int> >::RemoveAll, IGameSystem::~IGameSystem, CUtlMemory<CPropData::propdata_breakablechunk_t, int>::Purge
void __fastcall CPropData::~CPropData(CPropData *const this)
{
  this->_vptr_IGameSystem = off_3FEAFB0;
  CUtlVectorBase<CPropData::propdata_breakablechunk_t,CUtlMemory<CPropData::propdata_breakablechunk_t,int>>::RemoveAll(&this->m_BreakableChunks);
  if ( (this->m_BreakableChunks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CPropData::propdata_breakablechunk_t,int>::Purge(&this->m_BreakableChunks.m_Memory);
    if ( (this->m_BreakableChunks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CPropData::propdata_breakablechunk_t,int>::Purge(&this->m_BreakableChunks.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CPropData::~CPropData  (line 204, @0x00000000020579d0, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CPropData, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CPropData::propdata_breakablechunk_t, CUtlMemory<CPropData::propdata_breakablechunk_t, int> >::RemoveAll, IGameSystem::~IGameSystem, operator delete, CUtlMemory<CPropData::propdata_breakablechunk_t, int>::Purge
void __fastcall CPropData::~CPropData(CPropData *const this)
{
  this->_vptr_IGameSystem = off_3FEAFB0;
  CUtlVectorBase<CPropData::propdata_breakablechunk_t,CUtlMemory<CPropData::propdata_breakablechunk_t,int>>::RemoveAll(&this->m_BreakableChunks);
  if ( (this->m_BreakableChunks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CPropData::propdata_breakablechunk_t,int>::Purge(&this->m_BreakableChunks.m_Memory);
    if ( (this->m_BreakableChunks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CPropData::propdata_breakablechunk_t,int>::Purge(&this->m_BreakableChunks.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CPropData::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 206, @0x00000000020562f0, libserver.so)
void __fastcall CPropData::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CPropData *const this)
{
  ;
}


// CPropData::DoesGameSystemReallocate  (line 206, @0x0000000002056300, libserver.so)
// globals: CPropData::sm_Factory
bool __fastcall CPropData::DoesGameSystemReallocate(const CPropData *const this)
{
  return (*(CPropData::sm_Factory->_vptr_IGameSystemFactory + 8))(CPropData::sm_Factory);
}


// CPropData::SetGameSystemGlobalPtrs  (line 206, @0x0000000002056320, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CPropData::sm_Factory
void __fastcall CPropData::SetGameSystemGlobalPtrs(CPropData *const this, void *pValue)
{
  if ( CPropData::sm_Factory != 0 )
    (*(CPropData::sm_Factory->_vptr_IGameSystemFactory + 7))(CPropData::sm_Factory, pValue);
}


