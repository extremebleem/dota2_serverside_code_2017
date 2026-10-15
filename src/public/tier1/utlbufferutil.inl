
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// Serialize<VecDouble3>  (line 148, @0x000000000320cfb0, libserver.so)  // inlines: IsValid, LowLevelByteSwap<int>, PeekPut, PutChar, PutInt, PutTabs, PutType<int>, PutTypeBin<char>, PutTypeBin<int>, SwapBufferToTargetEndian<int>, V_memcpy, WasLastCharacterCR, memcpy, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, Serialize, CUtlBuffer::PutChar, CUtlBuffer::PutString
// callers: Serialize
bool __fastcall Serialize<VecDouble3>(
        CUtlBuffer *const buf,
        const CUtlVector<VecDouble3,CUtlMemory<VecDouble3,int> > *const src)
{
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v8; // r13
  int i; // r12d
  unsigned __int8 m_Flags; // al
  int m_Put; // ecx
  int m_nOffset; // edi
  int m_nTab; // ebx
  unsigned __int8 *v14; // rcx
  int m_Size; // [rsp+Ch] [rbp-44h]
  int v16; // [rsp+18h] [rbp-38h]
  int v17; // [rsp+1Ch] [rbp-34h]

  m_Size = src->m_Size;
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::PutChar(buf, 10);
    if ( m_Size > 0 )
    {
      v8 = 0;
      for ( i = 0; i != m_Size; ++i )
      {
        Serialize(buf, &src->m_Memory.m_pMemory[v8]);
        if ( s_pUtlBufferUtilArrayDelim != 0 && m_Size - 1 != i )
          CUtlBuffer::PutString(buf, s_pUtlBufferUtilArrayDelim);
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
                goto LABEL_23;
            }
          }
        }
LABEL_23:
        if ( CUtlBuffer::CheckPut(buf, 1) )
        {
          buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 10;
          ++buf->m_Put;
          CUtlBuffer::AddNullTermination(buf);
        }
        ++v8;
      }
    }
  }
  else
  {
    v16 = src->m_Size;
    if ( CUtlBuffer::CheckPut(buf, 4) )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        v4 = buf->m_Put;
        v14 = &buf->m_Memory.m_pMemory[v4 - buf->m_nOffset];
        if ( v14 != 0 )
        {
          LOBYTE(v17) = HIBYTE(v16);
          BYTE1(v17) = BYTE2(v16);
          BYTE2(v17) = BYTE1(v16);
          HIBYTE(v17) = v16;
          *v14 = v17;
          v4 = buf->m_Put;
        }
      }
      else
      {
        *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_Size;
        v4 = buf->m_Put;
      }
      buf->m_Put = v4 + 4;
      CUtlBuffer::AddNullTermination(buf);
    }
    if ( m_Size > 0 )
    {
      v5 = 0;
      do
      {
        v6 = v5;
        v5 += 24;
        Serialize(buf, (src->m_Memory.m_pMemory + v6));
      }
      while ( v5 != 8 * (3LL * (m_Size - 1) + 3) );
    }
  }
  return buf->m_Error == 0;
}


// Serialize<NavGenAreaDebug_t>  (line 148, @0x000000000320d1d0, libserver.so)  // inlines: IsValid, LowLevelByteSwap<int>, PeekPut, PutChar, PutInt, PutTabs, PutType<int>, PutTypeBin<char>, PutTypeBin<int>, SwapBufferToTargetEndian<int>, V_memcpy, WasLastCharacterCR, memcpy, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, Serialize, CUtlBuffer::PutChar, CUtlBuffer::PutString
// callers: Serialize
bool __fastcall Serialize<NavGenAreaDebug_t>(
        CUtlBuffer *const buf,
        const CUtlVector<NavGenAreaDebug_t,CUtlMemory<NavGenAreaDebug_t,int> > *const src)
{
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v8; // r13
  int i; // r12d
  unsigned __int8 m_Flags; // al
  int m_Put; // ecx
  int m_nOffset; // edi
  int m_nTab; // ebx
  unsigned __int8 *v14; // rcx
  int m_Size; // [rsp+Ch] [rbp-44h]
  int v16; // [rsp+18h] [rbp-38h]
  int v17; // [rsp+1Ch] [rbp-34h]

  m_Size = src->m_Size;
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::PutChar(buf, 10);
    if ( m_Size > 0 )
    {
      v8 = 0;
      for ( i = 0; i != m_Size; ++i )
      {
        Serialize(buf, &src->m_Memory.m_pMemory[v8]);
        if ( s_pUtlBufferUtilArrayDelim != 0 && m_Size - 1 != i )
          CUtlBuffer::PutString(buf, s_pUtlBufferUtilArrayDelim);
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
                goto LABEL_23;
            }
          }
        }
