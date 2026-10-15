
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// BasicGameStatsRecord_t::Clear  (line 14, @0x0000000002264830, libserver.so)  // inlines: V_memset, memset
// callers: BasicGameStats_t::Clear, CBaseGameStats::Clear, CBaseGameStats::LoadFromFile
void __fastcall BasicGameStatsRecord_t::Clear(BasicGameStatsRecord_t *const this)
{
  this->m_nCount = 0;
  this->m_nSeconds = 0;
  this->m_nCommentary = 0;
  this->m_nHDR = 0;
  this->m_nCaptions = 0;
  this->m_bSteam = 1;
  this->m_bCyberCafe = 0;
  *this->m_nSkill = 0;
  this->m_nSkill[2] = 0;
  this->m_nDeaths = 0;
}


// BasicGameStatsRecord_t::SaveToBuffer  (line 27, @0x0000000002264880, libserver.so)  // inlines: LowLevelByteSwap<int>, PeekPut, PutChar, PutInt, PutTabs, PutType<int>, PutTypeBin<char>, PutTypeBin<int>, SwapBufferToTargetEndian<int>, V_memcpy, WasLastCharacterCR, memcpy, operator[]
// calls: CUtlBuffer::Printf, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: BasicGameStats_t::SaveToBuffer
void __fastcall BasicGameStatsRecord_t::SaveToBuffer(BasicGameStatsRecord_t *const this, CUtlBuffer *const buf)
{
  int m_nCount; // r12d
  int m_nSeconds; // r12d
  int m_nCommentary; // r12d
  int m_nHDR; // r12d
  int m_nCaptions; // r12d
  __int64 i; // r12
  int v10; // r14d
  unsigned __int8 m_Flags; // al
  bool m_bSteam; // r14
  int v13; // edx
  int m_nOffset; // esi
  int m_nTab; // r12d
  unsigned __int8 v16; // al
  bool m_bCyberCafe; // r14
  int v18; // edx
  int v19; // esi
  int v20; // r12d
  int m_nDeaths; // r12d
  int v22; // eax
  unsigned __int8 *v23; // rdx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int m_Put; // eax
  unsigned __int8 *v30; // rdx
  unsigned __int8 *v31; // rdx
  unsigned __int8 *v32; // rdx
  unsigned __int8 *v33; // rdx
  unsigned __int8 *v34; // rdx
  unsigned __int8 *v35; // rdx
  int v36; // [rsp+4h] [rbp-3Ch]
  int v37; // [rsp+14h] [rbp-2Ch]
  int v38; // [rsp+1Ch] [rbp-24h]
  int v39; // [rsp+1Ch] [rbp-24h]
  int v40; // [rsp+1Ch] [rbp-24h]
  int v41; // [rsp+1Ch] [rbp-24h]
  int v42; // [rsp+1Ch] [rbp-24h]
  int v43; // [rsp+1Ch] [rbp-24h]
  int v44; // [rsp+1Ch] [rbp-24h]

  m_nCount = this->m_nCount;
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%d", m_nCount);
  }
  else if ( CUtlBuffer::CheckPut(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      m_Put = buf->m_Put;
      v35 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
      if ( v35 != 0 )
      {
        LOBYTE(v44) = HIBYTE(m_nCount);
        BYTE1(v44) = BYTE2(m_nCount);
        BYTE2(v44) = BYTE1(m_nCount);
        HIBYTE(v44) = m_nCount;
        *v35 = v44;
        m_Put = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_nCount;
      m_Put = buf->m_Put;
    }
    buf->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(buf);
  }
  m_nSeconds = this->m_nSeconds;
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%d", m_nSeconds);
  }
  else
  {
    v36 = this->m_nSeconds;
    if ( CUtlBuffer::CheckPut(buf, 4) )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        v25 = buf->m_Put;
        v33 = &buf->m_Memory.m_pMemory[v25 - buf->m_nOffset];
        if ( v33 != 0 )
        {
          LOBYTE(v42) = HIBYTE(v36);
          BYTE1(v42) = BYTE2(v36);
          BYTE2(v42) = BYTE1(v36);
          HIBYTE(v42) = v36;
          *v33 = v42;
          v25 = buf->m_Put;
        }
      }
      else
      {
        *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_nSeconds;
        v25 = buf->m_Put;
      }
      buf->m_Put = v25 + 4;
      CUtlBuffer::AddNullTermination(buf);
      m_nCommentary = this->m_nCommentary;
      if ( (buf->m_Flags & 1) != 0 )
        goto LABEL_6;
      goto LABEL_55;
    }
  }
  m_nCommentary = this->m_nCommentary;
  if ( (buf->m_Flags & 1) != 0 )
  {
LABEL_6:
    CUtlBuffer::Printf(buf, "%d", m_nCommentary);
    goto LABEL_7;
  }
