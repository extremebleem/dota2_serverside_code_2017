
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_AttackRecordManager::~CDOTA_AttackRecordManager  (line 172, @0x00000000024582f0, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, CUtlMemory<CDOTA_AttackRecord*, int>::Purge
void __fastcall CDOTA_AttackRecordManager::~CDOTA_AttackRecordManager(CDOTA_AttackRecordManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<CDOTA_AttackRecord*,CUtlMemory<CDOTA_AttackRecord*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_AttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_40D5050;
  this->m_AttackRecords.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_AttackRecords.m_Memory;
    CUtlMemory<CDOTA_AttackRecord *,int>::Purge(&this->m_AttackRecords.m_Memory);
    if ( (this->m_AttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_AttackRecord *,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CDOTA_AttackRecordManager::~CDOTA_AttackRecordManager  (line 172, @0x0000000002458350, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CDOTA_AttackRecordManager, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, operator delete, CUtlMemory<CDOTA_AttackRecord*, int>::Purge
void __fastcall CDOTA_AttackRecordManager::~CDOTA_AttackRecordManager(CDOTA_AttackRecordManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<CDOTA_AttackRecord*,CUtlMemory<CDOTA_AttackRecord*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_AttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_40D5050;
  this->m_AttackRecords.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_AttackRecords.m_Memory;
    CUtlMemory<CDOTA_AttackRecord *,int>::Purge(&this->m_AttackRecords.m_Memory);
    if ( (this->m_AttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_AttackRecord *,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTA_AttackRecordManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 174, @0x0000000002455370, libserver.so)
void __fastcall CDOTA_AttackRecordManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTA_AttackRecordManager *const this)
{
  ;
}


// CDOTA_AttackRecordManager::DoesGameSystemReallocate  (line 174, @0x0000000002455380, libserver.so)
// globals: CDOTA_AttackRecordManager::sm_Factory
bool __fastcall CDOTA_AttackRecordManager::DoesGameSystemReallocate(const CDOTA_AttackRecordManager *const this)
{
  return (*(CDOTA_AttackRecordManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_AttackRecordManager::sm_Factory);
}


// CDOTA_AttackRecordManager::SetGameSystemGlobalPtrs  (line 174, @0x00000000024553a0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_AttackRecordManager::sm_Factory
void __fastcall CDOTA_AttackRecordManager::SetGameSystemGlobalPtrs(CDOTA_AttackRecordManager *const this, void *pValue)
{
  if ( CDOTA_AttackRecordManager::sm_Factory != 0 )
    (*(CDOTA_AttackRecordManager::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CDOTA_AttackRecordManager::sm_Factory,
      pValue);
}


// CDOTA_AttackRecordManager::GameInit  (line 182, @0x0000000002459fd0, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll
// calls: CDOTA_AttackRecord::~CDOTA_AttackRecord, operator delete, CUtlMemory<CDOTA_AttackRecord*, int>::Purge
void __fastcall CDOTA_AttackRecordManager::GameInit(
        CDOTA_AttackRecordManager *const this,
        const EventGameInit_t *const msg)
{
  __int64 v3; // r13
  int i; // r12d
  CDOTA_AttackRecord **m_pMemory; // rax
  CDOTA_AttackRecord *v6; // rbx
  bool v7; // zf

  v3 = 0;
  for ( i = 0; i < this->m_AttackRecords.m_Size; ++v3 )
  {
    m_pMemory = this->m_AttackRecords.m_Memory.m_pMemory;
    v6 = m_pMemory[v3];
    if ( v6 != 0 )
    {
      CDOTA_AttackRecord::~CDOTA_AttackRecord(m_pMemory[v3]);
      operator delete(v6);
    }
    ++i;
  }
  v7 = (this->m_AttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttackRecords.m_Size = 0;
  if ( v7 )
    CUtlMemory<CDOTA_AttackRecord *,int>::Purge(&this->m_AttackRecords.m_Memory);
  this->m_iRecordsCount = 0;
}


