
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_utlbufferutil.cpp  (line 0, @0x0000000001a6eba0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_utlbufferutil_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// SetSerializationDelimiter  (line 38, @0x000000000325f660, libserver.so)
// globals: s_pConv
void __fastcall SetSerializationDelimiter(CUtlCharConversion *pConv)
{
  s_pConv = pConv;
}


// SetSerializationArrayDelimiter  (line 43, @0x000000000325f670, libserver.so)
// globals: s_pUtlBufferUtilArrayDelim
void __fastcall SetSerializationArrayDelimiter(const char *pDelimiter)
{
  s_pUtlBufferUtilArrayDelim = pDelimiter;
}


// SerializeFloat  (line 52, @0x000000000325f460, libserver.so)
// calls: V_snprintf, CUtlBuffer::PutString, __stack_chk_fail
// callers: SerializeFloats, Serialize
// strings: "%.10f"
void __fastcall SerializeFloat(CUtlBuffer *const buf, float a2, float f)
{
  int v4; // eax
  char v5; // cl
  char pTemp[264]; // [rsp+0h] [rbp-120h] BYREF
  unsigned __int64 v7; // [rsp+108h] [rbp-18h]

  v7 = __readfsqword(0x28u);
  v4 = V_snprintf(pTemp, 256, "%.10f", a2);
  if ( v4 > 0 )
  {
    while ( 1 )
    {
      v5 = pTemp[--v4];
      if ( v5 != 48 )
        break;
      pTemp[v4] = 0;
      if ( v4 == 0 )
        goto LABEL_7;
    }
    if ( v5 == 46 )
      pTemp[v4] = 0;
  }
LABEL_7:
  CUtlBuffer::PutString(buf, pTemp);
}


// SerializeFloats  (line 72, @0x000000000325f510, libserver.so)  // inlines: PeekPut, PutChar, PutTabs, PutTypeBin<char>, WasLastCharacterCR, operator[]
// calls: SerializeFloat, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: Serialize
void __fastcall SerializeFloats(CUtlBuffer *const buf, int nCount, const float *pFloats)
{
  float v3; // xmm1_4
  int v7; // r12d
  unsigned __int8 m_Flags; // al
  int m_Put; // edx
  int m_nOffset; // edi
  int m_nTab; // ebx
  int v12; // [rsp+Ch] [rbp-34h]

  if ( nCount > 0 )
  {
    v12 = nCount - 1;
    v7 = 0;
    do
    {
      while ( 1 )
      {
        SerializeFloat(buf, *pFloats, v3);
        if ( v12 != v7 )
        {
          m_Flags = buf->m_Flags;
          m_Put = buf->m_Put;
          if ( (m_Flags & 1) != 0
            && (m_nOffset = buf->m_nOffset, m_Put != m_nOffset)
            && buf->m_Memory.m_pMemory[m_Put - 1 - m_nOffset] == 10
            || m_Put == 0 )
          {
            m_nTab = 0;
            if ( (m_Flags & 0x10) == 0 )
              m_nTab = buf->m_nTab;
            while ( --m_nTab >= 0 )
            {
              while ( CUtlBuffer::CheckPut(buf, 1) )
              {
                buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 9;
                ++buf->m_Put;
                CUtlBuffer::AddNullTermination(buf);
                if ( --m_nTab < 0 )
                  goto LABEL_12;
              }
            }
          }
LABEL_12:
          if ( CUtlBuffer::CheckPut(buf, 1) )
            break;
        }
        ++v7;
        ++pFloats;
        if ( v7 == nCount )
          return;
      }
      ++v7;
      ++pFloats;
      buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 32;
      ++buf->m_Put;
      CUtlBuffer::AddNullTermination(buf);
    }
    while ( v7 != nCount );
  }
}


// Serialize  (line 88, @0x000000000325f680, libserver.so)  // inlines: IsValid, PeekPut, PutChar, PutTabs, PutTypeBin<char>, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CUtlBuffer::Printf
bool __fastcall Serialize(CUtlBuffer *const buf, const bool *const src)
{
  unsigned __int8 m_Flags; // al
  bool v4; // r13
  int m_nTab; // r12d

  m_Flags = buf->m_Flags;
  if ( (m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%d", *src);
  }
  else
  {
    v4 = *src;
    if ( buf->m_Put == 0 )
    {
      m_nTab = 0;
      if ( (m_Flags & 0x10) == 0 )
        m_nTab = buf->m_nTab;
      while ( --m_nTab >= 0 )
      {
        while ( CUtlBuffer::CheckPut(buf, 1) )
        {
          buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 9;
          ++buf->m_Put;
          CUtlBuffer::AddNullTermination(buf);
          if ( --m_nTab < 0 )
            goto LABEL_8;
        }
      }
    }
LABEL_8:
    if ( CUtlBuffer::CheckPut(buf, 1) )
    {
      buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v4;
      ++buf->m_Put;
      CUtlBuffer::AddNullTermination(buf);
    }
  }
  return buf->m_Error == 0;
}


// Unserialize  (line 101, @0x000000000325f750, libserver.so)  // inlines: GetChar, GetTypeBin<char>, IsValid, PeekGet, operator[]
// calls: CUtlBuffer::Scanf, CUtlBuffer::CheckGet
bool __fastcall Unserialize(CUtlBuffer *const buf, bool *const dest)
{
  int v4; // eax
  bool v5; // dl
  int m_Get; // edx
  int v8; // eax
  int nValue; // [rsp+Ch] [rbp-14h] BYREF

  if ( (buf->m_Flags & 1) != 0 )
  {
    nValue = 0;
    v4 = CUtlBuffer::Scanf(buf, "%d", &nValue);
    *dest = nValue != 0;
    v5 = 0;
    if ( v4 == 1 )
      return buf->m_Error == 0;
    return v5;
  }
  else
  {
    if ( CUtlBuffer::CheckGet(buf, 1) )
    {
      m_Get = buf->m_Get;
      v8 = m_Get + 1;
      LOBYTE(m_Get) = buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      buf->m_Get = v8;
      *dest = m_Get != 0;
    }
    else
    {
      *dest = 0;
    }
    return buf->m_Error == 0;
  }
}


// Serialize  (line 116, @0x000000000325f810, libserver.so)  // inlines: IsValid, LowLevelByteSwap<int>, PeekPut, PutInt, PutType<int>, PutTypeBin<int>, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CUtlBuffer::Printf
bool __fastcall Serialize(CUtlBuffer *const buf, const int *const src)
{
  int v3; // r12d
  int m_Put; // eax
  unsigned __int8 *v6; // rdx
  int v7; // [rsp+8h] [rbp-18h]
  int v8; // [rsp+Ch] [rbp-14h]

  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%d", *src);
    return buf->m_Error == 0;
  }
  else
  {
    v3 = *src;
    v7 = *src;
    if ( CUtlBuffer::CheckPut(buf, 4) )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        m_Put = buf->m_Put;
        v6 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
        if ( v6 != 0 )
        {
          LOBYTE(v8) = HIBYTE(v7);
          BYTE1(v8) = BYTE2(v7);
          BYTE2(v8) = BYTE1(v7);
          HIBYTE(v8) = v7;
          *v6 = v8;
          m_Put = buf->m_Put;
        }
      }
      else
      {
        *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v3;
        m_Put = buf->m_Put;
      }
      buf->m_Put = m_Put + 4;
      CUtlBuffer::AddNullTermination(buf);
    }
    return buf->m_Error == 0;
  }
}


// Unserialize  (line 129, @0x000000000325f8d0, libserver.so)  // inlines: GetInt, GetType<int>, GetTypeBin<int>, IsValid, LowLevelByteSwap<int>, PeekGet, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckGet, CUtlBuffer::Scanf
bool __fastcall Unserialize(CUtlBuffer *const buf, int *const dest)
{
  bool v4; // al
  int v5; // edx
  bool result; // al
  int v7; // edx
  int m_Get; // ecx
  unsigned __int8 *v9; // rax
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // al
  char v12; // [rsp+8h] [rbp-18h] BYREF
  int v13; // [rsp+Ch] [rbp-14h]

  if ( (buf->m_Flags & 1) == 0 )
  {
    v4 = CUtlBuffer::CheckGet(buf, 4);
    v5 = 0;
    if ( v4 )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        m_Get = buf->m_Get;
        v9 = &buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
        if ( v9 == 0 )
          v9 = &v12;
        LOBYTE(v13) = v9[3];
        BYTE1(v13) = v9[2];
        v10 = v9[1];
        v11 = *v9;
        BYTE2(v13) = v10;
        HIBYTE(v13) = v11;
        v5 = v13;
      }
      else
      {
        m_Get = buf->m_Get;
        v5 = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      }
      buf->m_Get = m_Get + 4;
    }
    *dest = v5;
    return buf->m_Error == 0;
  }
  v7 = CUtlBuffer::Scanf(buf, "%d", dest);
  result = 0;
  if ( v7 == 1 )
    return buf->m_Error == 0;
  return result;
}


// Serialize  (line 141, @0x000000000325f9a0, libserver.so)  // inlines: IsValid, LowLevelByteSwap<long long unsigned int>, PeekPut, PutType<long long unsigned int>, PutTypeBin<long long unsigned int>, PutUnsignedInt64, SwapBufferToTargetEndian<long long unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CUtlBuffer::Printf
// strings: "0x%llx"
bool __fastcall Serialize(CUtlBuffer *const buf, const uint64 *const src)
{
  uint64 v3; // r12
  int m_Put; // eax
  unsigned __int8 *v6; // r10
  __int64 v7; // rdx
  __int64 i; // rax
  char v9; // si
  _BYTE *v10; // rcx
  char v11; // [rsp+1h] [rbp-21h]
  uint64 v12; // [rsp+2h] [rbp-20h]
  _QWORD v13[3]; // [rsp+Ah] [rbp-18h] BYREF

  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "0x%llx", *src);
    return buf->m_Error == 0;
  }
  else
  {
    v3 = *src;
    v12 = *src;
    if ( CUtlBuffer::CheckPut(buf, 8) )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        m_Put = buf->m_Put;
        v6 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
        if ( v6 != 0 )
        {
          v7 = 0;
          v13[0] = *v6;
          for ( i = 8; i != 0; --i )
          {
            v9 = *(&v11 + i);
            v10 = v13 + v7;
            v7 = 9 - i;
            *v10 = v9;
          }
          *v6 = v13[0];
          m_Put = buf->m_Put;
        }
      }
      else
      {
        *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v3;
        m_Put = buf->m_Put;
      }
      buf->m_Put = m_Put + 8;
      CUtlBuffer::AddNullTermination(buf);
    }
    return buf->m_Error == 0;
  }
}


