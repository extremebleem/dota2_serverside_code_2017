// Reconstructed from DWARF by pahole; not original source.

// src/choreoobjects/expressionsample.cpp:393
struct EtCurve {
	EtBoolean isStep;  // +0x0
	EtBoolean isStepNext;  // +0x1
	EtBoolean isLinear;  // +0x2

	EtValue fX1;  // +0x4
	EtValue fX4;  // +0x8
	float fCoeff[4];  // +0xc
	float fPolyY[4];  // +0x1c
	EtCurve();

	// sizeof = 44
};

// src/choreoobjects/expressionsample.cpp:580
struct ag_polynomial {
	EtValue * p;  // +0x0
	EtInt deg;  // +0x8

	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_expressionsample.cpp  (line 0, @0x0000000001a67800, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_expressionsample_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CCurveData::AddBezierData  (line 8, @0x000000000308adc0, libserver.so)  // inlines: CUtlMemory, CUtlVectorBase
// calls: operator new
// callers: CCurveData::CopyFrom, CCurveData::Add, CCurveData::SetCurveTypeForSample
void __fastcall CCurveData::AddBezierData(CCurveData *const this)
{
  CUtlVector<CBezierHandlesForSample,CUtlMemory<CBezierHandlesForSample,int> > *v2; // rax

  if ( this->m_pBezierControls == 0 )
  {
    v2 = operator new(0x18u);
    v2->m_Size = 0;
    v2->m_Memory.m_pMemory = 0;
    v2->m_Memory.m_nAllocationCount = 0;
    v2->m_Memory.m_nGrowSize = 0;
    this->m_pBezierControls = v2;
  }
}


// CCurveData::RemoveBezierData  (line 16, @0x000000000308ae20, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<CBezierHandlesForSample, int>::Purge
// callers: CFlexAnimationTrack::~CFlexAnimationTrack, CFlexAnimationTrack::CFlexAnimationTrack, CChoreoEvent::CChoreoEvent, CChoreoEvent::~CChoreoEvent, CChoreoScene::CChoreoScene, CChoreoScene::~CChoreoScene, CCurveData::Delete, CCurveData::Clear, CCurveData::CopyFrom, CCurveData::SetCurveTypeForSample
void __fastcall CCurveData::RemoveBezierData(CCurveData *const this)
{
  CUtlVector<CBezierHandlesForSample,CUtlMemory<CBezierHandlesForSample,int> > *m_pBezierControls; // rbx
  bool v3; // zf

  m_pBezierControls = this->m_pBezierControls;
  if ( m_pBezierControls != 0 )
  {
    v3 = (m_pBezierControls->m_Memory.m_nGrowSize & 0xC0000000) == 0;
    m_pBezierControls->m_Size = 0;
    if ( v3 )
    {
      CUtlMemory<CBezierHandlesForSample,int>::Purge(&m_pBezierControls->m_Memory);
      if ( (m_pBezierControls->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CBezierHandlesForSample,int>::Purge(&m_pBezierControls->m_Memory);
    }
    operator delete(m_pBezierControls);
  }
  this->m_pBezierControls = 0;
}


// CCurveData::CopyFrom  (line 22, @0x000000000308d390, libserver.so)  // inlines: AddToTail, CExpressionSample, CopyConstruct<CBezierHandlesForSample>, CopyConstruct<CExpressionSample>, Element, GrowMemory, Purge, Vector2D, operator=, operator[]
// calls: CUtlVectorBase<CExpressionSample, CUtlMemory<CExpressionSample, int> >::RemoveAll, CUtlMemory<CExpressionSample, int>::Purge, CCurveData::RemoveBezierData, CUtlMemory<CExpressionSample, int>::Grow, CCurveData::AddBezierData, CUtlMemory<CBezierHandlesForSample, int>::Grow
// callers: CFlexAnimationTrack::CFlexAnimationTrack, CChoreoEvent::operator=, CChoreoScene::operator=
void __fastcall CCurveData::CopyFrom(CCurveData *const this, const CCurveData *const src)
{
  int v4; // r13d
  __int64 v5; // r9
  CExpressionSample *v6; // rax
  __int64 m_Size; // r15
  char *v8; // r12
  int v9; // eax
  CUtlVector<CBezierHandlesForSample,CUtlMemory<CBezierHandlesForSample,int> > *m_pBezierControls; // rax
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rax
  CUtlVector<CBezierHandlesForSample,CUtlMemory<CBezierHandlesForSample,int> > *v14; // r12
  char *v15; // r15
  __int64 v16; // r13
  int v17; // eax
  __int64 v18; // [rsp+0h] [rbp-40h]
  __int64 v19; // [rsp+0h] [rbp-40h]
  int v20; // [rsp+8h] [rbp-38h]

  CUtlVectorBase<CExpressionSample,CUtlMemory<CExpressionSample,int>>::RemoveAll(&this->m_Ramp);
  if ( (this->m_Ramp.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CExpressionSample,int>::Purge(&this->m_Ramp.m_Memory);
  v4 = 0;
  CCurveData::RemoveBezierData(this);
  v5 = 0;
  if ( src->m_Ramp.m_Size > 0 )
  {
    do
    {
      m_Size = this->m_Ramp.m_Size;
      v8 = src->m_Ramp.m_Memory.m_pMemory + v5;
      v9 = this->m_Ramp.m_Size;
      if ( m_Size == this->m_Ramp.m_Memory.m_nAllocationCount )
      {
        v18 = v5;
        CUtlMemory<CExpressionSample,int>::Grow(&this->m_Ramp.m_Memory, 1);
        v9 = this->m_Ramp.m_Size;
        v5 = v18;
      }
      this->m_Ramp.m_Size = v9 + 1;
      v6 = &this->m_Ramp.m_Memory.m_pMemory[m_Size];
      if ( v6 != 0 )
      {
        v6->m_AnchorPos.x = *v8;
        v6->m_AnchorPos.y = *(v8 + 1);
        v6->m_curvetype = *(v8 + 4);
        *(v6 + 5) = *(v8 + 5) & 0x7FFF | *(v6 + 5) & 0x8000;
        *(v6 + 11) = v8[11] & 0x80 | *(v6 + 11) & 0x7F;
      }
      ++v4;
      v5 += 12;
    }
    while ( src->m_Ramp.m_Size > v4 );
  }
  this->m_RampEdgeInfo[0].m_ZeroPos.m_AnchorPos.x = src->m_RampEdgeInfo[0].m_ZeroPos.m_AnchorPos.x;
  this->m_RampEdgeInfo[0].m_ZeroPos.m_AnchorPos.y = src->m_RampEdgeInfo[0].m_ZeroPos.m_AnchorPos.y;
  this->m_RampEdgeInfo[0].m_ZeroPos.m_curvetype = src->m_RampEdgeInfo[0].m_ZeroPos.m_curvetype;
  *(&this->m_RampEdgeInfo[0].m_ZeroPos + 5) = *(&src->m_RampEdgeInfo[0].m_ZeroPos + 5) & 0x7FFF
                                            | *(&this->m_RampEdgeInfo[0].m_ZeroPos + 5) & 0x8000;
  *(&this->m_RampEdgeInfo[0].m_ZeroPos + 11) = *(&src->m_RampEdgeInfo[0].m_ZeroPos + 11) & 0x80
                                             | *(&this->m_RampEdgeInfo[0].m_ZeroPos + 11) & 0x7F;
  this->m_RampEdgeInfo[0].m_bActive = src->m_RampEdgeInfo[0].m_bActive;
  this->m_RampEdgeInfo[1].m_ZeroPos.m_AnchorPos.x = src->m_RampEdgeInfo[1].m_ZeroPos.m_AnchorPos.x;
  this->m_RampEdgeInfo[1].m_ZeroPos.m_AnchorPos.y = src->m_RampEdgeInfo[1].m_ZeroPos.m_AnchorPos.y;
  this->m_RampEdgeInfo[1].m_ZeroPos.m_curvetype = src->m_RampEdgeInfo[1].m_ZeroPos.m_curvetype;
  *(&this->m_RampEdgeInfo[1].m_ZeroPos + 5) = *(&src->m_RampEdgeInfo[1].m_ZeroPos + 5) & 0x7FFF
                                            | *(&this->m_RampEdgeInfo[1].m_ZeroPos + 5) & 0x8000;
  *(&this->m_RampEdgeInfo[1].m_ZeroPos + 11) = *(&src->m_RampEdgeInfo[1].m_ZeroPos + 11) & 0x80
                                             | *(&this->m_RampEdgeInfo[1].m_ZeroPos + 11) & 0x7F;
  this->m_RampEdgeInfo[1].m_bActive = src->m_RampEdgeInfo[1].m_bActive;
  if ( src->m_pBezierControls != 0 )
  {
    CCurveData::AddBezierData(this);
    m_pBezierControls = src->m_pBezierControls;
    if ( m_pBezierControls->m_Size > 0 )
    {
      v11 = 0;
      v12 = 0;
      do
      {
        v14 = this->m_pBezierControls;
        v15 = m_pBezierControls->m_Memory.m_pMemory + v11;
        v16 = v14->m_Size;
        v17 = v14->m_Size;
        if ( v16 == v14->m_Memory.m_nAllocationCount )
        {
          v19 = v11;
          v20 = v12;
          CUtlMemory<CBezierHandlesForSample,int>::Grow(&v14->m_Memory, 1);
          v17 = v14->m_Size;
          v11 = v19;
          v12 = v20;
        }
        v14->m_Size = v17 + 1;
        v13 = &v14->m_Memory.m_pMemory[v16];
        if ( v13 != 0 )
        {
          *v13 = *v15;
          *(v13 + 8) = *(v15 + 1);
          *(v13 + 16) = *(v15 + 4);
        }
        m_pBezierControls = src->m_pBezierControls;
        ++v12;
        v11 += 20;
      }
      while ( m_pBezierControls->m_Size > v12 );
    }
  }
}


// CCurveData::GetEdgeInfo  (line 49, @0x000000000308ae90, libserver.so)
// callers: CFlexAnimationTrack::GetEdgeInfo, CFlexAnimationTrack::IsEdgeActive, CFlexAnimationTrack::GetEdgeCurveType, CFlexAnimationTrack::GetEdgeZeroValue, CFlexAnimationTrack::GetIntensityInternal
const EdgeInfo_t *__fastcall CCurveData::GetEdgeInfo(const CCurveData *const this, int idx)
{
  return &this->m_RampEdgeInfo[idx];
}


// CCurveData::GetEdgeInfo  (line 54, @0x000000000308aeb0, libserver.so)
// callers: CFlexAnimationTrack::SetEdgeInfo, CFlexAnimationTrack::SetEdgeActive
EdgeInfo_t *__fastcall CCurveData::GetEdgeInfo(CCurveData *const this, int idx)
{
  return &this->m_RampEdgeInfo[idx];
}


// CCurveData::Count  (line 59, @0x000000000308aed0, libserver.so)
// callers: CFlexAnimationTrack::GetIntensityInternal, CChoreoScene::FileSaveFlexAnimationTrack, CChoreoScene::FileSaveEvent, CChoreoScene::ParseEvent
int __fastcall CCurveData::Count(const CCurveData *const this)
{
  return this->m_Ramp.m_Size;
}


// CCurveData::Get  (line 64, @0x000000000308aee0, libserver.so)  // inlines: operator[]
// callers: CCurveData::Get, CCurveData::GetBezierHandles, CCurveData::GetBoundedSample, CCurveData::SaveToBuffer, CCurveData::SaveSamples
CExpressionSample *__fastcall CCurveData::Get(CCurveData *const this, int index)
{
  CExpressionSample *result; // rax

  result = 0;
  if ( index >= 0 && index < this->m_Ramp.m_Size )
    return &this->m_Ramp.m_Memory.m_pMemory[index];
  return result;
}


// CCurveData::Get  (line 72, @0x000000000308af10, libserver.so)
// calls: CCurveData::Get
const CExpressionSample *__fastcall CCurveData::Get(const CCurveData *const this, int index)
{
  return CCurveData::Get(this, index);
}


// CCurveData::FindSampleIndex  (line 77, @0x000000000308af20, libserver.so)
int __fastcall CCurveData::FindSampleIndex(const CCurveData *const this, const CExpressionSample *sample)
{
  int m_Size; // ecx
  int result; // eax
  CExpressionSample *m_pMemory; // rdx

  m_Size = this->m_Ramp.m_Size;
  result = -1;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_Ramp.m_Memory.m_pMemory;
    result = 0;
    if ( sample != m_pMemory )
    {
      while ( ++result != m_Size )
      {
        if ( sample == ++m_pMemory )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CCurveData::NumSelected  (line 87, @0x000000000308af60, libserver.so)  // inlines: IsSelected
int __fastcall CCurveData::NumSelected(const CCurveData *const this)
{
  int m_Size; // eax
  CExpressionSample *m_pMemory; // rdx
  CExpressionSample *v3; // rcx
  __int64 v4; // rsi
  int result; // eax
  bool v6; // cf

  m_Size = this->m_Ramp.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_Ramp.m_Memory.m_pMemory;
  v3 = m_pMemory + 1;
  v4 = &m_pMemory[(m_Size - 1) + 1];
  result = 0;
  while ( 1 )
  {
    v6 = *(m_pMemory + 11) >= 0;
    m_pMemory = v3;
    result -= v6 - 1;
    if ( v3 == v4 )
      break;
    ++v3;
  }
  return result;
}


// CCurveData::GetBezierHandles  (line 101, @0x000000000308afb0, libserver.so)  // inlines: Element, GetBezierHandleIndex, IsBezierSample, operator[]
// calls: CCurveData::Get
// callers: CCurveData::GetBezierHandles, CCurveData::GetBoundedBezierSample, CCurveData::SaveSamples
CBezierHandlesForSample *__fastcall CCurveData::GetBezierHandles(CCurveData *const this, int index)
{
  CUtlVector<CBezierHandlesForSample,CUtlMemory<CBezierHandlesForSample,int> > *m_pBezierControls; // rbx
  CExpressionSample *v3; // rax
  __int16 v4; // ax

  m_pBezierControls = this->m_pBezierControls;
  if ( m_pBezierControls != 0 && (v3 = CCurveData::Get(this, index)) != 0 && ((v4 = *(v3 + 5)) & 0x7FFF) != 0x7FFF )
    return &m_pBezierControls->m_Memory.m_pMemory[(2 * v4) >> 1];
  else
    return 0;
}


// CCurveData::GetBezierHandles  (line 114, @0x000000000308b000, libserver.so)
// calls: CCurveData::GetBezierHandles
const CBezierHandlesForSample *__fastcall CCurveData::GetBezierHandles(const CCurveData *const this, int index)
{
  return CCurveData::GetBezierHandles(this, index);
}


// CCurveData::Add  (line 120, @0x000000000308d600, libserver.so)  // inlines: AddToTail, CExpressionSample, CopyConstruct<CBezierHandlesForSample>, CopyConstruct<CExpressionSample>, Element, GrowMemory, SetBezierHandleIndex, SetCurveType, Vector2D, operator[]
// calls: CCurveData::AddBezierData, CUtlMemory<CExpressionSample, int>::Grow, CUtlMemory<CBezierHandlesForSample, int>::Grow
// callers: CChoreoEvent::RestoreFlexAnimationsFromBuffer, CChoreoScene::ParseFlexAnimations, CChoreoScene::ParseEvent, CCurveData::RestoreFromBuffer, CCurveData::Parse
int __fastcall CCurveData::Add(
        CCurveData *const this,
        const CExpressionSample *const from,
        const CBezierHandlesForSample *pBezierHandles)
{
  int m_Size; // r13d
  int v7; // eax
  CExpressionSample *v8; // rcx
  __int16 v9; // si
  CExpressionSample *v10; // r12
  CUtlVector<CBezierHandlesForSample,CUtlMemory<CBezierHandlesForSample,int> > *m_pBezierControls; // rbx
  int v12; // r15d
  int v13; // eax
  __int64 v14; // rax
  __int16 v15; // ax

  m_Size = this->m_Ramp.m_Size;
  v7 = m_Size;
  if ( m_Size == this->m_Ramp.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CExpressionSample,int>::Grow(&this->m_Ramp.m_Memory, 1);
    v7 = this->m_Ramp.m_Size;
  }
  this->m_Ramp.m_Size = v7 + 1;
  v8 = &this->m_Ramp.m_Memory.m_pMemory[m_Size];
  if ( v8 != 0 )
  {
    v9 = *(v8 + 5);
    v8->m_AnchorPos.x = from->m_AnchorPos.x;
    v8->m_AnchorPos.y = from->m_AnchorPos.y;
    v8->m_curvetype = from->m_curvetype;
    *(v8 + 5) = *(from + 5) & 0x7FFF | v9 & 0x8000;
    *(v8 + 11) = *(from + 11) & 0x80 | *(v8 + 11) & 0x7F;
    v10 = &this->m_Ramp.m_Memory.m_pMemory[m_Size];
  }
  else
  {
    v10 = 0;
  }
  if ( pBezierHandles != 0 )
  {
    CCurveData::AddBezierData(this);
    m_pBezierControls = this->m_pBezierControls;
    v12 = m_pBezierControls->m_Size;
    v13 = m_pBezierControls->m_Size;
    if ( m_pBezierControls->m_Size == m_pBezierControls->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CBezierHandlesForSample,int>::Grow(&m_pBezierControls->m_Memory, 1);
      v13 = m_pBezierControls->m_Size;
    }
    m_pBezierControls->m_Size = v13 + 1;
    v14 = &m_pBezierControls->m_Memory.m_pMemory[v12];
    if ( v14 != 0 )
    {
      *v14 = pBezierHandles->m_Tangents[0];
      *(v14 + 8) = pBezierHandles->m_Tangents[1];
      *(v14 + 16) = *&pBezierHandles->m_bUnifiedTangents;
    }
    v15 = *(v10 + 5);
    v10->m_curvetype = 4112;
    *(v10 + 5) = v12 & 0x7FFF | v15 & 0x8000;
  }
  else
  {
    *(v10 + 5) |= 0x7FFFu;
  }
  return m_Size;
}


// CCurveData::SetCurveTypeForSample  (line 144, @0x000000000308e190, libserver.so)  // inlines: AddToTail, CopyConstruct<CBezierHandlesForSample>, Element, GetBezierHandleIndex, GetCurveType, GrowMemory, IsBezierSample, SetBezierHandleIndex, SetCurveType, operator[]
// calls: Interpolator_CurveInterpolatorsForType, CUtlVectorBase<CBezierHandlesForSample, CUtlMemory<CBezierHandlesForSample, int> >::Remove, CCurveData::AddBezierData, CCurveData::RemoveBezierData, CUtlMemory<CBezierHandlesForSample, int>::Grow
void __fastcall CCurveData::SetCurveTypeForSample(CCurveData *const this, int index, int curvetype)
{
  __int16 v4; // r12
  CExpressionSample *v5; // r13
  bool v6; // r15
  __int16 v7; // r14
  __int16 v8; // r14
  __int64 v9; // r8
  int i; // ecx
  CExpressionSample *v11; // rdx
  __int16 v12; // di
  int v13; // eax
  CUtlVector<CBezierHandlesForSample,CUtlMemory<CBezierHandlesForSample,int> > *m_pBezierControls; // rbx
  int m_Size; // r12d
  int v16; // eax
  __int64 v17; // rax
  __int16 v18; // ax
  int v19; // [rsp-8h] [rbp-48h] BYREF
  int v20; // [rsp-4h] [rbp-44h] BYREF

  if ( index >= 0 && index < this->m_Ramp.m_Size )
  {
    v4 = curvetype;
    v5 = &this->m_Ramp.m_Memory.m_pMemory[index];
    if ( curvetype != v5->m_curvetype )
    {
      v6 = (*(v5 + 5) & 0x7FFF) != 0x7FFF;
      v7 = 2 * *(v5 + 5);
      Interpolator_CurveInterpolatorsForType(curvetype, &v19, &v20);
      v8 = v7 >> 1;
      if ( v19 == 16 || v20 == 16 )
      {
        if ( v6 )
        {
          v4 = 4112;
        }
        else
        {
          CCurveData::AddBezierData(this);
          m_pBezierControls = this->m_pBezierControls;
          m_Size = m_pBezierControls->m_Size;
          v16 = m_pBezierControls->m_Size;
          if ( m_pBezierControls->m_Size == m_pBezierControls->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CBezierHandlesForSample,int>::Grow(&m_pBezierControls->m_Memory, 1);
            v16 = m_pBezierControls->m_Size;
          }
          m_pBezierControls->m_Size = v16 + 1;
          v17 = &m_pBezierControls->m_Memory.m_pMemory[m_Size];
          if ( v17 != 0 )
          {
            *v17 = 1127481344;
            *(v17 + 4) = 1036831949;
            *(v17 + 8) = 0;
            *(v17 + 12) = 1036831949;
            *(v17 + 16) = 1;
            *(v17 + 17) = 1;
          }
          v18 = m_Size & 0x7FFF | *(v5 + 5) & 0x8000;
          v4 = 4112;
          *(v5 + 5) = v18;
        }
      }
      else if ( v6 )
      {
        *(v5 + 5) |= 0x7FFFu;
        CUtlVectorBase<CBezierHandlesForSample,CUtlMemory<CBezierHandlesForSample,int>>::Remove(
          this->m_pBezierControls,
          v8);
        v9 = 0;
        for ( i = 0; this->m_Ramp.m_Size > i; ++v9 )
        {
          v11 = &this->m_Ramp.m_Memory.m_pMemory[v9];
          v12 = *(v11 + 5);
          v13 = (2 * v12) >> 1;
          if ( v8 < v13 )
            *(v11 + 5) = (v13 - 1) & 0x7FFF | v12 & 0x8000;
          ++i;
        }
        if ( this->m_pBezierControls->m_Size == 0 )
          CCurveData::RemoveBezierData(this);
      }
      v5->m_curvetype = v4;
    }
  }
}


// CCurveData::Delete  (line 206, @0x000000000308c750, libserver.so)  // inlines: Element, GetBezierHandleIndex, Remove, SetBezierHandleIndex, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove, CUtlVectorBase<CBezierHandlesForSample, CUtlMemory<CBezierHandlesForSample, int> >::Remove, CCurveData::RemoveBezierData
// callers: CCurveData::RemoveOutOfRangeSamples
void __fastcall CCurveData::Delete(CCurveData *const this, int index, bool validate)
{
  int m_Size; // eax
  CExpressionSample *m_pMemory; // rcx
  __int64 v6; // r8
  int v7; // r12d
  CUtlVector<CBezierHandlesForSample,CUtlMemory<CBezierHandlesForSample,int> > *m_pBezierControls; // rdi
  __int64 v9; // rcx
  int i; // edx
  CExpressionSample *v11; // rdi
  __int16 v12; // r8
  int v13; // eax

  if ( index >= 0 )
  {
    m_Size = this->m_Ramp.m_Size;
    if ( index < m_Size )
    {
      m_pMemory = this->m_Ramp.m_Memory.m_pMemory;
      v6 = index;
      v7 = (2 * *(&m_pMemory[v6] + 5)) >> 1;
      if ( m_Size - index - 1 > 0 )
      {
        memmove(&m_pMemory[v6], &m_pMemory[v6 + 1], 12LL * (m_Size - index - 1));
        m_Size = this->m_Ramp.m_Size;
      }
      m_pBezierControls = this->m_pBezierControls;
      this->m_Ramp.m_Size = m_Size - 1;
      if ( m_pBezierControls != 0 && v7 != -1 )
      {
        CUtlVectorBase<CBezierHandlesForSample,CUtlMemory<CBezierHandlesForSample,int>>::Remove(m_pBezierControls, v7);
        v9 = 0;
        for ( i = 0; this->m_Ramp.m_Size > i; *(v11 + 5) = (v13 - 1) & 0x7FFF | v12 & 0x8000 )
        {
          while ( 1 )
          {
            v11 = &this->m_Ramp.m_Memory.m_pMemory[v9];
            v12 = *(v11 + 5);
            v13 = (2 * v12) >> 1;
            if ( v7 < v13 )
              break;
            ++i;
            ++v9;
            if ( this->m_Ramp.m_Size <= i )
              goto LABEL_12;
          }
          ++i;
          ++v9;
        }
LABEL_12:
        if ( this->m_pBezierControls->m_Size == 0 )
          CCurveData::RemoveBezierData(this);
      }
    }
  }
}


// CCurveData::Clear  (line 240, @0x000000000308ca20, libserver.so)
// calls: CUtlVectorBase<CExpressionSample, CUtlMemory<CExpressionSample, int> >::RemoveAll, CCurveData::RemoveBezierData
// callers: CFlexAnimationTrack::Clear, CCurveData::Parse
void __fastcall CCurveData::Clear(CCurveData *const this)
{
  CUtlVectorBase<CExpressionSample,CUtlMemory<CExpressionSample,int>>::RemoveAll(&this->m_Ramp);
  CCurveData::RemoveBezierData(this);
}


// CCurveData::Resort  (line 248, @0x000000000308c8e0, libserver.so)  // inlines: CExpressionSample, SwapElements, V_swap<CExpressionSample>, Vector2D, operator=, operator[]
// calls: CCurveData::RemoveOutOfRangeSamples
// callers: CChoreoEvent::OnEndTimeChanged, CChoreoScene::ParseFlexAnimations, CChoreoScene::ParseEvent, CCurveData::Parse
void __fastcall CCurveData::Resort(CCurveData *const this)
{
  int m_Size; // r9d
  __int64 v2; // r8
  int v3; // ebx
  int v4; // r13d
  int v5; // ecx
  __int64 i; // rsi
  CExpressionSample *m_pMemory; // rax
  CExpressionSample *v8; // rdx
  char *v9; // rax
  float x; // xmm1_4
  vec_t y; // xmm2_4
  __int16 v12; // r12
  unsigned __int16 m_curvetype; // r15
  char v14; // r10
  __int16 v15; // dx
  __int16 v16; // dx

  m_Size = this->m_Ramp.m_Size;
  v2 = 0;
  v3 = 0;
  if ( m_Size > 0 )
  {
    do
    {
      v4 = v3 + 1;
      v5 = v3 + 1;
      for ( i = v2 * 12 + 12; m_Size > v5; m_Size = this->m_Ramp.m_Size )
      {
        while ( 1 )
        {
          m_pMemory = this->m_Ramp.m_Memory.m_pMemory;
          v8 = &m_pMemory[v2];
          v9 = m_pMemory + i;
          x = v8->m_AnchorPos.x;
          if ( v8->m_AnchorPos.x > *v9 && v3 != v5 )
            break;
          ++v5;
          i += 12;
          if ( m_Size <= v5 )
            goto LABEL_8;
        }
        v8->m_AnchorPos.x = *v9;
        y = v8->m_AnchorPos.y;
        ++v5;
        i += 12;
        v12 = *(v8 + 5);
        v8->m_AnchorPos.y = *(v9 + 1);
        m_curvetype = v8->m_curvetype;
        v14 = *(v8 + 11);
        v8->m_curvetype = *(v9 + 4);
        *(v8 + 5) = *(v9 + 5) & 0x7FFF | v12 & 0x8000;
        *(v8 + 11) = v9[11] & 0x80 | *(v8 + 11) & 0x7F;
        v15 = *(v9 + 5);
        *v9 = x;
        *(v9 + 1) = y;
        *(v9 + 4) = m_curvetype;
        v16 = v12 & 0x7FFF | v15 & 0x8000;
        *(v9 + 5) = v16;
        v9[11] = v14 & 0x80 | HIBYTE(v16) & 0x7F;
      }
LABEL_8:
      ++v3;
      ++v2;
    }
    while ( v4 < m_Size );
  }
  CCurveData::RemoveOutOfRangeSamples(this);
}


// CCurveData::GetBoundedBezierSample  (line 270, @0x000000000308b010, libserver.so)  // inlines: CBezierHandleTangent, CBezierHandlesForSample, GetBezierHandles
// calls: __cxa_guard_acquire, __cxa_guard_release, CCurveData::GetBezierHandles
// callers: CCurveData::GetIntensity
// globals: `guard variable for'CCurveData::GetBoundedBezierSample(int)::nullend, CCurveData::GetBoundedBezierSample(int)::nullend, `guard variable for'CCurveData::GetBoundedBezierSample(int)::nullstart, CCurveData::GetBoundedBezierSample(int)::nullstart
const CBezierHandlesForSample *__fastcall CCurveData::GetBoundedBezierSample(const CCurveData *const this, int number)
{
  if ( number < 0 )
  {
    if ( `guard variable for'CCurveData::GetBoundedBezierSample(int)::nullstart == 0
      && __cxa_guard_acquire(&`guard variable for'CCurveData::GetBoundedBezierSample(int)::nullstart) != 0 )
    {
      CCurveData::GetBoundedBezierSample(int)const::nullstart.m_Tangents[0].m_flAngleDegrees = 0.0;
      CCurveData::GetBoundedBezierSample(int)const::nullstart.m_Tangents[0].m_flWeight = 0.1;
      CCurveData::GetBoundedBezierSample(int)const::nullstart.m_Tangents[1].m_flAngleDegrees = 0.0;
      CCurveData::GetBoundedBezierSample(int)const::nullstart.m_Tangents[1].m_flWeight = 0.1;
      CCurveData::GetBoundedBezierSample(int)const::nullstart.m_bUnifiedTangents = 1;
      CCurveData::GetBoundedBezierSample(int)const::nullstart.m_bUnweightedTangents = 1;
      __cxa_guard_release(&`guard variable for'CCurveData::GetBoundedBezierSample(int)::nullstart);
    }
    return &CCurveData::GetBoundedBezierSample(int)const::nullstart;
  }
  else if ( number < this->m_Ramp.m_Size )
  {
    return CCurveData::GetBezierHandles(this, number);
  }
  else if ( `guard variable for'CCurveData::GetBoundedBezierSample(int)::nullend != 0
         || __cxa_guard_acquire(&`guard variable for'CCurveData::GetBoundedBezierSample(int)::nullend) == 0 )
  {
    return &CCurveData::GetBoundedBezierSample(int)const::nullend;
  }
  else
  {
    CCurveData::GetBoundedBezierSample(int)const::nullend.m_Tangents[0].m_flAngleDegrees = 0.0;
    CCurveData::GetBoundedBezierSample(int)const::nullend.m_Tangents[0].m_flWeight = 0.1;
    CCurveData::GetBoundedBezierSample(int)const::nullend.m_Tangents[1].m_flAngleDegrees = 0.0;
    CCurveData::GetBoundedBezierSample(int)const::nullend.m_Tangents[1].m_flWeight = 0.1;
    CCurveData::GetBoundedBezierSample(int)const::nullend.m_bUnifiedTangents = 1;
    CCurveData::GetBoundedBezierSample(int)const::nullend.m_bUnweightedTangents = 1;
    __cxa_guard_release(&`guard variable for'CCurveData::GetBoundedBezierSample(int)::nullend);
    return &CCurveData::GetBoundedBezierSample(int)const::nullend;
  }
}


// CCurveData::GetBoundedSample  (line 290, @0x000000000308b120, libserver.so)  // inlines: CExpressionSample, Get, GetEdgeCurveType, GetEdgeZeroValue, Init, SetCurveType, Vector2D
// calls: CCurveData::Get, __cxa_guard_acquire, __cxa_guard_release, CCurveData::GetEdgeZeroValue
// callers: CCurveData::FindSamples, CCurveData::GetIntensity
// globals: `guard variable for'CCurveData::GetBoundedSample(int)::nullend, CCurveData::GetBoundedSample(int)::nullend, `guard variable for'CCurveData::GetBoundedSample(int)::nullstart, CCurveData::GetBoundedSample(int)::nullstart
// local variable allocation has failed, the output may be wrong!
const CExpressionSample *__fastcall CCurveData::GetBoundedSample(const CCurveData *const this, int number)
{
  vec_t v3; // xmm1_4
  vec_t v4; // xmm0_4
  unsigned __int16 v5; // ax
  vec_t v7; // xmm0_4
  unsigned __int16 m_curvetype; // ax
  vec_t v9; // xmm0_4
  float EdgeZeroValue; // xmm0_4
  bool m_bActive; // al
  vec_t y; // xmm0_4
  vec_t v13; // [rsp+Ch] [rbp-14h]

  if ( number < 0 )
  {
    if ( `guard variable for'CCurveData::GetBoundedSample(int)::nullstart == 0
      && __cxa_guard_acquire(&`guard variable for'CCurveData::GetBoundedSample(int)::nullstart) != 0 )
    {
      CCurveData::GetBoundedSample(int)const::nullstart.m_AnchorPos.x = vec2_origin.x;
      y = vec2_origin.y;
      CCurveData::GetBoundedSample(int)const::nullstart.m_curvetype = 0;
      CCurveData::GetBoundedSample(int)const::nullstart.m_AnchorPos.y = y;
      *(&CCurveData::GetBoundedSample(int)const::nullstart + 5) |= 0x7FFFu;
      *(&CCurveData::GetBoundedSample(int)const::nullstart + 11) &= ~0x80u;
      __cxa_guard_release(&`guard variable for'CCurveData::GetBoundedSample(int)::nullstart);
    }
    if ( this->m_RampEdgeInfo[0].m_bActive )
    {
      CCurveData::GetBoundedSample(int)const::nullstart.m_AnchorPos.x = 0.0;
      v7 = this->m_RampEdgeInfo[0].m_ZeroPos.m_AnchorPos.y;
      *(&CCurveData::GetBoundedSample(int)const::nullstart + 11) &= ~0x80u;
      CCurveData::GetBoundedSample(int)const::nullstart.m_AnchorPos.y = v7;
    }
    else
    {
      EdgeZeroValue = CCurveData::GetEdgeZeroValue(this, *&number);
      m_bActive = this->m_RampEdgeInfo[0].m_bActive;
      CCurveData::GetBoundedSample(int)const::nullstart.m_AnchorPos.x = 0.0;
      *(&CCurveData::GetBoundedSample(int)const::nullstart + 11) &= ~0x80u;
      CCurveData::GetBoundedSample(int)const::nullstart.m_AnchorPos.y = EdgeZeroValue;
      if ( !m_bActive )
      {
        m_curvetype = 0;
        goto LABEL_13;
      }
    }
    m_curvetype = this->m_RampEdgeInfo[0].m_ZeroPos.m_curvetype;
LABEL_13:
    CCurveData::GetBoundedSample(int)const::nullstart.m_curvetype = m_curvetype;
    return &CCurveData::GetBoundedSample(int)const::nullstart;
  }
  if ( number < this->m_Ramp.m_Size )
    return CCurveData::Get(this, number);
  if ( `guard variable for'CCurveData::GetBoundedSample(int)::nullend == 0
    && __cxa_guard_acquire(&`guard variable for'CCurveData::GetBoundedSample(int)::nullend) != 0 )
  {
    CCurveData::GetBoundedSample(int)const::nullend.m_AnchorPos.x = vec2_origin.x;
    v9 = vec2_origin.y;
    CCurveData::GetBoundedSample(int)const::nullend.m_curvetype = 0;
    CCurveData::GetBoundedSample(int)const::nullend.m_AnchorPos.y = v9;
    *(&CCurveData::GetBoundedSample(int)const::nullend + 5) |= 0x7FFFu;
    *(&CCurveData::GetBoundedSample(int)const::nullend + 11) &= ~0x80u;
    __cxa_guard_release(&`guard variable for'CCurveData::GetBoundedSample(int)::nullend);
  }
  if ( this->m_RampEdgeInfo[1].m_bActive )
    v3 = this->m_RampEdgeInfo[1].m_ZeroPos.m_AnchorPos.y;
  else
    v3 = CCurveData::GetEdgeZeroValue(this, *&number);
  v13 = v3;
  v4 = this->m_pAccessor->GetDuration();
  v5 = 0;
  *(&CCurveData::GetBoundedSample(int)const::nullend + 11) &= ~0x80u;
  CCurveData::GetBoundedSample(int)const::nullend.m_AnchorPos.x = v4;
  CCurveData::GetBoundedSample(int)const::nullend.m_AnchorPos.y = v13;
  if ( this->m_RampEdgeInfo[1].m_bActive )
    v5 = this->m_RampEdgeInfo[1].m_ZeroPos.m_curvetype;
  CCurveData::GetBoundedSample(int)const::nullend.m_curvetype = v5;
  return &CCurveData::GetBoundedSample(int)const::nullend;
}


// CCurveData::RemoveOutOfRangeSamples  (line 310, @0x000000000308c850, libserver.so)  // inlines: CExpressionSample, Vector2D
// calls: CCurveData::Delete
// callers: CCurveData::Resort
void __fastcall CCurveData::RemoveOutOfRangeSamples(CCurveData *const this)
{
  int v2; // ebx
  __int64 v3; // r12
  float x; // xmm0_4
  float duration; // [rsp+Ch] [rbp-24h]

  duration = this->m_pAccessor->GetDuration();
  v2 = this->m_Ramp.m_Size - 1;
  if ( v2 >= 0 )
  {
    v3 = v2;
    do
    {
      x = this->m_Ramp.m_Memory.m_pMemory[v3].m_AnchorPos.x;
      if ( x < 0.0 || x > duration + 0.01 )
        CCurveData::Delete(this, v2, 0);
      --v2;
      --v3;
    }
    while ( v2 != -1 );
  }
}


// polyZeroes  (line 736, @0x0000000003089d80, libserver.so)  // inlines: ag_horner1, ag_zeroin, ag_zeroin2
// callers: CalculateBezierPointMaya2
// globals: sMachineTolerance
__int64 __fastcall polyZeroes(
        EtValue *Poly,
        EtInt deg,
        __m128d a,
        EtInt a_closed,
        double b,
        EtInt b_closed,
        EtValue *Roots)
{
  int v8; // ebx
  __int64 v9; // rax
  float v10; // xmm1_4
  __m128 v11; // xmm0
  __m128d v12; // xmm0
  float v13; // xmm10_4
  __int64 v14; // rax
  __m128d v15; // xmm0
  float v16; // xmm7_4
  float *v17; // rax
  float i; // xmm0_4
  __int64 v19; // rdx
  int v20; // eax
  float v21; // xmm0_4
  int v22; // r13d
  int v23; // eax
  __m128i v24; // xmm7
  __int64 v25; // rdx
  float *v26; // r9
  float *v27; // r8
  int v28; // r15d
  float v29; // xmm2_4
  float *v30; // rdx
  int v31; // edi
  int v32; // ecx
  __m128 v33; // xmm15
  EtInt v34; // esi
  __m128i v35; // xmm10
  __m128 v36; // xmm1
  float *v37; // r10
  float v38; // xmm0_4
  __int64 v39; // r10
  __int64 result; // rax
  float *v41; // r10
  __m128 v42; // xmm9
  float *v43; // r10
  __m128i v44; // xmm14
  float *v45; // r10
  float v46; // xmm0_4
  bool v47; // al
  bool v48; // dl
  float *v49; // r14
  __m128 v50; // xmm7
  unsigned int v51; // r10d
  int v52; // r8d
  __m128 v53; // xmm5
  __m128 v54; // xmm10
  float v55; // xmm3_4
  __m128 v56; // xmm14
  __m128 v57; // xmm11
  float v58; // xmm2_4
  __m128 v59; // xmm0
  __m128 v60; // xmm0
  __m128d v61; // xmm1
  float v62; // xmm0_4
  __m128 v63; // xmm1
  float v64; // xmm8_4
  double v65; // xmm5_8
  float v66; // xmm6_4
  float v67; // xmm4_4
  double v68; // xmm7_8
  float v69; // xmm4_4
  float *v70; // rax
  __m128 v71; // xmm11
  float v72; // xmm11_4
  double v73; // xmm6_8
  double v74; // xmm4_8
  __m128d v75; // xmm7
  float *v76; // r10
  __int64 v77; // r10
  double v78; // [rsp+8h] [rbp-1A8h]
  float v79; // [rsp+14h] [rbp-19Ch]
  float v80; // [rsp+30h] [rbp-180h]
  unsigned __int32 ea; // [rsp+4Ch] [rbp-164h]
  float v84; // [rsp+5Ch] [rbp-154h] BYREF
  float p_x[24]; // [rsp+60h] [rbp-150h] BYREF
  EtValue d_x[24]; // [rsp+C0h] [rbp-F0h] BYREF
  EtValue dr_x[36]; // [rsp+120h] [rbp-90h] BYREF

  v8 = deg;
  if ( deg >= 0 )
  {
    v9 = 0;
    v10 = 0.0;
    do
    {
      v11 = LODWORD(Poly[v9++]);
      v12 = _mm_and_ps(v11, 0x7FFFFFFFu);
      v10 = v10 + *v12.m128d_f64;
    }
    while ( deg >= v9 );
    v79 = sMachineTolerance;
    v78 = sMachineTolerance;
    v12.m128d_f64[0] = (deg + 1) * sMachineTolerance;
    v13 = _mm_movedup_pd(v12).m128d_f64[0];
    if ( v13 < v10 )
    {
      b = v10;
      v14 = 0;
      do
      {
        v15 = _mm_cvtps_pd(LODWORD(Poly[v14]));
        v15.m128d_f64[0] = v15.m128d_f64[0] * (1.0 / b);
        p_x[v14++] = _mm_movedup_pd(v15).m128d_f64[0];
      }
      while ( deg >= v14 );
      goto LABEL_7;
    }
    return 0xFFFFFFFFLL;
  }
  v79 = sMachineTolerance;
  v78 = sMachineTolerance;
  a.m128d_f64[0] = (deg + 1) * sMachineTolerance;
  v13 = _mm_movedup_pd(a).m128d_f64[0];
  if ( v13 >= 0.0 )
    return 0xFFFFFFFFLL;
LABEL_7:
  v16 = p_x[deg];
  v17 = &p_x[deg - 1];
  for ( i = fabs(v16); v13 > i; i = fabs(v16) )
  {
    v16 = *v17;
    --v8;
    --v17;
  }
  if ( v8 == 0 )
    return 0;
  if ( v8 != 1 )
  {
    if ( v8 > 0 )
    {
      v19 = 0;
      v20 = 1;
      do
      {
        v21 = v20++;
        i = v21 * p_x[v19 + 1];
        d_x[v19++] = i;
      }
      while ( v20 != v8 + 1 );
    }
    v22 = v8 - 1;
    v84 = v16;
    v23 = polyZeroes(d_x, v8 - 1, i, 0, *&b, 0, dr_x);
    v24 = LODWORD(v84);
    if ( v23 >= 0 && v8 >= 0 )
    {
      v25 = v22;
      v26 = &p_x[v25];
      v27 = dr_x;
      v28 = 0;
      v29 = 0.0;
      v30 = &p_x[v25 - 1 - v22];
      v31 = 0;
      v32 = 0;
      v84 = v13;
      v33 = 0u;
      v34 = b_closed;
      v35 = v24;
      while ( 1 )
      {
        if ( v32 == 0 )
        {
          v76 = v26;
          v29 = *v35.m128i_i32;
          do
          {
            --v76;
            v29 = (v29 * 0.0) + v76[1];
          }
          while ( v76 != v30 );
          v33 = 0u;
          if ( v84 >= fabs(v29) && a_closed != 0 )
          {
            v77 = v31++;
            Roots[v77] = 0.0;
          }
        }
        if ( v23 == v32 )
        {
          v36 = 0x3F800000u;
          v28 = 0;
        }
        else
        {
          v36 = *v27;
        }
        v37 = v26;
        v38 = *v35.m128i_i32;
        do
        {
          --v37;
          v38 = (v38 * v36.m128_f32[0]) + v37[1];
        }
        while ( v30 != v37 );
        if ( v28 != 0 )
        {
          ++v32;
          v28 = 0;
          if ( v23 < v32 )
            return v31;
        }
        else
        {
          if ( v84 <= fabs(v38) )
          {
            if ( v29 < 0.0 && v38 > 0.0 || v29 > 0.0 && v38 < 0.0 )
            {
              v41 = v26;
              v42 = v35;
              do
              {
                --v41;
                v42.m128_f32[0] = (v42.m128_f32[0] * v33.m128_f32[0]) + v41[1];
              }
              while ( v30 != v41 );
              v43 = v26;
              v44 = v35;
              if ( v79 <= fabs(v42.m128_f32[0]) )
              {
                do
                {
                  --v43;
                  *v44.m128i_i32 = (*v44.m128i_i32 * v36.m128_f32[0]) + v43[1];
                }
                while ( v30 != v43 );
                if ( v79 <= fabs(*v44.m128i_i32) )
                {
                  v49 = v27;
                  v50 = v36;
                  v51 = _mm_cvtsi128_si32(v35);
                  v52 = v23;
                  ea = v36.m128_i32[0];
                  v80 = v38;
                  while ( 2 )
                  {
                    v53 = v44;
                    v54.m128_i32[0] = v42.m128_i32[0];
                    v55 = v50.m128_f32[0] - v33.m128_f32[0];
                    v56 = v33;
                    v57 = v53;
                    v58 = v50.m128_f32[0] - v33.m128_f32[0];
LABEL_65:
                    if ( fabs(v57.m128_f32[0]) > fabs(v42.m128_f32[0]) )
                    {
                      v54 = v42;
                      v33 = v56;
                      v42 = v57;
                      v56 = v50;
                    }
                    else
                    {
                      v59 = v57;
                      v57.m128_i32[0] = v54.m128_i32[0];
                      v54 = v59;
                      v60 = v50;
                      v50.m128_i32[0] = v33.m128_i32[0];
                      v33 = v60;
                    }
                    v61.m128d_f64[1] = fabs(v33.m128_f32[0]);
                    v62 = (v56.m128_f32[0] - v33.m128_f32[0]) * 0.5;
                    v61.m128d_f64[0] = v61.m128d_f64[1] * (v78 + v78) + 0.0;
                    v63 = _mm_cvtpd_ps(_mm_unpacklo_pd(v61, v61));
                    if ( fabs(v62) <= v63.m128_f32[0] || v54.m128_f32[0] == 0.0 )
                    {
                      v23 = v52;
                      v35 = _mm_cvtsi32_si128(v51);
                      v27 = v49;
                      v36 = ea;
                      v38 = v80;
                      goto LABEL_43;
                    }
                    if ( v63.m128_f32[0] > fabs(v55) || fabs(v54.m128_f32[0]) >= fabs(v57.m128_f32[0]) )
                      goto LABEL_84;
                    v64 = v54.m128_f32[0] / v57.m128_f32[0];
                    if ( v56.m128_f32[0] == v50.m128_f32[0] )
                    {
                      v65 = v62;
                      v66 = 1.0 - v64;
                      v67 = (v65 + v65) * v64;
                      if ( v67 > 0.0 )
                        goto LABEL_73;
LABEL_89:
                      v67 = -v67;
                    }
                    else
                    {
                      v72 = v57.m128_f32[0] / v42.m128_f32[0];
                      v65 = v62;
                      v73 = (v54.m128_f32[0] / v42.m128_f32[0]) - 1.0;
                      v74 = (v65 + v65) * v72 * (v72 - (v54.m128_f32[0] / v42.m128_f32[0]))
                          - (v33.m128_f32[0] - v50.m128_f32[0]) * v73;
                      v75 = COERCE_UNSIGNED_INT64(v72);
                      v67 = v74 * v64;
                      v75.m128d_f64[0] = (v72 - 1.0) * v73 * (v64 - 1.0);
                      v66 = _mm_movedup_pd(v75).m128d_f64[0];
                      if ( v67 <= 0.0 )
                        goto LABEL_89;
LABEL_73:
                      v66 = -v66;
                    }
                    v68 = v67;
                    if ( v65 * 3.0 * v66 - fabs(v63.m128_f32[0] * v66) <= v68 + v68 || fabs(v55 * 0.5 * v66) <= v68 )
                    {
LABEL_84:
                      v58 = (v56.m128_f32[0] - v33.m128_f32[0]) * 0.5;
                    }
                    else
                    {
                      v69 = v67 / v66;
                      if ( fabs(v69) <= v63.m128_f32[0] )
                      {
                        if ( v62 <= 0.0 )
                        {
                          v50 = v33;
                          v55 = v58;
                          v58 = v69;
                          v50.m128_f32[0] = v33.m128_f32[0] - v63.m128_f32[0];
                        }
                        else
                        {
                          v50 = v63;
                          v55 = v58;
                          v58 = v69;
                          v50.m128_f32[0] = v63.m128_f32[0] + v33.m128_f32[0];
                        }
LABEL_79:
                        v70 = v26;
                        v71 = _mm_cvtsi32_si128(v51);
                        do
                        {
                          --v70;
                          v71.m128_f32[0] = (v71.m128_f32[0] * v50.m128_f32[0]) + v70[1];
                        }
                        while ( v30 != v70 );
                        v42 = _mm_unpacklo_ps(v42, v42);
                        v57 = _mm_unpacklo_ps(v71, v71);
                        if ( v57.m128_f32[0] * (v42.m128_f32[0] / fabs(v42.m128_f32[0])) > 0.0 )
                        {
                          v44 = v57;
                          v42 = v54;
                          continue;
                        }
                        goto LABEL_65;
                      }
                      v62 = v58;
                      v58 = v69;
                    }
                    break;
                  }
                  v50 = v33;
                  v55 = v62;
                  v50.m128_f32[0] = v33.m128_f32[0] + v58;
                  goto LABEL_79;
                }
                v33.m128_i32[0] = v36.m128_i32[0];
              }
LABEL_43:
              Roots[v31] = v33.m128_f32[0];
              if ( v31 != 0 )
              {
                v45 = &Roots[v31 - 1];
                if ( *v45 < (Roots[v31] - v84) )
                  ++v31;
                else
                  *v45 = (Roots[v31] + *v45) * 0.5;
              }
              else
              {
                v31 = 1;
              }
            }
          }
          else if ( v23 != v32 || v34 != 0 )
          {
            v39 = v31;
            v28 = 1;
            ++v31;
            Roots[v39] = v36.m128_f32[0];
          }
          if ( v23 < ++v32 )
            return v31;
        }
        ++v27;
        if ( v8 < v31 )
          return v31;
        v29 = v38;
        v33 = v36;
      }
    }
    return 0;
  }
  v46 = -p_x[0] / p_x[1];
  *Roots = v46;
  v47 = a_closed != 0 ? (v13 + v46) > 0.0 : (v46 - v13) > 0.0;
  v48 = b_closed != 0 ? (v46 - v13) < 1.0 : (v13 + v46) < 1.0;
  if ( !v47 || !v48 )
    return 0;
  if ( a_closed != 0 && v46 < 0.0 )
  {
    *Roots = 0.0;
    return 1;
  }
  else
  {
    result = 1;
    if ( b_closed != 0 && v46 > 1.0 )
      *Roots = 1.0;
  }
  return result;
}


// CalculateBezierPointMaya2  (line 868, @0x000000000308a760, libserver.so)  // inlines: EtCurve, Vector2D, bezierToPower, checkMonotonic, constrainInsideBounds, dbl_gt, dbl_mult, engineBezierCreate, engineBezierEvaluate, init_tolerance
// calls: polyZeroes, sqrtf
// globals: engineBezierCreate(EtCurve *,float *,float *)::sInited, sMachineTolerance
const Vector2D *__fastcall CalculateBezierPointMaya2(
        double t,
        const Vector2D *const p0,
        const Vector2D *const p1,
        const Vector2D *const p2,
        const Vector2D *const p3,
        float *a6,
        double a7,
        float a8,
        double a9,
        double a10,
        float a11,
        EtValue a12,
        float a13)
{
  float v13; // xmm12_4
  float v14; // xmm13_4
  float v15; // xmm14_4
  float v16; // xmm15_4
  float v18; // xmm11_4
  float x; // xmm4_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // edi
  float v23; // xmm8_4
  float v24; // xmm9_4
  bool v26; // r12
  double v27; // xmm1_8
  __m128d v29; // xmm0
  int v30; // eax
  float v31; // xmm2_4
  float v32; // xmm5_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm7_4
  bool v36; // zf
  __m128 v37; // xmm0
  __m128d v38; // xmm2
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm12_4
  __m128d v42; // xmm0
  float v43; // xmm3_4
  int i; // edx
  float v45; // xmm13_4
  float v46; // xmm7_4
  float v47; // xmm15_4
  float v48; // [rsp+28h] [rbp-58h]
  float v49; // [rsp+30h] [rbp-50h]
  float v50; // [rsp+34h] [rbp-4Ch]
  float y; // [rsp+38h] [rbp-48h]
  float v52; // [rsp+3Ch] [rbp-44h]
  EtValue Poly[4]; // [rsp+40h] [rbp-40h] BYREF
  EtValue Roots[12]; // [rsp+50h] [rbp-30h] BYREF

  v18 = *a6;
  x = p1->x;
  v20 = *a6 - p1->x;
  y = p1->y;
  v21 = p2->x;
  v22 = p3->x;
  v52 = a6[1];
  v23 = p2->y;
  v24 = p3->y;
  *&t = (*&t * v20) + p1->x;
  if ( engineBezierCreate(EtCurve *,float *,float *)::sInited == 0 )
  {
    v43 = 1.0;
    for ( i = 24; i != 0; --i )
      v43 = v43 * 0.5;
    engineBezierCreate(EtCurve *,float *,float *)::sInited = 1;
    sMachineTolerance = v43 + v43;
  }
  v26 = 0;
  if ( v20 != 0.0 )
  {
    v31 = (v21 - x) / v20;
    v32 = (v22 - x) / v20;
    if ( v31 == 0.3333333333333333 )
    {
      v26 = v32 == 0.6666666666666666;
      if ( v31 < 0.0 )
      {
LABEL_20:
        v33 = 0.0;
        if ( v32 <= 1.0 )
          goto LABEL_30;
        goto LABEL_13;
      }
    }
    else
    {
      v26 = 0;
      if ( v31 < 0.0 )
        goto LABEL_20;
    }
    v33 = (v21 - x) / v20;
    if ( v32 <= 1.0 )
    {
      if ( v31 > 1.0 )
      {
        v33 = v31;
LABEL_31:
        v34 = v32;
        goto LABEL_32;
      }
LABEL_30:
      v35 = v32;
      if ( v32 >= -1.0 )
        goto LABEL_14;
      goto LABEL_31;
    }
LABEL_13:
    v34 = 1.0;
    v35 = 1.0;
    if ( v33 <= 1.0 )
      goto LABEL_14;
LABEL_32:
    v41 = 1.0 - v34;
    if ( v33 < 0.0 )
    {
      v33 = 0.0;
      if ( v41 >= 0.0 )
        goto LABEL_43;
    }
    else if ( v41 >= 0.0 )
    {
      if ( v33 > 1.0 )
        goto LABEL_35;
LABEL_43:
      if ( v41 <= 1.0 )
      {
LABEL_38:
        v35 = 1.0 - v41;
LABEL_14:
        if ( v31 == v33 || v31 == 0.0 )
        {
          v36 = v32 == v35;
        }
        else
        {
          v36 = v32 == v35;
          v23 = (((v23 - y) * v33) / v31) + y;
        }
        if ( !v36 && v32 != 1.0 )
        {
          v37 = _mm_unpacklo_ps(LODWORD(v52), LODWORD(v52));
          v38 = _mm_cvtps_pd(v37);
          v38.m128d_f64[0] = v38.m128d_f64[0] - (v37.m128_f32[0] - v24) * (1.0 - v35) / (1.0 - v32);
          v24 = _mm_movedup_pd(v38).m128d_f64[0];
        }
        v50 = y;
        v39 = (v35 - v33) - v33;
        v16 = (v33 + v33) + v33;
        a12 = ((1.0 - v35) - (v35 - v33)) - v39;
        a8 = v18;
        v15 = (v39 + v39) + v39;
        v14 = x;
        v40 = (v24 - v23) - (v23 - y);
        a11 = ((v52 - v24) - (v24 - v23)) - v40;
        a13 = ((v23 - y) + (v23 - y)) + (v23 - y);
        v13 = (v40 + v40) + v40;
        goto LABEL_3;
      }
LABEL_35:
      if ( (((v33 - 2.0 + v41) * v33 + (v41 - 2.0) * v41 + 1.0) + sMachineTolerance) > 0.0 )
      {
        v42 = 0x3FF5555555555555uLL;
        if ( (sMachineTolerance + v33) < 1.333333333333333 )
        {
          v45 = v33 - 2.0;
          v46 = fsqrt((v45 * v45) - ((4.0 * (v33 - 1.0)) * (v33 - 1.0)));
          v47 = (v46 - (v33 - 2.0)) * 0.5;
          if ( (sMachineTolerance + v41) > v47 )
            v41 = v47 - sMachineTolerance;
          else
            v41 = fmaxf(((-v45 - v46) * 0.5) + sMachineTolerance, v41);
        }
        else
        {
          v42.m128d_f64[0] = 1.333333333333333 - sMachineTolerance;
          v33 = _mm_movedup_pd(v42).m128d_f64[0];
          v41 = 0.3333333333333333 - sMachineTolerance;
        }
      }
      goto LABEL_38;
    }
    v41 = 0.0;
    if ( v33 <= 1.0 )
      goto LABEL_38;
    goto LABEL_35;
  }
LABEL_3:
  v27 = 0.0;
  if ( *&t == v14 || (*&v27 = 1065353216, *&t == a8) )
  {
    if ( v26 )
      goto LABEL_5;
  }
  else
  {
    HIDWORD(v27) = HIDWORD(t);
    *&v27 = (*&t - v14) / (a8 - v14);
    if ( v26 )
      goto LABEL_5;
  }
  v29 = 0;
  *v29.m128d_f64 = 0.0 - *&v27;
  v48 = a11;
  v49 = a13;
  Poly[3] = a12;
  Poly[2] = v15;
  Poly[1] = v16;
  Poly[0] = 0.0 - *&v27;
  v30 = polyZeroes(Poly, 3, v29, 1, v27, 1, Roots);
  LODWORD(v27) = 0;
  a13 = v49;
  a11 = v48;
  if ( v30 == 1 )
    *&v27 = Roots[0];
LABEL_5:
  p0->x = *&t;
  p0->y = (((((a11 * *&v27) + v13) * *&v27) + a13) * *&v27) + v50;
  return p0;
}


// CalculateBezierPointMaya  (line 887, @0x0000000003089a40, libserver.so)  // inlines: Vector2DMultiply, Vector2DSubtract, operator*, operator+=, operator-
const Vector2D *__fastcall CalculateBezierPointMaya(
        float t,
        const Vector2D *const p0,
        const Vector2D *const p1,
        const Vector2D *const p2,
        const Vector2D *const p3,
        float *a6)
{
  float v6; // xmm8_4
  float x; // xmm4_4
  const Vector2D *result; // rax
  float v10; // xmm6_4
  float v11; // xmm1_4
  float v12; // xmm11_4
  float v13; // xmm7_4
  float v14; // xmm0_4
  float v15; // xmm10_4
  float v16; // xmm10_4
  float v17; // xmm12_4
  float v18; // xmm8_4
  float v19; // xmm6_4
  float v20; // xmm8_4
  float v21; // xmm13_4
  float v22; // xmm1_4
  float v23; // xmm5_4
  vec_t v24; // xmm4_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  vec_t v27; // xmm0_4
  vec_t v28; // xmm1_4
  vec_t v29; // xmm3_4

  v6 = *a6;
  x = p1->x;
  result = p0;
  v10 = p2->x - p1->x;
  v11 = (*a6 - p1->x) / 3.0;
  v12 = a6[1];
  v13 = p3->x - *a6;
  v14 = v11 + p1->x;
  if ( fabs(v10) <= 0.001 )
    v15 = 1.0;
  else
    v15 = (v14 - x) / v10;
  v16 = (v15 * (p2->y - p1->y)) + p1->y;
  v17 = v6 - v11;
  if ( fabs(v13) <= 0.001 )
    v18 = 1.0;
  else
    v18 = (v6 - v17) / v13;
  v19 = 1.0 - t;
  v20 = v18 * (p3->y - v12);
  v21 = (t * t) * t;
  v22 = (v19 * v19) * v19;
  v23 = ((v19 * v19) * 3.0) * t;
  v24 = x * v22;
  v25 = (3.0 * (1.0 - t)) * (t * t);
  p0->x = v24;
  v26 = (v22 * p1->y) + (v23 * v16);
  v27 = ((v14 * v23) + v24) + (v17 * v25);
  p0->x = v27;
  v28 = v26 + ((v12 - v20) * v25);
  p0->y = v28;
  v29 = (*a6 * v21) + v27;
  p0->y = (a6[1] * v21) + v28;
  p0->x = v29;
  return result;
}


// CalculateBezierPoint  (line 938, @0x0000000003089bd0, libserver.so)  // inlines: Vector2DMultiply, operator*, operator+=
// callers: CCurveData::GetIntensity
const Vector2D *__fastcall CalculateBezierPoint(
        float t,
        const Vector2D *const p0,
        const Vector2D *const p1,
        const Vector2D *const p2,
        const Vector2D *const p3,
        float *a6)
{
  float v6; // xmm1_4
  float v8; // xmm8_4
  float v9; // xmm6_4
  vec_t v10; // xmm7_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  vec_t v13; // xmm6_4
  vec_t v14; // xmm2_4
  vec_t v15; // xmm3_4
  vec_t v16; // xmm0_4
  vec_t v17; // xmm1_4
  vec_t v18; // xmm3_4

  v6 = 1.0 - t;
  v8 = (t * t) * t;
  v9 = (v6 * v6) * v6;
  v10 = p1->x * v9;
  v11 = ((v6 * v6) * 3.0) * t;
  v12 = ((1.0 - t) * 3.0) * (t * t);
  p0->x = v10;
  v13 = v9 * p1->y;
  p0->y = v13;
  v14 = (p2->y * v11) + v13;
  v15 = (v11 * p2->x) + v10;
  p0->y = v14;
  p0->x = v15;
  v16 = (p3->y * v12) + v14;
  v17 = (v12 * p3->x) + v15;
  p0->y = v16;
  p0->x = v17;
  v18 = (*a6 * v8) + v17;
  p0->y = (a6[1] * v8) + v16;
  p0->x = v18;
  return p0;
}


// CCurveData::FindSamples  (line 961, @0x000000000308b330, libserver.so)
// calls: CCurveData::GetBoundedSample
// callers: CCurveData::GetIntensity
__int64 __fastcall CCurveData::FindSamples(const CCurveData *const this, vec_t a2, float time)
{
  int m_Size; // r14d
  int v5; // r12d
  const CExpressionSample *BoundedSample; // r15
  int v7; // ebx
  const CExpressionSample *v8; // rax
  int v9; // ecx
  bool v10; // cc

  m_Size = this->m_Ramp.m_Size;
  if ( m_Size <= 0 )
    return 4294967294LL;
  v5 = 1;
  if ( m_Size >= 4 )
    v5 = m_Size >> 1;
  BoundedSample = 0;
  v7 = v5;
LABEL_5:
  if ( v7 <= m_Size )
  {
    while ( v7 >= -1 )
    {
      BoundedSample = CCurveData::GetBoundedSample(this, v7);
      v8 = CCurveData::GetBoundedSample(this, v7 + 1);
      v9 = v5 >> 1;
      v10 = v5 < 4;
      v5 = 1;
      if ( !v10 )
        v5 = v9;
      if ( BoundedSample->m_AnchorPos.x <= a2 )
      {
        if ( a2 <= v8->m_AnchorPos.x )
          return v7;
        v7 += v5;
        goto LABEL_5;
      }
      v7 -= v5;
      if ( v7 > m_Size )
        break;
    }
  }
  if ( BoundedSample != 0 )
    return v7;
  else
    return 4294967294LL;
}


// CCurveData::GetIntensity  (line 1006, @0x000000000308b400, libserver.so)  // inlines: GetControlPointPos, GetCurveType, Second, Vector, Vector2DAdd, Vector2DMultiply, VectorLerp, operator*, operator+, operator=
// calls: CCurveData::FindSamples, CCurveData::GetBoundedSample, Interpolator_CurveInterpolatorsForType, Interpolator_CurveInterpolate, CCurveData::GetBoundedBezierSample, CBezierHandlesForSample::CBezierHandleTangent::GetTangentPoint, CalculateBezierPoint
// callers: CFlexAnimationTrack::GetFracIntensity, CChoreoEvent::GetIntensity, CChoreoEvent::GetIntensityInternal
vec_t __fastcall CCurveData::GetIntensity(const CCurveData *const this, double a2, float time)
{
  float v4; // xmm1_4
  int Samples; // eax
  int v6; // r12d
  const CExpressionSample *BoundedSample; // r14
  const CExpressionSample *v8; // r13
  CExpressionSample *v9; // r15
  const CExpressionSample *v10; // rax
  vec_t y; // xmm2_4
  float v12; // xmm0_4
  vec_t x; // xmm3_4
  vec_t v14; // xmm2_4
  vec_t v15; // xmm3_4
  vec_t v16; // xmm2_4
  vec_t v17; // xmm2_4
  vec_t v18; // xmm3_4
  float v19; // xmm4_4
  int m_curvetype; // r8d
  int v21; // r14d
  float v22; // xmm2_4
  float v23; // xmm3_4
  int v24; // edi
  vec_t result; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm3_4
  const CBezierHandlesForSample *BoundedBezierSample; // r12
  const CBezierHandlesForSample *v29; // r14
  vec_t v30; // xmm0_4
  vec_t v31; // xmm0_4
  int number; // [rsp+8h] [rbp-D8h]
  int startCurve; // [rsp+10h] [rbp-D0h]
  float f; // [rsp+18h] [rbp-C8h]
  float timea; // [rsp+1Ch] [rbp-C4h]
  int dummy; // [rsp+24h] [rbp-BCh] BYREF
  int earlypart; // [rsp+28h] [rbp-B8h] BYREF
  int laterpart; // [rsp+2Ch] [rbp-B4h] BYREF
  Vector2D handleStart; // [rsp+30h] [rbp-B0h] BYREF
  Vector2D handleEnd; // [rsp+40h] [rbp-A0h] BYREF
  Vector vPre; // [rsp+50h] [rbp-90h] BYREF
  Vector vStart; // [rsp+60h] [rbp-80h] BYREF
  Vector vEnd; // [rsp+70h] [rbp-70h] BYREF
  Vector vNext; // [rsp+80h] [rbp-60h] BYREF
  Vector vOut1; // [rsp+90h] [rbp-50h] BYREF
  Vector vOut2; // [rsp+A0h] [rbp-40h] BYREF

  timea = *&a2;
  if ( (*(this->m_pAccessor->_vptr_ICurveDataAccessor + 1))(this->m_pAccessor, a2, time) != 0 )
  {
    if ( this->m_Ramp.m_Size <= 0 )
      return 1.0;
    Samples = CCurveData::FindSamples(this, timea, v4);
    v6 = Samples;
    if ( Samples != -2 )
    {
      BoundedSample = CCurveData::GetBoundedSample(this, Samples - 1);
      v8 = CCurveData::GetBoundedSample(this, v6);
      number = v6 + 1;
      v9 = CCurveData::GetBoundedSample(this, v6 + 1);
      v10 = CCurveData::GetBoundedSample(this, v6 + 2);
      y = BoundedSample->m_AnchorPos.y;
      v12 = v9->m_AnchorPos.x - v8->m_AnchorPos.x;
      vPre.x = BoundedSample->m_AnchorPos.x;
      vPre.y = y;
      vPre.z = 0.0;
      x = v8->m_AnchorPos.x;
      v14 = v8->m_AnchorPos.y;
      vStart.z = 0.0;
      vStart.x = x;
      vStart.y = v14;
      v15 = v9->m_AnchorPos.x;
      v16 = v9->m_AnchorPos.y;
      vEnd.z = 0.0;
      vEnd.x = v15;
      vEnd.y = v16;
      v17 = v10->m_AnchorPos.x;
      v18 = v10->m_AnchorPos.y;
      vNext.z = 0.0;
      vNext.x = v17;
      vNext.y = v18;
      if ( v12 <= 0.0 )
      {
        f = 0.0;
      }
      else
      {
        v19 = (timea - v8->m_AnchorPos.x) / v12;
        if ( v19 <= 1.0 )
          f = fmaxf(0.0, v19);
        else
          f = 1.0;
      }
      m_curvetype = v8->m_curvetype;
      v21 = v9->m_curvetype;
      if ( v8->m_curvetype == 0 )
        m_curvetype = (*(this->m_pAccessor->_vptr_ICurveDataAccessor + 2))(this->m_pAccessor);
      if ( v21 == 0 )
      {
        startCurve = m_curvetype;
        v21 = (*(this->m_pAccessor->_vptr_ICurveDataAccessor + 2))(this->m_pAccessor);
        m_curvetype = startCurve;
      }
      Interpolator_CurveInterpolatorsForType(m_curvetype, &dummy, &earlypart);
      Interpolator_CurveInterpolatorsForType(v21, &laterpart, &dummy);
      v24 = earlypart;
      result = vStart.y;
      if ( earlypart == 15 || (result = vEnd.y, laterpart == 15) )
      {
LABEL_20:
        if ( result <= 1.0 )
        {
          if ( result >= 0.0 )
            return result;
          return 0.0;
        }
        return 1.0;
      }
      if ( earlypart == 16 || laterpart == 16 )
      {
        BoundedBezierSample = CCurveData::GetBoundedBezierSample(this, v6);
        v29 = CCurveData::GetBoundedBezierSample(this, number);
        if ( BoundedBezierSample != 0 )
        {
          CBezierHandlesForSample::CBezierHandleTangent::GetTangentPoint(&vOut2.x, &BoundedBezierSample->m_Tangents[1]);
          v22 = vOut2.x + v8->m_AnchorPos.x;
          v30 = vOut2.y + v8->m_AnchorPos.y;
          handleStart.x = v22;
          handleStart.y = v30;
        }
        else
        {
          handleStart.x = vPre.x;
          handleStart.y = vPre.y;
        }
        if ( v29 != 0 )
        {
          CBezierHandlesForSample::CBezierHandleTangent::GetTangentPoint(&vOut2.x, v29->m_Tangents);
          v22 = vOut2.x + v9->m_AnchorPos.x;
          v31 = vOut2.y + v9->m_AnchorPos.y;
          handleEnd.x = v22;
          handleEnd.y = v31;
        }
        else
        {
          handleEnd.x = vNext.x;
          handleEnd.y = vNext.y;
        }
        v24 = earlypart;
        if ( earlypart != laterpart )
        {
          if ( earlypart == 16 )
          {
            CalculateBezierPoint(f, &vOut2, &v8->m_AnchorPos, &handleStart, &handleEnd, &v9->m_AnchorPos);
            vOut1.x = vOut2.x;
            vOut1.y = vOut2.y;
            goto LABEL_17;
          }
LABEL_16:
          Interpolator_CurveInterpolate(v24, &vPre, &vStart, &vEnd, &vNext, f, &vOut1, 0.0, v22, v23);
LABEL_17:
          if ( laterpart == 16 )
            CalculateBezierPoint(f, &vOut2, &v8->m_AnchorPos, &handleStart, &handleEnd, &v9->m_AnchorPos);
          else
            Interpolator_CurveInterpolate(laterpart, &vPre, &vStart, &vEnd, &vNext, f, &vOut2, 0.0, v26, v27);
          result = ((vOut2.y - vOut1.y) * f) + vOut1.y;
          goto LABEL_20;
        }
        if ( earlypart == 16 )
        {
          CalculateBezierPoint(f, &vOut2, &v8->m_AnchorPos, &handleStart, &handleEnd, &v9->m_AnchorPos);
          result = vOut2.y;
          goto LABEL_20;
        }
      }
      else if ( earlypart != laterpart )
      {
        goto LABEL_16;
      }
      Interpolator_CurveInterpolate(v24, &vPre, &vStart, &vEnd, &vNext, f, &vOut2, 0.0, v22, v23);
      result = vOut2.y;
      goto LABEL_20;
    }
  }
  return 0.0;
}


// CCurveData::SetEdgeInfo  (line 1179, @0x000000000308b9c0, libserver.so)  // inlines: SetActive, SetCurveType, SetValue
// callers: CFlexAnimationTrack::InitLeftRightEdge
void __fastcall CCurveData::SetEdgeInfo(
        CCurveData *const this,
        bool leftEdge,
        unsigned __int16 curveType,
        vec_t zero,
        bool bActive)
{
  EdgeInfo_t *v5; // rdi

  v5 = &this->m_RampEdgeInfo[!leftEdge];
  v5->m_ZeroPos.m_curvetype = curveType;
  v5->m_ZeroPos.m_AnchorPos.y = zero;
  v5->m_bActive = bActive;
}


// CCurveData::GetEdgeInfo  (line 1187, @0x000000000308b9f0, libserver.so)  // inlines: GetCurveType
void __fastcall CCurveData::GetEdgeInfo(
        const CCurveData *const this,
        bool leftEdge,
        int *const curveType,
        float *const zero,
        bool *const bActive)
{
  EdgeInfo_t *v5; // rdi

  v5 = &this->m_RampEdgeInfo[!leftEdge];
  *curveType = v5->m_ZeroPos.m_curvetype;
  *zero = v5->m_ZeroPos.m_AnchorPos.y;
  *bActive = v5->m_bActive;
}


// CCurveData::SetEdgeActive  (line 1195, @0x000000000308ba20, libserver.so)  // inlines: SetActive
void __fastcall CCurveData::SetEdgeActive(CCurveData *const this, bool leftEdge, bool state)
{
  this->m_RampEdgeInfo[!leftEdge].m_bActive = state;
}


// CCurveData::IsEdgeActive  (line 1201, @0x000000000308ba40, libserver.so)
bool __fastcall CCurveData::IsEdgeActive(const CCurveData *const this, bool leftEdge)
{
  return this->m_RampEdgeInfo[!leftEdge].m_bActive;
}


// CCurveData::GetEdgeCurveType  (line 1207, @0x000000000308ba60, libserver.so)  // inlines: GetCurveType, IsEdgeActive
int __fastcall CCurveData::GetEdgeCurveType(const CCurveData *const this, bool leftEdge)
{
  int result; // eax
  EdgeInfo_t *v3; // rsi

  result = 0;
  v3 = &this->m_RampEdgeInfo[!leftEdge];
  if ( v3->m_bActive )
    return v3->m_ZeroPos.m_curvetype;
  return result;
}


// CCurveData::GetEdgeZeroValue  (line 1218, @0x0000000003089ca0, libserver.so)
// callers: CCurveData::GetBoundedSample, CCurveData::GetEdgeZeroValue
float __fastcall CCurveData::GetEdgeZeroValue(const CCurveData *const this, __int64 leftEdge)
{
  return (*(this->m_pAccessor->_vptr_ICurveDataAccessor + 3))(this->m_pAccessor, leftEdge);
}


// CCurveData::GetEdgeZeroValue  (line 1218, @0x000000000308ba90, libserver.so)
// calls: CCurveData::GetEdgeZeroValue
// callers: CFlexAnimationTrack::GetFracIntensity, CFlexAnimationTrack::GetIntensityInternal
float __fastcall CCurveData::GetEdgeZeroValue(const CCurveData *const this, bool leftEdge)
{
  EdgeInfo_t *v2; // rsi

  v2 = &this->m_RampEdgeInfo[!leftEdge];
  if ( v2->m_bActive )
    return v2->m_ZeroPos.m_AnchorPos.y;
  else
    return CCurveData::GetEdgeZeroValue(this, v2);
}


// CCurveData::SaveToBuffer  (line 1230, @0x000000000308bac0, libserver.so)  // inlines: Element, Get, GetBezierHandleIndex, LowLevelByteSwap<float>, LowLevelByteSwap<short unsigned int>, PeekPut, PutChar, PutFloat, PutTabs, PutType<float>, PutType<short unsigned int>, PutTypeBin<char>, PutTypeBin<float>, PutTypeBin<short unsigned int>, PutTypeBin<unsigned char>, PutUnsignedChar, PutUnsignedShort, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<short unsigned int>, V_memcpy, WasLastCharacterCR, memcpy, operator[]
// calls: CUtlBuffer::Printf, CCurveData::Get, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CChoreoEvent::SaveFlexAnimationsToBuffer, CChoreoEvent::SaveToBuffer, CChoreoScene::SaveToBinaryBuffer
// strings: "%hu"
void __fastcall CCurveData::SaveToBuffer(
        const CCurveData *const this,
        CUtlBuffer *const buf,
        IChoreoStringPool *pStringPool)
{
  int m_Size; // eax
  __int16 v6; // bx
  int v7; // ebx
  CExpressionSample *v8; // rax
  CExpressionSample *v9; // r12
  int v10; // r14d
  __int16 v11; // ax
  CUtlVector<CBezierHandlesForSample,CUtlMemory<CBezierHandlesForSample,int> > *m_pBezierControls; // rdx
  __int64 v13; // r14
  unsigned __int8 m_Flags; // al
  int v15; // edx
  int m_nOffset; // edi
  int m_nTab; // r12d
  int v18; // edx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  int v21; // edi
  int v22; // r12d
  int v23; // r12d
  float v24; // xmm0_4
  float v25; // xmm0_4
  int v26; // eax
  int v27; // eax
  unsigned __int8 v28; // al
  int v29; // edx
  int v30; // eax
  int v31; // edi
  int v32; // r12d
  unsigned __int8 *v33; // rdx
  unsigned __int8 *v34; // rdx
  unsigned __int8 *v35; // rdx
  int m_Put; // eax
  unsigned __int8 *v37; // rdx
  unsigned __int8 flags; // [rsp+8h] [rbp-58h]
  int flagsa; // [rsp+8h] [rbp-58h]
  int flagsb; // [rsp+8h] [rbp-58h]
  int flagsc; // [rsp+8h] [rbp-58h]
  int c; // [rsp+Ch] [rbp-54h]
  __int16 v43; // [rsp+1Eh] [rbp-42h]
  vec_t x; // [rsp+20h] [rbp-40h]
  float v45; // [rsp+24h] [rbp-3Ch]
  float v46; // [rsp+28h] [rbp-38h]
  int v47; // [rsp+2Ch] [rbp-34h]
  int v48; // [rsp+2Ch] [rbp-34h]
  int v49; // [rsp+2Ch] [rbp-34h]
  __int16 v50; // [rsp+2Ch] [rbp-34h]

  m_Size = this->m_Ramp.m_Size;
  c = m_Size;
  v6 = m_Size;
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%hu", m_Size);
  }
  else
  {
    v43 = m_Size;
    if ( CUtlBuffer::CheckPut(buf, 2) )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        m_Put = buf->m_Put;
        v37 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
        if ( v37 != 0 )
        {
          LOBYTE(v50) = HIBYTE(v43);
          HIBYTE(v50) = v43;
          *v37 = v50;
          m_Put = buf->m_Put;
        }
      }
      else
      {
        *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v6;
        m_Put = buf->m_Put;
      }
      buf->m_Put = m_Put + 2;
      CUtlBuffer::AddNullTermination(buf);
    }
  }
  v7 = 0;
  if ( c > 0 )
  {
    do
    {
      v8 = CCurveData::Get(this, v7);
      v9 = v8;
      if ( (buf->m_Flags & 1) != 0 )
      {
        CUtlBuffer::Printf(buf, "%f", v8->m_AnchorPos.x);
      }
      else
      {
        x = v8->m_AnchorPos.x;
        flagsc = LODWORD(v8->m_AnchorPos.x);
        if ( CUtlBuffer::CheckPut(buf, 4) )
        {
          if ( (*&buf->m_Byteswap & 1) != 0 )
          {
            v30 = buf->m_Put;
            v33 = &buf->m_Memory.m_pMemory[v30 - buf->m_nOffset];
            if ( v33 != 0 )
            {
              LOBYTE(v47) = HIBYTE(x);
              BYTE1(v47) = BYTE2(x);
              BYTE2(v47) = BYTE1(x);
              HIBYTE(v47) = LOBYTE(x);
              *v33 = v47;
              v30 = buf->m_Put;
            }
          }
          else
          {
            *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = flagsc;
            v30 = buf->m_Put;
          }
          buf->m_Put = v30 + 4;
          CUtlBuffer::AddNullTermination(buf);
        }
      }
      v10 = (255.0 * v9->m_AnchorPos.y);
      if ( (buf->m_Flags & 1) != 0 )
      {
        CUtlBuffer::Printf(buf, "%hu", v10);
      }
      else if ( CUtlBuffer::CheckPut(buf, 1) )
      {
        buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v10;
        ++buf->m_Put;
        CUtlBuffer::AddNullTermination(buf);
      }
      v11 = (2 * *(v9 + 5)) >> 1;
      if ( v11 != -1 )
      {
        m_pBezierControls = this->m_pBezierControls;
        if ( m_pBezierControls != 0 )
        {
          v13 = &m_pBezierControls->m_Memory.m_pMemory[v11];
          if ( v13 != 0 )
          {
            m_Flags = buf->m_Flags;
            v15 = buf->m_Put;
            if ( (m_Flags & 1) != 0
              && (m_nOffset = buf->m_nOffset, v15 != m_nOffset)
              && buf->m_Memory.m_pMemory[v15 - 1 - m_nOffset] == 10
              || v15 == 0 )
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
                    goto LABEL_19;
                }
              }
            }
LABEL_19:
            if ( CUtlBuffer::CheckPut(buf, 1) )
            {
              buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 1;
              ++buf->m_Put;
              CUtlBuffer::AddNullTermination(buf);
            }
            v18 = buf->m_Put;
            v19 = *(v13 + 16) | 2;
            if ( *(v13 + 17) == 0 )
              v19 = *(v13 + 16);
            flags = v19;
            v20 = buf->m_Flags;
            if ( (v20 & 1) != 0 && (v21 = buf->m_nOffset, v18 != v21) && buf->m_Memory.m_pMemory[v18 - 1 - v21] == 10
              || v18 == 0 )
            {
              v22 = 0;
              if ( (v20 & 0x10) == 0 )
                v22 = buf->m_nTab;
              while ( --v22 >= 0 )
              {
                while ( CUtlBuffer::CheckPut(buf, 1) )
                {
                  buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 9;
                  ++buf->m_Put;
                  CUtlBuffer::AddNullTermination(buf);
                  if ( --v22 < 0 )
                    goto LABEL_31;
                }
              }
            }
LABEL_31:
            if ( CUtlBuffer::CheckPut(buf, 1) )
            {
              buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = flags;
              ++buf->m_Put;
              CUtlBuffer::AddNullTermination(buf);
            }
            v23 = 0;
            v24 = *v13;
            if ( (buf->m_Flags & 1) != 0 )
            {
LABEL_34:
              CUtlBuffer::Printf(buf, "%f", v24);
            }
            else
            {
              while ( 1 )
              {
                v45 = v24;
                flagsa = LODWORD(v24);
                if ( !CUtlBuffer::CheckPut(buf, 4) )
                  break;
                if ( (*&buf->m_Byteswap & 1) != 0 )
                {
                  v26 = buf->m_Put;
                  v34 = &buf->m_Memory.m_pMemory[v26 - buf->m_nOffset];
                  if ( v34 != 0 )
                  {
                    LOBYTE(v48) = HIBYTE(v45);
                    BYTE1(v48) = BYTE2(v45);
                    BYTE2(v48) = BYTE1(v45);
                    HIBYTE(v48) = LOBYTE(v45);
                    *v34 = v48;
                    v26 = buf->m_Put;
                  }
                }
                else
                {
                  *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = flagsa;
                  v26 = buf->m_Put;
                }
                buf->m_Put = v26 + 4;
                CUtlBuffer::AddNullTermination(buf);
                v25 = *(v13 + 4);
                if ( (buf->m_Flags & 1) != 0 )
                  goto LABEL_36;
LABEL_43:
                v46 = v25;
                flagsb = LODWORD(v25);
                if ( CUtlBuffer::CheckPut(buf, 4) )
                {
                  if ( (*&buf->m_Byteswap & 1) != 0 )
                  {
                    v27 = buf->m_Put;
                    v35 = &buf->m_Memory.m_pMemory[v27 - buf->m_nOffset];
                    if ( v35 != 0 )
                    {
                      LOBYTE(v49) = HIBYTE(v46);
                      BYTE1(v49) = BYTE2(v46);
                      BYTE2(v49) = BYTE1(v46);
                      HIBYTE(v49) = LOBYTE(v46);
                      *v35 = v49;
                      v27 = buf->m_Put;
                    }
                  }
                  else
                  {
                    *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = flagsb;
                    v27 = buf->m_Put;
                  }
                  buf->m_Put = v27 + 4;
                  CUtlBuffer::AddNullTermination(buf);
                }
LABEL_37:
                ++v23;
                v13 += 8;
                if ( v23 == 2 )
                  goto LABEL_51;
                v24 = *v13;
                if ( (buf->m_Flags & 1) != 0 )
                  goto LABEL_34;
              }
            }
            v25 = *(v13 + 4);
            if ( (buf->m_Flags & 1) == 0 )
              goto LABEL_43;
LABEL_36:
            CUtlBuffer::Printf(buf, "%f", v25);
            goto LABEL_37;
          }
        }
      }
      v28 = buf->m_Flags;
      v29 = buf->m_Put;
      if ( (v28 & 1) != 0 && (v31 = buf->m_nOffset, v29 != v31) && buf->m_Memory.m_pMemory[v29 - 1 - v31] == 10
        || v29 == 0 )
      {
        v32 = 0;
        if ( (v28 & 0x10) == 0 )
          v32 = buf->m_nTab;
        while ( --v32 >= 0 )
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
        buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 0;
        ++buf->m_Put;
        CUtlBuffer::AddNullTermination(buf);
      }
LABEL_51:
      ++v7;
    }
    while ( v7 != c );
  }
}


// CCurveData::RestoreFromBuffer  (line 1285, @0x000000000308d790, libserver.so)  // inlines: CBezierHandleTangent, CBezierHandlesForSample, CExpressionSample, GetChar, GetFloat, GetType<float>, GetType<short unsigned int>, GetTypeBin<char>, GetTypeBin<float>, GetTypeBin<short unsigned int>, GetTypeBin<unsigned char>, GetTypeText<float>, GetTypeText<short unsigned int>, GetUnsignedChar, GetUnsignedShort, LowLevelByteSwap<float>, LowLevelByteSwap<short unsigned int>, PeekGet, StringToNumber<float>, StringToNumber<short unsigned int>, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<short unsigned int>, V_memcpy, memcpy, operator=, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, CCurveData::Add, CUtlBuffer::CheckGet, V_strtoui64, V_strtod
// callers: CChoreoEvent::RestoreFlexAnimationsFromBuffer, CChoreoEvent::RestoreFromBuffer, CChoreoScene::RestoreFromBinaryBuffer
bool __fastcall CCurveData::RestoreFromBuffer(
        CCurveData *const this,
        SceneBinaryVersion_t nRestoreVersion,
        CUtlBuffer *const buf,
        IChoreoStringPool *pStringPool)
{
  bool v5; // al
  __int64 v6; // rdx
  int v7; // r12d
  bool v8; // al
  float v9; // xmm0_4
  bool v10; // al
  float v11; // xmm1_4
  vec_t v12; // xmm0_4
  bool v13; // al
  int v14; // eax
  bool v15; // zf
  float v16; // xmm0_4
  bool v17; // al
  int v18; // edx
  int v19; // eax
  int v20; // edx
  bool v21; // al
  float m_flAngleDegrees; // ebx
  unsigned __int8 v23; // al
  int v24; // edx
  int v25; // eax
  bool v26; // al
  bool v27; // dl
  int v28; // eax
  int v29; // edx
  CBezierHandlesForSample *p_handles; // rbx
  bool v31; // al
  float v32; // xmm0_4
  bool v33; // al
  float v34; // xmm0_4
  bool v36; // al
  int v37; // eax
  float v38; // xmm0_4
  bool v39; // al
  int v40; // eax
  float v41; // ebx
  float v42; // ebx
  unsigned __int8 v43; // al
  int m_Get; // edx
  int v45; // eax
  int v46; // edx
  int v47; // eax
  unsigned __int16 m_flAngleDegrees_low; // dx
  float v49; // ebx
  unsigned __int16 v50; // ax
  unsigned __int8 **v51; // rdx
  float anchor; // [rsp+0h] [rbp-90h]
  int anchora; // [rsp+0h] [rbp-90h]
  int anchorb; // [rsp+0h] [rbp-90h]
  int c; // [rsp+14h] [rbp-7Ch]
  int nIncrement; // [rsp+24h] [rbp-6Ch] BYREF
  unsigned __int8 *v59; // [rsp+28h] [rbp-68h] BYREF
  CExpressionSample s; // [rsp+30h] [rbp-60h] BYREF
  CBezierHandlesForSample handles; // [rsp+40h] [rbp-50h] BYREF

  if ( nRestoreVersion <= 6 )
  {
    if ( (buf->m_Flags & 1) != 0 )
    {
      LODWORD(s.m_AnchorPos.x) = 128;
      v21 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &s);
      v6 = 0;
      if ( v21 )
      {
        LOBYTE(v6) = 10;
        handles.m_Tangents[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
        m_flAngleDegrees = handles.m_Tangents[0].m_flAngleDegrees;
        v23 = V_strtoui64(*handles.m_Tangents, &handles, v6);
        if ( LODWORD(handles.m_Tangents[0].m_flAngleDegrees) != LODWORD(m_flAngleDegrees) )
          buf->m_Get += LODWORD(handles.m_Tangents[0].m_flAngleDegrees) - LODWORD(m_flAngleDegrees);
        LODWORD(v6) = v23;
      }
      goto LABEL_4;
    }
    if ( !CUtlBuffer::CheckGet(buf, 1) )
      return 1;
    m_Get = buf->m_Get;
    v45 = m_Get + 1;
    v46 = buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
    buf->m_Get = v45;
    c = v46;
  }
  else
  {
    if ( (buf->m_Flags & 1) != 0 )
    {
      LODWORD(s.m_AnchorPos.x) = 128;
      v5 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &s);
      v6 = 0;
      if ( v5 )
      {
        LOBYTE(v6) = 10;
        handles.m_Tangents[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
        v49 = handles.m_Tangents[0].m_flAngleDegrees;
        v50 = V_strtoui64(*handles.m_Tangents, &handles, v6);
        LOWORD(v59) = v50;
        if ( LODWORD(handles.m_Tangents[0].m_flAngleDegrees) != LODWORD(v49) )
          buf->m_Get += LODWORD(handles.m_Tangents[0].m_flAngleDegrees) - LODWORD(v49);
        LODWORD(v6) = v50;
      }
LABEL_4:
      c = v6;
      goto LABEL_5;
    }
    if ( !CUtlBuffer::CheckGet(buf, 2) )
      return 1;
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      v47 = buf->m_Get;
      v51 = &buf->m_Memory.m_pMemory[v47 - buf->m_nOffset];
      if ( v51 == 0 )
        v51 = &v59;
      LOWORD(handles.m_Tangents[0].m_flAngleDegrees) = v59;
      LOBYTE(handles.m_Tangents[0].m_flAngleDegrees) = *(v51 + 1);
      BYTE1(handles.m_Tangents[0].m_flAngleDegrees) = *v51;
      m_flAngleDegrees_low = LOWORD(handles.m_Tangents[0].m_flAngleDegrees);
    }
    else
    {
      v47 = buf->m_Get;
      m_flAngleDegrees_low = *&buf->m_Memory.m_pMemory[v47 - buf->m_nOffset];
    }
    buf->m_Get = v47 + 2;
    c = m_flAngleDegrees_low;
  }
LABEL_5:
  v7 = 0;
  if ( c == 0 )
    return 1;
LABEL_12:
  while ( 2 )
  {
    if ( (buf->m_Flags & 1) != 0 )
    {
      LODWORD(s.m_AnchorPos.x) = 128;
      v8 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &s);
      v9 = 0.0;
      if ( v8 )
      {
        handles.m_Tangents[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
        v41 = handles.m_Tangents[0].m_flAngleDegrees;
        v9 = V_strtod(*handles.m_Tangents, &handles);
        *&v59 = v9;
        if ( LODWORD(handles.m_Tangents[0].m_flAngleDegrees) != LODWORD(v41) )
          buf->m_Get += LODWORD(handles.m_Tangents[0].m_flAngleDegrees) - LODWORD(v41);
      }
    }
    else
    {
      v13 = CUtlBuffer::CheckGet(buf, 4);
      v9 = 0.0;
      if ( v13 )
      {
        v14 = buf->m_Get;
        v15 = (*&buf->m_Byteswap & 1) == 0;
        v16 = *&buf->m_Memory.m_pMemory[v14 - buf->m_nOffset];
        *&v59 = v16;
        if ( !v15 )
        {
          LOBYTE(handles.m_Tangents[0].m_flAngleDegrees) = BYTE3(v59);
          BYTE1(handles.m_Tangents[0].m_flAngleDegrees) = BYTE2(v59);
          BYTE2(handles.m_Tangents[0].m_flAngleDegrees) = BYTE1(v59);
          HIBYTE(handles.m_Tangents[0].m_flAngleDegrees) = v59;
          v16 = handles.m_Tangents[0].m_flAngleDegrees;
        }
        v15 = (buf->m_Flags & 1) == 0;
        anchor = v16;
        buf->m_Get = v14 + 4;
        if ( v15 )
          goto LABEL_17;
        goto LABEL_9;
      }
    }
    anchor = v9;
    if ( (buf->m_Flags & 1) == 0 )
    {
LABEL_17:
      v17 = CUtlBuffer::CheckGet(buf, 1);
      v11 = 0.0;
      v12 = anchor;
      if ( v17 )
      {
        v18 = buf->m_Get;
        v19 = v18 + 1;
        v20 = buf->m_Memory.m_pMemory[v18 - buf->m_nOffset];
        buf->m_Get = v19;
        v11 = v20 / 255.0;
      }
      goto LABEL_10;
    }
LABEL_9:
    LODWORD(s.m_AnchorPos.x) = 128;
    v10 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &s);
    v11 = 0.0;
    v12 = anchor;
    if ( v10 )
    {
      handles.m_Tangents[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
      v42 = handles.m_Tangents[0].m_flAngleDegrees;
      v43 = V_strtoui64(*handles.m_Tangents, &handles, 10);
      v12 = anchor;
      if ( LODWORD(handles.m_Tangents[0].m_flAngleDegrees) != LODWORD(v42) )
        buf->m_Get += LODWORD(handles.m_Tangents[0].m_flAngleDegrees) - LODWORD(v42);
      v11 = v43 / 255.0;
    }
LABEL_10:
    s.m_AnchorPos.x = v12;
    s.m_curvetype = 0;
    s.m_AnchorPos.y = v11;
    *(&s + 5) = 0x7FFF;
    if ( nRestoreVersion > 5 && CUtlBuffer::CheckGet(buf, 1) )
    {
      v24 = buf->m_Get;
      v25 = v24 + 1;
      LOBYTE(v24) = buf->m_Memory.m_pMemory[v24 - buf->m_nOffset];
      buf->m_Get = v25;
      if ( v24 == 1 )
      {
        v26 = CUtlBuffer::CheckGet(buf, 1);
        v27 = 0;
        if ( v26 )
        {
          v28 = buf->m_Get;
          v29 = v28 + 1;
          LOBYTE(v28) = buf->m_Memory.m_pMemory[v28 - buf->m_nOffset];
          buf->m_Get = v29;
          v27 = v28 & 1;
          v26 = (v28 & 2) != 0;
        }
        handles.m_Tangents[0].m_flAngleDegrees = 0.0;
        p_handles = &handles;
        handles.m_Tangents[0].m_flWeight = 0.1;
        handles.m_Tangents[1].m_flAngleDegrees = 0.0;
        handles.m_Tangents[1].m_flWeight = 0.1;
        handles.m_bUnifiedTangents = v27;
        handles.m_bUnweightedTangents = v26;
        while ( (buf->m_Flags & 1) == 0 )
        {
          v36 = CUtlBuffer::CheckGet(buf, 4);
          v32 = 0.0;
          if ( !v36 )
            goto LABEL_31;
          v37 = buf->m_Get;
          v38 = *&buf->m_Memory.m_pMemory[v37 - buf->m_nOffset];
          if ( (*&buf->m_Byteswap & 1) != 0 )
          {
            LOBYTE(v59) = HIBYTE(v38);
            BYTE1(v59) = BYTE2(v38);
            BYTE2(v59) = BYTE1(v38);
            BYTE3(v59) = LOBYTE(v38);
            v38 = *&v59;
          }
          v15 = (buf->m_Flags & 1) == 0;
          p_handles->m_Tangents[0].m_flAngleDegrees = v38;
          buf->m_Get = v37 + 4;
          if ( v15 )
          {
LABEL_40:
            v39 = CUtlBuffer::CheckGet(buf, 4);
            v34 = 0.0;
            if ( v39 )
            {
              v40 = buf->m_Get;
              v34 = *&buf->m_Memory.m_pMemory[v40 - buf->m_nOffset];
              if ( (*&buf->m_Byteswap & 1) != 0 )
              {
                LOBYTE(v59) = HIBYTE(v34);
                BYTE1(v59) = BYTE2(v34);
                BYTE2(v59) = BYTE1(v34);
                BYTE3(v59) = LOBYTE(v34);
                v34 = *&v59;
              }
              buf->m_Get = v40 + 4;
            }
            goto LABEL_33;
          }
LABEL_32:
          nIncrement = 128;
          v33 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
          v34 = 0.0;
          if ( v33 )
          {
            v59 = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
            anchorb = v59;
            v34 = V_strtod(v59, &v59);
            if ( v59 != anchorb )
              buf->m_Get += v59 - anchorb;
          }
LABEL_33:
          p_handles->m_Tangents[0].m_flWeight = v34;
          p_handles = (p_handles + 8);
          if ( p_handles == &handles.m_bUnifiedTangents )
          {
            ++v7;
            CCurveData::Add(this, &s, &handles);
            if ( v7 == c )
              return 1;
            goto LABEL_12;
          }
        }
        nIncrement = 128;
        v31 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
        v32 = 0.0;
        if ( v31 )
        {
          v59 = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
          anchora = v59;
          v32 = V_strtod(v59, &v59);
          if ( v59 != anchora )
            buf->m_Get += v59 - anchora;
        }
LABEL_31:
        v15 = (buf->m_Flags & 1) == 0;
        p_handles->m_Tangents[0].m_flAngleDegrees = v32;
        if ( v15 )
          goto LABEL_40;
        goto LABEL_32;
      }
    }
    ++v7;
    CCurveData::Add(this, &s, 0);
    if ( v7 != c )
      continue;
    return 1;
  }
}


// CCurveData::ParseSample  (line 1333, @0x000000000308d0a0, libserver.so)  // inlines: AddToTail, CBezierHandleTangent, CBezierHandlesForSample, CExpressionSample, CUtlString, CopyConstruct<CBezierHandlesForSample>, CopyConstruct<CExpressionSample>, Element, GrowMemory, SetBezierHandleIndex, SetCurveType, V_strlen, Vector2D, atof, operator[], ~CUtlString
// calls: strtod, V_stricmp_fast, strlen, CUtlString::operator+=, CUtlString::TrimRight, CBezierHandlesForSample::FromString, CUtlString::FreeMemoryBlock, Interpolator_CurveTypeForName, CUtlMemory<CBezierHandlesForSample, int>::Grow, CUtlMemory<CExpressionSample, int>::Grow, _Unwind_Resume
// callers: CChoreoScene::ParseFlexAnimations, CCurveData::Parse
// strings: "bezier", "expecting ramp data\n", "\t\r\n "
void __fastcall CCurveData::ParseSample(
        ISceneTokenProcessor *tokenizer,
        const CChoreoScene *scene,
        SamplesRestore_t *const restore,
        bool bUseRealTime,
        float flDuration)
{
  const char *v8; // rax
  __m128d v9; // xmm0
  float v10; // xmm2_4
  const char *v11; // rax
  __m128d v12; // xmm0
  __int16 v13; // r13
  unsigned __int16 v14; // r15
  __int64 v15; // rax
  int (**vptr_ISceneTokenProcessor)(...); // rax
  __int64 v17; // rax
  const char *v18; // rax
  const char *v19; // rax
  __int64 v20; // rbx
  int v21; // eax
  CExpressionSample *v22; // rax
  __int16 v23; // dx
  __int16 v24; // dx
  const char *v25; // rax
  int m_Size; // r13d
  int v27; // eax
  CBezierHandlesForSample *v28; // rax
  float value; // [rsp+10h] [rbp-70h]
  float time; // [rsp+14h] [rbp-6Ch]
  CUtlString bezierstuff; // [rsp+20h] [rbp-60h] BYREF
  CBezierHandlesForSample handle; // [rsp+30h] [rbp-50h] BYREF

  v8 = (*tokenizer->_vptr_ISceneTokenProcessor)(tokenizer, scene);
  v9.m128d_f64[0] = strtod(v8, 0);
  v10 = _mm_movedup_pd(v9).m128d_f64[0];
  time = v10;
  (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 0);
  v11 = tokenizer->CurrentToken();
  v12.m128d_f64[0] = strtod(v11, 0);
  value = _mm_movedup_pd(v12).m128d_f64[0];
  if ( !bUseRealTime )
    time = time * flDuration;
  v13 = -1;
  v14 = 0;
LABEL_4:
  while ( (*(tokenizer->_vptr_ISceneTokenProcessor + 2))(tokenizer) != 0 )
  {
    while ( 1 )
    {
      (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 0);
      v15 = tokenizer->CurrentToken();
      if ( V_stricmp_fast(v15, "bezier") != 0 )
        break;
      vptr_ISceneTokenProcessor = tokenizer->_vptr_ISceneTokenProcessor;
      bezierstuff.m_pString = 0;
      vptr_ISceneTokenProcessor[1](tokenizer, 0);
      while ( 1 )
      {
        (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 1);
        v19 = tokenizer->CurrentToken();
        if ( v19 == 0 || strlen(v19) <= 0 )
          break;
        v17 = tokenizer->CurrentToken();
        if ( V_stricmp_fast(v17, "}") == 0 )
          goto LABEL_12;
        v18 = tokenizer->CurrentToken();
        CUtlString::operator+=(&bezierstuff, v18);
        CUtlString::operator+=(&bezierstuff, " ");
      }
      (*(tokenizer->_vptr_ISceneTokenProcessor + 3))(tokenizer, "expecting ramp data\n");
LABEL_12:
      CUtlString::TrimRight(&bezierstuff, "\t\r\n ");
      handle.m_Tangents[0].m_flAngleDegrees = 0.0;
      handle.m_Tangents[0].m_flWeight = 0.1;
      handle.m_Tangents[1].m_flAngleDegrees = 0.0;
      handle.m_Tangents[1].m_flWeight = 0.1;
      handle.m_bUnifiedTangents = 1;
      handle.m_bUnweightedTangents = 1;
      if ( CBezierHandlesForSample::FromString(&handle, &bezierstuff) )
      {
        m_Size = restore->m_handles.m_Size;
        v27 = m_Size;
        if ( m_Size == restore->m_handles.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CBezierHandlesForSample,int>::Grow(&restore->m_handles.m_Memory, 1);
          v27 = restore->m_handles.m_Size;
        }
        restore->m_handles.m_Size = v27 + 1;
        v28 = &restore->m_handles.m_Memory.m_pMemory[m_Size];
        if ( v28 != 0 )
          *v28 = handle;
        v13 = (2 * m_Size) >> 1;
      }
      if ( bezierstuff.m_pString == 0 )
        goto LABEL_4;
      CUtlString::FreeMemoryBlock(&bezierstuff);
      if ( (*(tokenizer->_vptr_ISceneTokenProcessor + 2))(tokenizer) == 0 )
        goto LABEL_15;
    }
    v25 = tokenizer->CurrentToken();
    v14 = Interpolator_CurveTypeForName(v25);
  }
LABEL_15:
  v20 = restore->m_samples.m_Size;
  v21 = restore->m_samples.m_Size;
  if ( v20 == restore->m_samples.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CExpressionSample,int>::Grow(&restore->m_samples.m_Memory, 1);
    v21 = restore->m_samples.m_Size;
  }
  restore->m_samples.m_Size = v21 + 1;
  v22 = &restore->m_samples.m_Memory.m_pMemory[v20];
  if ( v22 != 0 )
  {
    v23 = *(v22 + 5);
    v22->m_curvetype = v14;
    v22->m_AnchorPos.x = time;
    v22->m_AnchorPos.y = value;
    v24 = v13 & 0x7FFF | v23 & 0x8000;
    *(v22 + 5) = v24;
    *(v22 + 11) = HIBYTE(v24) & 0x7F;
  }
}


// CCurveData::Parse  (line 1395, @0x000000000308de50, libserver.so)  // inlines: AddSamples, CExpressionSample, CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, SamplesRestore_t, SetBezierHandleIndex, V_strlen, Vector2D, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~SamplesRestore_t
// calls: CCurveData::Clear, V_stricmp_fast, strlen, CCurveData::ParseSample, CCurveData::Add, CUtlVectorBase<CExpressionSample, CUtlMemory<CExpressionSample, int> >::RemoveAll, CUtlMemory<CExpressionSample, int>::Purge, CUtlMemory<CBezierHandlesForSample, int>::Purge, CCurveData::Resort, CChoreoScene::ParseEdgeInfo, CUtlVectorBase<CExpressionSample, CUtlMemory<CExpressionSample, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CChoreoScene::ParseRamp, CChoreoScene::ParseSceneRamp, CChoreoScene::ParseEvent, CChoreoScene::ParseFromBuffer
// strings: "leftedge", "rightedge", "expecting ramp data\n", "expecting {\n"
void __fastcall CCurveData::Parse(CCurveData *const this, ISceneTokenProcessor *tokenizer, const CChoreoScene *scene)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  const char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  int i; // r12d
  unsigned __int16 m_curvetype; // dx
  __int16 v13; // di
  vec_t y; // xmm0_4
  __int16 v15; // cx
  CExpressionSample from; // [rsp+20h] [rbp-70h] BYREF
  SamplesRestore_t restore; // [rsp+30h] [rbp-60h] BYREF

  CCurveData::Clear(this);
  (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 1);
  v5 = tokenizer->CurrentToken();
  if ( V_stricmp_fast(v5, "leftedge") == 0 )
    CChoreoScene::ParseEdgeInfo(scene, tokenizer, this->m_RampEdgeInfo);
  v6 = tokenizer->CurrentToken();
  if ( V_stricmp_fast(v6, "rightedge") == 0 )
    CChoreoScene::ParseEdgeInfo(scene, tokenizer, &this->m_RampEdgeInfo[1]);
  v7 = tokenizer->CurrentToken();
  if ( V_stricmp_fast(v7, "{") != 0 )
    (*(tokenizer->_vptr_ISceneTokenProcessor + 3))(tokenizer, "expecting {\n");
  while ( 1 )
  {
    (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 1);
    v8 = tokenizer->CurrentToken();
    if ( v8 == 0 || strlen(v8) <= 0 )
      break;
    v9 = tokenizer->CurrentToken();
    if ( V_stricmp_fast(v9, "}") == 0 )
      goto LABEL_22;
    restore.m_samples.m_Size = 0;
    memset(&restore.m_samples.m_Memory, 0, 20);
    restore.m_handles.m_Memory.m_pMemory = 0;
    restore.m_handles.m_Memory.m_nAllocationCount = 0;
    restore.m_handles.m_Memory.m_nGrowSize = 0;
    CCurveData::ParseSample(tokenizer, scene, &restore, 1, 0.0);
    v10 = 0;
    for ( i = 0; i < restore.m_samples.m_Size; ++v10 )
    {
      while ( 1 )
      {
        m_curvetype = restore.m_samples.m_Memory.m_pMemory[v10].m_curvetype;
        v13 = *(&restore.m_samples.m_Memory.m_pMemory[v10] + 5);
        from.m_AnchorPos.x = restore.m_samples.m_Memory.m_pMemory[v10].m_AnchorPos.x;
        y = restore.m_samples.m_Memory.m_pMemory[v10].m_AnchorPos.y;
        from.m_curvetype = m_curvetype;
        v15 = (2 * v13) >> 1;
        from.m_AnchorPos.y = y;
        *(&from + 5) = v15 & 0x7FFF | *(&from + 5) & 0x8000;
        *(&from + 11) = *(&restore.m_samples.m_Memory.m_pMemory[v10] + 11) & 0x80 | *(&from + 11) & 0x7F;
        if ( v15 == -1 )
          break;
        *(&from + 5) |= 0x7FFFu;
        CCurveData::Add(this, &from, &restore.m_handles.m_Memory.m_pMemory[v15]);
        ++i;
        ++v10;
        if ( i >= restore.m_samples.m_Size )
          goto LABEL_15;
      }
      CCurveData::Add(this, &from, 0);
      ++i;
    }
LABEL_15:
    restore.m_handles.m_Size = 0;
    if ( (restore.m_handles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CBezierHandlesForSample,int>::Purge(&restore.m_handles.m_Memory);
      if ( (restore.m_handles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CBezierHandlesForSample,int>::Purge(&restore.m_handles.m_Memory);
    }
    CUtlVectorBase<CExpressionSample,CUtlMemory<CExpressionSample,int>>::RemoveAll(&restore.m_samples);
    if ( (restore.m_samples.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CExpressionSample,int>::Purge(&restore.m_samples.m_Memory);
      if ( (restore.m_samples.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CExpressionSample,int>::Purge(&restore.m_samples.m_Memory);
    }
  }
  (*(tokenizer->_vptr_ISceneTokenProcessor + 3))(tokenizer, "expecting ramp data\n");
LABEL_22:
  CCurveData::Resort(this);
}


// CCurveData::FileSave  (line 1438, @0x000000000308ce10, libserver.so)  // inlines: GetCurveType, GetEdgeCurveType, String, V_strncat<long unsigned int>, V_strncpy<long unsigned int>, ~CUtlString
// calls: _V_strncpy, Interpolator_NameForCurveType, CUtlString::Get, V_snprintf, CUtlString::FreeMemoryBlock, _V_strncat, CChoreoScene::FilePrintf, CCurveData::SaveSamples, __stack_chk_fail, _Unwind_Resume
// callers: CChoreoScene::FileSaveRamp, CChoreoScene::FileSaveSceneRamp, CChoreoScene::FileSaveEvent, CChoreoScene::SaveToFile
// strings: " rightedge %s %.3f", " leftedge %s %.3f"
void __fastcall CCurveData::FileSave(
        const CCurveData *const this,
        CUtlBuffer *const buf,
        int level,
        const char *name,
        const CChoreoScene *scene)
{
  const char *v9; // rax
  const char *v10; // rax
  double v11; // [rsp+8h] [rbp-568h]
  double y; // [rsp+8h] [rbp-568h]
  CUtlString v13[2]; // [rsp+20h] [rbp-550h] BYREF
  char sz[256]; // [rsp+30h] [rbp-540h] BYREF
  char line[1032]; // [rsp+130h] [rbp-440h] BYREF
  unsigned __int64 v16; // [rsp+538h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  if ( this->m_Ramp.m_Size > 0 || this->m_RampEdgeInfo[0].m_bActive || this->m_RampEdgeInfo[1].m_bActive )
  {
    _V_strncpy(line, name, 1024);
    if ( this->m_RampEdgeInfo[0].m_bActive )
    {
      y = this->m_RampEdgeInfo[0].m_ZeroPos.m_AnchorPos.y;
      Interpolator_NameForCurveType(v13, this->m_RampEdgeInfo[0].m_ZeroPos.m_curvetype, 0);
      v10 = CUtlString::Get(v13);
      V_snprintf(sz, 256, " leftedge %s %.3f", v10, y);
      if ( v13[0].m_pString != 0 )
        CUtlString::FreeMemoryBlock(v13);
      _V_strncat(line, sz, 1024, 0xFFFFFFFFLL);
      if ( !this->m_RampEdgeInfo[1].m_bActive )
        goto LABEL_7;
    }
    else if ( !this->m_RampEdgeInfo[1].m_bActive )
    {
LABEL_7:
      CChoreoScene::FilePrintf(scene, buf, level, "%s\n", line);
      CChoreoScene::FilePrintf(scene, buf, level, "{\n");
      CCurveData::SaveSamples(this, buf, level + 1, scene);
      CChoreoScene::FilePrintf(scene, buf, level, "}\n");
      return;
    }
    v11 = this->m_RampEdgeInfo[1].m_ZeroPos.m_AnchorPos.y;
    Interpolator_NameForCurveType(v13, this->m_RampEdgeInfo[1].m_ZeroPos.m_curvetype, 0);
    v9 = CUtlString::Get(v13);
    V_snprintf(sz, 256, " rightedge %s %.3f", v9, v11);
    if ( v13[0].m_pString != 0 )
      CUtlString::FreeMemoryBlock(v13);
    _V_strncat(line, sz, 1024, 0xFFFFFFFFLL);
    goto LABEL_7;
  }
}


// CCurveData::SaveSamples  (line 1476, @0x000000000308cb90, libserver.so)  // inlines: CUtlString, Get, GetBezierHandles, String, ~CUtlString
// calls: CBezierHandlesForSample::ToString, CUtlString::Get, CFmtStrN<256, false>::CFmtStrN, CUtlString::operator+=, CUtlString::FreeMemoryBlock, CUtlString::TrimRight, CChoreoScene::FilePrintf, CCurveData::Get, CCurveData::GetBezierHandles, CUtlString::Format, Interpolator_NameForCurveType, _Unwind_Resume (13 total)
// callers: CChoreoScene::FileSaveFlexAnimationTrack, CCurveData::FileSave
// strings: "bezier { %s } ", "\t\r\n ", "%.4f %.4f ", "\"%s\" "
void __fastcall CCurveData::SaveSamples(
        const CCurveData *const this,
        CUtlBuffer *const buf,
        int level,
        const CChoreoScene *scene)
{
  int v5; // ebx
  const char *v6; // rax
  const char *v7; // rax
  CExpressionSample *v8; // r13
  CBezierHandlesForSample *BezierHandles; // r15
  __int16 m_curvetype; // si
  const char *v11; // rax
  CUtlString sampleSave; // [rsp+40h] [rbp-180h] BYREF
  CUtlString v16[2]; // [rsp+50h] [rbp-170h] BYREF
  CUtlString v17[2]; // [rsp+60h] [rbp-160h] BYREF
  CFmtStrN<256,false> v18; // [rsp+70h] [rbp-150h] BYREF
  unsigned __int64 v19; // [rsp+188h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  if ( this->m_Ramp.m_Size > 0 )
  {
    v5 = 0;
    do
    {
      sampleSave.m_pString = 0;
      v8 = CCurveData::Get(this, v5);
      BezierHandles = CCurveData::GetBezierHandles(this, v5);
      CUtlString::Format(&sampleSave, "%.4f %.4f ", v8->m_AnchorPos.x, v8->m_AnchorPos.y);
      m_curvetype = v8->m_curvetype;
      if ( m_curvetype != 0 )
      {
        Interpolator_NameForCurveType(v16, m_curvetype, 0);
        v11 = CUtlString::Get(v16);
        CFmtStrN<256,false>::CFmtStrN(&v18, "\"%s\" ", v11);
        CUtlString::operator+=(&sampleSave, v18.m_szBuf);
        if ( v16[0].m_pString != 0 )
          CUtlString::FreeMemoryBlock(v16);
      }
      if ( BezierHandles != 0 )
      {
        CBezierHandlesForSample::ToString(v17, BezierHandles);
        v6 = CUtlString::Get(v17);
        CFmtStrN<256,false>::CFmtStrN(&v18, "bezier { %s } ", v6);
        CUtlString::operator+=(&sampleSave, v18.m_szBuf);
        if ( v17[0].m_pString != 0 )
          CUtlString::FreeMemoryBlock(v17);
      }
      CUtlString::TrimRight(&sampleSave, "\t\r\n ");
      v7 = CUtlString::Get(&sampleSave);
      CChoreoScene::FilePrintf(scene, buf, level, "%s\n", v7);
      if ( sampleSave.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&sampleSave);
      ++v5;
    }
    while ( this->m_Ramp.m_Size > v5 );
  }
}


// CCurveData::ValidateBezier  (line 1504, @0x000000000308c140, libserver.so)
void __fastcall CCurveData::ValidateBezier(CCurveData *const this)
{
  ;
}


// CBezierHandlesForSample::GetControlPointPos  (line 1521, @0x000000000308c150, libserver.so)  // inlines: DEG2RAD, GetControlPointPos, GetTangentPoint, Vector2DMultiply, operator*
// calls: sincos
const CBezierHandlesForSample *__fastcall CBezierHandlesForSample::GetControlPointPos(
        const CBezierHandlesForSample *const this,
        __int64 which,
        float scale,
        int a4)
{
  float *v4; // rax
  float v7; // xmm2_4
  double v9; // [rsp+8h] [rbp-28h]
  double cosx; // [rsp+10h] [rbp-20h] BYREF
  double sinx[3]; // [rsp+18h] [rbp-18h] BYREF

  v4 = (which + 8LL * a4);
  v9 = v4[1];
  sincos((0.017453292 * *v4), sinx, &cosx);
  v7 = (cosx * v9) * scale;
  this->m_Tangents[0].m_flWeight = (sinx[0] * v9) * scale;
  this->m_Tangents[0].m_flAngleDegrees = v7;
  return this;
}


// CBezierHandlesForSample::GetControlPointAbsPos  (line 1528, @0x000000000308c1e0, libserver.so)  // inlines: DEG2RAD, GetControlPointAbsPos, GetControlPointPos, GetTangentPoint, Vector2DAdd, Vector2DMultiply, operator*, operator+
// calls: sincos
const CBezierHandlesForSample *__fastcall CBezierHandlesForSample::GetControlPointAbsPos(
        const CBezierHandlesForSample *const this,
        const CExpressionSample *const anchor,
        float *which,
        float scale,
        int a5)
{
  float *v5; // rax
  float v9; // xmm1_4
  double v11; // [rsp+8h] [rbp-28h]
  double cosx; // [rsp+10h] [rbp-20h] BYREF
  double sinx[3]; // [rsp+18h] [rbp-18h] BYREF

  v5 = (&anchor->m_AnchorPos + a5);
  v11 = v5[1];
  sincos((0.017453292 * *v5), sinx, &cosx);
  v9 = (sinx[0] * v11) * scale;
  this->m_Tangents[0].m_flAngleDegrees = ((cosx * v11) * scale) + *which;
  this->m_Tangents[0].m_flWeight = v9 + which[1];
  return this;
}


// CBezierHandlesForSample::SetControlPointAbsPos  (line 1535, @0x000000000308c280, libserver.so)  // inlines: FastSqrt, Length, NormalizeInPlace, RAD2DEG, SetControlPointAbsPos, Vector2DDivide, Vector2DLength, Vector2DNormalize, Vector2DSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator/, operator/=
// calls: atan2, fmod
void __fastcall CBezierHandlesForSample::SetControlPointAbsPos(
        CBezierHandlesForSample *const this,
        const CExpressionSample *const anchor,
        int which,
        const Vector2D *const pos,
        float scale)
{
  float *v5; // r12
  CBezierHandlesForSample::CBezierHandleTangent *v7; // r13
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm3_4
  double v11; // xmm0_8
  double v12; // xmm1_8
  float v13; // xmm0_4
  long double v14; // fst6
  char v16; // c2
  float v17; // xmm0_4
  float m_flAngleDegrees; // xmm0_4
  long double v19; // fst6
  char v21; // c2
  float v22; // xmm0_4

  v5 = &this->m_Tangents[which];
  v7 = &this->m_Tangents[1 - which];
  v8 = (pos->x - anchor->m_AnchorPos.x) * (1.0 / scale);
  v9 = (pos->y - anchor->m_AnchorPos.y) * (1.0 / scale);
  v10 = fsqrt((v8 * v8) + (v9 * v9));
  if ( v10 == 0.0 )
  {
    v11 = 0.0;
    v12 = 0.0;
  }
  else
  {
    v12 = (v8 * (1.0 / v10));
    v11 = (v9 * (1.0 / v10));
  }
  if ( !this->m_bUnweightedTangents )
    v5[1] = v10;
  v13 = ((atan2(v11, v12) * 57.295776) - *v5) + *v5;
  *v5 = v13;
  v14 = v13;
  do
    v14 = __FPREM__(v14, 360.0);
  while ( v16 != 0 );
  v17 = v14;
  *v5 = v17;
  if ( v17 < 0.0 )
  {
    do
      v17 = v17 + 360.0;
    while ( v17 < 0.0 );
    *v5 = v17;
  }
  if ( !this->m_bUnweightedTangents )
  {
    if ( !this->m_bUnifiedTangents )
    {
LABEL_22:
      m_flAngleDegrees = v7->m_flAngleDegrees;
      goto LABEL_15;
    }
    v7->m_flWeight = v5[1];
  }
  if ( !this->m_bUnifiedTangents )
    goto LABEL_22;
  m_flAngleDegrees = *v5 + 180.0;
  v7->m_flAngleDegrees = m_flAngleDegrees;
LABEL_15:
  v19 = m_flAngleDegrees;
  do
    v19 = __FPREM__(v19, 360.0);
  while ( v21 != 0 );
  v22 = v19;
  v7->m_flAngleDegrees = v22;
  if ( v22 < 0.0 )
  {
    do
      v22 = v22 + 360.0;
    while ( v22 < 0.0 );
    v7->m_flAngleDegrees = v22;
  }
}


// CBezierHandlesForSample::ToString  (line 1555, @0x000000000308ca50, libserver.so)  // inlines: CUtlString
// calls: CFmtStrN<256, false>::CFmtStrN, CUtlString::operator+=, CUtlString::TrimRight, __stack_chk_fail, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CCurveData::SaveSamples
// strings: "%s %f %f ", "\t\r\n ", "unified ", "unweighted "
CUtlString __fastcall CBezierHandlesForSample::ToString(CUtlString *a1, const CBezierHandlesForSample *const this)
{
  CFmtStrN<256,false> v5; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v6; // [rsp+118h] [rbp-28h]

  a1->m_pString = 0;
  v6 = __readfsqword(0x28u);
  if ( this->m_bUnifiedTangents )
  {
    CUtlString::operator+=(a1, "unified ");
    if ( !this->m_bUnweightedTangents )
      goto LABEL_3;
LABEL_5:
    CUtlString::operator+=(a1, "unweighted ");
    goto LABEL_3;
  }
  if ( this->m_bUnweightedTangents )
    goto LABEL_5;
LABEL_3:
  CFmtStrN<256,false>::CFmtStrN(
    &v5,
    "%s %f %f ",
    "in",
    this->m_Tangents[0].m_flAngleDegrees,
    this->m_Tangents[0].m_flWeight);
  CUtlString::operator+=(a1, v5.m_szBuf);
  CFmtStrN<256,false>::CFmtStrN(
    &v5,
    "%s %f %f ",
    "out",
    this->m_Tangents[1].m_flAngleDegrees,
    this->m_Tangents[1].m_flWeight);
  CUtlString::operator+=(a1, v5.m_szBuf);
  CUtlString::TrimRight(a1, "\t\r\n ");
  return a1;
}


// CBezierHandlesForSample::FromString  (line 1579, @0x000000000308c4d0, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, Purge, PurgeAndDeleteElements, RemoveAll, String, operator[], ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::Get, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), V_stricmp_fast, V_atof, CUtlMemory<char*, int>::Purge, _Unwind_Resume
// callers: CCurveData::ParseSample
// strings: "unified", "unweighted"
bool __fastcall CBezierHandlesForSample::FromString(CBezierHandlesForSample *const this, const CUtlString *const s)
{
  const char *v3; // rax
  int v4; // ebx
  int m_Size; // eax
  __int64 v6; // r12
  char *v7; // r15
  __int64 v8; // r12
  int v9; // ebx
  char *v10; // rsi
  float v12; // xmm0_4
  char **v13; // rax
  float v14; // xmm0_4
  char **m_pMemory; // rax
  CUtlStringList tokens; // [rsp+0h] [rbp-50h] BYREF

  tokens.m_Size = 0;
  tokens.m_Memory.m_pMemory = 0;
  tokens.m_Memory.m_nAllocationCount = 0;
  tokens.m_Memory.m_nGrowSize = 0;
  v3 = CUtlString::Get(s);
  V_SplitString(v3, " ", &tokens);
  if ( tokens.m_Size <= 0 )
    goto LABEL_11;
  v4 = 0;
  do
  {
    while ( 1 )
    {
      v6 = v4;
      v7 = tokens.m_Memory.m_pMemory[v6];
      if ( V_stricmp_fast(v7, "unified") != 0 )
        break;
      m_Size = tokens.m_Size;
      this->m_bUnifiedTangents = 1;
LABEL_4:
      if ( ++v4 >= m_Size )
        goto LABEL_8;
    }
    if ( V_stricmp_fast(v7, "unweighted") != 0 )
    {
      if ( V_stricmp_fast(v7, "in") != 0 )
      {
        if ( V_stricmp_fast(v7, "out") != 0 )
        {
          m_Size = tokens.m_Size;
        }
        else
        {
          m_Size = tokens.m_Size;
          if ( tokens.m_Size > v4 + 2 )
          {
            v14 = V_atof(tokens.m_Memory.m_pMemory[v6 + 1]);
            m_pMemory = tokens.m_Memory.m_pMemory;
            this->m_Tangents[1].m_flAngleDegrees = v14;
            this->m_Tangents[1].m_flWeight = V_atof(m_pMemory[v6 + 2]);
            m_Size = tokens.m_Size;
            v4 += 2;
          }
        }
      }
      else
      {
        m_Size = tokens.m_Size;
        if ( tokens.m_Size > v4 + 2 )
        {
          v12 = V_atof(tokens.m_Memory.m_pMemory[v6 + 1]);
          v13 = tokens.m_Memory.m_pMemory;
          this->m_Tangents[0].m_flAngleDegrees = v12;
          this->m_Tangents[0].m_flWeight = V_atof(v13[v6 + 2]);
          m_Size = tokens.m_Size;
          v4 += 2;
        }
      }
      goto LABEL_4;
    }
    m_Size = tokens.m_Size;
    ++v4;
    this->m_bUnweightedTangents = 1;
  }
  while ( v4 < m_Size );
LABEL_8:
  if ( m_Size > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      ++v9;
      v10 = tokens.m_Memory.m_pMemory[v8++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v10);
    }
    while ( v9 < tokens.m_Size );
  }
LABEL_11:
  tokens.m_Size = 0;
  if ( (tokens.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&tokens.m_Memory);
    if ( (tokens.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&tokens.m_Memory);
  }
  return 1;
}


