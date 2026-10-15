
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// EconItemUtils  (line 13, @0x0000000002e6fe20, libserver.so)
// globals: s_pEconItemUtils
CEconItemUtils *__cdecl EconItemUtils()
{
  return s_pEconItemUtils;
}


// CEconItemUtils::CEconItemUtils  (line 18, @0x0000000002e6fe30, libserver.so)
// callers: CDOTAItemUtils::CDOTAItemUtils, __static_initialization_and_destruction_0
// globals: s_pEconItemUtils
void __fastcall CEconItemUtils::CEconItemUtils(CEconItemUtils *const this)
{
  this->_vptr_CEconItemUtils = &off_47A6DD0;
  s_pEconItemUtils = this;
}


// CEconItemUtils::~CEconItemUtils  (line 24, @0x0000000002e6fe50, libserver.so)
// callers: CDOTAItemUtils::~CDOTAItemUtils
// globals: s_pEconItemUtils
void __fastcall CEconItemUtils::~CEconItemUtils(CEconItemUtils *const this)
{
  bool v1; // zf

  v1 = s_pEconItemUtils == this;
  this->_vptr_CEconItemUtils = &off_47A6DD0;
  if ( v1 )
    s_pEconItemUtils = 0;
}


// CEconItemUtils::CanGemBePlacedInSocket  (line 33, @0x0000000002e6fe80, libserver.so)  // inlines: CSocketIterator, CSocketPair
// calls: CSocketIterator::GetSocketByAttributeDef
GemInSocketResult_t __fastcall CEconItemUtils::CanGemBePlacedInSocket(
        CEconItemUtils *const this,
        IEconItemInterface *pItemToSocket,
        attrib_definition_index_t nSocketId,
        IEconItemInterface *pGemItem)
{
  GemInSocketResult_t result; // eax
  CSocketIterator *m_Sockets; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  IItemSocket *SocketByAttributeDef; // rax
  CSocketIterator socketIterator; // [rsp+0h] [rbp-F0h] BYREF

  result = GemInSocketResult_t::INVALID_SOCKET_SPECIFIED;
  if ( pItemToSocket != 0 )
  {
    socketIterator._vptr_IEconItemAttributeIterator = off_47A8B30;
    m_Sockets = socketIterator.m_Sockets;
    do
    {
      m_Sockets->_vptr_IEconItemAttributeIterator = 0;
      m_Sockets = (m_Sockets + 16);
      *&m_Sockets[-1].m_unAttribStorageTypeFlags = 0;
    }
    while ( m_Sockets != &socketIterator.m_nSocketCount );
    vptr_IEconItemInterface = pItemToSocket->_vptr_IEconItemInterface;
    socketIterator.m_nSocketCount = 0;
    socketIterator.m_nGemCount = 0;
    socketIterator.m_unAttribStorageTypeFlags = 1;
    vptr_IEconItemInterface[28](pItemToSocket, &socketIterator, nSocketId, pGemItem, &socketIterator.m_nSocketCount);
    SocketByAttributeDef = CSocketIterator::GetSocketByAttributeDef(&socketIterator, nSocketId);
    return (*(this->_vptr_CEconItemUtils + 2))(this, pItemToSocket, SocketByAttributeDef, pGemItem);
  }
  return result;
}


