
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IBoneTransformOverride::GetScratchMemorySize  (line 142, @0x000000000220daa0, libserver.so)
int __fastcall IBoneTransformOverride::GetScratchMemorySize(
        const IBoneTransformOverride *const this,
        const CSkeletonInstance *pInstance)
{
  return 0;
}


// CModelState::HackToMakeAVTable  (line 270, @0x00000000020f11c0, libserver.so)
void __fastcall CModelState::HackToMakeAVTable(const CModelState *const this)
{
  ;
}


// CModelState::NetworkStateChanged  (line 271, @0x00000000020f11d0, libserver.so)
void __fastcall CModelState::NetworkStateChanged(CModelState *const this)
{
  ;
}


// CModelState::NetworkStateChanged  (line 271, @0x00000000020f11e0, libserver.so)
void __fastcall CModelState::NetworkStateChanged(
        CModelState *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CModelState::NetworkStateChangedLog  (line 271, @0x00000000020f11f0, libserver.so)
void __fastcall CModelState::NetworkStateChangedLog(
        const CModelState *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CModelState::Schema_DynamicBinding  (line 405, @0x00000000020f5580, libserver.so)
// calls: CModelState::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CModelState::Schema_DynamicBinding(const CModelState *const this)
{
  CModelState::Schema_VerifyBindingIsRegistered();
  return CModelState::s_pSchemaBinding;
}


// CSkeletonInstance::HackToMakeAVTable  (line 448, @0x0000000001ec1490, libserver.so)
void __fastcall CSkeletonInstance::HackToMakeAVTable(const CSkeletonInstance *const this)
{
  ;
}


// CSkeletonInstance::NetworkStateChanged  (line 449, @0x00000000020f1200, libserver.so)
void __fastcall CSkeletonInstance::NetworkStateChanged(CSkeletonInstance *const this)
{
  ;
}


// CSkeletonInstance::NetworkStateChanged  (line 449, @0x00000000020f1210, libserver.so)
void __fastcall CSkeletonInstance::NetworkStateChanged(
        CSkeletonInstance *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CSkeletonInstance::NetworkStateChangedLog  (line 449, @0x00000000020f1220, libserver.so)
void __fastcall CSkeletonInstance::NetworkStateChangedLog(
        const CSkeletonInstance *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CSkeletonInstance::GetSkeletonInstance  (line 470, @0x0000000001ec14a0, libserver.so)
CSkeletonInstance *__fastcall CSkeletonInstance::GetSkeletonInstance(CSkeletonInstance *const this)
{
  return this;
}


// CSkeletonInstance::GetSkeletonInstance  (line 471, @0x0000000001ec14b0, libserver.so)
const CSkeletonInstance *__fastcall CSkeletonInstance::GetSkeletonInstance(const CSkeletonInstance *const this)
{
  return this;
}


// CSkeletonInstance::NetworkVar_m_modelState::NetworkStateChanged  (line 742, @0x00000000020f1230, libserver.so)  // inlines: DispatchNetworkStateChanged<CSkeletonInstance>
void __fastcall CSkeletonInstance::NetworkVar_m_modelState::NetworkStateChanged(
        CSkeletonInstance::NetworkVar_m_modelState *const this)
{
  (*(*(this - 40) + 184LL))(this - 320);
}


// CSkeletonInstance::NetworkVar_m_modelState::NetworkStateChangedLog  (line 742, @0x00000000020f1250, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CSkeletonInstance>
void __fastcall CSkeletonInstance::NetworkVar_m_modelState::NetworkStateChangedLog(
        const CSkeletonInstance::NetworkVar_m_modelState *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 40) + 200LL))(this - 320, pVarName, pMsg);
}


// CSkeletonInstance::NetworkVar_m_modelState::NetworkStateChanged  (line 742, @0x00000000020f1270, libserver.so)  // inlines: DispatchNetworkStateChanged<CSkeletonInstance>
void __fastcall CSkeletonInstance::NetworkVar_m_modelState::NetworkStateChanged(
        CSkeletonInstance::NetworkVar_m_modelState *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 40) + 192LL))(this - 320, nLocalOffset + 320, nArrayIndex, nPathIndex.m_Value);
}


// CSkeletonInstance::Schema_DynamicBinding  (line 761, @0x0000000001ec1b20, libserver.so)
// calls: CSkeletonInstance::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CSkeletonInstance::Schema_DynamicBinding(const CSkeletonInstance *const this)
{
  CSkeletonInstance::Schema_VerifyBindingIsRegistered();
  return CSkeletonInstance::s_pSchemaBinding;
}


