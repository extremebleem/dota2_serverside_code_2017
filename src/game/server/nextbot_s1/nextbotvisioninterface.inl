
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IVision::Schema_DynamicBinding  (line 27, @0x0000000002f36680, libserver.so)
// globals: IVision::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall IVision::Schema_DynamicBinding(const IVision *const this)
{
  return IVision::s_pSchemaBinding;
}


// IVision::~IVision  (line 30, @0x0000000002f38250, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~INextBotComponent, ~INextBotEventResponder
// calls: CUtlVectorBase<CKnownEntity, CUtlMemory<CKnownEntity, int> >::RemoveAll, CUtlMemory<CKnownEntity, int>::Purge
void __fastcall IVision::~IVision(IVision *const this)
{
  this->_vptr_INextBotEventResponder = &off_47B6050;
  CUtlVectorBase<CKnownEntity,CUtlMemory<CKnownEntity,int>>::RemoveAll(&this->m_knownEntityVector);
  if ( (this->m_knownEntityVector.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CKnownEntity,int>::Purge(&this->m_knownEntityVector.m_Memory),
        (this->m_knownEntityVector.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    this->_vptr_INextBotEventResponder = &off_3F7A570;
  }
  else
  {
    CUtlMemory<CKnownEntity,int>::Purge(&this->m_knownEntityVector.m_Memory);
    this->_vptr_INextBotEventResponder = &off_3F7A570;
  }
}


// IVision::~IVision  (line 30, @0x0000000002f382c0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~INextBotComponent, ~INextBotEventResponder, ~IVision
// calls: CUtlVectorBase<CKnownEntity, CUtlMemory<CKnownEntity, int> >::RemoveAll, operator delete, CUtlMemory<CKnownEntity, int>::Purge
void __fastcall IVision::~IVision(IVision *const this)
{
  this->_vptr_INextBotEventResponder = &off_47B6050;
  CUtlVectorBase<CKnownEntity,CUtlMemory<CKnownEntity,int>>::RemoveAll(&this->m_knownEntityVector);
  if ( (this->m_knownEntityVector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CKnownEntity,int>::Purge(&this->m_knownEntityVector.m_Memory);
    if ( (this->m_knownEntityVector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CKnownEntity,int>::Purge(&this->m_knownEntityVector.m_Memory);
  }
  this->_vptr_INextBotEventResponder = &off_3F7A570;
  operator delete(this);
}


// IVision::GetName  (line 37, @0x0000000002f36690, libserver.so)
// strings: "IVision"
const char *__fastcall IVision::GetName(IVision *const this)
{
  return "IVision";
}


// IVision::CollectKnownEntities  (line 130, @0x0000000002f38430, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CKnownEntity, CopyConstruct<CKnownEntity>, Element, GrowMemory, operator[]
// calls: CUtlVectorBase<CKnownEntity, CUtlMemory<CKnownEntity, int> >::RemoveAll, CUtlMemory<CKnownEntity, int>::Grow
void __fastcall IVision::CollectKnownEntities(
        IVision *const this,
        CUtlVector<CKnownEntity,CUtlMemory<CKnownEntity,int> > *knownVector)
{
  __int64 v4; // rbx
  __int64 m_Size; // rax
  CKnownEntity *v6; // r14
  int v7; // edx
  __int64 v8; // rax
  bool v9; // zf
  char *v10; // rax
  int v11; // [rsp+Ch] [rbp-34h]

  if ( knownVector != 0 )
  {
    CUtlVectorBase<CKnownEntity,CUtlMemory<CKnownEntity,int>>::RemoveAll(knownVector);
    if ( this->m_knownEntityVector.m_Size > 0 )
    {
      v4 = 0;
      do
      {
        while ( 1 )
        {
          if ( (*(this->m_knownEntityVector.m_Memory.m_pMemory[v4]._vptr_CKnownEntity + 17))(&this->m_knownEntityVector.m_Memory.m_pMemory[v4]) == 0 )
          {
            m_Size = knownVector->m_Size;
            v6 = &this->m_knownEntityVector.m_Memory.m_pMemory[v4];
            v7 = knownVector->m_Size;
            if ( m_Size == knownVector->m_Memory.m_nAllocationCount )
            {
              v11 = knownVector->m_Size;
              CUtlMemory<CKnownEntity,int>::Grow(&knownVector->m_Memory, 1);
              v7 = knownVector->m_Size;
              m_Size = v11;
            }
            v8 = m_Size << 6;
            v9 = (knownVector->m_Memory.m_pMemory + v8) == 0;
            v10 = knownVector->m_Memory.m_pMemory + v8;
            knownVector->m_Size = v7 + 1;
            if ( !v9 )
              break;
          }
          if ( this->m_knownEntityVector.m_Size <= ++v4 )
            return;
        }
        *v10 = off_47B4DD0;
        *(v10 + 2) = v6->m_who.m_Index;
        *(v10 + 12) = *&v6->m_lastKnownPostion.x;
        *(v10 + 5) = LODWORD(v6->m_lastKnownPostion.z);
        v10[24] = v6->m_hasLastKnownPositionBeenSeen;
        *(v10 + 4) = v6->m_lastKnownArea;
        *(v10 + 10) = LODWORD(v6->m_whenLastSeen);
        *(v10 + 11) = LODWORD(v6->m_whenLastBecameVisible);
        *(v10 + 12) = LODWORD(v6->m_whenLastKnown);
        *(v10 + 13) = LODWORD(v6->m_whenBecameKnown);
        v10[56] = v6->m_isVisible;
        ++v4;
      }
      while ( this->m_knownEntityVector.m_Size > v4 );
    }
  }
}


// IVision::GetDefaultFieldOfView  (line 146, @0x0000000002f366a0, libserver.so)
float __fastcall IVision::GetDefaultFieldOfView(const IVision *const this)
{
  return 90.0;
}


// IVision::GetFieldOfView  (line 153, @0x0000000002f366b0, libserver.so)
float __fastcall IVision::GetFieldOfView(const IVision *const this)
{
  return this->m_FOV;
}


// IVision::GetTimeSinceVisible  (line 160, @0x0000000002f37010, libserver.so)  // inlines: GetElapsedTime
// calls: IntervalTimer::Now
float __fastcall IVision::GetTimeSinceVisible(const IVision *const this, int team)
{
  float result; // xmm0_4
  IntervalTimer *v4; // r14
  IntervalTimer *m_notVisibleTimer; // rbx
  int v6; // r12d
  float v7; // xmm1_4
  CNetworkVarBase<float,IntervalTimer::NetworkVar_m_timestamp> *p_m_timestamp; // r13
  float v9; // xmm0_4
  float m_Value; // xmm2_4
  float v11; // [rsp+Ch] [rbp-24h]

  if ( team == -1 )
  {
    m_notVisibleTimer = this->m_notVisibleTimer;
    v6 = 0;
    v7 = 0.0;
    p_m_timestamp = &this->m_notVisibleTimer[0].m_timestamp;
    do
    {
      if ( *(&p_m_timestamp[-24].m_Value + m_notVisibleTimer - this) > v7 )
      {
        v11 = v7;
        v9 = IntervalTimer::Now(m_notVisibleTimer);
        m_Value = m_notVisibleTimer->m_timestamp.m_Value;
        v7 = v11;
        if ( (v9 - m_Value) < 1.0e10 && m_Value > v11 )
        {
          IntervalTimer::Now(m_notVisibleTimer);
          v7 = v11;
        }
      }
      ++v6;
      ++m_notVisibleTimer;
    }
    while ( v6 != 32 );
    return 1.0e10;
  }
  else
  {
    result = 0.0;
    if ( team <= 0x1F )
    {
      v4 = &this->m_notVisibleTimer[team];
      if ( v4->m_timestamp.m_Value <= 0.0 )
        return 99999.898;
      else
        return IntervalTimer::Now(v4) - v4->m_timestamp.m_Value;
    }
  }
  return result;
}


// IVision::ForEachKnownEntity  (line 195, @0x0000000002f36f60, libserver.so)  // inlines: IsAwareOf, operator[]
bool __fastcall IVision::ForEachKnownEntity(IVision *const this, IVision::IForEachKnownEntity *const func)
{
  __int64 v4; // r12
  CKnownEntity *v5; // rbx
  bool result; // al
  float v7; // [rsp+Ch] [rbp-24h]

  v4 = 0;
  if ( this->m_knownEntityVector.m_Size <= 0 )
    return 1;
  while ( 1 )
  {
    v5 = &this->m_knownEntityVector.m_Memory.m_pMemory[v4];
    if ( (*(v5->_vptr_CKnownEntity + 17))(v5) == 0 )
    {
      v7 = (*(v5->_vptr_CKnownEntity + 10))(v5);
      if ( v7 >= (*(this->_vptr_INextBotEventResponder + 79))(this) )
      {
        result = (**func)(func, v5);
        if ( !result )
          break;
      }
    }
    if ( ++v4 >= this->m_knownEntityVector.m_Size )
      return 1;
  }
  return result;
}


// IVision::IsVisibleEntityNoticed  (line 215, @0x0000000002f366c0, libserver.so)
bool __fastcall IVision::IsVisibleEntityNoticed(const IVision *const this, CBaseEntity *subject)
{
  return 1;
}


// IVision::IsIgnored  (line 222, @0x0000000002f366d0, libserver.so)
bool __fastcall IVision::IsIgnored(const IVision *const this, const CBaseEntity *subject)
{
  return 0;
}


// IVision::GetMaxVisionRange  (line 229, @0x0000000002f366e0, libserver.so)
float __fastcall IVision::GetMaxVisionRange(const IVision *const this)
{
  return 2000.0;
}


// IVision::GetMinRecognizeTime  (line 236, @0x0000000002f366f0, libserver.so)
float __fastcall IVision::GetMinRecognizeTime(const IVision *const this)
{
  return 0.0;
}


