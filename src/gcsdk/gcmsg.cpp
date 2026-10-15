
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_gcmsg.cpp  (line 0, @0x0000000001a6e3b0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_gcmsg_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// GCSDK::GCMsgHdr_t::GetHeaderDescription  (line 26, @0x0000000003221190, libserver.so)  // inlines: CUtlString
// calls: GCSDK::PchMsgNameFromEMsg, CUtlString::Format, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "gc msg %s, SteamID %llu"
CUtlString __fastcall GCSDK::GCMsgHdr_t::GetHeaderDescription(CUtlString *a1, GCSDK::GCMsgHdr_t *const this)
{
  uint64 m_ulSteamID; // r12
  const char *v4; // rax

  a1->m_pString = 0;
  m_ulSteamID = this->m_ulSteamID;
  v4 = GCSDK::PchMsgNameFromEMsg(this->m_eMsg);
  CUtlString::Format(a1, "gc msg %s, SteamID %llu", v4, m_ulSteamID);
  return a1;
}


// GCSDK::GCMsgHdrEx_t::GetHeaderDescription  (line 33, @0x00000000032211f0, libserver.so)  // inlines: CUtlString
// calls: GCSDK::PchMsgNameFromEMsg, CUtlString::Format, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "gc msg %s, SteamID %llu, version %hd, job source %llu, job target %llu"
CUtlString __fastcall GCSDK::GCMsgHdrEx_t::GetHeaderDescription(CUtlString *a1, GCSDK::GCMsgHdrEx_t *const this)
{
  JobID_t m_JobIDTarget; // r15
  JobID_t m_JobIDSource; // r14
  int m_nHdrVersion; // r13d
  uint64 m_ulSteamID; // r12
  const char *v7; // rax

  a1->m_pString = 0;
  m_JobIDTarget = this->m_JobIDTarget;
  m_JobIDSource = this->m_JobIDSource;
  m_nHdrVersion = this->m_nHdrVersion;
  m_ulSteamID = this->m_ulSteamID;
  v7 = GCSDK::PchMsgNameFromEMsg(this->m_eMsg);
  CUtlString::Format(
    a1,
    "gc msg %s, SteamID %llu, version %hd, job source %llu, job target %llu",
    v7,
    m_ulSteamID,
    m_nHdrVersion,
    m_JobIDSource,
    m_JobIDTarget);
  return a1;
}


// GCSDK::GCMsgInterHdr_t::GetHeaderDescription  (line 40, @0x0000000003221270, libserver.so)  // inlines: CUtlString
// calls: GCSDK::PchMsgNameFromEMsg, CUtlString::Format, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "gc inter msg %s, SourceAppID %d, version %hd, job source %llu, job target %llu"
CUtlString __fastcall GCSDK::GCMsgInterHdr_t::GetHeaderDescription(CUtlString *a1, GCSDK::GCMsgInterHdr_t *const this)
{
  JobID_t m_JobIDTarget; // r15
  JobID_t m_JobIDSource; // r14
  int m_nHdrVersion; // r13d
  uint32 m_unSourceAppId; // r12d
  const char *v7; // rax

  a1->m_pString = 0;
  m_JobIDTarget = this->m_JobIDTarget;
  m_JobIDSource = this->m_JobIDSource;
  m_nHdrVersion = this->m_nHdrVersion;
  m_unSourceAppId = this->m_unSourceAppId;
  v7 = GCSDK::PchMsgNameFromEMsg(this->m_eMsg);
  CUtlString::Format(
    a1,
    "gc inter msg %s, SourceAppID %d, version %hd, job source %llu, job target %llu",
    v7,
    m_unSourceAppId,
    m_nHdrVersion,
    m_JobIDSource,
    m_JobIDTarget);
  return a1;
}


// GCSDK::IMsgNetPacketFromCNetPacket  (line 51, @0x00000000032212f0, libserver.so)  // inlines: CRefCount, CStructNetPacket, Construct<GCSDK::CStructNetPacket, GCSDK::CNetPacket*>, IMsgNetPacket, Release, ~CRefCount, ~IMsgNetPacket
// calls: GCSDK::CNetPacket::AddRef, operator new, GCSDK::CProtoBufNetPacket::CProtoBufNetPacket, GCSDK::EmitError, V_snprintf, operator delete, _Unwind_Resume, __stack_chk_fail
// callers: GCSDK::CGCClient::OnGCMessageAvailable
// strings: "IMsgNetPacketFromCNetPacket: malformed packet, size %d bytes\n", "%08X:", " %02X"
GCSDK::IMsgNetPacket *__fastcall GCSDK::IMsgNetPacketFromCNetPacket(GCSDK::CNetPacket *pNetPacket)
{
  uint m_cubData; // r12d
  uint8 *m_pubData; // r13
  __int64 v4; // rax
  __int64 v5; // r12
  uint8 *v6; // rax
  GCSDK::IMsgNetPacket *result; // rax
  GCSDK::CProtoBufNetPacket *v8; // r12
  unsigned int i; // r15d
  char *v10; // r14
  unsigned int v11; // ebx
  int v12; // ecx
  char buf[520]; // [rsp+10h] [rbp-240h] BYREF
  unsigned __int64 v14; // [rsp+218h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  m_cubData = pNetPacket->m_cubData;
  m_pubData = pNetPacket->m_pubData;
  if ( m_cubData <= 7 )
  {
    GCSDK::EmitError(&GCSDK::SPEW_GC, "IMsgNetPacketFromCNetPacket: malformed packet, size %d bytes\n", m_cubData);
    if ( m_cubData == 0 )
      return 0;
    goto LABEL_12;
  }
  if ( *m_pubData >= 0 )
  {
    if ( m_cubData > 0x21 )
    {
      v4 = (**g_pMemAlloc)(g_pMemAlloc, 28);
      v5 = v4;
      if ( v4 != 0 )
      {
        *(v4 + 8) = 1;
        *v4 = off_47D0510;
        v6 = pNetPacket->m_pubData;
        *(v5 + 12) = pNetPacket;
        *(v5 + 20) = v6;
        GCSDK::CNetPacket::AddRef(pNetPacket);
        return v5;
      }
      return 0;
    }
    GCSDK::EmitError(&GCSDK::SPEW_GC, "IMsgNetPacketFromCNetPacket: malformed packet, size %d bytes\n", m_cubData);
LABEL_12:
    for ( i = 0; ; i = v11 )
    {
      v10 = &buf[V_snprintf(buf, 12, "%08X:", i)];
      v11 = i + 16;
      if ( i + 16 >= i && i < m_cubData )
      {
        do
        {
          v12 = m_pubData[i++];
          v10 += V_snprintf(v10, 8, " %02X", v12);
        }
        while ( i < v11 && m_cubData > i );
      }
      *v10 = 0;
      GCSDK::EmitError(&GCSDK::SPEW_GC, "%s\n", buf);
      if ( m_cubData <= v11 )
        break;
    }
    return 0;
  }
  v8 = operator new(0x30u);
  GCSDK::CProtoBufNetPacket::CProtoBufNetPacket(
    v8,
    pNetPacket,
    GCProtoBufMsgSrc::GCProtoBufMsgSrc_Unspecified,
    0,
    0,
    *m_pubData & 0x7FFFFFFF);
  result = v8;
  if ( !v8->m_bIsValid )
  {
    if ( _InterlockedSub(&v8->m_cRef, 1u) == 0 )
      (*(v8->_vptr_CRefCount + 2))(v8);
    return 0;
  }
  return result;
}


