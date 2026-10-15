
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// __CreateCGameMovementIGameMovement_interface  (line 28, @0x00000000024b4300, libserver.so)
// globals: g_GameMovement
void *__cdecl __CreateCGameMovementIGameMovement_interface()
{
  return &g_GameMovement;
}


// CDOTAGameMovement::CDOTAGameMovement  (line 35, @0x00000000024c5210, libserver.so)
// calls: CGameMovement::CGameMovement
void __fastcall CDOTAGameMovement::CDOTAGameMovement(CDOTAGameMovement *const this)
{
  CGameMovement::CGameMovement(this);
  this->_vptr_IGameMovement = off_40F96D0;
}


// CDOTAGameMovement::PerformCameraMovement  (line 41, @0x00000000024c5240, libserver.so)
void __fastcall CDOTAGameMovement::PerformCameraMovement(
        CDOTAGameMovement *const this,
        double a2,
        float flForwardMove,
        float flSideMove,
        CMoveData *pMoveData)
{
  ;
}