LABEL_55:
  if ( CUtlBuffer::CheckPut(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      v26 = buf->m_Put;
      v32 = &buf->m_Memory.m_pMemory[v26 - buf->m_nOffset];
      if ( v32 != 0 )
      {
        LOBYTE(v41) = HIBYTE(m_nCommentary);
        BYTE1(v41) = BYTE2(m_nCommentary);
        BYTE2(v41) = BYTE1(m_nCommentary);
        HIBYTE(v41) = m_nCommentary;
        *v32 = v41;
        v26 = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_nCommentary;
      v26 = buf->m_Put;
    }
    buf->m_Put = v26 + 4;
    CUtlBuffer::AddNullTermination(buf);
    m_nHDR = this->m_nHDR;
    if ( (buf->m_Flags & 1) != 0 )
      goto LABEL_8;
    goto LABEL_59;
  }
LABEL_7:
  m_nHDR = this->m_nHDR;
  if ( (buf->m_Flags & 1) != 0 )
  {
LABEL_8:
    CUtlBuffer::Printf(buf, "%d", m_nHDR);
    goto LABEL_9;
  }
LABEL_59:
  if ( CUtlBuffer::CheckPut(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      v27 = buf->m_Put;
      v30 = &buf->m_Memory.m_pMemory[v27 - buf->m_nOffset];
      if ( v30 != 0 )
      {
        LOBYTE(v39) = HIBYTE(m_nHDR);
        BYTE1(v39) = BYTE2(m_nHDR);
        BYTE2(v39) = BYTE1(m_nHDR);
        HIBYTE(v39) = m_nHDR;
        *v30 = v39;
        v27 = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_nHDR;
      v27 = buf->m_Put;
    }
    buf->m_Put = v27 + 4;
    CUtlBuffer::AddNullTermination(buf);
    m_nCaptions = this->m_nCaptions;
    if ( (buf->m_Flags & 1) != 0 )
      goto LABEL_10;
    goto LABEL_63;
  }
LABEL_9:
  m_nCaptions = this->m_nCaptions;
  if ( (buf->m_Flags & 1) != 0 )
  {
LABEL_10:
    CUtlBuffer::Printf(buf, "%d", m_nCaptions);
    goto LABEL_11;
  }
LABEL_63:
  if ( CUtlBuffer::CheckPut(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      v28 = buf->m_Put;
      v31 = &buf->m_Memory.m_pMemory[v28 - buf->m_nOffset];
      if ( v31 != 0 )
      {
        LOBYTE(v40) = HIBYTE(m_nCaptions);
        BYTE1(v40) = BYTE2(m_nCaptions);
        BYTE2(v40) = BYTE1(m_nCaptions);
        HIBYTE(v40) = m_nCaptions;
        *v31 = v40;
        v28 = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_nCaptions;
      v28 = buf->m_Put;
    }
    buf->m_Put = v28 + 4;
    CUtlBuffer::AddNullTermination(buf);
  }
LABEL_11:
  for ( i = 0; i != 3; ++i )
  {
    v10 = this->m_nSkill[i];
    if ( (buf->m_Flags & 1) != 0 )
    {
      CUtlBuffer::Printf(buf, "%d", v10);
    }
    else
    {
      v37 = this->m_nSkill[i];
      if ( CUtlBuffer::CheckPut(buf, 4) )
      {
        if ( (*&buf->m_Byteswap & 1) != 0 )
        {
          v22 = buf->m_Put;
          v23 = &buf->m_Memory.m_pMemory[v22 - buf->m_nOffset];
          if ( v23 != 0 )
          {
            LOBYTE(v38) = HIBYTE(v37);
            BYTE1(v38) = BYTE2(v37);
            BYTE2(v38) = BYTE1(v37);
            HIBYTE(v38) = v37;
            *v23 = v38;
            v22 = buf->m_Put;
          }
        }
        else
        {
          *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v10;
          v22 = buf->m_Put;
        }
        buf->m_Put = v22 + 4;
        CUtlBuffer::AddNullTermination(buf);
      }
    }
  }
  m_Flags = buf->m_Flags;
  m_bSteam = this->m_bSteam;
  v13 = buf->m_Put;
  if ( (m_Flags & 1) != 0 )
  {
    m_nOffset = buf->m_nOffset;
    if ( v13 != m_nOffset && buf->m_Memory.m_pMemory[v13 - 1 - m_nOffset] == 10 )
    {
      m_nTab = 0;
      if ( (m_Flags & 0x10) != 0 )
        goto LABEL_19;
      goto LABEL_72;
    }
  }
  if ( v13 == 0 )
  {
    m_nTab = 0;
    if ( (m_Flags & 0x10) == 0 )
LABEL_72:
      m_nTab = buf->m_nTab;
LABEL_19:
    while ( --m_nTab >= 0 )
    {
      while ( CUtlBuffer::CheckPut(buf, 1) )
      {
        buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 9;
        ++buf->m_Put;
        CUtlBuffer::AddNullTermination(buf);
        if ( --m_nTab < 0 )
          goto LABEL_22;
      }
    }
  }
LABEL_22:
  if ( CUtlBuffer::CheckPut(buf, 1) )
  {
    buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_bSteam;
    ++buf->m_Put;
    CUtlBuffer::AddNullTermination(buf);
  }
  v16 = buf->m_Flags;
  m_bCyberCafe = this->m_bCyberCafe;
  v18 = buf->m_Put;
  if ( (v16 & 1) != 0 )
  {
    v19 = buf->m_nOffset;
    if ( v18 != v19 && buf->m_Memory.m_pMemory[v18 - 1 - v19] == 10 )
    {
      v20 = 0;
      if ( (v16 & 0x10) != 0 )
        goto LABEL_28;
      goto LABEL_71;
    }
  }
  if ( v18 == 0 )
  {
    v20 = 0;
    if ( (v16 & 0x10) == 0 )
LABEL_71:
      v20 = buf->m_nTab;
LABEL_28:
    while ( --v20 >= 0 )
    {
      while ( CUtlBuffer::CheckPut(buf, 1) )
      {
        buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 9;
        ++buf->m_Put;
        CUtlBuffer::AddNullTermination(buf);
        if ( --v20 < 0 )
          goto LABEL_31;
      }
    }
  }
LABEL_31:
  if ( CUtlBuffer::CheckPut(buf, 1) )
  {
    buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_bCyberCafe;
    ++buf->m_Put;
    CUtlBuffer::AddNullTermination(buf);
    m_nDeaths = this->m_nDeaths;
    if ( (buf->m_Flags & 1) != 0 )
      goto LABEL_33;
  }
  else
  {
    m_nDeaths = this->m_nDeaths;
    if ( (buf->m_Flags & 1) != 0 )
    {
LABEL_33:
      CUtlBuffer::Printf(buf, "%d", m_nDeaths);
      return;
    }
  }
  if ( CUtlBuffer::CheckPut(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      v24 = buf->m_Put;
      v34 = &buf->m_Memory.m_pMemory[v24 - buf->m_nOffset];
      if ( v34 != 0 )
      {
        LOBYTE(v43) = HIBYTE(m_nDeaths);
        BYTE1(v43) = BYTE2(m_nDeaths);
        BYTE2(v43) = BYTE1(m_nDeaths);
        HIBYTE(v43) = m_nDeaths;
        *v34 = v43;
        v24 = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_nDeaths;
      v24 = buf->m_Put;
    }
    buf->m_Put = v24 + 4;
    CUtlBuffer::AddNullTermination(buf);
  }
}


// BasicGameStatsRecord_t::ParseFromBuffer  (line 44, @0x0000000002264f60, libserver.so)  // inlines: GetChar, GetInt, GetType<int>, GetTypeBin<char>, GetTypeBin<int>, GetTypeText<int>, LowLevelByteSwap<int>, PeekGet, StringToNumber<int>, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::CheckGet, V_strtoi64
// callers: BasicGameStats_t::ParseFromBuffer
bool __fastcall BasicGameStatsRecord_t::ParseFromBuffer(
        BasicGameStatsRecord_t *const this,
        CUtlBuffer *const buf,
        int iBufferStatsVersion)
{
  char v5; // bl
  bool v6; // al
  __int64 v7; // rdx
  int v8; // r13d
  bool v9; // al
  unsigned int v10; // esi
  __int64 v11; // rdx
  bool v12; // al
  unsigned int v13; // esi
  __int64 v14; // rdx
  bool v15; // al
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 i; // r14
  bool v19; // al
  unsigned int v20; // esi
  __int64 v21; // rdx
  bool v22; // al
  bool v23; // al
  __int64 v24; // rdx
  int v26; // esi
  int v27; // eax
  unsigned __int8 *v28; // rax
  unsigned int v29; // eax
  int v30; // r13d
  unsigned int v31; // eax
  int v32; // r13d
  unsigned int v33; // eax
  int v34; // r14d
  int v35; // eax
  int v36; // esi
  int v37; // r13d
  unsigned int v38; // eax
  int v39; // ebx
  unsigned int v40; // eax
  int v41; // edx
  int v42; // eax
  int v43; // edx
  int v44; // edx
  int v45; // eax
  int v46; // esi
  int m_Get; // esi
  int v48; // esi
  int v49; // edx
  int v50; // eax
  int v51; // r13d
  bool v52; // al
  int v53; // esi
  unsigned __int8 *v54; // rax
  unsigned __int8 *v55; // rax
  unsigned __int8 *v56; // rax
  unsigned __int8 *v57; // rax
  unsigned __int8 *v58; // rax
  unsigned __int8 *v59; // rax
  int v60; // [rsp+10h] [rbp-60h]
  unsigned int v62; // [rsp+30h] [rbp-40h] BYREF
  int nIncrement; // [rsp+34h] [rbp-3Ch] BYREF
  _QWORD v64[7]; // [rsp+38h] [rbp-38h] BYREF

  if ( (buf->m_Flags & 1) == 0 )
  {
    if ( CUtlBuffer::CheckGet(buf, 4) )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        m_Get = buf->m_Get;
        v58 = &buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
        if ( v58 == 0 )
          v58 = &v62;
        LODWORD(v64[0]) = v62;
        LOBYTE(v64[0]) = v58[3];
        BYTE1(v64[0]) = v58[2];
        BYTE2(v64[0]) = v58[1];
        BYTE3(v64[0]) = *v58;
        LODWORD(v7) = v64[0];
      }
      else
      {
        m_Get = buf->m_Get;
        LODWORD(v7) = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      }
      buf->m_Get = m_Get + 4;
      v5 = v7 <= 0x186A0;
    }
    else
    {
      v5 = 1;
      LODWORD(v7) = 0;
    }
LABEL_3:
    this->m_nCount = v7;
    if ( (buf->m_Flags & 1) != 0 )
      goto LABEL_4;
LABEL_64:
    v8 = 0;
    if ( CUtlBuffer::CheckGet(buf, 4) )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        v41 = buf->m_Get;
        v56 = &buf->m_Memory.m_pMemory[v41 - buf->m_nOffset];
        if ( v56 == 0 )
          v56 = &v62;
        LODWORD(v64[0]) = v62;
        LOBYTE(v64[0]) = v56[3];
        BYTE1(v64[0]) = v56[2];
        BYTE2(v64[0]) = v56[1];
        BYTE3(v64[0]) = *v56;
        v42 = v64[0];
      }
      else
      {
        v41 = buf->m_Get;
        v42 = *&buf->m_Memory.m_pMemory[v41 - buf->m_nOffset];
      }
      v43 = v41 + 4;
      v8 = 0;
      if ( v42 >= 0 )
        v8 = v42;
      buf->m_Get = v43;
    }
    goto LABEL_5;
  }
  nIncrement = 128;
  v5 = 1;
  v6 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
  v7 = 0;
  if ( !v6 )
    goto LABEL_3;
  LOBYTE(v7) = 10;
  v64[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
  v39 = v64[0];
  v40 = V_strtoi64(v64[0], v64, v7);
  v62 = v40;
  if ( LODWORD(v64[0]) != v39 )
    buf->m_Get += LODWORD(v64[0]) - v39;
  this->m_nCount = v40;
  v5 = v40 <= 0x186A0;
  if ( (buf->m_Flags & 1) == 0 )
    goto LABEL_64;
LABEL_4:
  nIncrement = 128;
  v8 = 0;
  if ( CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement) )
  {
    v64[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
    v34 = v64[0];
    v35 = V_strtoi64(v64[0], v64, 10);
    v62 = v35;
    if ( LODWORD(v64[0]) != v34 )
    {
      buf->m_Get += LODWORD(v64[0]) - v34;
      if ( v35 >= 0 )
        v8 = v35;
      this->m_nSeconds = v8;
      if ( (buf->m_Flags & 1) != 0 )
        goto LABEL_6;
      goto LABEL_54;
    }
    v8 = LODWORD(v64[0]) - v34;
    if ( v35 >= 0 )
      v8 = v35;
  }
LABEL_5:
  this->m_nSeconds = v8;
  if ( (buf->m_Flags & 1) != 0 )
  {
LABEL_6:
    nIncrement = 128;
    v9 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
    v10 = 0;
    v11 = 0;
    if ( v9 )
    {
      LOBYTE(v11) = 10;
      v64[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
      v37 = v64[0];
      v38 = V_strtoi64(v64[0], v64, v11);
      v62 = v38;
      if ( LODWORD(v64[0]) != v37 )
        buf->m_Get += LODWORD(v64[0]) - v37;
      v10 = v38;
      LODWORD(v11) = v38;
    }
    goto LABEL_7;
  }
LABEL_54:
  if ( !CUtlBuffer::CheckGet(buf, 4) )
  {
    this->m_nCommentary = 0;
    goto LABEL_9;
  }
  if ( (*&buf->m_Byteswap & 1) != 0 )
  {
    v36 = buf->m_Get;
    v57 = &buf->m_Memory.m_pMemory[v36 - buf->m_nOffset];
    if ( v57 == 0 )
      v57 = &v62;
    LODWORD(v64[0]) = v62;
    LOBYTE(v64[0]) = v57[3];
    BYTE1(v64[0]) = v57[2];
    BYTE2(v64[0]) = v57[1];
    BYTE3(v64[0]) = *v57;
    LODWORD(v11) = v64[0];
  }
  else
  {
    v36 = buf->m_Get;
    LODWORD(v11) = *&buf->m_Memory.m_pMemory[v36 - buf->m_nOffset];
  }
  buf->m_Get = v36 + 4;
  v10 = v11;
LABEL_7:
  this->m_nCommentary = v11;
  if ( v10 >= 0x186A1 )
    v5 = 0;
LABEL_9:
  if ( (buf->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v12 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
    v13 = 0;
    v14 = 0;
    if ( v12 )
    {
      LOBYTE(v14) = 10;
      v64[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
      v32 = v64[0];
      v33 = V_strtoi64(v64[0], v64, v14);
      v62 = v33;
      if ( LODWORD(v64[0]) != v32 )
        buf->m_Get += LODWORD(v64[0]) - v32;
      v13 = v33;
      LODWORD(v14) = v33;
    }
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(buf, 4) )
    {
      this->m_nHDR = 0;
      goto LABEL_13;
    }
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      v48 = buf->m_Get;
      v55 = &buf->m_Memory.m_pMemory[v48 - buf->m_nOffset];
      if ( v55 == 0 )
        v55 = &v62;
      LODWORD(v64[0]) = v62;
      LOBYTE(v64[0]) = v55[3];
      BYTE1(v64[0]) = v55[2];
      BYTE2(v64[0]) = v55[1];
      BYTE3(v64[0]) = *v55;
      LODWORD(v14) = v64[0];
    }
    else
    {
      v48 = buf->m_Get;
      LODWORD(v14) = *&buf->m_Memory.m_pMemory[v48 - buf->m_nOffset];
    }
    buf->m_Get = v48 + 4;
    v13 = v14;
  }
  this->m_nHDR = v14;
  if ( v13 >= 0x186A1 )
    v5 = 0;
LABEL_13:
  if ( (buf->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v15 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
    v16 = 0;
    v17 = 0;
    if ( v15 )
    {
      LOBYTE(v17) = 10;
      v64[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
      v30 = v64[0];
      v31 = V_strtoi64(v64[0], v64, v17);
      v62 = v31;
      if ( LODWORD(v64[0]) != v30 )
        buf->m_Get += LODWORD(v64[0]) - v30;
      v16 = v31;
      LODWORD(v17) = v31;
    }
LABEL_15:
    this->m_nCaptions = v17;
    if ( v16 >= 0x186A1 )
      v5 = 0;
    goto LABEL_17;
  }
  if ( CUtlBuffer::CheckGet(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      v46 = buf->m_Get;
      v54 = &buf->m_Memory.m_pMemory[v46 - buf->m_nOffset];
      if ( v54 == 0 )
        v54 = &v62;
      LODWORD(v64[0]) = v62;
      LOBYTE(v64[0]) = v54[3];
      BYTE1(v64[0]) = v54[2];
      BYTE2(v64[0]) = v54[1];
      BYTE3(v64[0]) = *v54;
      LODWORD(v17) = v64[0];
    }
    else
    {
      v46 = buf->m_Get;
      LODWORD(v17) = *&buf->m_Memory.m_pMemory[v46 - buf->m_nOffset];
    }
    buf->m_Get = v46 + 4;
    v16 = v17;
    goto LABEL_15;
  }
  this->m_nCaptions = 0;
LABEL_17:
  for ( i = 0; i != 3; ++i )
  {
    if ( (buf->m_Flags & 1) != 0 )
    {
      nIncrement = 128;
      v19 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
      v20 = 0;
      v21 = 0;
      if ( v19 )
      {
        LOBYTE(v21) = 10;
        v64[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
        v60 = v64[0];
        v29 = V_strtoi64(v64[0], v64, v21);
        v62 = v29;
        if ( LODWORD(v64[0]) != v60 )
          buf->m_Get += LODWORD(v64[0]) - v60;
        v20 = v29;
        LODWORD(v21) = v29;
      }
    }
    else
    {
      if ( !CUtlBuffer::CheckGet(buf, 4) )
      {
        this->m_nSkill[i] = 0;
        continue;
      }
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        v26 = buf->m_Get;
        v27 = v26 - buf->m_nOffset;
        LODWORD(v64[0]) = v62;
        v28 = &buf->m_Memory.m_pMemory[v27];
        if ( v28 == 0 )
          v28 = &v62;
        LOBYTE(v64[0]) = v28[3];
        BYTE1(v64[0]) = v28[2];
        BYTE2(v64[0]) = v28[1];
        BYTE3(v64[0]) = *v28;
        LODWORD(v21) = v64[0];
      }
      else
      {
        v26 = buf->m_Get;
        LODWORD(v21) = *&buf->m_Memory.m_pMemory[v26 - buf->m_nOffset];
      }
      buf->m_Get = v26 + 4;
      v20 = v21;
    }
    this->m_nSkill[i] = v21;
    if ( v20 >= 0x186A1 )
      v5 = 0;
  }
  if ( iBufferStatsVersion > 1 )
  {
    if ( CUtlBuffer::CheckGet(buf, 1) )
    {
      v44 = buf->m_Get;
      v45 = v44 + 1;
      LOBYTE(v44) = buf->m_Memory.m_pMemory[v44 - buf->m_nOffset];
      buf->m_Get = v45;
      this->m_bSteam = v44 != 0;
      if ( iBufferStatsVersion != 2 )
      {
LABEL_26:
        v22 = CUtlBuffer::CheckGet(buf, 1);
        if ( v22 )
        {
          v49 = buf->m_Get;
          v50 = v49 + 1;
          LOBYTE(v49) = buf->m_Memory.m_pMemory[v49 - buf->m_nOffset];
          buf->m_Get = v50;
          v22 = v49 != 0;
        }
        this->m_bCyberCafe = v22;
        if ( iBufferStatsVersion > 5 )
        {
          if ( (buf->m_Flags & 1) != 0 )
          {
            nIncrement = 128;
            v23 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
            v24 = 0;
            if ( v23 )
            {
              LOBYTE(v24) = 10;
              v64[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
              v51 = v64[0];
              LODWORD(v24) = V_strtoi64(v64[0], v64, v24);
              if ( LODWORD(v64[0]) != v51 )
                buf->m_Get += LODWORD(v64[0]) - v51;
            }
          }
          else
          {
            v52 = CUtlBuffer::CheckGet(buf, 4);
            LODWORD(v24) = 0;
            if ( v52 )
            {
              if ( (*&buf->m_Byteswap & 1) != 0 )
              {
                v53 = buf->m_Get;
                v59 = &buf->m_Memory.m_pMemory[v53 - buf->m_nOffset];
                if ( v59 == 0 )
                  v59 = &v62;
                LODWORD(v64[0]) = v62;
                LOBYTE(v64[0]) = v59[3];
                BYTE1(v64[0]) = v59[2];
                BYTE2(v64[0]) = v59[1];
                BYTE3(v64[0]) = *v59;
                LODWORD(v24) = v64[0];
              }
              else
              {
                v53 = buf->m_Get;
                LODWORD(v24) = *&buf->m_Memory.m_pMemory[v53 - buf->m_nOffset];
              }
              buf->m_Get = v53 + 4;
            }
          }
          this->m_nDeaths = v24;
        }
      }
    }
    else
    {
      this->m_bSteam = 0;
      if ( iBufferStatsVersion != 2 )
        goto LABEL_26;
    }
  }
  return v5;
}


// BasicGameStats_t::Clear  (line 101, @0x0000000002275ac0, libserver.so)
// calls: BasicGameStatsRecord_t::Clear, CUtlDict<BasicGameStatsRecord_t, short unsigned int>::Purge
void __fastcall BasicGameStats_t::Clear(BasicGameStats_t *const this)
{
  BasicGameStatsRecord_t *p_m_Summary; // rdi

  p_m_Summary = &this->m_Summary;
  p_m_Summary[-1].m_nDeaths = 0;
  BasicGameStatsRecord_t::Clear(p_m_Summary);
  CUtlDict<BasicGameStatsRecord_t,unsigned short>::Purge(&this->m_MapTotals);
}


// BasicGameStats_t::SaveToBuffer  (line 108, @0x0000000002275060, libserver.so)  // inlines: Element, First, FirstInorder, GetElementName, Key, LeftChild, LowLevelByteSwap<int>, LowLevelByteSwap<short int>, Next, NextInorder, PeekPut, PutChar, PutInt, PutShort, PutTabs, PutType<int>, PutType<short int>, PutTypeBin<char>, PutTypeBin<int>, PutTypeBin<short int>, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<short int>, V_memcpy, WasLastCharacterCR, memcpy, operator[]
// calls: CUtlBuffer::Printf, BasicGameStatsRecord_t::SaveToBuffer, CUtlBuffer::PutString, CUtlRBTree<CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int, CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CBaseGameStats::SaveToFileNOW
// strings: "%hd"
void __fastcall BasicGameStats_t::SaveToBuffer(BasicGameStats_t *const this, CUtlBuffer *const buf)
{
  int m_nSecondsToCompleteGame; // r12d
  int m_NumElements; // r12d
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<char const*,BasicGameStatsRecord_t,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t,short unsigned int> *m_pMemory; // r15
  unsigned __int16 m_Left; // dx
  UtlRBTreeNode_t<CUtlMap<char const*,BasicGameStatsRecord_t,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t,short unsigned int> *v9; // r15
  unsigned __int8 m_Flags; // al
  int v11; // edx
  int m_nTab; // r12d
  unsigned __int8 v13; // al
  bool m_bSteam; // r14
  int v15; // edx
  int v16; // esi
  int v17; // r12d
  unsigned __int8 v18; // al
  bool m_bCyberCafe; // r14
  int v20; // edx
  int v21; // esi
  int v22; // r12d
  int m_nDXLevel; // r12d
  int m_nOffset; // esi
  int v25; // eax
  int v26; // eax
  int m_Put; // eax
  unsigned __int8 *v28; // rdx
  unsigned __int8 *v29; // rdx
  unsigned __int8 *v30; // rdx
  int v31; // [rsp+8h] [rbp-38h]
  int v32; // [rsp+Ch] [rbp-34h]
  __int16 v33; // [rsp+Ch] [rbp-34h]
  int v34; // [rsp+Ch] [rbp-34h]

  m_nSecondsToCompleteGame = this->m_nSecondsToCompleteGame;
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%d", m_nSecondsToCompleteGame);
  }
  else if ( CUtlBuffer::CheckPut(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      m_Put = buf->m_Put;
      v28 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
      if ( v28 != 0 )
      {
        LOBYTE(v32) = HIBYTE(m_nSecondsToCompleteGame);
        BYTE1(v32) = BYTE2(m_nSecondsToCompleteGame);
        BYTE2(v32) = BYTE1(m_nSecondsToCompleteGame);
        HIBYTE(v32) = m_nSecondsToCompleteGame;
        *v28 = v32;
        m_Put = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_nSecondsToCompleteGame;
      m_Put = buf->m_Put;
    }
    buf->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(buf);
  }
  BasicGameStatsRecord_t::SaveToBuffer(&this->m_Summary, buf);
  m_NumElements = this->m_MapTotals.m_Elements.m_Tree.m_NumElements;
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%d", this->m_MapTotals.m_Elements.m_Tree.m_NumElements);
  }
  else
  {
    v31 = this->m_MapTotals.m_Elements.m_Tree.m_NumElements;
    if ( CUtlBuffer::CheckPut(buf, 4) )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        v26 = buf->m_Put;
        v30 = &buf->m_Memory.m_pMemory[v26 - buf->m_nOffset];
        if ( v30 != 0 )
        {
          LOBYTE(v34) = HIBYTE(v31);
          BYTE1(v34) = BYTE2(v31);
          BYTE2(v34) = BYTE1(v31);
          HIBYTE(v34) = v31;
          *v30 = v34;
          v26 = buf->m_Put;
        }
      }
      else
      {
        *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_NumElements;
        v26 = buf->m_Put;
      }
      buf->m_Put = v26 + 4;
      CUtlBuffer::AddNullTermination(buf);
    }
  }
  m_Root = this->m_MapTotals.m_Elements.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_MapTotals.m_Elements.m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( m_pMemory[m_Left].m_Left != 0xFFFF )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
    }
    while ( 1 )
    {
      v9 = &m_pMemory[m_Root];
      CUtlBuffer::PutString(buf, v9->m_Data.key);
      BasicGameStatsRecord_t::SaveToBuffer(&v9->m_Data.elem, buf);
      m_Root = CUtlRBTree<CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_MapTotals.m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_MapTotals.m_Elements.m_Tree.m_Elements.m_pMemory;
    }
  }
  m_Flags = buf->m_Flags;
  if ( (m_Flags & 1) != 0 )
  {
    v11 = buf->m_Put;
    m_nOffset = buf->m_nOffset;
    if ( v11 != m_nOffset && buf->m_Memory.m_pMemory[v11 - 1 - m_nOffset] == 10 )
    {
      m_nTab = 0;
      if ( (m_Flags & 0x10) != 0 )
        goto LABEL_17;
      goto LABEL_64;
    }
  }
  else
  {
    v11 = buf->m_Put;
  }
  if ( v11 == 0 )
  {
    m_nTab = 0;
    if ( (m_Flags & 0x10) == 0 )
LABEL_64:
      m_nTab = buf->m_nTab;
LABEL_17:
    while ( --m_nTab >= 0 )
    {
      while ( CUtlBuffer::CheckPut(buf, 1) )
      {
        buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 9;
        ++buf->m_Put;
        CUtlBuffer::AddNullTermination(buf);
        if ( --m_nTab < 0 )
          goto LABEL_20;
      }
    }
  }
