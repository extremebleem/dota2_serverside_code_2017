
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseAnimatingOverlayController::Schema_DynamicBinding  (line 41, @0x000000000208fc10, libserver.so)
// calls: CBaseAnimatingOverlayController::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseAnimatingOverlayController::Schema_DynamicBinding(
        const CBaseAnimatingOverlayController *const this)
{
  CBaseAnimatingOverlayController::Schema_VerifyBindingIsRegistered();
  return CBaseAnimatingOverlayController::s_pSchemaBinding;
}


// CBaseAnimatingOverlayController::HackToMakeAVTable  (line 43, @0x000000000208e7e0, libserver.so)
void __fastcall CBaseAnimatingOverlayController::HackToMakeAVTable(const CBaseAnimatingOverlayController *const this)
{
  ;
}


// CBaseAnimatingOverlayController::NetworkStateChanged  (line 46, @0x000000000208e7f0, libserver.so)
void __fastcall CBaseAnimatingOverlayController::NetworkStateChanged(CBaseAnimatingOverlayController *const this)
{
  ;
}


// CBaseAnimatingOverlayController::NetworkStateChanged  (line 46, @0x000000000208e800, libserver.so)
void __fastcall CBaseAnimatingOverlayController::NetworkStateChanged(
        CBaseAnimatingOverlayController *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CBaseAnimatingOverlayController::NetworkStateChangedLog  (line 46, @0x000000000208e810, libserver.so)
void __fastcall CBaseAnimatingOverlayController::NetworkStateChangedLog(
        const CBaseAnimatingOverlayController *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CBaseAnimatingOverlayController::VerifyValidity  (line 70, @0x000000000208e820, libserver.so)
void __fastcall CBaseAnimatingOverlayController::VerifyValidity(CBaseAnimatingOverlayController *const this)
{
  ;
}


// CBodyComponentBaseAnimatingOverlay::GetAnimationController  (line 164, @0x000000000208e830, libserver.so)
CSkeletonAnimationController *__fastcall CBodyComponentBaseAnimatingOverlay::GetAnimationController(
        CBodyComponentBaseAnimatingOverlay *const this)
{
  return &this->m_animationController;
}


// CBodyComponentBaseAnimatingOverlay::NetworkVar_m_animationController::NetworkStateChanged  (line 166, @0x000000000208e840, libserver.so)  // inlines: DispatchNetworkStateChanged<CBodyComponentSkeletonInstance>, Get, NetworkStateChanged, operator CEntityInstance*
void __fastcall CBodyComponentBaseAnimatingOverlay::NetworkVar_m_animationController::NetworkStateChanged(
        CBodyComponentBaseAnimatingOverlay::NetworkVar_m_animationController *const this)
{
  _QWORD *v1; // rdi

  v1 = *(this - 3);
  if ( v1 != 0 && (*(v1[1] + 49LL) & 4) == 0 )
    (*(*v1 + 168LL))(v1);
}


// CBodyComponentBaseAnimatingOverlay::NetworkVar_m_animationController::NetworkStateChangedLog  (line 166, @0x000000000208e870, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CBodyComponentSkeletonInstance>, Get, NetworkStateChangedLog, operator const CEntityInstance*
void __fastcall CBodyComponentBaseAnimatingOverlay::NetworkVar_m_animationController::NetworkStateChangedLog(
        const CBodyComponentBaseAnimatingOverlay::NetworkVar_m_animationController *const this,
        const char *pVarName,
        const char *pMsg)
{
  _QWORD *v3; // rdi

  v3 = *(this - 3);
  if ( v3 != 0 && (*(v3[1] + 49LL) & 4) == 0 )
    (*(*v3 + 184LL))(v3, pVarName, pMsg);
}


// CBodyComponentBaseAnimatingOverlay::NetworkVar_m_animationController::NetworkStateChanged  (line 166, @0x0000000002090510, libserver.so)  // inlines: DispatchNetworkStateChanged<CBodyComponentSkeletonInstance>, Get, NetworkStateChanged, operator CEntityInstance*
void __fastcall CBodyComponentBaseAnimatingOverlay::NetworkVar_m_animationController::NetworkStateChanged(
        CBodyComponentBaseAnimatingOverlay::NetworkVar_m_animationController *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  _QWORD *v4; // rax

  v4 = *(this - 3);
  if ( v4 != 0 && (*(v4[1] + 49LL) & 4) == 0 )
    (*(*v4 + 176LL))(*(this - 3), nLocalOffset + 888, nArrayIndex, *(this - 8));
}


// CBodyComponentBaseAnimatingOverlay::Schema_DynamicBinding  (line 169, @0x000000000208fc30, libserver.so)
// calls: CBodyComponentBaseAnimatingOverlay::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBodyComponentBaseAnimatingOverlay::Schema_DynamicBinding(
        const CBodyComponentBaseAnimatingOverlay *const this)
{
  CBodyComponentBaseAnimatingOverlay::Schema_VerifyBindingIsRegistered();
  return CBodyComponentBaseAnimatingOverlay::s_pSchemaBinding;
}


// CBodyComponentBaseAnimatingOverlay::HackToMakeAVTable  (line 172, @0x000000000208e8a0, libserver.so)
void __fastcall CBodyComponentBaseAnimatingOverlay::HackToMakeAVTable(
        const CBodyComponentBaseAnimatingOverlay *const this)
{
  ;
}


