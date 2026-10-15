
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlBuffer::GetType<int>  (line 884, @0x000000000227e720, libserver.so)  // inlines: GetTypeBin<int>, GetTypeText<int>, LowLevelByteSwap<int>, PeekGet, StringToNumber<int>, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, V_strtoi64, CUtlBuffer::CheckGet
// callers: CBaseGameStats::LoadFromFile, CChoreoEvent::RestoreFlexAnimationsFromBuffer, CChoreoEvent::RestoreFromBuffer, CEntityKeyValues::UnserializeKeys, CNavGenParams::Load, CNavArea::LoadCore
void __fastcall CUtlBuffer::GetType<int>(CUtlBuffer *const this, int *const dest)
{
  int v4; // r13d
  int m_Get; // edx
  int *v6; // rax
  int nIncrement; // [rsp+4h] [rbp-2Ch] BYREF
  unsigned __int8 *v8; // [rsp+8h] [rbp-28h] BYREF

  if ( (this->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &nIncrement) )
    {
LABEL_3:
      *dest = 0;
      return;
    }
    v8 = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
    v4 = v8;
    *dest = V_strtoi64(v8, &v8, 10);
    if ( v8 != v4 )
      this->m_Get += v8 - v4;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(this, 4) )
      goto LABEL_3;
    if ( (*&this->m_Byteswap & 1) != 0 )
    {
      m_Get = this->m_Get;
      v6 = &this->m_Memory.m_pMemory[m_Get - this->m_nOffset];
      if ( dest != 0 )
      {
        if ( v6 == 0 )
          v6 = dest;
        LODWORD(v8) = *dest;
        LOBYTE(v8) = *(v6 + 3);
        BYTE1(v8) = *(v6 + 2);
        BYTE2(v8) = *(v6 + 1);
        BYTE3(v8) = *v6;
        *dest = v8;
        m_Get = this->m_Get;
      }
    }
    else
    {
      *dest = *&this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
      m_Get = this->m_Get;
    }
    this->m_Get = m_Get + 4;
  }
}


// CUtlBuffer::GetType<short unsigned int>  (line 884, @0x000000000307f2c0, libserver.so)  // inlines: GetTypeBin<short unsigned int>, GetTypeText<short unsigned int>, LowLevelByteSwap<short unsigned int>, PeekGet, StringToNumber<short unsigned int>, SwapBufferToTargetEndian<short unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, V_strtoui64, CUtlBuffer::CheckGet
// callers: CChoreoEvent::RestoreFlexAnimationsFromBuffer, CNavArea::LoadCore
void __fastcall CUtlBuffer::GetType<unsigned short>(CUtlBuffer *const this, unsigned __int16 *const dest)
{
  int v4; // r13d
  int m_Get; // edx
  unsigned __int16 *v6; // rax
  int nIncrement; // [rsp+4h] [rbp-2Ch] BYREF
  unsigned __int8 *v8; // [rsp+8h] [rbp-28h] BYREF

  if ( (this->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &nIncrement) )
    {
LABEL_3:
      *dest = 0;
      return;
    }
    v8 = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
    v4 = v8;
    *dest = V_strtoui64(v8, &v8, 10);
    if ( v8 != v4 )
      this->m_Get += v8 - v4;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(this, 2) )
      goto LABEL_3;
    if ( (*&this->m_Byteswap & 1) != 0 )
    {
      m_Get = this->m_Get;
      v6 = &this->m_Memory.m_pMemory[m_Get - this->m_nOffset];
      if ( dest != 0 )
      {
        if ( v6 == 0 )
          v6 = dest;
        LOWORD(v8) = *dest;
        LOBYTE(v8) = *(v6 + 1);
        BYTE1(v8) = *v6;
        *dest = v8;
        m_Get = this->m_Get;
      }
    }
    else
    {
      *dest = *&this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
      m_Get = this->m_Get;
    }
    this->m_Get = m_Get + 2;
  }
}