LABEL_20:
  if ( CUtlBuffer::CheckPut(buf, 1) )
  {
    buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 0;
    ++buf->m_Put;
    CUtlBuffer::AddNullTermination(buf);
  }
  v13 = buf->m_Flags;
  m_bSteam = this->m_bSteam;
  v15 = buf->m_Put;
  if ( (v13 & 1) != 0 )
  {
    v16 = buf->m_nOffset;
    if ( v15 != v16 && buf->m_Memory.m_pMemory[v15 - 1 - v16] == 10 )
    {
      v17 = 0;
      if ( (v13 & 0x10) != 0 )
        goto LABEL_26;
      goto LABEL_65;
    }
  }
  if ( v15 == 0 )
  {
    v17 = 0;
    if ( (v13 & 0x10) == 0 )
LABEL_65:
      v17 = buf->m_nTab;
LABEL_26:
    while ( --v17 >= 0 )
    {
      while ( CUtlBuffer::CheckPut(buf, 1) )
      {
        buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 9;
        ++buf->m_Put;
        CUtlBuffer::AddNullTermination(buf);
        if ( --v17 < 0 )
          goto LABEL_29;
      }
    }
  }
LABEL_29:
  if ( CUtlBuffer::CheckPut(buf, 1) )
  {
    buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_bSteam;
    ++buf->m_Put;
    CUtlBuffer::AddNullTermination(buf);
  }
  v18 = buf->m_Flags;
  m_bCyberCafe = this->m_bCyberCafe;
  v20 = buf->m_Put;
  if ( (v18 & 1) != 0 )
  {
    v21 = buf->m_nOffset;
    if ( v20 != v21 && buf->m_Memory.m_pMemory[v20 - 1 - v21] == 10 )
    {
      v22 = 0;
      if ( (v18 & 0x10) != 0 )
        goto LABEL_35;
      goto LABEL_66;
    }
  }
  if ( v20 == 0 )
  {
    v22 = 0;
    if ( (v18 & 0x10) == 0 )
LABEL_66:
      v22 = buf->m_nTab;
LABEL_35:
    while ( --v22 >= 0 )
    {
      while ( CUtlBuffer::CheckPut(buf, 1) )
      {
        buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 9;
        ++buf->m_Put;
        CUtlBuffer::AddNullTermination(buf);
        if ( --v22 < 0 )
          goto LABEL_38;
      }
    }
  }
