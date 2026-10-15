
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_gameinfo.cpp  (line 0, @0x0000000001a67660, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_gameinfo_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// LoadGameInfo  (line 23, @0x000000000306d0e0, libserver.so)  // inlines: PeekPut, PutChar, PutTabs, PutTypeBin<char>, V_ComposeFileName<long unsigned int>, WasLastCharacterCR, operator[], ~CUtlBuffer, ~CUtlMemory
// calls: _V_ComposeFileName, Plat_FileSize, V_fopen, CUtlBuffer::CUtlBuffer, V_fread, V_fclose, CUtlMemory<unsigned char, int>::Purge, CUtlBuffer::SeekPut, CUtlBuffer::CheckPut, KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromBuffer (17 total)
// callers: CTier1AppSystemDict::SetModPath
// strings: "gameinfo.gi", "gameinfo"
KeyValues *__fastcall LoadGameInfo(const char *pModPath)
{
  __int64 v1; // r12
  __int64 v2; // r13
  __int64 v3; // r12
  KeyValues *v4; // r12
  KeyValues *v6; // r13
  int m_nTab; // r12d
  CUtlBuffer buf; // [rsp+10h] [rbp-280h] BYREF
  char pGameInfoPath[512]; // [rsp+60h] [rbp-230h] BYREF
  unsigned __int64 v10; // [rsp+268h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  _V_ComposeFileName(pModPath, "gameinfo.gi", pGameInfoPath, 512);
  v1 = Plat_FileSize(pGameInfoPath);
  if ( (v1 - 1) > 0x5F5E0FF )
    return 0;
  v2 = V_fopen(pGameInfoPath, "rb");
  if ( v2 == 0 )
    return 0;
  CUtlBuffer::CUtlBuffer(&buf, 0, v1 + 1, 1);
  v3 = V_fread(buf.m_Memory.m_pMemory, 1, v1, v2);
  V_fclose(v2);
  if ( v3 != 0 )
  {
    CUtlBuffer::SeekPut(&buf, CUtlBuffer::SeekType_t::SEEK_HEAD, v3);
    if ( (buf.m_Flags & 1) != 0
      && buf.m_Put != buf.m_nOffset
      && buf.m_Memory.m_pMemory[buf.m_Put - 1 - buf.m_nOffset] == 10
      || buf.m_Put == 0 )
    {
      m_nTab = 0;
      if ( (buf.m_Flags & 0x10) == 0 )
        m_nTab = buf.m_nTab;
      while ( --m_nTab >= 0 )
      {
        if ( CUtlBuffer::CheckPut(&buf, 1) )
        {
          buf.m_Memory.m_pMemory[buf.m_Put - buf.m_nOffset] = 9;
          ++buf.m_Put;
          CUtlBuffer::AddNullTermination(&buf);
        }
      }
    }
    if ( CUtlBuffer::CheckPut(&buf, 1) )
    {
      buf.m_Memory.m_pMemory[buf.m_Put - buf.m_nOffset] = 0;
      ++buf.m_Put;
      CUtlBuffer::AddNullTermination(&buf);
    }
    v6 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v6, "gameinfo");
    v4 = v6;
    if ( KeyValues::LoadFromBuffer(v6, "gameinfo", &buf, 0, 0, 0, 0) )
      goto LABEL_5;
    KeyValues::deleteThis(v6);
  }
  v4 = 0;
LABEL_5:
  CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
  return v4;
}


