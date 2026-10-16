
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_ActionRunner::Schema_DynamicBinding  (line 30, @0x0000000002455fa0, libserver.so)
// globals: CDOTA_ActionRunner::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_ActionRunner::Schema_DynamicBinding(
        const CDOTA_ActionRunner *const this)
{
  return CDOTA_ActionRunner::s_pSchemaBinding;
}


// CDOTA_ActionDelayer::~CDOTA_ActionDelayer  (line 155, @0x00000000024583c0, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, CUtlMemory<DelayedAction_t, int>::Purge
void __fastcall CDOTA_ActionDelayer::~CDOTA_ActionDelayer(CDOTA_ActionDelayer *const this)
{
  bool v2; // zf
  CUtlVectorBase<DelayedAction_t,CUtlMemory<DelayedAction_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vDelayedActions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_40D6D90;  // vptr: CDOTA_ActionDelayer
  this->m_vDelayedActions.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vDelayedActions.m_Memory;
    CUtlMemory<DelayedAction_t,int>::Purge(&this->m_vDelayedActions.m_Memory);
    if ( (this->m_vDelayedActions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<DelayedAction_t,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CDOTA_ActionDelayer::~CDOTA_ActionDelayer  (line 155, @0x0000000002458560, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CDOTA_ActionDelayer, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, operator delete, CUtlMemory<DelayedAction_t, int>::Purge
void __fastcall CDOTA_ActionDelayer::~CDOTA_ActionDelayer(CDOTA_ActionDelayer *const this)
{
  bool v2; // zf
  CUtlVectorBase<DelayedAction_t,CUtlMemory<DelayedAction_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vDelayedActions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_40D6D90;  // vptr: CDOTA_ActionDelayer
  this->m_vDelayedActions.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vDelayedActions.m_Memory;
    CUtlMemory<DelayedAction_t,int>::Purge(&this->m_vDelayedActions.m_Memory);
    if ( (this->m_vDelayedActions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<DelayedAction_t,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTA_ActionDelayer::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 157, @0x0000000002455fb0, libserver.so)
void __fastcall CDOTA_ActionDelayer::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTA_ActionDelayer *const this)
{
  ;
}


// CDOTA_ActionDelayer::DoesGameSystemReallocate  (line 157, @0x0000000002455fc0, libserver.so)
// globals: CDOTA_ActionDelayer::sm_Factory
bool __fastcall CDOTA_ActionDelayer::DoesGameSystemReallocate(const CDOTA_ActionDelayer *const this)
{
  return (*(CDOTA_ActionDelayer::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_ActionDelayer::sm_Factory);
}


// CDOTA_ActionDelayer::SetGameSystemGlobalPtrs  (line 157, @0x0000000002455fe0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_ActionDelayer::sm_Factory
void __fastcall CDOTA_ActionDelayer::SetGameSystemGlobalPtrs(CDOTA_ActionDelayer *const this, void *pValue)
{
  if ( CDOTA_ActionDelayer::sm_Factory != 0 )
    (*(CDOTA_ActionDelayer::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTA_ActionDelayer::sm_Factory, pValue);
}


