
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_netadr.cpp  (line 0, @0x0000000001a67200, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_netadr_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// netadr_t::CompareAdr  (line 33, @0x0000000002f80db0, libserver.so)
bool __fastcall netadr_t::CompareAdr(const netadr_t *const this, const netadr_t *const a, bool onlyBase)
{
  netadrtype_t type; // ecx
  bool result; // al

  type = a->type;
  result = 0;
  if ( a->type == this->type )
  {
    if ( (type - 1) > 1 )
    {
      if ( type != NA_IP )
        return 0;
      if ( !onlyBase && this->port != a->port )
        return result;
      if ( *a->ip != *this->ip )
        return 0;
    }
    return 1;
  }
  return result;
}


// netadr_t::CompareClassBAdr  (line 56, @0x0000000002f80e00, libserver.so)
bool __fastcall netadr_t::CompareClassBAdr(const netadr_t *const this, const netadr_t *const a)
{
  netadrtype_t type; // edx
  bool result; // al

  type = a->type;
  result = 0;
  if ( a->type == this->type )
    return type == NA_LOOPBACK || type == NA_IP && *a->ip == *this->ip;
  return result;
}


// netadr_t::CompareClassCAdr  (line 73, @0x0000000002f80e40, libserver.so)
bool __fastcall netadr_t::CompareClassCAdr(const netadr_t *const this, const netadr_t *const a)
{
  netadrtype_t type; // edx
  bool result; // al

  type = a->type;
  result = 0;
  if ( a->type == this->type )
    return type == NA_LOOPBACK || type == NA_IP && (*a->ip & 0xFFFFFF) == (*this->ip & 0xFFFFFF);
  return result;
}


// netadr_t::IsReservedAdr  (line 90, @0x0000000002f80e80, libserver.so)
bool __fastcall netadr_t::IsReservedAdr(const netadr_t *const this)
{
  bool result; // al
  unsigned __int8 v2; // dl

  if ( this->type == NA_LOOPBACK )
    return 1;
  if ( this->type != NA_IP )
    return 0;
  v2 = this->ip[0];
  result = v2 == 127 || v2 == 10;
  if ( !result )
  {
    if ( v2 == 0xAC )
    {
      result = 1;
      if ( (this->ip[1] - 16) <= 0xFu )
        return result;
      return 0;
    }
    return v2 == 0xC0 && this->ip[1] > 0xA7u;
  }
  return result;
}


// netadr_t::ToString  (line 107, @0x0000000002f80fb0, libserver.so)
// calls: netadr_t::ToString
// callers: CLoopModeGame::LoopInit, CGCClientJobDOTAGCToRelayConnect::BYieldingRunJobFromMsg, CDOTAGCServerSystem::MatchSignOut
// globals: netadr_t::ToString(bool)::s, netadr_t::ToString(bool)::slot
const char *__fastcall netadr_t::ToString(const netadr_t *const this, bool onlyBase)
{
  int v2; // eax
  char *v3; // rbx

  v2 = netadr_t::ToString(bool)const::slot++;
  v3 = &netadr_t::ToString(bool)const::s[64 * (v2 % 4)];
  netadr_t::ToString(this, v3, 0x40u, onlyBase);
  return v3;
}


// netadr_t::ToString  (line 121, @0x0000000002f80ef0, libserver.so)  // inlines: V_strncpy<unsigned int>
// calls: _V_strncpy, V_snprintf
// callers: CGCClientJobDOTAGCToRelayConnect::BYieldingRunJobFromMsg, netadr_t::ToString
// strings: "%i.%i.%i.%i:%i", "loopback", "broadcast", "%i.%i.%i.%i"
// local variable allocation has failed, the output may be wrong!
void __fastcall netadr_t::ToString(const netadr_t *const this, char *pchBuffer, uint32 unBufferSize, bool onlyBase)
{
  netadrtype_t type; // eax

  type = this->type;
  if ( this->type == NA_LOOPBACK )
  {
    _V_strncpy(pchBuffer, "loopback", *&unBufferSize);
  }
  else if ( type == NA_BROADCAST )
  {
    _V_strncpy(pchBuffer, "broadcast", *&unBufferSize);
  }
  else if ( type == NA_IP )
  {
    if ( onlyBase )
      V_snprintf(pchBuffer, unBufferSize, "%i.%i.%i.%i", this->ip[0], this->ip[1], this->ip[2], this->ip[3]);
    else
      V_snprintf(
        pchBuffer,
        unBufferSize,
        "%i.%i.%i.%i:%i",
        this->ip[0],
        this->ip[1],
        this->ip[2],
        this->ip[3],
        __ROR2__(this->port, 8));
  }
  else
  {
    _V_strncpy(pchBuffer, "unknown", *&unBufferSize);
  }
}


// netadr_t::IsLocalhost  (line 149, @0x0000000002f81000, libserver.so)
// callers: CGCClientJobDOTAGCToRelayConnect::BYieldingRunJobFromMsg
bool __fastcall netadr_t::IsLocalhost(const netadr_t *const this)
{
  return *this->ip == 16777343;
}


// netadr_t::IsLoopback  (line 155, @0x0000000002f81010, libserver.so)
bool __fastcall netadr_t::IsLoopback(const netadr_t *const this)
{
  return this->type == NA_LOOPBACK;
}


// netadr_t::Clear  (line 161, @0x0000000002f81020, libserver.so)
// callers: CDOTAGCServerSystem::SendConnectionStats, CGCClientJobDOTAGCToRelayConnect::BYieldingRunJobFromMsg, CDOTAGCServerSystem::FireGameEvent
void __fastcall netadr_t::Clear(netadr_t *const this)
{
  this->ip[3] = 0;
  this->ip[2] = 0;
  this->ip[1] = 0;
  this->ip[0] = 0;
  this->port = 0;
  this->type = NA_NULL;
}


// netadr_t::SetIP  (line 168, @0x0000000002f81050, libserver.so)
void __fastcall netadr_t::SetIP(netadr_t *const this, uint8 b1, uint8 b2, uint8 b3, uint8 b4)
{
  this->ip[0] = b1;
  this->ip[1] = b2;
  this->ip[2] = b3;
  this->ip[3] = b4;
}


// netadr_t::SetIP  (line 176, @0x0000000002f81070, libserver.so)
// callers: netadr_t::netadr_t, CDOTAGCServerSystem::SendConnectionStats, CGCClientJobDOTAGCToRelayConnect::BYieldingRunJobFromMsg, CDOTAGCServerSystem::FireGameEvent, CDOTAGCServerSystem::UpdateCrashSentinel, CDOTAGCServerSystem::MatchSignOut
void __fastcall netadr_t::SetIP(netadr_t *const this, uint unIP)
{
  *this->ip = _byteswap_ulong(unIP);
}


// netadr_t::SetType  (line 181, @0x0000000002f81080, libserver.so)
// callers: netadr_t::netadr_t, CDOTAGCServerSystem::SendConnectionStats, CGCClientJobDOTAGCToRelayConnect::BYieldingRunJobFromMsg, CDOTAGCServerSystem::FireGameEvent, CDOTAGCServerSystem::UpdateCrashSentinel, CDOTAGCServerSystem::MatchSignOut
void __fastcall netadr_t::SetType(netadr_t *const this, netadrtype_t newtype)
{
  this->type = newtype;
}


// netadr_t::GetType  (line 186, @0x0000000002f81090, libserver.so)
netadrtype_t __fastcall netadr_t::GetType(const netadr_t *const this)
{
  return this->type;
}


// netadr_t::GetPort  (line 191, @0x0000000002f810a0, libserver.so)  // inlines: WordSwapC<short unsigned int>
unsigned __int16 __fastcall netadr_t::GetPort(const netadr_t *const this)
{
  return __ROL2__(this->port, 8);
}


// netadr_t::GetIPNetworkByteOrder  (line 196, @0x0000000002f810b0, libserver.so)
unsigned int __fastcall netadr_t::GetIPNetworkByteOrder(const netadr_t *const this)
{
  return *this->ip;
}


// netadr_t::GetIPHostByteOrder  (line 201, @0x0000000002f810c0, libserver.so)
// callers: CDOTAGCServerSystem::SendConnectionStats, CGCClientJobDOTAGCToRelayConnect::BYieldingRunJobFromMsg, CDOTAGCServerSystem::FireGameEvent, CDOTAGCServerSystem::UpdateCrashSentinel, CDOTAGCServerSystem::UpdateGCServerInfo
unsigned int __fastcall netadr_t::GetIPHostByteOrder(const netadr_t *const this)
{
  return _byteswap_ulong(*this->ip);
}


// netadr_t::ToSockadr  (line 206, @0x0000000002f810d0, libserver.so)  // inlines: V_memset, memset
void __fastcall netadr_t::ToSockadr(const netadr_t *const this, sockaddr *s)
{
  netadrtype_t type; // eax
  unsigned __int16 v3; // ax
  unsigned __int16 port; // ax

  *&s->sa_family = 0;
  *&s->sa_data[6] = 0;
  type = this->type;
  if ( this->type == NA_BROADCAST )
  {
    s->sa_family = 2;
    port = this->port;
    *&s->sa_data[2] = -1;
    *s->sa_data = port;
  }
  else if ( type == NA_IP )
  {
    s->sa_family = 2;
    *&s->sa_data[2] = *this->ip;
    *s->sa_data = this->port;
  }
  else if ( type == NA_LOOPBACK )
  {
    s->sa_family = 2;
    v3 = this->port;
    *&s->sa_data[2] = 2130706433;
    *s->sa_data = v3;
  }
}


// netadr_t::SetFromSockadr  (line 230, @0x0000000002f81160, libserver.so)  // inlines: Clear
bool __fastcall netadr_t::SetFromSockadr(netadr_t *const this, const sockaddr *s)
{
  if ( s->sa_family == 2 )
  {
    this->type = NA_IP;
    *this->ip = *&s->sa_data[2];
    this->port = *s->sa_data;
    return 1;
  }
  else
  {
    this->ip[3] = 0;
    this->ip[2] = 0;
    this->ip[1] = 0;
    this->ip[0] = 0;
    this->port = 0;
    this->type = NA_NULL;
    return 0;
  }
}


// netadr_t::IsValid  (line 246, @0x0000000002f811b0, libserver.so)
// callers: CGCClientJobDOTAGCToRelayConnect::BYieldingRunJobFromMsg
bool __fastcall netadr_t::IsValid(const netadr_t *const this)
{
  bool result; // al

  result = 0;
  if ( this->port != 0 && this->type != NA_NULL )
    return *this->ip != 0;
  return result;
}


// netadr_t::IsBaseAdrValid  (line 252, @0x0000000002f811e0, libserver.so)
bool __fastcall netadr_t::IsBaseAdrValid(const netadr_t *const this)
{
  bool result; // al

  result = 0;
  if ( this->type != NA_NULL )
    return *this->ip != 0;
  return result;
}


// netadr_t::SetPort  (line 258, @0x0000000002f81200, libserver.so)  // inlines: WordSwapC<short unsigned int>
// callers: netadr_t::netadr_t, CDOTAGCServerSystem::SendConnectionStats, CGCClientJobDOTAGCToRelayConnect::BYieldingRunJobFromMsg, CDOTAGCServerSystem::FireGameEvent, CDOTAGCServerSystem::UpdateCrashSentinel, CDOTAGCServerSystem::MatchSignOut
void __fastcall netadr_t::SetPort(netadr_t *const this, unsigned __int16 newport)
{
  this->port = __ROL2__(newport, 8);
}


// netadr_t::SetFromString  (line 263, @0x0000000002f81210, libserver.so)  // inlines: Clear, SetIP, SetPort, V_memcpy, V_strcat_safe<128ul>, V_strcpy_safe<128ul>, V_strnicmp_fast<int>, WordSwapC<short unsigned int>, memcpy, strchr
// calls: _V_strncpy, _V_strnicmp_fast, strchr, V_sscanf, gethostbyname, V_atoi, _V_strncat, __stack_chk_fail
// callers: CDOTAGCServerSystem::SendConnectionStats, CDOTAGCServerSystem::FireGameEvent
// strings: "loopback", "localhost", "%d.%d.%d.%d:%d", "127.0.0.1"
bool __fastcall netadr_t::SetFromString(netadr_t *const this, const char *pch, bool bUseDNS)
{
  bool v5; // r12
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // si
  __int16 v9; // di
  char *v10; // rax
  char *v11; // r13
  struct hostent *v12; // rax
  unsigned __int16 v13; // ax
  int n1; // [rsp+1Ch] [rbp-144h] BYREF
  int n2; // [rsp+20h] [rbp-140h] BYREF
  int n3; // [rsp+24h] [rbp-13Ch] BYREF
  int n4; // [rsp+28h] [rbp-138h] BYREF
  int n5; // [rsp+2Ch] [rbp-134h] BYREF
  char address[128]; // [rsp+30h] [rbp-130h] BYREF
  char newaddress[128]; // [rsp+B0h] [rbp-B0h] BYREF
  unsigned __int64 v22; // [rsp+138h] [rbp-28h]

  this->ip[3] = 0;
  v22 = __readfsqword(0x28u);
  this->ip[2] = 0;
  this->ip[1] = 0;
  this->ip[0] = 0;
  this->port = 0;
  this->type = NA_IP;
  if ( pch != 0 )
  {
    _V_strncpy(address, pch, 128);
    if ( _V_strnicmp_fast(address, "loopback", 8) == 0 )
    {
      this->type = NA_LOOPBACK;
      _V_strncpy(newaddress, "127.0.0.1", 128);
      _V_strncat(newaddress, &address[8], 128, 0xFFFFFFFFLL);
      _V_strncpy(address, newaddress, 128);
    }
    if ( _V_strnicmp_fast(address, "localhost", 9) == 0 )
      qmemcpy(address, "127.0.0.1", 9);
    if ( (address[0] - 48) <= 9u && strchr(address, 46) != 0 )
    {
      v5 = 0;
      n1 = -1;
      n2 = -1;
      n3 = -1;
      n4 = -1;
      n5 = 0;
      if ( V_sscanf(address, "%d.%d.%d.%d:%d", &n1, &n2, &n3, &n4, &n5) > 3 && n1 <= 0xFF )
      {
        v6 = n2;
        if ( n2 <= 0xFF )
        {
          v7 = n3;
          if ( n3 <= 0xFF )
          {
            v8 = n4;
            if ( n4 <= 0xFF )
            {
              v9 = n5;
              if ( n5 <= 0xFFFF )
              {
                this->ip[0] = n1;
                v5 = 1;
                this->ip[1] = v6;
                this->ip[2] = v7;
                this->ip[3] = v8;
                this->port = __ROL2__(v9, 8);
              }
            }
          }
        }
      }
      return v5;
    }
    if ( bUseDNS )
    {
      v10 = strchr(address, 58);
      v11 = v10;
      if ( v10 != 0 )
        *v10 = 0;
      v12 = gethostbyname(address);
      if ( v12 != 0 )
      {
        v5 = 1;
        *this->ip = _byteswap_ulong(_byteswap_ulong(**v12->h_addr_list));
        if ( v11 != 0 )
        {
          v13 = V_atoi(v11 + 1);
          this->port = (v13 << 8) | HIBYTE(v13);
        }
        return v5;
      }
    }
  }
  return 0;
}


// netadr_t::operator<  (line 346, @0x0000000002f814d0, libserver.so)
bool __fastcall netadr_t::operator<(const netadr_t *const this, const netadr_t *const netadr)
{
  unsigned int v2; // edx
  bool result; // al

  v2 = *this->ip;
  result = 1;
  if ( *netadr->ip >= v2 )
  {
    result = 0;
    if ( *netadr->ip <= v2 )
      return netadr->port < this->port;
  }
  return result;
}


// netadr_t::SetFromSocket  (line 356, @0x0000000002f81500, libserver.so)  // inlines: Clear, SetFromSockadr
// calls: getsockname, __stack_chk_fail
void __fastcall netadr_t::SetFromSocket(netadr_t *const this, int hSocket)
{
  int v3; // eax
  socklen_t namelen; // [rsp+Ch] [rbp-34h] BYREF
  sockaddr address; // [rsp+10h] [rbp-30h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-18h]

  this->ip[3] = 0;
  this->ip[2] = 0;
  this->ip[1] = 0;
  this->ip[0] = 0;
  v6 = __readfsqword(0x28u);
  this->port = 0;
  this->type = NA_IP;
  namelen = 16;
  if ( getsockname(hSocket, &address, &namelen) == 0 )
  {
    if ( address.sa_family == 2 )
    {
      v3 = *&address.sa_data[2];
      this->type = NA_IP;
      *this->ip = v3;
      this->port = *address.sa_data;
    }
    else
    {
      this->ip[3] = 0;
      this->ip[2] = 0;
      this->ip[1] = 0;
      this->ip[0] = 0;
      this->port = 0;
      this->type = NA_NULL;
    }
  }
}


// netadr_t::Unserialize  (line 374, @0x0000000002f815b0, libserver.so)  // inlines: Clear, GetNumBitsLeft, GetNumBytesLeft, LoadLittleDWord, ReadChar, ReadShort, ReadUBitLong, Seek
// calls: bf_read::SetOverflowFlag
bool __fastcall netadr_t::Unserialize(netadr_t *const this, bf_read *const readBuf)
{
  int m_iCurBit; // edx
  const unsigned __int8 *m_pData; // rdi
  netadrtype_t v5; // eax
  int v6; // eax
  const unsigned __int8 *v7; // r8
  int v8; // eax
  int v9; // eax
  const unsigned __int8 *v10; // r9
  int v11; // eax
  int v12; // eax
  const unsigned __int8 *v13; // r9
  int v14; // eax
  int v15; // eax
  const unsigned __int8 *v16; // r9
  int v17; // eax
  int v18; // eax
  const unsigned __int8 *v19; // r8
  int v20; // eax
  bf_read *readBufa; // [rsp+8h] [rbp-18h]
  bf_read *readBufb; // [rsp+8h] [rbp-18h]
  bf_read *readBufc; // [rsp+8h] [rbp-18h]
  bf_read *readBufd; // [rsp+8h] [rbp-18h]
  bf_read *readBufe; // [rsp+8h] [rbp-18h]

  m_iCurBit = readBuf->m_iCurBit;
  if ( readBuf->m_nDataBits - m_iCurBit <= 1 )
    goto LABEL_15;
  m_pData = readBuf->m_pData;
  readBuf->m_iCurBit = m_iCurBit + 2;
  v5 = ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
      | (*&m_pData[4 * ((m_iCurBit + 1) >> 5)] << (32 - (m_iCurBit & 0x1F))))
     & 3;
  this->type = v5;
  if ( v5 != NA_IP )
    return 1;
  v6 = readBuf->m_iCurBit;
  if ( ((readBuf->m_nDataBits - v6) >> 3) <= 5 )
  {
LABEL_15:
    this->ip[3] = 0;
    this->ip[2] = 0;
    this->ip[1] = 0;
    this->ip[0] = 0;
    this->port = 0;
    this->type = NA_NULL;
    if ( m_iCurBit < 0 || m_iCurBit > readBuf->m_nDataBits )
    {
      readBufa = readBuf;
      bf_read::SetOverflowFlag(readBuf);
      readBufa->m_iCurBit = readBufa->m_nDataBits;
      return 0;
    }
    else
    {
      readBuf->m_iCurBit = m_iCurBit;
      return 0;
    }
  }
  else
  {
    if ( readBuf->m_nDataBits - v6 <= 7 )
    {
      readBuf->m_iCurBit = readBuf->m_nDataBits;
      readBufb = readBuf;
      bf_read::SetOverflowFlag(readBuf);
      LOBYTE(v8) = 0;
      readBuf = readBufb;
    }
    else
    {
      v7 = readBuf->m_pData;
      readBuf->m_iCurBit = v6 + 8;
      v8 = (*&v7[4 * ((v6 + 7) >> 5)] << (32 - (v6 & 0x1F))) | (*&v7[4 * (v6 >> 5)] >> (v6 & 0x1F));
    }
    this->ip[0] = v8;
    v9 = readBuf->m_iCurBit;
    if ( readBuf->m_nDataBits - v9 <= 7 )
    {
      readBuf->m_iCurBit = readBuf->m_nDataBits;
      readBufe = readBuf;
      bf_read::SetOverflowFlag(readBuf);
      LOBYTE(v11) = 0;
      readBuf = readBufe;
    }
    else
    {
      v10 = readBuf->m_pData;
      readBuf->m_iCurBit = v9 + 8;
      v11 = (*&v10[4 * ((v9 + 7) >> 5)] << (32 - (v9 & 0x1F))) | (*&v10[4 * (v9 >> 5)] >> (v9 & 0x1F));
    }
    this->ip[1] = v11;
    v12 = readBuf->m_iCurBit;
    if ( readBuf->m_nDataBits - v12 <= 7 )
    {
      readBuf->m_iCurBit = readBuf->m_nDataBits;
      readBufd = readBuf;
      bf_read::SetOverflowFlag(readBuf);
      LOBYTE(v14) = 0;
      readBuf = readBufd;
    }
    else
    {
      v13 = readBuf->m_pData;
      readBuf->m_iCurBit = v12 + 8;
      v14 = (*&v13[4 * ((v12 + 7) >> 5)] << (32 - (v12 & 0x1F))) | (*&v13[4 * (v12 >> 5)] >> (v12 & 0x1F));
    }
    this->ip[2] = v14;
    v15 = readBuf->m_iCurBit;
    if ( readBuf->m_nDataBits - v15 <= 7 )
    {
      readBuf->m_iCurBit = readBuf->m_nDataBits;
      readBufc = readBuf;
      bf_read::SetOverflowFlag(readBuf);
      LOBYTE(v17) = 0;
      readBuf = readBufc;
    }
    else
    {
      v16 = readBuf->m_pData;
      readBuf->m_iCurBit = v15 + 8;
      v17 = (*&v16[4 * ((v15 + 7) >> 5)] << (32 - (v15 & 0x1F))) | (*&v16[4 * (v15 >> 5)] >> (v15 & 0x1F));
    }
    this->ip[3] = v17;
    v18 = readBuf->m_iCurBit;
    if ( readBuf->m_nDataBits - v18 <= 15 )
    {
      readBuf->m_iCurBit = readBuf->m_nDataBits;
      bf_read::SetOverflowFlag(readBuf);
      LOWORD(v20) = 0;
    }
    else
    {
      v19 = readBuf->m_pData;
      readBuf->m_iCurBit = v18 + 16;
      v20 = (*&v19[4 * ((v18 + 15) >> 5)] << (32 - (v18 & 0x1F))) | (*&v19[4 * (v18 >> 5)] >> (v18 & 0x1F));
    }
    this->port = v20;
    return 1;
  }
}


