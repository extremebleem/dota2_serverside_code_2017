
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_choreoactor.cpp  (line 0, @0x0000000001a67740, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_choreoactor_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CChoreoActor::CChoreoActor  (line 18, @0x0000000003073390, libserver.so)  // inlines: CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Purge, RemoveAll, SetName, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::operator=, CUtlString::FreeMemoryBlock, _Unwind_Resume, CUtlMemory<CChoreoChannel*, int>::Purge
// callers: CChoreoScene::AllocActor
// globals: CChoreoObjectBase::s_nNextChoreoObjectHandle
void __fastcall CChoreoActor::CChoreoActor(CChoreoActor *const this, const char *name)
{
  ChoreoObjectHandle_t v2; // rax

  this->_vptr_CChoreoObjectBase = off_47C2810;
  v2 = CChoreoObjectBase::s_nNextChoreoObjectHandle;
  this->m_szName.m_pString = 0;
  this->m_szFacePoserModelName.m_pString = 0;
  this->m_Channels.m_Size = 0;
  this->m_Channels.m_Memory.m_pMemory = 0;
  this->m_Channels.m_Memory.m_nAllocationCount = 0;
  this->m_Channels.m_Memory.m_nGrowSize = 0;
  this->m_bActive = 1;
  this->m_bMarkedForSave = 0;
  CChoreoObjectBase::s_nNextChoreoObjectHandle = v2 + 1;
  this->m_hChoreoObjectHandle = v2;
  if ( name != 0 )
    CUtlString::operator=(&this->m_szName, name);
}


// CChoreoActor::operator=  (line 30, @0x0000000003073d70, libserver.so)  // inlines: AddChannel, AddToTail, CopyConstruct<CChoreoChannel*>, Element, GrowMemory, operator[]
// calls: CUtlString::operator=, operator new, CChoreoChannel::CChoreoChannel, CChoreoChannel::SetActor, CChoreoChannel::operator=, CUtlMemory<CChoreoChannel*, int>::Grow, operator delete, _Unwind_Resume
// callers: CChoreoScene::Merge, CChoreoScene::operator=
CChoreoActor *__fastcall CChoreoActor::operator=(CChoreoActor *const this, const CChoreoActor *const src)
{
  CUtlString *p_m_szName; // rsi
  __int64 v4; // r13
  CUtlString *v6; // rdi
  CChoreoChannel **v7; // rax
  const CChoreoChannel *v8; // r15
  CChoreoChannel *v9; // r12
  __int64 m_Size; // r15
  int v11; // eax

  p_m_szName = &src->m_szName;
  v4 = 0;
  v6 = &this->m_szName;
  v6[-1].m_pString = p_m_szName[-1].m_pString;
  LOBYTE(v6[5].m_pString) = p_m_szName[5].m_pString;
  CUtlString::operator=(v6, p_m_szName);
  CUtlString::operator=(&this->m_szFacePoserModelName, &src->m_szFacePoserModelName);
  if ( src->m_Channels.m_Size > 0 )
  {
    do
    {
      v8 = src->m_Channels.m_Memory.m_pMemory[v4];
      v9 = operator new(0x40u);
      CChoreoChannel::CChoreoChannel(v9, 0);
      CChoreoChannel::SetActor(v9, this);
      CChoreoChannel::operator=(v9, v8);
      m_Size = this->m_Channels.m_Size;
      v11 = this->m_Channels.m_Size;
      if ( m_Size == this->m_Channels.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CChoreoChannel *,int>::Grow(&this->m_Channels.m_Memory, 1);
        v11 = this->m_Channels.m_Size;
      }
      this->m_Channels.m_Size = v11 + 1;
      v7 = &this->m_Channels.m_Memory.m_pMemory[m_Size];
      if ( v7 != 0 )
        *v7 = v9;
      ++v4;
    }
    while ( src->m_Channels.m_Size > v4 );
  }
  return this;
}


// CChoreoActor::SetName  (line 52, @0x0000000003073470, libserver.so)
// calls: CUtlString::operator=
// callers: CSceneEntity::GenerateSceneForSound, CChoreoScene::ParseActor
void __fastcall CChoreoActor::SetName(CChoreoActor *const this, const char *name)
{
  CUtlString::operator=(&this->m_szName, name);
}


// CChoreoActor::GetName  (line 57, @0x0000000003073480, libserver.so)  // inlines: String
// calls: CUtlString::Get
// callers: CBaseFlex::RequestStartSequenceSceneEvent, CBaseFlex::RequestStartGestureSceneEvent, CBaseFlex::HandleStartSequenceSceneEvent, CBaseFlex::HandleStartGestureSceneEvent, CSceneEntity::CheckEvent, CSceneEntity::CheckActors, CSceneEntity::StartEvent, CSceneEntity::DispatchStartSpeak, CSceneEntity::FindNamedActor, CChoreoEvent::GetDescription, CChoreoScene::PrintActor, CChoreoScene::FindActor (14 total)
const char *__fastcall CChoreoActor::GetName(const CChoreoActor *const this)
{
  return CUtlString::Get(&this->m_szName);
}


// CChoreoActor::GetNumChannels  (line 62, @0x0000000003073490, libserver.so)
// callers: CChoreoScene::PrintActor, CChoreoScene::InternalDetermineEventTypes, CChoreoScene::FileSaveActor, CChoreoScene::FindTargetingEvent, CChoreoScene::FindTagByName, CChoreoScene::ReconcileTags, CChoreoScene::ReconcileGestureTimes, CChoreoScene::ReconcileCloseCaption, CChoreoScene::RemoveEventsExceptTypes, CChoreoScene::DeleteReferencedObjects, CChoreoScene::Merge, CChoreoScene::operator=
int __fastcall CChoreoActor::GetNumChannels(const CChoreoActor *const this)
{
  return this->m_Channels.m_Size;
}


// CChoreoActor::GetChannel  (line 67, @0x00000000030734a0, libserver.so)  // inlines: operator[]
// callers: CChoreoActor::MarkForSaveAll, CChoreoActor::FindChannel, CChoreoActor::SaveToBuffer, CChoreoScene::PrintActor, CChoreoScene::InternalDetermineEventTypes, CChoreoScene::FindTargetingEvent, CChoreoScene::FindTagByName, CChoreoScene::ReconcileTags, CChoreoScene::ReconcileGestureTimes, CChoreoScene::ReconcileCloseCaption, CChoreoScene::RemoveEventsExceptTypes, CChoreoScene::DeleteReferencedObjects (14 total)
CChoreoChannel *__fastcall CChoreoActor::GetChannel(CChoreoActor *const this, int channel)
{
  CChoreoChannel *result; // rax

  result = 0;
  if ( channel >= 0 && channel < this->m_Channels.m_Size )
    return this->m_Channels.m_Memory.m_pMemory[channel];
  return result;
}


// CChoreoActor::GetChannel  (line 77, @0x00000000030734d0, libserver.so)  // inlines: operator[]
// callers: CChoreoScene::FileSaveActor
const CChoreoChannel *__fastcall CChoreoActor::GetChannel(const CChoreoActor *const this, int channel)
{
  const CChoreoChannel *result; // rax

  result = 0;
  if ( channel >= 0 && channel < this->m_Channels.m_Size )
    return this->m_Channels.m_Memory.m_pMemory[channel];
  return result;
}


// CChoreoActor::AddChannel  (line 87, @0x0000000003073d10, libserver.so)  // inlines: AddToTail, CopyConstruct<CChoreoChannel*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CChoreoChannel*, int>::Grow
// callers: CSceneEntity::GenerateSceneForSound, CChoreoScene::ParseChannel, CChoreoScene::Merge
void __fastcall CChoreoActor::AddChannel(CChoreoActor *const this, CChoreoChannel *channel)
{
  __int64 m_Size; // r12
  int v5; // eax
  CChoreoChannel **v6; // rax

  m_Size = this->m_Channels.m_Size;
  v5 = this->m_Channels.m_Size;
  if ( m_Size == this->m_Channels.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CChoreoChannel *,int>::Grow(&this->m_Channels.m_Memory, 1);
    v5 = this->m_Channels.m_Size;
  }
  this->m_Channels.m_Size = v5 + 1;
  v6 = &this->m_Channels.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = channel;
}


// CChoreoActor::RemoveChannel  (line 92, @0x0000000003073590, libserver.so)  // inlines: Element, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: CChoreoActor::FindChannelIndex, memmove
// callers: CChoreoScene::DeleteReferencedObjects
void __fastcall CChoreoActor::RemoveChannel(CChoreoActor *const this, CChoreoChannel *channel)
{
  int ChannelIndex; // eax
  int m_Size; // ecx
  CChoreoChannel **v5; // rsi

  ChannelIndex = CChoreoActor::FindChannelIndex(this, channel);
  if ( ChannelIndex != -1 )
  {
    m_Size = this->m_Channels.m_Size;
    if ( m_Size - ChannelIndex - 1 > 0 )
    {
      v5 = &this->m_Channels.m_Memory.m_pMemory[ChannelIndex + 1];
      memmove(v5 - 1, v5, 8LL * (this->m_Channels.m_Size - ChannelIndex - 1));
      m_Size = this->m_Channels.m_Size;
    }
    this->m_Channels.m_Size = m_Size - 1;
  }
}


// CChoreoActor::RemoveAllChannels  (line 101, @0x0000000003073500, libserver.so)  // inlines: RemoveAll
// callers: CChoreoScene::Merge
void __fastcall CChoreoActor::RemoveAllChannels(CChoreoActor *const this)
{
  this->m_Channels.m_Size = 0;
}


// CChoreoActor::SwapChannels  (line 106, @0x0000000003073510, libserver.so)  // inlines: operator[]
void __fastcall CChoreoActor::SwapChannels(CChoreoActor *const this, int c1, int c2)
{
  CChoreoChannel **m_pMemory; // rcx
  CChoreoChannel **v4; // rax
  CChoreoChannel *v5; // rsi

  m_pMemory = this->m_Channels.m_Memory.m_pMemory;
  v4 = &m_pMemory[c1];
  v5 = *v4;
  *v4 = m_pMemory[c2];
  this->m_Channels.m_Memory.m_pMemory[c2] = v5;
}


// CChoreoActor::FindChannelIndex  (line 115, @0x0000000003073540, libserver.so)
// callers: CBaseFlex::HandleStartSequenceSceneEvent, CBaseFlex::HandleStartGestureSceneEvent, CChoreoActor::RemoveChannel, CChoreoScene::EventLess
int __fastcall CChoreoActor::FindChannelIndex(const CChoreoActor *const this, const CChoreoChannel *channel)
{
  int m_Size; // ecx
  int result; // eax
  CChoreoChannel **m_pMemory; // rdx
  CChoreoChannel **v5; // rdx

  m_Size = this->m_Channels.m_Size;
  result = -1;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_Channels.m_Memory.m_pMemory;
    if ( *m_pMemory == channel )
    {
      return 0;
    }
    else
    {
      v5 = m_pMemory + 1;
      result = 0;
      while ( ++result != m_Size )
      {
        if ( *v5++ == channel )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CChoreoActor::SetFacePoserModelName  (line 127, @0x00000000030735f0, libserver.so)
// calls: CUtlString::operator=
// callers: CChoreoScene::ParseFacePoserModel
void __fastcall CChoreoActor::SetFacePoserModelName(CChoreoActor *const this, const char *name)
{
  CUtlString::operator=(&this->m_szFacePoserModelName, name);
}


// CChoreoActor::GetFacePoserModelName  (line 132, @0x0000000003073600, libserver.so)  // inlines: String
// calls: CUtlString::Get
// callers: CChoreoScene::FileSaveActor
const char *__fastcall CChoreoActor::GetFacePoserModelName(const CChoreoActor *const this)
{
  return CUtlString::Get(&this->m_szFacePoserModelName);
}


// CChoreoActor::SetActive  (line 137, @0x0000000003073610, libserver.so)
// callers: CSceneEntity::GenerateSceneForSound, CChoreoScene::ParseActor
void __fastcall CChoreoActor::SetActive(CChoreoActor *const this, bool active)
{
  this->m_bActive = active;
}


// CChoreoActor::GetActive  (line 142, @0x0000000003073620, libserver.so)
// callers: CChoreoScene::FileSaveActor, CChoreoScene::GatherEventsOfType
bool __fastcall CChoreoActor::GetActive(const CChoreoActor *const this)
{
  return this->m_bActive;
}


// CChoreoActor::MarkForSaveAll  (line 147, @0x0000000003073630, libserver.so)  // inlines: SetMarkedForSave
// calls: CChoreoActor::GetChannel, CChoreoChannel::MarkForSaveAll
// callers: CChoreoScene::MarkForSaveAll
void __fastcall CChoreoActor::MarkForSaveAll(CChoreoActor *const this, bool mark)
{
  int v4; // ebx
  int m_Size; // r13d
  int v6; // esi
  CChoreoChannel *Channel; // rax

  v4 = 0;
  m_Size = this->m_Channels.m_Size;
  this->m_bMarkedForSave = mark;
  if ( m_Size > 0 )
  {
    do
    {
      v6 = v4++;
      Channel = CChoreoActor::GetChannel(this, v6);
      CChoreoChannel::MarkForSaveAll(Channel, mark);
    }
    while ( v4 != m_Size );
  }
}


// CChoreoActor::FindChannel  (line 159, @0x0000000003073710, libserver.so)
// calls: CChoreoActor::FindChannel
const CChoreoChannel *__fastcall CChoreoActor::FindChannel(const CChoreoActor *const this, const char *name)
{
  return CChoreoActor::FindChannel(this, name);
}


// CChoreoActor::FindChannel  (line 164, @0x0000000003073680, libserver.so)
// calls: CChoreoActor::GetChannel, CChoreoChannel::GetName, V_stricmp_fast
// callers: CChoreoActor::FindChannel, CChoreoScene::Merge
CChoreoChannel *__fastcall CChoreoActor::FindChannel(CChoreoActor *const this, const char *name)
{
  int v4; // ebx
  int m_Size; // r14d
  CChoreoChannel *Channel; // r12
  const char *v7; // rax

  v4 = 0;
  m_Size = this->m_Channels.m_Size;
  if ( m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    Channel = CChoreoActor::GetChannel(this, v4);
    v7 = CChoreoChannel::GetName(Channel);
    if ( V_stricmp_fast(v7, name) == 0 )
      break;
    if ( ++v4 == m_Size )
      return 0;
  }
  return Channel;
}


// CChoreoActor::SaveToBuffer  (line 177, @0x0000000003073720, libserver.so)  // inlines: GetActive, GetName, LowLevelByteSwap<int>, PeekPut, PutChar, PutInt, PutTabs, PutType<int>, PutType<short unsigned int>, PutTypeBin<char>, PutTypeBin<int>, PutTypeBin<unsigned char>, PutUnsignedChar, PutUnsignedShort, String, SwapBufferToTargetEndian<int>, V_memcpy, WasLastCharacterCR, memcpy, operator[]
// calls: CUtlString::Get, CUtlBuffer::Printf, CChoreoActor::GetChannel, CChoreoChannel::SaveToBuffer, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CChoreoScene::SaveToBinaryBuffer
// strings: "%hu"
void __fastcall CChoreoActor::SaveToBuffer(
        CChoreoActor *const this,
        CUtlBuffer *const buf,
        CChoreoScene *pScene,
        IChoreoStringPool *pStringPool)
{
  int (*v7)(...); // r14
  const char *v8; // rax
  int v9; // eax
  int v10; // r14d
  int m_Size; // r14d
  int v12; // r15d
  int v13; // esi
  CChoreoChannel *Channel; // rax
  unsigned __int8 m_Flags; // al
  bool m_bActive; // r13
  int v17; // edx
  int m_nTab; // r12d
  int m_nOffset; // esi
  int m_Put; // eax
  unsigned __int8 *v21; // rdx
  int v23; // [rsp+18h] [rbp-38h]
  int v24; // [rsp+1Ch] [rbp-34h]

  v7 = *pStringPool->_vptr_IChoreoStringPool;
  v8 = CUtlString::Get(&this->m_szName);
  v9 = v7(pStringPool, v8);
  v10 = v9;
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%d", v9);
  }
  else
  {
    v23 = v9;
    if ( CUtlBuffer::CheckPut(buf, 4) )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        m_Put = buf->m_Put;
        v21 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
        if ( v21 != 0 )
        {
          LOBYTE(v24) = HIBYTE(v23);
          BYTE1(v24) = BYTE2(v23);
          BYTE2(v24) = BYTE1(v23);
          HIBYTE(v24) = v23;
          *v21 = v24;
          m_Put = buf->m_Put;
        }
      }
      else
      {
        *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v10;
        m_Put = buf->m_Put;
      }
      buf->m_Put = m_Put + 4;
      CUtlBuffer::AddNullTermination(buf);
    }
  }
  m_Size = this->m_Channels.m_Size;
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%hu", m_Size);
  }
  else if ( CUtlBuffer::CheckPut(buf, 1) )
  {
    buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_Size;
    ++buf->m_Put;
    CUtlBuffer::AddNullTermination(buf);
  }
  v12 = 0;
  if ( m_Size > 0 )
  {
    do
    {
      v13 = v12++;
      Channel = CChoreoActor::GetChannel(this, v13);
      CChoreoChannel::SaveToBuffer(Channel, buf, pScene, pStringPool);
    }
    while ( v12 != m_Size );
  }
  m_Flags = buf->m_Flags;
  m_bActive = this->m_bActive;
  if ( (m_Flags & 1) != 0 )
  {
    v17 = buf->m_Put;
    m_nOffset = buf->m_nOffset;
    if ( v17 != m_nOffset && buf->m_Memory.m_pMemory[v17 - 1 - m_nOffset] == 10 )
    {
      m_nTab = 0;
      if ( (m_Flags & 0x10) != 0 )
        goto LABEL_11;
      goto LABEL_27;
    }
  }
  else
  {
    v17 = buf->m_Put;
  }
  if ( v17 == 0 )
  {
    m_nTab = 0;
    if ( (m_Flags & 0x10) == 0 )
LABEL_27:
      m_nTab = buf->m_nTab;
LABEL_11:
    while ( --m_nTab >= 0 )
    {
      while ( CUtlBuffer::CheckPut(buf, 1) )
      {
        buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 9;
        ++buf->m_Put;
        CUtlBuffer::AddNullTermination(buf);
        if ( --m_nTab < 0 )
          goto LABEL_14;
      }
    }
  }
LABEL_14:
  if ( CUtlBuffer::CheckPut(buf, 1) )
  {
    buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_bActive;
    ++buf->m_Put;
    CUtlBuffer::AddNullTermination(buf);
  }
}