LABEL_38:
  if ( CUtlBuffer::CheckPut(buf, 1) )
  {
    buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_bCyberCafe;
    ++buf->m_Put;
    CUtlBuffer::AddNullTermination(buf);
    m_nDXLevel = this->m_nDXLevel;
    if ( (buf->m_Flags & 1) != 0 )
      goto LABEL_40;
  }
  else
  {
    m_nDXLevel = this->m_nDXLevel;
    if ( (buf->m_Flags & 1) != 0 )
    {
LABEL_40:
      CUtlBuffer::Printf(buf, "%hd", m_nDXLevel);
      return;
    }
  }
  if ( CUtlBuffer::CheckPut(buf, 2) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      v25 = buf->m_Put;
      v29 = &buf->m_Memory.m_pMemory[v25 - buf->m_nOffset];
      if ( v29 != 0 )
      {
        LOBYTE(v33) = BYTE1(m_nDXLevel);
        HIBYTE(v33) = m_nDXLevel;
        *v29 = v33;
        v25 = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_nDXLevel;
      v25 = buf->m_Put;
    }
    buf->m_Put = v25 + 2;
    CUtlBuffer::AddNullTermination(buf);
  }
}


// BasicGameStats_t::FindOrAddRecordForMap  (line 131, @0x0000000002278c40, libserver.so)  // inlines: BasicGameStatsRecord_t, Element, Find, LeftChild, Node_t, RightChild, V_memset, memset, operator(), operator[]
// calls: CUtlDict<BasicGameStatsRecord_t, short unsigned int>::Insert
// callers: CBaseGameStats::Event_LevelShutdown, CBaseGameStats::Event_PlayerKilled, CBaseGameStats::Event_Commentary, CBaseGameStats::SetSteamStatistic, CBaseGameStats::SetCyberCafeStatistic, CBaseGameStats::SetHDRStatistic, CBaseGameStats::SetCaptionsStatistic, CBaseGameStats::SetSkillStatistic, BasicGameStats_t::ParseFromBuffer
BasicGameStatsRecord_t *__fastcall BasicGameStats_t::FindOrAddRecordForMap(
        BasicGameStats_t *const this,
        const char *mapname)
{
  unsigned __int16 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<char const*,BasicGameStatsRecord_t,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  const char *v9; // [rsp+0h] [rbp-60h] BYREF
  int v10; // [rsp+8h] [rbp-58h]
  int v11; // [rsp+Ch] [rbp-54h]
  int v12; // [rsp+10h] [rbp-50h]
  int v13; // [rsp+14h] [rbp-4Ch]
  int v14; // [rsp+18h] [rbp-48h]
  __int64 v15; // [rsp+1Ch] [rbp-44h]
  int v16; // [rsp+24h] [rbp-3Ch]
  char v17; // [rsp+28h] [rbp-38h]
  char v18; // [rsp+29h] [rbp-37h]
  int v19; // [rsp+2Ch] [rbp-34h]

  if ( mapname == 0 )
    goto LABEL_8;
  m_Root = this->m_MapTotals.m_Elements.m_Tree.m_Root;
  v17 = 1;
  v18 = 0;
  v19 = 0;
  v15 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v16 = 0;
  v9 = mapname;
  if ( m_Root == 0xFFFF )
    goto LABEL_8;
  m_pMemory = this->m_MapTotals.m_Elements.m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = m_Root;
      if ( !this->m_MapTotals.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&v9, &m_pMemory[v6].m_Data) )
        break;
      m_pMemory = this->m_MapTotals.m_Elements.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[m_Root].m_Left;
      if ( m_Root == 0xFFFF )
        goto LABEL_8;
    }
    if ( !this->m_MapTotals.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &this->m_MapTotals.m_Elements.m_Tree.m_Elements.m_pMemory[v6].m_Data,
            &v9) )
      break;
    m_pMemory = this->m_MapTotals.m_Elements.m_Tree.m_Elements.m_pMemory;
    m_Root = m_pMemory[v6].m_Right;
    if ( m_Root == 0xFFFF )
      goto LABEL_8;
  }
  v7 = m_Root;
  if ( m_Root == 0xFFFF )