// netadr_t::Serialize  (line 415, @0x0000000002f818a0, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, SetOverflowFlag, WriteChar, WriteShort, WriteUBitLong
// calls: bf_write::WriteSBitLong, bf_write::SeekToBit
bool __fastcall netadr_t::Serialize(netadr_t *const this, bf_write *const writeBuf)
{
  bf_write *v3; // rbx
  int m_nDataBits; // edx
  int m_iCurBit; // r13d
  netadrtype_t type; // eax
  uint32 *v7; // rdi
  int v8; // eax
  uint32 v9; // r9d
  netadrtype_t v10; // eax
  bool result; // al

  v3 = writeBuf;
  m_nDataBits = writeBuf->m_nDataBits;
  m_iCurBit = writeBuf->m_iCurBit;
  type = this->type;
  if ( m_nDataBits - m_iCurBit <= 1 )
    goto LABEL_9;
  writeBuf->m_iCurBit = m_iCurBit + 2;
  v7 = &writeBuf->m_pData[m_iCurBit >> 5];
  v8 = __ROL4__(type, m_iCurBit & 0x1F);
  v9 = *v7;
  writeBuf = (1u >> (31 - (m_iCurBit & 0x1F)));
  v7[writeBuf] ^= writeBuf & (v8 ^ v7[writeBuf]);
  m_nDataBits = 3 << (m_iCurBit & 0x1F);
  *v7 = v9 ^ m_nDataBits & (v9 ^ v8);
  while ( 1 )
  {
    v10 = this->type;
    if ( this->type >= NA_NULL )
    {
      if ( v10 <= NA_BROADCAST )
        goto LABEL_7;
      if ( v10 == NA_IP )
        break;
    }
LABEL_9:
    writeBuf->m_iCurBit = m_nDataBits;
    writeBuf->m_bOverflow = 1;
  }
  bf_write::WriteSBitLong(v3, this->ip[0], 8);
  bf_write::WriteSBitLong(v3, this->ip[1], 8);
  bf_write::WriteSBitLong(v3, this->ip[2], 8);
  bf_write::WriteSBitLong(v3, this->ip[3], 8);
  bf_write::WriteSBitLong(v3, this->port, 16);
LABEL_7:
  result = 1;
  if ( v3->m_bOverflow )
  {
    bf_write::SeekToBit(v3, m_iCurBit);
    return 0;
  }
  return result;
}


