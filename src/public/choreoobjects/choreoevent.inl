
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFlexAnimationTrack::~CFlexAnimationTrack  (line 152, @0x000000000307ef20, libserver.so)  // inlines: Purge, RemoveAll, ~CCurveData, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CCurveData::RemoveBezierData, CUtlMemory<CExpressionSample, int>::Purge, CUtlString::FreeMemoryBlock
void __fastcall CFlexAnimationTrack::~CFlexAnimationTrack(CFlexAnimationTrack *const this)
{
  CCurveData_0 *m_Ramp; // r12
  CCurveData *m_nFlexControllerIndexRaw; // rbx
  bool v4; // zf

  m_Ramp = this->m_Ramp;
  m_nFlexControllerIndexRaw = this->m_nFlexControllerIndexRaw;
  this->_vptr_ICurveDataAccessor = &off_47C2950;
  do
  {
    while ( 1 )
    {
      CCurveData::RemoveBezierData(--m_nFlexControllerIndexRaw);
      v4 = (m_nFlexControllerIndexRaw->m_Ramp.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      m_nFlexControllerIndexRaw->m_Ramp.m_Size = 0;
      if ( v4 )
      {
        CUtlMemory<CExpressionSample,int>::Purge(&m_nFlexControllerIndexRaw->m_Ramp.m_Memory);
        if ( (m_nFlexControllerIndexRaw->m_Ramp.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          break;
      }
      if ( m_Ramp == m_nFlexControllerIndexRaw )
        goto LABEL_6;
    }
    CUtlMemory<CExpressionSample,int>::Purge(&m_nFlexControllerIndexRaw->m_Ramp.m_Memory);
  }
  while ( m_Ramp != m_nFlexControllerIndexRaw );
LABEL_6:
  if ( this->m_sControllerName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sControllerName);
}


// CFlexAnimationTrack::~CFlexAnimationTrack  (line 152, @0x000000000307efc0, libserver.so)  // inlines: Purge, RemoveAll, ~CCurveData, ~CFlexAnimationTrack, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CCurveData::RemoveBezierData, CUtlMemory<CExpressionSample, int>::Purge, CUtlString::FreeMemoryBlock, operator delete
void __fastcall CFlexAnimationTrack::~CFlexAnimationTrack(CFlexAnimationTrack *const this)
{
  CCurveData_0 *m_Ramp; // r12
  CCurveData *m_nFlexControllerIndexRaw; // rbx
  bool v4; // zf

  m_Ramp = this->m_Ramp;
  m_nFlexControllerIndexRaw = this->m_nFlexControllerIndexRaw;
  this->_vptr_ICurveDataAccessor = &off_47C2950;
  do
  {
    while ( 1 )
    {
      CCurveData::RemoveBezierData(--m_nFlexControllerIndexRaw);
      v4 = (m_nFlexControllerIndexRaw->m_Ramp.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      m_nFlexControllerIndexRaw->m_Ramp.m_Size = 0;
      if ( v4 )
      {
        CUtlMemory<CExpressionSample,int>::Purge(&m_nFlexControllerIndexRaw->m_Ramp.m_Memory);
        if ( (m_nFlexControllerIndexRaw->m_Ramp.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          break;
      }
      if ( m_Ramp == m_nFlexControllerIndexRaw )
        goto LABEL_6;
    }
    CUtlMemory<CExpressionSample,int>::Purge(&m_nFlexControllerIndexRaw->m_Ramp.m_Memory);
  }
  while ( m_Ramp != m_nFlexControllerIndexRaw );
LABEL_6:
  if ( this->m_sControllerName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sControllerName);
  operator delete(this);
}


// CChoreoEvent::IsChoreoEvent  (line 350, @0x000000000307ef10, libserver.so)
bool __fastcall CChoreoEvent::IsChoreoEvent(const CChoreoEvent *const this)
{
  return 1;
}


