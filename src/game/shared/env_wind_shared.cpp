
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvWindShared::CEnvWindShared  (line 109, @0x000000000220b740, libserver.so)  // inlines: AddToTail, CEntityIOOutput, CEntityIndex, CNetworkVarBase, CNetworkVectorBase, CTimedEventQueue, CUtlLinkedList, CUtlMemory, ConstructList, CopyConstruct<CEnvWindShared*>, EnsureValidValue, EnsureValidValue<float>, EnsureValidValue<int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned int>, InsertBefore, InternalElement, LinkBefore, ResetDbgInfo, Zero, operator[], ~CTimedEventQueue, ~CUtlLinkedList, ~CUtlMemory
// calls: CUniformRandomStream::CUniformRandomStream(void), CUtlLinkedList<CEnvWindShared*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CEnvWindShared*, short unsigned int>, short unsigned int> >::AllocInternal, CUtlLinkedList<CEnvWindShared*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CEnvWindShared*, short unsigned int>, short unsigned int> >::Unlink, CUtlLinkedList<CEnvWindShared::WindVariationEvent_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindVariationEvent_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindVariationEvent_t, short unsigned int>, short unsigned int>::Purge, CUtlLinkedList<CEnvWindShared::WindAveEvent_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindAveEvent_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindAveEvent_t, short unsigned int>, short unsigned int>::Purge, _Unwind_Resume
// callers: CEnvWind::CEntityInstanceEntityClass::ConstructInstance
// globals: s_windControllers
void __fastcall CEnvWindShared::CEnvWindShared(CEnvWindShared *const this)
{
  CUniformRandomStream *v2; // rdi
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // r12
  UtlLinkedListElem_t<CEnvWindShared*,short unsigned int> *m_pMemory; // rcx
  UtlLinkedListElem_t<CEnvWindShared*,short unsigned int> *v6; // rax
  __int64 m_Tail; // rdx
  bool v8; // zf

  v2 = (this + 200);
  *(v2 - 25) = off_402C230;
  *(v2 - 92) = 0;
  *(v2 - 48) = 0;
  *(v2 - 91) = 0;
  *(v2 - 11) = off_3F7C190;
  *(v2 - 8) = off_3F7C190;
  *(v2 - 88) = 0;
  *(v2 - 48) = 0;
  *(v2 - 47) = 0;
  *(v2 - 45) = 0;
  *(v2 - 87) = 0;
  *(v2 - 43) = 0;
  *(v2 - 42) = 0;
  *(v2 - 41) = 0;
  *(v2 - 80) = 0;
  *(v2 - 37) = 0;
  *(v2 - 38) = 0;
  *(v2 - 39) = 0;
  *(v2 - 23) = 0;
  *(v2 - 2) = -1;
  CUniformRandomStream::CUniformRandomStream(v2);
  CUniformRandomStream::CUniformRandomStream((this + 360));
  *(this + 281) = -1;
  *(this + 276) = -1;
  *(this + 277) = -1;
  *(this + 278) = -1;
  *(this + 300) = -1;
  *(this + 301) = -1;
  *(this + 133) = 1092616192;
  *(this + 67) = 0;
  *(this + 136) = 0;
  *(this + 137) = 0;
  *(this + 279) = 0;
  *(this + 280) = 0;
  *(this + 71) = 0;
  *(this + 132) = -8388609;
  *(this + 145) = 1092616192;
  *(this + 73) = 0;
  *(this + 148) = 0;
  *(this + 149) = 0;
  *(this + 305) = -1;
  *(this + 302) = -1;
  *(this + 303) = 0;
  *(this + 304) = 0;
  *(this + 77) = 0;
  *(this + 144) = -8388609;
  *(this + 65) = 0;
  v3 = CUtlLinkedList<CEnvWindShared *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CEnvWindShared *,unsigned short>,unsigned short>>::AllocInternal(
         &s_windControllers,
         0);
  v4 = v3;
  if ( v3 != 0xFFFF )
  {
    CUtlLinkedList<CEnvWindShared *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CEnvWindShared *,unsigned short>,unsigned short>>::Unlink(
      &s_windControllers,
      v3);
    m_pMemory = s_windControllers.m_Memory.m_pMemory;
    v6 = &s_windControllers.m_Memory.m_pMemory[v4];
    v6->m_Next = -1;
    m_Tail = s_windControllers.m_Tail;
    v8 = s_windControllers.m_Tail == 0xFFFF;
    v6->m_Previous = s_windControllers.m_Tail;
    s_windControllers.m_Tail = v4;
    if ( v8 )
      s_windControllers.m_Head = v4;
    else
      m_pMemory[m_Tail].m_Next = v4;
    ++s_windControllers.m_ElementCount;
    v6->m_Element = this;
  }
}