LABEL_23:
        if ( CUtlBuffer::CheckPut(buf, 1) )
        {
          buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 10;
          ++buf->m_Put;
          CUtlBuffer::AddNullTermination(buf);
        }
        ++v8;
      }
    }
  }
  else
  {
    v16 = src->m_Size;
    if ( CUtlBuffer::CheckPut(buf, 4) )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        v4 = buf->m_Put;
        v14 = &buf->m_Memory.m_pMemory[v4 - buf->m_nOffset];
        if ( v14 != 0 )
        {
          LOBYTE(v17) = HIBYTE(v16);
          BYTE1(v17) = BYTE2(v16);
          BYTE2(v17) = BYTE1(v16);
          HIBYTE(v17) = v16;
          *v14 = v17;
          v4 = buf->m_Put;
        }
      }
      else
      {
        *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_Size;
        v4 = buf->m_Put;
      }
      buf->m_Put = v4 + 4;
      CUtlBuffer::AddNullTermination(buf);
    }
    if ( m_Size > 0 )
    {
      v5 = 0;
      do
      {
        v6 = v5;
        v5 += 48;
        Serialize(buf, (src->m_Memory.m_pMemory + v6));
      }
      while ( v5 != 16 * (3LL * (m_Size - 1) + 3) );
    }
  }
  return buf->m_Error == 0;
}


// Serialize<NavGenDebugStage_t>  (line 148, @0x000000000320d580, libserver.so)  // inlines: IsValid, LowLevelByteSwap<int>, PeekPut, PutChar, PutInt, PutTabs, PutType<int>, PutTypeBin<char>, PutTypeBin<int>, SwapBufferToTargetEndian<int>, V_memcpy, WasLastCharacterCR, memcpy, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, Serialize, CUtlBuffer::PutChar, CUtlBuffer::PutString
// callers: CNavGenOutput::WriteDebugDataToBuffer
bool __fastcall Serialize<NavGenDebugStage_t>(
        CUtlBuffer *const buf,
        const CUtlVector<NavGenDebugStage_t,CUtlMemory<NavGenDebugStage_t,int> > *const src)
{
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v8; // r13
  int i; // r12d
  unsigned __int8 m_Flags; // al
  int m_Put; // ecx
  int m_nOffset; // edi
  int m_nTab; // ebx
  unsigned __int8 *v14; // rcx
  int m_Size; // [rsp+Ch] [rbp-44h]
  int v16; // [rsp+18h] [rbp-38h]
  int v17; // [rsp+1Ch] [rbp-34h]

  m_Size = src->m_Size;
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::PutChar(buf, 10);
    if ( m_Size > 0 )
    {
      v8 = 0;
      for ( i = 0; i != m_Size; ++i )
      {
        Serialize(buf, &src->m_Memory.m_pMemory[v8]);
        if ( s_pUtlBufferUtilArrayDelim != 0 && m_Size - 1 != i )
          CUtlBuffer::PutString(buf, s_pUtlBufferUtilArrayDelim);
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
                goto LABEL_23;
            }
          }
        }
LABEL_23:
        if ( CUtlBuffer::CheckPut(buf, 1) )
        {
          buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 10;
          ++buf->m_Put;
          CUtlBuffer::AddNullTermination(buf);
        }
        ++v8;
      }
    }
  }
  else
  {
    v16 = src->m_Size;
    if ( CUtlBuffer::CheckPut(buf, 4) )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        v4 = buf->m_Put;
        v14 = &buf->m_Memory.m_pMemory[v4 - buf->m_nOffset];
        if ( v14 != 0 )
        {
          LOBYTE(v17) = HIBYTE(v16);
          BYTE1(v17) = BYTE2(v16);
          BYTE2(v17) = BYTE1(v16);
          HIBYTE(v17) = v16;
          *v14 = v17;
          v4 = buf->m_Put;
        }
      }
      else
      {
        *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_Size;
        v4 = buf->m_Put;
      }
      buf->m_Put = v4 + 4;
      CUtlBuffer::AddNullTermination(buf);
    }
    if ( m_Size > 0 )
    {
      v5 = 0;
      do
      {
        v6 = v5;
        v5 += 56;
        Serialize(buf, (src->m_Memory.m_pMemory + v6));
      }
      while ( v5 != 56 * ((m_Size - 1) + 1LL) );
    }
  }
  return buf->m_Error == 0;
}


