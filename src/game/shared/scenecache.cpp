
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSceneCache::CSceneCache  (line 20, @0x0000000002388310, libserver.so)  // inlines: CUtlMemory, CUtlSortVector, CUtlVector, CUtlVectorBase
void __fastcall CSceneCache::CSceneCache(CSceneCache *const this)
{
  this->_vptr_IBaseCacheInfo = off_40A6090;  // vptr: CSceneCache
  this->sounds.m_Size = 0;
  this->sounds.m_Memory.m_pMemory = 0;
  this->sounds.m_Memory.m_nAllocationCount = 0;
  this->sounds.m_Memory.m_nGrowSize = 0;
  this->sounds.m_pLessContext = 0;
  this->sounds.m_bNeedsSort = 0;
  this->msecs = 0;
}


// CSceneCache::GetSoundCount  (line 31, @0x0000000002388350, libserver.so)
int __fastcall CSceneCache::GetSoundCount(const CSceneCache *const this)
{
  return this->sounds.m_Size;
}


// CSceneCache::GetSoundName  (line 36, @0x0000000002388360, libserver.so)  // inlines: operator[]
// callers: CSceneCache::Save
const char *__fastcall CSceneCache::GetSoundName(CSceneCache *const this, int index)
{
  return (*(*(soundopsystem + 1) + 16LL))(soundopsystem + 8, this->sounds.m_Memory.m_pMemory[index]);
}


// CSceneCache::Save  (line 41, @0x0000000002388390, libserver.so)  // inlines: LowLevelByteSwap<short int>, LowLevelByteSwap<unsigned int>, PeekPut, PutShort, PutType<short int>, PutType<unsigned int>, PutTypeBin<short int>, PutTypeBin<unsigned int>, PutUnsignedInt, SwapBufferToTargetEndian<short int>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::Printf, CSceneCache::GetSoundName, CUtlBuffer::PutString, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// strings: "%hd"
void __fastcall CSceneCache::Save(CSceneCache *const this, CUtlBuffer *const buf)
{
  unsigned int msecs; // ebx
  int m_Size; // r14d
  int v6; // ebx
  int v7; // esi
  const char *SoundName; // rax
  int m_Put; // eax
  int v10; // eax
  unsigned __int8 *v11; // rdx
  unsigned __int8 *v12; // rdx
  __int16 v13; // [rsp+Ch] [rbp-24h]
  int v14; // [rsp+Ch] [rbp-24h]

  msecs = this->msecs;
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%u", msecs);
  }
  else if ( CUtlBuffer::CheckPut(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      m_Put = buf->m_Put;
      v12 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
      if ( v12 != 0 )
      {
        LOBYTE(v14) = HIBYTE(msecs);
        BYTE1(v14) = BYTE2(msecs);
        BYTE2(v14) = BYTE1(msecs);
        HIBYTE(v14) = msecs;
        *v12 = v14;
        m_Put = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = msecs;
      m_Put = buf->m_Put;
    }
    buf->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(buf);
    m_Size = this->sounds.m_Size;
    if ( (buf->m_Flags & 1) != 0 )
      goto LABEL_4;
    goto LABEL_12;
  }
  m_Size = this->sounds.m_Size;
  if ( (buf->m_Flags & 1) != 0 )
  {
LABEL_4:
    CUtlBuffer::Printf(buf, "%hd", m_Size);
    goto LABEL_5;
  }
LABEL_12:
  if ( CUtlBuffer::CheckPut(buf, 2) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      v10 = buf->m_Put;
      v11 = &buf->m_Memory.m_pMemory[v10 - buf->m_nOffset];
      if ( v11 != 0 )
      {
        LOBYTE(v13) = BYTE1(m_Size);
        HIBYTE(v13) = m_Size;
        *v11 = v13;
        v10 = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_Size;
      v10 = buf->m_Put;
    }
    buf->m_Put = v10 + 2;
    CUtlBuffer::AddNullTermination(buf);
  }
LABEL_5:
  v6 = 0;
  while ( v6 != m_Size )
  {
    v7 = v6++;
    SoundName = CSceneCache::GetSoundName(this, v7);
    CUtlBuffer::PutString(buf, SoundName);
  }
}