// CEnvWindShared::~CEnvWindShared  (line 115, @0x000000000220ba10, libserver.so)  // inlines: Element, Find, FindAndRemove, Free, Next, Remove, operator[], ~CTimedEventQueue, ~CUtlLinkedList, ~CUtlMemory
// calls: CSoundEnvelopeController::GetController, CUtlLinkedList<CEnvWindShared*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CEnvWindShared*, short unsigned int>, short unsigned int> >::Unlink, CUtlLinkedList<CEnvWindShared::WindVariationEvent_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindVariationEvent_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindVariationEvent_t, short unsigned int>, short unsigned int>::Purge, CUtlLinkedList<CEnvWindShared::WindAveEvent_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindAveEvent_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindAveEvent_t, short unsigned int>, short unsigned int>::Purge
// callers: CEnvWind::~CEnvWind
// globals: s_windControllers
void __fastcall CEnvWindShared::~CEnvWindShared(CEnvWindShared *const this)
{
  CSoundEnvelopeController *Controller; // rax
  unsigned __int16 m_Head; // dx
  __int64 v4; // rbx
  unsigned __int16 v5; // r13
  CUtlLinkedList<CEnvWindShared::WindVariationEvent_t,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindVariationEvent_t,short unsigned int>,short unsigned int> > *v6; // rbx
  CUtlLinkedList<CEnvWindShared::WindAveEvent_t,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindAveEvent_t,short unsigned int>,short unsigned int> > *v7; // r12

  *this = off_402C230;
  if ( *(this + 65) != 0 )
  {
    Controller = CSoundEnvelopeController::GetController();
    (*(Controller->_vptr_CSoundEnvelopeController + 5))(Controller, *(this + 65));
  }
  m_Head = s_windControllers.m_Head;
  if ( s_windControllers.m_Head != 0xFFFF )
  {
    while ( 1 )
    {
      v4 = m_Head;
      if ( this == s_windControllers.m_Memory.m_pMemory[v4].m_Element )
        break;
      m_Head = s_windControllers.m_Memory.m_pMemory[v4].m_Next;
      if ( m_Head == 0xFFFF )
        goto LABEL_8;
    }
    v5 = m_Head;
    CUtlLinkedList<CEnvWindShared *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CEnvWindShared *,unsigned short>,unsigned short>>::Unlink(
      &s_windControllers,
      m_Head);
    s_windControllers.m_Memory.m_pMemory[v4].m_Next = s_windControllers.m_FirstFree;
    s_windControllers.m_FirstFree = v5;
  }
LABEL_8:
  v6 = (this + 584);
  v7 = (this + 536);
  CUtlLinkedList<CEnvWindShared::WindVariationEvent_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindVariationEvent_t,unsigned short>,unsigned short>>::RemoveAll(v6);
  CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindVariationEvent_t,unsigned short>,unsigned short>::Purge(&v6->m_Memory);
  CUtlLinkedList<CEnvWindShared::WindAveEvent_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindAveEvent_t,unsigned short>,unsigned short>>::RemoveAll(v7);
  CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindAveEvent_t,unsigned short>,unsigned short>::Purge(&v7->m_Memory);
}