// Unserialize  (line 154, @0x000000000325fa90, libserver.so)  // inlines: GetType<long long unsigned int>, GetTypeBin<long long unsigned int>, GetUnsignedInt64, IsValid, LowLevelByteSwap<long long unsigned int>, PeekGet, SwapBufferToTargetEndian<long long unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::Scanf, CUtlBuffer::CheckGet
// strings: "0x%llx"
bool __fastcall Unserialize(CUtlBuffer *const buf, uint64 *const dest)
{
  int m_nOffset; // ecx
  int v4; // eax
  int v5; // edx
  bool result; // al
  bool v7; // al
  uint64 v8; // rcx
  int m_Get; // r9d
  unsigned __int8 *v10; // r8
  __int64 v11; // rcx
  __int64 i; // rax
  unsigned __int8 v13; // di
  unsigned __int8 *v14; // rsi
  __int64 v16; // [rsp+10h] [rbp-20h] BYREF
  _QWORD v17[3]; // [rsp+18h] [rbp-18h] BYREF

  if ( (buf->m_Flags & 1) == 0 )
  {
    v7 = CUtlBuffer::CheckGet(buf, 8);
    v8 = 0;
    if ( v7 )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        m_Get = buf->m_Get;
        v10 = &buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
        if ( v10 == 0 )
          v10 = &v16;
        v11 = 0;
        v17[0] = v16;
        for ( i = 8; i != 0; --i )
        {
          v13 = v10[i - 1];
          v14 = v17 + v11;
          v11 = 9 - i;
          *v14 = v13;
        }
        v8 = v17[0];
      }
      else
      {
        m_Get = buf->m_Get;
        v8 = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      }
      buf->m_Get = m_Get + 8;
    }
    *dest = v8;
    return buf->m_Error == 0;
  }
  m_nOffset = buf->m_nOffset;
  if ( buf->m_Memory.m_pMemory[buf->m_Get - m_nOffset] == 48
    && buf->m_Memory.m_pMemory[buf->m_Get + 1 - m_nOffset] == 120 )
  {
    v4 = CUtlBuffer::Scanf(buf, "0x%llx", dest);
  }
  else
  {
    v4 = CUtlBuffer::Scanf(buf, "%llx", dest);
  }
  v5 = v4;
  result = 0;
  if ( v5 == 1 )
    return buf->m_Error == 0;
  return result;
}


// Serialize  (line 168, @0x000000000325fbb0, libserver.so)  // inlines: IsValid, PeekPut, PutTypeBin<unsigned char>, PutUnsignedChar, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::Printf, CUtlBuffer::AddNullTermination
// strings: "%hu"
bool __fastcall Serialize(CUtlBuffer *const buf, const uint8 *const src)
{
  uint8 v3; // r12

  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%hu", *src);
    return buf->m_Error == 0;
  }
  else
  {
    v3 = *src;
    if ( CUtlBuffer::CheckPut(buf, 1) )
    {
      buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v3;
      ++buf->m_Put;
      CUtlBuffer::AddNullTermination(buf);
    }
    return buf->m_Error == 0;
  }
}


// Unserialize  (line 182, @0x000000000325fc20, libserver.so)  // inlines: GetTypeBin<unsigned char>, GetUnsignedChar, IsValid, PeekGet, operator[]
// calls: CUtlBuffer::CheckGet, CUtlBuffer::Scanf
// strings: "%hu"
bool __fastcall Unserialize(CUtlBuffer *const buf, uint8 *const dest)
{
  bool v4; // al
  uint8 v5; // dl
  int v7; // eax
  uint16 v8; // dx
  int m_Get; // edx
  int v10; // eax
  uint16 temp; // [rsp+Eh] [rbp-12h] BYREF

  if ( (buf->m_Flags & 1) != 0 )
  {
    v7 = CUtlBuffer::Scanf(buf, "%hu", &temp);
    v8 = temp;
    *dest = temp;
    return v7 == 1 && v8 <= 0xFFu && buf->m_Error == 0;
  }
  else
  {
    v4 = CUtlBuffer::CheckGet(buf, 1);
    v5 = 0;
    if ( v4 )
    {
      m_Get = buf->m_Get;
      v10 = m_Get + 1;
      v5 = buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      buf->m_Get = v10;
    }
    *dest = v5;
    return buf->m_Error == 0;
  }
}


// Serialize  (line 196, @0x000000000325fcd0, libserver.so)  // inlines: IsValid, LowLevelByteSwap<float>, PeekPut, PutFloat, PutType<float>, PutTypeBin<float>, SwapBufferToTargetEndian<float>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, SerializeFloat
bool __fastcall Serialize(CUtlBuffer *const buf, const float *const src)
{
  float v2; // xmm1_4
  int m_Put; // eax
  unsigned __int8 *v6; // rdx
  int v7; // [rsp+Ch] [rbp-24h]
  int v8; // [rsp+18h] [rbp-18h]
  int v9; // [rsp+1Ch] [rbp-14h]

  if ( (buf->m_Flags & 1) != 0 )
  {
    SerializeFloat(buf, *src, v2);
    return buf->m_Error == 0;
  }
  else
  {
    v8 = *src;
    v7 = *src;
    if ( CUtlBuffer::CheckPut(buf, 4) )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        m_Put = buf->m_Put;
        v6 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
        if ( v6 != 0 )
        {
          LOBYTE(v9) = HIBYTE(v8);
          BYTE1(v9) = BYTE2(v8);
          BYTE2(v9) = BYTE1(v8);
          HIBYTE(v9) = v8;
          *v6 = v9;
          m_Put = buf->m_Put;
        }
      }
      else
      {
        *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v7;
        m_Put = buf->m_Put;
      }
      buf->m_Put = m_Put + 4;
      CUtlBuffer::AddNullTermination(buf);
    }
    return buf->m_Error == 0;
  }
}


// Unserialize  (line 209, @0x000000000325fda0, libserver.so)  // inlines: GetFloat, GetType<float>, GetTypeBin<float>, IsValid, LowLevelByteSwap<float>, PeekGet, SwapBufferToTargetEndian<float>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckGet, CUtlBuffer::Scanf
bool __fastcall Unserialize(CUtlBuffer *const buf, float *const dest)
{
  bool v4; // al
  int v5; // xmm0_4
  bool result; // al
  int v7; // edx
  int v8; // [rsp+Ch] [rbp-14h]

  if ( (buf->m_Flags & 1) == 0 )
  {
    v4 = CUtlBuffer::CheckGet(buf, 4);
    v5 = 0;
    if ( v4 )
    {
      v5 = *&buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        LOBYTE(v8) = HIBYTE(v5);
        BYTE1(v8) = BYTE2(v5);
        BYTE2(v8) = BYTE1(v5);
        HIBYTE(v8) = v5;
        v5 = v8;
      }
      buf->m_Get += 4;
    }
    *dest = v5;
    return buf->m_Error == 0;
  }
  v7 = CUtlBuffer::Scanf(buf, "%f", dest);
  result = 0;
  if ( v7 == 1 )
    return buf->m_Error == 0;
  return result;
}


// Serialize  (line 226, @0x000000000325fe60, libserver.so)  // inlines: IsValid, LowLevelByteSwap<float>, PeekPut, PutFloat, PutType<float>, PutTypeBin<float>, SwapBufferToTargetEndian<float>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CUtlBuffer::Printf, SerializeFloats
bool __fastcall Serialize(CUtlBuffer *const buf, const Vector2D *const src)
{
  int m_Put; // eax
  int v6; // eax
  unsigned __int8 *v7; // rdx
  unsigned __int8 *v8; // rdx
  vec_t v9; // [rsp+Ch] [rbp-24h]
  vec_t x; // [rsp+14h] [rbp-1Ch]
  vec_t y; // [rsp+18h] [rbp-18h]
  int v12; // [rsp+1Ch] [rbp-14h]
  int v13; // [rsp+1Ch] [rbp-14h]

  if ( (buf->m_Flags & 1) != 0 )
  {
    SerializeFloats(buf, 2, src);
    return buf->m_Error == 0;
  }
  else
  {
    x = src->x;
    v9 = src->x;
    if ( CUtlBuffer::CheckPut(buf, 4) )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        m_Put = buf->m_Put;
        v7 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
        if ( v7 != 0 )
        {
          LOBYTE(v12) = HIBYTE(x);
          BYTE1(v12) = BYTE2(x);
          BYTE2(v12) = BYTE1(x);
          HIBYTE(v12) = LOBYTE(x);
          *v7 = v12;
          m_Put = buf->m_Put;
        }
      }
      else
      {
        *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v9;
        m_Put = buf->m_Put;
      }
      buf->m_Put = m_Put + 4;
      CUtlBuffer::AddNullTermination(buf);
    }
    if ( (buf->m_Flags & 1) != 0 )
    {
      CUtlBuffer::Printf(buf, "%f", src->y);
      return buf->m_Error == 0;
    }
    y = src->y;
    if ( !CUtlBuffer::CheckPut(buf, 4) )
      return buf->m_Error == 0;
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      v6 = buf->m_Put;
      v8 = &buf->m_Memory.m_pMemory[v6 - buf->m_nOffset];
      if ( v8 != 0 )
      {
        LOBYTE(v13) = HIBYTE(y);
        BYTE1(v13) = BYTE2(y);
        BYTE2(v13) = BYTE1(y);
        HIBYTE(v13) = LOBYTE(y);
        *v8 = v13;
        v6 = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = y;
      v6 = buf->m_Put;
    }
    buf->m_Put = v6 + 4;
    CUtlBuffer::AddNullTermination(buf);
    return buf->m_Error == 0;
  }
}


// Unserialize  (line 240, @0x0000000003260010, libserver.so)  // inlines: GetFloat, GetType<float>, GetTypeBin<float>, GetTypeText<float>, IsValid, LowLevelByteSwap<float>, PeekGet, StringToNumber<float>, SwapBufferToTargetEndian<float>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckGet, CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::Scanf, V_strtod
bool __fastcall Unserialize(CUtlBuffer *const buf, Vector2D *const dest)
{
  bool v4; // al
  vec_t v5; // xmm0_4
  int m_Get; // eax
  bool v7; // zf
  bool v8; // al
  float v9; // xmm0_4
  bool result; // al
  int v11; // edx
  bool v12; // al
  int v13; // eax
  int v14; // r13d
  int nIncrement; // [rsp+4h] [rbp-2Ch] BYREF
  unsigned __int8 *v16; // [rsp+8h] [rbp-28h] BYREF

  if ( (buf->m_Flags & 1) == 0 )
  {
    v4 = CUtlBuffer::CheckGet(buf, 4);
    v5 = 0.0;
    if ( v4 )
    {
      m_Get = buf->m_Get;
      v7 = (*&buf->m_Byteswap & 1) == 0;
      v5 = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      nIncrement = LODWORD(v5);
      if ( !v7 )
      {
        LOBYTE(v16) = HIBYTE(nIncrement);
        BYTE1(v16) = BYTE2(nIncrement);
        BYTE2(v16) = BYTE1(nIncrement);
        BYTE3(v16) = nIncrement;
        v5 = *&v16;
      }
      buf->m_Get = m_Get + 4;
    }
    dest->x = v5;
    if ( (buf->m_Flags & 1) != 0 )
    {
      nIncrement = 128;
      v8 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
      v9 = 0.0;
      if ( v8 )
      {
        v16 = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
        v14 = v16;
        v9 = V_strtod(v16, &v16);
        if ( v16 != v14 )
          buf->m_Get += v16 - v14;
      }
    }
    else
    {
      v12 = CUtlBuffer::CheckGet(buf, 4);
      v9 = 0.0;
      if ( v12 )
      {
        v13 = buf->m_Get;
        v9 = *&buf->m_Memory.m_pMemory[v13 - buf->m_nOffset];
        if ( (*&buf->m_Byteswap & 1) != 0 )
        {
          LOBYTE(v16) = HIBYTE(v9);
          BYTE1(v16) = BYTE2(v9);
          BYTE2(v16) = BYTE1(v9);
          BYTE3(v16) = LOBYTE(v9);
          v9 = *&v16;
        }
        buf->m_Get = v13 + 4;
      }
    }
    dest->y = v9;
    return buf->m_Error == 0;
  }
  v11 = CUtlBuffer::Scanf(buf, "%f %f", dest, &dest->y);
  result = 0;
  if ( v11 == 2 )
    return buf->m_Error == 0;
  return result;
}


