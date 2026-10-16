// Reconstructed from DWARF by pahole; not original source.

// src/choreoobjects/choreoevent.cpp:1059
struct EventNameMap_t {
	typedef enum {
		UNSPECIFIED = 0,
		SECTION = 0x1,
		EXPRESSION = 0x2,
		LOOKAT = 0x3,
		MOVETO = 0x4,
		SPEAK = 0x5,
		GESTURE = 0x6,
		SEQUENCE = 0x7,
		FACE = 0x8,
		FIRETRIGGER = 0x9,
		FLEXANIMATION = 0xa,
		SUBSCENE = 0xb,
		LOOP = 0xc,
		INTERRUPT = 0xd,
		STOPPOINT = 0xe,
		PERMIT_RESPONSES = 0xf,
		GENERIC = 0x10,
		CAMERA = 0x11,
		SCRIPT = 0x12,
		NUM_TYPES = 0x13,
	} EVENTTYPE;

	EVENTTYPE type;  // +0x0

	const char * name;  // +0x8
	const char * fullname;  // +0x10
};

// src/choreoobjects/choreoevent.cpp:1128
struct CCNameMap_t {
	typedef enum {
		CC_MASTER = 0,
		CC_SLAVE = 0x1,
		CC_DISABLED = 0x2,
		NUM_CC_TYPES = 0x3,
	} CLOSECAPTION;

	CLOSECAPTION type;  // +0x0

	const char * name;  // +0x8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_choreoevent.cpp  (line 0, @0x0000000001a677a0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_choreoevent_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CEventRelativeTag::CEventRelativeTag  (line 22, @0x0000000003077a80, libserver.so)  // inlines: CUtlString, ~CUtlString
// calls: CUtlString::operator=, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CFlexTimingTag::CFlexTimingTag, CChoreoEvent::AddRelativeTag, CChoreoEvent::AddTimingTag
void __fastcall CEventRelativeTag::CEventRelativeTag(
        CEventRelativeTag *const this,
        CChoreoEvent *owner,
        const char *name,
        __m128i percentage)
{
  float v4; // r14d

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(percentage));
  this->m_Name.m_pString = 0;
  CUtlString::operator=(&this->m_Name, name);
  this->m_flPercentage = v4;
  this->m_pOwner = owner;
}


// CEventRelativeTag::CEventRelativeTag  (line 34, @0x0000000003077ae0, libserver.so)  // inlines: CUtlString, ~CUtlString
// calls: CUtlString::operator=, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CFlexTimingTag::CFlexTimingTag, CChoreoEvent::AddRelativeTag, CChoreoEvent::AddTimingTag, CChoreoEvent::operator=
void __fastcall CEventRelativeTag::CEventRelativeTag(CEventRelativeTag *const this, const CEventRelativeTag *const src)
{
  this->m_Name.m_pString = 0;
  CUtlString::operator=(&this->m_Name, &src->m_Name);
  this->m_flPercentage = src->m_flPercentage;
  this->m_pOwner = src->m_pOwner;
}


// CEventRelativeTag::GetName  (line 41, @0x0000000003077b30, libserver.so)
// calls: CUtlString::Get
// callers: CChoreoScene::FileSaveEvent
const char *__fastcall CEventRelativeTag::GetName(const CEventRelativeTag *const this)
{
  return CUtlString::Get(&this->m_Name);
}


// CEventRelativeTag::GetPercentage  (line 46, @0x0000000003077b40, libserver.so)
// callers: CChoreoScene::FileSaveEvent
float __fastcall CEventRelativeTag::GetPercentage(const CEventRelativeTag *const this)
{
  return this->m_flPercentage;
}


// CEventRelativeTag::SetPercentage  (line 51, @0x0000000003077b50, libserver.so)
void __fastcall CEventRelativeTag::SetPercentage(CEventRelativeTag *const this, float a2, float percentage)
{
  this->m_flPercentage = a2;
}


// CEventRelativeTag::GetOwner  (line 56, @0x0000000003077b60, libserver.so)
CChoreoEvent *__fastcall CEventRelativeTag::GetOwner(const CEventRelativeTag *const this)
{
  return this->m_pOwner;
}


// CEventRelativeTag::SetOwner  (line 61, @0x0000000003077b70, libserver.so)
void __fastcall CEventRelativeTag::SetOwner(CEventRelativeTag *const this, CChoreoEvent *event)
{
  this->m_pOwner = event;
}


// CEventRelativeTag::GetStartTime  (line 67, @0x0000000003077b80, libserver.so)  // inlines: GetStartTime
// callers: CChoreoScene::ReconcileTags
float __fastcall CEventRelativeTag::GetStartTime(const CEventRelativeTag *const this)
{
  float result; // xmm0_4
  CChoreoEvent *m_pOwner; // rdi
  float m_flStartTime; // [rsp-14h] [rbp-1Ch]

  result = 0.0;
  m_pOwner = this->m_pOwner;
  if ( m_pOwner != 0 )
  {
    m_flStartTime = m_pOwner->m_flStartTime;
    return ((*(m_pOwner->_vptr_CChoreoObjectBase + 8))(m_pOwner, 0.0) * this->m_flPercentage) + m_flStartTime;
  }
  return result;
}


// CFlexTimingTag::CFlexTimingTag  (line 81, @0x0000000003077bc0, libserver.so)
// calls: CEventRelativeTag::CEventRelativeTag
void __fastcall CFlexTimingTag::CFlexTimingTag(
        CFlexTimingTag *const this,
        CChoreoEvent *owner,
        const char *name,
        __m128i percentage,
        bool locked)
{
  CEventRelativeTag::CEventRelativeTag(this, owner, name, percentage);
  this->m_bLocked = locked;
}


// CFlexTimingTag::CFlexTimingTag  (line 87, @0x0000000003077be0, libserver.so)
// calls: CEventRelativeTag::CEventRelativeTag
void __fastcall CFlexTimingTag::CFlexTimingTag(CFlexTimingTag *const this, const CFlexTimingTag *const src)
{
  CEventRelativeTag::CEventRelativeTag(this, src);
  this->m_bLocked = 0;
  this->m_bLocked = src->m_bLocked;
}


// CFlexTimingTag::GetLocked  (line 93, @0x0000000003077c10, libserver.so)
// callers: CChoreoScene::FileSaveEvent
bool __fastcall CFlexTimingTag::GetLocked(const CFlexTimingTag *const this)
{
  return this->m_bLocked;
}


// CFlexTimingTag::SetLocked  (line 98, @0x0000000003077c20, libserver.so)
void __fastcall CFlexTimingTag::SetLocked(CFlexTimingTag *const this, bool locked)
{
  this->m_bLocked = locked;
}


// CEventAbsoluteTag::CEventAbsoluteTag  (line 103, @0x0000000003077c30, libserver.so)  // inlines: CUtlString, ~CUtlString
// calls: CUtlString::operator=, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CChoreoEvent::SortTags, CChoreoEvent::AddAbsoluteTag
void __fastcall CEventAbsoluteTag::CEventAbsoluteTag(
        CEventAbsoluteTag *const this,
        CChoreoEvent *owner,
        const char *name,
        __m128i t)
{
  float v4; // r14d

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(t));
  this->m_Name.m_pString = 0;
  this->m_flPercentage = 0.0;
  this->m_pOwner = 0;
  CUtlString::operator=(&this->m_Name, name);
  *(this + 12) &= 0xF0u;
  this->m_flPercentage = v4;
  this->m_pOwner = owner;
}


// CEventAbsoluteTag::CEventAbsoluteTag  (line 119, @0x0000000003077ca0, libserver.so)  // inlines: CUtlString, ~CUtlString
// calls: CUtlString::operator=, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CChoreoEvent::AddAbsoluteTag, CChoreoEvent::operator=
void __fastcall CEventAbsoluteTag::CEventAbsoluteTag(CEventAbsoluteTag *const this, const CEventAbsoluteTag *const src)
{
  char v4; // al
  char v5; // al
  char v6; // al

  this->m_Name.m_pString = 0;
  this->m_flPercentage = 0.0;
  this->m_pOwner = 0;
  CUtlString::operator=(&this->m_Name, &src->m_Name);
  this->m_flPercentage = src->m_flPercentage;
  this->m_pOwner = src->m_pOwner;
  v4 = *(src + 12) & 1 | *(this + 12) & 0xFE;
  *(this + 12) = v4;
  v5 = *(src + 12) & 2 | v4 & 0xFD;
  *(this + 12) = v5;
  v6 = *(src + 12) & 4 | v5 & 0xFB;
  *(this + 12) = v6;
  *(this + 12) = *(src + 12) & 8 | v6 & 0xF7;
}


// CEventAbsoluteTag::GetName  (line 130, @0x0000000003077d50, libserver.so)
// calls: CUtlString::Get
// callers: CChoreoScene::FileSaveEvent
const char *__fastcall CEventAbsoluteTag::GetName(const CEventAbsoluteTag *const this)
{
  return CUtlString::Get(&this->m_Name);
}


// CEventAbsoluteTag::GetPercentage  (line 135, @0x0000000003077d60, libserver.so)
// callers: CChoreoChannel::ReconcileGestureTimes, CChoreoScene::FileSaveEvent
float __fastcall CEventAbsoluteTag::GetPercentage(const CEventAbsoluteTag *const this)
{
  return this->m_flPercentage;
}


// CEventAbsoluteTag::SetPercentage  (line 140, @0x0000000003077d70, libserver.so)
void __fastcall CEventAbsoluteTag::SetPercentage(CEventAbsoluteTag *const this, float a2, float percentage)
{
  this->m_flPercentage = a2;
}


// CEventAbsoluteTag::GetEventTime  (line 145, @0x0000000003077d80, libserver.so)
float __fastcall CEventAbsoluteTag::GetEventTime(const CEventAbsoluteTag *const this)
{
  float result; // xmm0_4
  CChoreoEvent *m_pOwner; // rdi

  result = 0.0;
  m_pOwner = this->m_pOwner;
  if ( m_pOwner != 0 )
    return (*(m_pOwner->_vptr_CChoreoObjectBase + 8))(m_pOwner, 0.0) * this->m_flPercentage;
  return result;
}


// CEventAbsoluteTag::SetEventTime  (line 158, @0x0000000003077db0, libserver.so)
void __fastcall CEventAbsoluteTag::SetEventTime(CEventAbsoluteTag *const this, double a2, float t)
{
  CChoreoEvent *m_pOwner; // rdi

  m_pOwner = this->m_pOwner;
  if ( m_pOwner != 0 )
    this->m_flPercentage = *&a2 / (*(m_pOwner->_vptr_CChoreoObjectBase + 8))(m_pOwner, a2, t);
}


// CEventAbsoluteTag::GetAbsoluteTime  (line 172, @0x0000000003077df0, libserver.so)  // inlines: GetStartTime
// callers: CChoreoChannel::ReconcileGestureTimes
float __fastcall CEventAbsoluteTag::GetAbsoluteTime(const CEventAbsoluteTag *const this)
{
  float result; // xmm0_4
  CChoreoEvent *m_pOwner; // rdi
  float m_flStartTime; // [rsp-14h] [rbp-1Ch]

  result = 0.0;
  m_pOwner = this->m_pOwner;
  if ( m_pOwner != 0 )
  {
    m_flStartTime = m_pOwner->m_flStartTime;
    return ((*(m_pOwner->_vptr_CChoreoObjectBase + 8))(m_pOwner, 0.0) * this->m_flPercentage) + m_flStartTime;
  }
  return result;
}


// CEventAbsoluteTag::SetAbsoluteTime  (line 186, @0x0000000003077e30, libserver.so)  // inlines: GetStartTime
// callers: CChoreoChannel::ReconcileGestureTimes
void __fastcall CEventAbsoluteTag::SetAbsoluteTime(CEventAbsoluteTag *const this, double a2, float t)
{
  CChoreoEvent *m_pOwner; // rdi
  float m_flStartTime; // [rsp+8h] [rbp-18h]

  m_pOwner = this->m_pOwner;
  if ( m_pOwner != 0 )
  {
    m_flStartTime = m_pOwner->m_flStartTime;
    this->m_flPercentage = (*&a2 - m_flStartTime) / (*(m_pOwner->_vptr_CChoreoObjectBase + 8))(m_pOwner, a2, t);
  }
}


// CEventAbsoluteTag::GetOwner  (line 201, @0x0000000003077e80, libserver.so)
CChoreoEvent *__fastcall CEventAbsoluteTag::GetOwner(const CEventAbsoluteTag *const this)
{
  return this->m_pOwner;
}


// CEventAbsoluteTag::SetOwner  (line 207, @0x0000000003077e90, libserver.so)
void __fastcall CEventAbsoluteTag::SetOwner(CEventAbsoluteTag *const this, CChoreoEvent *event)
{
  this->m_pOwner = event;
}


// CEventAbsoluteTag::SetLocked  (line 213, @0x0000000003077ea0, libserver.so)
void __fastcall CEventAbsoluteTag::SetLocked(CEventAbsoluteTag *const this, bool bLocked)
{
  *(this + 12) = bLocked | *(this + 12) & 0xFE;
}


// CEventAbsoluteTag::GetLocked  (line 220, @0x0000000003077ec0, libserver.so)
bool __fastcall CEventAbsoluteTag::GetLocked(const CEventAbsoluteTag *const this)
{
  return *(this + 12) & 1;
}


// CEventAbsoluteTag::SetLinear  (line 227, @0x0000000003077ed0, libserver.so)
// callers: CBaseFlex::HandleStartGestureSceneEvent
void __fastcall CEventAbsoluteTag::SetLinear(CEventAbsoluteTag *const this, bool bLinear)
{
  *(this + 12) = (2 * bLinear) | *(this + 12) & 0xFD;
}


// CEventAbsoluteTag::GetLinear  (line 234, @0x0000000003077ef0, libserver.so)
bool __fastcall CEventAbsoluteTag::GetLinear(const CEventAbsoluteTag *const this)
{
  return (*(this + 12) & 2) != 0;
}


// CEventAbsoluteTag::SetEntry  (line 240, @0x0000000003077f00, libserver.so)
void __fastcall CEventAbsoluteTag::SetEntry(CEventAbsoluteTag *const this, bool bEntry)
{
  *(this + 12) = (4 * bEntry) | *(this + 12) & 0xFB;
}


// CEventAbsoluteTag::GetEntry  (line 246, @0x0000000003077f20, libserver.so)
bool __fastcall CEventAbsoluteTag::GetEntry(const CEventAbsoluteTag *const this)
{
  return (*(this + 12) & 4) != 0;
}


// CEventAbsoluteTag::SetExit  (line 252, @0x0000000003077f30, libserver.so)
void __fastcall CEventAbsoluteTag::SetExit(CEventAbsoluteTag *const this, bool bExit)
{
  *(this + 12) = (8 * bExit) | *(this + 12) & 0xF7;
}


// CEventAbsoluteTag::GetExit  (line 258, @0x0000000003077f50, libserver.so)
bool __fastcall CEventAbsoluteTag::GetExit(const CEventAbsoluteTag *const this)
{
  return (*(this + 12) & 8) != 0;
}


// CFlexAnimationTrack::CFlexAnimationTrack  (line 267, @0x000000000307b1e0, libserver.so)  // inlines: CCurveData, CExpressionSample, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, EdgeInfo_t, SetDataAccessor, Vector2D, ~CCurveData, ~CUtlString, ~CUtlVector
// calls: CFlexAnimationTrack::InitLeftRightEdge, CCurveData::RemoveBezierData, CUtlVectorBase<CExpressionSample, CUtlMemory<CExpressionSample, int> >::~CUtlVectorBase, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CChoreoEvent::AddTrack
void __fastcall CFlexAnimationTrack::CFlexAnimationTrack(CFlexAnimationTrack *const this, CChoreoEvent *event)
{
  EdgeInfo_t *v2; // r9
  CUtlVector<CExpressionSample,CUtlMemory<CExpressionSample,int> > *p_m_Ramp; // r8
  CCurveData_0 *m_Ramp; // r12
  vec_t x; // xmm1_4
  vec_t y; // xmm0_4
  EdgeInfo_t *m_RampEdgeInfo; // rax
  CUtlVectorBase<CExpressionSample,CUtlMemory<CExpressionSample,int> >::CAllocator *p_m_Memory; // rdi
  signed __int64 v10; // rdx

  v2 = (this + 208);
  p_m_Ramp = &this->m_Ramp[0].m_Ramp;
  m_Ramp = this->m_Ramp;
  x = vec2_origin.x;
  y = vec2_origin.y;
  this->_vptr_ICurveDataAccessor = &off_47C2950;
  m_RampEdgeInfo = this->m_Ramp[0].m_RampEdgeInfo;
  this->m_sControllerName.m_pString = 0;
  p_m_Memory = &this->m_Ramp[0].m_Ramp.m_Memory;
  p_m_Memory[-2].m_nAllocationCount = 0;
  p_m_Memory[-2].m_nGrowSize = 0;
  do
  {
    m_RampEdgeInfo[-2].m_ZeroPos.m_AnchorPos = 0;
    v10 = m_RampEdgeInfo - m_Ramp;
    m_RampEdgeInfo = (m_RampEdgeInfo + 72);
    *(&p_m_Ramp[-1] + v10 - 8) = 0;
    *(&p_m_Memory[-2].m_pMemory + v10) = 0;
    *(&p_m_Memory[-1] + v10 - 8) = 0;
    *(&p_m_Memory[-1] + v10 - 4) = 0;
    LOWORD(m_RampEdgeInfo[-4].m_ZeroPos.m_AnchorPos.x) = 0;
    LOWORD(v10) = HIWORD(m_RampEdgeInfo[-4].m_ZeroPos.m_AnchorPos.x);
    *&m_RampEdgeInfo[-5].m_ZeroPos.m_curvetype = x;
    *&m_RampEdgeInfo[-5].m_bActive = y;
    LOBYTE(m_RampEdgeInfo[-4].m_ZeroPos.m_AnchorPos.y) = 0;
    LOWORD(v10) = v10 | 0x7FFF;
    *&m_RampEdgeInfo[-4].m_ZeroPos.m_curvetype = x;
    HIWORD(m_RampEdgeInfo[-4].m_ZeroPos.m_AnchorPos.x) = v10;
    *&m_RampEdgeInfo[-4].m_bActive = y;
    HIBYTE(m_RampEdgeInfo[-4].m_ZeroPos.m_AnchorPos.x) = BYTE1(v10) & 0x7F;
    LOWORD(v10) = HIWORD(m_RampEdgeInfo[-3].m_ZeroPos.m_AnchorPos.x);
    LOWORD(m_RampEdgeInfo[-3].m_ZeroPos.m_AnchorPos.x) = 0;
    LOBYTE(m_RampEdgeInfo[-3].m_ZeroPos.m_AnchorPos.y) = 0;
    *&m_RampEdgeInfo[-3].m_ZeroPos.m_curvetype = 0;
    LOWORD(v10) = v10 | 0x7FFF;
    HIWORD(m_RampEdgeInfo[-3].m_ZeroPos.m_AnchorPos.x) = v10;
    HIBYTE(m_RampEdgeInfo[-3].m_ZeroPos.m_AnchorPos.x) = BYTE1(v10) & 0x7F;
  }
  while ( m_RampEdgeInfo != v2 );
  *(this + 192) &= 0xF8u;
  this->m_Ramp[0].m_pAccessor = this;
  this->m_Ramp[1].m_pAccessor = this;
  this->m_pEvent = event;
  this->m_nFlexControllerIndex[1] = -1;
  this->m_nFlexControllerIndex[0] = -1;
  this->m_nFlexControllerIndexRaw[1] = LocalFlexController_t::DUMMY_FLEX_CONTROLLER|0x80000000;
  this->m_nFlexControllerIndexRaw[0] = LocalFlexController_t::DUMMY_FLEX_CONTROLLER|0x80000000;
  CFlexAnimationTrack::InitLeftRightEdge(this);
}


// CFlexAnimationTrack::CFlexAnimationTrack  (line 283, @0x000000000307b360, libserver.so)  // inlines: CCurveData, CExpressionSample, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, EdgeInfo_t, SetDataAccessor, Vector2D, ~CCurveData, ~CUtlString, ~CUtlVector
// calls: CUtlString::operator=, CCurveData::CopyFrom, CFlexAnimationTrack::InitLeftRightEdge, CCurveData::RemoveBezierData, CUtlVectorBase<CExpressionSample, CUtlMemory<CExpressionSample, int> >::~CUtlVectorBase, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CChoreoEvent::operator=
void __fastcall CFlexAnimationTrack::CFlexAnimationTrack(
        CFlexAnimationTrack *const this,
        const CFlexAnimationTrack *src)
{
  EdgeInfo_t *v2; // r8
  CCurveData *m_Ramp; // r13
  CUtlVectorBase<CExpressionSample,CUtlMemory<CExpressionSample,int> >::CAllocator *p_m_Memory; // rsi
  EdgeInfo_t *m_RampEdgeInfo; // rax
  CUtlVector<CExpressionSample,CUtlMemory<CExpressionSample,int> > *p_m_Ramp; // rdi
  vec_t x; // xmm1_4
  vec_t y; // xmm0_4
  signed __int64 v11; // rdx
  char v12; // al
  char v13; // al

  v2 = (this + 208);
  m_Ramp = this->m_Ramp;
  p_m_Memory = &this->m_Ramp[0].m_Ramp.m_Memory;
  this->_vptr_ICurveDataAccessor = &off_47C2950;
  this->m_sControllerName.m_pString = 0;
  m_RampEdgeInfo = this->m_Ramp[0].m_RampEdgeInfo;
  this->m_flMin = 0.0;
  p_m_Ramp = &this->m_Ramp[0].m_Ramp;
  HIDWORD(p_m_Ramp[-1].m_Memory.m_pMemory) = 0;
  x = vec2_origin.x;
  y = vec2_origin.y;
  do
  {
    m_RampEdgeInfo[-2].m_ZeroPos.m_AnchorPos = 0;
    v11 = m_RampEdgeInfo - m_Ramp;
    m_RampEdgeInfo = (m_RampEdgeInfo + 72);
    *(&p_m_Ramp[-1] + v11 - 8) = 0;
    *(&p_m_Memory[-2].m_pMemory + v11) = 0;
    *(&p_m_Memory[-1] + v11 - 8) = 0;
    *(&p_m_Memory[-1] + v11 - 4) = 0;
    LOWORD(v11) = HIWORD(m_RampEdgeInfo[-4].m_ZeroPos.m_AnchorPos.x);
    *&m_RampEdgeInfo[-5].m_ZeroPos.m_curvetype = x;
    *&m_RampEdgeInfo[-5].m_bActive = y;
    LOWORD(m_RampEdgeInfo[-4].m_ZeroPos.m_AnchorPos.x) = 0;
    LOBYTE(m_RampEdgeInfo[-4].m_ZeroPos.m_AnchorPos.y) = 0;
    LOWORD(v11) = v11 | 0x7FFF;
    *&m_RampEdgeInfo[-4].m_ZeroPos.m_curvetype = x;
    HIWORD(m_RampEdgeInfo[-4].m_ZeroPos.m_AnchorPos.x) = v11;
    *&m_RampEdgeInfo[-4].m_bActive = y;
    HIBYTE(m_RampEdgeInfo[-4].m_ZeroPos.m_AnchorPos.x) = BYTE1(v11) & 0x7F;
    LOWORD(v11) = HIWORD(m_RampEdgeInfo[-3].m_ZeroPos.m_AnchorPos.x);
    LOWORD(m_RampEdgeInfo[-3].m_ZeroPos.m_AnchorPos.x) = 0;
    LOBYTE(m_RampEdgeInfo[-3].m_ZeroPos.m_AnchorPos.y) = 0;
    *&m_RampEdgeInfo[-3].m_ZeroPos.m_curvetype = 0;
    LOWORD(v11) = v11 | 0x7FFF;
    HIWORD(m_RampEdgeInfo[-3].m_ZeroPos.m_AnchorPos.x) = v11;
    HIBYTE(m_RampEdgeInfo[-3].m_ZeroPos.m_AnchorPos.x) = BYTE1(v11) & 0x7F;
  }
  while ( m_RampEdgeInfo != v2 );
  this->m_Ramp[0].m_pAccessor = this;
  this->m_Ramp[1].m_pAccessor = this;
  CUtlString::operator=(&this->m_sControllerName, &src->m_sControllerName);
  v12 = *(src + 192) & 1 | *(this + 192) & 0xFE;
  *(this + 192) = v12;
  v13 = *(src + 192) & 2 | v12 & 0xFD;
  *(this + 192) = v13;
  *(this + 192) = *(src + 192) & 4 | v13 & 0xFB;
  this->m_nFlexControllerIndex[0] = src->m_nFlexControllerIndex[0];
  this->m_nFlexControllerIndexRaw[0] = src->m_nFlexControllerIndexRaw[0];
  this->m_nFlexControllerIndex[1] = src->m_nFlexControllerIndex[1];
  this->m_nFlexControllerIndexRaw[1] = src->m_nFlexControllerIndexRaw[1];
  this->m_flMin = src->m_flMin;
  this->m_flMax = src->m_flMax;
  CCurveData::CopyFrom(m_Ramp, src->m_Ramp);
  CCurveData::CopyFrom(&this->m_Ramp[1], &src->m_Ramp[1]);
  this->m_pEvent = 0;
  CFlexAnimationTrack::InitLeftRightEdge(this);
}


// CFlexAnimationTrack::InitLeftRightEdge  (line 312, @0x0000000003077f60, libserver.so)
// calls: CCurveData::SetEdgeInfo
// callers: CFlexAnimationTrack::CFlexAnimationTrack
void __fastcall CFlexAnimationTrack::InitLeftRightEdge(CFlexAnimationTrack *const this)
{
  CCurveData *v1; // rbx

  v1 = &this->m_Ramp[1];
  CCurveData::SetEdgeInfo(&this->m_Ramp[1], 1, 0, 0.5, 1);
  CCurveData::SetEdgeInfo(v1, 0, 0, 0.5, 1);
}


// CFlexAnimationTrack::GetRamp  (line 320, @0x0000000003077fb0, libserver.so)
// callers: CChoreoScene::ParseFlexAnimations
CCurveData_0 *__fastcall CFlexAnimationTrack::GetRamp(CFlexAnimationTrack *const this, FlexExpressionTrackType_t type)
{
  return &this->m_Ramp[type];
}


// CFlexAnimationTrack::GetRamp  (line 325, @0x0000000003077fd0, libserver.so)
// callers: CChoreoScene::FileSaveFlexAnimationTrack
const CCurveData_0 *__fastcall CFlexAnimationTrack::GetRamp(
        const CFlexAnimationTrack *const this,
        FlexExpressionTrackType_t type)
{
  return &this->m_Ramp[type];
}


// CFlexAnimationTrack::GetDuration  (line 330, @0x0000000003077740, libserver.so)
float __fastcall CFlexAnimationTrack::GetDuration(const CFlexAnimationTrack *const this)
{
  return (*(this->m_pEvent->_vptr_CChoreoObjectBase + 8))(this->m_pEvent);
}


// CFlexAnimationTrack::CurveHasEndTime  (line 335, @0x0000000003077760, libserver.so)
bool __fastcall CFlexAnimationTrack::CurveHasEndTime(const CFlexAnimationTrack *const this)
{
  return (*(this->m_pEvent->_vptr_CChoreoObjectBase + 5))(this->m_pEvent);
}


// CFlexAnimationTrack::GetDefaultCurveType  (line 340, @0x0000000003077780, libserver.so)
int __fastcall CFlexAnimationTrack::GetDefaultCurveType(const CFlexAnimationTrack *const this)
{
  return (*(this->m_pEvent->_vptr_CChoreoObjectBase + 6))(this->m_pEvent);
}


// CFlexAnimationTrack::GetDefaultEdgeValue  (line 345, @0x00000000030777a0, libserver.so)
float __fastcall CFlexAnimationTrack::GetDefaultEdgeValue(const CFlexAnimationTrack *const this)
{
  float m_flMin; // xmm1_4
  float result; // xmm0_4
  float m_flMax; // xmm2_4

  m_flMin = this->m_flMin;
  result = 0.0;
  m_flMax = this->m_flMax;
  if ( m_flMin != m_flMax )
    return (0.0 - m_flMin) / (m_flMax - m_flMin);
  return result;
}


// CFlexAnimationTrack::SetEvent  (line 355, @0x0000000003077ff0, libserver.so)
void __fastcall CFlexAnimationTrack::SetEvent(CFlexAnimationTrack *const this, CChoreoEvent *event)
{
  this->m_pEvent = event;
}


// CFlexAnimationTrack::Clear  (line 360, @0x0000000003078000, libserver.so)
// calls: CCurveData::Clear
void __fastcall CFlexAnimationTrack::Clear(CFlexAnimationTrack *const this)
{
  CCurveData::Clear(this->m_Ramp);
  CCurveData::Clear(&this->m_Ramp[1]);
}


// CFlexAnimationTrack::SetFlexControllerName  (line 368, @0x0000000003078030, libserver.so)
// calls: CUtlString::operator=
void __fastcall CFlexAnimationTrack::SetFlexControllerName(CFlexAnimationTrack *const this, const char *name)
{
  CUtlString::operator=(&this->m_sControllerName, name);
}


// CFlexAnimationTrack::GetFlexControllerName  (line 373, @0x0000000003078040, libserver.so)  // inlines: String
// calls: CUtlString::Get
// callers: CBaseFlex::AddFlexAnimation, CChoreoScene::FileSaveFlexAnimationTrack
const char *__fastcall CFlexAnimationTrack::GetFlexControllerName(const CFlexAnimationTrack *const this)
{
  return CUtlString::Get(&this->m_sControllerName);
}


// CFlexAnimationTrack::IsTrackActive  (line 378, @0x0000000003078050, libserver.so)
// callers: CBaseFlex::AddFlexAnimation, CChoreoScene::FileSaveFlexAnimationTrack
bool __fastcall CFlexAnimationTrack::IsTrackActive(const CFlexAnimationTrack *const this)
{
  return *(this + 192) & 1;
}


// CFlexAnimationTrack::SetTrackActive  (line 383, @0x0000000003078060, libserver.so)
// callers: CChoreoScene::ParseFlexAnimations
void __fastcall CFlexAnimationTrack::SetTrackActive(CFlexAnimationTrack *const this, bool active)
{
  *(this + 192) = active | *(this + 192) & 0xFE;
}


// CFlexAnimationTrack::SetEdgeInfo  (line 388, @0x0000000003078080, libserver.so)  // inlines: SetCurveType, SetValue
// calls: CCurveData::GetEdgeInfo
// callers: CChoreoScene::ParseFlexAnimations
void __fastcall CFlexAnimationTrack::SetEdgeInfo(
        CFlexAnimationTrack *const this,
        bool leftEdge,
        unsigned __int16 curveType,
        vec_t zero)
{
  CCurveData *m_Ramp; // r14
  _BOOL4 v6; // ebx
  CCurveData *v7; // r13

  m_Ramp = this->m_Ramp;
  v6 = !leftEdge;
  v7 = &this->m_Ramp[1];
  CCurveData::GetEdgeInfo(this->m_Ramp, v6)->m_ZeroPos.m_curvetype = curveType;
  CCurveData::GetEdgeInfo(m_Ramp, v6)->m_ZeroPos.m_AnchorPos.y = zero;
  CCurveData::GetEdgeInfo(v7, v6)->m_ZeroPos.m_curvetype = curveType;
  CCurveData::GetEdgeInfo(v7, v6)->m_ZeroPos.m_AnchorPos.y = zero;
}