// Unserialize<VecDouble3>  (line 194, @0x000000000320dca0, libserver.so)  // inlines: AddToTail, EnsureCapacity, GetInt, GetType<int>, GetTypeBin<int>, GrowMemory, IsValid, LowLevelByteSwap<int>, PeekGet, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlVectorBase<VecDouble3, CUtlMemory<VecDouble3, int> >::RemoveAll, Unserialize, CUtlBuffer::EatWhiteSpace, CUtlMemory<VecDouble3, int>::Grow, CUtlBuffer::CheckGet, memcpy
// callers: Unserialize
bool __fastcall Unserialize<VecDouble3>(
        CUtlBuffer *const buf,
        CUtlVector<VecDouble3,CUtlMemory<VecDouble3,int> > *const dest)
{
  CUtlVectorBase<VecDouble3,CUtlMemory<VecDouble3,int> >::CAllocator *p_m_Memory; // r14
  __int64 m_Size; // r12
  int v6; // eax
  int m_Get; // edx
  unsigned __int8 *v9; // rax
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // al
  int v12; // r12d
  uint32 m_nGrowSize; // eax
  VecDouble3 *v14; // rsi
  __int64 v15; // r14
  unsigned __int64 v16; // r12
  __int64 v17; // r14
  VecDouble3 *v18; // rsi
  int v19; // eax
  VecDouble3 *m_pMemory; // r14
  VecDouble3 *v21; // rax
  char v22; // [rsp+8h] [rbp-38h] BYREF
  int v23; // [rsp+Ch] [rbp-34h]

  p_m_Memory = &dest->m_Memory;
  CUtlVectorBase<VecDouble3,CUtlMemory<VecDouble3,int>>::RemoveAll(dest);
  if ( (buf->m_Flags & 1) != 0 )
  {
    while ( 1 )
    {
      CUtlBuffer::EatWhiteSpace(buf);
      if ( buf->m_Error != 0 )
        break;
      m_Size = dest->m_Size;
      v6 = dest->m_Size;
      if ( m_Size == dest->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<VecDouble3,int>::Grow(p_m_Memory, 1);
        v6 = dest->m_Size;
      }
      dest->m_Size = v6 + 1;
      if ( !Unserialize(buf, &dest->m_Memory.m_pMemory[m_Size]) )
        return 0;
    }
    return 1;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(buf, 4) )
      return buf->m_Error == 0;
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      m_Get = buf->m_Get;
      v9 = &buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      if ( v9 == 0 )
        v9 = &v22;
      LOBYTE(v23) = v9[3];
      BYTE1(v23) = v9[2];
      v10 = v9[1];
      v11 = *v9;
      BYTE2(v23) = v10;
      HIBYTE(v23) = v11;
      v12 = v23;
    }
    else
    {
      m_Get = buf->m_Get;
      v12 = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
    }
    buf->m_Get = m_Get + 4;
    if ( v12 == 0 )
      return buf->m_Error == 0;
    if ( v12 > dest->m_Memory.m_nAllocationCount )
    {
      m_nGrowSize = dest->m_Memory.m_nGrowSize;
      if ( (m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (m_nGrowSize & 0xC0000000) != 0 )
        {
          m_pMemory = dest->m_Memory.m_pMemory;
          v21 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v12);
          dest->m_Memory.m_pMemory = v21;
          if ( m_pMemory != 0 )
            memcpy(v21, m_pMemory, 24LL * dest->m_Memory.m_nAllocationCount);
          dest->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          v14 = dest->m_Memory.m_pMemory;
          if ( v14 != 0 )
            dest->m_Memory.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v14, 24LL * v12);
          else
            dest->m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v12);
        }
        dest->m_Memory.m_nAllocationCount = v12;
      }
    }
    if ( v12 > 0 )
    {
      v15 = 3LL * (v12 - 1) + 3;
      v16 = 0;
      v17 = 8 * v15;
      while ( 1 )
      {
        v19 = dest->m_Size;
        if ( dest->m_Size == dest->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<VecDouble3,int>::Grow(&dest->m_Memory, 1);
          v19 = dest->m_Size;
        }
        v18 = &dest->m_Memory.m_pMemory[v16 / 0x18];
        dest->m_Size = v19 + 1;
        if ( !Unserialize(buf, v18) )
          break;
        v16 += 24LL;
        if ( v16 == v17 )
          return buf->m_Error == 0;
      }
      return 0;
    }
    else
    {
      return buf->m_Error == 0;
    }
  }
}