// Serialize  (line 254, @0x00000000032601a0, libserver.so)  // inlines: IsValid, LowLevelByteSwap<float>, PeekPut, PutFloat, PutType<float>, PutTypeBin<float>, SwapBufferToTargetEndian<float>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CUtlBuffer::Printf, SerializeFloats
bool __fastcall Serialize(CUtlBuffer *const buf, const Vector *const src)
{
  int m_Put; // eax
  float z; // xmm0_4
  int v7; // eax
  int v8; // eax
  unsigned __int8 *v9; // rdx
  unsigned __int8 *v10; // rdx
  unsigned __int8 *v11; // rdx
  vec_t v12; // [rsp+Ch] [rbp-24h]
  float v13; // [rsp+Ch] [rbp-24h]
  vec_t x; // [rsp+10h] [rbp-20h]
  vec_t y; // [rsp+14h] [rbp-1Ch]
  float v16; // [rsp+18h] [rbp-18h]
  int v17; // [rsp+1Ch] [rbp-14h]
  int v18; // [rsp+1Ch] [rbp-14h]
  int v19; // [rsp+1Ch] [rbp-14h]

  if ( (buf->m_Flags & 1) != 0 )
  {
    SerializeFloats(buf, 3, &src->x);
    return buf->m_Error == 0;
  }
  x = src->x;
  v12 = src->x;
  if ( CUtlBuffer::CheckPut(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      m_Put = buf->m_Put;
      v9 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
      if ( v9 != 0 )
      {
        LOBYTE(v17) = HIBYTE(x);
        BYTE1(v17) = BYTE2(x);
        BYTE2(v17) = BYTE1(x);
        HIBYTE(v17) = LOBYTE(x);
        *v9 = v17;
        m_Put = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v12;
      m_Put = buf->m_Put;
    }
    buf->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(buf);
  }
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%f", src->y);
    goto LABEL_8;
  }
  y = src->y;
  if ( !CUtlBuffer::CheckPut(buf, 4) )
  {
LABEL_8:
    z = src->z;
    if ( (buf->m_Flags & 1) != 0 )
    {
LABEL_9:
      CUtlBuffer::Printf(buf, "%f", z);
      return buf->m_Error == 0;
    }
    goto LABEL_15;
  }
  if ( (*&buf->m_Byteswap & 1) != 0 )
  {
    v7 = buf->m_Put;
    v11 = &buf->m_Memory.m_pMemory[v7 - buf->m_nOffset];
    if ( v11 != 0 )
    {
      LOBYTE(v19) = HIBYTE(y);
      BYTE1(v19) = BYTE2(y);
      BYTE2(v19) = BYTE1(y);
      HIBYTE(v19) = LOBYTE(y);
      *v11 = v19;
      v7 = buf->m_Put;
    }
  }
  else
  {
    *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = y;
    v7 = buf->m_Put;
  }
  buf->m_Put = v7 + 4;
  CUtlBuffer::AddNullTermination(buf);
  z = src->z;
  if ( (buf->m_Flags & 1) != 0 )
    goto LABEL_9;
LABEL_15:
  v16 = z;
  v13 = z;
  if ( !CUtlBuffer::CheckPut(buf, 4) )
    return buf->m_Error == 0;
  if ( (*&buf->m_Byteswap & 1) != 0 )
  {
    v8 = buf->m_Put;
    v10 = &buf->m_Memory.m_pMemory[v8 - buf->m_nOffset];
    if ( v10 != 0 )
    {
      LOBYTE(v18) = HIBYTE(v16);
      BYTE1(v18) = BYTE2(v16);
      BYTE2(v18) = BYTE1(v16);
      HIBYTE(v18) = LOBYTE(v16);
      *v10 = v18;
      v8 = buf->m_Put;
    }
  }
  else
  {
    *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v13;
    v8 = buf->m_Put;
  }
  buf->m_Put = v8 + 4;
  CUtlBuffer::AddNullTermination(buf);
  return buf->m_Error == 0;
}


// Unserialize  (line 269, @0x0000000003260430, libserver.so)  // inlines: GetFloat, GetType<float>, GetTypeBin<float>, GetTypeText<float>, IsValid, LowLevelByteSwap<float>, PeekGet, StringToNumber<float>, SwapBufferToTargetEndian<float>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckGet, CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::Scanf, V_strtod
bool __fastcall Unserialize(CUtlBuffer *const buf, Vector *const dest)
{
  bool v4; // al
  vec_t v5; // xmm0_4
  int m_Get; // eax
  bool v7; // zf
  bool v8; // al
  float v9; // xmm0_4
  bool v10; // al
  float v11; // xmm0_4
  bool result; // al
  int v13; // edx
  bool v14; // al
  int v15; // eax
  int v16; // r13d
  int v17; // r13d
  bool v18; // al
  int v19; // eax
  int nIncrement; // [rsp+4h] [rbp-2Ch] BYREF
  _QWORD v21[5]; // [rsp+8h] [rbp-28h] BYREF

  if ( (buf->m_Flags & 1) == 0 )
  {
    v4 = CUtlBuffer::CheckGet(buf, 4);
    v5 = 0.0;
    if ( v4 )
    {
      m_Get = buf->m_Get;
      v7 = (*&buf->m_Byteswap & 1) == 0;
      v5 = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      nIncrement = LODWORD(v5);
      if ( !v7 )
      {
        LOBYTE(v21[0]) = HIBYTE(nIncrement);
        BYTE1(v21[0]) = BYTE2(nIncrement);
        BYTE2(v21[0]) = BYTE1(nIncrement);
        BYTE3(v21[0]) = nIncrement;
        v5 = *v21;
      }
      buf->m_Get = m_Get + 4;
    }
    dest->x = v5;
    if ( (buf->m_Flags & 1) != 0 )
    {
      nIncrement = 128;
      v8 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
      v9 = 0.0;
      if ( v8 )
      {
        v21[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
        v16 = v21[0];
        v9 = V_strtod(v21[0], v21);
        if ( LODWORD(v21[0]) != v16 )
          buf->m_Get += LODWORD(v21[0]) - v16;
      }
    }
    else
    {
      v14 = CUtlBuffer::CheckGet(buf, 4);
      v9 = 0.0;
      if ( v14 )
      {
        v15 = buf->m_Get;
        v9 = *&buf->m_Memory.m_pMemory[v15 - buf->m_nOffset];
        if ( (*&buf->m_Byteswap & 1) != 0 )
        {
          LOBYTE(v21[0]) = HIBYTE(v9);
          BYTE1(v21[0]) = BYTE2(v9);
          BYTE2(v21[0]) = BYTE1(v9);
          BYTE3(v21[0]) = LOBYTE(v9);
          v9 = *v21;
        }
        buf->m_Get = v15 + 4;
      }
    }
    dest->y = v9;
    if ( (buf->m_Flags & 1) != 0 )
    {
      nIncrement = 128;
      v10 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
      v11 = 0.0;
      if ( v10 )
      {
        v21[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
        v17 = v21[0];
        v11 = V_strtod(v21[0], v21);
        if ( LODWORD(v21[0]) != v17 )
          buf->m_Get += LODWORD(v21[0]) - v17;
      }
    }
    else
    {
      v18 = CUtlBuffer::CheckGet(buf, 4);
      v11 = 0.0;
      if ( v18 )
      {
        v19 = buf->m_Get;
        v11 = *&buf->m_Memory.m_pMemory[v19 - buf->m_nOffset];
        if ( (*&buf->m_Byteswap & 1) != 0 )
        {
          LOBYTE(v21[0]) = HIBYTE(v11);
          BYTE1(v21[0]) = BYTE2(v11);
          BYTE2(v21[0]) = BYTE1(v11);
          BYTE3(v21[0]) = LOBYTE(v11);
          v11 = *v21;
        }
        buf->m_Get = v19 + 4;
      }
    }
    dest->z = v11;
    return buf->m_Error == 0;
  }
  v13 = CUtlBuffer::Scanf(buf, "%f %f %f", dest, &dest->y, &dest->z);
  result = 0;
  if ( v13 == 3 )
    return buf->m_Error == 0;
  return result;
}


// Serialize  (line 284, @0x00000000032606b0, libserver.so)  // inlines: IsValid, LowLevelByteSwap<float>, PeekPut, PutFloat, PutType<float>, PutTypeBin<float>, SwapBufferToTargetEndian<float>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CUtlBuffer::Printf, SerializeFloats
bool __fastcall Serialize(CUtlBuffer *const buf, const Vector4D *const src)
{
  int m_Put; // eax
  float z; // xmm0_4
  float w; // xmm0_4
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned __int8 *v11; // rdx
  unsigned __int8 *v12; // rdx
  unsigned __int8 *v13; // rdx
  unsigned __int8 *v14; // rdx
  vec_t v15; // [rsp+Ch] [rbp-34h]
  float v16; // [rsp+Ch] [rbp-34h]
  float v17; // [rsp+Ch] [rbp-34h]
  vec_t x; // [rsp+1Ch] [rbp-24h]
  vec_t y; // [rsp+20h] [rbp-20h]
  float v20; // [rsp+24h] [rbp-1Ch]
  float v21; // [rsp+28h] [rbp-18h]
  int v22; // [rsp+2Ch] [rbp-14h]
  int v23; // [rsp+2Ch] [rbp-14h]
  int v24; // [rsp+2Ch] [rbp-14h]
  int v25; // [rsp+2Ch] [rbp-14h]

  if ( (buf->m_Flags & 1) != 0 )
  {
    SerializeFloats(buf, 4, &src->x);
    return buf->m_Error == 0;
  }
  x = src->x;
  v15 = src->x;
  if ( CUtlBuffer::CheckPut(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      m_Put = buf->m_Put;
      v11 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
      if ( v11 != 0 )
      {
        LOBYTE(v22) = HIBYTE(x);
        BYTE1(v22) = BYTE2(x);
        BYTE2(v22) = BYTE1(x);
        HIBYTE(v22) = LOBYTE(x);
        *v11 = v22;
        m_Put = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v15;
      m_Put = buf->m_Put;
    }
    buf->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(buf);
  }
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%f", src->y);
  }
  else
  {
    y = src->y;
    if ( CUtlBuffer::CheckPut(buf, 4) )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        v8 = buf->m_Put;
        v12 = &buf->m_Memory.m_pMemory[v8 - buf->m_nOffset];
        if ( v12 != 0 )
        {
          LOBYTE(v23) = HIBYTE(y);
          BYTE1(v23) = BYTE2(y);
          BYTE2(v23) = BYTE1(y);
          HIBYTE(v23) = LOBYTE(y);
          *v12 = v23;
          v8 = buf->m_Put;
        }
      }
      else
      {
        *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = y;
        v8 = buf->m_Put;
      }
      buf->m_Put = v8 + 4;
      CUtlBuffer::AddNullTermination(buf);
      z = src->z;
      if ( (buf->m_Flags & 1) != 0 )
        goto LABEL_9;
      goto LABEL_17;
    }
  }
  z = src->z;
  if ( (buf->m_Flags & 1) != 0 )
  {
LABEL_9:
    CUtlBuffer::Printf(buf, "%f", z);
    goto LABEL_10;
  }
LABEL_17:
  v20 = z;
  v16 = z;
  if ( !CUtlBuffer::CheckPut(buf, 4) )
  {
LABEL_10:
    w = src->w;
    if ( (buf->m_Flags & 1) != 0 )
    {
LABEL_11:
      CUtlBuffer::Printf(buf, "%f", w);
      return buf->m_Error == 0;
    }
    goto LABEL_21;
  }
  if ( (*&buf->m_Byteswap & 1) != 0 )
  {
    v9 = buf->m_Put;
    v13 = &buf->m_Memory.m_pMemory[v9 - buf->m_nOffset];
    if ( v13 != 0 )
    {
      LOBYTE(v24) = HIBYTE(v20);
      BYTE1(v24) = BYTE2(v20);
      BYTE2(v24) = BYTE1(v20);
      HIBYTE(v24) = LOBYTE(v20);
      *v13 = v24;
      v9 = buf->m_Put;
    }
  }
  else
  {
    *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v16;
    v9 = buf->m_Put;
  }
  buf->m_Put = v9 + 4;
  CUtlBuffer::AddNullTermination(buf);
  w = src->w;
  if ( (buf->m_Flags & 1) != 0 )
    goto LABEL_11;
LABEL_21:
  v21 = w;
  v17 = w;
  if ( !CUtlBuffer::CheckPut(buf, 4) )
    return buf->m_Error == 0;
  if ( (*&buf->m_Byteswap & 1) != 0 )
  {
    v10 = buf->m_Put;
    v14 = &buf->m_Memory.m_pMemory[v10 - buf->m_nOffset];
    if ( v14 != 0 )
    {
      LOBYTE(v25) = HIBYTE(v21);
      BYTE1(v25) = BYTE2(v21);
      BYTE2(v25) = BYTE1(v21);
      HIBYTE(v25) = LOBYTE(v21);
      *v14 = v25;
      v10 = buf->m_Put;
    }
  }
  else
  {
    *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v17;
    v10 = buf->m_Put;
  }
  buf->m_Put = v10 + 4;
  CUtlBuffer::AddNullTermination(buf);
  return buf->m_Error == 0;
}


