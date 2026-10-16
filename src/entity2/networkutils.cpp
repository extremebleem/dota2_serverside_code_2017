
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_networkutils.cpp  (line 0, @0x0000000001a68d80, libserver.so)  // inlines: CFieldPathHuffmanEncoder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixed, Color, Purge, RemoveAll, SetColor, __static_initialization_and_destruction_0, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup, __cxa_atexit, _Unwind_Resume, CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int>::Purge, CUtlMemory<int, int>::Purge
// globals: `guard variable for'g_HuffmanEncoder, UNSPECIFIED_LOGGING_COLOR, g_HuffmanEncoder, __dso_handle, CFieldPathHuffmanEncoder::~CFieldPathHuffmanEncoder()
void __cdecl GLOBAL__sub_I_networkutils_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  // init once: g_HuffmanEncoder
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


// CNetworkInitFuncRegistry::CNetworkInitFuncRegistry  (line 13, @0x00000000030d3da0, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate, ClosurePtr, CopyFrom<FastDelegate1<NetworkSerializationMode_t, void> >, FastDelegate1, SetMementoFrom
// callers: _GLOBAL__sub_I__unity_entities_01.cpp, __static_initialization_and_destruction_0, _GLOBAL__sub_I__unity_base_04.cpp, _GLOBAL__sub_I_entityidentity.cpp, _GLOBAL__sub_I_entitysystem.cpp
// globals: CNetworkInitFuncRegistry::sm_pHead
void __fastcall CNetworkInitFuncRegistry::CNetworkInitFuncRegistry(
        CNetworkInitFuncRegistry *const this,
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
  this->m_pNext = CNetworkInitFuncRegistry::sm_pHead;
  CNetworkInitFuncRegistry::sm_pHead = this;
}


// CNetworkInitFuncRegistry::ExecuteNetworkInitFuncs  (line 19, @0x00000000030d3df0, libserver.so)  // inlines: operator()
// callers: CSource2ServerSerializers::Connect, CSource2Server::Connect
// globals: CNetworkInitFuncRegistry::sm_pHead
void __fastcall CNetworkInitFuncRegistry::ExecuteNetworkInitFuncs(NetworkSerializationMode_t mode)
{
  CNetworkInitFuncRegistry *i; // rbx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v4; // rdi

  for ( i = CNetworkInitFuncRegistry::sm_pHead; i != 0; i = i->m_pNext )
  {
    pfn = i->m_delegate.m_Closure.m_pFunction.__pfn;
    v4 = (i->m_delegate.m_Closure.m_pthis + i->m_delegate.m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v4 - 1);
    (pfn)(v4, mode);
  }
}