// CSceneCache::Restore  (line 56, @0x000000000239f220, libserver.so)  // inlines: GetShort, GetType<short int>, GetType<unsigned int>, GetTypeBin<short int>, GetTypeBin<unsigned int>, GetTypeText<short int>, GetTypeText<unsigned int>, GetUnsignedInt, LowLevelByteSwap<short int>, LowLevelByteSwap<unsigned int>, PeekGet, StringToNumber<short int>, StringToNumber<unsigned int>, SwapBufferToTargetEndian<short int>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, V_strtoi64, CUtlBuffer::GetString, CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > >::Find<unsigned int>, V_strtoui64, CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > >::Insert, CUtlBuffer::CheckGet, __stack_chk_fail
void __fastcall CSceneCache::Restore(CSceneCache *const this, CUtlBuffer *const buf)
{
  bool v3; // al
  __int64 v4; // rdx
  int v5; // ebx
  unsigned __int16 v6; // ax
  int v7; // r14d
  int v8; // ebx
  int v9; // ebx
  int v10; // eax
  bool v11; // al
  int m_Get; // ecx
  unsigned __int8 *v13; // rax
  unsigned __int8 *v14; // rdx
  CUtlSortVector<unsigned int,CUtlSortVectorDefaultLess<unsigned int>,CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > > *thisb; // [rsp+8h] [rbp-258h]
  int v17; // [rsp+10h] [rbp-250h] BYREF
  int nIncrement; // [rsp+14h] [rbp-24Ch] BYREF
  unsigned __int8 *idx; // [rsp+18h] [rbp-248h] BYREF
  char soundname[520]; // [rsp+20h] [rbp-240h] BYREF
  unsigned __int64 v21; // [rsp+228h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( (buf->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v3 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
    v4 = 0;
    if ( v3 )
    {
      LOBYTE(v4) = 10;
      idx = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
      v9 = idx;
      v17 = V_strtoui64(idx, &idx, v4);
      LODWORD(v4) = v17;
      if ( idx != v9 )
        buf->m_Get += idx - v9;
    }
  }
  else
  {
    v11 = CUtlBuffer::CheckGet(buf, 4);
    LODWORD(v4) = 0;
    if ( v11 )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        m_Get = buf->m_Get;
        v13 = &buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
        if ( v13 == 0 )
          v13 = &v17;
        LODWORD(idx) = v17;
        LOBYTE(idx) = v13[3];
        BYTE1(idx) = v13[2];
        BYTE2(idx) = v13[1];
        BYTE3(idx) = *v13;
        LODWORD(v4) = idx;
      }
      else
      {
        m_Get = buf->m_Get;
        LODWORD(v4) = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      }
      buf->m_Get = m_Get + 4;
    }
  }
  this->msecs = v4;
  if ( (buf->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement) )
      return;
    idx = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
    v5 = idx;
    v6 = V_strtoi64(idx, &idx, 10);
    LOWORD(v17) = v6;
    if ( idx != v5 )
      buf->m_Get += idx - v5;
    v7 = v6;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(buf, 2) )
      return;
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      v10 = buf->m_Get;
      v14 = &buf->m_Memory.m_pMemory[v10 - buf->m_nOffset];
      if ( v14 == 0 )
        v14 = &v17;
      LOWORD(idx) = v17;
      LOBYTE(idx) = v14[1];
      BYTE1(idx) = *v14;
      v7 = idx;
    }
    else
    {
      v10 = buf->m_Get;
      v7 = *&buf->m_Memory.m_pMemory[v10 - buf->m_nOffset];
    }
    buf->m_Get = v10 + 2;
  }
  if ( v7 != 0 )
  {
    v8 = 0;
    thisb = &this->sounds;
    do
    {
      CUtlBuffer::GetString(buf, soundname, 512);
      LODWORD(idx) = (**(soundopsystem + 1))(soundopsystem + 8, soundname);
      if ( idx != -1
        && CUtlSortVector<unsigned int,CUtlSortVectorDefaultLess<unsigned int>,CUtlVector<unsigned int,CUtlMemory<unsigned int,int>>>::Find<unsigned int>(
             thisb,
             &idx) == -1 )
      {
        CUtlSortVector<unsigned int,CUtlSortVectorDefaultLess<unsigned int>,CUtlVector<unsigned int,CUtlMemory<unsigned int,int>>>::Insert(
          thisb,
          &idx);
      }
      ++v8;
    }
    while ( v8 != v7 );
  }
}