// Unserialize  (line 300, @0x0000000003260a10, libserver.so)  // inlines: GetFloat, GetType<float>, GetTypeBin<float>, GetTypeText<float>, IsValid, LowLevelByteSwap<float>, PeekGet, StringToNumber<float>, SwapBufferToTargetEndian<float>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckGet, CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::Scanf, V_strtod
// strings: "%f %f %f %f"
bool __fastcall Unserialize(CUtlBuffer *const buf, Vector4D *const dest)
{
  bool v4; // al
  vec_t v5; // xmm0_4
  int m_Get; // eax
  bool v7; // zf
  bool v8; // al
  float v9; // xmm0_4
  bool v10; // al
  float v11; // xmm0_4
  bool v12; // al
  float v13; // xmm0_4
  bool result; // al
  int v15; // edx
  bool v16; // al
  int v17; // eax
  int v18; // r13d
  int v19; // r13d
  int v20; // r13d
  bool v21; // al
  int v22; // eax
  bool v23; // al
  int v24; // eax
  int nIncrement; // [rsp+4h] [rbp-2Ch] BYREF
  _QWORD v26[5]; // [rsp+8h] [rbp-28h] BYREF

  if ( (buf->m_Flags & 1) == 0 )
  {
    v4 = CUtlBuffer::CheckGet(buf, 4);
    v5 = 0.0;
    if ( v4 )
    {
      m_Get = buf->m_Get;
      v7 = (*&buf->m_Byteswap & 1) == 0;
      v5 = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      nIncrement = LODWORD(v5);
      if ( !v7 )
      {
        LOBYTE(v26[0]) = HIBYTE(nIncrement);
        BYTE1(v26[0]) = BYTE2(nIncrement);
        BYTE2(v26[0]) = BYTE1(nIncrement);
        BYTE3(v26[0]) = nIncrement;
        v5 = *v26;
      }
      buf->m_Get = m_Get + 4;
    }
    dest->x = v5;
    if ( (buf->m_Flags & 1) != 0 )
    {
      nIncrement = 128;
      v8 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
      v9 = 0.0;
      if ( v8 )
      {
        v26[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
        v18 = v26[0];
        v9 = V_strtod(v26[0], v26);
        if ( LODWORD(v26[0]) != v18 )
          buf->m_Get += LODWORD(v26[0]) - v18;
      }
    }
    else
    {
      v16 = CUtlBuffer::CheckGet(buf, 4);
      v9 = 0.0;
      if ( v16 )
      {
        v17 = buf->m_Get;
        v9 = *&buf->m_Memory.m_pMemory[v17 - buf->m_nOffset];
        if ( (*&buf->m_Byteswap & 1) != 0 )
        {
          LOBYTE(v26[0]) = HIBYTE(v9);
          BYTE1(v26[0]) = BYTE2(v9);
          BYTE2(v26[0]) = BYTE1(v9);
          BYTE3(v26[0]) = LOBYTE(v9);
          v9 = *v26;
        }
        buf->m_Get = v17 + 4;
      }
    }
    dest->y = v9;
    if ( (buf->m_Flags & 1) != 0 )
    {
      nIncrement = 128;
      v10 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
      v11 = 0.0;
      if ( v10 )
      {
        v26[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
        v20 = v26[0];
        v11 = V_strtod(v26[0], v26);
        if ( LODWORD(v26[0]) != v20 )
          buf->m_Get += LODWORD(v26[0]) - v20;
      }
    }
    else
    {
      v23 = CUtlBuffer::CheckGet(buf, 4);
      v11 = 0.0;
      if ( v23 )
      {
        v24 = buf->m_Get;
        v11 = *&buf->m_Memory.m_pMemory[v24 - buf->m_nOffset];
        if ( (*&buf->m_Byteswap & 1) != 0 )
        {
          LOBYTE(v26[0]) = HIBYTE(v11);
          BYTE1(v26[0]) = BYTE2(v11);
          BYTE2(v26[0]) = BYTE1(v11);
          BYTE3(v26[0]) = LOBYTE(v11);
          v11 = *v26;
        }
        buf->m_Get = v24 + 4;
      }
    }
    dest->z = v11;
    if ( (buf->m_Flags & 1) != 0 )
    {
      nIncrement = 128;
      v12 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
      v13 = 0.0;
      if ( v12 )
      {
        v26[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
        v19 = v26[0];
        v13 = V_strtod(v26[0], v26);
        if ( LODWORD(v26[0]) != v19 )
          buf->m_Get += LODWORD(v26[0]) - v19;
      }
    }
    else
    {
      v21 = CUtlBuffer::CheckGet(buf, 4);
      v13 = 0.0;
      if ( v21 )
      {
        v22 = buf->m_Get;
        v13 = *&buf->m_Memory.m_pMemory[v22 - buf->m_nOffset];
        if ( (*&buf->m_Byteswap & 1) != 0 )
        {
          LOBYTE(v26[0]) = HIBYTE(v13);
          BYTE1(v26[0]) = BYTE2(v13);
          BYTE2(v26[0]) = BYTE1(v13);
          BYTE3(v26[0]) = LOBYTE(v13);
          v13 = *v26;
        }
        buf->m_Get = v22 + 4;
      }
    }
    dest->w = v13;
    return buf->m_Error == 0;
  }
  v15 = CUtlBuffer::Scanf(buf, "%f %f %f %f", dest, &dest->y, &dest->z, &dest->w);
  result = 0;
  if ( v15 == 4 )
    return buf->m_Error == 0;
  return result;
}


// Serialize  (line 316, @0x0000000003260d70, libserver.so)  // inlines: IsValid, LowLevelByteSwap<float>, PeekPut, PutFloat, PutType<float>, PutTypeBin<float>, SwapBufferToTargetEndian<float>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CUtlBuffer::Printf, SerializeFloats
bool __fastcall Serialize(CUtlBuffer *const buf, const QAngle *const src)
{
  int m_Put; // eax
  float z; // xmm0_4
  int v7; // eax
  int v8; // eax
  unsigned __int8 *v9; // rdx
  unsigned __int8 *v10; // rdx
  unsigned __int8 *v11; // rdx
  vec_t v12; // [rsp+Ch] [rbp-24h]
  float v13; // [rsp+Ch] [rbp-24h]
  vec_t x; // [rsp+10h] [rbp-20h]
  vec_t y; // [rsp+14h] [rbp-1Ch]
  float v16; // [rsp+18h] [rbp-18h]
  int v17; // [rsp+1Ch] [rbp-14h]
  int v18; // [rsp+1Ch] [rbp-14h]
  int v19; // [rsp+1Ch] [rbp-14h]

  if ( (buf->m_Flags & 1) != 0 )
  {
    SerializeFloats(buf, 3, &src->x);
    return buf->m_Error == 0;
  }
  x = src->x;
  v12 = src->x;
  if ( CUtlBuffer::CheckPut(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      m_Put = buf->m_Put;
      v9 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
      if ( v9 != 0 )
      {
        LOBYTE(v17) = HIBYTE(x);
        BYTE1(v17) = BYTE2(x);
        BYTE2(v17) = BYTE1(x);
        HIBYTE(v17) = LOBYTE(x);
        *v9 = v17;
        m_Put = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v12;
      m_Put = buf->m_Put;
    }
    buf->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(buf);
  }
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%f", src->y);
    goto LABEL_8;
  }
  y = src->y;
  if ( !CUtlBuffer::CheckPut(buf, 4) )
  {
LABEL_8:
    z = src->z;
    if ( (buf->m_Flags & 1) != 0 )
    {
LABEL_9:
      CUtlBuffer::Printf(buf, "%f", z);
      return buf->m_Error == 0;
    }
    goto LABEL_15;
  }
  if ( (*&buf->m_Byteswap & 1) != 0 )
  {
    v7 = buf->m_Put;
    v11 = &buf->m_Memory.m_pMemory[v7 - buf->m_nOffset];
    if ( v11 != 0 )
    {
      LOBYTE(v19) = HIBYTE(y);
      BYTE1(v19) = BYTE2(y);
      BYTE2(v19) = BYTE1(y);
      HIBYTE(v19) = LOBYTE(y);
      *v11 = v19;
      v7 = buf->m_Put;
    }
  }
  else
  {
    *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = y;
    v7 = buf->m_Put;
  }
  buf->m_Put = v7 + 4;
  CUtlBuffer::AddNullTermination(buf);
  z = src->z;
  if ( (buf->m_Flags & 1) != 0 )
    goto LABEL_9;
LABEL_15:
  v16 = z;
  v13 = z;
  if ( !CUtlBuffer::CheckPut(buf, 4) )
    return buf->m_Error == 0;
  if ( (*&buf->m_Byteswap & 1) != 0 )
  {
    v8 = buf->m_Put;
    v10 = &buf->m_Memory.m_pMemory[v8 - buf->m_nOffset];
    if ( v10 != 0 )
    {
      LOBYTE(v18) = HIBYTE(v16);
      BYTE1(v18) = BYTE2(v16);
      BYTE2(v18) = BYTE1(v16);
      HIBYTE(v18) = LOBYTE(v16);
      *v10 = v18;
      v8 = buf->m_Put;
    }
  }
  else
  {
    *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v13;
    v8 = buf->m_Put;
  }
  buf->m_Put = v8 + 4;
  CUtlBuffer::AddNullTermination(buf);
  return buf->m_Error == 0;
}


// Unserialize  (line 331, @0x0000000003261000, libserver.so)  // inlines: GetFloat, GetType<float>, GetTypeBin<float>, GetTypeText<float>, IsValid, LowLevelByteSwap<float>, PeekGet, StringToNumber<float>, SwapBufferToTargetEndian<float>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckGet, CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::Scanf, V_strtod
bool __fastcall Unserialize(CUtlBuffer *const buf, QAngle *const dest)
{
  bool v4; // al
  vec_t v5; // xmm0_4
  int m_Get; // eax
  bool v7; // zf
  bool v8; // al
  float v9; // xmm0_4
  bool v10; // al
  float v11; // xmm0_4
  bool result; // al
  int v13; // edx
  bool v14; // al
  int v15; // eax
  int v16; // r13d
  int v17; // r13d
  bool v18; // al
  int v19; // eax
  int nIncrement; // [rsp+4h] [rbp-2Ch] BYREF
  _QWORD v21[5]; // [rsp+8h] [rbp-28h] BYREF

  if ( (buf->m_Flags & 1) == 0 )
  {
    v4 = CUtlBuffer::CheckGet(buf, 4);
    v5 = 0.0;
    if ( v4 )
    {
      m_Get = buf->m_Get;
      v7 = (*&buf->m_Byteswap & 1) == 0;
      v5 = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      nIncrement = LODWORD(v5);
      if ( !v7 )
      {
        LOBYTE(v21[0]) = HIBYTE(nIncrement);
        BYTE1(v21[0]) = BYTE2(nIncrement);
        BYTE2(v21[0]) = BYTE1(nIncrement);
        BYTE3(v21[0]) = nIncrement;
        v5 = *v21;
      }
      buf->m_Get = m_Get + 4;
    }
    dest->x = v5;
    if ( (buf->m_Flags & 1) != 0 )
    {
      nIncrement = 128;
      v8 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
      v9 = 0.0;
      if ( v8 )
      {
        v21[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
        v16 = v21[0];
        v9 = V_strtod(v21[0], v21);
        if ( LODWORD(v21[0]) != v16 )
          buf->m_Get += LODWORD(v21[0]) - v16;
      }
    }
    else
    {
      v14 = CUtlBuffer::CheckGet(buf, 4);
      v9 = 0.0;
      if ( v14 )
      {
        v15 = buf->m_Get;
        v9 = *&buf->m_Memory.m_pMemory[v15 - buf->m_nOffset];
        if ( (*&buf->m_Byteswap & 1) != 0 )
        {
          LOBYTE(v21[0]) = HIBYTE(v9);
          BYTE1(v21[0]) = BYTE2(v9);
          BYTE2(v21[0]) = BYTE1(v9);
          BYTE3(v21[0]) = LOBYTE(v9);
          v9 = *v21;
        }
        buf->m_Get = v15 + 4;
      }
    }
    dest->y = v9;
    if ( (buf->m_Flags & 1) != 0 )
    {
      nIncrement = 128;
      v10 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
      v11 = 0.0;
      if ( v10 )
      {
        v21[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
        v17 = v21[0];
        v11 = V_strtod(v21[0], v21);
        if ( LODWORD(v21[0]) != v17 )
          buf->m_Get += LODWORD(v21[0]) - v17;
      }
    }
    else
    {
      v18 = CUtlBuffer::CheckGet(buf, 4);
      v11 = 0.0;
      if ( v18 )
      {
        v19 = buf->m_Get;
        v11 = *&buf->m_Memory.m_pMemory[v19 - buf->m_nOffset];
        if ( (*&buf->m_Byteswap & 1) != 0 )
        {
          LOBYTE(v21[0]) = HIBYTE(v11);
          BYTE1(v21[0]) = BYTE2(v11);
          BYTE2(v21[0]) = BYTE1(v11);
          BYTE3(v21[0]) = LOBYTE(v11);
          v11 = *v21;
        }
        buf->m_Get = v19 + 4;
      }
    }
    dest->z = v11;
    return buf->m_Error == 0;
  }
  v13 = CUtlBuffer::Scanf(buf, "%f %f %f", dest, &dest->y, &dest->z);
  result = 0;
  if ( v13 == 3 )
    return buf->m_Error == 0;
  return result;
}


// Serialize  (line 346, @0x0000000003261280, libserver.so)  // inlines: IsValid, LowLevelByteSwap<float>, PeekPut, PutFloat, PutType<float>, PutTypeBin<float>, SwapBufferToTargetEndian<float>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CUtlBuffer::Printf, SerializeFloats
bool __fastcall Serialize(CUtlBuffer *const buf, const Quaternion *const src)
{
  int m_Put; // eax
  float z; // xmm0_4
  float w; // xmm0_4
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned __int8 *v11; // rdx
  unsigned __int8 *v12; // rdx
  unsigned __int8 *v13; // rdx
  unsigned __int8 *v14; // rdx
  vec_t v15; // [rsp+Ch] [rbp-34h]
  float v16; // [rsp+Ch] [rbp-34h]
  float v17; // [rsp+Ch] [rbp-34h]
  vec_t x; // [rsp+1Ch] [rbp-24h]
  vec_t y; // [rsp+20h] [rbp-20h]
  float v20; // [rsp+24h] [rbp-1Ch]
  float v21; // [rsp+28h] [rbp-18h]
  int v22; // [rsp+2Ch] [rbp-14h]
  int v23; // [rsp+2Ch] [rbp-14h]
  int v24; // [rsp+2Ch] [rbp-14h]
  int v25; // [rsp+2Ch] [rbp-14h]

  if ( (buf->m_Flags & 1) != 0 )
  {
    SerializeFloats(buf, 4, &src->x);
    return buf->m_Error == 0;
  }
  x = src->x;
  v15 = src->x;
  if ( CUtlBuffer::CheckPut(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      m_Put = buf->m_Put;
      v11 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
      if ( v11 != 0 )
      {
        LOBYTE(v22) = HIBYTE(x);
        BYTE1(v22) = BYTE2(x);
        BYTE2(v22) = BYTE1(x);
        HIBYTE(v22) = LOBYTE(x);
        *v11 = v22;
        m_Put = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v15;
      m_Put = buf->m_Put;
    }
    buf->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(buf);
  }
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%f", src->y);
  }
  else
  {
    y = src->y;
    if ( CUtlBuffer::CheckPut(buf, 4) )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        v8 = buf->m_Put;
        v12 = &buf->m_Memory.m_pMemory[v8 - buf->m_nOffset];
        if ( v12 != 0 )
        {
          LOBYTE(v23) = HIBYTE(y);
          BYTE1(v23) = BYTE2(y);
          BYTE2(v23) = BYTE1(y);
          HIBYTE(v23) = LOBYTE(y);
          *v12 = v23;
          v8 = buf->m_Put;
        }
      }
      else
      {
        *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = y;
        v8 = buf->m_Put;
      }
      buf->m_Put = v8 + 4;
      CUtlBuffer::AddNullTermination(buf);
      z = src->z;
      if ( (buf->m_Flags & 1) != 0 )
        goto LABEL_9;
      goto LABEL_17;
    }
  }
  z = src->z;
  if ( (buf->m_Flags & 1) != 0 )
  {
LABEL_9:
    CUtlBuffer::Printf(buf, "%f", z);
    goto LABEL_10;
  }
LABEL_17:
  v20 = z;
  v16 = z;
  if ( !CUtlBuffer::CheckPut(buf, 4) )
  {
LABEL_10:
    w = src->w;
    if ( (buf->m_Flags & 1) != 0 )
    {
LABEL_11:
      CUtlBuffer::Printf(buf, "%f", w);
      return buf->m_Error == 0;
    }
    goto LABEL_21;
  }
  if ( (*&buf->m_Byteswap & 1) != 0 )
  {
    v9 = buf->m_Put;
    v13 = &buf->m_Memory.m_pMemory[v9 - buf->m_nOffset];
    if ( v13 != 0 )
    {
      LOBYTE(v24) = HIBYTE(v20);
      BYTE1(v24) = BYTE2(v20);
      BYTE2(v24) = BYTE1(v20);
      HIBYTE(v24) = LOBYTE(v20);
      *v13 = v24;
      v9 = buf->m_Put;
    }
  }
  else
  {
    *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v16;
    v9 = buf->m_Put;
  }
  buf->m_Put = v9 + 4;
  CUtlBuffer::AddNullTermination(buf);
  w = src->w;
  if ( (buf->m_Flags & 1) != 0 )
    goto LABEL_11;
LABEL_21:
  v21 = w;
  v17 = w;
  if ( !CUtlBuffer::CheckPut(buf, 4) )
    return buf->m_Error == 0;
  if ( (*&buf->m_Byteswap & 1) != 0 )
  {
    v10 = buf->m_Put;
    v14 = &buf->m_Memory.m_pMemory[v10 - buf->m_nOffset];
    if ( v14 != 0 )
    {
      LOBYTE(v25) = HIBYTE(v21);
      BYTE1(v25) = BYTE2(v21);
      BYTE2(v25) = BYTE1(v21);
      HIBYTE(v25) = LOBYTE(v21);
      *v14 = v25;
      v10 = buf->m_Put;
    }
  }
  else
  {
    *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v17;
    v10 = buf->m_Put;
  }
  buf->m_Put = v10 + 4;
  CUtlBuffer::AddNullTermination(buf);
  return buf->m_Error == 0;
}


// Unserialize  (line 362, @0x00000000032615e0, libserver.so)  // inlines: GetFloat, GetType<float>, GetTypeBin<float>, GetTypeText<float>, IsValid, LowLevelByteSwap<float>, PeekGet, StringToNumber<float>, SwapBufferToTargetEndian<float>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckGet, CUtlBuffer::CheckArbitraryPeekGet, QuaternionNormalize, CUtlBuffer::Scanf, V_strtod
// strings: "%f %f %f %f"
bool __fastcall Unserialize(CUtlBuffer *const buf, Quaternion *const dest)
{
  bool v4; // al
  vec_t v5; // xmm0_4
  int m_Get; // eax
  bool v7; // zf
  bool v8; // al
  float v9; // xmm0_4
  bool v10; // al
  float v11; // xmm0_4
  bool v12; // al
  float v13; // xmm0_4
  bool result; // al
  int v15; // r13d
  bool v16; // al
  int v17; // eax
  int v18; // r13d
  int v19; // r13d
  int v20; // r13d
  bool v21; // al
  int v22; // eax
  bool v23; // al
  int v24; // eax
  int nIncrement; // [rsp+4h] [rbp-2Ch] BYREF
  _QWORD v26[5]; // [rsp+8h] [rbp-28h] BYREF

  if ( (buf->m_Flags & 1) == 0 )
  {
    v4 = CUtlBuffer::CheckGet(buf, 4);
    v5 = 0.0;
    if ( v4 )
    {
      m_Get = buf->m_Get;
      v7 = (*&buf->m_Byteswap & 1) == 0;
      v5 = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      nIncrement = LODWORD(v5);
      if ( !v7 )
      {
        LOBYTE(v26[0]) = HIBYTE(nIncrement);
        BYTE1(v26[0]) = BYTE2(nIncrement);
        BYTE2(v26[0]) = BYTE1(nIncrement);
        BYTE3(v26[0]) = nIncrement;
        v5 = *v26;
      }
      buf->m_Get = m_Get + 4;
    }
    dest->x = v5;
    if ( (buf->m_Flags & 1) != 0 )
    {
      nIncrement = 128;
      v8 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
      v9 = 0.0;
      if ( v8 )
      {
        v26[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
        v18 = v26[0];
        v9 = V_strtod(v26[0], v26);
        if ( LODWORD(v26[0]) != v18 )
          buf->m_Get += LODWORD(v26[0]) - v18;
      }
    }
    else
    {
      v16 = CUtlBuffer::CheckGet(buf, 4);
      v9 = 0.0;
      if ( v16 )
      {
        v17 = buf->m_Get;
        v9 = *&buf->m_Memory.m_pMemory[v17 - buf->m_nOffset];
        if ( (*&buf->m_Byteswap & 1) != 0 )
        {
          LOBYTE(v26[0]) = HIBYTE(v9);
          BYTE1(v26[0]) = BYTE2(v9);
          BYTE2(v26[0]) = BYTE1(v9);
          BYTE3(v26[0]) = LOBYTE(v9);
          v9 = *v26;
        }
        buf->m_Get = v17 + 4;
      }
    }
    dest->y = v9;
    if ( (buf->m_Flags & 1) != 0 )
    {
      nIncrement = 128;
      v10 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
      v11 = 0.0;
      if ( v10 )
      {
        v26[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
        v20 = v26[0];
        v11 = V_strtod(v26[0], v26);
        if ( LODWORD(v26[0]) != v20 )
          buf->m_Get += LODWORD(v26[0]) - v20;
      }
    }
    else
    {
      v23 = CUtlBuffer::CheckGet(buf, 4);
      v11 = 0.0;
      if ( v23 )
      {
        v24 = buf->m_Get;
        v11 = *&buf->m_Memory.m_pMemory[v24 - buf->m_nOffset];
        if ( (*&buf->m_Byteswap & 1) != 0 )
        {
          LOBYTE(v26[0]) = HIBYTE(v11);
          BYTE1(v26[0]) = BYTE2(v11);
          BYTE2(v26[0]) = BYTE1(v11);
          BYTE3(v26[0]) = LOBYTE(v11);
          v11 = *v26;
        }
        buf->m_Get = v24 + 4;
      }
    }
    dest->z = v11;
    if ( (buf->m_Flags & 1) != 0 )
    {
      nIncrement = 128;
      v12 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
      v13 = 0.0;
      if ( v12 )
      {
        v26[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
        v19 = v26[0];
        v13 = V_strtod(v26[0], v26);
        if ( LODWORD(v26[0]) != v19 )
          buf->m_Get += LODWORD(v26[0]) - v19;
      }
    }
    else
    {
      v21 = CUtlBuffer::CheckGet(buf, 4);
      v13 = 0.0;
      if ( v21 )
      {
        v22 = buf->m_Get;
        v13 = *&buf->m_Memory.m_pMemory[v22 - buf->m_nOffset];
        if ( (*&buf->m_Byteswap & 1) != 0 )
        {
          LOBYTE(v26[0]) = HIBYTE(v13);
          BYTE1(v26[0]) = BYTE2(v13);
          BYTE2(v26[0]) = BYTE1(v13);
          BYTE3(v26[0]) = LOBYTE(v13);
          v13 = *v26;
        }
        buf->m_Get = v22 + 4;
      }
    }
    dest->w = v13;
    QuaternionNormalize(dest);
    return buf->m_Error == 0;
  }
  v15 = CUtlBuffer::Scanf(buf, "%f %f %f %f", dest, &dest->y, &dest->z, &dest->w);
  QuaternionNormalize(dest);
  result = 0;
  if ( v15 == 4 )
    return buf->m_Error == 0;
  return result;
}


// Serialize  (line 380, @0x0000000003261960, libserver.so)  // inlines: IsValid
// calls: CUtlBuffer::Put, CUtlBuffer::Printf, SerializeFloats
bool __fastcall Serialize(CUtlBuffer *const buf, const VMatrix *const src)
{
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "\n");
    SerializeFloats(buf, 4, src);
    CUtlBuffer::Printf(buf, "\n");
    SerializeFloats(buf, 4, src->m[1]);
    CUtlBuffer::Printf(buf, "\n");
    SerializeFloats(buf, 4, src->m[2]);
    CUtlBuffer::Printf(buf, "\n");
    SerializeFloats(buf, 4, src->m[3]);
    CUtlBuffer::Printf(buf, "\n");
  }
  else
  {
    CUtlBuffer::Put(buf, src, 64);
  }
  return buf->m_Error == 0;
}


// Unserialize  (line 401, @0x0000000003261a40, libserver.so)
// calls: CUtlBuffer::Get, CUtlBuffer::Scanf
// strings: "%f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f"
bool __fastcall Unserialize(CUtlBuffer *const buf, VMatrix *const dest)
{
  bool result; // al

  result = 0;
  if ( buf->m_Error == 0 )
  {
    if ( (buf->m_Flags & 1) != 0 )
    {
      return CUtlBuffer::Scanf(
               buf,
               "%f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f",
               dest,
               &dest->m[0][1],
               &dest->m[0][2],
               &dest->m[0][3],
               dest->m[1],
               &dest->m[1][1],
               &dest->m[1][2],
               &dest->m[1][3],
               dest->m[2],
               &dest->m[2][1],
               &dest->m[2][2],
               &dest->m[2][3],
               dest->m[3],
               &dest->m[3][1],
               &dest->m[3][2],
               &dest->m[3][3]) == 16;
    }
    else
    {
      CUtlBuffer::Get(buf, dest, 64);
      return 1;
    }
  }
  return result;
}


// Serialize  (line 424, @0x0000000003261b10, libserver.so)  // inlines: IsValid, PeekPut, PutType<short unsigned int>, PutTypeBin<unsigned char>, PutUnsignedChar, PutUnsignedShort, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::Printf, CUtlBuffer::AddNullTermination
// strings: "%hu", "%d %d %d %d"
bool __fastcall Serialize(CUtlBuffer *const buf, const Color *const src)
{
  unsigned __int8 v4; // r13
  unsigned __int8 v5; // r13
  unsigned __int8 v6; // r13
  unsigned __int8 v7; // r12

  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%d %d %d %d", src->_color[0], src->_color[1], src->_color[2], src->_color[3]);
  }
  else
  {
    v4 = src->_color[0];
    if ( CUtlBuffer::CheckPut(buf, 1) )
    {
      buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v4;
      ++buf->m_Put;
      CUtlBuffer::AddNullTermination(buf);
    }
    v5 = src->_color[1];
    if ( (buf->m_Flags & 1) != 0 )
    {
      CUtlBuffer::Printf(buf, "%hu", v5);
    }
    else if ( CUtlBuffer::CheckPut(buf, 1) )
    {
      buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v5;
      ++buf->m_Put;
      CUtlBuffer::AddNullTermination(buf);
    }
    v6 = src->_color[2];
    if ( (buf->m_Flags & 1) != 0 )
    {
      CUtlBuffer::Printf(buf, "%hu", v6);
    }
    else if ( CUtlBuffer::CheckPut(buf, 1) )
    {
      buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v6;
      ++buf->m_Put;
      CUtlBuffer::AddNullTermination(buf);
    }
    v7 = src->_color[3];
    if ( (buf->m_Flags & 1) != 0 )
    {
      CUtlBuffer::Printf(buf, "%hu", v7);
    }
    else if ( CUtlBuffer::CheckPut(buf, 1) )
    {
      buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v7;
      ++buf->m_Put;
      CUtlBuffer::AddNullTermination(buf);
    }
  }
  return buf->m_Error == 0;
}


// Unserialize  (line 440, @0x0000000003261cb0, libserver.so)  // inlines: GetType<short unsigned int>, GetTypeBin<unsigned char>, GetTypeText<short unsigned int>, GetUnsignedChar, GetUnsignedShort, IsValid, PeekGet, SetColor, StringToNumber<short unsigned int>, operator[]
// calls: CUtlBuffer::CheckGet, CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::Scanf, V_strtoui64
// strings: "%d %d %d %d"
bool __fastcall Unserialize(CUtlBuffer *const buf, Color *const dest)
{
  bool v4; // al
  unsigned __int8 v5; // dl
  bool v6; // al
  unsigned __int8 v7; // dl
  bool v8; // al
  unsigned __int8 v9; // dl
  bool v10; // al
  unsigned __int8 v11; // dl
  int v13; // eax
  bool v14; // dl
  bool v15; // al
  int v16; // edx
  int v17; // eax
  int m_Get; // edx
  int v19; // eax
  bool v20; // al
  int v21; // edx
  int v22; // eax
  bool v23; // al
  int v24; // edx
  int v25; // eax
  int v26; // r13d
  unsigned __int8 v27; // al
  int v28; // r13d
  unsigned __int8 v29; // al
  int v30; // r13d
  unsigned __int8 v31; // al
  int r; // [rsp+Ch] [rbp-34h] BYREF
  int g; // [rsp+10h] [rbp-30h] BYREF
  int b; // [rsp+14h] [rbp-2Ch] BYREF
  unsigned __int8 *a; // [rsp+18h] [rbp-28h] BYREF

  if ( (buf->m_Flags & 1) != 0 )
  {
    r = 0;
    g = 0;
    b = 0;
    LODWORD(a) = 255;
    v13 = CUtlBuffer::Scanf(buf, "%d %d %d %d", &r, &g, &b, &a);
    dest->_color[0] = r;
    dest->_color[1] = g;
    dest->_color[2] = b;
    dest->_color[3] = a;
    v14 = 0;
    if ( v13 == 4 )
      return buf->m_Error == 0;
    return v14;
  }
  else
  {
    v4 = CUtlBuffer::CheckGet(buf, 1);
    v5 = 0;
    if ( v4 )
    {
      m_Get = buf->m_Get;
      v19 = m_Get + 1;
      v5 = buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      buf->m_Get = v19;
    }
    dest->_color[0] = v5;
    if ( (buf->m_Flags & 1) != 0 )
    {
      b = 128;
      v6 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &b);
      v7 = 0;
      if ( v6 )
      {
        a = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
        v26 = a;
        v27 = V_strtoui64(a, &a, 10);
        if ( a != v26 )
          buf->m_Get += a - v26;
        v7 = v27;
      }
    }
    else
    {
      v15 = CUtlBuffer::CheckGet(buf, 1);
      v7 = 0;
      if ( v15 )
      {
        v16 = buf->m_Get;
        v17 = v16 + 1;
        v7 = buf->m_Memory.m_pMemory[v16 - buf->m_nOffset];
        buf->m_Get = v17;
      }
    }
    dest->_color[1] = v7;
    if ( (buf->m_Flags & 1) != 0 )
    {
      b = 128;
      v8 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &b);
      v9 = 0;
      if ( v8 )
      {
        a = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
        v30 = a;
        v31 = V_strtoui64(a, &a, 10);
        if ( a != v30 )
          buf->m_Get += a - v30;
        v9 = v31;
      }
    }
    else
    {
      v23 = CUtlBuffer::CheckGet(buf, 1);
      v9 = 0;
      if ( v23 )
      {
        v24 = buf->m_Get;
        v25 = v24 + 1;
        v9 = buf->m_Memory.m_pMemory[v24 - buf->m_nOffset];
        buf->m_Get = v25;
      }
    }
    dest->_color[2] = v9;
    if ( (buf->m_Flags & 1) != 0 )
    {
      b = 128;
      v10 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &b);
      v11 = 0;
      if ( v10 )
      {
        a = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
        v28 = a;
        v29 = V_strtoui64(a, &a, 10);
        if ( a != v28 )
          buf->m_Get += a - v28;
        v11 = v29;
      }
    }
    else
    {
      v20 = CUtlBuffer::CheckGet(buf, 1);
      v11 = 0;
      if ( v20 )
      {
        v21 = buf->m_Get;
        v22 = v21 + 1;
        v11 = buf->m_Memory.m_pMemory[v21 - buf->m_nOffset];
        buf->m_Get = v22;
      }
    }
    dest->_color[3] = v11;
    return buf->m_Error == 0;
  }
}