// CUtlBuffer::GetType<float>  (line 884, @0x000000000307f3d0, libserver.so)  // inlines: GetTypeBin<float>, GetTypeText<float>, LowLevelByteSwap<float>, PeekGet, StringToNumber<float>, SwapBufferToTargetEndian<float>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, V_strtod, CUtlBuffer::CheckGet
// callers: CChoreoEvent::RestoreFlexAnimationsFromBuffer, CChoreoEvent::RestoreFromBuffer, CEntityKeyValues::UnserializeKeys, CGlViewBuffer::ConvertToPrimitiveList, CNavGenParams::Load, ReadLegacyEarliestOccupyTimeData, CNavArea::LoadCore, CNavLadder::Load
void __fastcall CUtlBuffer::GetType<float>(CUtlBuffer *const this, float *const dest)
{
  int v4; // r13d
  __m128d v5; // xmm0
  int v6; // eax
  int v7; // eax
  int nIncrement; // [rsp+4h] [rbp-2Ch] BYREF
  unsigned __int8 *v9; // [rsp+8h] [rbp-28h] BYREF

  if ( (this->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &nIncrement) )
    {
LABEL_3:
      *dest = 0.0;
      return;
    }
    v9 = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
    v4 = v9;
    v5.m128d_f64[0] = V_strtod(v9, &v9);
    v6 = v9;
    *dest = _mm_movedup_pd(v5).m128d_f64[0];
    v7 = v6 - v4;
    if ( v7 != 0 )
      this->m_Get += v7;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(this, 4) )
      goto LABEL_3;
    *dest = *&this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
    if ( (*&this->m_Byteswap & 1) != 0 )
    {
      LOBYTE(v9) = *(dest + 3);
      BYTE1(v9) = *(dest + 2);
      BYTE2(v9) = *(dest + 1);
      BYTE3(v9) = *dest;
      *dest = v9;
    }
    this->m_Get += 4;
  }
}


// CUtlBuffer::GetType<unsigned int>  (line 884, @0x00000000030a99d0, libserver.so)  // inlines: GetTypeBin<unsigned int>, GetTypeText<unsigned int>, LowLevelByteSwap<unsigned int>, PeekGet, StringToNumber<unsigned int>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, V_strtoui64, CUtlBuffer::CheckGet
// callers: CEntityKeyValues::UnserializeKeys, CNavGenParams::Load, CNavMesh::LoadNavMesh, ReadLegacySpotEncounterData, CNavArea::LoadCore
void __fastcall CUtlBuffer::GetType<unsigned int>(CUtlBuffer *const this, unsigned int *const dest)
{
  int v4; // r13d
  int m_Get; // edx
  unsigned int *v6; // rax
  int nIncrement; // [rsp+4h] [rbp-2Ch] BYREF
  unsigned __int8 *v8; // [rsp+8h] [rbp-28h] BYREF

  if ( (this->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &nIncrement) )
    {
LABEL_3:
      *dest = 0;
      return;
    }
    v8 = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
    v4 = v8;
    *dest = V_strtoui64(v8, &v8, 10);
    if ( v8 != v4 )
      this->m_Get += v8 - v4;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(this, 4) )
      goto LABEL_3;
    if ( (*&this->m_Byteswap & 1) != 0 )
    {
      m_Get = this->m_Get;
      v6 = &this->m_Memory.m_pMemory[m_Get - this->m_nOffset];
      if ( dest != 0 )
      {
        if ( v6 == 0 )
          v6 = dest;
        LODWORD(v8) = *dest;
        LOBYTE(v8) = *(v6 + 3);
        BYTE1(v8) = *(v6 + 2);
        BYTE2(v8) = *(v6 + 1);
        BYTE3(v8) = *v6;
        *dest = v8;
        m_Get = this->m_Get;
      }
    }
    else
    {
      *dest = *&this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
      m_Get = this->m_Get;
    }
    this->m_Get = m_Get + 4;
  }
}


// CUtlBuffer::GetType<long long unsigned int>  (line 884, @0x00000000031ed500, libserver.so)  // inlines: GetTypeBin<long long unsigned int>, GetTypeText<long long unsigned int>, LowLevelByteSwap<long long unsigned int>, PeekGet, StringToNumber<long long unsigned int>, SwapBufferToTargetEndian<long long unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, V_strtoui64, CUtlBuffer::CheckGet
// callers: CNavArea::LoadCore
void __fastcall CUtlBuffer::GetType<unsigned long long>(CUtlBuffer *const this, unsigned __int64 *const dest)
{
  int v4; // r13d
  int m_Get; // eax
  unsigned __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 i; // rax
  char v9; // di
  _BYTE *v10; // rsi
  int nIncrement; // [rsp+4h] [rbp-2Ch] BYREF
  _QWORD v12[5]; // [rsp+8h] [rbp-28h] BYREF

  if ( (this->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &nIncrement) )
    {
LABEL_3:
      *dest = 0;
      return;
    }
    v12[0] = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
    v4 = v12[0];
    *dest = V_strtoui64(v12[0], v12, 10);
    if ( LODWORD(v12[0]) != v4 )
      this->m_Get += LODWORD(v12[0]) - v4;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(this, 8) )
      goto LABEL_3;
    if ( (*&this->m_Byteswap & 1) != 0 )
    {
      m_Get = this->m_Get;
      v6 = &this->m_Memory.m_pMemory[m_Get - this->m_nOffset];
      if ( dest != 0 )
      {
        if ( v6 == 0 )
          v6 = dest;
        v7 = 0;
        v12[0] = *dest;
        for ( i = 8; i != 0; --i )
        {
          v9 = *(v6 + i - 1);
          v10 = v12 + v7;
          v7 = 9 - i;
          *v10 = v9;
        }
        *dest = v12[0];
        m_Get = this->m_Get;
      }
    }
    else
    {
      *dest = *&this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
      m_Get = this->m_Get;
    }
    this->m_Get = m_Get + 8;
  }
}


