
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// DOTA_CombatLog_Record::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 144, @0x0000000002497710, libserver.so)
void __fastcall DOTA_CombatLog_Record::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        DOTA_CombatLog_Record *const this)
{
  ;
}


// DOTA_CombatLog_Record::DoesGameSystemReallocate  (line 144, @0x0000000002497720, libserver.so)
// globals: DOTA_CombatLog_Record::sm_Factory
bool __fastcall DOTA_CombatLog_Record::DoesGameSystemReallocate(const DOTA_CombatLog_Record *const this)
{
  return (*(DOTA_CombatLog_Record::sm_Factory->_vptr_IGameSystemFactory + 8))(DOTA_CombatLog_Record::sm_Factory);
}


// DOTA_CombatLog_Record::SetGameSystemGlobalPtrs  (line 144, @0x0000000002497740, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: DOTA_CombatLog_Record::sm_Factory
void __fastcall DOTA_CombatLog_Record::SetGameSystemGlobalPtrs(DOTA_CombatLog_Record *const this, void *pValue)
{
  if ( DOTA_CombatLog_Record::sm_Factory != 0 )
    (*(DOTA_CombatLog_Record::sm_Factory->_vptr_IGameSystemFactory + 7))(DOTA_CombatLog_Record::sm_Factory, pValue);
}


// DOTA_CombatLog_Record::~DOTA_CombatLog_Record  (line 148, @0x00000000024a47c0, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<sFightInfo, CUtlMemory<sFightInfo, int> >::RemoveAll, IGameSystem::~IGameSystem, CUtlMemory<sFightInfo, int>::Purge, CUtlMemory<SCombatLogReference, int>::Purge, CUtlMemory<unsigned char, int>::Purge
void __fastcall DOTA_CombatLog_Record::~DOTA_CombatLog_Record(DOTA_CombatLog_Record *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = &off_40DF950;
  CUtlVectorBase<sFightInfo,CUtlMemory<sFightInfo,int>>::RemoveAll(&this->m_vecActiveFights);
  if ( (this->m_vecActiveFights.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<sFightInfo,int>::Purge(&this->m_vecActiveFights.m_Memory);
    if ( (this->m_vecActiveFights.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sFightInfo,int>::Purge(&this->m_vecActiveFights.m_Memory);
  }
  CUtlVectorBase<sFightInfo,CUtlMemory<sFightInfo,int>>::RemoveAll(&this->m_vecFightInfo);
  if ( (this->m_vecFightInfo.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<sFightInfo,int>::Purge(&this->m_vecFightInfo.m_Memory),
        (this->m_vecFightInfo.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_vecEntryReferences.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_vecEntryReferences.m_Size = 0;
    if ( !v2 )
      goto LABEL_4;
  }
  else
  {
    CUtlMemory<sFightInfo,int>::Purge(&this->m_vecFightInfo.m_Memory);
    v2 = (this->m_vecEntryReferences.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_vecEntryReferences.m_Size = 0;
    if ( !v2 )
      goto LABEL_4;
  }
  CUtlMemory<SCombatLogReference,int>::Purge(&this->m_vecEntryReferences.m_Memory);
  if ( (this->m_vecEntryReferences.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
LABEL_4:
    v2 = (this->m_MemoryStack.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_MemoryStack.m_Size = 0;
    if ( !v2 )
      goto LABEL_5;
    goto LABEL_12;
  }
  CUtlMemory<SCombatLogReference,int>::Purge(&this->m_vecEntryReferences.m_Memory);
  v2 = (this->m_MemoryStack.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_MemoryStack.m_Size = 0;
  if ( v2 )
  {
LABEL_12:
    CUtlMemory<unsigned char,int>::Purge(&this->m_MemoryStack.m_Memory);
    if ( (this->m_MemoryStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned char,int>::Purge(&this->m_MemoryStack.m_Memory);
  }
LABEL_5:
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// DOTA_CombatLog_Record::~DOTA_CombatLog_Record  (line 148, @0x00000000024a4900, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~DOTA_CombatLog_Record
// calls: CUtlVectorBase<sFightInfo, CUtlMemory<sFightInfo, int> >::RemoveAll, IGameSystem::~IGameSystem, operator delete, CUtlMemory<sFightInfo, int>::Purge, CUtlMemory<SCombatLogReference, int>::Purge, CUtlMemory<unsigned char, int>::Purge
void __fastcall DOTA_CombatLog_Record::~DOTA_CombatLog_Record(DOTA_CombatLog_Record *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = &off_40DF950;
  CUtlVectorBase<sFightInfo,CUtlMemory<sFightInfo,int>>::RemoveAll(&this->m_vecActiveFights);
  if ( (this->m_vecActiveFights.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<sFightInfo,int>::Purge(&this->m_vecActiveFights.m_Memory);
    if ( (this->m_vecActiveFights.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sFightInfo,int>::Purge(&this->m_vecActiveFights.m_Memory);
  }
  CUtlVectorBase<sFightInfo,CUtlMemory<sFightInfo,int>>::RemoveAll(&this->m_vecFightInfo);
  if ( (this->m_vecFightInfo.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<sFightInfo,int>::Purge(&this->m_vecFightInfo.m_Memory),
        (this->m_vecFightInfo.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_vecEntryReferences.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_vecEntryReferences.m_Size = 0;
    if ( !v2 )
      goto LABEL_4;
  }
  else
  {
    CUtlMemory<sFightInfo,int>::Purge(&this->m_vecFightInfo.m_Memory);
    v2 = (this->m_vecEntryReferences.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_vecEntryReferences.m_Size = 0;
    if ( !v2 )
      goto LABEL_4;
  }
  CUtlMemory<SCombatLogReference,int>::Purge(&this->m_vecEntryReferences.m_Memory);
  if ( (this->m_vecEntryReferences.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
LABEL_4:
    v2 = (this->m_MemoryStack.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_MemoryStack.m_Size = 0;
    if ( !v2 )
      goto LABEL_5;
    goto LABEL_12;
  }
  CUtlMemory<SCombatLogReference,int>::Purge(&this->m_vecEntryReferences.m_Memory);
  v2 = (this->m_MemoryStack.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_MemoryStack.m_Size = 0;
  if ( v2 )
  {
LABEL_12:
    CUtlMemory<unsigned char,int>::Purge(&this->m_MemoryStack.m_Memory);
    if ( (this->m_MemoryStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned char,int>::Purge(&this->m_MemoryStack.m_Memory);
  }
LABEL_5:
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