// IsValueValid  (line 457, @0x0000000003261f90, libserver.so)
bool __fastcall IsValueValid(const bool *const src)
{
  return 1;
}


// IsValueValid  (line 458, @0x0000000003261fa0, libserver.so)
bool __fastcall IsValueValid(const int *const src)
{
  return 1;
}


// IsValueValid  (line 459, @0x0000000003261fb0, libserver.so)
bool __fastcall IsValueValid(const uint64 *const src)
{
  return 1;
}


// IsValueValid  (line 460, @0x0000000003261fc0, libserver.so)
bool __fastcall IsValueValid(const uint8 *const src)
{
  return 1;
}


// IsValueValid  (line 462, @0x0000000003261fd0, libserver.so)  // inlines: IsFinite
bool __fastcall IsValueValid(const float *const src)
{
  return (*src & 0x7F800000) != 2139095040;
}


// IsValueValid  (line 467, @0x0000000003261ff0, libserver.so)  // inlines: IsFinite, IsValid
bool __fastcall IsValueValid(const Vector2D *const src)
{
  bool result; // al

  result = 0;
  if ( (LODWORD(src->x) & 0x7F800000) != 0x7F800000 )
    return (LODWORD(src->y) & 0x7F800000) != 2139095040;
  return result;
}


// IsValueValid  (line 472, @0x0000000003262020, libserver.so)  // inlines: IsFinite, IsValid
bool __fastcall IsValueValid(const Vector *const src)
{
  bool result; // al

  result = 0;
  if ( (LODWORD(src->x) & 0x7F800000) != 0x7F800000 && (LODWORD(src->y) & 0x7F800000) != 0x7F800000 )
    return (LODWORD(src->z) & 0x7F800000) != 2139095040;
  return result;
}