// Unserialize<NavGenAreaDebug_t>  (line 194, @0x000000000320e020, libserver.so)  // inlines: AddToTail, Construct<NavGenAreaDebug_t>, Element, EnsureCapacity, GetInt, GetType<int>, GetTypeBin<int>, GrowMemory, IsValid, LowLevelByteSwap<int>, NavGenAreaDebug_t, PeekGet, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlVectorBase<NavGenAreaDebug_t, CUtlMemory<NavGenAreaDebug_t, int> >::RemoveAll, Unserialize, CUtlBuffer::EatWhiteSpace, CUtlMemory<NavGenAreaDebug_t, int>::Grow, CUtlBuffer::CheckGet, memcpy
// callers: Unserialize
bool __fastcall Unserialize<NavGenAreaDebug_t>(
        CUtlBuffer *const buf,
        CUtlVector<NavGenAreaDebug_t,CUtlMemory<NavGenAreaDebug_t,int> > *const dest)
{
  CUtlVectorBase<NavGenAreaDebug_t,CUtlMemory<NavGenAreaDebug_t,int> >::CAllocator *p_m_Memory; // r14
  NavGenAreaDebug_t *v5; // rax
  __int64 m_Size; // r12
  int v7; // eax
  int m_Get; // edx
  unsigned __int8 *v10; // rax
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // al
  int v13; // r12d
  uint32 m_nGrowSize; // eax
  NavGenAreaDebug_t *v15; // rsi
  unsigned __int64 v16; // r14
  __int64 v17; // r12
  NavGenAreaDebug_t *v18; // rsi
  NavGenAreaDebug_t *v19; // rax
  __int64 v20; // r15
  int v21; // eax
  NavGenAreaDebug_t *m_pMemory; // r14
  NavGenAreaDebug_t *v23; // rax
  char v24; // [rsp+18h] [rbp-38h] BYREF
  int v25; // [rsp+1Ch] [rbp-34h]

  p_m_Memory = &dest->m_Memory;
  CUtlVectorBase<NavGenAreaDebug_t,CUtlMemory<NavGenAreaDebug_t,int>>::RemoveAll(dest);
  if ( (buf->m_Flags & 1) != 0 )
  {
    while ( 1 )
    {
      CUtlBuffer::EatWhiteSpace(buf);
      if ( buf->m_Error != 0 )
        break;
      m_Size = dest->m_Size;
      v7 = dest->m_Size;
      if ( m_Size == dest->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<NavGenAreaDebug_t,int>::Grow(p_m_Memory, 1);
        v7 = dest->m_Size;
      }
      dest->m_Size = v7 + 1;
      v5 = &dest->m_Memory.m_pMemory[m_Size];
      if ( v5 != 0 )
      {
        v5->m_nVerts = 0;
        if ( !Unserialize(buf, &dest->m_Memory.m_pMemory[m_Size]) )
          return 0;
      }
      else if ( !Unserialize(buf, 0) )
      {
        return 0;
      }
    }
    return 1;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(buf, 4) )
      return buf->m_Error == 0;
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      m_Get = buf->m_Get;
      v10 = &buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      if ( v10 == 0 )
        v10 = &v24;
      LOBYTE(v25) = v10[3];
      BYTE1(v25) = v10[2];
      v11 = v10[1];
      v12 = *v10;
      BYTE2(v25) = v11;
      HIBYTE(v25) = v12;
      v13 = v25;
    }
    else
    {
      m_Get = buf->m_Get;
      v13 = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
    }
    buf->m_Get = m_Get + 4;
    if ( v13 == 0 )
      return buf->m_Error == 0;
    if ( dest->m_Memory.m_nAllocationCount < v13 )
    {
      m_nGrowSize = dest->m_Memory.m_nGrowSize;
      if ( (m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (m_nGrowSize & 0xC0000000) != 0 )
        {
          m_pMemory = dest->m_Memory.m_pMemory;
          v23 = (**g_pMemAlloc)(g_pMemAlloc, 48LL * v13);
          dest->m_Memory.m_pMemory = v23;
          if ( m_pMemory != 0 )
            memcpy(v23, m_pMemory, 48LL * dest->m_Memory.m_nAllocationCount);
          dest->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          v15 = dest->m_Memory.m_pMemory;
          if ( v15 != 0 )
            dest->m_Memory.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v15, 48LL * v13);
          else
            dest->m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 48LL * v13);
        }
        dest->m_Memory.m_nAllocationCount = v13;
      }
    }
    if ( v13 > 0 )
    {
      v16 = 0;
      v17 = 16 * (3LL * (v13 - 1) + 3);
      while ( 1 )
      {
        v20 = dest->m_Size;
        v21 = dest->m_Size;
        if ( v20 == dest->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<NavGenAreaDebug_t,int>::Grow(&dest->m_Memory, 1);
          v21 = dest->m_Size;
        }
        v18 = dest->m_Memory.m_pMemory;
        dest->m_Size = v21 + 1;
        v19 = &v18[v20];
        if ( v19 != 0 )
        {
          v19->m_nVerts = 0;
          v18 = dest->m_Memory.m_pMemory;
        }
        if ( !Unserialize(buf, &v18[v16 / 0x30]) )
          break;
        v16 += 48LL;
        if ( v16 == v17 )
          return buf->m_Error == 0;
      }
      return 0;
    }
    else
    {
      return buf->m_Error == 0;
    }
  }
}