// CEnvWindShared::Init  (line 124, @0x000000000220d5e0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>, operator=<int>
// calls: CUniformRandomStream::SetSeed(int), CEnvWindShared::InitDir
// callers: CEnvWind::Spawn
void __fastcall CEnvWindShared::Init(
        CEnvWindShared *const this,
        CEntityIndex nEntIndex,
        int iRandomSeed,
        float flTime,
        int iInitialWindYaw,
        float flInitialWindSpeed)
{
  bool v9; // zf
  float v10; // xmm0_4

  v9 = flTime == *(this + 2);
  *(this + 48) = nEntIndex;
  *(this + 47) = 1065353216;
  *(this + 46) = 1065353216;
  *(this + 40) = flTime;
  *(this + 43) = flTime;
  *(this + 42) = flTime;
  if ( !v9 )
  {
    (*(*this + 16LL))(this, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *(this + 2) = flTime;
  }
  if ( iRandomSeed != *(this + 3) )
  {
    (*(*this + 16LL))(this, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *(this + 3) = iRandomSeed;
  }
  CUniformRandomStream::SetSeed((this + 200), iRandomSeed);
  CUniformRandomStream::SetSeed((this + 360), iRandomSeed);
  CEnvWindShared::InitDir(this, iInitialWindYaw);
  v10 = *(this + 27);
  if ( v10 != flInitialWindSpeed )
  {
    (*(*this + 16LL))(this, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *(this + 27) = flInitialWindSpeed;
    v10 = flInitialWindSpeed;
  }
  *(this + 16) = v10;
  *(this + 44) = v10;
  *(this + 180) = 1;
}


// CEnvWindShared::InitDir  (line 151, @0x00000000021f5da0, libserver.so)  // inlines: NetworkStateChanged, Set, anglemod, operator=<int>
// callers: CEnvWindShared::Init
void __fastcall CEnvWindShared::InitDir(CEnvWindShared *const this, int iInitialWindYaw)
{
  unsigned __int16 v2; // r13
  __int16 v3; // r12
  int v5; // r12d

  v2 = iInitialWindYaw;
  v3 = iInitialWindYaw;
  if ( iInitialWindYaw != *(this + 52) )
  {
    (*(*this + 16LL))(this, 104, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *(this + 52) = v3;
  }
  *(this + 15) = v2;
  v5 = ((v2 * 182.04445) * 0.0054931641);
  if ( v5 != v2 )
  {
    (*(*this + 16LL))(this, 104, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *(this + 52) = v5;
  }
}


// CEnvWindShared::ComputeWindVariation  (line 165, @0x000000000220d710, libserver.so)
// calls: CUniformRandomStream::RandomFloat(float,float)
// callers: CEnvWindShared::WindThink
void __fastcall CEnvWindShared::ComputeWindVariation(CEnvWindShared *const this, __m128i a2, float flTime)
{
  float v3; // r14d
  CUniformRandomStream *v5; // r12
  int v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4

  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(a2));
  if ( *a2.m128i_i32 >= *(this + 40) )
  {
    v5 = (this + 360);
    do
    {
      CUniformRandomStream::RandomFloat(v5, -10.0, 10.0);
      *(this + 46) = v6;
      CUniformRandomStream::RandomFloat(v5, -0.2, 0.2);
      *(this + 47) = v7 + 1.0;
      v8 = *(this + 40) + 0.1;
      *(this + 40) = v8;
    }
    while ( v3 >= v8 );
  }
}


// CEnvWindShared::UpdateWindSound  (line 181, @0x00000000021f5e30, libserver.so)
// calls: CSoundEnvelopeController::GetController, Bias
void __fastcall CEnvWindShared::UpdateWindSound(CEnvWindShared *const this, __m128i a2, float flTotalWindSpeed)
{
  float v3; // r14d
  __m128i v5; // xmm0
  unsigned int v6; // r15d
  CSoundEnvelopeController *Controller; // r12
  float v8; // [rsp+0h] [rbp-28h]
  float flNormalizedWindSpeed; // [rsp+4h] [rbp-24h]

  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(a2));
  if ( (*(g_pEffects->_vptr_IPredictionSystem + 29))(g_pEffects, *a2.m128i_i64, flTotalWindSpeed) == 0 )
  {
    *v5.m128i_i64 = (*(*random_valve + 8LL))(random_valve, 1.0, 2.0);
    v6 = _mm_cvtsi128_si32(v5);
    Controller = CSoundEnvelopeController::GetController();
    v8 = Bias(0.30000001, v3 / 150.0);
    flNormalizedWindSpeed = Bias(0.30000001, fminf(1.0, v3 / 150.0));
    (*(Controller->_vptr_CSoundEnvelopeController + 12))(
      Controller,
      *(this + 65),
      (v8 * 120.0) + 100.0,
      *_mm_cvtsi32_si128(v6).m128i_i64);
    (*(Controller->_vptr_CSoundEnvelopeController + 13))(
      Controller,
      *(this + 65),
      (flNormalizedWindSpeed * 0.30000001) + 0.69999999,
      *_mm_cvtsi32_si128(v6).m128i_i64);
  }
}


// CEnvWindShared::UpdateTreeSway  (line 204, @0x00000000021f5f60, libserver.so)
void __fastcall CEnvWindShared::UpdateTreeSway(CEnvWindShared *const this, double a2, float flTime)
{
  ;
}


// CEnvWindShared::WindThink  (line 235, @0x000000000220d7b0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, QAngle, anglemod, operator*=, ~CVariantBase
// calls: CEnvWindShared::ComputeWindVariation, CUniformRandomStream::RandomInt(int,int), CUniformRandomStream::RandomFloat(float,float), CEntityIOOutput::FireOutputInternal, AngleVectors, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CEnvWind::WindThink
float __fastcall CEnvWindShared::WindThink(CEnvWindShared *const this, __m128i a2, float flTime)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm3_4
  bool v7; // al
  float v8; // xmm0_4
  float v9; // xmm2_4
  bool v10; // zf
  int v11; // eax
  float v12; // xmm5_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  vec_t v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  int v22; // eax
  int v23; // edx
  int v24; // r14d
  int v25; // eax
  float v26; // [rsp+8h] [rbp-38h]
  float flTimea; // [rsp+Ch] [rbp-34h]
  QAngle vecWindAngle; // [rsp+10h] [rbp-30h] BYREF

  flTimea = *a2.m128i_i32;
  CEnvWindShared::ComputeWindVariation(this, a2, flTime);
  v4 = *(this + 43);
  while ( 1 )
  {
    v5 = *(this + 42);
    v6 = *(this + 16);
    v7 = (flTimea - v5) > (v4 - v5);
    v8 = fminf(v4 - v5, flTimea - v5);
    v9 = *(this + 44);
    if ( v9 > v6 )
    {
      *(this + 16) = fminf(v9, (v8 * 150.0) + v6);
      goto LABEL_4;
    }
    if ( v6 > v9 )
      break;
LABEL_4:
    if ( !v7 )
      goto LABEL_11;
LABEL_5:
    v10 = *(this + 180) == 0;
    *(this + 42) = v4;
    if ( v10 )
    {
      v22 = CUniformRandomStream::RandomInt((this + 200), *(this + 12), *(this + 13));
      v23 = *(this + 20);
      v24 = *(this + 15);
      *(this + 44) = v22;
      v25 = CUniformRandomStream::RandomInt((this + 200), -v23, v23);
      *(this + 180) = 1;
      *&vecWindAngle.x = 0;
      *(this + 15) = (((v25 + v24) * 182.04445) * 0.0054931641);
      vecWindAngle.z = 0.0;
      CEntityIOOutput::FireOutputInternal((this + 112), 0, 0, &vecWindAngle, 0.0);
      if ( (BYTE2(vecWindAngle.z) & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&vecWindAngle.x);
      v4 = *(this + 43) + *(this + 9);
      *(this + 43) = v4;
    }
    else
    {
      v11 = CUniformRandomStream::RandomInt((this + 200), *(this + 8), *(this + 9));
      v12 = *(this + 7);
      v13 = *(this + 8);
      *(this + 180) = 0;
      v26 = v12;
      *(this + 44) = v11;
      CUniformRandomStream::RandomFloat((this + 200), 0.0, v13);
      vecWindAngle.z = 0.0;
      v15 = (v14 + v26) + *(this + 43);
      *&vecWindAngle.x = 0;
      *(this + 43) = v15;
      CEntityIOOutput::FireOutputInternal((this + 136), 0, 0, &vecWindAngle, 0.0);
      if ( (BYTE2(vecWindAngle.z) & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&vecWindAngle.x);
      v4 = *(this + 43);
    }
  }
  *(this + 16) = fmaxf(v9, v6 - (v8 * 15.0));
  if ( v7 )
    goto LABEL_5;
LABEL_11:
  v16 = *(this + 15);
  vecWindAngle.x = 0.0;
  *(this + 42) = flTimea;
  v17 = v16 + *(this + 46);
  vecWindAngle.z = 0.0;
  vecWindAngle.y = v17;
  AngleVectors(&vecWindAngle, (this + 68), 0, 0);
  v18 = *(this + 16) * *(this + 47);
  *(this + 17) = *(this + 17) * v18;
  v19 = *(this + 18) * v18;
  v20 = v18 * *(this + 19);
  *(this + 18) = v19;
  *(this + 19) = v20;
  return flTimea + 0.0099999998;
}


// ResetWindspeed  (line 357, @0x00000000021f5f70, libserver.so)  // inlines: Init, Next, operator[]
// callers: CSource1GameConfiguration::InitGameSession
// globals: s_windControllers
void __cdecl ResetWindspeed()
{
  __int64 m_Head; // rax
  UtlLinkedListElem_t<CEnvWindShared*,short unsigned int> *m_pMemory; // rcx
  UtlLinkedListElem_t<CEnvWindShared*,short unsigned int> *v2; // rdx
  CEnvWindShared *m_Element; // rax

  m_Head = s_windControllers.m_Head;
  m_pMemory = s_windControllers.m_Memory.m_pMemory;
  if ( s_windControllers.m_Head != 0xFFFF )
  {
    do
    {
      v2 = &m_pMemory[m_Head];
      m_Element = v2->m_Element;
      *(m_Element + 17) = 0;
      *(m_Element + 18) = 0;
      *(m_Element + 19) = 0;
      m_Head = v2->m_Next;
    }
    while ( m_Head != 0xFFFF );
  }
}


// GetWindspeedAtLocation  (line 381, @0x00000000021f5fc0, libserver.so)  // inlines: FastSqrt, Length, Next, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator==<float>, operator[]
// globals: s_windControllers
Vector __fastcall GetWindspeedAtLocation(const Vector *const location)
{
  __int64 m_Head; // rax
  UtlLinkedListElem_t<CEnvWindShared*,short unsigned int> *v2; // rdx
  CEnvWindShared *m_Element; // rax
  UtlLinkedListElem_t<CEnvWindShared*,short unsigned int> *v6; // rax
  CEnvWindShared *i; // rdx
  __int64 m_Next; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( s_windControllers.m_Head == 0xFFFF )
  {
LABEL_10:
    *&result.x = *&vec3_origin.x;
    result.z = vec3_origin.z;
    return result;
  }
  m_Head = s_windControllers.m_Head;
  do
  {
    v2 = &s_windControllers.m_Memory.m_pMemory[m_Head];
    m_Element = v2->m_Element;
    if ( *(v2->m_Element + 5) > fsqrt(
                                  (((*(v2->m_Element + 11) - location->x) * (*(v2->m_Element + 11) - location->x))
                                 + ((*(v2->m_Element + 12) - location->y) * (*(v2->m_Element + 12) - location->y)))
                                + ((*(v2->m_Element + 13) - location->z) * (*(v2->m_Element + 13) - location->z))) )
    {
      *&result.x = *(m_Element + 68);
      result.z = *(m_Element + 19);
      return result;
    }
    m_Head = v2->m_Next;
  }
  while ( m_Head != 0xFFFF );
  v6 = &s_windControllers.m_Memory.m_pMemory[s_windControllers.m_Head];
  for ( i = v6->m_Element; *(v6->m_Element + 5) != -1.0; i = v6->m_Element )
  {
    m_Next = v6->m_Next;
    if ( m_Next == 0xFFFF )
      goto LABEL_10;
    v6 = &s_windControllers.m_Memory.m_pMemory[m_Next];
  }
  *&result.x = *(i + 68);
  result.z = *(i + 19);
  return result;
}