// IsValueValid  (line 477, @0x0000000003262060, libserver.so)  // inlines: IsFinite, IsValid
bool __fastcall IsValueValid(const Vector4D *const src)
{
  bool result; // al

  result = 0;
  if ( (LODWORD(src->x) & 0x7F800000) != 0x7F800000
    && (LODWORD(src->y) & 0x7F800000) != 0x7F800000
    && (LODWORD(src->z) & 0x7F800000) != 0x7F800000 )
  {
    return (LODWORD(src->w) & 0x7F800000) != 2139095040;
  }
  return result;
}


// IsValueValid  (line 482, @0x00000000032620b0, libserver.so)  // inlines: IsFinite, IsValid
bool __fastcall IsValueValid(const QAngle *const src)
{
  bool result; // al

  result = 0;
  if ( (LODWORD(src->x) & 0x7F800000) != 0x7F800000 && (LODWORD(src->y) & 0x7F800000) != 0x7F800000 )
    return (LODWORD(src->z) & 0x7F800000) != 2139095040;
  return result;
}


// IsValueValid  (line 487, @0x00000000032620f0, libserver.so)  // inlines: IsFinite, IsValid
bool __fastcall IsValueValid(const Quaternion *const src)
{
  bool result; // al

  result = 0;
  if ( (LODWORD(src->x) & 0x7F800000) != 0x7F800000
    && (LODWORD(src->y) & 0x7F800000) != 0x7F800000
    && (LODWORD(src->z) & 0x7F800000) != 0x7F800000 )
  {
    return (LODWORD(src->w) & 0x7F800000) != 2139095040;
  }
  return result;
}


