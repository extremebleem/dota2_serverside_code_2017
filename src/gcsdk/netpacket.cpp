
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_netpacket.cpp  (line 0, @0x0000000001a6e540, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_netpacket_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// GCSDK::CNetPacket::CNetPacket  (line 20, @0x0000000003236c00, libserver.so)
// callers: GCSDK::CGCClient::OnGCMessageAvailable
void __fastcall GCSDK::CNetPacket::CNetPacket(GCSDK::CNetPacket *const this)
{
  this->m_cRef = 0;
  this->m_pubData = 0;
  this->m_cubData = 0;
}


// GCSDK::CNetPacket::~CNetPacket  (line 31, @0x0000000003236c20, libserver.so)
// callers: CClassMemoryPool<GCSDK::CNetPacket, CUtlMemoryPool<GCSDK::CNetPacket> >::~CClassMemoryPool
void __fastcall GCSDK::CNetPacket::~CNetPacket(GCSDK::CNetPacket *const this)
{
  ;
}


// GCSDK::CNetPacket::Init  (line 45, @0x0000000003236c30, libserver.so)  // inlines: AddRef, V_memcpy, memcpy
// calls: CThreadSafeMultiMemoryPool::Alloc, memcpy
// callers: GCSDK::CGCClient::OnGCMessageAvailable
void __fastcall GCSDK::CNetPacket::Init(GCSDK::CNetPacket *const this, uint32 cubData, const void *pCopyData)
{
  uint8 *v6; // rax

  v6 = CThreadSafeMultiMemoryPool::Alloc(&GCSDK::g_MemPoolMsg, cubData);
  this->m_cubData = cubData;
  this->m_pubData = v6;
  if ( pCopyData != 0 )
    memcpy(v6, pCopyData, cubData);
  ++this->m_cRef;
}


// GCSDK::CNetPacket::AddRef  (line 64, @0x0000000003236c80, libserver.so)
// callers: GCSDK::IMsgNetPacketFromCNetPacket, GCSDK::CProtoBufNetPacket::CProtoBufNetPacket
void __fastcall GCSDK::CNetPacket::AddRef(GCSDK::CNetPacket *const this)
{
  ++this->m_cRef;
}


// GCSDK::CNetPacket::InitAdoptBuffer  (line 70, @0x0000000003236c90, libserver.so)  // inlines: AddRef
void __fastcall GCSDK::CNetPacket::InitAdoptBuffer(GCSDK::CNetPacket *const this, uint32 cubData, uint8 *pubData)
{
  this->m_pubData = pubData;
  ++this->m_cRef;
  this->m_cubData = cubData;
}


// GCSDK::CNetPacket::OrphanBuffer  (line 81, @0x0000000003236ca0, libserver.so)
void __fastcall GCSDK::CNetPacket::OrphanBuffer(GCSDK::CNetPacket *const this)
{
  this->m_pubData = 0;
  this->m_cubData = 0;
}


// GCSDK::CNetPacket::Release  (line 90, @0x0000000003236cc0, libserver.so)  // inlines: Free
// calls: CThreadSafeMultiMemoryPool::Free, CUtlMemoryPoolBase::Free
// callers: GCSDK::CGCClient::OnGCMessageAvailable, GCSDK::CStructNetPacket::~CStructNetPacket, GCSDK::CProtoBufNetPacket::~CProtoBufNetPacket
void __fastcall GCSDK::CNetPacket::Release(GCSDK::CNetPacket *const this)
{
  uint8 *m_pubData; // rsi

  if ( this->m_cRef-- == 1 )
  {
    m_pubData = this->m_pubData;
    if ( m_pubData != 0 )
      CThreadSafeMultiMemoryPool::Free(&GCSDK::g_MemPoolMsg, m_pubData);
    --GCSDK::g_cNetPacket;
    CUtlMemoryPoolBase::Free(&GCSDK::CNetPacketPool::sm_MemPoolNetPacket, this);
  }
}


