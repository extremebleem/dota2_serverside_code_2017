
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ITempEntsSystem::~ITempEntsSystem  (line 25, @0x0000000002f4f810, libserver.so)  // inlines: ~IPredictionSystem
void __fastcall ITempEntsSystem::~ITempEntsSystem(ITempEntsSystem *const this)
{
  this->_vptr_IPredictionSystem = off_3FFC070;  // vptr: IPredictionSystem
}


// ITempEntsSystem::~ITempEntsSystem  (line 25, @0x0000000002f50040, libserver.so)  // inlines: ~IPredictionSystem, ~ITempEntsSystem
// calls: operator delete
void __fastcall ITempEntsSystem::~ITempEntsSystem(ITempEntsSystem *const this)
{
  this->_vptr_IPredictionSystem = off_3FFC070;  // vptr: IPredictionSystem
  operator delete(this);
}


// ITempEntsSystem::Sparks  (line 105, @0x0000000002116080, libserver.so)  // inlines: CPVSFilter, ConvertToExternalMemory, Purge, Purge_FixedGrowable, ~CPVSFilter, ~CRecipientFilter, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPVS, CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >::RemoveAll, CUtlMemory<CEntityIndex, int>::Purge, __stack_chk_fail, CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: UTIL_BloodDrips, CBeam::DoSparks, CShower::Think, DoSpark, CBreakable::TraceAttack
void __fastcall ITempEntsSystem::Sparks(
        ITempEntsSystem *const this,
        const Vector *const position,
        int nMagnitude,
        int nTrailLength,
        const Vector *pvecDir)
{
  uint32 v9; // eax
  CPVSFilter filter; // [rsp+10h] [rbp-170h] BYREF
  unsigned __int64 v12; // [rsp+148h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FF45F0;
  CRecipientFilter::AddRecipientsByPVS(&filter, position);
  (*(this->_vptr_IPredictionSystem + 23))(this, &filter, position, nMagnitude, nTrailLength, pvecDir, 0.0);
  filter._vptr_IRecipientFilter = &off_3FFC090;
  CUtlVectorBase<CEntityIndex,CUtlMemoryFixedGrowable<CEntityIndex,65ul,int>>::RemoveAll(&filter.m_Recipients);
  v9 = filter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000;
  if ( filter.m_Recipients.m_Memory.m_nAllocationCount < 0
    || filter.m_Recipients.m_Memory.m_pMemory == &filter.m_Recipients.m_Memory.m_FixedMemory )
  {
    if ( v9 == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&filter.m_Recipients.m_Memory);
  }
  else if ( filter.m_Recipients.m_Memory.m_pMemory != 0 && v9 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
}


// ITempEntsSystem::Smoke  (line 111, @0x0000000002412280, libserver.so)  // inlines: CPVSFilter, ~CPVSFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPVS, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: UTIL_Smoke
void __fastcall ITempEntsSystem::Smoke(
        ITempEntsSystem *const this,
        const Vector *const origin,
        __m128i a3,
        float flScale)
{
  float v4; // r14d
  CPVSFilter filter; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v8; // [rsp+138h] [rbp-28h]

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
  v8 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FF45F0;
  CRecipientFilter::AddRecipientsByPVS(&filter, origin);
  (*(this->_vptr_IPredictionSystem + 22))(this, &filter, origin, 0.0, v4 * 0.1);
  filter._vptr_IRecipientFilter = &off_3FF45F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// ITempEntsSystem::Dust  (line 117, @0x000000000224af40, libserver.so)  // inlines: CPVSFilter, ~CPVSFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPVS, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CEnvDustPuff::InputSpawnDust
void __fastcall ITempEntsSystem::Dust(
        ITempEntsSystem *const this,
        const Vector *const pos,
        const Vector *const dir,
        __m128i size,
        float speed)
{
  unsigned int v5; // r15d
  CPVSFilter filter; // [rsp+4h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+13Ch] [rbp-38h]

  v5 = _mm_cvtsi128_si32(size);
  v11 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FF45F0;
  CRecipientFilter::AddRecipientsByPVS(&filter, pos);
  (*(this->_vptr_IPredictionSystem + 26))(this, &filter, pos, dir, 0.0, *_mm_cvtsi32_si128(v5).m128i_i64, speed);
  filter._vptr_IRecipientFilter = &off_3FF45F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// ITempEntsSystem::MuzzleFlash  (line 123, @0x00000000021e6f60, libserver.so)  // inlines: CPVSFilter, ~CPVSFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPVS, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CEnvMuzzleFlash::InputFire
void __fastcall ITempEntsSystem::MuzzleFlash(
        ITempEntsSystem *const this,
        const Vector *const origin,
        const QAngle *const angles,
        float scale,
        unsigned int type)
{
  CPVSFilter filter; // [rsp+10h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+148h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FF45F0;
  CRecipientFilter::AddRecipientsByPVS(&filter, origin);
  (*(this->_vptr_IPredictionSystem + 25))(this, &filter, origin, angles, type, 0.0, scale);
  filter._vptr_IRecipientFilter = &off_3FF45F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// ITempEntsSystem::Ricochet  (line 135, @0x000000000224b040, libserver.so)  // inlines: CPVSFilter, ~CPVSFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPVS, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CBreakable::TraceAttack
void __fastcall ITempEntsSystem::Ricochet(
        ITempEntsSystem *const this,
        const Vector *const position,
        const Vector *const direction)
{
  CPVSFilter filter; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v7; // [rsp+138h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FF45F0;
  CRecipientFilter::AddRecipientsByPVS(&filter, position);
  (*(this->_vptr_IPredictionSystem + 3))(this, &filter, position, direction, 0.0);
  filter._vptr_IRecipientFilter = &off_3FF45F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