// IsValueValid  (line 492, @0x0000000003262140, libserver.so)
bool __fastcall IsValueValid(const VMatrix *const src)
{
  return 1;
}


// IsValueValid  (line 498, @0x0000000003262150, libserver.so)
bool __fastcall IsValueValid(const Color *const src)
{
  return 1;
}


// IsValueValid  (line 499, @0x0000000003262160, libserver.so)
bool __fastcall IsValueValid(const CUtlBinaryBlock *const src)
{
  return 1;
}


// IsValueValid  (line 500, @0x0000000003262170, libserver.so)
bool __fastcall IsValueValid(const CUtlString *const src)
{
  return 1;
}


// IsValueValid  (line 501, @0x0000000003262180, libserver.so)
bool __fastcall IsValueValid(const CUtlSymbolLarge *const src)
{
  return 1;
}


// Serialize  (line 521, @0x0000000003262190, libserver.so)  // inlines: IsValid, LowLevelByteSwap<int>, PeekPut, PutChar, PutInt, PutTabs, PutType<int>, PutTypeBin<char>, PutTypeBin<int>, SwapBufferToTargetEndian<int>, V_memcpy, WasLastCharacterCR, memcpy, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CUtlBuffer::Put
bool __fastcall Serialize(CUtlBuffer *const buf, const CUtlBinaryBlock *const src)
{
  int m_nActualLength; // ecx
  unsigned __int8 m_Flags; // al
  __int64 v5; // r12
  unsigned __int8 v6; // si
  int v7; // eax
  unsigned __int8 v8; // r14
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // r13
  unsigned __int8 v11; // dl
  int v12; // eax
  int v13; // edi
  int v14; // ebx
  unsigned __int8 v15; // al
  int v16; // edx
  int v17; // edi
  int v18; // ebx
  int v19; // eax
  int m_nOffset; // edi
  int m_nTab; // ebx
  int v22; // edx
  int v24; // edi
  int v25; // ebx
  int m_Put; // eax
  unsigned __int8 *v27; // rdx
  int size; // [rsp+Ch] [rbp-44h]
  int v30; // [rsp+1Ch] [rbp-34h]

  m_nActualLength = src->m_nActualLength;
  size = m_nActualLength;
  m_Flags = buf->m_Flags;
  if ( (m_Flags & 1) == 0 )
  {
    if ( CUtlBuffer::CheckPut(buf, 4) )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        m_Put = buf->m_Put;
        v27 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
        if ( v27 != 0 )
        {
          LOBYTE(v30) = HIBYTE(size);
          BYTE1(v30) = BYTE2(size);
          BYTE2(v30) = BYTE1(size);
          HIBYTE(v30) = size;
          *v27 = v30;
          m_Put = buf->m_Put;
        }
      }
      else
      {
        *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = size;
        m_Put = buf->m_Put;
      }
      buf->m_Put = m_Put + 4;
      CUtlBuffer::AddNullTermination(buf);
    }
    if ( size != 0 )
      CUtlBuffer::Put(buf, src->m_Memory.m_pMemory, size);
    return buf->m_Error == 0;
  }
  v5 = 0;
  v6 = buf->m_Flags;
  if ( m_nActualLength <= 0 )
    goto LABEL_55;
  while ( 1 )
  {
    if ( v5 != 40 * (v5 / 40) )
      goto LABEL_4;
    v19 = buf->m_Put;
    if ( (v6 & 1) != 0 )
    {
      m_nOffset = buf->m_nOffset;
      if ( v19 != m_nOffset && buf->m_Memory.m_pMemory[v19 - 1 - m_nOffset] == 10 )
      {
        if ( (v6 & 0x10) == 0 )
        {
LABEL_39:
          m_nTab = buf->m_nTab;
          goto LABEL_40;
        }
LABEL_48:
        m_nTab = 0;
LABEL_40:
        while ( --m_nTab >= 0 )
        {
          while ( CUtlBuffer::CheckPut(buf, 1) )
          {
            buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 9;
            ++buf->m_Put;
            CUtlBuffer::AddNullTermination(buf);
            if ( --m_nTab < 0 )
              goto LABEL_43;
          }
        }
        goto LABEL_43;
      }
    }
    if ( v19 == 0 )
    {
      if ( (v6 & 0x10) == 0 )
        goto LABEL_39;
      goto LABEL_48;
    }
LABEL_43:
    if ( CUtlBuffer::CheckPut(buf, 1) )
    {
      buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 10;
      ++buf->m_Put;
      CUtlBuffer::AddNullTermination(buf);
    }
    v6 = buf->m_Flags;
LABEL_4:
    v7 = src->m_Memory.m_pMemory[v5] >> 4;
    v8 = v7 + 48;
    v9 = src->m_Memory.m_pMemory[v5] & 0xF;
    v10 = v9 + 48;
    if ( v9 > 9u )
      v10 = v9 + 55;
    v11 = v7 + 55;
    v12 = buf->m_Put;
    if ( (src->m_Memory.m_pMemory[v5] >> 4) > 9u )
      v8 = v11;
    if ( (v6 & 1) != 0 && (v13 = buf->m_nOffset, v12 != v13) && buf->m_Memory.m_pMemory[v12 - 1 - v13] == 10 )
    {
      if ( (v6 & 0x10) == 0 )
        goto LABEL_12;
    }
    else
    {
      if ( v12 != 0 )
        goto LABEL_16;
      if ( (v6 & 0x10) == 0 )
      {
LABEL_12:
        v14 = buf->m_nTab;
        goto LABEL_13;
      }
    }
    v14 = 0;
LABEL_13:
    while ( --v14 >= 0 )
    {
      while ( CUtlBuffer::CheckPut(buf, 1) )
      {
        buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 9;
        ++buf->m_Put;
        CUtlBuffer::AddNullTermination(buf);
        if ( --v14 < 0 )
          goto LABEL_16;
      }
    }
LABEL_16:
    if ( CUtlBuffer::CheckPut(buf, 1) )
    {
      buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v8;
      ++buf->m_Put;
      CUtlBuffer::AddNullTermination(buf);
    }
    v15 = buf->m_Flags;
    v16 = buf->m_Put;
    if ( (v15 & 1) != 0 && (v17 = buf->m_nOffset, v16 != v17) && buf->m_Memory.m_pMemory[v16 - 1 - v17] == 10
      || v16 == 0 )
    {
      v18 = 0;
      if ( (v15 & 0x10) == 0 )
        v18 = buf->m_nTab;
      while ( --v18 >= 0 )
      {
        while ( CUtlBuffer::CheckPut(buf, 1) )
        {
          buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 9;
          ++buf->m_Put;
          CUtlBuffer::AddNullTermination(buf);
          if ( --v18 < 0 )
            goto LABEL_26;
        }
      }
    }
LABEL_26:
    if ( CUtlBuffer::CheckPut(buf, 1) )
    {
      buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v10;
      ++buf->m_Put;
      CUtlBuffer::AddNullTermination(buf);
    }
    if ( size <= ++v5 )
      break;
    v6 = buf->m_Flags;
  }
  m_Flags = buf->m_Flags;
  if ( (m_Flags & 1) == 0 )
  {
    v22 = buf->m_Put;
    goto LABEL_51;
  }
