
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_game_networkquantizedtypes.cpp  (line 0, @0x000000000199b3a0, libserver.so)  // inlines: Bind, CFieldPathHuffmanEncoder, CNetworkVectorChangeCallbackInitFuncRegistry, CUtlDelegate, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixed, CVariantBase, Color, Convert<FastDelegate1<NetworkSerializationMode_t, void>, void (FastDelegate1<NetworkSerializationMode_t, void>::*)(NetworkSerializationMode_t)const, void (detail::GenericClass::*)()>, CopyFrom<FastDelegate1<NetworkSerializationMode_t, void> >, FastDelegate1, Purge, RemoveAll, SetColor, SetMementoFrom, UtlMakeDelegate<NetworkSerializationMode_t, void>, __static_initialization_and_destruction_0, bindmemfunc<FastDelegate1<NetworkSerializationMode_t, void>, void (FastDelegate1<NetworkSerializationMode_t, void>::*)(NetworkSerializationMode_t)const>, bindstaticfunc<FastDelegate1<NetworkSerializationMode_t, void>, void (FastDelegate1<NetworkSerializationMode_t, void>::*)(NetworkSerializationMode_t)const>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup, __cxa_atexit, _Unwind_Resume, CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int>::Purge, CUtlMemory<int, int>::Purge
// globals: UNSPECIFIED_LOGGING_COLOR, `guard variable for'g_HuffmanEncoder, `guard variable for'CEntityKeyValues::sm_EmptyVariant, FastDelegate1<NetworkSerializationMode_t,void>::InvokeStaticFunction(NetworkSerializationMode_t), InstallNetworkVectorFieldChangeCallbacks<CNetworkOriginQuantizedVector,8>(NetworkSerializationMode_t), CNetworkVectorChangeCallbackInitFuncRegistry::sm_pHead, CNetworkOriginQuantizedVector8FCCRegistry, InstallNetworkVectorFieldChangeCallbacks<CNetworkVelocityVector,9>(NetworkSerializationMode_t) (16 total)
void __cdecl GLOBAL__sub_I_game_networkquantizedtypes_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  if ( `guard variable for'g_HuffmanEncoder == 0 )
  {
    `guard variable for'g_HuffmanEncoder = 1;
    g_HuffmanEncoder.m_pRoot = 0;
    g_HuffmanEncoder.m_Frequencies.m_Size = 0;
    g_HuffmanEncoder.m_Frequencies.m_Memory.m_pMemory = 0;
    g_HuffmanEncoder.m_Frequencies.m_Memory.m_nAllocationCount = 0;
    g_HuffmanEncoder.m_Frequencies.m_Memory.m_nGrowSize = 0;
    g_HuffmanEncoder.m_OpCodeToHuffmanLookup.m_Size = 0;
    g_HuffmanEncoder.m_FixedTree.m_Size = 0;
    g_HuffmanEncoder.m_FixedTree.m_Memory.m_pMemory = 0;
    g_HuffmanEncoder.m_FixedTree.m_Memory.m_nAllocationCount = 0;
    g_HuffmanEncoder.m_FixedTree.m_Memory.m_nGrowSize = 0;
    CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup(&g_HuffmanEncoder);
    __cxa_atexit(CFieldPathHuffmanEncoder::~CFieldPathHuffmanEncoder, &g_HuffmanEncoder, &_dso_handle);
  }
  if ( `guard variable for'CEntityKeyValues::sm_EmptyVariant == 0 )
  {
    `guard variable for'CEntityKeyValues::sm_EmptyVariant = 1;
    CEntityKeyValues::sm_EmptyVariant.m_type = 0;
    CEntityKeyValues::sm_EmptyVariant.m_flags = 0;
    CEntityKeyValues::sm_EmptyVariant.m_uint64 = 0;
    __cxa_atexit(CVariantBase<CEntityVariantAllocator>::~CVariantBase, &CEntityKeyValues::sm_EmptyVariant, &_dso_handle);
  }
  CNetworkOriginQuantizedVector8FCCRegistry.m_delegate.m_Closure.m_pFunction.__delta = 0;
  CNetworkOriginQuantizedVector8FCCRegistry.m_delegate.m_Closure.m_pFunction.__pfn = FastDelegate1<NetworkSerializationMode_t,void>::InvokeStaticFunction;
  CNetworkOriginQuantizedVector8FCCRegistry.m_delegate.m_Closure.m_pthis = InstallNetworkVectorFieldChangeCallbacks<CNetworkOriginQuantizedVector,8>;
  CNetworkVelocityVector9FCCRegistry.m_delegate.m_Closure.m_pFunction.__delta = 0;
  CNetworkOriginQuantizedVector8FCCRegistry.m_pNext = CNetworkVectorChangeCallbackInitFuncRegistry::sm_pHead;
  CNetworkViewOffsetVector10FCCRegistry.m_delegate.m_Closure.m_pFunction.__delta = 0;
  CNetworkVelocityVector9FCCRegistry.m_delegate.m_Closure.m_pFunction.__pfn = FastDelegate1<NetworkSerializationMode_t,void>::InvokeStaticFunction;
  CNetworkVelocityVector9FCCRegistry.m_delegate.m_Closure.m_pthis = InstallNetworkVectorFieldChangeCallbacks<CNetworkVelocityVector,9>;
  CNetworkVelocityVector9FCCRegistry.m_pNext = &CNetworkOriginQuantizedVector8FCCRegistry;
  CNetworkViewOffsetVector10FCCRegistry.m_delegate.m_Closure.m_pFunction.__pfn = FastDelegate1<NetworkSerializationMode_t,void>::InvokeStaticFunction;
  CNetworkViewOffsetVector10FCCRegistry.m_delegate.m_Closure.m_pthis = InstallNetworkVectorFieldChangeCallbacks<CNetworkViewOffsetVector,10>;
  CNetworkViewOffsetVector10FCCRegistry.m_pNext = &CNetworkVelocityVector9FCCRegistry;
  CNetworkVectorChangeCallbackInitFuncRegistry::sm_pHead = &CNetworkViewOffsetVector10FCCRegistry;
}