// CUtlBuffer::GetUnsignedChar  (line 904, @0x000000000307f050, libserver.so)  // inlines: GetType<short unsigned int>, GetTypeBin<unsigned char>, GetTypeText<short unsigned int>, GetUnsignedShort, PeekGet, StringToNumber<short unsigned int>, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::CheckGet, V_strtoui64
// callers: CChoreoEvent::RestoreFlexAnimationsFromBuffer, CChoreoEvent::RestoreFromBuffer, CChoreoScene::RestoreFromBinaryBuffer, ReadAndDiscardOldApproachAreaData, CNavMesh::LoadNavMesh, ReadLegacyHidingSpotData, CNavArea::LoadCore
unsigned __int8 __fastcall CUtlBuffer::GetUnsignedChar(CUtlBuffer *const this)
{
  unsigned __int8 result; // al
  int m_Get; // edx
  int v4; // eax
  int v5; // r12d
  int nIncrement; // [rsp+4h] [rbp-1Ch] BYREF
  unsigned __int8 *v7; // [rsp+8h] [rbp-18h] BYREF

  if ( (this->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &nIncrement) )
      return 0;
    v7 = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
    v5 = v7;
    result = V_strtoui64(v7, &v7, 10);
    if ( v7 != v5 )
      this->m_Get += v7 - v5;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(this, 1) )
      return 0;
    m_Get = this->m_Get;
    v4 = m_Get + 1;
    LOBYTE(m_Get) = this->m_Memory.m_pMemory[m_Get - this->m_nOffset];
    this->m_Get = v4;
    return m_Get;
  }
  return result;
}


