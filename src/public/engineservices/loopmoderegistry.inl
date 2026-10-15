
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLoopModeFactory<CLoopModeGame>::Init  (line 32, @0x000000000210bf80, libserver.so)
// calls: CLoopModeGame::StaticInit
bool __fastcall CLoopModeFactory<CLoopModeGame>::Init(CLoopModeFactory<CLoopModeGame> *const this, ILoopType *pLoop)
{
  return CLoopModeGame::StaticInit(pLoop);
}


// CLoopModeFactory<CLoopModeGame>::Shutdown  (line 33, @0x00000000020f5f10, libserver.so)  // inlines: StaticShutdown
// calls: CBaseTempEntity::StaticShutdownTempEnts, IGameSystem::ShutdownAllSystems
void __fastcall CLoopModeFactory<CLoopModeGame>::Shutdown(CLoopModeFactory<CLoopModeGame> *const this)
{
  CBaseTempEntity::StaticShutdownTempEnts();
  IGameSystem::ShutdownAllSystems();
}


// CLoopModeFactory<CLoopModeGame>::CreateLoopMode  (line 35, @0x000000000210cab0, libserver.so)
// calls: operator new, CLoopModeGame::CLoopModeGame, operator delete, _Unwind_Resume
ILoopMode *__fastcall CLoopModeFactory<CLoopModeGame>::CreateLoopMode(CLoopModeFactory<CLoopModeGame> *const this)
{
  CLoopModeGame *v1; // rbx

  v1 = operator new(0x430u);
  CLoopModeGame::CLoopModeGame(v1);
  return v1;
}


// CLoopModeFactory<CLoopModeGame>::DestroyLoopMode  (line 42, @0x00000000020f2530, libserver.so)
void __fastcall CLoopModeFactory<CLoopModeGame>::DestroyLoopMode(
        CLoopModeFactory<CLoopModeGame> *const this,
        ILoopMode *pLoopMode)
{
  if ( pLoopMode != 0 )
    (*(pLoopMode->_vptr_ILoopMode + 15))(pLoopMode);
}


// CLoopModeFactory<CLoopModeGame>::GetLoopModeType  (line 43, @0x00000000020f2560, libserver.so)
LoopModeType_t __fastcall CLoopModeFactory<CLoopModeGame>::GetLoopModeType(
        const CLoopModeFactory<CLoopModeGame> *const this)
{
  return this->m_nType;
}