LABEL_8:
    v7 = CUtlDict<BasicGameStatsRecord_t,unsigned short>::Insert(&this->m_MapTotals, mapname);
  return &this->m_MapTotals.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Data.elem;
}


// BasicGameStats_t::ParseFromBuffer  (line 142, @0x0000000002279140, libserver.so)  // inlines: GetChar, GetInt, GetShort, GetType<int>, GetType<short int>, GetTypeBin<char>, GetTypeBin<int>, GetTypeBin<short int>, GetTypeText<int>, GetTypeText<short int>, LowLevelByteSwap<int>, LowLevelByteSwap<short int>, PeekGet, StringToNumber<int>, StringToNumber<short int>, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<short int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, BasicGameStatsRecord_t::ParseFromBuffer, CUtlBuffer::CheckGet, V_strtoi64, CUtlBuffer::GetString, BasicGameStats_t::FindOrAddRecordForMap, __stack_chk_fail
// callers: CBaseGameStats::LoadFromFile
bool __fastcall BasicGameStats_t::ParseFromBuffer(
        BasicGameStats_t *const this,
        CUtlBuffer *const buf,
        int iBufferStatsVersion)
{
  char v5; // r12
  bool v6; // al
  __int64 v7; // rdx
  bool v8; // al
  bool v9; // al
  unsigned __int8 *v10; // rdx
  int v12; // r13d
  unsigned int v13; // eax
  unsigned int v14; // edx
  int i; // r15d
  BasicGameStatsRecord_t *v16; // rax
  int v17; // r12d
  unsigned int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // edx
  int m_Get; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // r13d
  __int16 v26; // ax
  bool v27; // al
  int v28; // eax
  unsigned __int8 *v29; // rax
  unsigned __int8 *v30; // rax
  int c; // [rsp+8h] [rbp-158h]
  unsigned int v33; // [rsp+10h] [rbp-150h] BYREF
  int nIncrement; // [rsp+14h] [rbp-14Ch] BYREF
  unsigned __int8 *v35; // [rsp+18h] [rbp-148h] BYREF
  char mapname[264]; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v37; // [rsp+128h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  if ( (buf->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v5 = 1;
    v6 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
    v7 = 0;
    if ( v6 )
    {
      LOBYTE(v7) = 10;
      v35 = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
      v17 = v35;
      v18 = V_strtoi64(v35, &v35, v7);
      v33 = v18;
      if ( v35 != v17 )
        buf->m_Get += v35 - v17;
      LODWORD(v7) = v18;
      v5 = v18 <= 0x989680;
    }
  }
  else if ( CUtlBuffer::CheckGet(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      m_Get = buf->m_Get;
      v29 = &buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      if ( v29 == 0 )
        v29 = &v33;
      LODWORD(v35) = v33;
      LOBYTE(v35) = v29[3];
      BYTE1(v35) = v29[2];
      BYTE2(v35) = v29[1];
      BYTE3(v35) = *v29;
      LODWORD(v7) = v35;
    }
    else
    {
      m_Get = buf->m_Get;
      LODWORD(v7) = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
    }
    buf->m_Get = m_Get + 4;
    v5 = v7 <= 0x989680;
  }
  else
  {
    v5 = 1;
    LODWORD(v7) = 0;
  }
  this->m_nSecondsToCompleteGame = v7;
  BasicGameStatsRecord_t::ParseFromBuffer(&this->m_Summary, buf, iBufferStatsVersion);
  if ( (buf->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement) )
      goto LABEL_5;
    v35 = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
    v12 = v35;
    v13 = V_strtoi64(v35, &v35, 10);
    v33 = v13;
    if ( v35 != v12 )
      buf->m_Get += v35 - v12;
    v14 = v13;
    c = v13;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(buf, 4) )
      goto LABEL_5;
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      v21 = buf->m_Get;
      v30 = &buf->m_Memory.m_pMemory[v21 - buf->m_nOffset];
      if ( v30 == 0 )
        v30 = &v33;
      LODWORD(v35) = v33;
      LOBYTE(v35) = v30[3];
      BYTE1(v35) = v30[2];
      BYTE2(v35) = v30[1];
      BYTE3(v35) = *v30;
      c = v35;
    }
    else
    {
      v21 = buf->m_Get;
      c = *&buf->m_Memory.m_pMemory[v21 - buf->m_nOffset];
    }
    buf->m_Get = v21 + 4;
    v14 = c;
  }
  if ( v14 >= 0x401 )
    v5 = 0;
  if ( c > 0 )
  {
    for ( i = 0; i != c; ++i )
    {
      CUtlBuffer::GetString(buf, mapname, 256);
      v16 = BasicGameStats_t::FindOrAddRecordForMap(this, mapname);
      if ( !BasicGameStatsRecord_t::ParseFromBuffer(v16, buf, iBufferStatsVersion) )
        v5 = 0;
    }
  }
