
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CAnimationLayer::Schema_DynamicBinding  (line 57, @0x000000000208fb90, libserver.so)
// calls: CAnimationLayer::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CAnimationLayer::Schema_DynamicBinding(const CAnimationLayer *const this)
{
  CAnimationLayer::Schema_VerifyBindingIsRegistered();
  return CAnimationLayer::s_pSchemaBinding;
}


// CAnimationLayer::HackToMakeAVTable  (line 63, @0x000000000208e690, libserver.so)
void __fastcall CAnimationLayer::HackToMakeAVTable(const CAnimationLayer *const this)
{
  ;
}


// CAnimationLayer::NetworkVar_m_op::NetworkStateChanged  (line 174, @0x000000000208e6a0, libserver.so)  // inlines: DispatchNetworkStateChanged<CAnimationLayer>, Get, NetworkStateChanged, operator CEntityInstance*
void __fastcall CAnimationLayer::NetworkVar_m_op::NetworkStateChanged(CAnimationLayer::NetworkVar_m_op *const this)
{
  _QWORD *v1; // rdi

  v1 = *(this - 2);
  if ( v1 != 0 && (*(v1[1] + 49LL) & 4) == 0 )
    (*(*v1 + 168LL))(v1);
}


// CAnimationLayer::NetworkVar_m_op::NetworkStateChangedLog  (line 174, @0x000000000208e6d0, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CAnimationLayer>, Get, NetworkStateChangedLog, operator const CEntityInstance*
void __fastcall CAnimationLayer::NetworkVar_m_op::NetworkStateChangedLog(
        const CAnimationLayer::NetworkVar_m_op *const this,
        const char *pVarName,
        const char *pMsg)
{
  _QWORD *v3; // rdi

  v3 = *(this - 2);
  if ( v3 != 0 && (*(v3[1] + 49LL) & 4) == 0 )
    (*(*v3 + 184LL))(v3, pVarName, pMsg);
}


// CAnimationLayer::NetworkVar_m_op::NetworkStateChanged  (line 174, @0x0000000002092c10, libserver.so)  // inlines: DispatchNetworkStateChanged<CAnimationLayer>, Get, NetworkStateChanged, operator CEntityInstance*
void __fastcall CAnimationLayer::NetworkVar_m_op::NetworkStateChanged(
        CAnimationLayer::NetworkVar_m_op *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  _QWORD *v4; // rax
  int16 *v5; // rdi
  int16 *p_m_Value; // r8
  int16 m_Value; // [rsp+0h] [rbp-10h] BYREF

  v4 = *(this - 2);
  m_Value = nPathIndex.m_Value;
  if ( v4 != 0 && (*(v4[1] + 49LL) & 4) == 0 && *(this - 4) != 0xFFFF )
  {
    v5 = (this - 8);
    p_m_Value = &m_Value;
    if ( nPathIndex.m_Value == -1 )
      p_m_Value = v5;
    (*(*v4 + 176LL))(v4, nLocalOffset + 24, nArrayIndex, *p_m_Value);
  }
}


