
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNetworkTransmitComponent::Schema_DynamicBinding  (line 22, @0x0000000001ec1be0, libserver.so)
// calls: CNetworkTransmitComponent::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CNetworkTransmitComponent::Schema_DynamicBinding(
        const CNetworkTransmitComponent *const this)
{
  CNetworkTransmitComponent::Schema_VerifyBindingIsRegistered();
  return CNetworkTransmitComponent::s_pSchemaBinding;
}


// CNetworkTransmitComponent::GetChangeAccessorFieldPathIndexInfo  (line 157, @0x0000000001ebc140, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ChangeAccessorFieldPathIndexInfo_t, ChangeAccessorFieldPathIndex_t, IgnoreCache_t, Purge, V_memset, memset, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base
// calls: operator new, Plat_IsInDebugSessionRaw, CUtlMemory<const OffsetIgnore_t*, int>::Purge, CUtlLeanVectorFixedGrowableBase<unsigned int, 3u, short int>::Purge, operator delete, _Unwind_Resume
// callers: CNetworkTransmitComponent::StateChanged
ChangeAccessorFieldPathIndexInfo_t *__fastcall CNetworkTransmitComponent::GetChangeAccessorFieldPathIndexInfo(
        CNetworkTransmitComponent *const this)
{
  ChangeAccessorFieldPathIndexInfo_t *result; // rax
  _WORD *v3; // rax
  char *v4; // r13
  _WORD *v5; // rbx
  _WORD *v6; // rdx
  _WORD *v7; // rdx

  result = this->_vptr_IEventRegisterCallback;
  if ( this->_vptr_IEventRegisterCallback == 0 )
  {
    v3 = operator new(0xF0u);
    v4 = (v3 + 24);
    v5 = v3;
    *v3 = 0;
    v3[1] = 3;
    *(v3 + 2) = 0;
    *(v3 + 6) = 0;
    *(v3 + 4) = 0;
    *(v3 + 10) = 4;
    *(v3 + 11) = 0x80000000;
    if ( ((v3 + 48) & 7) != 0 && Plat_IsInDebugSessionRaw() != 0 )
      __debugbreak();
    *(v5 + 4) = v4;
    v6 = v5 + 56;
    do
      *v6++ = -1;
    while ( v6 != v5 + 72 );
    *(v5 + 10) = -1;
    *(v5 + 36) = 0;
    *(v5 + 37) = 0;
    *(v5 + 11) = -1;
    *(v5 + 12) = -1;
    *(v5 + 13) = -1;
    *(v5 + 14) = -1;
    *(v5 + 15) = -1;
    *(v5 + 16) = -1;
    *(v5 + 17) = -1;
    v7 = v5 + 96;
    do
      *v7++ = -1;
    while ( v7 != v5 + 112 );
    *(v5 + 56) = 0;
    *(v5 + 57) = 0;
    *(v5 + 20) = -1;
    *(v5 + 21) = -1;
    *(v5 + 22) = -1;
    *(v5 + 23) = -1;
    *(v5 + 24) = -1;
    *(v5 + 25) = -1;
    *(v5 + 26) = -1;
    *(v5 + 27) = -1;
    this->_vptr_IEventRegisterCallback = v5;
    return v5;
  }
  return result;
}