// InstallNetworkVectorFieldChangeCallbacks<CNetworkOriginQuantizedVector, 8>  (line 8, @0x0000000001b2c0d0, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate<CNetworkOriginQuantizedVector, CNetworkOriginQuantizedVector>, Convert<CNetworkOriginQuantizedVector, void (CNetworkOriginQuantizedVector::*)(), void (detail::GenericClass::*)()>, FastDelegate0<CNetworkOriginQuantizedVector, CNetworkOriginQuantizedVector>, RegisterNetworkFieldChangeCallback, UtlMakeDelegate<CNetworkOriginQuantizedVector, CNetworkOriginQuantizedVector, void>, bindmemfunc<CNetworkOriginQuantizedVector, void (CNetworkOriginQuantizedVector::*)()>
// strings: "CNetworkOriginQuantizedVector"
// globals: CNetworkOriginQuantizedVector::OnVectorComponentChanged(void)
void __fastcall InstallNetworkVectorFieldChangeCallbacks<CNetworkOriginQuantizedVector,8>(
        NetworkSerializationMode_t mode)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  _QWORD v3[5]; // [rsp-28h] [rbp-28h] BYREF

  if ( mode == NetworkSerializationMode_t::NET_SERIALIZATION_MODE_1 )
  {
    v3[4] = v1;
    v2 = *g_pNetworkMessages;
    v3[1] = CNetworkOriginQuantizedVector::OnVectorComponentChanged;
    v3[0] = 0;
    v3[2] = 0;
    (*(v2 + 160))(g_pNetworkMessages, "CNetworkOriginQuantizedVector", 3, v3, 1, 0x7FFFFFFF);
  }
}


// InstallNetworkVectorFieldChangeCallbacks<CNetworkVelocityVector, 9>  (line 9, @0x0000000001b2c150, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate<CNetworkVelocityVector, CNetworkVelocityVector>, Convert<CNetworkVelocityVector, void (CNetworkVelocityVector::*)(), void (detail::GenericClass::*)()>, FastDelegate0<CNetworkVelocityVector, CNetworkVelocityVector>, RegisterNetworkFieldChangeCallback, UtlMakeDelegate<CNetworkVelocityVector, CNetworkVelocityVector, void>, bindmemfunc<CNetworkVelocityVector, void (CNetworkVelocityVector::*)()>
// strings: "CNetworkVelocityVector"
// globals: CNetworkVelocityVector::OnVectorComponentChanged(void)
void __fastcall InstallNetworkVectorFieldChangeCallbacks<CNetworkVelocityVector,9>(NetworkSerializationMode_t mode)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  _QWORD v3[5]; // [rsp-28h] [rbp-28h] BYREF

  if ( mode == NetworkSerializationMode_t::NET_SERIALIZATION_MODE_1 )
  {
    v3[4] = v1;
    v2 = *g_pNetworkMessages;
    v3[1] = CNetworkVelocityVector::OnVectorComponentChanged;
    v3[0] = 0;
    v3[2] = 0;
    (*(v2 + 160))(g_pNetworkMessages, "CNetworkVelocityVector", 3, v3, 1, 0x7FFFFFFF);
  }
}