LABEL_55:
  v22 = buf->m_Put;
  v24 = buf->m_nOffset;
  if ( v22 == v24 || buf->m_Memory.m_pMemory[v22 - 1 - v24] != 10 )
  {
LABEL_51:
    if ( v22 == 0 )
      goto LABEL_57;
  }
  else
  {
LABEL_57:
    v25 = 0;
    if ( (m_Flags & 0x10) == 0 )
      v25 = buf->m_nTab;
    while ( --v25 >= 0 )
    {
      if ( CUtlBuffer::CheckPut(buf, 1) )
      {
        buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 9;
        ++buf->m_Put;
        CUtlBuffer::AddNullTermination(buf);
      }
    }
  }
  if ( CUtlBuffer::CheckPut(buf, 1) )
  {
    buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 10;
    ++buf->m_Put;
    CUtlBuffer::AddNullTermination(buf);
  }
  return buf->m_Error == 0;
}


// Unserialize  (line 599, @0x0000000003262600, libserver.so)  // inlines: CountBinaryBytes, GetChar, GetInt, GetType<int>, GetTypeBin<char>, GetTypeBin<int>, HexCharToInt, IsValid, LowLevelByteSwap<int>, PeekGet, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckGet, CUtlBinaryBlock::SetLength, CUtlBuffer::SeekGet, CUtlBuffer::EatWhiteSpace, CUtlBuffer::Get
bool __fastcall Unserialize(CUtlBuffer *const buf, CUtlBinaryBlock *const dest)
{
  int v4; // ebx
  int v5; // edx
  unsigned __int8 *v6; // rax
  unsigned __int8 v7; // si
  unsigned __int8 v8; // al
  int m_nActualLength; // edx
  int v10; // eax
  int v12; // ebx
  int i; // r12d
  __int64 v14; // rbx
  bool v15; // r15
  int m_Get; // eax
  int v17; // edx
  bool v18; // al
  char v19; // si
  char v20; // dl
  int v21; // edx
  unsigned __int8 v22; // si
  char v23; // dl
  int v24; // r9d
  signed __int8 v25; // r15
  unsigned int v26; // edi
  int v27; // esi
  signed __int8 v28; // dl
  char v29; // al
  int v30; // edx
  int v31; // eax
  int v32; // edx
  int v33; // [rsp+8h] [rbp-48h]
  int offset; // [rsp+Ch] [rbp-44h]
  unsigned int offseta; // [rsp+Ch] [rbp-44h]
  char v36; // [rsp+18h] [rbp-38h] BYREF
  int v37; // [rsp+1Ch] [rbp-34h]

  if ( (buf->m_Flags & 1) != 0 )
  {
    v12 = 0;
    offset = buf->m_Get;
    CUtlBuffer::EatWhiteSpace(buf);
    for ( i = buf->m_Get; buf->m_Error == 0; i = buf->m_Get )
    {
      v15 = 1;
      if ( CUtlBuffer::CheckGet(buf, 1) )
      {
        m_Get = buf->m_Get;
        v17 = m_Get + 1;
        LOBYTE(m_Get) = buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
        buf->m_Get = v17;
        v15 = (m_Get - 48) > 9u && ((m_Get & 0xDF) - 65) > 5u;
      }
      v18 = CUtlBuffer::CheckGet(buf, 1);
      v19 = -48;
      v20 = -65;
      if ( v18 )
      {
        v21 = buf->m_Get;
        v22 = buf->m_Memory.m_pMemory[v21 - buf->m_nOffset];
        buf->m_Get = v21 + 1;
        LOBYTE(v21) = v22;
        v19 = v22 - 48;
        v20 = (v21 & 0xDF) - 65;
      }
      if ( v15 || v20 > 5u && v19 > 9u )
        break;
      ++v12;
      CUtlBuffer::EatWhiteSpace(buf);
    }
    CUtlBuffer::SeekGet(buf, CUtlBuffer::SeekType_t::SEEK_HEAD, offset);
    CUtlBuffer::EatWhiteSpace(buf);
    CUtlBinaryBlock::SetLength(dest, v12);
    v14 = 0;
    if ( i > buf->m_Get )
    {
      while ( 1 )
      {
        if ( CUtlBuffer::CheckGet(buf, 1) )
        {
          v32 = buf->m_Get;
          v25 = buf->m_Memory.m_pMemory[v32 - buf->m_nOffset];
          buf->m_Get = v32 + 1;
          v24 = v25;
          offseta = v25 - 48;
        }
        else
        {
          offseta = -48;
          v24 = 0;
          v25 = 0;
        }
        v33 = v24;
        if ( CUtlBuffer::CheckGet(buf, 1) )
        {
          v30 = buf->m_Get;
          v31 = v30 + 1;
          v28 = buf->m_Memory.m_pMemory[v30 - buf->m_nOffset];
          buf->m_Get = v31;
          v27 = v28;
          v26 = v28 - 48;
        }
        else
        {
          v26 = -48;
          v27 = 0;
          v28 = 0;
        }
        v29 = v25 - 48;
        if ( offseta > 9 )
        {
          if ( (v33 - 65) > 5 )
          {
            v29 = v25 - 87;
            if ( (v33 - 97) > 5 )
              v29 = -1;
          }
          else
          {
            v29 = v25 - 55;
          }
        }
        if ( v26 <= 9 )
        {
          v23 = v28 - 48;
        }
        else if ( (v27 - 65) > 5 )
        {
          if ( (v27 - 97) > 5 )
            return 0;
          v23 = v28 - 87;
        }
        else
        {
          v23 = v28 - 55;
        }
        if ( v23 == -1 || v29 == -1 )
          break;
        dest->m_Memory.m_pMemory[v14++] = v23 | (16 * v29);
        CUtlBuffer::EatWhiteSpace(buf);
        if ( buf->m_Get >= i )
          return 1;
      }
      return 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    v4 = 0;
    if ( CUtlBuffer::CheckGet(buf, 4) )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        v5 = buf->m_Get;
        v6 = &buf->m_Memory.m_pMemory[v5 - buf->m_nOffset];
        if ( v6 == 0 )
          v6 = &v36;
        LOBYTE(v37) = v6[3];
        BYTE1(v37) = v6[2];
        v7 = v6[1];
        v8 = *v6;
        BYTE2(v37) = v7;
        HIBYTE(v37) = v8;
        v4 = v37;
      }
      else
      {
        v5 = buf->m_Get;
        v4 = *&buf->m_Memory.m_pMemory[v5 - buf->m_nOffset];
      }
      buf->m_Get = v5 + 4;
    }
    CUtlBinaryBlock::SetLength(dest, v4);
    m_nActualLength = dest->m_nActualLength;
    v10 = 0;
    if ( m_nActualLength != 0 )
    {
      CUtlBuffer::Get(buf, dest->m_Memory.m_pMemory, m_nActualLength);
      v10 = dest->m_nActualLength;
      if ( v10 != v4 )
        goto LABEL_10;
    }
    else if ( v4 != 0 )
    {
LABEL_10:
      CUtlBuffer::SeekGet(buf, CUtlBuffer::SeekType_t::SEEK_CURRENT, v4 - v10);
      return 0;
    }
    return buf->m_Error == 0;
  }
}


// Serialize  (line 648, @0x00000000032629b0, libserver.so)  // inlines: IsValid
// calls: CUtlString::Get, CUtlBuffer::PutDelimitedString
// callers: Serialize
// globals: s_pConv
bool __fastcall Serialize(CUtlBuffer *const buf, const CUtlString *const src)
{
  const char *v3; // rax

  v3 = CUtlString::Get(src);
  CUtlBuffer::PutDelimitedString(buf, s_pConv, v3);
  return buf->m_Error == 0;
}


// Unserialize  (line 654, @0x00000000032629f0, libserver.so)  // inlines: IsValid
// calls: CUtlBuffer::PeekDelimitedStringLength, CUtlString::SetLength, CUtlString::GetForModify, CUtlBuffer::GetDelimitedString
// callers: Unserialize
// globals: s_pConv
bool __fastcall Unserialize(CUtlBuffer *const buf, CUtlString *const dest)
{
  int v4; // r12d
  bool result; // al
  char *v6; // rax

  v4 = CUtlBuffer::PeekDelimitedStringLength(buf, s_pConv, 1);
  result = 0;
  if ( v4 != 0 )
  {
    CUtlString::SetLength(dest, v4 - 1);
    v6 = CUtlString::GetForModify(dest);
    CUtlBuffer::GetDelimitedString(buf, s_pConv, v6, v4);
    return buf->m_Error == 0;
  }
  return result;
}


// Serialize  (line 667, @0x0000000003262a60, libserver.so)  // inlines: IsValid, String
// calls: CUtlBuffer::PutDelimitedString
// globals: s_pConv
bool __fastcall Serialize(CUtlBuffer *const buf, const CUtlSymbolLarge *const src)
{
  const char *m_Id; // rdx

  m_Id = "";
  if ( src->u.m_Id != 0 )
    m_Id = src->u.m_Id;
  CUtlBuffer::PutDelimitedString(buf, s_pConv, m_Id);
  return buf->m_Error == 0;
}