// Unserialize<NavGenDebugStage_t>  (line 194, @0x000000000320e400, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Construct<NavGenDebugStage_t>, Element, EnsureCapacity, GetInt, GetType<int>, GetTypeBin<int>, GrowMemory, IsValid, LowLevelByteSwap<int>, NavGenDebugStage_t, PeekGet, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlVectorBase<NavGenDebugStage_t, CUtlMemory<NavGenDebugStage_t, int> >::RemoveAll, Unserialize, CUtlBuffer::EatWhiteSpace, CUtlMemory<NavGenDebugStage_t, int>::Grow, CUtlBuffer::CheckGet, memcpy
// callers: CNavGenOutput::LoadDebugDataFromBuffer
bool __fastcall Unserialize<NavGenDebugStage_t>(
        CUtlBuffer *const buf,
        CUtlVector<NavGenDebugStage_t,CUtlMemory<NavGenDebugStage_t,int> > *const dest)
{
  CUtlVectorBase<NavGenDebugStage_t,CUtlMemory<NavGenDebugStage_t,int> >::CAllocator *p_m_Memory; // r13
  NavGenDebugStage_t *v5; // rsi
  NavGenDebugStage_t *v6; // rax
  int m_Size; // r14d
  int v8; // eax
  int m_Get; // edx
  unsigned __int8 *v11; // rax
  unsigned __int8 v12; // cl
  unsigned __int8 v13; // al
  int v14; // r13d
  uint32 m_nGrowSize; // eax
  NavGenDebugStage_t *v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // r13
  NavGenDebugStage_t *v20; // rsi
  NavGenDebugStage_t *v21; // rax
  int v22; // r15d
  int v23; // eax
  NavGenDebugStage_t *m_pMemory; // r14
  NavGenDebugStage_t *v25; // rax
  char v26; // [rsp+18h] [rbp-38h] BYREF
  int v27; // [rsp+1Ch] [rbp-34h]

  p_m_Memory = &dest->m_Memory;
  CUtlVectorBase<NavGenDebugStage_t,CUtlMemory<NavGenDebugStage_t,int>>::RemoveAll(dest);
  if ( (buf->m_Flags & 1) != 0 )
  {
    while ( 1 )
    {
      CUtlBuffer::EatWhiteSpace(buf);
      if ( buf->m_Error != 0 )
        break;
      m_Size = dest->m_Size;
      v8 = dest->m_Size;
      if ( dest->m_Size == dest->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<NavGenDebugStage_t,int>::Grow(p_m_Memory, 1);
        v8 = dest->m_Size;
      }
      v5 = 0;
      dest->m_Size = v8 + 1;
      v6 = &dest->m_Memory.m_pMemory[m_Size];
      if ( v6 != 0 )
      {
        v6->m_Desc.m_pString = 0;
        v6->m_verts.m_Size = 0;
        v6->m_verts.m_Memory.m_pMemory = 0;
        v6->m_verts.m_Memory.m_nAllocationCount = 0;
        v6->m_verts.m_Memory.m_nGrowSize = 0;
        v6->m_Areas.m_Size = 0;
        v6->m_Areas.m_Memory.m_pMemory = 0;
        v6->m_Areas.m_Memory.m_nAllocationCount = 0;
        v6->m_Areas.m_Memory.m_nGrowSize = 0;
        v5 = &dest->m_Memory.m_pMemory[m_Size];
      }
      if ( !Unserialize(buf, v5) )
        return 0;
    }
    return 1;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(buf, 4) )
      return buf->m_Error == 0;
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      m_Get = buf->m_Get;
      v11 = &buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      if ( v11 == 0 )
        v11 = &v26;
      LOBYTE(v27) = v11[3];
      BYTE1(v27) = v11[2];
      v12 = v11[1];
      v13 = *v11;
      BYTE2(v27) = v12;
      HIBYTE(v27) = v13;
      v14 = v27;
    }
    else
    {
      m_Get = buf->m_Get;
      v14 = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
    }
    buf->m_Get = m_Get + 4;
    if ( v14 == 0 )
      return buf->m_Error == 0;
    if ( dest->m_Memory.m_nAllocationCount < v14 )
    {
      m_nGrowSize = dest->m_Memory.m_nGrowSize;
      if ( (m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (m_nGrowSize & 0xC0000000) != 0 )
        {
          m_pMemory = dest->m_Memory.m_pMemory;
          v25 = (**g_pMemAlloc)(g_pMemAlloc, 56LL * v14);
          dest->m_Memory.m_pMemory = v25;
          if ( m_pMemory != 0 )
            memcpy(v25, m_pMemory, 56LL * dest->m_Memory.m_nAllocationCount);
          dest->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          v16 = dest->m_Memory.m_pMemory;
          v17 = *g_pMemAlloc;
          if ( v16 != 0 )
            dest->m_Memory.m_pMemory = (*(v17 + 8))(g_pMemAlloc, v16, 56LL * v14);
          else
            dest->m_Memory.m_pMemory = (*v17)(g_pMemAlloc, 56LL * v14);
        }
        dest->m_Memory.m_nAllocationCount = v14;
      }
    }
    if ( v14 > 0 )
    {
      v18 = 0;
      v19 = 56 * ((v14 - 1) + 1LL);
      while ( 1 )
      {
        v22 = dest->m_Size;
        v23 = dest->m_Size;
        if ( dest->m_Size == dest->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<NavGenDebugStage_t,int>::Grow(&dest->m_Memory, 1);
          v23 = dest->m_Size;
        }
        v20 = dest->m_Memory.m_pMemory;
        dest->m_Size = v23 + 1;
        v21 = &v20[v22];
        if ( v21 != 0 )
        {
          v21->m_Desc.m_pString = 0;
          v21->m_verts.m_Size = 0;
          v21->m_verts.m_Memory.m_pMemory = 0;
          v21->m_verts.m_Memory.m_nAllocationCount = 0;
          v21->m_verts.m_Memory.m_nGrowSize = 0;
          v21->m_Areas.m_Size = 0;
          v21->m_Areas.m_Memory.m_pMemory = 0;
          v21->m_Areas.m_Memory.m_nAllocationCount = 0;
          v21->m_Areas.m_Memory.m_nGrowSize = 0;
          v20 = dest->m_Memory.m_pMemory;
        }
        if ( !Unserialize(buf, &v20[v18 / 0x38]) )
          break;
        v18 += 56LL;
        if ( v18 == v19 )
          return buf->m_Error == 0;
      }
      return 0;
    }
    else
    {
      return buf->m_Error == 0;
    }
  }
}