// CFlexAnimationTrack::GetEdgeInfo  (line 398, @0x0000000003078100, libserver.so)  // inlines: GetCurveType
// calls: CCurveData::GetEdgeInfo
void __fastcall CFlexAnimationTrack::GetEdgeInfo(
        const CFlexAnimationTrack *const this,
        bool leftEdge,
        int *const curveType,
        float *const zero)
{
  _BOOL4 v5; // r12d
  CCurveData_0 *m_Ramp; // rbx

  v5 = !leftEdge;
  m_Ramp = this->m_Ramp;
  *curveType = CCurveData::GetEdgeInfo(this->m_Ramp, v5)->m_ZeroPos.m_curvetype;
  *zero = CCurveData::GetEdgeInfo(m_Ramp, v5)->m_ZeroPos.m_AnchorPos.y;
}


// CFlexAnimationTrack::SetEdgeActive  (line 405, @0x0000000003078150, libserver.so)  // inlines: SetActive
// calls: CCurveData::GetEdgeInfo
// callers: CChoreoScene::ParseFlexAnimations
void __fastcall CFlexAnimationTrack::SetEdgeActive(CFlexAnimationTrack *const this, bool leftEdge, bool state)
{
  _BOOL4 v3; // r13d

  v3 = !leftEdge;
  CCurveData::GetEdgeInfo(this->m_Ramp, v3)->m_bActive = state;
  CCurveData::GetEdgeInfo(&this->m_Ramp[1], v3)->m_bActive = state;
}


// CFlexAnimationTrack::IsEdgeActive  (line 414, @0x00000000030781a0, libserver.so)
// calls: CCurveData::GetEdgeInfo
// callers: CChoreoScene::FileSaveFlexAnimationTrack
bool __fastcall CFlexAnimationTrack::IsEdgeActive(const CFlexAnimationTrack *const this, bool leftEdge)
{
  return CCurveData::GetEdgeInfo(this->m_Ramp, !leftEdge)->m_bActive;
}


// CFlexAnimationTrack::GetEdgeCurveType  (line 420, @0x00000000030781c0, libserver.so)  // inlines: GetCurveType, IsEdgeActive
// calls: CCurveData::GetEdgeInfo
// callers: CChoreoScene::FileSaveFlexAnimationTrack
int __fastcall CFlexAnimationTrack::GetEdgeCurveType(const CFlexAnimationTrack *const this, bool leftEdge)
{
  _BOOL4 v2; // r12d
  CCurveData_0 *m_Ramp; // rbx
  const EdgeInfo_t *EdgeInfo; // rax
  int v5; // edx

  v2 = !leftEdge;
  m_Ramp = this->m_Ramp;
  EdgeInfo = CCurveData::GetEdgeInfo(this->m_Ramp, v2);
  v5 = 0;
  if ( EdgeInfo->m_bActive )
    return CCurveData::GetEdgeInfo(m_Ramp, v2)->m_ZeroPos.m_curvetype;
  return v5;
}


// CFlexAnimationTrack::GetEdgeZeroValue  (line 431, @0x0000000003078200, libserver.so)  // inlines: IsEdgeActive
// calls: CCurveData::GetEdgeInfo
// callers: CFlexAnimationTrack::GetIntensityInternal, CChoreoScene::FileSaveFlexAnimationTrack
float __fastcall CFlexAnimationTrack::GetEdgeZeroValue(const CFlexAnimationTrack *const this, bool leftEdge)
{
  _BOOL4 v2; // r12d
  CCurveData_0 *m_Ramp; // rbx
  const EdgeInfo_t *EdgeInfo; // rax
  float result; // xmm0_4

  v2 = !leftEdge;
  m_Ramp = this->m_Ramp;
  EdgeInfo = CCurveData::GetEdgeInfo(this->m_Ramp, v2);
  result = 0.0;
  if ( EdgeInfo->m_bActive )
    return CCurveData::GetEdgeInfo(m_Ramp, v2)->m_ZeroPos.m_AnchorPos.y;
  return result;
}


// CFlexAnimationTrack::GetFracIntensity  (line 442, @0x0000000003078240, libserver.so)
// calls: CCurveData::GetEdgeZeroValue, CCurveData::GetIntensity
// callers: CFlexAnimationTrack::GetIntensityInternal
float __fastcall CFlexAnimationTrack::GetFracIntensity(
        const CFlexAnimationTrack *const this,
        double a2,
        float time,
        FlexExpressionTrackType_t type)
{
  const CCurveData *v4; // r12
  float result; // xmm0_4
  CChoreoEvent *m_pEvent; // rax

  v4 = &this->m_Ramp[type];
  result = CCurveData::GetEdgeZeroValue(v4, 1);
  m_pEvent = this->m_pEvent;
  if ( m_pEvent != 0 && m_pEvent->m_flEndTime != -1.0 )
    return CCurveData::GetIntensity(v4, -1.0);
  return result;
}


// CFlexAnimationTrack::GetIntensityInternal  (line 455, @0x00000000030782b0, libserver.so)  // inlines: GetStartTime, HasEndTime, IsEdgeActive
// calls: CCurveData::Count, CCurveData::GetEdgeInfo, CFlexAnimationTrack::GetEdgeZeroValue, CCurveData::GetEdgeZeroValue, CFlexAnimationTrack::GetFracIntensity
// callers: CFlexAnimationTrack::GetSampleIntensity, CFlexAnimationTrack::GetBalanceIntensity, CFlexAnimationTrack::GetIntensity
float __fastcall CFlexAnimationTrack::GetIntensityInternal(
        const CFlexAnimationTrack *const this,
        float a2,
        float time,
        FlexExpressionTrackType_t type)
{
  const CCurveData *v4; // r13
  float result; // xmm0_4
  CChoreoEvent *m_pEvent; // rax
  float m_flEndTime; // xmm0_4
  float m_flMin; // xmm1_4
  float m_flMax; // xmm2_4
  float m_flStartTime; // xmm1_4
  double v13; // xmm0_8

  v4 = &this->m_Ramp[type];
  if ( CCurveData::Count(v4) != 0 )
  {
    m_pEvent = this->m_pEvent;
    if ( m_pEvent == 0
      || (m_flEndTime = m_pEvent->m_flEndTime) == -1.0
      || (m_flStartTime = m_pEvent->m_flStartTime) > a2 )
    {
      result = CCurveData::GetEdgeZeroValue(v4, 1);
    }
    else if ( a2 <= m_flEndTime )
    {
      *&v13 = LODWORD(a2);
      *&v13 = a2 - m_flStartTime;
      result = CFlexAnimationTrack::GetFracIntensity(this, v13, m_flStartTime, type);
    }
    else
    {
      result = CCurveData::GetEdgeZeroValue(v4, 0);
    }
LABEL_9:
    if ( type != FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_INTENSITY )
      return result;
    goto LABEL_10;
  }
  result = 0.5;
  if ( type == FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_LEFTRIGHT )
    return result;
  if ( !CCurveData::GetEdgeInfo(this->m_Ramp, 0)->m_bActive )
  {
    (*(this->_vptr_ICurveDataAccessor + 3))(this);
    goto LABEL_9;
  }
  result = CFlexAnimationTrack::GetEdgeZeroValue(this, 1);
  if ( type != FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_INTENSITY )
    return result;
LABEL_10:
  m_flMin = this->m_flMin;
  m_flMax = this->m_flMax;
  if ( m_flMin != m_flMax )
    return (result * (m_flMax - m_flMin)) + m_flMin;
  return result;
}


// CFlexAnimationTrack::GetSampleIntensity  (line 500, @0x00000000030783f0, libserver.so)
// calls: CFlexAnimationTrack::GetIntensityInternal
float __fastcall CFlexAnimationTrack::GetSampleIntensity(const CFlexAnimationTrack *const this, float a2, float time)
{
  return CFlexAnimationTrack::GetIntensityInternal(
           this,
           a2,
           time,
           FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_INTENSITY);
}


// CFlexAnimationTrack::GetBalanceIntensity  (line 505, @0x0000000003078400, libserver.so)
// calls: CFlexAnimationTrack::GetIntensityInternal
float __fastcall CFlexAnimationTrack::GetBalanceIntensity(const CFlexAnimationTrack *const this, float a2, float time)
{
  if ( (*(this + 192) & 2) != 0 )
    return CFlexAnimationTrack::GetIntensityInternal(
             this,
             a2,
             time,
             FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_LEFTRIGHT);
  else
    return 1.0;
}


// CFlexAnimationTrack::GetIntensity  (line 516, @0x0000000003078430, libserver.so)  // inlines: GetBalanceIntensity, GetSampleIntensity
// calls: CFlexAnimationTrack::GetIntensityInternal
// callers: CBaseFlex::AddFlexAnimation
float __fastcall CFlexAnimationTrack::GetIntensity(
        const CFlexAnimationTrack *const this,
        float a2,
        float time,
        FlexExpressionTrackType_t side)
{
  float IntensityInternal; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float mag; // [rsp+Ch] [rbp-14h]

  IntensityInternal = CFlexAnimationTrack::GetIntensityInternal(
                        this,
                        a2,
                        time,
                        FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_INTENSITY);
  v8 = IntensityInternal;
  v9 = a2;
  if ( (*(this + 192) & 2) == 0 )
    return 1.0 * v8;
  mag = IntensityInternal;
  v10 = CFlexAnimationTrack::GetIntensityInternal(
          this,
          v9,
          v7,
          FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_LEFTRIGHT);
  v8 = mag;
  if ( side != FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_INTENSITY )
  {
    if ( side != FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_LEFTRIGHT || v10 >= 0.5 )
      return 1.0 * v8;
    return (v10 + v10) * mag;
  }
  else
  {
    if ( v10 <= 0.5 )
      return 1.0 * v8;
    return ((1.0 - v10) + (1.0 - v10)) * mag;
  }
}


// CFlexAnimationTrack::GetEvent  (line 542, @0x0000000003078500, libserver.so)
CChoreoEvent *__fastcall CFlexAnimationTrack::GetEvent(CFlexAnimationTrack *const this)
{
  return this->m_pEvent;
}


// CFlexAnimationTrack::GetEvent  (line 547, @0x0000000003078510, libserver.so)
const CChoreoEvent *__fastcall CFlexAnimationTrack::GetEvent(const CFlexAnimationTrack *const this)
{
  return this->m_pEvent;
}


// CFlexAnimationTrack::GetFlexControllerIndex  (line 552, @0x0000000003078520, libserver.so)
int __fastcall CFlexAnimationTrack::GetFlexControllerIndex(
        const CFlexAnimationTrack *const this,
        FlexExpressionTrackType_t side)
{
  if ( (*(this + 192) & 2) != 0 )
    return this->m_nFlexControllerIndex[side];
  else
    return this->m_nFlexControllerIndex[0];
}


// CFlexAnimationTrack::GetRawFlexControllerIndex  (line 564, @0x0000000003078550, libserver.so)
// callers: CBaseFlex::AddFlexAnimation
LocalFlexController_t __fastcall CFlexAnimationTrack::GetRawFlexControllerIndex(
        const CFlexAnimationTrack *const this,
        FlexExpressionTrackType_t side)
{
  if ( (*(this + 192) & 2) != 0 )
    return this->m_nFlexControllerIndexRaw[side];
  else
    return this->m_nFlexControllerIndexRaw[0];
}


// CFlexAnimationTrack::SetFlexControllerIndex  (line 576, @0x0000000003078580, libserver.so)
// callers: CBaseFlex::AddFlexAnimation
void __fastcall CFlexAnimationTrack::SetFlexControllerIndex(
        CFlexAnimationTrack *const this,
        LocalFlexController_t raw,
        int index,
        FlexExpressionTrackType_t side)
{
  char *v4; // rax

  v4 = this + 4 * side;
  *(v4 + 46) = index;
  *(v4 + 44) = raw;
}


// CFlexAnimationTrack::SetComboType  (line 585, @0x00000000030785a0, libserver.so)
// callers: CChoreoScene::ParseFlexAnimations
void __fastcall CFlexAnimationTrack::SetComboType(CFlexAnimationTrack *const this, bool combo)
{
  *(this + 192) = (2 * combo) | *(this + 192) & 0xFD;
}


// CFlexAnimationTrack::IsComboType  (line 590, @0x00000000030785c0, libserver.so)
// callers: CBaseFlex::AddFlexAnimation, CChoreoScene::FileSaveFlexAnimationTrack
bool __fastcall CFlexAnimationTrack::IsComboType(const CFlexAnimationTrack *const this)
{
  return (*(this + 192) & 2) != 0;
}


// CFlexAnimationTrack::SetServerSide  (line 596, @0x00000000030785e0, libserver.so)
void __fastcall CFlexAnimationTrack::SetServerSide(CFlexAnimationTrack *const this, bool state)
{
  *(this + 192) = (4 * state) | *(this + 192) & 0xFB;
}


// CFlexAnimationTrack::IsServerSide  (line 601, @0x0000000003078600, libserver.so)
// callers: CBaseFlex::AddFlexAnimation
bool __fastcall CFlexAnimationTrack::IsServerSide(const CFlexAnimationTrack *const this)
{
  return (*(this + 192) & 4) != 0;
}


// CFlexAnimationTrack::SetMin  (line 606, @0x0000000003078620, libserver.so)
// callers: CChoreoScene::ParseFlexAnimations
void __fastcall CFlexAnimationTrack::SetMin(CFlexAnimationTrack *const this, float a2, float value)
{
  this->m_flMin = a2;
}


// CFlexAnimationTrack::SetMax  (line 611, @0x0000000003078630, libserver.so)
// callers: CChoreoScene::ParseFlexAnimations
void __fastcall CFlexAnimationTrack::SetMax(CFlexAnimationTrack *const this, float a2, float value)
{
  this->m_flMax = a2;
}


// CFlexAnimationTrack::GetMin  (line 616, @0x0000000003078640, libserver.so)
// callers: CChoreoScene::FileSaveFlexAnimationTrack
float __fastcall CFlexAnimationTrack::GetMin(const CFlexAnimationTrack *const this)
{
  return this->m_flMin;
}


// CFlexAnimationTrack::GetMax  (line 621, @0x0000000003078650, libserver.so)
// callers: CChoreoScene::FileSaveFlexAnimationTrack
float __fastcall CFlexAnimationTrack::GetMax(const CFlexAnimationTrack *const this)
{
  return this->m_flMax;
}


// CFlexAnimationTrack::IsInverted  (line 626, @0x0000000003078660, libserver.so)
bool __fastcall CFlexAnimationTrack::IsInverted(const CFlexAnimationTrack *const this)
{
  return (*(this + 192) & 8) != 0;
}


// CFlexAnimationTrack::SetInverted  (line 631, @0x0000000003078680, libserver.so)
void __fastcall CFlexAnimationTrack::SetInverted(CFlexAnimationTrack *const this, bool isInverted)
{
  *(this + 192) = (8 * isInverted) | *(this + 192) & 0xF7;
}


// CChoreoEvent::CChoreoEvent  (line 642, @0x000000000307c010, libserver.so)  // inlines: CCurveData, CExpressionSample, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, EdgeInfo_t, Init, SoundGuid_t, Vector2D
// callers: CChoreoChannel::operator=, CChoreoScene::AllocEvent
// globals: CChoreoObjectBase::s_nNextChoreoObjectHandle
void __fastcall CChoreoEvent::CChoreoEvent(CChoreoEvent *const this, CChoreoScene *scene)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  __int16 v4; // ax
  __int16 v5; // ax
  __int64 v6; // rdx
  vec_t z; // eax
  ChoreoObjectHandle_t v8; // rax

  this->_vptr_CChoreoObjectBase = &off_47C2990;
  this->_vptr_ICurveDataAccessor = off_47C29E8;
  this->m_Ramp.m_pAccessor = &this->ICurveDataAccessor;
  this->m_fType = 0;
  this->m_ccType = 0;
  this->m_Name.m_pString = 0;
  x = vec2_origin.x;
  this->m_Parameters.m_pString = 0;
  y = vec2_origin.y;
  this->m_flStartTime = 0.0;
  this->m_Ramp.m_RampEdgeInfo[0].m_ZeroPos.m_curvetype = 0;
  v4 = *(&this->m_Ramp.m_RampEdgeInfo[0].m_ZeroPos + 5);
  this->m_Parameters2.m_pString = 0;
  this->m_Parameters3.m_pString = 0;
  this->m_flEndTime = -1.0;
  v4 |= 0x7FFFu;
  this->m_flGestureSequenceDuration = 0.0;
  *(&this->m_Ramp.m_RampEdgeInfo[0].m_ZeroPos + 5) = v4;
  this->m_nNumLoops = -1;
  *(&this->m_Ramp.m_RampEdgeInfo[0].m_ZeroPos + 11) = HIBYTE(v4) & 0x7F;
  this->m_Ramp.m_RampEdgeInfo[1].m_ZeroPos.m_curvetype = 0;
  v5 = *(&this->m_Ramp.m_RampEdgeInfo[1].m_ZeroPos + 5);
  this->m_nLoopsRemaining = 0;
  this->m_Ramp.m_Ramp.m_Size = 0;
  this->m_Ramp.m_Ramp.m_Memory.m_pMemory = 0;
  v5 |= 0x7FFFu;
  this->m_Ramp.m_Ramp.m_Memory.m_nAllocationCount = 0;
  this->m_Ramp.m_Ramp.m_Memory.m_nGrowSize = 0;
  this->m_Ramp.m_RampEdgeInfo[0].m_ZeroPos.m_AnchorPos.x = x;
  this->m_Ramp.m_RampEdgeInfo[0].m_ZeroPos.m_AnchorPos.y = y;
  this->m_Ramp.m_RampEdgeInfo[0].m_bActive = 0;
  this->m_Ramp.m_RampEdgeInfo[1].m_ZeroPos.m_AnchorPos.x = x;
  this->m_Ramp.m_RampEdgeInfo[1].m_ZeroPos.m_AnchorPos.y = y;
  *(&this->m_Ramp.m_RampEdgeInfo[1].m_ZeroPos + 5) = v5;
  *(&this->m_Ramp.m_RampEdgeInfo[1].m_ZeroPos + 11) = HIBYTE(v5) & 0x7F;
  this->m_Ramp.m_pBezierControls = 0;
  this->m_TagName.m_pString = 0;
  this->m_TagWavName.m_pString = 0;
  this->m_pActor = 0;
  this->m_pChannel = 0;
  this->m_RelativeTags.m_Size = 0;
  this->m_RelativeTags.m_Memory.m_pMemory = 0;
  this->m_RelativeTags.m_Memory.m_nAllocationCount = 0;
  this->m_RelativeTags.m_Memory.m_nGrowSize = 0;
  this->m_TimingTags.m_Size = 0;
  this->m_TimingTags.m_Memory.m_pMemory = 0;
  this->m_TimingTags.m_Memory.m_nAllocationCount = 0;
  this->m_TimingTags.m_Memory.m_nGrowSize = 0;
  this->m_AbsoluteTags[0].m_Size = 0;
  this->m_AbsoluteTags[0].m_Memory.m_pMemory = 0;
  this->m_AbsoluteTags[0].m_Memory.m_nAllocationCount = 0;
  this->m_AbsoluteTags[0].m_Memory.m_nGrowSize = 0;
  this->m_AbsoluteTags[1].m_Size = 0;
  this->m_AbsoluteTags[1].m_Memory.m_pMemory = 0;
  this->m_AbsoluteTags[1].m_Memory.m_nAllocationCount = 0;
  this->m_AbsoluteTags[1].m_Memory.m_nGrowSize = 0;
  this->m_FlexAnimationTracks.m_Size = 0;
  this->m_FlexAnimationTracks.m_Memory.m_pMemory = 0;
  this->m_FlexAnimationTracks.m_Memory.m_nAllocationCount = 0;
  this->m_FlexAnimationTracks.m_Memory.m_nGrowSize = 0;
  this->m_pSubScene = 0;
  this->m_pMixer = 0;
  this->m_engineId.m_Data = 0;
  this->m_nPitch = 0;
  this->m_nYaw = 0;
  this->m_nFwd = 0;
  this->m_nRight = 0;
  this->m_flDistanceToTarget = 0.0;
  this->m_CCToken.m_pString = 0;
  this->m_uRequiredCombinedChecksum = 0;
  this->m_nNumSlaves = 0;
  v6 = *&vec3_origin.x;
  this->m_flLastSlaveEndTime = 0.0;
  z = vec3_origin.z;
  this->m_Dependencies.m_Size = 0;
  this->m_Dependencies.m_Memory.m_pMemory = 0;
  this->m_Dependencies.m_Memory.m_nAllocationCount = 0;
  *&this->m_vTarget.x = v6;
  this->m_vTarget.z = z;
  v8 = CChoreoObjectBase::s_nNextChoreoObjectHandle;
  this->m_Dependencies.m_Memory.m_nGrowSize = 0;
  this->m_nDefaultCurveType = 257;
  this->m_flPrevCycle = 0.0;
  this->m_flPrevTime = 0.0;
  CChoreoObjectBase::s_nNextChoreoObjectHandle = v8 + 1;
  this->m_flSoundStartDelay = 0.0;
  this->m_pScene = scene;
  this->m_hChoreoObjectHandle = v8;
  *(this + 440) = 0;
  *(this + 441) = 32;
}


// CChoreoEvent::CChoreoEvent  (line 648, @0x000000000307c330, libserver.so)  // inlines: CCurveData, CExpressionSample, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, EdgeInfo_t, Init, Purge, RemoveAll, SetName, SetParameters, SetType, SoundGuid_t, Vector2D, ~CCurveData, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::operator=, CUtlString::FreeMemoryBlock, CUtlVectorBase<CFlexAnimationTrack*, CUtlMemory<CFlexAnimationTrack*, int> >::~CUtlVectorBase, CUtlVectorBase<CEventAbsoluteTag, CUtlMemory<CEventAbsoluteTag, int> >::~CUtlVectorBase, CUtlMemory<CChoreoEvent*, int>::Purge, CUtlVectorBase<CFlexTimingTag, CUtlMemory<CFlexTimingTag, int> >::~CUtlVectorBase, CUtlVectorBase<CEventRelativeTag, CUtlMemory<CEventRelativeTag, int> >::~CUtlVectorBase, CCurveData::RemoveBezierData, CUtlVectorBase<CExpressionSample, CUtlMemory<CExpressionSample, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CChoreoObjectBase::s_nNextChoreoObjectHandle
void __fastcall CChoreoEvent::CChoreoEvent(
        CChoreoEvent *const this,
        CChoreoScene *scene,
        EventNameMap_t::EVENTTYPE type,
        const char *name,
        const char *param)
{
  vec_t x; // xmm1_4
  vec_t y; // xmm0_4
  __int16 v9; // ax
  __int16 v10; // ax
  __int64 v11; // rdi
  vec_t z; // eax
  ChoreoObjectHandle_t v13; // rax

  this->_vptr_CChoreoObjectBase = &off_47C2990;
  this->m_ccType = 0;
  this->_vptr_ICurveDataAccessor = off_47C29E8;
  this->m_Ramp.m_pAccessor = &this->ICurveDataAccessor;
  this->m_Name.m_pString = 0;
  this->m_Parameters.m_pString = 0;
  this->m_Parameters2.m_pString = 0;
  x = vec2_origin.x;
  this->m_Parameters3.m_pString = 0;
  y = vec2_origin.y;
  this->m_flStartTime = 0.0;
  this->m_Ramp.m_RampEdgeInfo[0].m_ZeroPos.m_curvetype = 0;
  v9 = *(&this->m_Ramp.m_RampEdgeInfo[0].m_ZeroPos + 5);
  this->m_flEndTime = -1.0;
  this->m_flGestureSequenceDuration = 0.0;
  this->m_nNumLoops = -1;
  v9 |= 0x7FFFu;
  this->m_nLoopsRemaining = 0;
  *(&this->m_Ramp.m_RampEdgeInfo[0].m_ZeroPos + 5) = v9;
  this->m_Ramp.m_Ramp.m_Size = 0;
  *(&this->m_Ramp.m_RampEdgeInfo[0].m_ZeroPos + 11) = HIBYTE(v9) & 0x7F;
  this->m_Ramp.m_Ramp.m_Memory.m_pMemory = 0;
  this->m_Ramp.m_Ramp.m_Memory.m_nAllocationCount = 0;
  this->m_Ramp.m_Ramp.m_Memory.m_nGrowSize = 0;
  this->m_Ramp.m_RampEdgeInfo[0].m_ZeroPos.m_AnchorPos.x = x;
  this->m_Ramp.m_RampEdgeInfo[0].m_ZeroPos.m_AnchorPos.y = y;
  this->m_Ramp.m_RampEdgeInfo[0].m_bActive = 0;
  this->m_Ramp.m_RampEdgeInfo[1].m_ZeroPos.m_curvetype = 0;
  v10 = *(&this->m_Ramp.m_RampEdgeInfo[1].m_ZeroPos + 5);
  this->m_Ramp.m_RampEdgeInfo[1].m_ZeroPos.m_AnchorPos.x = x;
  this->m_Ramp.m_RampEdgeInfo[1].m_ZeroPos.m_AnchorPos.y = y;
  this->m_Ramp.m_RampEdgeInfo[1].m_bActive = 0;
  this->m_Ramp.m_pBezierControls = 0;
  v10 |= 0x7FFFu;
  *(&this->m_Ramp.m_RampEdgeInfo[1].m_ZeroPos + 5) = v10;
  this->m_TagName.m_pString = 0;
  *(&this->m_Ramp.m_RampEdgeInfo[1].m_ZeroPos + 11) = HIBYTE(v10) & 0x7F;
  this->m_TagWavName.m_pString = 0;
  this->m_pActor = 0;
  this->m_pChannel = 0;
  this->m_RelativeTags.m_Size = 0;
  this->m_RelativeTags.m_Memory.m_pMemory = 0;
  this->m_RelativeTags.m_Memory.m_nAllocationCount = 0;
  this->m_RelativeTags.m_Memory.m_nGrowSize = 0;
  this->m_TimingTags.m_Size = 0;
  this->m_TimingTags.m_Memory.m_pMemory = 0;
  this->m_TimingTags.m_Memory.m_nAllocationCount = 0;
  this->m_TimingTags.m_Memory.m_nGrowSize = 0;
  this->m_AbsoluteTags[0].m_Size = 0;
  this->m_AbsoluteTags[0].m_Memory.m_pMemory = 0;
  this->m_AbsoluteTags[0].m_Memory.m_nAllocationCount = 0;
  this->m_AbsoluteTags[0].m_Memory.m_nGrowSize = 0;
  this->m_AbsoluteTags[1].m_Size = 0;
  this->m_AbsoluteTags[1].m_Memory.m_pMemory = 0;
  this->m_AbsoluteTags[1].m_Memory.m_nAllocationCount = 0;
  this->m_AbsoluteTags[1].m_Memory.m_nGrowSize = 0;
  this->m_FlexAnimationTracks.m_Size = 0;
  this->m_FlexAnimationTracks.m_Memory.m_pMemory = 0;
  this->m_FlexAnimationTracks.m_Memory.m_nAllocationCount = 0;
  this->m_FlexAnimationTracks.m_Memory.m_nGrowSize = 0;
  this->m_pSubScene = 0;
  this->m_pMixer = 0;
  this->m_engineId.m_Data = 0;
  this->m_nPitch = 0;
  this->m_nYaw = 0;
  this->m_nFwd = 0;
  this->m_nRight = 0;
  v11 = *&vec3_origin.x;
  z = vec3_origin.z;
  this->m_fType = type;
  this->m_pScene = scene;
  this->m_flDistanceToTarget = 0.0;
  *&this->m_vTarget.x = v11;
  this->m_vTarget.z = z;
  v13 = CChoreoObjectBase::s_nNextChoreoObjectHandle;
  this->m_CCToken.m_pString = 0;
  this->m_uRequiredCombinedChecksum = 0;
  this->m_nNumSlaves = 0;
  this->m_hChoreoObjectHandle = v13;
  CChoreoObjectBase::s_nNextChoreoObjectHandle = v13 + 1;
  this->m_flLastSlaveEndTime = 0.0;
  this->m_Dependencies.m_Size = 0;
  this->m_Dependencies.m_Memory.m_pMemory = 0;
  this->m_Dependencies.m_Memory.m_nAllocationCount = 0;
  this->m_Dependencies.m_Memory.m_nGrowSize = 0;
  this->m_nDefaultCurveType = 257;
  this->m_flPrevCycle = 0.0;
  this->m_flPrevTime = 0.0;
  this->m_flSoundStartDelay = 0.0;
  *(this + 440) = 0;
  *(this + 441) = 32;
  if ( type == SUBSCENE || type == SPEAK )
    *(this + 440) |= 1u;
  CUtlString::operator=(&this->m_Name, name);
  if ( param != 0 )
    CUtlString::operator=(&this->m_Parameters, param);
}