// CSceneCache::PrecacheSceneEvent  (line 85, @0x000000000239f050, libserver.so)
// calls: CChoreoEvent::GetType, CChoreoEvent::GetParameters, CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > >::Insert, CChoreoEvent::GetCloseCaptionType, CChoreoEvent::GetPlaybackCloseCaptionToken, CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > >::Find<unsigned int>, __stack_chk_fail
// callers: CSceneCache::Rebuild
void __fastcall CSceneCache::PrecacheSceneEvent(
        CChoreoEvent *event,
        CUtlSortVector<unsigned int,CUtlSortVectorDefaultLess<unsigned int>,CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > > *const soundlist)
{
  __int64 (__fastcall *v4)(char *, const char *); // r14
  const char *Parameters; // rax
  HSOUNDEVENTHASH idx; // [rsp+Ch] [rbp-74h] BYREF
  char tok[72]; // [rsp+10h] [rbp-70h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  if ( event != 0 && CChoreoEvent::GetType(event) == SPEAK )
  {
    v4 = **(soundopsystem + 1);
    Parameters = CChoreoEvent::GetParameters(event);
    idx = v4(soundopsystem + 8, Parameters);
    if ( idx != -1 )
      CUtlSortVector<unsigned int,CUtlSortVectorDefaultLess<unsigned int>,CUtlVector<unsigned int,CUtlMemory<unsigned int,int>>>::Insert(
        soundlist,
        &idx);
    if ( CChoreoEvent::GetCloseCaptionType(event) == CC_MASTER
      && CChoreoEvent::GetPlaybackCloseCaptionToken(event, tok, 64) )
    {
      idx = (**(soundopsystem + 1))(soundopsystem + 8, tok);
      if ( idx != -1
        && CUtlSortVector<unsigned int,CUtlSortVectorDefaultLess<unsigned int>,CUtlVector<unsigned int,CUtlMemory<unsigned int,int>>>::Find<unsigned int>(
             soundlist,
             &idx) == -1 )
      {
        CUtlSortVector<unsigned int,CUtlSortVectorDefaultLess<unsigned int>,CUtlVector<unsigned int,CUtlMemory<unsigned int,int>>>::Insert(
          soundlist,
          &idx);
      }
    }
  }
}


// CSceneCache::Rebuild  (line 114, @0x000000000239f160, libserver.so)  // inlines: BlockingLoadScene, RemoveAll
// calls: CSceneEntity::LoadScene, CChoreoScene::GetNumEvents, CChoreoScene::GetEvent, CSceneCache::PrecacheSceneEvent, CChoreoScene::FindStopTime
void __fastcall CSceneCache::Rebuild(CSceneCache *const this, const char *filename)
{
  CChoreoScene *Scene; // rax
  const CChoreoScene *v4; // r12
  int v5; // ebx
  int NumEvents; // r13d
  int v7; // esi
  CChoreoEvent *Event; // rax

  this->msecs = 0;
  this->sounds.m_Size = 0;
  Scene = CSceneEntity::LoadScene(filename, 0);
  v4 = Scene;
  if ( Scene != 0 )
  {
    v5 = 0;
    NumEvents = CChoreoScene::GetNumEvents(Scene);
    if ( NumEvents > 0 )
    {
      do
      {
        v7 = v5++;
        Event = CChoreoScene::GetEvent(v4, v7);
        CSceneCache::PrecacheSceneEvent(Event, &this->sounds);
      }
      while ( v5 != NumEvents );
    }
    this->msecs = ((CChoreoScene::FindStopTime(v4) * 1000.0) + 0.5);
    (*(v4->_vptr_ICurveDataAccessor + 5))(v4);
  }
}