// InstallNetworkVectorFieldChangeCallbacks<CNetworkViewOffsetVector, 10>  (line 10, @0x0000000001b2c1d0, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate<CNetworkViewOffsetVector, CNetworkViewOffsetVector>, Convert<CNetworkViewOffsetVector, void (CNetworkViewOffsetVector::*)(), void (detail::GenericClass::*)()>, FastDelegate0<CNetworkViewOffsetVector, CNetworkViewOffsetVector>, RegisterNetworkFieldChangeCallback, UtlMakeDelegate<CNetworkViewOffsetVector, CNetworkViewOffsetVector, void>, bindmemfunc<CNetworkViewOffsetVector, void (CNetworkViewOffsetVector::*)()>
// strings: "CNetworkViewOffsetVector"
// globals: CNetworkViewOffsetVector::OnVectorComponentChanged(void)
void __fastcall InstallNetworkVectorFieldChangeCallbacks<CNetworkViewOffsetVector,10>(NetworkSerializationMode_t mode)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  _QWORD v3[5]; // [rsp-28h] [rbp-28h] BYREF

  if ( mode == NetworkSerializationMode_t::NET_SERIALIZATION_MODE_1 )
  {
    v3[4] = v1;
    v2 = *g_pNetworkMessages;
    v3[1] = CNetworkViewOffsetVector::OnVectorComponentChanged;
    v3[0] = 0;
    v3[2] = 0;
    (*(v2 + 160))(g_pNetworkMessages, "CNetworkViewOffsetVector", 3, v3, 1, 0x7FFFFFFF);
  }
}


// CNetworkVectorChangeCallbackInitFuncRegistry::CNetworkVectorChangeCallbackInitFuncRegistry  (line 14, @0x0000000001b2c250, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate, ClosurePtr, CopyFrom<FastDelegate1<NetworkSerializationMode_t, void> >, FastDelegate1, SetMementoFrom
// globals: CNetworkVectorChangeCallbackInitFuncRegistry::sm_pHead
void __fastcall CNetworkVectorChangeCallbackInitFuncRegistry::CNetworkVectorChangeCallbackInitFuncRegistry(
        CNetworkVectorChangeCallbackInitFuncRegistry *const this,
        CUtlDelegate<void(NetworkSerializationMode_t)> delegate)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  this->m_delegate.m_Closure.m_pthis = 0;
  this->m_delegate.m_Closure.m_pFunction.__pfn = 0;
  this->m_delegate.m_Closure.m_pFunction.__delta = 0;
  v3 = *(v2 + 16);
  this->m_delegate.m_Closure.m_pFunction.__pfn = *(v2 + 8);
  this->m_delegate.m_Closure.m_pFunction.__delta = v3;
  this->m_delegate.m_Closure.m_pthis = *v2;
  this->m_pNext = CNetworkVectorChangeCallbackInitFuncRegistry::sm_pHead;
  CNetworkVectorChangeCallbackInitFuncRegistry::sm_pHead = this;
}


// CNetworkVectorChangeCallbackInitFuncRegistry::ExecuteNetworkInitFuncs  (line 14, @0x0000000001b2c2a0, libserver.so)  // inlines: operator()
// callers: CSource2ServerSerializers::Connect, CSource2Server::Connect
// globals: CNetworkVectorChangeCallbackInitFuncRegistry::sm_pHead
void __fastcall CNetworkVectorChangeCallbackInitFuncRegistry::ExecuteNetworkInitFuncs(NetworkSerializationMode_t mode)
{
  CNetworkVectorChangeCallbackInitFuncRegistry *i; // rbx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v4; // rdi

  for ( i = CNetworkVectorChangeCallbackInitFuncRegistry::sm_pHead; i != 0; i = i->m_pNext )
  {
    pfn = i->m_delegate.m_Closure.m_pFunction.__pfn;
    v4 = (i->m_delegate.m_Closure.m_pthis + i->m_delegate.m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v4 - 1);
    (pfn)(v4, mode);
  }
}