// CChoreoEvent::~CChoreoEvent  (line 660, @0x000000000307c7d0, libserver.so)  // inlines: ClearEventDependencies, Purge, RemoveAll, RemoveAllTracks, ~CCurveData, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CChoreoEvent::RemoveTrack, CUtlString::FreeMemoryBlock, CUtlVectorBase<CEventAbsoluteTag, CUtlMemory<CEventAbsoluteTag, int> >::RemoveAll, CUtlMemory<CEventAbsoluteTag, int>::Purge, CUtlVectorBase<CFlexTimingTag, CUtlMemory<CFlexTimingTag, int> >::RemoveAll, CUtlVectorBase<CEventRelativeTag, CUtlMemory<CEventRelativeTag, int> >::RemoveAll, CCurveData::RemoveBezierData, CUtlMemory<CFlexTimingTag, int>::Purge, CUtlMemory<CEventRelativeTag, int>::Purge, CUtlMemory<CFlexAnimationTrack*, int>::Purge, CUtlMemory<CExpressionSample, int>::Purge, CUtlMemory<CChoreoEvent*, int>::Purge
// callers: CChoreoEvent::~CChoreoEvent
void __fastcall CChoreoEvent::~CChoreoEvent(CChoreoEvent *const this)
{
  CChoreoScene *m_pSubScene; // rdi
  bool v3; // zf
  CUtlVectorBase<CEventAbsoluteTag,CUtlMemory<CEventAbsoluteTag,int> > *p_m_FlexAnimationTracks; // r12
  CUtlVector<CEventAbsoluteTag,CUtlMemory<CEventAbsoluteTag,int> > *m_AbsoluteTags; // r13

  this->_vptr_CChoreoObjectBase = &off_47C2990;
  this->_vptr_ICurveDataAccessor = off_47C29E8;
  while ( this->m_FlexAnimationTracks.m_Size > 0 )
    CChoreoEvent::RemoveTrack(this, 0);
  m_pSubScene = this->m_pSubScene;
  this->m_Dependencies.m_Size = 0;
  if ( m_pSubScene != 0 )
    (*(m_pSubScene->_vptr_ICurveDataAccessor + 5))(m_pSubScene);
  v3 = (this->m_Dependencies.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Dependencies.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CChoreoEvent *,int>::Purge(&this->m_Dependencies.m_Memory);
    if ( (this->m_Dependencies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CChoreoEvent *,int>::Purge(&this->m_Dependencies.m_Memory);
  }
  if ( this->m_CCToken.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_CCToken);
  v3 = (this->m_FlexAnimationTracks.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  p_m_FlexAnimationTracks = &this->m_FlexAnimationTracks;
  this->m_FlexAnimationTracks.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CFlexAnimationTrack *,int>::Purge(&this->m_FlexAnimationTracks.m_Memory);
    if ( (this->m_FlexAnimationTracks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CFlexAnimationTrack *,int>::Purge(&this->m_FlexAnimationTracks.m_Memory);
  }
  m_AbsoluteTags = this->m_AbsoluteTags;
  while ( m_AbsoluteTags != p_m_FlexAnimationTracks )
  {
    while ( 1 )
    {
      CUtlVectorBase<CEventAbsoluteTag,CUtlMemory<CEventAbsoluteTag,int>>::RemoveAll(--p_m_FlexAnimationTracks);
      if ( (p_m_FlexAnimationTracks->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEventAbsoluteTag,int>::Purge(&p_m_FlexAnimationTracks->m_Memory);
        if ( (p_m_FlexAnimationTracks->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          break;
      }
      if ( m_AbsoluteTags == p_m_FlexAnimationTracks )
        goto LABEL_15;
    }
    CUtlMemory<CEventAbsoluteTag,int>::Purge(&p_m_FlexAnimationTracks->m_Memory);
  }
LABEL_15:
  CUtlVectorBase<CFlexTimingTag,CUtlMemory<CFlexTimingTag,int>>::RemoveAll(&this->m_TimingTags);
  if ( (this->m_TimingTags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CFlexTimingTag,int>::Purge(&this->m_TimingTags.m_Memory);
    if ( (this->m_TimingTags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CFlexTimingTag,int>::Purge(&this->m_TimingTags.m_Memory);
  }
  CUtlVectorBase<CEventRelativeTag,CUtlMemory<CEventRelativeTag,int>>::RemoveAll(&this->m_RelativeTags);
  if ( (this->m_RelativeTags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEventRelativeTag,int>::Purge(&this->m_RelativeTags.m_Memory);
    if ( (this->m_RelativeTags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEventRelativeTag,int>::Purge(&this->m_RelativeTags.m_Memory);
  }
  if ( this->m_TagWavName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_TagWavName);
  if ( this->m_TagName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_TagName);
  CCurveData::RemoveBezierData(&this->m_Ramp);
  v3 = (this->m_Ramp.m_Ramp.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Ramp.m_Ramp.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CExpressionSample,int>::Purge(&this->m_Ramp.m_Ramp.m_Memory);
    if ( (this->m_Ramp.m_Ramp.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CExpressionSample,int>::Purge(&this->m_Ramp.m_Ramp.m_Memory);
  }
  if ( this->m_Parameters3.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_Parameters3);
  if ( this->m_Parameters2.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_Parameters2);
  if ( this->m_Parameters.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_Parameters);
  if ( this->m_Name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_Name);
}


// CChoreoEvent::~CChoreoEvent  (line 660, @0x000000000307caa0, libserver.so)
// calls: CChoreoEvent::~CChoreoEvent, operator delete
void __fastcall CChoreoEvent::~CChoreoEvent(CChoreoEvent *const this)
{
  CChoreoEvent::~CChoreoEvent(this);
  operator delete(this);
}


// CChoreoEvent::operator=  (line 667, @0x000000000307d0f0, libserver.so)  // inlines: AddToTail, CFlexTimingTag, ClearAllAbsoluteTags, ClearAllRelativeTags, ClearAllTimingTags, CopyConstruct<CEventAbsoluteTag>, CopyConstruct<CEventRelativeTag>, CopyConstruct<CFlexAnimationTrack*>, CopyConstruct<CFlexTimingTag>, Element, GrowMemory, Purge, RemoveAllTracks, SetEvent, SetOwner, operator=, operator[], ~CEventAbsoluteTag, ~CEventRelativeTag, ~CFlexTimingTag, ~CUtlString
// calls: CUtlString::operator=, CUtlVectorBase<CEventRelativeTag, CUtlMemory<CEventRelativeTag, int> >::RemoveAll, CUtlMemory<CEventRelativeTag, int>::Purge, CUtlVectorBase<CFlexTimingTag, CUtlMemory<CFlexTimingTag, int> >::RemoveAll, CUtlMemory<CFlexTimingTag, int>::Purge, CUtlVectorBase<CEventAbsoluteTag, CUtlMemory<CEventAbsoluteTag, int> >::RemoveAll, CUtlMemory<CEventAbsoluteTag, int>::Purge, CEventRelativeTag::CEventRelativeTag, CUtlString::FreeMemoryBlock, CUtlMemory<CEventRelativeTag, int>::Grow, CUtlMemory<CFlexTimingTag, int>::Grow, CEventAbsoluteTag::CEventAbsoluteTag (20 total)
// callers: CChoreoChannel::operator=, CChoreoScene::Merge, CChoreoScene::operator=
CChoreoEvent *__fastcall CChoreoEvent::operator=(CChoreoEvent *const this, const CChoreoEvent *const src)
{
  CUtlString *p_m_Name; // rsi
  CUtlString *v5; // rdi
  char *m_pString; // rax
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // dl
  char v11; // al
  char v12; // al
  char v13; // al
  __int64 v14; // r15
  CEventRelativeTag *v15; // rdi
  __int64 m_Size; // r14
  int v17; // eax
  __int64 v18; // r15
  __int64 v19; // r14
  bool v20; // zf
  CFlexTimingTag *v21; // r14
  CFlexTimingTag *v22; // r14
  bool m_bLocked; // al
  __int64 v24; // r14
  int v25; // eax
  CUtlVectorBase<CEventAbsoluteTag,CUtlMemory<CEventAbsoluteTag,int> >::CAllocator *v26; // r12
  __int64 v27; // r15
  CEventAbsoluteTag *v28; // rdi
  __int64 m_nAllocationCount; // r14
  int v30; // eax
  __int64 j; // r12
  CFlexAnimationTrack **v32; // rax
  const CFlexAnimationTrack *v33; // r15
  CFlexAnimationTrack *v34; // r14
  __int64 v35; // r15
  int v36; // eax
  char v37; // al
  char v38; // al
  char v39; // al
  char v40; // al
  char v41; // al
  char v42; // al
  CUtlVectorBase<CFlexAnimationTrack*,CUtlMemory<CFlexAnimationTrack*,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-70h]
  int i_0; // [rsp+8h] [rbp-68h]
  CUtlVector<CEventAbsoluteTag,CUtlMemory<CEventAbsoluteTag,int> > *m_AbsoluteTags; // [rsp+10h] [rbp-60h]
  int i; // [rsp+18h] [rbp-58h]
  int ia; // [rsp+18h] [rbp-58h]
  CEventRelativeTag newtag; // [rsp+20h] [rbp-50h] BYREF
  bool v50; // [rsp+38h] [rbp-38h]

  p_m_Name = &src->m_Name;
  v5 = &this->m_Name;
  m_pString = p_m_Name[-3].m_pString;
  v5[18].m_pString = 0;
  v5[19].m_pString = 0;
  v5[-3].m_pString = m_pString;
  LODWORD(v5[49].m_pString) = p_m_Name[49].m_pString;
  LOBYTE(v5[-1].m_pString) = p_m_Name[-1].m_pString;
  CUtlString::operator=(v5, p_m_Name);
  CUtlString::operator=(&this->m_Parameters, &src->m_Parameters);
  CUtlString::operator=(&this->m_Parameters2, &src->m_Parameters2);
  CUtlString::operator=(&this->m_Parameters3, &src->m_Parameters3);
  v7 = *(this + 440);
  this->m_flStartTime = src->m_flStartTime;
  this->m_flEndTime = src->m_flEndTime;
  v8 = *(src + 440) & 1 | v7 & 0xFE;
  *(this + 440) = v8;
  this->m_flGestureSequenceDuration = src->m_flGestureSequenceDuration;
  v9 = *(src + 440) & 2 | v8 & 0xFD;
  *(this + 440) = v9;
  v10 = *(src + 440) & 0x20 | v9 & 0xDF;
  v11 = *(this + 441) & 0xF7;
  *(this + 440) = v10;
  this->m_flDistanceToTarget = src->m_flDistanceToTarget;
  v12 = *(src + 441) & 8 | v11;
  *(this + 441) = v12;
  v13 = *(src + 441) & 0x10 | v12 & 0xEF;
  *(this + 441) = v13;
  *(this + 441) = *(src + 441) & 0x40 | v13 & 0xBF;
  *(this + 440) = *(src + 440) & 4 | v10 & 0xFB;
  CUtlString::operator=(&this->m_TagName, &src->m_TagName);
  CUtlString::operator=(&this->m_TagWavName, &src->m_TagWavName);
  CUtlVectorBase<CEventRelativeTag,CUtlMemory<CEventRelativeTag,int>>::RemoveAll(&this->m_RelativeTags);
  if ( (this->m_RelativeTags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CEventRelativeTag,int>::Purge(&this->m_RelativeTags.m_Memory);
  CUtlVectorBase<CFlexTimingTag,CUtlMemory<CFlexTimingTag,int>>::RemoveAll(&this->m_TimingTags);
  if ( (this->m_TimingTags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CFlexTimingTag,int>::Purge(&this->m_TimingTags.m_Memory);
  CUtlVectorBase<CEventAbsoluteTag,CUtlMemory<CEventAbsoluteTag,int>>::RemoveAll(&this->m_AbsoluteTags[0]);
  if ( (this->m_AbsoluteTags[0].m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CEventAbsoluteTag,int>::Purge(&this->m_AbsoluteTags[0].m_Memory);
  CUtlVectorBase<CEventAbsoluteTag,CUtlMemory<CEventAbsoluteTag,int>>::RemoveAll(&this->m_AbsoluteTags[1]);
  if ( (this->m_AbsoluteTags[1].m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CEventAbsoluteTag,int>::Purge(&this->m_AbsoluteTags[1].m_Memory);
  if ( src->m_RelativeTags.m_Size > 0 )
  {
    i = 0;
    v14 = 0;
    do
    {
      CEventRelativeTag::CEventRelativeTag(&newtag, &src->m_RelativeTags.m_Memory.m_pMemory[v14]);
      m_Size = this->m_RelativeTags.m_Size;
      newtag.m_pOwner = this;
      v17 = m_Size;
      if ( m_Size == this->m_RelativeTags.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CEventRelativeTag,int>::Grow(&this->m_RelativeTags.m_Memory, 1);
        v17 = this->m_RelativeTags.m_Size;
      }
      this->m_RelativeTags.m_Size = v17 + 1;
      v15 = &this->m_RelativeTags.m_Memory.m_pMemory[m_Size];
      if ( v15 != 0 )
        CEventRelativeTag::CEventRelativeTag(v15, &newtag);
      if ( newtag.m_Name.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&newtag.m_Name);
      ++i;
      ++v14;
    }
    while ( src->m_RelativeTags.m_Size > i );
  }
  if ( src->m_TimingTags.m_Size > 0 )
  {
    ia = 0;
    v18 = 0;
    do
    {
      v22 = &src->m_TimingTags.m_Memory.m_pMemory[v18];
      CEventRelativeTag::CEventRelativeTag(&newtag, v22);
      v50 = 0;
      m_bLocked = v22->m_bLocked;
      newtag.m_pOwner = this;
      v24 = this->m_TimingTags.m_Size;
      v50 = m_bLocked;
      v25 = v24;
      if ( v24 == this->m_TimingTags.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CFlexTimingTag,int>::Grow(&this->m_TimingTags.m_Memory, 1);
        v25 = this->m_TimingTags.m_Size;
      }
      v19 = v24;
      v20 = &this->m_TimingTags.m_Memory.m_pMemory[v19] == 0;
      v21 = &this->m_TimingTags.m_Memory.m_pMemory[v19];
      this->m_TimingTags.m_Size = v25 + 1;
      if ( !v20 )
      {
        CEventRelativeTag::CEventRelativeTag(v21, &newtag);
        v21->m_bLocked = 0;
        v21->m_bLocked = v50;
      }
      if ( newtag.m_Name.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&newtag.m_Name);
      ++ia;
      ++v18;
    }
    while ( src->m_TimingTags.m_Size > ia );
  }
  m_AbsoluteTags = src->m_AbsoluteTags;
  p_m_Memory = &this->m_FlexAnimationTracks.m_Memory;
  v26 = &this->m_AbsoluteTags[0].m_Memory;
  do
  {
    if ( m_AbsoluteTags->m_Size > 0 )
    {
      v27 = 0;
      i_0 = 0;
      do
      {
        CEventAbsoluteTag::CEventAbsoluteTag(&newtag, &m_AbsoluteTags->m_Memory.m_pMemory[v27]);
        m_nAllocationCount = v26[-1].m_nAllocationCount;
        newtag.m_pOwner = this;
        v30 = m_nAllocationCount;
        if ( m_nAllocationCount == v26->m_nAllocationCount )
        {
          CUtlMemory<CEventAbsoluteTag,int>::Grow(v26, 1);
          v30 = v26[-1].m_nAllocationCount;
        }
        v26[-1].m_nAllocationCount = v30 + 1;
        v28 = &v26->m_pMemory[m_nAllocationCount];
        if ( v28 != 0 )
          CEventAbsoluteTag::CEventAbsoluteTag(v28, &newtag);
        if ( newtag.m_Name.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&newtag.m_Name);
        ++i_0;
        ++v27;
      }
      while ( m_AbsoluteTags->m_Size > i_0 );
    }
    ++m_AbsoluteTags;
    v26 = (v26 + 24);
  }
  while ( v26 != p_m_Memory );
  while ( this->m_FlexAnimationTracks.m_Size > 0 )
    CChoreoEvent::RemoveTrack(this, 0);
  for ( j = 0; src->m_FlexAnimationTracks.m_Size > j; ++j )
  {
    v33 = src->m_FlexAnimationTracks.m_Memory.m_pMemory[j];
    v34 = operator new(0xC8u);
    CFlexAnimationTrack::CFlexAnimationTrack(v34, v33);
    v34->m_pEvent = this;
    v35 = this->m_FlexAnimationTracks.m_Size;
    v36 = this->m_FlexAnimationTracks.m_Size;
    if ( v35 == this->m_FlexAnimationTracks.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CFlexAnimationTrack *,int>::Grow(p_m_Memory, 1);
      v36 = this->m_FlexAnimationTracks.m_Size;
    }
    this->m_FlexAnimationTracks.m_Size = v36 + 1;
    v32 = &this->m_FlexAnimationTracks.m_Memory.m_pMemory[v35];
    if ( v32 != 0 )
      *v32 = v34;
  }
  v37 = *(src + 440) & 8 | *(this + 440) & 0xF7;
  *(this + 440) = v37;
  *(this + 440) = *(src + 440) & 0x10 | v37 & 0xEF;
  this->m_pMixer = src->m_pMixer;
  this->m_engineId.m_Data = src->m_engineId.m_Data;
  this->m_pScene = src->m_pScene;
  this->m_nPitch = src->m_nPitch;
  this->m_nYaw = src->m_nYaw;
  this->m_nFwd = src->m_nFwd;
  this->m_nRight = src->m_nRight;
  this->m_vTarget.x = src->m_vTarget.x;
  this->m_vTarget.y = src->m_vTarget.y;
  this->m_vTarget.z = src->m_vTarget.z;
  this->m_nNumLoops = src->m_nNumLoops;
  this->m_nLoopsRemaining = src->m_nLoopsRemaining;
  CCurveData::CopyFrom(&this->m_Ramp, &src->m_Ramp);
  this->m_ccType = src->m_ccType;
  CUtlString::operator=(&this->m_CCToken, &src->m_CCToken);
  *(this + 440) = *(src + 440) & 0x80 | *(this + 440) & 0x7F;
  this->m_uRequiredCombinedChecksum = src->m_uRequiredCombinedChecksum;
  this->m_nNumSlaves = src->m_nNumSlaves;
  v38 = *(this + 441);
  this->m_flLastSlaveEndTime = src->m_flLastSlaveEndTime;
  v39 = *(src + 441) & 1 | v38 & 0xFE;
  *(this + 441) = v39;
  v40 = *(src + 441) & 2 | v39 & 0xFD;
  *(this + 441) = v40;
  v41 = *(src + 441) & 4 | v40 & 0xFB;
  *(this + 441) = v41;
  v42 = *(src + 441) & 0x20 | v41 & 0xDF;
  *(this + 441) = v42;
  *(this + 441) = *(src + 441) & 0x80 | v42 & 0x7F;
  this->m_flSoundStartDelay = src->m_flSoundStartDelay;
  return this;
}


// CChoreoEvent::Init  (line 781, @0x00000000030786a0, libserver.so)
// globals: CChoreoObjectBase::s_nNextChoreoObjectHandle
void __fastcall CChoreoEvent::Init(CChoreoEvent *const this)
{
  ChoreoObjectHandle_t v1; // rax

  v1 = CChoreoObjectBase::s_nNextChoreoObjectHandle;
  *(this + 440) = 0;
  this->m_hChoreoObjectHandle = v1;
  CChoreoObjectBase::s_nNextChoreoObjectHandle = v1 + 1;
  *(this + 441) = 32;
}


// CChoreoEvent::GetType  (line 806, @0x00000000030786d0, libserver.so)
// callers: CBaseFlex::ClearSceneEvent, CBaseFlex::CheckSceneEventCompletion, CBaseFlex::IsRunningSceneMoveToEvent, CBaseFlex::StartSceneEvent, CBaseFlex::ProcessSceneEvent, CSceneEntity::ProcessEvent, CSceneEntity::CheckEvent, CSceneEntity::ClearSchedules, CSceneEntity::ClearSceneEvents, CSceneEntity::EndEvent, CSceneEntity::PrecacheScene, CSceneEntity::StartEvent (33 total)
EventNameMap_t::EVENTTYPE __fastcall CChoreoEvent::GetType(const CChoreoEvent *const this)
{
  return this->m_fType;
}


// CChoreoEvent::SetType  (line 811, @0x00000000030786e0, libserver.so)
// callers: CSceneEntity::GenerateSceneForSound, CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetType(CChoreoEvent *const this, EventNameMap_t::EVENTTYPE type)
{
  this->m_fType = type;
  if ( type == SUBSCENE || type == SPEAK )
    *(this + 440) |= 1u;
  else
    *(this + 440) &= ~1u;
}


// CChoreoEvent::SetName  (line 826, @0x0000000003078710, libserver.so)
// calls: CUtlString::operator=
// callers: CSceneEntity::GenerateSceneForSound, CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetName(CChoreoEvent *const this, const char *name)
{
  CUtlString::operator=(&this->m_Name, name);
}


// CChoreoEvent::GetName  (line 831, @0x0000000003078720, libserver.so)  // inlines: String
// calls: CUtlString::Get
// callers: CSceneEntity::DispatchStartGesture, CSceneEntity::DispatchEndGesture, CSceneEntity::EndEvent, CSceneEntity::StartEvent, CChoreoScene::EventLess, CChoreoScene::PrintEvent, CChoreoScene::FileSaveEvent, CChoreoScene::ReconcileTags
const char *__fastcall CChoreoEvent::GetName(const CChoreoEvent *const this)
{
  return CUtlString::Get(&this->m_Name);
}


// CChoreoEvent::SetParameters  (line 836, @0x0000000003078730, libserver.so)
// calls: CUtlString::operator=
// callers: CSceneEntity::GenerateSceneForSound, CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetParameters(CChoreoEvent *const this, const char *param)
{
  CUtlString::operator=(&this->m_Parameters, param);
}


// CChoreoEvent::GetParameters  (line 841, @0x0000000003078740, libserver.so)  // inlines: String
// calls: CUtlString::Get
// callers: CBaseFlex::ClearSceneEvent, CBaseFlex::ProcessFlexSettingSceneEvent, CBaseFlex::RequestStartSequenceSceneEvent, CBaseFlex::RequestStartGestureSceneEvent, CBaseFlex::HandleStartSequenceSceneEvent, CBaseFlex::HandleStartGestureSceneEvent, CSceneEntity::DispatchProcessLoop, CSceneEntity::GetSoundNameForPlayer, CSceneEntity::EndEvent, CSceneEntity::PrecacheScene, CSceneEntity::StartEvent, CSceneCache::PrecacheSceneEvent (18 total)
const char *__fastcall CChoreoEvent::GetParameters(const CChoreoEvent *const this)
{
  return CUtlString::Get(&this->m_Parameters);
}


// CChoreoEvent::SetParameters2  (line 846, @0x0000000003078750, libserver.so)
// calls: CUtlString::operator=, CUtlString::TrimRight
// callers: CChoreoScene::ParseEvent
// strings: "\t\r\n "
void __fastcall CChoreoEvent::SetParameters2(CChoreoEvent *const this, const char *param)
{
  CUtlString *p_m_Parameters2; // rbx

  p_m_Parameters2 = &this->m_Parameters2;
  CUtlString::operator=(&this->m_Parameters2, param);
  CUtlString::TrimRight(p_m_Parameters2, "\t\r\n ");
}


// CChoreoEvent::GetParameters2  (line 852, @0x0000000003078780, libserver.so)  // inlines: String
// calls: CUtlString::Get
// callers: CBaseFlex::ProcessFlexSettingSceneEvent, CSceneEntity::DispatchStartGeneric, CSceneEntity::StartEvent, CChoreoScene::PrintEvent, CChoreoScene::FileSaveEvent
const char *__fastcall CChoreoEvent::GetParameters2(const CChoreoEvent *const this)
{
  return CUtlString::Get(&this->m_Parameters2);
}


// CChoreoEvent::SetParameters3  (line 857, @0x0000000003078790, libserver.so)
// calls: CUtlString::operator=, CUtlString::TrimRight
// callers: CChoreoScene::ParseEvent
// strings: "\t\r\n "
void __fastcall CChoreoEvent::SetParameters3(CChoreoEvent *const this, const char *param)
{
  CUtlString *p_m_Parameters3; // rbx

  p_m_Parameters3 = &this->m_Parameters3;
  CUtlString::operator=(&this->m_Parameters3, param);
  CUtlString::TrimRight(p_m_Parameters3, "\t\r\n ");
}


// CChoreoEvent::GetParameters3  (line 863, @0x00000000030787c0, libserver.so)  // inlines: String
// calls: CUtlString::Get
// callers: CSceneEntity::StartEvent, CChoreoScene::PrintEvent, CChoreoScene::FileSaveEvent
const char *__fastcall CChoreoEvent::GetParameters3(const CChoreoEvent *const this)
{
  return CUtlString::Get(&this->m_Parameters3);
}


// CChoreoEvent::GetDescription  (line 868, @0x000000000307bdb0, libserver.so)  // inlines: CUtlString, GetName, GetParameters, GetParameters2, GetType, NameForType, String
// calls: CUtlString::Get, CChoreoChannel::GetName, CChoreoActor::GetName, CUtlString::Format, CFmtStrN<256, false>::CFmtStrN, CUtlString::operator+=, __stack_chk_fail, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CSceneEntity::EndEvent, CSceneEntity::StartEvent
// strings: "%s : %s : %s -- %s \"%s\"", "global %s"
// globals: g_NameMap
CUtlString __fastcall CChoreoEvent::GetDescription(CUtlString *a1, const CChoreoEvent *const this)
{
  const char *v4; // r15
  __int64 m_fType; // rax
  const char *name; // r14
  const char *v7; // r13
  const char *v8; // rax
  const char *v10; // rax
  const char *v11; // rax
  const char *v12; // [rsp+8h] [rbp-158h]
  CFmtStr s; // [rsp+10h] [rbp-150h] BYREF
  unsigned __int64 v14; // [rsp+128h] [rbp-38h]

  a1->m_pString = 0;
  v14 = __readfsqword(0x28u);
  if ( this->m_pActor != 0 )
  {
    v4 = CUtlString::Get(&this->m_Parameters);
    m_fType = this->m_fType;
    name = g_NameMap[0].name;
    if ( m_fType <= 0x12u )
      name = g_NameMap[m_fType].name;
    v7 = CUtlString::Get(&this->m_Name);
    v12 = CChoreoChannel::GetName(this->m_pChannel);
    v8 = CChoreoActor::GetName(this->m_pActor);
    CUtlString::Format(a1, "%s : %s : %s -- %s \"%s\"", v8, v12, v7, name, v4);
    if ( this->m_fType == 2 )
    {
      v10 = CUtlString::Get(&this->m_Parameters2);
      CFmtStrN<256,false>::CFmtStrN(&s, " \"%s\"", v10);
      CUtlString::operator+=(a1, s.m_szBuf);
    }
  }
  else
  {
    v11 = CUtlString::Get(&this->m_Name);
    CUtlString::Format(a1, "global %s", v11);
  }
  return a1;
}


// CChoreoEvent::SetStartTime  (line 890, @0x00000000030787d0, libserver.so)
// callers: CSceneEntity::GenerateSceneForSound, CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetStartTime(CChoreoEvent *const this, float a2, float starttime)
{
  float m_flEndTime; // xmm1_4

  m_flEndTime = this->m_flEndTime;
  this->m_flStartTime = a2;
  if ( m_flEndTime != -1.0 && a2 > m_flEndTime )
    this->m_flEndTime = a2;
}


// CChoreoEvent::GetStartTime  (line 902, @0x0000000003078800, libserver.so)
// callers: CBaseFlex::HandleStartSequenceSceneEvent, CBaseFlex::HandleStartGestureSceneEvent, CBaseFlex::ProcessGestureSceneEvent, CBaseFlex::ProcessSequenceSceneEvent, CSceneEntity::StartEvent, CSceneEntity::BuildSortedSpeakEventSoundsPrefetchList, CSceneEntity::DispatchStartSpeak, ChoreEventStartTimeLessFunc, CChoreoChannel::ReconcileGestureTimes, CChoreoScene::EventLess, CChoreoScene::FindStopTime, CChoreoScene::PrintEvent (23 total)
float __fastcall CChoreoEvent::GetStartTime(const CChoreoEvent *const this)
{
  return this->m_flStartTime;
}


// CChoreoEvent::SetEndTime  (line 907, @0x0000000003079210, libserver.so)
// calls: CChoreoEvent::OnEndTimeChanged
// callers: CSceneEntity::GenerateSceneForSound, CSceneEntity::StartEvent, CChoreoChannel::ReconcileGestureTimes, CChoreoEvent::OffsetEndTime, CChoreoEvent::RestoreFromBuffer, CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetEndTime(CChoreoEvent *const this, float a2, float endtime)
{
  float m_flEndTime; // xmm1_4
  float m_flStartTime; // xmm2_4

  m_flEndTime = this->m_flEndTime;
  this->m_flEndTime = a2;
  if ( a2 != -1.0 )
  {
    m_flStartTime = this->m_flStartTime;
    if ( m_flStartTime > a2 )
      this->m_flEndTime = m_flStartTime;
    if ( m_flEndTime != a2 )
      CChoreoEvent::OnEndTimeChanged(this);
  }
}


// CChoreoEvent::GetEndTime  (line 928, @0x0000000003078810, libserver.so)
// callers: CChoreoChannel::ReconcileCloseCaption, CChoreoScene::EventLess, CChoreoScene::FindStopTime, CChoreoScene::PrintEvent, CChoreoScene::FindLastSpeakTime, CChoreoScene::FileSaveEvent, CChoreoScene::FindAdjustedEndTime, CChoreoScene::SpeechFinished, CChoreoScene::EventThink, CChoreoScene::HasFlexAnimation, CChoreoScene::ParseFlexAnimations
float __fastcall CChoreoEvent::GetEndTime(const CChoreoEvent *const this)
{
  return this->m_flEndTime;
}


// CChoreoEvent::HasEndTime  (line 933, @0x0000000003078820, libserver.so)
// callers: CBaseFlex::ProcessFlexSettingSceneEvent, CBaseFlex::ProcessFlexAnimationSceneEvent, CBaseFlex::ProcessSceneEvent, CSceneEntity::StartEvent, CChoreoScene::EventLess, CChoreoScene::FindStopTime, CChoreoScene::FindLastSpeakTime, CChoreoScene::FindAdjustedEndTime, CChoreoScene::EventThink
bool __fastcall CChoreoEvent::HasEndTime(const CChoreoEvent *const this)
{
  return this->m_flEndTime != -1.0;
}


// CChoreoEvent::GetCompletion  (line 938, @0x0000000003078840, libserver.so)  // inlines: GetStartTime
float __fastcall CChoreoEvent::GetCompletion(CChoreoEvent *const this, float a2, float time)
{
  float v3; // xmm1_4
  float result; // xmm0_4

  v3 = (a2 - this->m_flStartTime) / (this->m_flEndTime - this->m_flStartTime);
  result = 0.0;
  if ( v3 >= 0.0 )
    return fminf(1.0, v3);
  return result;
}


// CChoreoEvent::CurveHasEndTime  (line 951, @0x00000000030777d0, libserver.so)  // inlines: HasEndTime
bool __fastcall CChoreoEvent::CurveHasEndTime(const CChoreoEvent *const this)
{
  return this->m_flEndTime != -1.0;
}


// CChoreoEvent::SetDefaultCurveType  (line 956, @0x0000000003078880, libserver.so)
// callers: CChoreoScene::ParseFlexAnimations
void __fastcall CChoreoEvent::SetDefaultCurveType(CChoreoEvent *const this, int nCurveType)
{
  this->m_nDefaultCurveType = nCurveType;
}


// CChoreoEvent::GetDefaultCurveType  (line 961, @0x0000000003077800, libserver.so)
int __fastcall CChoreoEvent::GetDefaultCurveType(const CChoreoEvent *const this)
{
  return this->m_nDefaultCurveType;
}


// CChoreoEvent::GetDefaultEdgeValue  (line 966, @0x0000000003077820, libserver.so)
float __fastcall CChoreoEvent::GetDefaultEdgeValue(const CChoreoEvent *const this)
{
  return 0.0;
}


// CChoreoEvent::GetIntensity  (line 972, @0x0000000003078890, libserver.so)  // inlines: GetIntensityInternal
// calls: CCurveData::GetIntensity
// callers: CBaseFlex::ProcessFlexSettingSceneEvent, CBaseFlex::ProcessGestureSceneEvent, CBaseFlex::ProcessSequenceSceneEvent, CBaseFlex::AddFlexAnimation
float __fastcall CChoreoEvent::GetIntensity(const CChoreoEvent *const this, float a2, float scenetime)
{
  float v3; // xmm1_4
  CChoreoScene *m_pScene; // rdi
  float Intensity; // xmm0_4
  float global_intensity; // [rsp+Ch] [rbp-14h]

  v3 = a2;
  m_pScene = this->m_pScene;
  if ( m_pScene != 0 )
  {
    Intensity = CCurveData::GetIntensity(&m_pScene->m_SceneRamp, a2);
    v3 = a2;
    global_intensity = Intensity;
  }
  else
  {
    global_intensity = 1.0;
  }
  return CCurveData::GetIntensity(&this->m_Ramp, v3 - this->m_flStartTime) * global_intensity;
}


// CChoreoEvent::GetIntensityInternal  (line 989, @0x0000000003078900, libserver.so)
// calls: CCurveData::GetIntensity
float __fastcall CChoreoEvent::GetIntensityInternal(const CChoreoEvent *const this, double a2, float scenetime)
{
  return CCurveData::GetIntensity(&this->m_Ramp, scenetime);
}


// CChoreoEvent::OffsetStartTime  (line 996, @0x0000000003078920, libserver.so)  // inlines: SetStartTime
void __fastcall CChoreoEvent::OffsetStartTime(CChoreoEvent *const this, float a2, float dt)
{
  float m_flEndTime; // xmm1_4
  float v4; // xmm0_4

  m_flEndTime = this->m_flEndTime;
  v4 = a2 + this->m_flStartTime;
  this->m_flStartTime = v4;
  if ( m_flEndTime != -1.0 && v4 > m_flEndTime )
    this->m_flEndTime = v4;
}


// CChoreoEvent::OffsetEndTime  (line 1001, @0x0000000003079260, libserver.so)  // inlines: HasEndTime
// calls: CChoreoEvent::SetEndTime
void __fastcall CChoreoEvent::OffsetEndTime(CChoreoEvent *const this, float a2, float dt)
{
  float m_flEndTime; // xmm1_4

  m_flEndTime = this->m_flEndTime;
  if ( m_flEndTime != -1.0 )
    CChoreoEvent::SetEndTime(this, a2 + m_flEndTime, m_flEndTime);
}


// CChoreoEvent::OffsetTime  (line 1009, @0x0000000003078960, libserver.so)  // inlines: HasEndTime
// callers: CChoreoScene::ReconcileTags
void __fastcall CChoreoEvent::OffsetTime(CChoreoEvent *const this, float a2, float dt)
{
  float m_flEndTime; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm0_4

  m_flEndTime = this->m_flEndTime;
  if ( m_flEndTime == -1.0 )
  {
    v5 = a2 + this->m_flStartTime;
  }
  else
  {
    v4 = m_flEndTime + a2;
    v5 = a2 + this->m_flStartTime;
    this->m_flEndTime = v4;
  }
  this->m_flStartTime = v5;
}


// CChoreoEvent::SetActor  (line 1018, @0x00000000030789a0, libserver.so)
// callers: CSceneEntity::GenerateSceneForSound, CChoreoChannel::operator=, CChoreoChannel::RestoreFromBuffer, CChoreoScene::ParseEvent, CChoreoScene::Merge
void __fastcall CChoreoEvent::SetActor(CChoreoEvent *const this, CChoreoActor *actor)
{
  this->m_pActor = actor;
}


// CChoreoEvent::GetActor  (line 1023, @0x00000000030789b0, libserver.so)
// callers: CBaseFlex::AddSceneEvent, CSceneEntity::CheckEvent, CSceneEntity::EndEvent, CSceneEntity::CheckActors, CSceneEntity::StartEvent, CSceneEntity::DispatchStartSpeak, CChoreoScene::EventLess, CChoreoScene::Print, CChoreoScene::MarkForSaveAll, CChoreoScene::ExportEvents, CChoreoScene::RemoveEventsExceptTypes, CChoreoScene::GatherEventsOfType (16 total)
CChoreoActor *__fastcall CChoreoEvent::GetActor(CChoreoEvent *const this)
{
  return this->m_pActor;
}


// CChoreoEvent::GetActor  (line 1028, @0x00000000030789c0, libserver.so)
// callers: CChoreoScene::ExportMarkedToBuffer
const CChoreoActor *__fastcall CChoreoEvent::GetActor(const CChoreoEvent *const this)
{
  return this->m_pActor;
}


// CChoreoEvent::SetChannel  (line 1034, @0x00000000030789d0, libserver.so)
// callers: CSceneEntity::GenerateSceneForSound, CChoreoChannel::operator=, CChoreoChannel::RestoreFromBuffer, CChoreoScene::ParseEvent, CChoreoScene::Merge
void __fastcall CChoreoEvent::SetChannel(CChoreoEvent *const this, CChoreoChannel *channel)
{
  this->m_pChannel = channel;
}


// CChoreoEvent::GetChannel  (line 1039, @0x00000000030789e0, libserver.so)
// callers: CBaseFlex::HandleStartSequenceSceneEvent, CBaseFlex::HandleStartGestureSceneEvent, CChoreoScene::EventLess, CChoreoScene::GatherEventsOfType
CChoreoChannel *__fastcall CChoreoEvent::GetChannel(CChoreoEvent *const this)
{
  return this->m_pChannel;
}


// CChoreoEvent::GetChannel  (line 1044, @0x00000000030789f0, libserver.so)
const CChoreoChannel *__fastcall CChoreoEvent::GetChannel(const CChoreoEvent *const this)
{
  return this->m_pChannel;
}


// CChoreoEvent::SetSubScene  (line 1049, @0x0000000003078a00, libserver.so)
// callers: CSceneEntity::PrecacheScene, CSceneEntity::BuildSortedSpeakEventSoundsPrefetchList
void __fastcall CChoreoEvent::SetSubScene(CChoreoEvent *const this, CChoreoScene *scene)
{
  this->m_pSubScene = scene;
}


// CChoreoEvent::GetSubScene  (line 1054, @0x0000000003078a10, libserver.so)
// callers: CSceneEntity::DispatchStartSubScene, CSceneEntity::ProcessEvent, CSceneEntity::ClearSchedules, CSceneEntity::ClearSceneEvents, CSceneEntity::EndEvent, CSceneEntity::PrecacheScene, CSceneEntity::BuildSortedSpeakEventSoundsPrefetchList
CChoreoScene *__fastcall CChoreoEvent::GetSubScene(CChoreoEvent *const this)
{
  return this->m_pSubScene;
}


// CChoreoEvent::TypeForName  (line 1089, @0x0000000003078a20, libserver.so)
// calls: V_stricmp_fast
// callers: CChoreoScene::ParseEvent
// globals: g_NameMap
EventNameMap_t::EVENTTYPE __fastcall CChoreoEvent::TypeForName(const char *name)
{
  EventNameMap_t *v2; // rbx

  v2 = g_NameMap;
  while ( V_stricmp_fast(name, v2->name) != 0 )
  {
    if ( ++v2 == &unk_4A69A88 )
      return UNSPECIFIED;
  }
  return v2->type;
}


// CChoreoEvent::NameForType  (line 1102, @0x0000000003078a80, libserver.so)
// callers: CSceneEntity::EndEvent, CSceneEntity::StartEvent, CChoreoScene::PrintEvent, CChoreoScene::FileSaveEvent
// globals: g_NameMap
const char *__fastcall CChoreoEvent::NameForType(EventNameMap_t::EVENTTYPE type)
{
  const char *result; // rax

  result = g_NameMap[0].name;
  if ( type <= SCRIPT )
    return g_NameMap[type].name;
  return result;
}


// CChoreoEvent::FullNameForType  (line 1115, @0x0000000003078ab0, libserver.so)
const char *__fastcall CChoreoEvent::FullNameForType(EventNameMap_t::EVENTTYPE type)
{
  const char *result; // rax

  result = g_NameMap[0].fullname;
  if ( type <= SCRIPT )
    return g_NameMap[type].fullname;
  return result;
}


// CChoreoEvent::CCTypeForName  (line 1141, @0x0000000003078ae0, libserver.so)
// calls: V_stricmp_fast
// callers: CChoreoScene::ParseEvent
// globals: g_CCNameMap
CCNameMap_t::CLOSECAPTION __fastcall CChoreoEvent::CCTypeForName(const char *name)
{
  CCNameMap_t *v2; // rbx

  v2 = g_CCNameMap;
  while ( V_stricmp_fast(name, v2->name) != 0 )
  {
    if ( ++v2 == &unk_4A698B0 )
      return CC_MASTER;
  }
  return v2->type;
}


// CChoreoEvent::NameForCCType  (line 1154, @0x0000000003078b40, libserver.so)
// callers: CChoreoScene::FileSaveEvent
// globals: g_CCNameMap
const char *__fastcall CChoreoEvent::NameForCCType(CCNameMap_t::CLOSECAPTION type)
{
  const char *result; // rax

  result = g_CCNameMap[0].name;
  if ( type <= CC_DISABLED )
    return g_CCNameMap[type].name;
  return result;
}


// CChoreoEvent::IsFixedLength  (line 1168, @0x0000000003078b70, libserver.so)
// callers: CChoreoScene::FileSaveEvent
bool __fastcall CChoreoEvent::IsFixedLength(const CChoreoEvent *const this)
{
  return *(this + 440) & 1;
}


// CChoreoEvent::SetFixedLength  (line 1173, @0x0000000003078b80, libserver.so)
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetFixedLength(CChoreoEvent *const this, bool isfixedlength)
{
  *(this + 440) = isfixedlength | *(this + 440) & 0xFE;
}


// CChoreoEvent::SetResumeCondition  (line 1178, @0x0000000003078ba0, libserver.so)
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetResumeCondition(CChoreoEvent *const this, bool resumecondition)
{
  *(this + 440) = (2 * resumecondition) | *(this + 440) & 0xFD;
}


// CChoreoEvent::IsResumeCondition  (line 1183, @0x0000000003078bc0, libserver.so)
// callers: CChoreoScene::FileSaveEvent, CChoreoScene::EventThink, CChoreoScene::ResetSimulation
bool __fastcall CChoreoEvent::IsResumeCondition(const CChoreoEvent *const this)
{
  return (*(this + 440) & 2) != 0;
}


// CChoreoEvent::SetLockBodyFacing  (line 1188, @0x0000000003078be0, libserver.so)
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetLockBodyFacing(CChoreoEvent *const this, bool lockbodyfacing)
{
  *(this + 440) = (32 * lockbodyfacing) | *(this + 440) & 0xDF;
}


// CChoreoEvent::IsLockBodyFacing  (line 1193, @0x0000000003078c00, libserver.so)
// callers: CChoreoScene::FileSaveEvent
bool __fastcall CChoreoEvent::IsLockBodyFacing(const CChoreoEvent *const this)
{
  return (*(this + 440) & 0x20) != 0;
}


// CChoreoEvent::SetDistanceToTarget  (line 1198, @0x0000000003078c20, libserver.so)
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetDistanceToTarget(CChoreoEvent *const this, float a2, float distancetotarget)
{
  this->m_flDistanceToTarget = a2;
}


// CChoreoEvent::GetDistanceToTarget  (line 1204, @0x0000000003078c30, libserver.so)
// callers: CChoreoScene::FileSaveEvent
float __fastcall CChoreoEvent::GetDistanceToTarget(const CChoreoEvent *const this)
{
  return this->m_flDistanceToTarget;
}


// CChoreoEvent::SetForceShortMovement  (line 1210, @0x0000000003078c40, libserver.so)
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetForceShortMovement(CChoreoEvent *const this, bool bForceShortMovement)
{
  *(this + 441) = (8 * bForceShortMovement) | *(this + 441) & 0xF7;
}


// CChoreoEvent::GetForceShortMovement  (line 1216, @0x0000000003078c60, libserver.so)
// callers: CChoreoScene::FileSaveEvent
bool __fastcall CChoreoEvent::GetForceShortMovement(const CChoreoEvent *const this)
{
  return (*(this + 441) & 8) != 0;
}


// CChoreoEvent::SetSyncToFollowingGesture  (line 1222, @0x0000000003078c80, libserver.so)
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetSyncToFollowingGesture(CChoreoEvent *const this, bool bSyncToFollowingGesture)
{
  *(this + 441) = (16 * bSyncToFollowingGesture) | *(this + 441) & 0xEF;
}


// CChoreoEvent::GetSyncToFollowingGesture  (line 1228, @0x0000000003078ca0, libserver.so)
// callers: CChoreoChannel::ReconcileGestureTimes, CChoreoScene::FileSaveEvent
bool __fastcall CChoreoEvent::GetSyncToFollowingGesture(const CChoreoEvent *const this)
{
  return (*(this + 441) & 0x10) != 0;
}


// CChoreoEvent::SetPlayOverScript  (line 1234, @0x0000000003078cc0, libserver.so)
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetPlayOverScript(CChoreoEvent *const this, bool bPlayOverScript)
{
  *(this + 441) = (bPlayOverScript << 6) | *(this + 441) & 0xBF;
}


// CChoreoEvent::GetPlayOverScript  (line 1240, @0x0000000003078ce0, libserver.so)
// callers: CBaseFlex::HandleStartSequenceSceneEvent, CChoreoScene::FileSaveEvent
bool __fastcall CChoreoEvent::GetPlayOverScript(const CChoreoEvent *const this)
{
  return (*(this + 441) & 0x40) != 0;
}


// CChoreoEvent::GetDuration  (line 1245, @0x0000000003077840, libserver.so)  // inlines: HasEndTime
float __fastcall CChoreoEvent::GetDuration(const CChoreoEvent *const this)
{
  float m_flEndTime; // xmm0_4

  m_flEndTime = this->m_flEndTime;
  if ( m_flEndTime == -1.0 )
    return 0.0;
  else
    return m_flEndTime - this->m_flStartTime;
}


// CChoreoEvent::ClearAllRelativeTags  (line 1255, @0x000000000307bf30, libserver.so)  // inlines: Purge
// calls: CUtlVectorBase<CEventRelativeTag, CUtlMemory<CEventRelativeTag, int> >::RemoveAll, CUtlMemory<CEventRelativeTag, int>::Purge
void __fastcall CChoreoEvent::ClearAllRelativeTags(CChoreoEvent *const this)
{
  CUtlVectorBase<CEventRelativeTag,CUtlMemory<CEventRelativeTag,int>>::RemoveAll(&this->m_RelativeTags);
  if ( (this->m_RelativeTags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CEventRelativeTag,int>::Purge(&this->m_RelativeTags.m_Memory);
}


// CChoreoEvent::GetNumRelativeTags  (line 1260, @0x0000000003078d00, libserver.so)
// callers: CChoreoScene::FileSaveEvent
int __fastcall CChoreoEvent::GetNumRelativeTags(const CChoreoEvent *const this)
{
  return this->m_RelativeTags.m_Size;
}


// CChoreoEvent::GetRelativeTag  (line 1265, @0x0000000003078d10, libserver.so)  // inlines: operator[]
CEventRelativeTag *__fastcall CChoreoEvent::GetRelativeTag(CChoreoEvent *const this, int tagnum)
{
  return &this->m_RelativeTags.m_Memory.m_pMemory[tagnum];
}


// CChoreoEvent::GetRelativeTag  (line 1271, @0x0000000003078d30, libserver.so)  // inlines: operator[]
// callers: CChoreoScene::FileSaveEvent
const CEventRelativeTag *__fastcall CChoreoEvent::GetRelativeTag(const CChoreoEvent *const this, int tagnum)
{
  return &this->m_RelativeTags.m_Memory.m_pMemory[tagnum];
}


// CChoreoEvent::AddRelativeTag  (line 1277, @0x000000000307cac0, libserver.so)  // inlines: AddToTail, CopyConstruct<CEventRelativeTag>, Element, GrowMemory, operator[], ~CEventRelativeTag, ~CUtlString
// calls: CEventRelativeTag::CEventRelativeTag, CUtlString::FreeMemoryBlock, CUtlMemory<CEventRelativeTag, int>::Grow, _Unwind_Resume
// callers: CChoreoEvent::RestoreFromBuffer, CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::AddRelativeTag(
        CChoreoEvent *const this,
        const char *tagname,
        __m128i a3,
        float percentage)
{
  __int64 m_Size; // r12
  int v6; // eax
  CEventRelativeTag *v7; // rdi
  CEventRelativeTag rt; // [rsp+0h] [rbp-40h] BYREF

  CEventRelativeTag::CEventRelativeTag(&rt, this, tagname, a3);
  m_Size = this->m_RelativeTags.m_Size;
  v6 = this->m_RelativeTags.m_Size;
  if ( m_Size == this->m_RelativeTags.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CEventRelativeTag,int>::Grow(&this->m_RelativeTags.m_Memory, 1);
    v6 = this->m_RelativeTags.m_Size;
  }
  this->m_RelativeTags.m_Size = v6 + 1;
  v7 = &this->m_RelativeTags.m_Memory.m_pMemory[m_Size];
  if ( v7 != 0 )
    CEventRelativeTag::CEventRelativeTag(v7, &rt);
  if ( rt.m_Name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&rt.m_Name);
}


// CChoreoEvent::RemoveRelativeTag  (line 1283, @0x0000000003078d50, libserver.so)  // inlines: Destruct<CEventRelativeTag>, Element, GetName, Remove, ShiftElementsLeft, V_memmove, memmove, operator[], ~CEventRelativeTag, ~CUtlString
// calls: CUtlString::Get, V_stricmp_fast, CUtlString::FreeMemoryBlock, memmove
void __fastcall CChoreoEvent::RemoveRelativeTag(CChoreoEvent *const this, const char *tagname)
{
  int v3; // r13d
  __int64 v5; // rbx
  CEventRelativeTag *v6; // rdi
  const char *v7; // rax
  CEventRelativeTag *v8; // rdi
  int m_Size; // eax

  v3 = 0;
  v5 = 0;
  if ( this->m_RelativeTags.m_Size > 0 )
  {
    while ( 1 )
    {
      v6 = &this->m_RelativeTags.m_Memory.m_pMemory[v5];
      if ( v6 != 0 )
      {
        v7 = CUtlString::Get(&v6->m_Name);
        if ( V_stricmp_fast(v7, tagname) == 0 )
          break;
      }
      ++v3;
      ++v5;
      if ( this->m_RelativeTags.m_Size <= v3 )
        return;
    }
    v8 = &this->m_RelativeTags.m_Memory.m_pMemory[v5];
    if ( v8->m_Name.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v8->m_Name);
    m_Size = this->m_RelativeTags.m_Size;
    if ( m_Size - v3 - 1 > 0 )
    {
      memmove(
        &this->m_RelativeTags.m_Memory.m_pMemory[v5],
        &this->m_RelativeTags.m_Memory.m_pMemory[v3 + 1],
        24LL * (this->m_RelativeTags.m_Size - v3 - 1));
      m_Size = this->m_RelativeTags.m_Size;
    }
    this->m_RelativeTags.m_Size = m_Size - 1;
  }
}


// CChoreoEvent::FindRelativeTag  (line 1299, @0x0000000003078e30, libserver.so)  // inlines: GetName, operator[]
// calls: CUtlString::Get, V_stricmp_fast
// callers: CChoreoScene::FindTagByName
CEventRelativeTag *__fastcall CChoreoEvent::FindRelativeTag(CChoreoEvent *const this, const char *tagname)
{
  int v3; // r13d
  __int64 v5; // rbx
  CEventRelativeTag *v6; // r14
  const char *v7; // rax

  v3 = 0;
  v5 = 0;
  if ( this->m_RelativeTags.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v6 = &this->m_RelativeTags.m_Memory.m_pMemory[v5];
    if ( v6 != 0 )
    {
      v7 = CUtlString::Get(&this->m_RelativeTags.m_Memory.m_pMemory[v5].m_Name);
      if ( V_stricmp_fast(v7, tagname) == 0 )
        break;
    }
    ++v3;
    ++v5;
    if ( this->m_RelativeTags.m_Size <= v3 )
      return 0;
  }
  return v6;
}


// CChoreoEvent::IsUsingRelativeTag  (line 1315, @0x0000000003078ed0, libserver.so)
// callers: CChoreoScene::FileSaveEvent, CChoreoScene::FindTargetingEvent, CChoreoScene::ReconcileTags
bool __fastcall CChoreoEvent::IsUsingRelativeTag(const CChoreoEvent *const this)
{
  return (*(this + 440) & 4) != 0;
}


// CChoreoEvent::SetUsingRelativeTag  (line 1320, @0x0000000003078ef0, libserver.so)
// calls: CUtlString::operator=, CUtlString::Set
// callers: CSceneEntity::GenerateSceneForSound, CChoreoEvent::RestoreFromBuffer, CChoreoScene::ReconcileTags, CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetUsingRelativeTag(
        CChoreoEvent *const this,
        bool usetag,
        const char *tagname,
        const char *wavname)
{
  char v6; // al
  CUtlString *p_m_TagName; // rdi
  CUtlString *p_m_TagWavName; // rdi

  v6 = *(this + 440);
  p_m_TagName = &this->m_TagName;
  LOBYTE(p_m_TagName[35].m_pString) = (4 * usetag) | v6 & 0xFB;
  if ( tagname != 0 )
    CUtlString::operator=(p_m_TagName, tagname);
  else
    CUtlString::Set(p_m_TagName, "");
  p_m_TagWavName = &this->m_TagWavName;
  if ( wavname != 0 )
    CUtlString::operator=(p_m_TagWavName, wavname);
  else
    CUtlString::Set(p_m_TagWavName, "");
}


// CChoreoEvent::GetRelativeTagName  (line 1341, @0x0000000003078f70, libserver.so)  // inlines: String
// calls: CUtlString::Get
// callers: CChoreoScene::FileSaveEvent, CChoreoScene::FindTargetingEvent, CChoreoScene::ReconcileTags
const char *__fastcall CChoreoEvent::GetRelativeTagName(const CChoreoEvent *const this)
{
  return CUtlString::Get(&this->m_TagName);
}


// CChoreoEvent::GetRelativeWavName  (line 1346, @0x0000000003078f90, libserver.so)  // inlines: String
// calls: CUtlString::Get
// callers: CChoreoScene::FileSaveEvent, CChoreoScene::FindTargetingEvent, CChoreoScene::ReconcileTags
const char *__fastcall CChoreoEvent::GetRelativeWavName(const CChoreoEvent *const this)
{
  return CUtlString::Get(&this->m_TagWavName);
}


// CChoreoEvent::ClearAllTimingTags  (line 1351, @0x000000000307bf80, libserver.so)  // inlines: Purge
// calls: CUtlVectorBase<CFlexTimingTag, CUtlMemory<CFlexTimingTag, int> >::RemoveAll, CUtlMemory<CFlexTimingTag, int>::Purge
void __fastcall CChoreoEvent::ClearAllTimingTags(CChoreoEvent *const this)
{
  CUtlVectorBase<CFlexTimingTag,CUtlMemory<CFlexTimingTag,int>>::RemoveAll(&this->m_TimingTags);
  if ( (this->m_TimingTags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CFlexTimingTag,int>::Purge(&this->m_TimingTags.m_Memory);
}


// CChoreoEvent::GetNumTimingTags  (line 1356, @0x0000000003078fb0, libserver.so)
// callers: CChoreoScene::FileSaveEvent
int __fastcall CChoreoEvent::GetNumTimingTags(const CChoreoEvent *const this)
{
  return this->m_TimingTags.m_Size;
}


// CChoreoEvent::GetTimingTag  (line 1361, @0x0000000003078fc0, libserver.so)  // inlines: operator[]
CFlexTimingTag *__fastcall CChoreoEvent::GetTimingTag(CChoreoEvent *const this, int tagnum)
{
  return &this->m_TimingTags.m_Memory.m_pMemory[tagnum];
}


// CChoreoEvent::GetTimingTag  (line 1366, @0x0000000003078fe0, libserver.so)  // inlines: operator[]
// callers: CChoreoScene::FileSaveEvent
const CFlexTimingTag *__fastcall CChoreoEvent::GetTimingTag(const CChoreoEvent *const this, int tagnum)
{
  return &this->m_TimingTags.m_Memory.m_pMemory[tagnum];
}


// CChoreoEvent::AddTimingTag  (line 1371, @0x000000000307cb70, libserver.so)  // inlines: AddToTail, CFlexTimingTag, CopyConstruct<CFlexTimingTag>, Element, GrowMemory, operator=, operator[], ~CEventRelativeTag, ~CFlexTimingTag, ~CUtlString
// calls: CEventRelativeTag::CEventRelativeTag, CUtlString::operator=, CUtlString::FreeMemoryBlock, CUtlMemory<CFlexTimingTag, int>::Grow, _Unwind_Resume
// callers: CChoreoEvent::RestoreFromBuffer, CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::AddTimingTag(
        CChoreoEvent *const this,
        const char *tagname,
        __m128i percentage,
        bool locked)
{
  int m_Size; // ebx
  int v7; // eax
  __int64 v8; // rax
  bool v9; // zf
  CFlexTimingTag *v10; // rax
  CFlexTimingTag *v11; // rbx
  int v12; // eax
  int v13; // r13d
  __int64 v14; // r14
  CFlexTimingTag *m_pMemory; // rbx
  CFlexTimingTag *v16; // r12
  char *v17; // rbx
  CChoreoEvent *m_pOwner; // rax
  int j; // [rsp+1Ch] [rbp-84h]
  __int64 v20; // [rsp+28h] [rbp-78h]
  CFlexTimingTag tt; // [rsp+30h] [rbp-70h] BYREF
  CFlexTimingTag temp; // [rsp+50h] [rbp-50h] BYREF

  CEventRelativeTag::CEventRelativeTag(&tt, this, tagname, percentage);
  tt.m_bLocked = locked;
  m_Size = this->m_TimingTags.m_Size;
  v7 = m_Size;
  if ( m_Size == this->m_TimingTags.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CFlexTimingTag,int>::Grow(&this->m_TimingTags.m_Memory, 1);
    v7 = this->m_TimingTags.m_Size;
  }
  this->m_TimingTags.m_Size = v7 + 1;
  v8 = m_Size;
  v9 = &this->m_TimingTags.m_Memory.m_pMemory[v8] == 0;
  v10 = &this->m_TimingTags.m_Memory.m_pMemory[v8];
  v11 = v10;
  if ( !v9 )
  {
    CEventRelativeTag::CEventRelativeTag(v10, &tt);
    v11->m_bLocked = 0;
    v11->m_bLocked = tt.m_bLocked;
  }
  CEventRelativeTag::CEventRelativeTag(&temp, (&loc_0 + 1), "", 0LL);
  v12 = this->m_TimingTags.m_Size;
  temp.m_bLocked = 0;
  j = 0;
  v20 = 0;
  while ( j < v12 )
  {
    if ( ++j >= v12 )
    {
      ++v20;
    }
    else
    {
      v13 = j;
      v14 = v20 * 32 + 32;
      do
      {
        while ( 1 )
        {
          m_pMemory = this->m_TimingTags.m_Memory.m_pMemory;
          v16 = &m_pMemory[v20];
          v17 = m_pMemory + v14;
          if ( v16->m_flPercentage > *(v17 + 2) )
            break;
          ++v13;
          v14 += 32;
          if ( v12 <= v13 )
            goto LABEL_11;
        }
        CUtlString::operator=(&temp.m_Name, &v16->m_Name);
        m_pOwner = v16->m_pOwner;
        temp.m_flPercentage = v16->m_flPercentage;
        temp.m_pOwner = m_pOwner;
        temp.m_bLocked = v16->m_bLocked;
        CUtlString::operator=(&v16->m_Name, v17);
        v16->m_flPercentage = *(v17 + 2);
        v16->m_pOwner = *(v17 + 2);
        v16->m_bLocked = v17[24];
        CUtlString::operator=(v17, &temp.m_Name);
        ++v13;
        v14 += 32;
        *(v17 + 2) = LODWORD(temp.m_flPercentage);
        *(v17 + 2) = temp.m_pOwner;
        v17[24] = temp.m_bLocked;
        v12 = this->m_TimingTags.m_Size;
      }
      while ( v12 > v13 );
LABEL_11:
      ++v20;
    }
  }
  if ( temp.m_Name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&temp.m_Name);
  if ( tt.m_Name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&tt.m_Name);
}


// CChoreoEvent::RemoveTimingTag  (line 1397, @0x0000000003079000, libserver.so)  // inlines: Destruct<CFlexTimingTag>, Element, GetName, Remove, ShiftElementsLeft, V_memmove, memmove, operator[], ~CEventRelativeTag, ~CFlexTimingTag, ~CUtlString
// calls: CUtlString::Get, V_stricmp_fast, CUtlString::FreeMemoryBlock, memmove
void __fastcall CChoreoEvent::RemoveTimingTag(CChoreoEvent *const this, const char *tagname)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  CFlexTimingTag *v6; // rdi
  const char *v7; // rax
  CFlexTimingTag *v8; // rdi
  int m_Size; // eax

  v4 = 0;
  if ( this->m_TimingTags.m_Size > 0 )
  {
    while ( 1 )
    {
      v5 = v4;
      v6 = &this->m_TimingTags.m_Memory.m_pMemory[v4];
      if ( v6 != 0 )
      {
        v7 = CUtlString::Get(&v6->m_Name);
        if ( V_stricmp_fast(v7, tagname) == 0 )
          break;
      }
      if ( ++v4 >= this->m_TimingTags.m_Size )
        return;
    }
    v8 = &this->m_TimingTags.m_Memory.m_pMemory[v5];
    if ( v8->m_Name.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v8->m_Name);
    m_Size = this->m_TimingTags.m_Size;
    if ( m_Size - v4 - 1 > 0 )
    {
      memmove(
        &this->m_TimingTags.m_Memory.m_pMemory[v5],
        &this->m_TimingTags.m_Memory.m_pMemory[v4 + 1],
        32LL * (this->m_TimingTags.m_Size - v4 - 1));
      m_Size = this->m_TimingTags.m_Size;
    }
    this->m_TimingTags.m_Size = m_Size - 1;
  }
}


// CChoreoEvent::FindTimingTag  (line 1413, @0x00000000030790f0, libserver.so)  // inlines: GetName, operator[]
// calls: CUtlString::Get, V_stricmp_fast
CFlexTimingTag *__fastcall CChoreoEvent::FindTimingTag(CChoreoEvent *const this, const char *tagname)
{
  __int64 v4; // rbx
  CFlexTimingTag *v5; // r14
  const char *v6; // rax

  v4 = 0;
  if ( this->m_TimingTags.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = &this->m_TimingTags.m_Memory.m_pMemory[v4];
    if ( v5 != 0 )
    {
      v6 = CUtlString::Get(&this->m_TimingTags.m_Memory.m_pMemory[v4].m_Name);
      if ( V_stricmp_fast(v6, tagname) == 0 )
        break;
    }
    if ( this->m_TimingTags.m_Size <= ++v4 )
      return 0;
  }
  return v5;
}


// CChoreoEvent::OnEndTimeChanged  (line 1429, @0x00000000030791b0, libserver.so)
// calls: CChoreoEvent::GetFlexAnimationTrack, CCurveData::Resort
// callers: CChoreoEvent::SetEndTime
void __fastcall CChoreoEvent::OnEndTimeChanged(CChoreoEvent *const this)
{
  int v2; // ebx
  int m_Size; // r13d
  CFlexAnimationTrack *FlexAnimationTrack; // rax
  CFlexAnimationTrack *v5; // r12

  v2 = 0;
  m_Size = this->m_FlexAnimationTracks.m_Size;
  if ( m_Size > 0 )
  {
    do
    {
      FlexAnimationTrack = CChoreoEvent::GetFlexAnimationTrack(this, v2);
      v5 = FlexAnimationTrack;
      if ( FlexAnimationTrack != 0 )
      {
        CCurveData::Resort(FlexAnimationTrack->m_Ramp);
        CCurveData::Resort(&v5->m_Ramp[1]);
      }
      ++v2;
    }
    while ( v2 != m_Size );
  }
}


// CChoreoEvent::GetNumFlexAnimationTracks  (line 1447, @0x0000000003079170, libserver.so)
// callers: CBaseFlex::AddFlexAnimation, CChoreoScene::FileSaveFlexAnimations, CChoreoScene::FileSaveEvent
int __fastcall CChoreoEvent::GetNumFlexAnimationTracks(const CChoreoEvent *const this)
{
  return this->m_FlexAnimationTracks.m_Size;
}


// CChoreoEvent::GetFlexAnimationTrack  (line 1452, @0x0000000003079180, libserver.so)  // inlines: operator[]
// callers: CBaseFlex::AddFlexAnimation, CChoreoEvent::OnEndTimeChanged, CChoreoEvent::GetFlexAnimationTrack, CChoreoEvent::RemoveTrack, CChoreoEvent::FindTrack, CChoreoEvent::SaveFlexAnimationsToBuffer
CFlexAnimationTrack *__fastcall CChoreoEvent::GetFlexAnimationTrack(CChoreoEvent *const this, int index)
{
  CFlexAnimationTrack *result; // rax

  result = 0;
  if ( index >= 0 && index < this->m_FlexAnimationTracks.m_Size )
    return this->m_FlexAnimationTracks.m_Memory.m_pMemory[index];
  return result;
}


// CChoreoEvent::GetFlexAnimationTrack  (line 1459, @0x0000000003079290, libserver.so)
// calls: CChoreoEvent::GetFlexAnimationTrack
// callers: CChoreoScene::FileSaveFlexAnimations
const CFlexAnimationTrack *__fastcall CChoreoEvent::GetFlexAnimationTrack(const CChoreoEvent *const this, int index)
{
  return CChoreoEvent::GetFlexAnimationTrack(this, index);
}


// CChoreoEvent::AddTrack  (line 1464, @0x000000000307d840, libserver.so)  // inlines: AddToTail, CopyConstruct<CFlexAnimationTrack*>, Element, GrowMemory, SetFlexControllerName, operator[]
// calls: operator new, CFlexAnimationTrack::CFlexAnimationTrack, CUtlString::operator=, CUtlMemory<CFlexAnimationTrack*, int>::Grow, operator delete, _Unwind_Resume
// callers: CChoreoEvent::RestoreFlexAnimationsFromBuffer, CChoreoScene::ParseFlexAnimations
CFlexAnimationTrack *__fastcall CChoreoEvent::AddTrack(CChoreoEvent *const this, const char *controllername)
{
  CFlexAnimationTrack *v4; // r12
  __int64 m_Size; // r13
  int v6; // eax
  CFlexAnimationTrack **v7; // rax

  v4 = operator new(0xC8u);
  CFlexAnimationTrack::CFlexAnimationTrack(v4, this);
  CUtlString::operator=(&v4->m_sControllerName, controllername);
  m_Size = this->m_FlexAnimationTracks.m_Size;
  v6 = this->m_FlexAnimationTracks.m_Size;
  if ( m_Size == this->m_FlexAnimationTracks.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CFlexAnimationTrack *,int>::Grow(&this->m_FlexAnimationTracks.m_Memory, 1);
    v6 = this->m_FlexAnimationTracks.m_Size;
  }
  this->m_FlexAnimationTracks.m_Size = v6 + 1;
  v7 = &this->m_FlexAnimationTracks.m_Memory.m_pMemory[m_Size];
  if ( v7 != 0 )
    *v7 = v4;
  return v4;
}


// CChoreoEvent::RemoveTrack  (line 1474, @0x00000000030792a0, libserver.so)  // inlines: Element, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: CChoreoEvent::GetFlexAnimationTrack, memmove
// callers: CChoreoEvent::RemoveAllTracks, CChoreoEvent::~CChoreoEvent, CChoreoEvent::operator=
void __fastcall CChoreoEvent::RemoveTrack(CChoreoEvent *const this, int index)
{
  CFlexAnimationTrack *FlexAnimationTrack; // r12
  int m_Size; // eax

  FlexAnimationTrack = CChoreoEvent::GetFlexAnimationTrack(this, index);
  if ( FlexAnimationTrack != 0 )
  {
    m_Size = this->m_FlexAnimationTracks.m_Size;
    if ( m_Size - index - 1 > 0 )
    {
      memmove(
        &this->m_FlexAnimationTracks.m_Memory.m_pMemory[index],
        &this->m_FlexAnimationTracks.m_Memory.m_pMemory[index + 1],
        8LL * (this->m_FlexAnimationTracks.m_Size - index - 1));
      m_Size = this->m_FlexAnimationTracks.m_Size;
    }
    this->m_FlexAnimationTracks.m_Size = m_Size - 1;
    (*(FlexAnimationTrack->_vptr_ICurveDataAccessor + 5))(FlexAnimationTrack);
  }
}


// CChoreoEvent::RemoveAllTracks  (line 1484, @0x0000000003079340, libserver.so)
// calls: CChoreoEvent::RemoveTrack
// callers: CChoreoScene::ParseFlexAnimations
void __fastcall CChoreoEvent::RemoveAllTracks(CChoreoEvent *const this)
{
  while ( this->m_FlexAnimationTracks.m_Size > 0 )
    CChoreoEvent::RemoveTrack(this, 0);
}


// CChoreoEvent::FindTrack  (line 1492, @0x0000000003079380, libserver.so)  // inlines: GetFlexControllerName, String
// calls: CChoreoEvent::GetFlexAnimationTrack, CUtlString::Get, V_stricmp_fast
CFlexAnimationTrack *__fastcall CChoreoEvent::FindTrack(CChoreoEvent *const this, const char *controllername)
{
  int v4; // ebx
  CFlexAnimationTrack *FlexAnimationTrack; // rax
  CFlexAnimationTrack *v6; // r12
  const char *v7; // rax

  v4 = 0;
  if ( this->m_FlexAnimationTracks.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    FlexAnimationTrack = CChoreoEvent::GetFlexAnimationTrack(this, v4);
    v6 = FlexAnimationTrack;
    if ( FlexAnimationTrack != 0 )
    {
      v7 = CUtlString::Get(&FlexAnimationTrack->m_sControllerName);
      if ( V_stricmp_fast(v7, controllername) == 0 )
        break;
    }
    if ( ++v4 >= this->m_FlexAnimationTracks.m_Size )
      return 0;
  }
  return v6;
}


// CChoreoEvent::GetTrackLookupSet  (line 1505, @0x0000000003079400, libserver.so)
// callers: CBaseFlex::AddFlexAnimation
bool __fastcall CChoreoEvent::GetTrackLookupSet(const CChoreoEvent *const this)
{
  return (*(this + 440) & 8) != 0;
}


// CChoreoEvent::SetTrackLookupSet  (line 1510, @0x0000000003079420, libserver.so)
// callers: CBaseFlex::AddFlexAnimation, CChoreoScene::ParseFlexAnimations
void __fastcall CChoreoEvent::SetTrackLookupSet(CChoreoEvent *const this, bool set)
{
  *(this + 440) = (8 * set) | *(this + 440) & 0xF7;
}


// CChoreoEvent::IsProcessing  (line 1516, @0x0000000003079440, libserver.so)
// callers: CChoreoScene::EventThink, CChoreoScene::GetPlayingSoundName
bool __fastcall CChoreoEvent::IsProcessing(const CChoreoEvent *const this)
{
  return (*(this + 440) & 0x10) != 0;
}


// CChoreoEvent::StartProcessing  (line 1521, @0x0000000003079460, libserver.so)
// callers: CChoreoScene::ResumeSimulation, CChoreoScene::Think
void __fastcall CChoreoEvent::StartProcessing(
        CChoreoEvent *const this,
        IChoreoEventCallback *cb,
        CChoreoScene *scene,
        float t)
{
  *(this + 440) |= 0x10u;
  if ( cb != 0 )
    cb->StartEvent(scene, this, t);
}


// CChoreoEvent::ContinueProcessing  (line 1531, @0x0000000003079490, libserver.so)
// callers: CChoreoScene::Think
void __fastcall CChoreoEvent::ContinueProcessing(
        CChoreoEvent *const this,
        IChoreoEventCallback *cb,
        CChoreoScene *scene,
        float t)
{
  if ( cb != 0 )
    (*(cb->_vptr_IChoreoEventCallback + 2))(cb, scene, this, t);
}


// CChoreoEvent::StopProcessing  (line 1540, @0x00000000030794c0, libserver.so)
// callers: CChoreoScene::Think
void __fastcall CChoreoEvent::StopProcessing(
        CChoreoEvent *const this,
        IChoreoEventCallback *cb,
        CChoreoScene *scene,
        float t)
{
  if ( cb != 0 )
    (*(cb->_vptr_IChoreoEventCallback + 1))(cb, scene, this, t);
  *(this + 440) &= ~0x10u;
}


// CChoreoEvent::CheckProcessing  (line 1550, @0x00000000030794f0, libserver.so)
// callers: CChoreoScene::CheckEventCompletion
bool __fastcall CChoreoEvent::CheckProcessing(
        CChoreoEvent *const this,
        IChoreoEventCallback *cb,
        CChoreoScene *scene,
        float t)
{
  return cb == 0 || (*(cb->_vptr_IChoreoEventCallback + 3))(cb, scene, this, t);
}


// CChoreoEvent::ResetProcessing  (line 1560, @0x0000000003079520, libserver.so)
// callers: CChoreoScene::ResetSimulation
void __fastcall CChoreoEvent::ResetProcessing(CChoreoEvent *const this)
{
  if ( this->m_fType == 12 )
    this->m_nLoopsRemaining = this->m_nNumLoops;
  *(this + 440) &= ~0x10u;
}


// CChoreoEvent::SetMixer  (line 1570, @0x0000000003079540, libserver.so)
void __fastcall CChoreoEvent::SetMixer(CChoreoEvent *const this, CAudioMixer *mixer)
{
  this->m_pMixer = mixer;
}


// CChoreoEvent::GetMixer  (line 1575, @0x0000000003079550, libserver.so)
CAudioMixer *__fastcall CChoreoEvent::GetMixer(const CChoreoEvent *const this)
{
  return this->m_pMixer;
}


// CChoreoEvent::SetSoundGuid  (line 1580, @0x0000000003079560, libserver.so)
void __fastcall CChoreoEvent::SetSoundGuid(CChoreoEvent *const this, SoundGuid_t id)
{
  this->m_engineId = id;
}


// CChoreoEvent::GetSoundGuid  (line 1585, @0x0000000003079570, libserver.so)
SoundGuid_t __fastcall CChoreoEvent::GetSoundGuid(const CChoreoEvent *const this)
{
  return this->m_engineId.m_Data;
}


// CChoreoEvent::SnapTimes  (line 1592, @0x0000000003079580, libserver.so)  // inlines: GetScene, HasEndTime, SnapTime
// calls: CChoreoScene::SnapTime
// callers: CSceneEntity::GenerateSceneForSound
void __fastcall CChoreoEvent::SnapTimes(CChoreoEvent *const this)
{
  float v1; // xmm1_4
  float m_flEndTime; // xmm0_4
  CChoreoScene *m_pScene; // rdi
  float m_flStartTime; // xmm1_4
  float v6; // xmm0_4
  bool v7; // zf
  float oldstart; // [rsp+Ch] [rbp-14h]

  m_flEndTime = this->m_flEndTime;
  if ( m_flEndTime == -1.0 || (*(this + 440) & 1) != 0 )
  {
    m_pScene = this->m_pScene;
  }
  else
  {
    m_pScene = this->m_pScene;
    if ( m_pScene != 0 )
    {
      m_flEndTime = CChoreoScene::SnapTime(m_pScene, v1);
      m_pScene = this->m_pScene;
    }
    this->m_flEndTime = m_flEndTime;
  }
  m_flStartTime = this->m_flStartTime;
  v6 = m_flStartTime;
  if ( m_pScene != 0 )
  {
    oldstart = this->m_flStartTime;
    v6 = CChoreoScene::SnapTime(m_pScene, m_flStartTime);
    m_flStartTime = oldstart;
  }
  v7 = (*(this + 440) & 1) == 0;
  this->m_flStartTime = v6;
  if ( !v7 )
    this->m_flEndTime = (v6 - m_flStartTime) + this->m_flEndTime;
}


// CChoreoEvent::SnapTime  (line 1609, @0x0000000003079610, libserver.so)  // inlines: GetScene
// calls: CChoreoScene::SnapTime
float __fastcall CChoreoEvent::SnapTime(CChoreoEvent *const this, double a2, float t)
{
  CChoreoScene *m_pScene; // rdi
  float result; // xmm0_4

  m_pScene = this->m_pScene;
  if ( m_pScene != 0 )
    return CChoreoScene::SnapTime(m_pScene, t);
  return result;
}


// CChoreoEvent::GetScene  (line 1621, @0x0000000003079640, libserver.so)
// callers: CChoreoChannel::operator=, CChoreoChannel::ReconcileGestureTimes
CChoreoScene *__fastcall CChoreoEvent::GetScene(CChoreoEvent *const this)
{
  return this->m_pScene;
}


// CChoreoEvent::GetScene  (line 1626, @0x0000000003079650, libserver.so)
const CChoreoScene *__fastcall CChoreoEvent::GetScene(const CChoreoEvent *const this)
{
  return this->m_pScene;
}


// CChoreoEvent::SetScene  (line 1632, @0x0000000003079660, libserver.so)
// callers: CChoreoScene::Merge, CChoreoScene::operator=
void __fastcall CChoreoEvent::SetScene(CChoreoEvent *const this, CChoreoScene *scene)
{
  this->m_pScene = scene;
}


// CChoreoEvent::NameForAbsoluteTagType  (line 1637, @0x0000000003079670, libserver.so)
// callers: CChoreoScene::FileSaveEvent
// strings: "playback_time", "AbsTagType(unknown)", "shifted_time"
const char *__fastcall CChoreoEvent::NameForAbsoluteTagType(CChoreoEvent::AbsTagType t)
{
  const char *result; // rax

  result = "playback_time";
  if ( t != PLAYBACK )
  {
    result = "AbsTagType(unknown)";
    if ( t == ORIGINAL )
      return "shifted_time";
  }
  return result;
}


// CChoreoEvent::TypeForAbsoluteTagName  (line 1652, @0x00000000030796a0, libserver.so)
// calls: V_stricmp_fast
// callers: CChoreoScene::ParseEvent
// strings: "playback_time", "shifted_time"
CChoreoEvent::AbsTagType __fastcall CChoreoEvent::TypeForAbsoluteTagName(const char *name)
{
  int v2; // eax
  CChoreoEvent::AbsTagType v3; // edx

  v2 = V_stricmp_fast(name, "playback_time");
  v3 = PLAYBACK;
  if ( v2 != 0 )
    return V_stricmp_fast(name, "shifted_time") == 0 ? 1 : -1;
  return v3;
}


// CChoreoEvent::ClearAllAbsoluteTags  (line 1666, @0x000000000307bfd0, libserver.so)  // inlines: Purge
// calls: CUtlVectorBase<CEventAbsoluteTag, CUtlMemory<CEventAbsoluteTag, int> >::RemoveAll, CUtlMemory<CEventAbsoluteTag, int>::Purge
void __fastcall CChoreoEvent::ClearAllAbsoluteTags(CChoreoEvent *const this, CChoreoEvent::AbsTagType type)
{
  CUtlVector<CEventAbsoluteTag,CUtlMemory<CEventAbsoluteTag,int> > *v2; // rbx

  v2 = &this->m_AbsoluteTags[type];
  CUtlVectorBase<CEventAbsoluteTag,CUtlMemory<CEventAbsoluteTag,int>>::RemoveAll(v2);
  if ( (v2->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CEventAbsoluteTag,int>::Purge(&v2->m_Memory);
}


// CChoreoEvent::GetNumAbsoluteTags  (line 1671, @0x00000000030796f0, libserver.so)
// callers: CChoreoScene::FileSaveEvent
int __fastcall CChoreoEvent::GetNumAbsoluteTags(const CChoreoEvent *const this, CChoreoEvent::AbsTagType type)
{
  return this->m_AbsoluteTags[type].m_Size;
}


// CChoreoEvent::GetAbsoluteTag  (line 1676, @0x0000000003079710, libserver.so)  // inlines: operator[]
CEventAbsoluteTag *__fastcall CChoreoEvent::GetAbsoluteTag(
        CChoreoEvent *const this,
        CChoreoEvent::AbsTagType type,
        int tagnum)
{
  return &this->m_AbsoluteTags[type].m_Memory.m_pMemory[tagnum];
}


// CChoreoEvent::GetAbsoluteTag  (line 1682, @0x0000000003079730, libserver.so)  // inlines: operator[]
// callers: CChoreoScene::FileSaveEvent
const CEventAbsoluteTag *__fastcall CChoreoEvent::GetAbsoluteTag(
        const CChoreoEvent *const this,
        CChoreoEvent::AbsTagType type,
        int tagnum)
{
  return &this->m_AbsoluteTags[type].m_Memory.m_pMemory[tagnum];
}


// CChoreoEvent::FindAbsoluteTag  (line 1689, @0x0000000003079750, libserver.so)  // inlines: GetName, operator[]
// calls: CUtlString::Get, V_stricmp_fast
// callers: CBaseFlex::HandleStartGestureSceneEvent
CEventAbsoluteTag *__fastcall CChoreoEvent::FindAbsoluteTag(
        CChoreoEvent *const this,
        CChoreoEvent::AbsTagType type,
        const char *tagname)
{
  int v4; // r13d
  CUtlVector<CEventAbsoluteTag,CUtlMemory<CEventAbsoluteTag,int> > *v5; // r12
  __int64 v6; // rbx
  CEventAbsoluteTag *v7; // r14
  const char *v8; // rax

  v4 = 0;
  v5 = &this->m_AbsoluteTags[type];
  v6 = 0;
  if ( v5->m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v7 = &v5->m_Memory.m_pMemory[v6];
    if ( v7 != 0 )
    {
      v8 = CUtlString::Get(&v5->m_Memory.m_pMemory[v6].m_Name);
      if ( V_stricmp_fast(v8, tagname) == 0 )
        break;
    }
    ++v4;
    ++v6;
    if ( v5->m_Size <= v4 )
      return 0;
  }
  return v7;
}


// CChoreoEvent::AddAbsoluteTag  (line 1705, @0x000000000307cdf0, libserver.so)  // inlines: AddToTail, CopyConstruct<CEventAbsoluteTag>, Element, GrowMemory, operator=, operator[], ~CEventAbsoluteTag, ~CUtlString
// calls: CEventAbsoluteTag::CEventAbsoluteTag, CUtlString::operator=, CUtlString::FreeMemoryBlock, CUtlMemory<CEventAbsoluteTag, int>::Grow, _Unwind_Resume
// callers: CChoreoEvent::RestoreFromBuffer, CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::AddAbsoluteTag(
        CChoreoEvent *const this,
        CChoreoEvent::AbsTagType type,
        const char *tagname,
        __m128i t)
{
  CUtlVector<CEventAbsoluteTag,CUtlMemory<CEventAbsoluteTag,int> > *v6; // r15
  __int64 m_Size; // rbx
  int v8; // eax
  CEventAbsoluteTag *v9; // rdi
  int v10; // eax
  int v11; // r13d
  __int64 v12; // r14
  CEventAbsoluteTag *m_pMemory; // rbx
  CEventAbsoluteTag *v14; // r12
  char *v15; // rbx
  char v16; // dl
  char v17; // al
  char v18; // al
  char v19; // al
  char v20; // al
  char v21; // al
  char v22; // al
  char v23; // al
  char v24; // al
  int j; // [rsp+1Ch] [rbp-84h]
  __int64 v26; // [rsp+28h] [rbp-78h]
  CEventAbsoluteTag at; // [rsp+30h] [rbp-70h] BYREF
  CEventAbsoluteTag temp; // [rsp+50h] [rbp-50h] BYREF

  CEventAbsoluteTag::CEventAbsoluteTag(&at, this, tagname, t);
  v6 = &this->m_AbsoluteTags[type];
  m_Size = v6->m_Size;
  v8 = v6->m_Size;
  if ( m_Size == v6->m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CEventAbsoluteTag,int>::Grow(&v6->m_Memory, 1);
    v8 = v6->m_Size;
  }
  v6->m_Size = v8 + 1;
  v9 = &v6->m_Memory.m_pMemory[m_Size];
  if ( v9 != 0 )
    CEventAbsoluteTag::CEventAbsoluteTag(v9, &at);
  CEventAbsoluteTag::CEventAbsoluteTag(&temp, (&loc_0 + 1), "", 0LL);
  v10 = v6->m_Size;
  v26 = 0;
  j = 0;
  while ( j < v10 )
  {
    if ( ++j >= v10 )
    {
      ++v26;
    }
    else
    {
      v11 = j;
      v12 = v26 * 24 + 24;
      do
      {
        while ( 1 )
        {
          m_pMemory = v6->m_Memory.m_pMemory;
          v14 = &m_pMemory[v26];
          v15 = m_pMemory + v12;
          if ( v14->m_flPercentage > *(v15 + 2) )
            break;
          ++v11;
          v12 += 24;
          if ( v10 <= v11 )
            goto LABEL_11;
        }
        CUtlString::operator=(&temp.m_Name, &v14->m_Name);
        v16 = *(v14 + 12) & 1;
        temp.m_flPercentage = v14->m_flPercentage;
        *(&temp + 12) = v16 | *(&temp + 12) & 0xFE;
        *(&temp + 12) = *(v14 + 12) & 2 | *(&temp + 12) & 0xFD;
        *(&temp + 12) = *(v14 + 12) & 4 | *(&temp + 12) & 0xFB;
        *(&temp + 12) = *(v14 + 12) & 8 | *(&temp + 12) & 0xF7;
        temp.m_pOwner = v14->m_pOwner;
        CUtlString::operator=(&v14->m_Name, v15);
        v17 = *(v14 + 12);
        v14->m_flPercentage = *(v15 + 2);
        v18 = v15[12] & 1 | v17 & 0xFE;
        *(v14 + 12) = v18;
        v19 = v15[12] & 2 | v18 & 0xFD;
        *(v14 + 12) = v19;
        v20 = v15[12] & 4 | v19 & 0xFB;
        *(v14 + 12) = v20;
        *(v14 + 12) = v15[12] & 8 | v20 & 0xF7;
        v14->m_pOwner = *(v15 + 2);
        CUtlString::operator=(v15, &temp.m_Name);
        ++v11;
        v12 += 24;
        v21 = v15[12];
        *(v15 + 2) = LODWORD(temp.m_flPercentage);
        v22 = *(&temp + 12) & 1 | v21 & 0xFE;
        v15[12] = v22;
        v23 = *(&temp + 12) & 2 | v22 & 0xFD;
        v15[12] = v23;
        v24 = *(&temp + 12) & 4 | v23 & 0xFB;
        v15[12] = v24;
        v15[12] = *(&temp + 12) & 8 | v24 & 0xF7;
        *(v15 + 2) = temp.m_pOwner;
        v10 = v6->m_Size;
      }
      while ( v6->m_Size > v11 );
LABEL_11:
      ++v26;
    }
  }
  if ( temp.m_Name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&temp.m_Name);
  if ( at.m_Name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&at.m_Name);
}


// CChoreoEvent::RemoveAbsoluteTag  (line 1731, @0x00000000030797f0, libserver.so)  // inlines: Destruct<CEventAbsoluteTag>, Element, GetName, Remove, ShiftElementsLeft, V_memmove, memmove, operator[], ~CEventAbsoluteTag, ~CUtlString
// calls: CUtlString::Get, V_stricmp_fast, CUtlString::FreeMemoryBlock, memmove
void __fastcall CChoreoEvent::RemoveAbsoluteTag(
        CChoreoEvent *const this,
        CChoreoEvent::AbsTagType type,
        const char *tagname)
{
  int v3; // r13d
  CUtlVector<CEventAbsoluteTag,CUtlMemory<CEventAbsoluteTag,int> > *v5; // r12
  __int64 v6; // rbx
  const CUtlString *p_m_Name; // rdi
  const char *v8; // rax
  CUtlString *v9; // rdi
  int m_Size; // eax

  v3 = 0;
  v5 = &this->m_AbsoluteTags[type];
  v6 = 0;
  if ( v5->m_Size > 0 )
  {
    while ( 1 )
    {
      p_m_Name = &v5->m_Memory.m_pMemory[v6].m_Name;
      if ( p_m_Name != 0 )
      {
        v8 = CUtlString::Get(p_m_Name);
        if ( V_stricmp_fast(v8, tagname) == 0 )
          break;
      }
      ++v3;
      ++v6;
      if ( v5->m_Size <= v3 )
        return;
    }
    v9 = &v5->m_Memory.m_pMemory[v6].m_Name;
    if ( v9->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v9);
    m_Size = v5->m_Size;
    if ( v5->m_Size - v3 - 1 > 0 )
    {
      memmove(&v5->m_Memory.m_pMemory[v6], &v5->m_Memory.m_pMemory[v3 + 1], 24LL * (v5->m_Size - v3 - 1));
      m_Size = v5->m_Size;
    }
    v5->m_Size = m_Size - 1;
  }
}


// CChoreoEvent::SortTags  (line 1751, @0x00000000030798c0, libserver.so)  // inlines: GetName, operator=, operator[], ~CEventAbsoluteTag, ~CUtlString
// calls: CEventAbsoluteTag::CEventAbsoluteTag, CUtlString::Get, V_stricmp_fast, CUtlString::operator=, CUtlString::FreeMemoryBlock, _Unwind_Resume
bool __fastcall CChoreoEvent::SortTags(CChoreoEvent *const this)
{
  __int64 v2; // rbx
  bool v3; // r14
  const char *v4; // r12
  const char *v5; // rax
  bool v6; // zf
  int v7; // eax
  int v8; // r12d
  __int64 v9; // rbx
  CUtlString *v10; // r14
  const char *v11; // r15
  const char *v12; // rax
  char v13; // dl
  char v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  char v18; // al
  char v19; // al
  char v20; // al
  char v21; // al
  CUtlString *src; // [rsp+8h] [rbp-70h]
  __int64 v24; // [rsp+10h] [rbp-68h]
  int j; // [rsp+1Ch] [rbp-5Ch]
  CUtlString *v26; // [rsp+20h] [rbp-58h]
  CEventAbsoluteTag temp; // [rsp+28h] [rbp-50h] BYREF

  CEventAbsoluteTag::CEventAbsoluteTag(&temp, (&loc_0 + 1), "", 0LL);
  if ( this->m_AbsoluteTags[1].m_Size > 0 )
  {
    j = 1;
    v2 = 0;
    v3 = 1;
    while ( 1 )
    {
      v26 = (&this->m_AbsoluteTags[1].m_Memory.m_pMemory->m_Name + v2);
      if ( v26 != 0 )
      {
        src = (&this->m_AbsoluteTags[0].m_Memory.m_pMemory->m_Name + v2);
        v4 = CUtlString::Get(src);
        v5 = CUtlString::Get(v26);
        v6 = V_stricmp_fast(v5, v4) == 0;
        v7 = j;
        if ( !v6 )
        {
          if ( j < this->m_AbsoluteTags[0].m_Size )
          {
            v8 = j;
            v24 = v2 + 24;
            v9 = v2 + 24;
            do
            {
              v10 = (&this->m_AbsoluteTags[0].m_Memory.m_pMemory->m_Name + v9);
              v11 = CUtlString::Get(v10);
              v12 = CUtlString::Get(v26);
              if ( V_stricmp_fast(v12, v11) == 0 )
              {
                CUtlString::operator=(&temp.m_Name, src);
                v13 = BYTE4(src[1].m_pString) & 1;
                temp.m_flPercentage = *&src[1].m_pString;
                *(&temp + 12) = v13 | *(&temp + 12) & 0xFE;
                *(&temp + 12) = BYTE4(src[1].m_pString) & 2 | *(&temp + 12) & 0xFD;
                *(&temp + 12) = BYTE4(src[1].m_pString) & 4 | *(&temp + 12) & 0xFB;
                *(&temp + 12) = BYTE4(src[1].m_pString) & 8 | *(&temp + 12) & 0xF7;
                temp.m_pOwner = src[2].m_pString;
                CUtlString::operator=(src, v10);
                v14 = BYTE4(src[1].m_pString);
                LODWORD(src[1].m_pString) = v10[1].m_pString;
                v15 = BYTE4(v10[1].m_pString) & 1 | v14 & 0xFE;
                BYTE4(src[1].m_pString) = v15;
                v16 = BYTE4(v10[1].m_pString) & 2 | v15 & 0xFD;
                BYTE4(src[1].m_pString) = v16;
                v17 = BYTE4(v10[1].m_pString) & 4 | v16 & 0xFB;
                BYTE4(src[1].m_pString) = v17;
                BYTE4(src[1].m_pString) = BYTE4(v10[1].m_pString) & 8 | v17 & 0xF7;
                src[2].m_pString = v10[2].m_pString;
                CUtlString::operator=(v10, &temp.m_Name);
                v18 = BYTE4(v10[1].m_pString);
                *&v10[1].m_pString = temp.m_flPercentage;
                v19 = *(&temp + 12) & 1 | v18 & 0xFE;
                BYTE4(v10[1].m_pString) = v19;
                v20 = *(&temp + 12) & 2 | v19 & 0xFD;
                BYTE4(v10[1].m_pString) = v20;
                v21 = *(&temp + 12) & 4 | v20 & 0xFB;
                BYTE4(v10[1].m_pString) = v21;
                BYTE4(v10[1].m_pString) = *(&temp + 12) & 8 | v21 & 0xF7;
                v10[2].m_pString = temp.m_pOwner;
                v7 = j;
                v3 = 0;
                goto LABEL_10;
              }
              ++v8;
              v9 += 24;
            }
            while ( this->m_AbsoluteTags[0].m_Size > v8 );
            v7 = j;
            v3 = 0;
            goto LABEL_10;
          }
          v7 = j;
          v3 = 0;
        }
        v24 = v2 + 24;
      }
      else
      {
        v7 = j;
        v24 = v2 + 24;
      }
LABEL_10:
      ++j;
      v2 = v24;
      if ( this->m_AbsoluteTags[1].m_Size <= v7 )
        goto LABEL_11;
    }
  }
  v3 = 1;
LABEL_11:
  if ( temp.m_Name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&temp.m_Name);
  return v3;
}


// CChoreoEvent::GetBoundedAbsoluteTagPercentage  (line 1786, @0x0000000003077a40, libserver.so)  // inlines: GetAbsoluteTag, GetNumAbsoluteTags, GetPercentage, operator[]
// callers: CChoreoEvent::GetBoundedAbsoluteTagPercentage, CChoreoEvent::GetOriginalPercentageFromPlaybackPercentage, CChoreoEvent::GetPlaybackPercentageFromOriginalPercentage
float __fastcall CChoreoEvent::GetBoundedAbsoluteTagPercentage(
        const CChoreoEvent *const this,
        CChoreoEvent::AbsTagType type,
        int tagnum)
{
  float result; // xmm0_4

  result = 1.0;
  if ( this->m_AbsoluteTags[type].m_Size > tagnum )
    return this->m_AbsoluteTags[type].m_Memory.m_pMemory[tagnum].m_flPercentage;
  return result;
}


// CChoreoEvent::GetBoundedAbsoluteTagPercentage  (line 1786, @0x0000000003079b90, libserver.so)
// calls: CChoreoEvent::GetBoundedAbsoluteTagPercentage
float __fastcall CChoreoEvent::GetBoundedAbsoluteTagPercentage(
        const CChoreoEvent *const this,
        CChoreoEvent::AbsTagType type,
        int tagnum)
{
  if ( tagnum < 0 )
    return 0.0;
  else
    return CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, type, tagnum);
}


// CChoreoEvent::GetOriginalPercentageFromPlaybackPercentage  (line 1840, @0x0000000003079bb0, libserver.so)  // inlines: GetAbsoluteTag, GetBoundedAbsoluteTagPercentage, GetPercentage, Init, Vector, operator[]
// calls: CChoreoEvent::GetBoundedAbsoluteTagPercentage, Catmull_Rom_Spline_NormalizeX
// callers: CBaseFlex::HandleStartGestureSceneEvent, CBaseFlex::ProcessGestureSceneEvent
vec_t __fastcall CChoreoEvent::GetOriginalPercentageFromPlaybackPercentage(
        const CChoreoEvent *const this,
        vec_t result,
        float t)
{
  float v3; // xmm1_4
  int m_Size; // r13d
  int i; // r14d
  int v7; // ebx
  int v8; // edx
  int v9; // eax
  int v10; // r15d
  int v11; // r14d
  CEventAbsoluteTag *v12; // r8
  CEventAbsoluteTag *v13; // rbx
  vec_t v14; // xmm2_4
  float v15; // xmm0_4
  vec_t v16; // xmm2_4
  vec_t v17; // xmm4_4
  float v18; // xmm0_4
  int v19; // r15d
  __m128i v20; // xmm0
  float v21; // xmm0_4
  float v22; // xmm0_4
  CEventAbsoluteTag *m_pMemory; // rsi
  CEventAbsoluteTag *v24; // rdi
  CEventAbsoluteTag *v25; // rdx
  float v26; // xmm1_4
  float BoundedAbsoluteTagPercentage; // xmm0_4
  float v28; // [rsp+4h] [rbp-ACh]
  float v29; // [rsp+8h] [rbp-A8h]
  CEventAbsoluteTag *v30; // [rsp+8h] [rbp-A8h]
  CEventAbsoluteTag *v31; // [rsp+10h] [rbp-A0h]
  float v32; // [rsp+10h] [rbp-A0h]
  float v33; // [rsp+10h] [rbp-A0h]
  int preva; // [rsp+18h] [rbp-98h]
  CEventAbsoluteTag *prevb; // [rsp+18h] [rbp-98h]
  float prev; // [rsp+18h] [rbp-98h]
  float v37; // [rsp+20h] [rbp-90h]
  float v38; // [rsp+20h] [rbp-90h]
  float dt; // [rsp+24h] [rbp-8Ch]
  int end; // [rsp+28h] [rbp-88h]
  int enda; // [rsp+28h] [rbp-88h]
  float endb; // [rsp+28h] [rbp-88h]
  float s; // [rsp+2Ch] [rbp-84h]
  Vector vPre; // [rsp+30h] [rbp-80h] BYREF
  Vector vStart; // [rsp+40h] [rbp-70h] BYREF
  Vector vEnd; // [rsp+50h] [rbp-60h] BYREF
  Vector vNext; // [rsp+60h] [rbp-50h] BYREF
  Vector vOut; // [rsp+70h] [rbp-40h] BYREF

  v3 = result;
  if ( this->m_fType == 6 )
  {
    m_Size = this->m_AbsoluteTags[0].m_Size;
    if ( m_Size == this->m_AbsoluteTags[1].m_Size && m_Size > 0 )
    {
      result = 0.0;
      if ( v3 > 0.0 )
      {
        s = 0.0;
        for ( i = -1; ; ++i )
        {
          v7 = i + 1;
          *&end = v3;
          BoundedAbsoluteTagPercentage = CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, PLAYBACK, i + 1);
          v3 = *&end;
          if ( *&end >= s && BoundedAbsoluteTagPercentage >= *&end )
            break;
          if ( v7 == m_Size )
          {
            v8 = i + 2;
            goto LABEL_14;
          }
          if ( i == -2 )
            BoundedAbsoluteTagPercentage = 0.0;
          s = BoundedAbsoluteTagPercentage;
        }
        v8 = i + 1;
        v7 = i;
LABEL_14:
        v9 = -2;
        v10 = -1;
        v11 = v7 + 2;
        if ( v7 - 1 >= -2 )
          v9 = v7 - 1;
        if ( v7 >= 0 )
          v10 = v7;
        if ( v8 > m_Size )
          v8 = m_Size;
        enda = v8;
        if ( v11 > m_Size )
          v11 = m_Size + 1;
        if ( v10 >= m_Size || v10 < 0 )
          v12 = 0;
        else
          v12 = &this->m_AbsoluteTags[0].m_Memory.m_pMemory[v10];
        v13 = 0;
        if ( v8 < m_Size
          && (v13 = &this->m_AbsoluteTags[0].m_Memory.m_pMemory[v8], v12 != 0)
          && v13 != 0
          && (*(v12 + 12) & 2) != 0
          && (*(v13 + 12) & 2) != 0
          && (m_pMemory = this->m_AbsoluteTags[1].m_Memory.m_pMemory, v24 = &m_pMemory[v10], (v25 = &m_pMemory[v8]) != 0)
          && v24 != 0 )
        {
          v26 = (v3 - v12->m_flPercentage) / (v13->m_flPercentage - v12->m_flPercentage);
          return ((1.0 - v26) * v24->m_flPercentage) + (v26 * v25->m_flPercentage);
        }
        else
        {
          v14 = 0.0;
          dt = BoundedAbsoluteTagPercentage - s;
          v15 = 0.0;
          if ( v9 >= 0 )
          {
            v29 = v3;
            v31 = v12;
            preva = v9;
            v37 = CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, ORIGINAL, v9);
            v15 = CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, PLAYBACK, preva);
            v12 = v31;
            v14 = v37;
            v3 = v29;
          }
          vPre.y = v14;
          v16 = 0.0;
          vPre.x = v15;
          v17 = 0.0;
          vPre.z = 0.0;
          if ( v10 != -1 )
          {
            v32 = v3;
            prevb = v12;
            v38 = CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, ORIGINAL, v10);
            v18 = CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, PLAYBACK, v10);
            v12 = prevb;
            v16 = v38;
            v17 = v18;
            v3 = v32;
          }
          v19 = enda;
          v28 = v3;
          v30 = v12;
          vStart.x = v17;
          v33 = v17;
          vStart.y = v16;
          prev = v16;
          vStart.z = 0.0;
          endb = CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, ORIGINAL, enda);
          vEnd.x = CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, PLAYBACK, v19);
          vEnd.y = endb;
          vEnd.z = 0.0;
          *v20.m128i_i32 = CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, ORIGINAL, v11);
          LODWORD(vNext.y) = _mm_cvtsi128_si32(v20);
          vNext.x = CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, PLAYBACK, v11);
          vNext.z = 0.0;
          if ( v30 != 0 && (*(v30 + 12) & 2) != 0 )
          {
            vPre.x = v33 - (vEnd.x - v33);
            vPre.y = prev - (endb - prev);
          }
          if ( v13 != 0 && (*(v13 + 12) & 2) != 0 )
          {
            vNext.x = (vEnd.x - v33) + vEnd.x;
            vNext.y = (endb - prev) + endb;
          }
          v21 = 0.0;
          if ( dt > 0.0 )
          {
            v22 = (v28 - s) / dt;
            if ( v22 <= 1.0 )
              v21 = fmaxf(0.0, v22);
            else
              v21 = 1.0;
          }
          Catmull_Rom_Spline_NormalizeX(&vPre, &vStart, &vEnd, &vNext, v21, &vOut);
          return vOut.y;
        }
      }
    }
  }
  return result;
}


// CChoreoEvent::GetPlaybackPercentageFromOriginalPercentage  (line 1960, @0x000000000307a040, libserver.so)  // inlines: GetAbsoluteTag, GetBoundedAbsoluteTagPercentage, GetPercentage, Init, Vector, operator[]
// calls: CChoreoEvent::GetBoundedAbsoluteTagPercentage, Catmull_Rom_Spline_NormalizeX
vec_t __fastcall CChoreoEvent::GetPlaybackPercentageFromOriginalPercentage(
        const CChoreoEvent *const this,
        vec_t result,
        float t)
{
  float v3; // xmm1_4
  int m_Size; // r13d
  int i; // r14d
  int v7; // ebx
  int v8; // edx
  int v9; // eax
  int v10; // r15d
  int v11; // r14d
  CEventAbsoluteTag *v12; // r8
  CEventAbsoluteTag *v13; // rbx
  vec_t v14; // xmm2_4
  float v15; // xmm0_4
  vec_t v16; // xmm2_4
  vec_t v17; // xmm4_4
  float v18; // xmm0_4
  int v19; // r15d
  __m128i v20; // xmm0
  float v21; // xmm0_4
  float v22; // xmm0_4
  CEventAbsoluteTag *m_pMemory; // rsi
  CEventAbsoluteTag *v24; // rdi
  CEventAbsoluteTag *v25; // rdx
  float v26; // xmm1_4
  float BoundedAbsoluteTagPercentage; // xmm0_4
  float v28; // [rsp+4h] [rbp-ACh]
  float v29; // [rsp+8h] [rbp-A8h]
  CEventAbsoluteTag *v30; // [rsp+8h] [rbp-A8h]
  CEventAbsoluteTag *v31; // [rsp+10h] [rbp-A0h]
  float v32; // [rsp+10h] [rbp-A0h]
  float v33; // [rsp+10h] [rbp-A0h]
  int preva; // [rsp+18h] [rbp-98h]
  CEventAbsoluteTag *prevb; // [rsp+18h] [rbp-98h]
  float prev; // [rsp+18h] [rbp-98h]
  float v37; // [rsp+20h] [rbp-90h]
  float v38; // [rsp+20h] [rbp-90h]
  float dt; // [rsp+24h] [rbp-8Ch]
  int end; // [rsp+28h] [rbp-88h]
  int enda; // [rsp+28h] [rbp-88h]
  float endb; // [rsp+28h] [rbp-88h]
  float s; // [rsp+2Ch] [rbp-84h]
  Vector vPre; // [rsp+30h] [rbp-80h] BYREF
  Vector vStart; // [rsp+40h] [rbp-70h] BYREF
  Vector vEnd; // [rsp+50h] [rbp-60h] BYREF
  Vector vNext; // [rsp+60h] [rbp-50h] BYREF
  Vector vOut; // [rsp+70h] [rbp-40h] BYREF

  v3 = result;
  if ( this->m_fType == 6 )
  {
    m_Size = this->m_AbsoluteTags[0].m_Size;
    if ( m_Size == this->m_AbsoluteTags[1].m_Size && m_Size > 0 )
    {
      result = 0.0;
      if ( v3 > 0.0 )
      {
        s = 0.0;
        for ( i = -1; ; ++i )
        {
          v7 = i + 1;
          *&end = v3;
          BoundedAbsoluteTagPercentage = CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, PLAYBACK, i + 1);
          v3 = *&end;
          if ( *&end >= s && BoundedAbsoluteTagPercentage >= *&end )
            break;
          if ( v7 == m_Size )
          {
            v8 = i + 2;
            goto LABEL_14;
          }
          if ( i == -2 )
            BoundedAbsoluteTagPercentage = 0.0;
          s = BoundedAbsoluteTagPercentage;
        }
        v8 = i + 1;
        v7 = i;
LABEL_14:
        v9 = -2;
        v10 = -1;
        v11 = v7 + 2;
        if ( v7 - 1 >= -2 )
          v9 = v7 - 1;
        if ( v7 >= 0 )
          v10 = v7;
        if ( v8 > m_Size )
          v8 = m_Size;
        enda = v8;
        if ( v11 > m_Size )
          v11 = m_Size + 1;
        if ( v10 >= m_Size || v10 < 0 )
          v12 = 0;
        else
          v12 = &this->m_AbsoluteTags[1].m_Memory.m_pMemory[v10];
        v13 = 0;
        if ( v8 < m_Size
          && (v13 = &this->m_AbsoluteTags[1].m_Memory.m_pMemory[v8], v12 != 0)
          && v13 != 0
          && (*(v12 + 12) & 2) != 0
          && (*(v13 + 12) & 2) != 0
          && (m_pMemory = this->m_AbsoluteTags[0].m_Memory.m_pMemory, v24 = &m_pMemory[v10], (v25 = &m_pMemory[v8]) != 0)
          && v24 != 0 )
        {
          v26 = (v3 - v12->m_flPercentage) / (v13->m_flPercentage - v12->m_flPercentage);
          return ((1.0 - v26) * v24->m_flPercentage) + (v26 * v25->m_flPercentage);
        }
        else
        {
          v14 = 0.0;
          dt = BoundedAbsoluteTagPercentage - s;
          v15 = 0.0;
          if ( v9 >= 0 )
          {
            v29 = v3;
            v31 = v12;
            preva = v9;
            v37 = CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, PLAYBACK, v9);
            v15 = CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, ORIGINAL, preva);
            v12 = v31;
            v14 = v37;
            v3 = v29;
          }
          vPre.y = v14;
          v16 = 0.0;
          vPre.x = v15;
          v17 = 0.0;
          vPre.z = 0.0;
          if ( v10 != -1 )
          {
            v32 = v3;
            prevb = v12;
            v38 = CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, PLAYBACK, v10);
            v18 = CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, ORIGINAL, v10);
            v12 = prevb;
            v16 = v38;
            v17 = v18;
            v3 = v32;
          }
          v19 = enda;
          v28 = v3;
          v30 = v12;
          vStart.x = v17;
          v33 = v17;
          vStart.y = v16;
          prev = v16;
          vStart.z = 0.0;
          endb = CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, PLAYBACK, enda);
          vEnd.x = CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, ORIGINAL, v19);
          vEnd.y = endb;
          vEnd.z = 0.0;
          *v20.m128i_i32 = CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, PLAYBACK, v11);
          LODWORD(vNext.y) = _mm_cvtsi128_si32(v20);
          vNext.x = CChoreoEvent::GetBoundedAbsoluteTagPercentage(this, ORIGINAL, v11);
          vNext.z = 0.0;
          if ( v30 != 0 && (*(v30 + 12) & 2) != 0 )
          {
            vPre.x = v33 - (vEnd.x - v33);
            vPre.y = prev - (endb - prev);
          }
          if ( v13 != 0 && (*(v13 + 12) & 2) != 0 )
          {
            vNext.x = (vEnd.x - v33) + vEnd.x;
            vNext.y = (endb - prev) + endb;
          }
          v21 = 0.0;
          if ( dt > 0.0 )
          {
            v22 = (v28 - s) / dt;
            if ( v22 <= 1.0 )
              v21 = fmaxf(0.0, v22);
            else
              v21 = 1.0;
          }
          Catmull_Rom_Spline_NormalizeX(&vPre, &vStart, &vEnd, &vNext, v21, &vOut);
          return vOut.y;
        }
      }
    }
  }
  return result;
}


// CChoreoEvent::SetGestureSequenceDuration  (line 2080, @0x000000000307a4d0, libserver.so)
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetGestureSequenceDuration(CChoreoEvent *const this, float a2, float duration)
{
  this->m_flGestureSequenceDuration = a2;
}


// CChoreoEvent::GetGestureSequenceDuration  (line 2085, @0x000000000307a4e0, libserver.so)
// callers: CChoreoScene::FileSaveEvent
bool __fastcall CChoreoEvent::GetGestureSequenceDuration(const CChoreoEvent *const this, float *const duration)
{
  float m_flGestureSequenceDuration; // xmm0_4
  bool result; // al
  float v4; // xmm0_4

  m_flGestureSequenceDuration = this->m_flGestureSequenceDuration;
  result = m_flGestureSequenceDuration != 0.0;
  if ( m_flGestureSequenceDuration == 0.0 )
  {
    v4 = (*(this->_vptr_CChoreoObjectBase + 8))(this);
    *duration = v4;
    return 0;
  }
  else
  {
    *duration = m_flGestureSequenceDuration;
  }
  return result;
}


// CChoreoEvent::GetPitch  (line 2101, @0x000000000307a530, libserver.so)
// callers: CChoreoScene::FileSaveEvent
int __fastcall CChoreoEvent::GetPitch(const CChoreoEvent *const this)
{
  return this->m_nPitch;
}


// CChoreoEvent::SetPitch  (line 2106, @0x000000000307a540, libserver.so)
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetPitch(CChoreoEvent *const this, int pitch)
{
  this->m_nPitch = pitch;
}


// CChoreoEvent::GetYaw  (line 2111, @0x000000000307a550, libserver.so)
// callers: CChoreoScene::FileSaveEvent
int __fastcall CChoreoEvent::GetYaw(const CChoreoEvent *const this)
{
  return this->m_nYaw;
}


// CChoreoEvent::SetYaw  (line 2116, @0x000000000307a560, libserver.so)
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetYaw(CChoreoEvent *const this, int yaw)
{
  this->m_nYaw = yaw;
}


// CChoreoEvent::GetForwardDistance  (line 2121, @0x000000000307a570, libserver.so)
// callers: CChoreoScene::FileSaveEvent
int __fastcall CChoreoEvent::GetForwardDistance(const CChoreoEvent *const this)
{
  return this->m_nFwd;
}


// CChoreoEvent::SetForwardDistance  (line 2126, @0x000000000307a580, libserver.so)
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetForwardDistance(CChoreoEvent *const this, int fwd)
{
  this->m_nFwd = fwd;
}


// CChoreoEvent::GetRightDistance  (line 2131, @0x000000000307a590, libserver.so)
// callers: CChoreoScene::FileSaveEvent
int __fastcall CChoreoEvent::GetRightDistance(const CChoreoEvent *const this)
{
  return this->m_nRight;
}


// CChoreoEvent::SetRightDistance  (line 2136, @0x000000000307a5a0, libserver.so)
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetRightDistance(CChoreoEvent *const this, int right)
{
  this->m_nRight = right;
}


// CChoreoEvent::GetTargetLocation  (line 2141, @0x000000000307a5b0, libserver.so)
// callers: CChoreoScene::FileSaveEvent
const Vector *__fastcall CChoreoEvent::GetTargetLocation(const CChoreoEvent *const this)
{
  return &this->m_vTarget;
}


// CChoreoEvent::SetTargetLocation  (line 2146, @0x000000000307a5c0, libserver.so)  // inlines: operator=
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetTargetLocation(CChoreoEvent *const this, const Vector *const vec)
{
  this->m_vTarget = *vec;
}


// CChoreoEvent::SetLoopCount  (line 2152, @0x000000000307a5f0, libserver.so)
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetLoopCount(CChoreoEvent *const this, int numloops)
{
  int v2; // eax

  v2 = -1;
  if ( numloops >= 0 )
    v2 = numloops;
  this->m_nNumLoops = v2;
}


// CChoreoEvent::GetNumLoopsRemaining  (line 2159, @0x000000000307a610, libserver.so)
// callers: CSceneEntity::DispatchProcessLoop
int __fastcall CChoreoEvent::GetNumLoopsRemaining(const CChoreoEvent *const this)
{
  return this->m_nLoopsRemaining;
}


// CChoreoEvent::SetNumLoopsRemaining  (line 2166, @0x000000000307a620, libserver.so)
// callers: CSceneEntity::DispatchProcessLoop
void __fastcall CChoreoEvent::SetNumLoopsRemaining(CChoreoEvent *const this, int loops)
{
  this->m_nLoopsRemaining = loops;
}


// CChoreoEvent::GetLoopCount  (line 2173, @0x000000000307a630, libserver.so)
// callers: CSceneEntity::DispatchProcessLoop, CChoreoScene::FileSaveEvent
int __fastcall CChoreoEvent::GetLoopCount(const CChoreoEvent *const this)
{
  return this->m_nNumLoops;
}


// CChoreoEvent::RescaleGestureTimes  (line 2179, @0x000000000307a640, libserver.so)  // inlines: GetAbsoluteTag, GetPercentage, GetStartTime, SetPercentage, operator[]
// callers: CChoreoChannel::ReconcileGestureTimes
void __fastcall CChoreoEvent::RescaleGestureTimes(
        CChoreoEvent *const this,
        float a2,
        float newstart,
        float newend,
        bool bMaintainAbsoluteTagPositions)
{
  float m_flStartTime; // xmm2_4
  int m_Size; // eax
  unsigned __int64 v8; // r12
  __int64 v9; // r14
  int v10; // xmm0_4
  CEventAbsoluteTag *v11; // r13
  __m128 v12; // xmm0
  __m128 v13; // rt1
  float newduration; // [rsp+4h] [rbp-2Ch]
  float dt; // [rsp+8h] [rbp-28h]
  float m_flPercentage; // [rsp+Ch] [rbp-24h]

  if ( this->m_fType == 6 )
  {
    m_flStartTime = this->m_flStartTime;
    if ( a2 == m_flStartTime )
    {
      if ( newstart == this->m_flEndTime )
        return;
      dt = 0.0;
      newduration = newstart - a2;
    }
    else
    {
      newduration = newstart - a2;
      dt = 0.0 - (a2 - m_flStartTime);
    }
    if ( bMaintainAbsoluteTagPositions )
    {
      m_Size = this->m_AbsoluteTags[0].m_Size;
      if ( m_Size > 0 )
      {
        v8 = 0;
        v9 = 8 * (3LL * (m_Size - 1) + 3);
        do
        {
          v11 = &this->m_AbsoluteTags[0].m_Memory.m_pMemory[v8 / 0x18];
          m_flPercentage = v11->m_flPercentage;
          v12.m128_f32[0] = (((*(this->_vptr_CChoreoObjectBase + 8))(this) * m_flPercentage) + dt) / newduration;
          if ( v12.m128_f32[0] > 1.0 )
          {
            v10 = 1065353216;
          }
          else
          {
            v13.m128_i32[0] = 0;
            v10 = v12.m128_i32[0] & _mm_cmpge_ss(v12, v13).m128_u32[0];
          }
          v8 += 24LL;
          LODWORD(v11->m_flPercentage) = v10;
        }
        while ( v8 != v9 );
      }
    }
  }
}


// CChoreoEvent::PreventTagOverlap  (line 2221, @0x000000000307a750, libserver.so)  // inlines: GetAbsoluteTag, GetPercentage, SetPercentage, operator[]
// callers: CChoreoChannel::ReconcileGestureTimes
bool __fastcall CChoreoEvent::PreventTagOverlap(CChoreoEvent *const this)
{
  int m_Size; // edx
  float v2; // xmm2_4
  __int128 v3; // xmm0
  bool result; // al
  __int64 v5; // rcx
  CEventAbsoluteTag *v6; // rsi
  __int128 m_flPercentage_low; // xmm1

  m_Size = this->m_AbsoluteTags[0].m_Size;
  if ( m_Size - 1 < 0 )
    return 0;
  v2 = 0.0099999998;
  v3 = 0x3F800000u;
  result = 0;
  v5 = m_Size - 1;
  do
  {
    v6 = &this->m_AbsoluteTags[0].m_Memory.m_pMemory[v5];
    m_flPercentage_low = LODWORD(v6->m_flPercentage);
    if ( *&m_flPercentage_low > *&v3 )
    {
      LODWORD(v6->m_flPercentage) = v3;
      v2 = *&v3 / m_Size;
      m_flPercentage_low = v3;
      if ( v2 > 0.01 )
        v2 = 0.0099999998;
      result = 1;
    }
    v3 = m_flPercentage_low;
    --v5;
    --m_Size;
    *&v3 = fmaxf(*&m_flPercentage_low - v2, 0.0);
  }
  while ( m_Size != 0 );
  return result;
}


// CChoreoEvent::FindEntryTag  (line 2254, @0x000000000307a800, libserver.so)
// callers: CChoreoChannel::ReconcileGestureTimes
CEventAbsoluteTag *__fastcall CChoreoEvent::FindEntryTag(CChoreoEvent *const this, CChoreoEvent::AbsTagType type)
{
  int m_Size; // edx
  CEventAbsoluteTag *result; // rax
  CEventAbsoluteTag *v4; // rdx

  m_Size = this->m_AbsoluteTags[type].m_Size;
  if ( m_Size <= 0 )
    return 0;
  result = this->m_AbsoluteTags[type].m_Memory.m_pMemory;
  v4 = &result[(m_Size - 1) + 1];
  while ( result == 0 || (*(result + 12) & 4) == 0 )
  {
    if ( ++result == v4 )
      return 0;
  }
  return result;
}


// CChoreoEvent::FindExitTag  (line 2270, @0x000000000307a850, libserver.so)
// callers: CChoreoChannel::ReconcileGestureTimes
CEventAbsoluteTag *__fastcall CChoreoEvent::FindExitTag(CChoreoEvent *const this, CChoreoEvent::AbsTagType type)
{
  int m_Size; // edx
  CEventAbsoluteTag *result; // rax
  CEventAbsoluteTag *v4; // rdx

  m_Size = this->m_AbsoluteTags[type].m_Size;
  if ( m_Size <= 0 )
    return 0;
  result = this->m_AbsoluteTags[type].m_Memory.m_pMemory;
  v4 = &result[(m_Size - 1) + 1];
  while ( result == 0 || (*(result + 12) & 8) == 0 )
  {
    if ( ++result == v4 )
      return 0;
  }
  return result;
}


// CChoreoEvent::GetMovementStyle  (line 2287, @0x000000000307a8a0, libserver.so)
// calls: CUtlString::Get
void __fastcall CChoreoEvent::GetMovementStyle(CChoreoEvent *const this, char *style, int maxlen)
{
  char *v4; // rbx
  const char *v5; // rax
  char v6; // cl
  char *v7; // rdi
  __int64 v8; // rdx

  v4 = style;
  *style = 0;
  v5 = CUtlString::Get(&this->m_Parameters2);
  v6 = *v5;
  if ( (*v5 & 0xDF) != 0 )
  {
    v7 = v4;
    v8 = maxlen - 1;
    if ( v8 > 0 )
    {
      do
      {
        ++v4;
        ++v5;
        *(v4 - 1) = v6;
        v6 = *v5;
      }
      while ( (*v5 & 0xDF) != 0 && v4 - v7 < v8 );
    }
  }
  *v4 = 0;
}


// CChoreoEvent::GetDistanceStyle  (line 2306, @0x000000000307a900, libserver.so)  // inlines: _V_strstr, strstr
// calls: CUtlString::Get, strchr
void __fastcall CChoreoEvent::GetDistanceStyle(CChoreoEvent *const this, char *style, int maxlen)
{
  char *v4; // rbx
  const char *v5; // rax
  char *v6; // rax
  char *v7; // rcx
  char v8; // al
  char *v9; // rdi
  __int64 v10; // rdx

  v4 = style;
  *style = 0;
  v5 = CUtlString::Get(&this->m_Parameters2);
  v6 = strchr(v5, 32);
  if ( v6 != 0 )
  {
    v7 = v6 + 1;
    v8 = v6[1];
    if ( v8 != 0 )
    {
      v9 = v4;
      v10 = maxlen - 1;
      if ( v10 > 0 )
      {
        do
        {
          ++v4;
          ++v7;
          *(v4 - 1) = v8;
          v8 = *v7;
        }
        while ( *v7 != 0 && v4 - v9 < v10 );
      }
    }
    *v4 = 0;
  }
}


// CChoreoEvent::SetCloseCaptionType  (line 2329, @0x000000000307a980, libserver.so)
// callers: CChoreoChannel::ReconcileCloseCaption, CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetCloseCaptionType(CChoreoEvent *const this, CCNameMap_t::CLOSECAPTION type)
{
  this->m_ccType = type;
}


// CChoreoEvent::GetCloseCaptionType  (line 2335, @0x000000000307a990, libserver.so)
// callers: CSceneEntity::GetSoundNameForPlayer, CSceneEntity::PrecacheScene, CSceneCache::PrecacheSceneEvent, CSceneEntity::BuildSortedSpeakEventSoundsPrefetchList, CSceneEntity::DispatchStartSpeak, CChoreoChannel::GetSortedCombinedEventList, CChoreoChannel::ReconcileCloseCaption, CChoreoScene::FileSaveEvent
CCNameMap_t::CLOSECAPTION __fastcall CChoreoEvent::GetCloseCaptionType(const CChoreoEvent *const this)
{
  return this->m_ccType;
}


// CChoreoEvent::SetCloseCaptionToken  (line 2341, @0x000000000307a9a0, libserver.so)
// calls: CUtlString::operator=
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetCloseCaptionToken(CChoreoEvent *const this, const char *token)
{
  CUtlString::operator=(&this->m_CCToken, token);
}


// CChoreoEvent::GetCloseCaptionToken  (line 2348, @0x000000000307a9c0, libserver.so)
// calls: CUtlString::Get
// callers: CChoreoChannel::GetSortedCombinedEventList, CChoreoChannel::ReconcileCloseCaption, CChoreoScene::FileSaveEvent
const char *__fastcall CChoreoEvent::GetCloseCaptionToken(const CChoreoEvent *const this)
{
  return CUtlString::Get(&this->m_CCToken);
}


// CChoreoEvent::GetPlaybackCloseCaptionToken  (line 2354, @0x000000000307a9e0, libserver.so)  // inlines: V_strncpy<int>
// calls: CUtlString::Get, _V_strncpy
// callers: CSceneEntity::GetSoundNameForPlayer, CSceneEntity::PrecacheScene, CSceneCache::PrecacheSceneEvent, CSceneEntity::BuildSortedSpeakEventSoundsPrefetchList, CSceneEntity::DispatchStartSpeak
bool __fastcall CChoreoEvent::GetPlaybackCloseCaptionToken(const CChoreoEvent *const this, char *dest, int destlen)
{
  uint8 m_ccType; // al
  bool v7; // zf
  bool result; // al
  const char *v9; // rax
  CUtlString *p_m_CCToken; // rdi
  const char *v11; // rax

  *dest = 0;
  m_ccType = this->m_ccType;
  if ( m_ccType == 0 || (v7 = m_ccType == 1, result = 0, v7) && *(this + 440) >= 0 )
  {
    v9 = CUtlString::Get(&this->m_CCToken);
    p_m_CCToken = &this->m_CCToken;
    if ( *v9 == 0 )
      p_m_CCToken = &this->m_Parameters;
    v11 = CUtlString::Get(p_m_CCToken);
    _V_strncpy(dest, v11, destlen);
    return 1;
  }
  return result;
}


// CChoreoEvent::SetUsingCombinedFile  (line 2405, @0x000000000307aa60, libserver.so)
// callers: CChoreoChannel::ReconcileCloseCaption, CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetUsingCombinedFile(CChoreoEvent *const this, bool isusing)
{
  *(this + 440) = (isusing << 7) | *(this + 440) & 0x7F;
}


// CChoreoEvent::IsUsingCombinedFile  (line 2411, @0x000000000307aa80, libserver.so)
// callers: CChoreoChannel::ReconcileCloseCaption, CChoreoScene::FileSaveEvent
bool __fastcall CChoreoEvent::IsUsingCombinedFile(const CChoreoEvent *const this)
{
  return *(this + 440) >> 7;
}


// CChoreoEvent::SetRequiredCombinedChecksum  (line 2417, @0x000000000307aa90, libserver.so)
// callers: CChoreoChannel::ReconcileCloseCaption
void __fastcall CChoreoEvent::SetRequiredCombinedChecksum(CChoreoEvent *const this, unsigned int checksum)
{
  this->m_uRequiredCombinedChecksum = checksum;
}


// CChoreoEvent::GetRequiredCombinedChecksum  (line 2423, @0x000000000307aaa0, libserver.so)
unsigned int __fastcall CChoreoEvent::GetRequiredCombinedChecksum(CChoreoEvent *const this)
{
  return this->m_uRequiredCombinedChecksum;
}


// CChoreoEvent::SetNumSlaves  (line 2429, @0x000000000307aab0, libserver.so)
// callers: CChoreoChannel::ReconcileCloseCaption
void __fastcall CChoreoEvent::SetNumSlaves(CChoreoEvent *const this, int num)
{
  this->m_nNumSlaves = num;
}


// CChoreoEvent::GetNumSlaves  (line 2436, @0x000000000307aac0, libserver.so)
// callers: CSceneEntity::PrecacheScene, CChoreoChannel::GetSortedCombinedEventList
int __fastcall CChoreoEvent::GetNumSlaves(const CChoreoEvent *const this)
{
  return this->m_nNumSlaves;
}


// CChoreoEvent::SetLastSlaveEndTime  (line 2442, @0x000000000307aad0, libserver.so)
// callers: CChoreoChannel::ReconcileCloseCaption
void __fastcall CChoreoEvent::SetLastSlaveEndTime(CChoreoEvent *const this, float a2, float t)
{
  this->m_flLastSlaveEndTime = a2;
}


// CChoreoEvent::GetLastSlaveEndTime  (line 2448, @0x000000000307aae0, libserver.so)
// callers: CSceneEntity::DispatchStartSpeak
float __fastcall CChoreoEvent::GetLastSlaveEndTime(const CChoreoEvent *const this)
{
  return this->m_flLastSlaveEndTime;
}


// CChoreoEvent::SetCloseCaptionTokenValid  (line 2454, @0x000000000307aaf0, libserver.so)
void __fastcall CChoreoEvent::SetCloseCaptionTokenValid(CChoreoEvent *const this, bool valid)
{
  *(this + 441) = valid | *(this + 441) & 0xFE;
}


// CChoreoEvent::GetCloseCaptionTokenValid  (line 2460, @0x000000000307ab10, libserver.so)
bool __fastcall CChoreoEvent::GetCloseCaptionTokenValid(const CChoreoEvent *const this)
{
  return *(this + 441) & 1;
}


// CChoreoEvent::ComputeCombinedBaseFileName  (line 2487, @0x000000000307ab20, libserver.so)  // inlines: CleanupTokenName, V_isalnum, V_strlen, V_strncpy<long unsigned int>, _V_strstr, strstr
// calls: CUtlString::Get, CChoreoScene::GetFilename, _V_strncpy, V_StripFilename, V_FixSlashes, strstr, strlen, V_snprintf, __stack_chk_fail
// strings: "scenes", "sound/combined/%s%s.wav", "sound/combined/%s%s_$gender.wav"
bool __fastcall CChoreoEvent::ComputeCombinedBaseFileName(
        const CChoreoEvent *const this,
        char *dest,
        int destlen,
        bool creategenderwildcard)
{
  const char *v8; // rax
  char v9; // r10
  char *v10; // r9
  CChoreoScene *m_pScene; // rdi
  char *v12; // rbx
  const char *Filename; // rax
  char *v14; // rax
  bool v15; // cl
  int v16; // eax
  char cleanedtoken[64]; // [rsp+10h] [rbp-270h] BYREF
  char vcdpath[520]; // [rsp+50h] [rbp-230h] BYREF
  unsigned __int64 v20; // [rsp+258h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  if ( this->m_fType != 5 || this->m_ccType != 0 || this->m_nNumSlaves == 0 || this->m_pScene == 0 )
    return 0;
  v8 = CUtlString::Get(&this->m_CCToken);
  v9 = *v8;
  v10 = cleanedtoken;
  if ( *v8 != 0 )
  {
    do
    {
      if ( ((v9 & 0xDF) - 65) <= 0x19u || (v9 - 48) <= 9u || v9 == 95 )
        *v10++ = v9;
      else
        *v10++ = 95;
      v9 = *++v8;
    }
    while ( *v8 != 0 && v10 - cleanedtoken <= 63 );
  }
  *v10 = 0;
  if ( strlen(cleanedtoken) <= 0 )
    return 0;
  m_pScene = this->m_pScene;
  v12 = vcdpath;
  Filename = CChoreoScene::GetFilename(m_pScene);
  _V_strncpy(vcdpath, Filename, 512);
  V_StripFilename(vcdpath);
  V_FixSlashes(vcdpath, 47);
  v14 = strstr(vcdpath, "scenes");
  v15 = creategenderwildcard;
  if ( v14 == 0 || (v12 = v14 + 7, v14[6] == 47) || (v12 = v14 + 6, v14 != -6LL) )
  {
    v16 = strlen(v12);
    v15 = creategenderwildcard;
    if ( (v16 - 1) <= 0x1FC )
    {
      v12[v16] = 47;
      v12[v16 + 1] = 0;
    }
  }
  if ( v15 )
    V_snprintf(dest, destlen, "sound/combined/%s%s_$gender.wav", v12, cleanedtoken);
  else
    V_snprintf(dest, destlen, "sound/combined/%s%s.wav", v12, cleanedtoken);
  return 1;
}


// CChoreoEvent::IsCombinedUsingGenderToken  (line 2545, @0x000000000307ad30, libserver.so)
// callers: CChoreoScene::FileSaveEvent
bool __fastcall CChoreoEvent::IsCombinedUsingGenderToken(const CChoreoEvent *const this)
{
  return (*(this + 441) & 2) != 0;
}


// CChoreoEvent::SetCombinedUsingGenderToken  (line 2550, @0x000000000307ad50, libserver.so)
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetCombinedUsingGenderToken(CChoreoEvent *const this, bool using_gender)
{
  *(this + 441) = (2 * using_gender) | *(this + 441) & 0xFD;
}


// CChoreoEvent::ValidateCombinedFile  (line 2556, @0x000000000307ad70, libserver.so)
int __fastcall CChoreoEvent::ValidateCombinedFile(CChoreoEvent *const this)
{
  return 0;
}


// CChoreoEvent::IsSuppressingCaptionAttenuation  (line 2562, @0x000000000307ad80, libserver.so)
// callers: CSceneEntity::DispatchStartSpeak, CChoreoScene::FileSaveEvent
bool __fastcall CChoreoEvent::IsSuppressingCaptionAttenuation(const CChoreoEvent *const this)
{
  return (*(this + 441) & 4) != 0;
}


// CChoreoEvent::SetSuppressingCaptionAttenuation  (line 2567, @0x000000000307ada0, libserver.so)
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetSuppressingCaptionAttenuation(CChoreoEvent *const this, bool suppress)
{
  *(this + 441) = (4 * suppress) | *(this + 441) & 0xFB;
}


// CChoreoEvent::ClearEventDependencies  (line 2572, @0x000000000307adc0, libserver.so)  // inlines: RemoveAll
// callers: CChoreoScene::ClearPauseEventDependencies
void __fastcall CChoreoEvent::ClearEventDependencies(CChoreoEvent *const this)
{
  this->m_Dependencies.m_Size = 0;
}


// CChoreoEvent::AddEventDependency  (line 2577, @0x000000000307edb0, libserver.so)  // inlines: AddToTail, CopyConstruct<CChoreoEvent*>, Element, Find, GrowMemory, operator[]
// calls: CUtlMemory<CChoreoEvent*, int>::Grow
// callers: CChoreoScene::EventThink, CChoreoScene::AddPauseEventDependency
void __fastcall CChoreoEvent::AddEventDependency(CChoreoEvent *const this, CChoreoEvent *other)
{
  __int64 m_Size; // rbx
  CChoreoEvent **m_pMemory; // rdx
  CChoreoEvent **v6; // rdx
  int v7; // eax
  int v8; // eax
  CChoreoEvent **v9; // rax

  m_Size = this->m_Dependencies.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_Dependencies.m_Memory.m_pMemory;
    if ( *m_pMemory == other )
      return;
    v6 = m_pMemory + 1;
    v7 = 0;
    while ( ++v7 != m_Size )
    {
      if ( *v6++ == other )
      {
        if ( v7 == -1 )
          break;
        return;
      }
    }
  }
  v8 = this->m_Dependencies.m_Size;
  if ( m_Size == this->m_Dependencies.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CChoreoEvent *,int>::Grow(&this->m_Dependencies.m_Memory, 1);
    v8 = this->m_Dependencies.m_Size;
  }
  this->m_Dependencies.m_Size = v8 + 1;
  v9 = &this->m_Dependencies.m_Memory.m_pMemory[m_Size];
  if ( v9 != 0 )
    *v9 = other;
}


// CChoreoEvent::GetEventDependencies  (line 2585, @0x000000000307ee60, libserver.so)  // inlines: AddToTail, CopyConstruct<CChoreoEvent*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CChoreoEvent*, int>::Grow
// callers: CChoreoScene::ResumeSimulation
void __fastcall CChoreoEvent::GetEventDependencies(
        CChoreoEvent *const this,
        CUtlVector<CChoreoEvent*,CUtlMemory<CChoreoEvent*,int> > *const list)
{
  int m_Size; // eax
  CChoreoEvent *v3; // rdx
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  CChoreoEvent **v7; // rax
  __int64 v8; // r13
  CChoreoEvent **v9; // r15
  int v10; // eax
  CUtlVectorBase<CChoreoEvent*,CUtlMemory<CChoreoEvent*,int> >::CAllocator *p_m_Memory; // [rsp-48h] [rbp-48h]
  CChoreoEvent *v12; // [rsp-40h] [rbp-40h]

  m_Size = this->m_Dependencies.m_Size;
  v3 = this;
  if ( m_Size > 0 )
  {
    v4 = 8LL * (m_Size - 1) + 8;
    v5 = 0;
    p_m_Memory = &list->m_Memory;
    do
    {
      v8 = list->m_Size;
      v9 = &v3->m_Dependencies.m_Memory.m_pMemory[v5 / 8];
      v10 = list->m_Size;
      if ( v8 == list->m_Memory.m_nAllocationCount )
      {
        v12 = v3;
        CUtlMemory<CChoreoEvent *,int>::Grow(p_m_Memory, 1);
        v10 = list->m_Size;
        v3 = v12;
      }
      list->m_Size = v10 + 1;
      v7 = &list->m_Memory.m_pMemory[v8];
      if ( v7 != 0 )
        *v7 = *v9;
      v5 += 8LL;
    }
    while ( v5 != v4 );
  }
}


// CChoreoEvent::SaveToBuffer  (line 2596, @0x000000000307b590, libserver.so)  // inlines: GetAbsoluteTag, GetActive, GetCloseCaptionToken, GetForceShortMovement, GetGestureSequenceDuration, GetName, GetParameters, GetParameters2, GetParameters3, GetPlayOverScript, GetRelativeTag, GetRelativeTagName, GetRelativeWavName, GetTimingTag, GetType, IsCombinedUsingGenderToken, IsLockBodyFacing, IsResumeCondition, IsUsingCombinedFile, IsUsingRelativeTag, LowLevelByteSwap<int>, LowLevelByteSwap<short unsigned int>, PeekPut, PutFloat, PutInt, PutType<int>, PutType<short unsigned int>, PutTypeBin<int>, PutTypeBin<short unsigned int>, PutTypeBin<unsigned char>, PutUnsignedChar, PutUnsignedShort, String, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<short unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::PutChar, CUtlString::Get, CUtlBuffer::PutType<int>, CUtlBuffer::PutType<float>, CCurveData::SaveToBuffer, CUtlBuffer::PutUnsignedChar, CUtlBuffer::Printf, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CChoreoEvent::SaveFlexAnimationsToBuffer
// callers: CChoreoChannel::SaveToBuffer, CChoreoScene::SaveToBinaryBuffer
// strings: "%hu"
void __fastcall CChoreoEvent::SaveToBuffer(
        CChoreoEvent *const this,
        CUtlBuffer *const buf,
        CChoreoScene *pScene,
        IChoreoStringPool *pStringPool)
{
  int (*v7)(...); // r13
  const char *v8; // rax
  int v9; // eax
  float v10; // xmm1_4
  float v11; // xmm1_4
  int (*v12)(...); // r13
  const char *v13; // rax
  int v14; // eax
  int (*v15)(...); // r13
  const char *v16; // rax
  int v17; // eax
  int (*v18)(...); // r13
  const char *v19; // rax
  int v20; // eax
  float v21; // xmm1_4
  int m_Size; // r13d
  __int64 v23; // rax
  unsigned __int64 v24; // r13
  int v25; // r14d
  CEventRelativeTag *v26; // r14
  const char *v27; // rax
  int v28; // eax
  int m_Put; // eax
  int v30; // r13d
  __int64 v31; // rax
  unsigned __int64 v32; // r13
  int v33; // r14d
  CFlexTimingTag *v34; // r14
  const char *v35; // rax
  int v36; // eax
  int v37; // eax
  unsigned __int8 *v38; // rdx
  int v39; // r13d
  float v40; // xmm1_4
  __int64 v41; // rax
  unsigned __int64 v42; // r13
  float v43; // xmm0_4
  int v44; // r14d
  CEventAbsoluteTag *v45; // r14
  const char *v46; // rax
  int v47; // eax
  int v48; // eax
  unsigned __int8 *v49; // rdx
  int v50; // eax
  int m_fType; // eax
  unsigned __int8 *v52; // rdx
  unsigned __int8 *v53; // rdx
  int (*v54)(...); // r13
  const char *v55; // rax
  int v56; // eax
  int (*v57)(...); // r13
  const char *v58; // rax
  int v59; // eax
  float m_flGestureSequenceDuration; // xmm0_4
  int (*v61)(...); // r13
  const char *v62; // rax
  int v63; // eax
  char v64; // si
  char v65; // al
  float v66; // xmm1_4
  int tagtype; // [rsp+4h] [rbp-6Ch]
  __int64 v68; // [rsp+8h] [rbp-68h]
  __int64 v69; // [rsp+8h] [rbp-68h]
  __int64 v70; // [rsp+8h] [rbp-68h]
  int (*v71)(...); // [rsp+10h] [rbp-60h]
  int v72; // [rsp+10h] [rbp-60h]
  int (*v73)(...); // [rsp+10h] [rbp-60h]
  int v74; // [rsp+10h] [rbp-60h]
  CUtlVector<CEventAbsoluteTag,CUtlMemory<CEventAbsoluteTag,int> > *m_AbsoluteTags; // [rsp+10h] [rbp-60h]
  int (*v76)(...); // [rsp+18h] [rbp-58h]
  int v77; // [rsp+18h] [rbp-58h]
  __int16 v78; // [rsp+2Eh] [rbp-42h]
  int v79; // [rsp+30h] [rbp-40h]
  int v80; // [rsp+34h] [rbp-3Ch]
  int v81; // [rsp+38h] [rbp-38h]
  int v82; // [rsp+3Ch] [rbp-34h]
  int v83; // [rsp+3Ch] [rbp-34h]
  int v84; // [rsp+3Ch] [rbp-34h]
  __int16 v85; // [rsp+3Ch] [rbp-34h]

  CUtlBuffer::PutChar(buf, this->m_fType);
  v7 = *pStringPool->_vptr_IChoreoStringPool;
  v8 = CUtlString::Get(&this->m_Name);
  v9 = v7(pStringPool, v8);
  CUtlBuffer::PutType<int>(buf, v9);
  CUtlBuffer::PutType<float>(buf, this->m_flStartTime, v10);
  CUtlBuffer::PutType<float>(buf, this->m_flEndTime, v11);
  v12 = *pStringPool->_vptr_IChoreoStringPool;
  v13 = CUtlString::Get(&this->m_Parameters);
  v14 = v12(pStringPool, v13);
  CUtlBuffer::PutType<int>(buf, v14);
  v15 = *pStringPool->_vptr_IChoreoStringPool;
  v16 = CUtlString::Get(&this->m_Parameters2);
  v17 = v15(pStringPool, v16);
  CUtlBuffer::PutType<int>(buf, v17);
  v18 = *pStringPool->_vptr_IChoreoStringPool;
  v19 = CUtlString::Get(&this->m_Parameters3);
  v20 = v18(pStringPool, v19);
  CUtlBuffer::PutType<int>(buf, v20);
  CCurveData::SaveToBuffer(&this->m_Ramp, buf, pStringPool);
  CUtlBuffer::PutUnsignedChar(
    buf,
    (32 * (*(this + 441) >> 6)) & 0x20
  | (16 * (*(this + 441) >> 3)) & 0x10
  | (8 * (*(this + 441) >> 5)) & 8
  | (4 * *(this + 440)) & 4
  | ((*(this + 440) & 2) != 0)
  | (2 * (*(this + 440) >> 5)) & 2);
  CUtlBuffer::PutType<float>(buf, this->m_flDistanceToTarget, v21);
  m_Size = this->m_RelativeTags.m_Size;
  CUtlBuffer::PutUnsignedChar(buf, m_Size);
  if ( m_Size > 0 )
  {
    v23 = 3LL * (m_Size - 1) + 3;
    v24 = 0;
    v68 = 8 * v23;
    while ( 1 )
    {
      v26 = &this->m_RelativeTags.m_Memory.m_pMemory[v24 / 0x18];
      v71 = *pStringPool->_vptr_IChoreoStringPool;
      v27 = CUtlString::Get(&v26->m_Name);
      v28 = v71(pStringPool, v27);
      if ( (buf->m_Flags & 1) != 0 )
      {
        CUtlBuffer::Printf(buf, "%d", v28);
      }
      else
      {
        v79 = v28;
        v72 = v28;
        if ( CUtlBuffer::CheckPut(buf, 4) )
        {
          if ( (*&buf->m_Byteswap & 1) != 0 )
          {
            m_Put = buf->m_Put;
            v38 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
            if ( v38 != 0 )
            {
              LOBYTE(v82) = HIBYTE(v79);
              BYTE1(v82) = BYTE2(v79);
              BYTE2(v82) = BYTE1(v79);
              HIBYTE(v82) = v79;
              *v38 = v82;
              m_Put = buf->m_Put;
            }
          }
          else
          {
            *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v72;
            m_Put = buf->m_Put;
          }
          buf->m_Put = m_Put + 4;
          CUtlBuffer::AddNullTermination(buf);
        }
      }
      v25 = (255.0 * v26->m_flPercentage);
      if ( (buf->m_Flags & 1) != 0 )
      {
        CUtlBuffer::Printf(buf, "%hu", v25);
LABEL_6:
        v24 += 24LL;
        if ( v24 == v68 )
          break;
      }
      else
      {
        if ( !CUtlBuffer::CheckPut(buf, 1) )
          goto LABEL_6;
        v24 += 24LL;
        buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v25;
        ++buf->m_Put;
        CUtlBuffer::AddNullTermination(buf);
        if ( v24 == v68 )
          break;
      }
    }
  }
  v30 = this->m_TimingTags.m_Size;
  CUtlBuffer::PutUnsignedChar(buf, v30);
  if ( v30 > 0 )
  {
    v31 = (v30 - 1) + 1LL;
    v32 = 0;
    v69 = 32 * v31;
    while ( 1 )
    {
      v34 = &this->m_TimingTags.m_Memory.m_pMemory[v32 / 0x20];
      v73 = *pStringPool->_vptr_IChoreoStringPool;
      v35 = CUtlString::Get(&v34->m_Name);
      v36 = v73(pStringPool, v35);
      if ( (buf->m_Flags & 1) != 0 )
      {
        CUtlBuffer::Printf(buf, "%d", v36);
      }
      else
      {
        v80 = v36;
        v74 = v36;
        if ( CUtlBuffer::CheckPut(buf, 4) )
        {
          if ( (*&buf->m_Byteswap & 1) != 0 )
          {
            v37 = buf->m_Put;
            v49 = &buf->m_Memory.m_pMemory[v37 - buf->m_nOffset];
            if ( v49 != 0 )
            {
              LOBYTE(v83) = HIBYTE(v80);
              BYTE1(v83) = BYTE2(v80);
              BYTE2(v83) = BYTE1(v80);
              HIBYTE(v83) = v80;
              *v49 = v83;
              v37 = buf->m_Put;
            }
          }
          else
          {
            *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v74;
            v37 = buf->m_Put;
          }
          buf->m_Put = v37 + 4;
          CUtlBuffer::AddNullTermination(buf);
        }
      }
      v33 = (255.0 * v34->m_flPercentage);
      if ( (buf->m_Flags & 1) != 0 )
      {
        CUtlBuffer::Printf(buf, "%hu", v33);
LABEL_19:
        v32 += 32LL;
        if ( v32 == v69 )
          break;
      }
      else
      {
        if ( !CUtlBuffer::CheckPut(buf, 1) )
          goto LABEL_19;
        v32 += 32LL;
        buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v33;
        ++buf->m_Put;
        CUtlBuffer::AddNullTermination(buf);
        if ( v32 == v69 )
          break;
      }
    }
  }
  tagtype = 0;
  m_AbsoluteTags = this->m_AbsoluteTags;
  do
  {
    v39 = m_AbsoluteTags->m_Size;
    CUtlBuffer::PutUnsignedChar(buf, m_AbsoluteTags->m_Size);
    if ( v39 > 0 )
    {
      v41 = 3LL * (v39 - 1) + 3;
      v42 = 0;
      v70 = 8 * v41;
      while ( 1 )
      {
        v45 = &m_AbsoluteTags->m_Memory.m_pMemory[v42 / 0x18];
        v76 = *pStringPool->_vptr_IChoreoStringPool;
        v46 = CUtlString::Get(&v45->m_Name);
        v47 = v76(pStringPool, v46);
        if ( (buf->m_Flags & 1) != 0 )
        {
          CUtlBuffer::Printf(buf, "%d", v47);
        }
        else
        {
          v81 = v47;
          v77 = v47;
          if ( CUtlBuffer::CheckPut(buf, 4) )
          {
            if ( (*&buf->m_Byteswap & 1) != 0 )
            {
              v48 = buf->m_Put;
              v52 = &buf->m_Memory.m_pMemory[v48 - buf->m_nOffset];
              if ( v52 != 0 )
              {
                LOBYTE(v84) = HIBYTE(v81);
                BYTE1(v84) = BYTE2(v81);
                BYTE2(v84) = BYTE1(v81);
                HIBYTE(v84) = v81;
                *v52 = v84;
                v48 = buf->m_Put;
              }
            }
            else
            {
              *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v77;
              v48 = buf->m_Put;
            }
            buf->m_Put = v48 + 4;
            CUtlBuffer::AddNullTermination(buf);
          }
        }
        v43 = 4096.0 * v45->m_flPercentage;
        v44 = v43;
        if ( (buf->m_Flags & 1) != 0 )
        {
          CUtlBuffer::Printf(buf, "%hu", v44);
LABEL_35:
          v42 += 24LL;
          if ( v42 == v70 )
            break;
        }
        else
        {
          v78 = v43;
          if ( !CUtlBuffer::CheckPut(buf, 2) )
            goto LABEL_35;
          if ( (*&buf->m_Byteswap & 1) != 0 )
          {
            v50 = buf->m_Put;
            v53 = &buf->m_Memory.m_pMemory[v50 - buf->m_nOffset];
            if ( v53 != 0 )
            {
              LOBYTE(v85) = HIBYTE(v78);
              HIBYTE(v85) = v78;
              *v53 = v85;
              v50 = buf->m_Put;
            }
          }
          else
          {
            *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v44;
            v50 = buf->m_Put;
          }
          v42 += 24LL;
          buf->m_Put = v50 + 2;
          CUtlBuffer::AddNullTermination(buf);
          if ( v42 == v70 )
            break;
        }
      }
    }
    ++tagtype;
    ++m_AbsoluteTags;
  }
  while ( tagtype != 2 );
  if ( this->m_fType == 6 )
  {
    m_flGestureSequenceDuration = this->m_flGestureSequenceDuration;
    if ( m_flGestureSequenceDuration == 0.0 )
    {
      (*(this->_vptr_CChoreoObjectBase + 8))(this);
      m_flGestureSequenceDuration = -1.0;
    }
    CUtlBuffer::PutType<float>(buf, m_flGestureSequenceDuration, v40);
  }
  CUtlBuffer::PutChar(buf, (*(this + 440) & 4) != 0);
  if ( (*(this + 440) & 4) != 0 )
  {
    v54 = *pStringPool->_vptr_IChoreoStringPool;
    v55 = CUtlString::Get(&this->m_TagName);
    v56 = v54(pStringPool, v55);
    CUtlBuffer::PutType<int>(buf, v56);
    v57 = *pStringPool->_vptr_IChoreoStringPool;
    v58 = CUtlString::Get(&this->m_TagWavName);
    v59 = v57(pStringPool, v58);
    CUtlBuffer::PutType<int>(buf, v59);
  }
  CChoreoEvent::SaveFlexAnimationsToBuffer(this, buf, pStringPool);
  m_fType = this->m_fType;
  if ( m_fType == 12 )
  {
    CUtlBuffer::PutChar(buf, this->m_nNumLoops);
    m_fType = this->m_fType;
  }
  if ( m_fType == 5 )
  {
    CUtlBuffer::PutChar(buf, this->m_ccType);
    v61 = *pStringPool->_vptr_IChoreoStringPool;
    v62 = CUtlString::Get(&this->m_CCToken);
    v63 = v61(pStringPool, v62);
    CUtlBuffer::PutType<int>(buf, v63);
    v64 = 0;
    if ( this->m_ccType != 2 )
      v64 = *(this + 440) >> 7;
    v65 = *(this + 441);
    if ( (v65 & 2) != 0 )
      v64 |= 2u;
    if ( (v65 & 4) != 0 )
      v64 |= 4u;
    if ( v65 < 0 )
      v64 |= 8u;
    CUtlBuffer::PutChar(buf, v64);
    CUtlBuffer::PutType<float>(buf, this->m_flSoundStartDelay, v66);
  }
}


// CChoreoEvent::RestoreFromBuffer  (line 2736, @0x000000000307e290, libserver.so)  // inlines: GetChar, GetFloat, GetInt, GetType, GetType<int>, GetType<short unsigned int>, GetTypeBin<char>, GetTypeBin<int>, GetTypeBin<short unsigned int>, GetTypeBin<unsigned char>, GetTypeText<int>, GetTypeText<short unsigned int>, GetUnsignedChar, GetUnsignedShort, LowLevelByteSwap<int>, LowLevelByteSwap<short unsigned int>, PeekGet, SetActive, SetCloseCaptionToken, SetCloseCaptionType, SetCombinedUsingGenderToken, SetDistanceToTarget, SetFixedLength, SetForceShortMovement, SetGestureSequenceDuration, SetHardStopSpeakEvent, SetLockBodyFacing, SetLoopCount, SetName, SetParameters, SetParameters2, SetParameters3, SetPlayOverScript, SetResumeCondition, SetSoundStartDelay, SetStartTime, SetSuppressingCaptionAttenuation, SetType, SetUsingCombinedFile, StringToNumber<int>, StringToNumber<short unsigned int>, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<short unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckGet, CUtlBuffer::GetType<int>, CUtlString::operator=, CUtlBuffer::GetType<float>, CChoreoEvent::SetEndTime, CUtlString::TrimRight, CCurveData::RestoreFromBuffer, CUtlBuffer::GetUnsignedChar, CUtlBuffer::CheckArbitraryPeekGet, CChoreoEvent::AddRelativeTag, V_strtoui64, CChoreoEvent::AddTimingTag (17 total)
// callers: CChoreoChannel::RestoreFromBuffer, CChoreoScene::RestoreFromBinaryBuffer
// strings: "\t\r\n "
bool __fastcall CChoreoEvent::RestoreFromBuffer(
        CChoreoEvent *const this,
        SceneBinaryVersion_t nRestoreVersion,
        CUtlBuffer *const buf,
        CChoreoScene *pScene,
        IChoreoStringPool *pStringPool)
{
  void (__fastcall *v8)(IChoreoStringPool *, _QWORD, char *, __int64); // r15
  float m_flEndTime; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  void (__fastcall *v12)(IChoreoStringPool *, _QWORD, char *, __int64); // r15
  void (__fastcall *v13)(IChoreoStringPool *, _QWORD, char *, __int64); // r15
  void (__fastcall *v14)(IChoreoStringPool *, _QWORD, char *, __int64); // r15
  bool v15; // r13
  int v17; // r15d
  unsigned __int8 UnsignedChar; // al
  unsigned __int8 v19; // al
  bool v20; // al
  float v21; // xmm1_4
  __m128i v22; // xmm0
  bool v23; // al
  int v24; // edx
  int v25; // eax
  int v26; // edx
  unsigned __int8 v27; // al
  int v28; // r15d
  unsigned __int8 v29; // al
  bool v30; // al
  __m128i v31; // xmm0
  bool v32; // al
  int v33; // edx
  int v34; // eax
  int v35; // edx
  unsigned __int8 v36; // al
  int v37; // r15d
  unsigned __int8 v38; // al
  bool v39; // al
  __int64 v40; // rsi
  bool v41; // al
  __m128i v42; // xmm0
  bool v43; // al
  int v44; // edx
  bool v45; // al
  int v46; // eax
  unsigned __int16 v47; // dx
  unsigned __int16 v48; // ax
  int m_fType; // eax
  bool v50; // al
  uint8 v51; // dl
  int v52; // edx
  int v53; // eax
  bool v54; // al
  unsigned __int8 v55; // dl
  unsigned int *v56; // rax
  unsigned int *v57; // rdx
  int m_Get; // eax
  int v59; // edx
  uint8 v60; // al
  int v61; // edx
  int v62; // eax
  void (__fastcall *v63)(IChoreoStringPool *, _QWORD, char *, __int64); // r15
  bool v64; // al
  int v65; // edx
  int v66; // edx
  int v67; // eax
  int v68; // edx
  int v69; // eax
  int v71; // [rsp+10h] [rbp-B70h]
  int num; // [rsp+18h] [rbp-B68h]
  int tagtype; // [rsp+1Ch] [rbp-B64h]
  int tagtypea; // [rsp+1Ch] [rbp-B64h]
  CChoreoEvent::AbsTagType tagtypeb; // [rsp+1Ch] [rbp-B64h]
  void (__fastcall *v76)(IChoreoStringPool *, _QWORD, char *, __int64); // [rsp+20h] [rbp-B60h]
  int v77; // [rsp+20h] [rbp-B60h]
  void (__fastcall *v78)(IChoreoStringPool *, _QWORD, char *, __int64); // [rsp+20h] [rbp-B60h]
  int v79; // [rsp+20h] [rbp-B60h]
  void (__fastcall *v80)(IChoreoStringPool *, __int64, char *, __int64); // [rsp+20h] [rbp-B60h]
  int v81; // [rsp+20h] [rbp-B60h]
  void (__fastcall *v82)(IChoreoStringPool *, _QWORD, char *, __int64); // [rsp+20h] [rbp-B60h]
  void (__fastcall *v83)(IChoreoStringPool *, _QWORD, char *, __int64); // [rsp+20h] [rbp-B60h]
  unsigned int v84; // [rsp+30h] [rbp-B50h] BYREF
  int nIncrement; // [rsp+34h] [rbp-B4Ch] BYREF
  int dest[2]; // [rsp+38h] [rbp-B48h] BYREF
  char sz[256]; // [rsp+40h] [rbp-B40h] BYREF
  char tagname[256]; // [rsp+140h] [rbp-A40h] BYREF
  char cctoken[256]; // [rsp+240h] [rbp-940h] BYREF
  char params[2056]; // [rsp+340h] [rbp-840h] BYREF
  unsigned __int64 v91; // [rsp+B48h] [rbp-38h]

  v91 = __readfsqword(0x28u);
  if ( CUtlBuffer::CheckGet(buf, 1) )
  {
    m_Get = buf->m_Get;
    v59 = m_Get + 1;
    v60 = buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
    buf->m_Get = v59;
    this->m_fType = v60;
    if ( v60 == 11 || v60 == 5 )
    {
      *(this + 440) |= 1u;
      goto LABEL_4;
    }
  }
  else
  {
    this->m_fType = 0;
  }
  *(this + 440) &= ~1u;
LABEL_4:
  v8 = *(pStringPool->_vptr_IChoreoStringPool + 1);
  CUtlBuffer::GetType<int>(buf, dest);
  v8(pStringPool, dest[0], sz, 256);
  CUtlString::operator=(&this->m_Name, sz);
  CUtlBuffer::GetType<float>(buf, dest);
  m_flEndTime = this->m_flEndTime;
  v10 = *dest;
  LODWORD(this->m_flStartTime) = dest[0];
  if ( m_flEndTime != -1.0 && v10 > m_flEndTime )
    this->m_flEndTime = v10;
  CUtlBuffer::GetType<float>(buf, dest);
  CChoreoEvent::SetEndTime(this, *dest, v11);
  v12 = *(pStringPool->_vptr_IChoreoStringPool + 1);
  CUtlBuffer::GetType<int>(buf, dest);
  v12(pStringPool, dest[0], params, 2048);
  CUtlString::operator=(&this->m_Parameters, params);
  v13 = *(pStringPool->_vptr_IChoreoStringPool + 1);
  CUtlBuffer::GetType<int>(buf, dest);
  v13(pStringPool, dest[0], params, 2048);
  CUtlString::operator=(&this->m_Parameters2, params);
  CUtlString::TrimRight(&this->m_Parameters2, "\t\r\n ");
  v14 = *(pStringPool->_vptr_IChoreoStringPool + 1);
  CUtlBuffer::GetType<int>(buf, dest);
  v14(pStringPool, dest[0], params, 2048);
  CUtlString::operator=(&this->m_Parameters3, params);
  CUtlString::TrimRight(&this->m_Parameters3, "\t\r\n ");
  if ( !CCurveData::RestoreFromBuffer(&this->m_Ramp, nRestoreVersion, buf, pStringPool) )
    return 0;
  v17 = 0;
  UnsignedChar = CUtlBuffer::GetUnsignedChar(buf);
  *(this + 440) = ((UnsignedChar & 4) != 0)
                | (16 * UnsignedChar) & 0x20
                | (2 * (UnsignedChar & 1))
                | *(this + 440) & 0xDC;
  *(this + 441) = (2 * UnsignedChar) & 0x40 | (UnsignedChar >> 1) & 8 | (4 * UnsignedChar) & 0x20 | *(this + 441) & 0x97;
  CUtlBuffer::GetType<float>(buf, dest);
  LODWORD(this->m_flDistanceToTarget) = dest[0];
  v19 = CUtlBuffer::GetUnsignedChar(buf);
  tagtype = v19;
  if ( v19 != 0 )
  {
    do
    {
      v76 = *(pStringPool->_vptr_IChoreoStringPool + 1);
      CUtlBuffer::GetType<int>(buf, dest);
      v76(pStringPool, dest[0], cctoken, 256);
      if ( (buf->m_Flags & 1) != 0 )
      {
        nIncrement = 128;
        v20 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
        v22 = 0;
        if ( v20 )
        {
          *dest = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
          v77 = dest[0];
          v27 = V_strtoui64(*dest, dest, 10);
          if ( dest[0] != v77 )
            buf->m_Get += dest[0] - v77;
          *v22.m128i_i32 = v27 / 255.0;
        }
      }
      else
      {
        v23 = CUtlBuffer::CheckGet(buf, 1);
        v22 = 0;
        if ( v23 )
        {
          v24 = buf->m_Get;
          v25 = v24 + 1;
          v26 = buf->m_Memory.m_pMemory[v24 - buf->m_nOffset];
          buf->m_Get = v25;
          *v22.m128i_i32 = v26 / 255.0;
        }
      }
      ++v17;
      CChoreoEvent::AddRelativeTag(this, cctoken, v22, v21);
    }
    while ( tagtype > v17 );
  }
  v28 = 0;
  v29 = CUtlBuffer::GetUnsignedChar(buf);
  tagtypea = v29;
  if ( v29 != 0 )
  {
    do
    {
      v78 = *(pStringPool->_vptr_IChoreoStringPool + 1);
      CUtlBuffer::GetType<int>(buf, dest);
      v78(pStringPool, dest[0], cctoken, 256);
      if ( (buf->m_Flags & 1) != 0 )
      {
        nIncrement = 128;
        v30 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
        v31 = 0;
        if ( v30 )
        {
          *dest = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
          v79 = dest[0];
          v36 = V_strtoui64(*dest, dest, 10);
          if ( dest[0] != v79 )
            buf->m_Get += dest[0] - v79;
          *v31.m128i_i32 = v36 / 255.0;
        }
      }
      else
      {
        v32 = CUtlBuffer::CheckGet(buf, 1);
        v31 = 0;
        if ( v32 )
        {
          v33 = buf->m_Get;
          v34 = v33 + 1;
          v35 = buf->m_Memory.m_pMemory[v33 - buf->m_nOffset];
          buf->m_Get = v34;
          *v31.m128i_i32 = v35 / 255.0;
        }
      }
      CChoreoEvent::AddTimingTag(this, cctoken, v31, 0);
      ++v28;
    }
    while ( tagtypea > v28 );
  }
  for ( tagtypeb = PLAYBACK; tagtypeb != NUM_ABS_TAG_TYPES; ++tagtypeb )
  {
    v37 = 0;
    v38 = CUtlBuffer::GetUnsignedChar(buf);
    num = v38;
    if ( v38 != 0 )
    {
      do
      {
        v80 = *(pStringPool->_vptr_IChoreoStringPool + 1);
        if ( (buf->m_Flags & 1) != 0 )
        {
          nIncrement = 128;
          v39 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
          v40 = 0;
          if ( v39 )
          {
            *dest = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
            v71 = dest[0];
            v84 = V_strtoi64(*dest, dest, 10);
            v40 = v84;
            if ( dest[0] != v71 )
              buf->m_Get += dest[0] - v71;
          }
        }
        else
        {
          v43 = CUtlBuffer::CheckGet(buf, 4);
          v40 = 0;
          if ( v43 )
          {
            if ( (*&buf->m_Byteswap & 1) != 0 )
            {
              v44 = buf->m_Get;
              v56 = &buf->m_Memory.m_pMemory[v44 - buf->m_nOffset];
              if ( v56 == 0 )
                v56 = &v84;
              dest[0] = v84;
              LOBYTE(dest[0]) = *(v56 + 3);
              BYTE1(dest[0]) = *(v56 + 2);
              BYTE2(dest[0]) = *(v56 + 1);
              HIBYTE(dest[0]) = *v56;
              v40 = dest[0];
            }
            else
            {
              v44 = buf->m_Get;
              v40 = *&buf->m_Memory.m_pMemory[v44 - buf->m_nOffset];
            }
            buf->m_Get = v44 + 4;
          }
        }
        v80(pStringPool, v40, cctoken, 256);
        if ( (buf->m_Flags & 1) != 0 )
        {
          nIncrement = 128;
          v41 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
          v42 = 0;
          if ( v41 )
          {
            *dest = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
            v81 = dest[0];
            v48 = V_strtoui64(*dest, dest, 10);
            LOWORD(v84) = v48;
            if ( dest[0] != v81 )
              buf->m_Get += dest[0] - v81;
            *v42.m128i_i32 = v48 * 0.00024414062;
          }
        }
        else
        {
          v45 = CUtlBuffer::CheckGet(buf, 2);
          v42 = 0;
          if ( v45 )
          {
            if ( (*&buf->m_Byteswap & 1) != 0 )
            {
              v46 = buf->m_Get;
              v57 = &buf->m_Memory.m_pMemory[v46 - buf->m_nOffset];
              if ( v57 == 0 )
                v57 = &v84;
              LOWORD(dest[0]) = v84;
              LOBYTE(dest[0]) = *(v57 + 1);
              BYTE1(dest[0]) = *v57;
              v47 = dest[0];
            }
            else
            {
              v46 = buf->m_Get;
              v47 = *&buf->m_Memory.m_pMemory[v46 - buf->m_nOffset];
            }
            buf->m_Get = v46 + 2;
            *v42.m128i_i32 = v47 * 0.00024414062;
          }
        }
        ++v37;
        CChoreoEvent::AddAbsoluteTag(this, tagtypeb, cctoken, v42);
      }
      while ( num > v37 );
    }
  }
  if ( this->m_fType == 6 )
  {
    CUtlBuffer::GetType<float>(buf, dest);
    if ( *dest != -1.0 )
      LODWORD(this->m_flGestureSequenceDuration) = dest[0];
  }
  if ( CUtlBuffer::CheckGet(buf, 1) )
  {
    v61 = buf->m_Get;
    v62 = v61 + 1;
    LOBYTE(v61) = buf->m_Memory.m_pMemory[v61 - buf->m_nOffset];
    buf->m_Get = v62;
    if ( v61 == 1 )
    {
      v63 = *(pStringPool->_vptr_IChoreoStringPool + 1);
      CUtlBuffer::GetType<int>(buf, dest);
      v63(pStringPool, dest[0], tagname, 256);
      v83 = *(pStringPool->_vptr_IChoreoStringPool + 1);
      CUtlBuffer::GetType<int>(buf, dest);
      v83(pStringPool, dest[0], cctoken, 256);
      CChoreoEvent::SetUsingRelativeTag(this, 1, tagname, cctoken);
    }
  }
  v15 = CChoreoEvent::RestoreFlexAnimationsFromBuffer(this, nRestoreVersion, buf, pStringPool);
  if ( !v15 )
    return 0;
  m_fType = this->m_fType;
  if ( m_fType == 12 )
  {
    v64 = CUtlBuffer::CheckGet(buf, 1);
    v65 = 0;
    if ( v64 )
    {
      v66 = buf->m_Get;
      v67 = v66 + 1;
      v65 = buf->m_Memory.m_pMemory[v66 - buf->m_nOffset];
      buf->m_Get = v67;
      if ( v65 < 0 )
        v65 = -1;
    }
    this->m_nNumLoops = v65;
    m_fType = this->m_fType;
  }
  if ( m_fType == 5 )
  {
    v50 = CUtlBuffer::CheckGet(buf, 1);
    v51 = 0;
    if ( v50 )
    {
      v52 = buf->m_Get;
      v53 = v52 + 1;
      v51 = buf->m_Memory.m_pMemory[v52 - buf->m_nOffset];
      buf->m_Get = v53;
    }
    this->m_ccType = v51;
    v82 = *(pStringPool->_vptr_IChoreoStringPool + 1);
    CUtlBuffer::GetType<int>(buf, dest);
    v82(pStringPool, dest[0], cctoken, 256);
    CUtlString::operator=(&this->m_CCToken, cctoken);
    v54 = CUtlBuffer::CheckGet(buf, 1);
    v55 = 0;
    if ( v54 )
    {
      v68 = buf->m_Get;
      v69 = v68 + 1;
      v55 = buf->m_Memory.m_pMemory[v68 - buf->m_nOffset];
      buf->m_Get = v69;
      if ( (v55 & 1) != 0 )
        *(this + 440) |= 0x80u;
      if ( (v55 & 2) != 0 )
        *(this + 441) |= 2u;
      if ( (v55 & 4) != 0 )
        *(this + 441) |= 4u;
    }
    if ( nRestoreVersion > 4 )
    {
      if ( (v55 & 8) != 0 )
        *(this + 441) |= 0x80u;
      CUtlBuffer::GetType<float>(buf, dest);
      LODWORD(this->m_flSoundStartDelay) = dest[0];
    }
  }
  return v15;
}


// CChoreoEvent::SaveFlexAnimationsToBuffer  (line 2867, @0x000000000307add0, libserver.so)  // inlines: GetFlexControllerName, GetMax, GetMin, IsComboType, IsTrackActive, LowLevelByteSwap<float>, LowLevelByteSwap<int>, PeekPut, PutFloat, PutInt, PutType<float>, PutType<int>, PutType<short unsigned int>, PutTypeBin<float>, PutTypeBin<int>, PutTypeBin<unsigned char>, PutUnsignedChar, PutUnsignedShort, String, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::PutUnsignedChar, CUtlBuffer::Printf, CCurveData::SaveToBuffer, CChoreoEvent::GetFlexAnimationTrack, CUtlString::Get, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CChoreoEvent::SaveToBuffer
// strings: "%hu"
void __fastcall CChoreoEvent::SaveFlexAnimationsToBuffer(
        CChoreoEvent *const this,
        CUtlBuffer *const buf,
        IChoreoStringPool *pStringPool)
{
  int v4; // r13d
  int m_Size; // r15d
  int v7; // eax
  CFlexAnimationTrack *FlexAnimationTrack; // r12
  int (*v9)(...); // r15
  const char *v10; // rax
  int v11; // eax
  int m_Put; // eax
  int v13; // eax
  int v14; // eax
  unsigned __int8 *v15; // rdx
  unsigned __int8 *v16; // rdx
  unsigned __int8 *v17; // rdx
  int flags; // [rsp+8h] [rbp-48h]
  unsigned __int8 flagsa; // [rsp+8h] [rbp-48h]
  int numFlexAnimationTracks; // [rsp+Ch] [rbp-44h]
  int v22; // [rsp+10h] [rbp-40h]
  float m_flMin; // [rsp+14h] [rbp-3Ch]
  float m_flMax; // [rsp+18h] [rbp-38h]
  int v25; // [rsp+1Ch] [rbp-34h]
  int v26; // [rsp+1Ch] [rbp-34h]
  int v27; // [rsp+1Ch] [rbp-34h]

  v4 = 0;
  m_Size = this->m_FlexAnimationTracks.m_Size;
  numFlexAnimationTracks = m_Size;
  CUtlBuffer::PutUnsignedChar(buf, m_Size);
  if ( m_Size > 0 )
  {
    do
    {
      while ( 1 )
      {
        FlexAnimationTrack = CChoreoEvent::GetFlexAnimationTrack(this, v4);
        v9 = *pStringPool->_vptr_IChoreoStringPool;
        v10 = CUtlString::Get(&FlexAnimationTrack->m_sControllerName);
        v11 = v9(pStringPool, v10);
        if ( (buf->m_Flags & 1) != 0 )
        {
          CUtlBuffer::Printf(buf, "%d", v11);
        }
        else
        {
          v22 = v11;
          flags = v11;
          if ( CUtlBuffer::CheckPut(buf, 4) )
          {
            if ( (*&buf->m_Byteswap & 1) != 0 )
            {
              m_Put = buf->m_Put;
              v15 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
              if ( v15 != 0 )
              {
                LOBYTE(v25) = HIBYTE(v22);
                BYTE1(v25) = BYTE2(v22);
                BYTE2(v25) = BYTE1(v22);
                HIBYTE(v25) = v22;
                *v15 = v25;
                m_Put = buf->m_Put;
              }
            }
            else
            {
              *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = flags;
              m_Put = buf->m_Put;
            }
            buf->m_Put = m_Put + 4;
            CUtlBuffer::AddNullTermination(buf);
          }
        }
        v7 = *(FlexAnimationTrack + 192) & 1;
        if ( (buf->m_Flags & 1) != 0 )
        {
          CUtlBuffer::Printf(buf, "%hu", v7 | (2 * (*(FlexAnimationTrack + 192) >> 1)) & 2);
        }
        else
        {
          flagsa = v7 | (2 * (*(FlexAnimationTrack + 192) >> 1)) & 2;
          if ( CUtlBuffer::CheckPut(buf, 1) )
          {
            buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = flagsa;
            ++buf->m_Put;
            CUtlBuffer::AddNullTermination(buf);
          }
        }
        if ( (buf->m_Flags & 1) != 0 )
        {
          CUtlBuffer::Printf(buf, "%f", FlexAnimationTrack->m_flMin);
        }
        else
        {
          m_flMin = FlexAnimationTrack->m_flMin;
          if ( CUtlBuffer::CheckPut(buf, 4) )
          {
            if ( (*&buf->m_Byteswap & 1) != 0 )
            {
              v14 = buf->m_Put;
              v17 = &buf->m_Memory.m_pMemory[v14 - buf->m_nOffset];
              if ( v17 != 0 )
              {
                LOBYTE(v27) = HIBYTE(m_flMin);
                BYTE1(v27) = BYTE2(m_flMin);
                BYTE2(v27) = BYTE1(m_flMin);
                HIBYTE(v27) = LOBYTE(m_flMin);
                *v17 = v27;
                v14 = buf->m_Put;
              }
            }
            else
            {
              *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_flMin;
              v14 = buf->m_Put;
            }
            buf->m_Put = v14 + 4;
            CUtlBuffer::AddNullTermination(buf);
          }
        }
        if ( (buf->m_Flags & 1) != 0 )
        {
          CUtlBuffer::Printf(buf, "%f", FlexAnimationTrack->m_flMax);
        }
        else
        {
          m_flMax = FlexAnimationTrack->m_flMax;
          if ( CUtlBuffer::CheckPut(buf, 4) )
          {
            if ( (*&buf->m_Byteswap & 1) != 0 )
            {
              v13 = buf->m_Put;
              v16 = &buf->m_Memory.m_pMemory[v13 - buf->m_nOffset];
              if ( v16 != 0 )
              {
                LOBYTE(v26) = HIBYTE(m_flMax);
                BYTE1(v26) = BYTE2(m_flMax);
                BYTE2(v26) = BYTE1(m_flMax);
                HIBYTE(v26) = LOBYTE(m_flMax);
                *v16 = v26;
                v13 = buf->m_Put;
              }
            }
            else
            {
              *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_flMax;
              v13 = buf->m_Put;
            }
            buf->m_Put = v13 + 4;
            CUtlBuffer::AddNullTermination(buf);
          }
        }
        CCurveData::SaveToBuffer(FlexAnimationTrack->m_Ramp, buf, pStringPool);
        if ( (*(FlexAnimationTrack + 192) & 2) != 0 )
          break;
        if ( ++v4 == numFlexAnimationTracks )
          return;
      }
      CCurveData::SaveToBuffer(&FlexAnimationTrack->m_Ramp[1], buf, pStringPool);
      ++v4;
    }
    while ( v4 != numFlexAnimationTracks );
  }
}


// CChoreoEvent::RestoreFlexAnimationsFromBuffer  (line 2899, @0x000000000307d8f0, libserver.so)  // inlines: CExpressionSample, GetFloat, GetInt, GetShort, GetType<float>, GetType<short int>, GetType<short unsigned int>, GetTypeBin<float>, GetTypeBin<short int>, GetTypeBin<short unsigned int>, GetTypeBin<unsigned char>, GetTypeText<float>, GetTypeText<short int>, GetTypeText<short unsigned int>, GetUnsignedChar, GetUnsignedShort, LowLevelByteSwap<float>, LowLevelByteSwap<short int>, LowLevelByteSwap<short unsigned int>, PeekGet, SetComboType, SetMax, SetMin, SetTrackActive, StringToNumber<float>, StringToNumber<short int>, StringToNumber<short unsigned int>, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<short int>, SwapBufferToTargetEndian<short unsigned int>, V_memcpy, Vector2D, memcpy, operator[]
// calls: CUtlBuffer::GetUnsignedChar, CCurveData::RestoreFromBuffer, CUtlBuffer::GetType<int>, CChoreoEvent::AddTrack, CUtlBuffer::GetType<float>, CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::GetType<short unsigned int>, CCurveData::Add, CUtlBuffer::CheckGet, V_strtoui64, V_strtod, V_strtoi64 (13 total)
// callers: CChoreoEvent::RestoreFromBuffer
bool __fastcall CChoreoEvent::RestoreFlexAnimationsFromBuffer(
        CChoreoEvent *const this,
        SceneBinaryVersion_t nRestoreVersion,
        CUtlBuffer *const buf,
        IChoreoStringPool *pStringPool)
{
  unsigned __int8 UnsignedChar; // al
  void (__fastcall *v6)(IChoreoStringPool *, _QWORD, char *, __int64); // rbx
  CFlexAnimationTrack *v7; // r12
  unsigned __int8 v8; // al
  CCurveData *m_Ramp; // r13
  int v10; // r12d
  int v11; // ebx
  bool v12; // al
  float v13; // xmm0_4
  unsigned __int8 v14; // al
  bool v15; // zf
  bool v16; // al
  unsigned __int16 v17; // dx
  bool v18; // al
  int v19; // eax
  bool v20; // al
  int v21; // eax
  int m_Get; // eax
  __int16 x_low; // dx
  int v24; // eax
  int v25; // ebx
  int v26; // r12d
  bool v27; // al
  float v28; // xmm0_4
  bool v29; // al
  float v30; // xmm1_4
  vec_t v31; // xmm0_4
  bool v32; // al
  unsigned __int16 v33; // dx
  bool v34; // al
  int v35; // eax
  int v36; // xmm0_4
  bool v37; // al
  int v38; // edx
  int v39; // eax
  int v40; // edx
  bool v41; // al
  int v42; // eax
  unsigned __int8 v43; // al
  unsigned __int8 *v44; // rdx
  unsigned __int8 *v45; // rdx
  vec_t x; // ebx
  int *v48; // rdx
  CFlexAnimationTrack *track; // [rsp+8h] [rbp-1A8h]
  int numTracks; // [rsp+24h] [rbp-18Ch]
  float v52; // [rsp+28h] [rbp-188h]
  int i; // [rsp+3Ch] [rbp-174h]
  CCurveData *v56; // [rsp+40h] [rbp-170h]
  vec_t tf; // [rsp+48h] [rbp-168h]
  int t; // [rsp+48h] [rbp-168h]
  vec_t ta; // [rsp+48h] [rbp-168h]
  vec_t tb; // [rsp+48h] [rbp-168h]
  int tc; // [rsp+48h] [rbp-168h]
  vec_t td; // [rsp+48h] [rbp-168h]
  vec_t te; // [rsp+48h] [rbp-168h]
  unsigned __int16 v64; // [rsp+52h] [rbp-15Eh] BYREF
  int v65; // [rsp+54h] [rbp-15Ch] BYREF
  int nIncrement[2]; // [rsp+58h] [rbp-158h] BYREF
  CExpressionSample sample; // [rsp+60h] [rbp-150h] BYREF
  char name[264]; // [rsp+70h] [rbp-140h] BYREF
  unsigned __int64 v69; // [rsp+178h] [rbp-38h]

  v69 = __readfsqword(0x28u);
  UnsignedChar = CUtlBuffer::GetUnsignedChar(buf);
  numTracks = UnsignedChar;
  if ( UnsignedChar != 0 )
  {
    for ( i = 0; numTracks > i; ++i )
    {
      v6 = *(pStringPool->_vptr_IChoreoStringPool + 1);
      CUtlBuffer::GetType<int>(buf, &sample);
      v6(pStringPool, LODWORD(sample.m_AnchorPos.x), name, 256);
      v7 = CChoreoEvent::AddTrack(this, name);
      v8 = CUtlBuffer::GetUnsignedChar(buf);
      m_Ramp = v7->m_Ramp;
      *(v7 + 192) = v8 & 2 | v8 & 1 | *(v7 + 192) & 0xFC;
      CUtlBuffer::GetType<float>(buf, &sample.m_AnchorPos);
      v7->m_flMin = sample.m_AnchorPos.x;
      CUtlBuffer::GetType<float>(buf, &sample.m_AnchorPos);
      v56 = &v7->m_Ramp[1];
      v7->m_flMax = sample.m_AnchorPos.x;
      if ( nRestoreVersion > 6 )
      {
        CCurveData::RestoreFromBuffer(v7->m_Ramp, nRestoreVersion, buf, pStringPool);
        if ( (*(v7 + 192) & 2) != 0 )
          CCurveData::RestoreFromBuffer(v56, nRestoreVersion, buf, pStringPool);
      }
      else
      {
        if ( (buf->m_Flags & 1) != 0 )
        {
          nIncrement[0] = 128;
          if ( !CUtlBuffer::CheckArbitraryPeekGet(buf, 0, nIncrement) )
            goto LABEL_9;
          sample.m_AnchorPos = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
          x = sample.m_AnchorPos.x;
          LOWORD(v24) = V_strtoi64(*&sample.m_AnchorPos, &sample, 10);
          LOWORD(v65) = v24;
          if ( LODWORD(sample.m_AnchorPos.x) != LODWORD(x) )
            buf->m_Get += LODWORD(sample.m_AnchorPos.x) - LODWORD(x);
          v24 = v24;
        }
        else
        {
          if ( !CUtlBuffer::CheckGet(buf, 2) )
            goto LABEL_9;
          if ( (*&buf->m_Byteswap & 1) != 0 )
          {
            m_Get = buf->m_Get;
            v48 = &buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
            if ( v48 == 0 )
              v48 = &v65;
            LOWORD(sample.m_AnchorPos.x) = v65;
            LOBYTE(sample.m_AnchorPos.x) = *(v48 + 1);
            BYTE1(sample.m_AnchorPos.x) = *v48;
            x_low = LOWORD(sample.m_AnchorPos.x);
          }
          else
          {
            m_Get = buf->m_Get;
            x_low = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
          }
          buf->m_Get = m_Get + 2;
          v24 = x_low;
        }
        if ( v24 > 0 )
        {
          track = v7;
          v25 = 0;
          v26 = v24;
          while ( (buf->m_Flags & 1) == 0 )
          {
            v34 = CUtlBuffer::CheckGet(buf, 4);
            v28 = 0.0;
            if ( !v34 )
              goto LABEL_36;
            v35 = buf->m_Get;
            v15 = (*&buf->m_Byteswap & 1) == 0;
            v36 = *&buf->m_Memory.m_pMemory[v35 - buf->m_nOffset];
            v65 = v36;
            if ( !v15 )
            {
              LOBYTE(sample.m_AnchorPos.x) = HIBYTE(v65);
              BYTE1(sample.m_AnchorPos.x) = BYTE2(v65);
              BYTE2(sample.m_AnchorPos.x) = BYTE1(v65);
              HIBYTE(sample.m_AnchorPos.x) = v65;
              v36 = LODWORD(sample.m_AnchorPos.x);
            }
            v15 = (buf->m_Flags & 1) == 0;
            tb = *&v36;
            buf->m_Get = v35 + 4;
            if ( !v15 )
            {
LABEL_37:
              nIncrement[0] = 128;
              v29 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, nIncrement);
              v30 = 0.0;
              v31 = tb;
              if ( v29 )
              {
                v52 = tb;
                sample.m_AnchorPos = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
                te = sample.m_AnchorPos.x;
                v43 = V_strtoui64(*&sample.m_AnchorPos, &sample, 10);
                v31 = v52;
                if ( LODWORD(sample.m_AnchorPos.x) != LODWORD(te) )
                  buf->m_Get += LODWORD(sample.m_AnchorPos.x) - LODWORD(te);
                v30 = v43 / 255.0;
              }
              goto LABEL_38;
            }
LABEL_46:
            v37 = CUtlBuffer::CheckGet(buf, 1);
            v30 = 0.0;
            v31 = tb;
            if ( v37 )
            {
              v38 = buf->m_Get;
              v39 = v38 + 1;
              v40 = buf->m_Memory.m_pMemory[v38 - buf->m_nOffset];
              buf->m_Get = v39;
              v30 = v40 / 255.0;
            }
LABEL_38:
            sample.m_AnchorPos.x = v31;
            sample.m_AnchorPos.y = v30;
            sample.m_curvetype = 0;
            *(&sample + 5) |= 0x7FFFu;
            v15 = (buf->m_Flags & 1) == 0;
            *(&sample + 11) &= ~0x80u;
            if ( v15 )
            {
              v41 = CUtlBuffer::CheckGet(buf, 2);
              v33 = 0;
              if ( v41 )
              {
                if ( (*&buf->m_Byteswap & 1) != 0 )
                {
                  v42 = buf->m_Get;
                  v44 = &buf->m_Memory.m_pMemory[v42 - buf->m_nOffset];
                  if ( v44 == 0 )
                    v44 = &v64;
                  LOWORD(nIncrement[0]) = v64;
                  LOBYTE(nIncrement[0]) = v44[1];
                  BYTE1(nIncrement[0]) = *v44;
                  v33 = nIncrement[0];
                }
                else
                {
                  v42 = buf->m_Get;
                  v33 = *&buf->m_Memory.m_pMemory[v42 - buf->m_nOffset];
                }
                buf->m_Get = v42 + 2;
              }
            }
            else
            {
              v65 = 128;
              v32 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &v65);
              v33 = 0;
              if ( v32 )
              {
                *nIncrement = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
                tc = nIncrement[0];
                v64 = V_strtoui64(*nIncrement, nIncrement, 10);
                v33 = v64;
                if ( nIncrement[0] != tc )
                  buf->m_Get += nIncrement[0] - tc;
              }
            }
            sample.m_curvetype = v33;
            ++v25;
            CCurveData::Add(m_Ramp, &sample, 0);
            if ( v25 == v26 )
            {
              v7 = track;
              goto LABEL_9;
            }
          }
          nIncrement[0] = 128;
          v27 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, nIncrement);
          v28 = 0.0;
          if ( v27 )
          {
            sample.m_AnchorPos = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
            td = sample.m_AnchorPos.x;
            v28 = V_strtod(*&sample.m_AnchorPos, &sample);
            v65 = LODWORD(v28);
            if ( LODWORD(sample.m_AnchorPos.x) != LODWORD(td) )
              buf->m_Get += LODWORD(sample.m_AnchorPos.x) - LODWORD(td);
          }
LABEL_36:
          tb = v28;
          if ( (buf->m_Flags & 1) != 0 )
            goto LABEL_37;
          goto LABEL_46;
        }
LABEL_9:
        if ( (*(v7 + 192) & 2) != 0 )
        {
          CUtlBuffer::GetType<unsigned short>(buf, &sample);
          if ( LOWORD(sample.m_AnchorPos.x) != 0 )
          {
            v10 = LOWORD(sample.m_AnchorPos.x) + 1;
            v11 = 1;
            do
            {
              if ( (buf->m_Flags & 1) != 0 )
              {
                nIncrement[0] = 128;
                v12 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, nIncrement);
                v13 = 0.0;
                if ( v12 )
                {
                  sample.m_AnchorPos = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
                  ta = sample.m_AnchorPos.x;
                  v13 = V_strtod(*&sample.m_AnchorPos, &sample);
                  v65 = LODWORD(v13);
                  if ( LODWORD(sample.m_AnchorPos.x) != LODWORD(ta) )
                    buf->m_Get += LODWORD(sample.m_AnchorPos.x) - LODWORD(ta);
                }
              }
              else
              {
                v18 = CUtlBuffer::CheckGet(buf, 4);
                v13 = 0.0;
                if ( v18 )
                {
                  v19 = buf->m_Get;
                  v15 = (*&buf->m_Byteswap & 1) == 0;
                  v13 = *&buf->m_Memory.m_pMemory[v19 - buf->m_nOffset];
                  v65 = LODWORD(v13);
                  if ( !v15 )
                  {
                    LOBYTE(sample.m_AnchorPos.x) = HIBYTE(v65);
                    BYTE1(sample.m_AnchorPos.x) = BYTE2(v65);
                    BYTE2(sample.m_AnchorPos.x) = BYTE1(v65);
                    HIBYTE(sample.m_AnchorPos.x) = v65;
                    v13 = sample.m_AnchorPos.x;
                  }
                  buf->m_Get = v19 + 4;
                }
              }
              tf = v13;
              v14 = CUtlBuffer::GetUnsignedChar(buf);
              sample.m_curvetype = 0;
              sample.m_AnchorPos.x = tf;
              sample.m_AnchorPos.y = v14 / 255.0;
              *(&sample + 5) |= 0x7FFFu;
              v15 = (buf->m_Flags & 1) == 0;
              *(&sample + 11) &= ~0x80u;
              if ( v15 )
              {
                v20 = CUtlBuffer::CheckGet(buf, 2);
                v17 = 0;
                if ( v20 )
                {
                  if ( (*&buf->m_Byteswap & 1) != 0 )
                  {
                    v21 = buf->m_Get;
                    v45 = &buf->m_Memory.m_pMemory[v21 - buf->m_nOffset];
                    if ( v45 == 0 )
                      v45 = &v64;
                    LOWORD(nIncrement[0]) = v64;
                    LOBYTE(nIncrement[0]) = v45[1];
                    BYTE1(nIncrement[0]) = *v45;
                    v17 = nIncrement[0];
                  }
                  else
                  {
                    v21 = buf->m_Get;
                    v17 = *&buf->m_Memory.m_pMemory[v21 - buf->m_nOffset];
                  }
                  buf->m_Get = v21 + 2;
                }
              }
              else
              {
                v65 = 128;
                v16 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &v65);
                v17 = 0;
                if ( v16 )
                {
                  *nIncrement = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
                  t = nIncrement[0];
                  v64 = V_strtoui64(*nIncrement, nIncrement, 10);
                  v17 = v64;
                  if ( nIncrement[0] != t )
                    buf->m_Get += nIncrement[0] - t;
                }
              }
              ++v11;
              sample.m_curvetype = v17;
              CCurveData::Add(v56, &sample, 0);
            }
            while ( v11 != v10 );
          }
        }
      }
    }
  }
  return 1;
}