LABEL_5:
  if ( iBufferStatsVersion > 1 )
  {
    if ( CUtlBuffer::CheckGet(buf, 1) )
      ++buf->m_Get;
    if ( CUtlBuffer::CheckGet(buf, 1) )
    {
      v19 = buf->m_Get;
      v20 = v19 + 1;
      LOBYTE(v19) = buf->m_Memory.m_pMemory[v19 - buf->m_nOffset];
      buf->m_Get = v20;
      this->m_bSteam = v19 != 0;
      if ( iBufferStatsVersion == 2 )
        return v5;
    }
    else
    {
      this->m_bSteam = 0;
      if ( iBufferStatsVersion == 2 )
        return v5;
    }
    v8 = CUtlBuffer::CheckGet(buf, 1);
    if ( v8 )
    {
      v23 = buf->m_Get;
      v24 = v23 + 1;
      LOBYTE(v23) = buf->m_Memory.m_pMemory[v23 - buf->m_nOffset];
      buf->m_Get = v24;
      v8 = v23 != 0;
    }
    this->m_bCyberCafe = v8;
    if ( iBufferStatsVersion != 3 )
    {
      if ( (buf->m_Flags & 1) != 0 )
      {
        nIncrement = 128;
        v9 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
        v10 = 0;
        if ( v9 )
        {
          LOBYTE(v10) = 10;
          v35 = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
          v25 = v35;
          v26 = V_strtoi64(v35, &v35, v10);
          LOWORD(v33) = v26;
          if ( v35 != v25 )
            buf->m_Get += v35 - v25;
          LODWORD(v10) = v26;
        }
      }
      else
      {
        v27 = CUtlBuffer::CheckGet(buf, 2);
        LODWORD(v10) = 0;
        if ( v27 )
        {
          if ( (*&buf->m_Byteswap & 1) != 0 )
          {
            v28 = buf->m_Get;
            v10 = &buf->m_Memory.m_pMemory[v28 - buf->m_nOffset];
            if ( v10 == 0 )
              v10 = &v33;
            LOWORD(v35) = v33;
            LOBYTE(v35) = v10[1];
            BYTE1(v35) = *v10;
            LODWORD(v10) = v35;
          }
          else
          {
            v28 = buf->m_Get;
            LODWORD(v10) = *&buf->m_Memory.m_pMemory[v28 - buf->m_nOffset];
          }
          buf->m_Get = v28 + 2;
        }
      }
      this->m_nDXLevel = v10;
    }
  }
  return v5;
}