// CChoreoActor::RestoreFromBuffer  (line 195, @0x0000000003073980, libserver.so)  // inlines: AddChannel, AddToTail, CopyConstruct<CChoreoChannel*>, Element, GetChar, GetInt, GetType<int>, GetType<short unsigned int>, GetTypeBin<char>, GetTypeBin<int>, GetTypeBin<unsigned char>, GetTypeText<int>, GetTypeText<short unsigned int>, GetUnsignedChar, GetUnsignedShort, GrowMemory, LowLevelByteSwap<int>, PeekGet, SetActive, SetName, StringToNumber<int>, StringToNumber<short unsigned int>, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, CUtlString::operator=, CUtlBuffer::CheckGet, V_strtoi64, CChoreoChannel::SetActor, CChoreoScene::AllocChannel, CChoreoChannel::RestoreFromBuffer, CUtlMemory<CChoreoChannel*, int>::Grow, V_strtoui64, __stack_chk_fail
// callers: CChoreoScene::RestoreFromBinaryBuffer
bool __fastcall CChoreoActor::RestoreFromBuffer(
        CChoreoActor *const this,
        SceneBinaryVersion_t nRestoreVersion,
        CUtlBuffer *const buf,
        CChoreoScene *pScene,
        IChoreoStringPool *pStringPool)
{
  void (__fastcall *v8)(IChoreoStringPool *, __int64, char *, __int64); // r12
  bool v9; // al
  __int64 v10; // rsi
  bool v11; // al
  bool result; // al
  int v13; // edx
  int v14; // eax
  int v15; // edx
  int v16; // r12d
  CChoreoChannel **v17; // rax
  CChoreoChannel *v18; // r15
  __int64 m_Size; // rax
  int v20; // edx
  bool v21; // al
  int m_Get; // edx
  int v23; // edx
  int v24; // eax
  int v25; // r12d
  unsigned __int8 v26; // al
  unsigned __int8 *v27; // rax
  int c; // [rsp+8h] [rbp-168h]
  int ca; // [rsp+8h] [rbp-168h]
  int v30; // [rsp+10h] [rbp-160h]
  unsigned int v33; // [rsp+20h] [rbp-150h] BYREF
  int nIncrement; // [rsp+24h] [rbp-14Ch] BYREF
  unsigned __int8 *v35; // [rsp+28h] [rbp-148h] BYREF
  char sz[264]; // [rsp+30h] [rbp-140h] BYREF
  unsigned __int64 v37; // [rsp+138h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  v8 = *(pStringPool->_vptr_IChoreoStringPool + 1);
  if ( (buf->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v9 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
    v10 = 0;
    if ( v9 )
    {
      v35 = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
      c = v35;
      v33 = V_strtoi64(v35, &v35, 10);
      v10 = v33;
      if ( v35 != c )
        buf->m_Get += v35 - c;
    }
  }
  else
  {
    v21 = CUtlBuffer::CheckGet(buf, 4);
    v10 = 0;
    if ( v21 )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        m_Get = buf->m_Get;
        v27 = &buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
        if ( v27 == 0 )
          v27 = &v33;
        LODWORD(v35) = v33;
        LOBYTE(v35) = v27[3];
        BYTE1(v35) = v27[2];
        BYTE2(v35) = v27[1];
        BYTE3(v35) = *v27;
        v10 = v35;
      }
      else
      {
        m_Get = buf->m_Get;
        v10 = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      }
      buf->m_Get = m_Get + 4;
    }
  }
  v8(pStringPool, v10, sz, 256);
  CUtlString::operator=(&this->m_szName, sz);
  if ( (buf->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement) )
    {
LABEL_5:
      v11 = CUtlBuffer::CheckGet(buf, 1);
      if ( v11 )
      {
        v23 = buf->m_Get;
        v24 = v23 + 1;
        LOBYTE(v23) = buf->m_Memory.m_pMemory[v23 - buf->m_nOffset];
        buf->m_Get = v24;
        v11 = v23 == 1;
      }
      this->m_bActive = v11;
      return 1;
    }
    v35 = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
    v25 = v35;
    v26 = V_strtoui64(v35, &v35, 10);
    if ( v35 != v25 )
      buf->m_Get += v35 - v25;
    ca = v26;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(buf, 1) )
      goto LABEL_5;
    v13 = buf->m_Get;
    v14 = v13 + 1;
    v15 = buf->m_Memory.m_pMemory[v13 - buf->m_nOffset];
    buf->m_Get = v14;
    ca = v15;
  }
  if ( ca == 0 )
    goto LABEL_5;
  v16 = 0;
  while ( 1 )
  {
    v18 = CChoreoScene::AllocChannel(pScene);
    result = CChoreoChannel::RestoreFromBuffer(v18, nRestoreVersion, buf, pScene, this, pStringPool);
    if ( !result )
      return result;
    m_Size = this->m_Channels.m_Size;
    v20 = this->m_Channels.m_Size;
    if ( m_Size == this->m_Channels.m_Memory.m_nAllocationCount )
    {
      v30 = this->m_Channels.m_Size;
      CUtlMemory<CChoreoChannel *,int>::Grow(&this->m_Channels.m_Memory, 1);
      v20 = this->m_Channels.m_Size;
      m_Size = v30;
    }
    this->m_Channels.m_Size = v20 + 1;
    v17 = &this->m_Channels.m_Memory.m_pMemory[m_Size];
    if ( v17 != 0 )
      *v17 = v18;
    ++v16;
    CChoreoChannel::SetActor(v18, this);
    if ( v16 == ca )
      goto LABEL_5;
  }
}