// CChoreoEvent::SetActive  (line 2966, @0x000000000307b150, libserver.so)
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetActive(CChoreoEvent *const this, bool state)
{
  *(this + 441) = (32 * state) | *(this + 441) & 0xDF;
}


// CChoreoEvent::GetActive  (line 2971, @0x000000000307b170, libserver.so)
// callers: CChoreoScene::FileSaveEvent, CChoreoScene::GatherEventsOfType
bool __fastcall CChoreoEvent::GetActive(const CChoreoEvent *const this)
{
  return (*(this + 441) & 0x20) != 0;
}


// CChoreoEvent::SetHardStopSpeakEvent  (line 2977, @0x000000000307b190, libserver.so)
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetHardStopSpeakEvent(CChoreoEvent *const this, bool bShouldHardStopSound)
{
  *(this + 441) = (bShouldHardStopSound << 7) | *(this + 441) & 0x7F;
}


// CChoreoEvent::ShouldHardStopSpeakEvent  (line 2982, @0x000000000307b1b0, libserver.so)
// callers: CSceneEntity::DispatchEndSpeak, CChoreoScene::FileSaveEvent
bool __fastcall CChoreoEvent::ShouldHardStopSpeakEvent(const CChoreoEvent *const this)
{
  return *(this + 441) >> 7;
}


// CChoreoEvent::SetSoundStartDelay  (line 2987, @0x000000000307b1c0, libserver.so)
// callers: CChoreoScene::ParseEvent
void __fastcall CChoreoEvent::SetSoundStartDelay(CChoreoEvent *const this, float a2, float flDelayOrSkipAhead)
{
  this->m_flSoundStartDelay = a2;
}


// CChoreoEvent::GetSoundStartDelay  (line 2992, @0x000000000307b1d0, libserver.so)
// callers: CSceneEntity::DispatchStartSpeak, CChoreoScene::FileSaveEvent
float __fastcall CChoreoEvent::GetSoundStartDelay(const CChoreoEvent *const this)
{
  return this->m_flSoundStartDelay;
}