// CUtlBuffer::PutType<int>  (line 1217, @0x000000000307f4d0, libserver.so)  // inlines: LowLevelByteSwap<int>, PeekPut, PutTypeBin<int>, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::Printf, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CChoreoEvent::SaveToBuffer, CEntityKeyValues::SerializeKeys
void __fastcall CUtlBuffer::PutType<int>(CUtlBuffer *const this, int src)
{
  int m_Put; // eax
  unsigned __int8 *v5; // rdx
  int v7; // [rsp+Ch] [rbp-14h]

  if ( (this->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(this, "%d", src);
  }
  else if ( CUtlBuffer::CheckPut(this, 4) )
  {
    if ( (*&this->m_Byteswap & 1) != 0 )
    {
      m_Put = this->m_Put;
      v5 = &this->m_Memory.m_pMemory[m_Put - this->m_nOffset];
      if ( v5 != 0 )
      {
        LOBYTE(v7) = HIBYTE(src);
        BYTE1(v7) = BYTE2(src);
        BYTE2(v7) = BYTE1(src);
        HIBYTE(v7) = src;
        *v5 = v7;
        m_Put = this->m_Put;
      }
    }
    else
    {
      *&this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = src;
      m_Put = this->m_Put;
    }
    this->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(this);
  }
}


// CUtlBuffer::PutType<float>  (line 1217, @0x000000000307f590, libserver.so)  // inlines: LowLevelByteSwap<float>, PeekPut, PutTypeBin<float>, SwapBufferToTargetEndian<float>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::Printf, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CChoreoEvent::SaveToBuffer, CEntityKeyValues::SerializeKeys, CNavGenParams::Save
void __fastcall CUtlBuffer::PutType<float>(CUtlBuffer *const this, float a2, float src)
{
  int m_Put; // eax
  unsigned __int8 *v5; // rdx
  int v8; // [rsp+1Ch] [rbp-14h]

  if ( (this->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(this, "%f", a2);
  }
  else if ( CUtlBuffer::CheckPut(this, 4) )
  {
    if ( (*&this->m_Byteswap & 1) != 0 )
    {
      m_Put = this->m_Put;
      v5 = &this->m_Memory.m_pMemory[m_Put - this->m_nOffset];
      if ( v5 != 0 )
      {
        LOBYTE(v8) = HIBYTE(a2);
        BYTE1(v8) = BYTE2(a2);
        BYTE2(v8) = BYTE1(a2);
        HIBYTE(v8) = LOBYTE(a2);
        *v5 = v8;
        m_Put = this->m_Put;
      }
    }
    else
    {
      *&this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = a2;
      m_Put = this->m_Put;
    }
    this->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(this);
  }
}


// CUtlBuffer::PutType<unsigned int>  (line 1217, @0x00000000031ed630, libserver.so)  // inlines: LowLevelByteSwap<unsigned int>, PeekPut, PutTypeBin<unsigned int>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::Printf, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CNavArea::Save, CNavGenParams::Save, CNavMesh::SaveNavMeshToBuffer
void __fastcall CUtlBuffer::PutType<unsigned int>(CUtlBuffer *const this, unsigned int src)
{
  int m_Put; // eax
  unsigned __int8 *v5; // rdx
  int v7; // [rsp+Ch] [rbp-14h]

  if ( (this->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(this, "%u", src);
  }
  else if ( CUtlBuffer::CheckPut(this, 4) )
  {
    if ( (*&this->m_Byteswap & 1) != 0 )
    {
      m_Put = this->m_Put;
      v5 = &this->m_Memory.m_pMemory[m_Put - this->m_nOffset];
      if ( v5 != 0 )
      {
        LOBYTE(v7) = HIBYTE(src);
        BYTE1(v7) = BYTE2(src);
        BYTE2(v7) = BYTE1(src);
        HIBYTE(v7) = src;
        *v5 = v7;
        m_Put = this->m_Put;
      }
    }
    else
    {
      *&this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = src;
      m_Put = this->m_Put;
    }
    this->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(this);
  }
}


// CUtlBuffer::PutChar  (line 1282, @0x000000000307f110, libserver.so)  // inlines: PeekPut, PutTabs, PutTypeBin<char>, WasLastCharacterCR, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CChoreoEvent::SaveToBuffer, Serialize<VecDouble3>, Serialize<NavGenAreaDebug_t>, Serialize<NavGenDebugStage_t>
void __fastcall CUtlBuffer::PutChar(CUtlBuffer *const this, char c)
{
  unsigned __int8 m_Flags; // al
  int m_Put; // edx
  int m_nOffset; // esi
  int m_nTab; // r12d

  m_Flags = this->m_Flags;
  m_Put = this->m_Put;
  if ( (m_Flags & 1) != 0 )
  {
    m_nOffset = this->m_nOffset;
    if ( m_Put != m_nOffset && this->m_Memory.m_pMemory[m_Put - 1 - m_nOffset] == 10 )
    {
      m_nTab = 0;
      if ( (m_Flags & 0x10) != 0 )
        goto LABEL_5;
      goto LABEL_14;
    }
  }
  if ( m_Put == 0 )
  {
    m_nTab = 0;
    if ( (m_Flags & 0x10) == 0 )
LABEL_14:
      m_nTab = this->m_nTab;
LABEL_5:
    while ( --m_nTab >= 0 )
    {
      while ( CUtlBuffer::CheckPut(this, 1) )
      {
        this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = 9;
        ++this->m_Put;
        CUtlBuffer::AddNullTermination(this);
        if ( --m_nTab < 0 )
          goto LABEL_8;
      }
    }
  }
LABEL_8:
  if ( CUtlBuffer::CheckPut(this, 1) )
  {
    this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = c;
    ++this->m_Put;
    CUtlBuffer::AddNullTermination(this);
  }
}


// CUtlBuffer::PutUnsignedChar  (line 1292, @0x000000000307f200, libserver.so)  // inlines: PeekPut, PutType<short unsigned int>, PutTypeBin<unsigned char>, PutUnsignedShort, operator[]
// calls: CUtlBuffer::Printf, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CChoreoEvent::SaveFlexAnimationsToBuffer, CChoreoEvent::SaveToBuffer, CNavArea::Save
// strings: "%hu"
void __fastcall CUtlBuffer::PutUnsignedChar(CUtlBuffer *const this, unsigned __int8 c)
{
  if ( (this->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(this, "%hu", c);
  }
  else if ( CUtlBuffer::CheckPut(this, 1) )
  {
    this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = c;
    ++this->m_Put;
    CUtlBuffer::AddNullTermination(this);
  }
}


