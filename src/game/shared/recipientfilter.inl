
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRecipientFilter::Schema_DynamicBinding  (line 25, @0x0000000001eec640, libserver.so)
// calls: CRecipientFilter::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CRecipientFilter::Schema_DynamicBinding(const CRecipientFilter *const this)
{
  CRecipientFilter::Schema_VerifyBindingIsRegistered();
  return CRecipientFilter::s_pSchemaBinding;
}


// CSingleUserRecipientFilter::~CSingleUserRecipientFilter  (line 85, @0x0000000001f74220, libserver.so)
// calls: CRecipientFilter::~CRecipientFilter
void __fastcall CSingleUserRecipientFilter::~CSingleUserRecipientFilter(CSingleUserRecipientFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::~CRecipientFilter(this);
}


// CSingleUserRecipientFilter::~CSingleUserRecipientFilter  (line 85, @0x0000000001f74240, libserver.so)  // inlines: ~CSingleUserRecipientFilter
// calls: CRecipientFilter::~CRecipientFilter, operator delete
void __fastcall CSingleUserRecipientFilter::~CSingleUserRecipientFilter(CSingleUserRecipientFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::~CRecipientFilter(this);
  operator delete(this);
}


// CSingleUserRecipientFilter::CSingleUserRecipientFilter  (line 88, @0x00000000021b4d60, libserver.so)
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::~CRecipientFilter, _Unwind_Resume
// callers: Host_Say, CDOTABaseAbility::CastAbility, CDOTAGamerules::ClientMsg_Pause, CDOTAGamerules::ClientMsg_SwapRequest, CDOTAGamerules::Think, CDOTA_BaseNPC_Hero::PurchaseItems
void __fastcall CSingleUserRecipientFilter::CSingleUserRecipientFilter(
        CSingleUserRecipientFilter *const this,
        CEntityInstance *player)
{
  CRecipientFilter::CRecipientFilter(this);
  this->_vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::AddRecipient(this, player);
}


// CTeamRecipientFilter::~CTeamRecipientFilter  (line 97, @0x0000000002112b30, libserver.so)  // inlines: ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, ~CRecipientFilter, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >::RemoveAll, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CTeamRecipientFilter::~CTeamRecipientFilter(CTeamRecipientFilter *const this)
{
  uint32 m_nGrowSize; // edx
  CEntityIndex *m_pMemory; // rsi
  uint32 v4; // eax

  this->_vptr_IRecipientFilter = &off_3FFC090;
  CUtlVectorBase<CEntityIndex,CUtlMemoryFixedGrowable<CEntityIndex,65ul,int>>::RemoveAll(&this->m_Recipients);
  if ( this->m_Recipients.m_Memory.m_nAllocationCount < 0 )
  {
    v4 = this->m_Recipients.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = this->m_Recipients.m_Memory.m_nGrowSize;
    m_pMemory = this->m_Recipients.m_Memory.m_pMemory;
    v4 = m_nGrowSize & 0xC0000000;
    if ( &this->m_Recipients.m_Memory.m_FixedMemory != m_pMemory )
    {
      if ( m_pMemory != 0 && v4 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = this->m_Recipients.m_Memory.m_nGrowSize;
      }
      this->m_Recipients.m_Memory.m_pMemory = &this->m_Recipients.m_Memory.m_FixedMemory;
      this->m_Recipients.m_Memory.m_nAllocationCount = 65;
      this->m_Recipients.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_7;
    }
  }
  if ( v4 != 0 )
  {
LABEL_7:
    this->_vptr_IRecipientFilter = &off_3FCAC70;
    return;
  }
  CUtlMemory<CEntityIndex,int>::Purge(&this->m_Recipients.m_Memory);
  this->_vptr_IRecipientFilter = &off_3FCAC70;
}


// CTeamRecipientFilter::~CTeamRecipientFilter  (line 97, @0x0000000002112f70, libserver.so)  // inlines: ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, ~CRecipientFilter, ~CTeamRecipientFilter, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >::RemoveAll, operator delete, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CTeamRecipientFilter::~CTeamRecipientFilter(CTeamRecipientFilter *const this)
{
  uint32 m_nGrowSize; // edx
  CEntityIndex *m_pMemory; // rsi
  uint32 v4; // eax

  this->_vptr_IRecipientFilter = &off_3FFC090;
  CUtlVectorBase<CEntityIndex,CUtlMemoryFixedGrowable<CEntityIndex,65ul,int>>::RemoveAll(&this->m_Recipients);
  if ( this->m_Recipients.m_Memory.m_nAllocationCount < 0 )
  {
    v4 = this->m_Recipients.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = this->m_Recipients.m_Memory.m_nGrowSize;
    m_pMemory = this->m_Recipients.m_Memory.m_pMemory;
    v4 = m_nGrowSize & 0xC0000000;
    if ( &this->m_Recipients.m_Memory.m_FixedMemory != m_pMemory )
    {
      if ( m_pMemory != 0 && v4 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = this->m_Recipients.m_Memory.m_nGrowSize;
      }
      this->m_Recipients.m_Memory.m_pMemory = &this->m_Recipients.m_Memory.m_FixedMemory;
      this->m_Recipients.m_Memory.m_nAllocationCount = 65;
      this->m_Recipients.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_7;
    }
  }
  if ( v4 == 0 )
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_Recipients.m_Memory);
LABEL_7:
  this->_vptr_IRecipientFilter = &off_3FCAC70;
  operator delete(this);
}


// CBroadcastRecipientFilter::~CBroadcastRecipientFilter  (line 106, @0x0000000001eec660, libserver.so)
// calls: CRecipientFilter::~CRecipientFilter
void __fastcall CBroadcastRecipientFilter::~CBroadcastRecipientFilter(CBroadcastRecipientFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(this);
}


// CBroadcastRecipientFilter::~CBroadcastRecipientFilter  (line 106, @0x0000000001eec680, libserver.so)  // inlines: ~CBroadcastRecipientFilter
// calls: CRecipientFilter::~CRecipientFilter, operator delete
void __fastcall CBroadcastRecipientFilter::~CBroadcastRecipientFilter(CBroadcastRecipientFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(this);
  operator delete(this);
}


// CBroadcastRecipientFilter::CBroadcastRecipientFilter  (line 109, @0x0000000002567660, libserver.so)
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::~CRecipientFilter, _Unwind_Resume
// callers: CDOTAGamerules::Think, CDOTAPlayer::HandleAbilityDraftSelection, DOTA_CreateIllusions, CDOTAGCServerSystem::SendMatchDetailsToClients
void __fastcall CBroadcastRecipientFilter::CBroadcastRecipientFilter(CBroadcastRecipientFilter *const this)
{
  CRecipientFilter::CRecipientFilter(this);
  this->_vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(this);
}


// CReliableBroadcastRecipientFilter::~CReliableBroadcastRecipientFilter  (line 118, @0x0000000001f74180, libserver.so)  // inlines: ~CBroadcastRecipientFilter
// calls: CRecipientFilter::~CRecipientFilter
void __fastcall CReliableBroadcastRecipientFilter::~CReliableBroadcastRecipientFilter(
        CReliableBroadcastRecipientFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(this);
}


// CReliableBroadcastRecipientFilter::~CReliableBroadcastRecipientFilter  (line 118, @0x0000000001f741a0, libserver.so)  // inlines: ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::~CRecipientFilter, operator delete
void __fastcall CReliableBroadcastRecipientFilter::~CReliableBroadcastRecipientFilter(
        CReliableBroadcastRecipientFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(this);
  operator delete(this);
}


// CReliableBroadcastRecipientFilter::CReliableBroadcastRecipientFilter  (line 121, @0x00000000025676a0, libserver.so)  // inlines: CBroadcastRecipientFilter, ~CBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CRecipientFilter::~CRecipientFilter, _Unwind_Resume
// callers: CDOTAGamerules::ClientMsg_RollDice, CDOTAGamerules::ClientMsg_FlipCoin, CDOTA_Tutorial::ParseLessonKeys, CDOTA_Modifier_Alchemist_GoblinsGreed::OnDeath
void __fastcall CReliableBroadcastRecipientFilter::CReliableBroadcastRecipientFilter(
        CReliableBroadcastRecipientFilter *const this)
{
  CRecipientFilter::CRecipientFilter(this);
  this->_vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(this);
  this->_vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(this);
}


// CPASFilter::~CPASFilter  (line 130, @0x0000000001f741d0, libserver.so)
// calls: CRecipientFilter::~CRecipientFilter
void __fastcall CPASFilter::~CPASFilter(CPASFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(this);
}


// CPASFilter::~CPASFilter  (line 130, @0x0000000001f741f0, libserver.so)  // inlines: ~CPASFilter
// calls: CRecipientFilter::~CRecipientFilter, operator delete
void __fastcall CPASFilter::~CPASFilter(CPASFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(this);
  operator delete(this);
}


// CPASFilter::CPASFilter  (line 137, @0x0000000002056f90, libserver.so)
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CRecipientFilter::~CRecipientFilter, _Unwind_Resume
// callers: CreatePiecesFromBreakModelList, CPointValueRemapper::UpdateInterp
void __fastcall CPASFilter::CPASFilter(CPASFilter *const this, const Vector *const origin)
{
  CRecipientFilter::CRecipientFilter(this);
  this->_vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(this, origin);
}


// CPASAttenuationFilter::~CPASAttenuationFilter  (line 149, @0x000000000208fe40, libserver.so)  // inlines: ~CPASFilter
// calls: CRecipientFilter::~CRecipientFilter
void __fastcall CPASAttenuationFilter::~CPASAttenuationFilter(CPASAttenuationFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(this);
}


// CPASAttenuationFilter::~CPASAttenuationFilter  (line 149, @0x000000000208fe60, libserver.so)  // inlines: ~CPASAttenuationFilter, ~CPASFilter
// calls: CRecipientFilter::~CRecipientFilter, operator delete
void __fastcall CPASAttenuationFilter::~CPASAttenuationFilter(CPASAttenuationFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(this);
  operator delete(this);
}


// CPASAttenuationFilter::CPASAttenuationFilter  (line 163, @0x00000000021b4da0, libserver.so)  // inlines: CPASFilter, ~CPASFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CRecipientFilter::~CRecipientFilter, _Unwind_Resume
// callers: CBaseButton::ButtonTouch, CFourWheelVehiclePhysics::Think, CFuncTrain::Next
void __fastcall CPASAttenuationFilter::CPASAttenuationFilter(
        CPASAttenuationFilter *const this,
        CBaseEntity *entity,
        __m128i a3,
        float attenuation)
{
  float v4; // r14d
  vec_t v7; // xmm1_4
  float v8; // xmm1_4
  Vector origin; // [rsp+0h] [rbp-30h] BYREF

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
  *&origin.x = (*(entity->_vptr_IHandleEntity + 186))(entity, *a3.m128i_i64, attenuation);
  origin.z = v7;
  CRecipientFilter::CRecipientFilter(this);
  this->_vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(this, &origin);
  this->_vptr_IRecipientFilter = &off_3FECD70;
  *&origin.x = (*(entity->_vptr_IHandleEntity + 186))(entity);
  origin.z = v8;
  CPASAttenuationFilter::Filter(this, &origin, v4, v8);
}


// CPASAttenuationFilter::CPASAttenuationFilter  (line 169, @0x000000000224ae80, libserver.so)  // inlines: CPASFilter, ~CPASFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CRecipientFilter::~CRecipientFilter, _Unwind_Resume
// callers: CShatterGlassShard::EmitShatterSound
void __fastcall CPASAttenuationFilter::CPASAttenuationFilter(
        CPASAttenuationFilter *const this,
        const Vector *const origin,
        soundlevel_t soundlevel)
{
  float v6; // xmm1_4
  float v7; // xmm0_4

  CRecipientFilter::CRecipientFilter(this);
  this->_vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(this, origin);
  this->_vptr_IRecipientFilter = &off_3FECD70;
  if ( soundlevel <= soundlevel_t::SNDLVL_50dB )
  {
    v7 = 4.0;
    if ( soundlevel == soundlevel_t::SNDLVL_NONE )
      v7 = 0.0;
  }
  else
  {
    v6 = (soundlevel - 50);
    v7 = 20.0 / v6;
  }
  CPASAttenuationFilter::Filter(this, origin, v7, v6);
}


// CPASAttenuationFilter::CPASAttenuationFilter  (line 175, @0x000000000276c6c0, libserver.so)  // inlines: CPASFilter, ~CPASFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CRecipientFilter::~CRecipientFilter, _Unwind_Resume
// callers: CDOTA_MapTree::GrowBack
void __fastcall CPASAttenuationFilter::CPASAttenuationFilter(
        CPASAttenuationFilter *const this,
        const Vector *const origin,
        __m128i a3,
        float attenuation)
{
  float v4; // r14d
  float v7; // xmm1_4

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
  CRecipientFilter::CRecipientFilter(this);
  this->_vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(this, origin);
  this->_vptr_IRecipientFilter = &off_3FECD70;
  CPASAttenuationFilter::Filter(this, origin, v4, v7);
}


// CPVSFilter::~CPVSFilter  (line 231, @0x0000000002112be0, libserver.so)  // inlines: ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, ~CRecipientFilter, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >::RemoveAll, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CPVSFilter::~CPVSFilter(CPVSFilter *const this)
{
  uint32 m_nGrowSize; // edx
  CEntityIndex *m_pMemory; // rsi
  uint32 v4; // eax

  this->_vptr_IRecipientFilter = &off_3FFC090;
  CUtlVectorBase<CEntityIndex,CUtlMemoryFixedGrowable<CEntityIndex,65ul,int>>::RemoveAll(&this->m_Recipients);
  if ( this->m_Recipients.m_Memory.m_nAllocationCount < 0 )
  {
    v4 = this->m_Recipients.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = this->m_Recipients.m_Memory.m_nGrowSize;
    m_pMemory = this->m_Recipients.m_Memory.m_pMemory;
    v4 = m_nGrowSize & 0xC0000000;
    if ( &this->m_Recipients.m_Memory.m_FixedMemory != m_pMemory )
    {
      if ( m_pMemory != 0 && v4 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = this->m_Recipients.m_Memory.m_nGrowSize;
      }
      this->m_Recipients.m_Memory.m_pMemory = &this->m_Recipients.m_Memory.m_FixedMemory;
      this->m_Recipients.m_Memory.m_nAllocationCount = 65;
      this->m_Recipients.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_7;
    }
  }
  if ( v4 != 0 )
  {
LABEL_7:
    this->_vptr_IRecipientFilter = &off_3FCAC70;
    return;
  }
  CUtlMemory<CEntityIndex,int>::Purge(&this->m_Recipients.m_Memory);
  this->_vptr_IRecipientFilter = &off_3FCAC70;
}


// CPVSFilter::~CPVSFilter  (line 231, @0x0000000002112ec0, libserver.so)  // inlines: ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, ~CPVSFilter, ~CRecipientFilter, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >::RemoveAll, operator delete, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CPVSFilter::~CPVSFilter(CPVSFilter *const this)
{
  uint32 m_nGrowSize; // edx
  CEntityIndex *m_pMemory; // rsi
  uint32 v4; // eax

  this->_vptr_IRecipientFilter = &off_3FFC090;
  CUtlVectorBase<CEntityIndex,CUtlMemoryFixedGrowable<CEntityIndex,65ul,int>>::RemoveAll(&this->m_Recipients);
  if ( this->m_Recipients.m_Memory.m_nAllocationCount < 0 )
  {
    v4 = this->m_Recipients.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = this->m_Recipients.m_Memory.m_nGrowSize;
    m_pMemory = this->m_Recipients.m_Memory.m_pMemory;
    v4 = m_nGrowSize & 0xC0000000;
    if ( &this->m_Recipients.m_Memory.m_FixedMemory != m_pMemory )
    {
      if ( m_pMemory != 0 && v4 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = this->m_Recipients.m_Memory.m_nGrowSize;
      }
      this->m_Recipients.m_Memory.m_pMemory = &this->m_Recipients.m_Memory.m_FixedMemory;
      this->m_Recipients.m_Memory.m_nAllocationCount = 65;
      this->m_Recipients.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_7;
    }
  }
  if ( v4 == 0 )
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_Recipients.m_Memory);
LABEL_7:
  this->_vptr_IRecipientFilter = &off_3FCAC70;
  operator delete(this);
}


// CSingleUserPlusObserversFilter::~CSingleUserPlusObserversFilter  (line 243, @0x0000000002112a80, libserver.so)  // inlines: ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, ~CRecipientFilter, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >::RemoveAll, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CSingleUserPlusObserversFilter::~CSingleUserPlusObserversFilter(
        CSingleUserPlusObserversFilter *const this)
{
  uint32 m_nGrowSize; // edx
  CEntityIndex *m_pMemory; // rsi
  uint32 v4; // eax

  this->_vptr_IRecipientFilter = &off_3FFC090;
  CUtlVectorBase<CEntityIndex,CUtlMemoryFixedGrowable<CEntityIndex,65ul,int>>::RemoveAll(&this->m_Recipients);
  if ( this->m_Recipients.m_Memory.m_nAllocationCount < 0 )
  {
    v4 = this->m_Recipients.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = this->m_Recipients.m_Memory.m_nGrowSize;
    m_pMemory = this->m_Recipients.m_Memory.m_pMemory;
    v4 = m_nGrowSize & 0xC0000000;
    if ( &this->m_Recipients.m_Memory.m_FixedMemory != m_pMemory )
    {
      if ( m_pMemory != 0 && v4 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = this->m_Recipients.m_Memory.m_nGrowSize;
      }
      this->m_Recipients.m_Memory.m_pMemory = &this->m_Recipients.m_Memory.m_FixedMemory;
      this->m_Recipients.m_Memory.m_nAllocationCount = 65;
      this->m_Recipients.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_7;
    }
  }
  if ( v4 != 0 )
  {
LABEL_7:
    this->_vptr_IRecipientFilter = &off_3FCAC70;
    return;
  }
  CUtlMemory<CEntityIndex,int>::Purge(&this->m_Recipients.m_Memory);
  this->_vptr_IRecipientFilter = &off_3FCAC70;
}


// CSingleUserPlusObserversFilter::~CSingleUserPlusObserversFilter  (line 243, @0x0000000002112e10, libserver.so)  // inlines: ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, ~CRecipientFilter, ~CSingleUserPlusObserversFilter, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >::RemoveAll, operator delete, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CSingleUserPlusObserversFilter::~CSingleUserPlusObserversFilter(
        CSingleUserPlusObserversFilter *const this)
{
  uint32 m_nGrowSize; // edx
  CEntityIndex *m_pMemory; // rsi
  uint32 v4; // eax

  this->_vptr_IRecipientFilter = &off_3FFC090;
  CUtlVectorBase<CEntityIndex,CUtlMemoryFixedGrowable<CEntityIndex,65ul,int>>::RemoveAll(&this->m_Recipients);
  if ( this->m_Recipients.m_Memory.m_nAllocationCount < 0 )
  {
    v4 = this->m_Recipients.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = this->m_Recipients.m_Memory.m_nGrowSize;
    m_pMemory = this->m_Recipients.m_Memory.m_pMemory;
    v4 = m_nGrowSize & 0xC0000000;
    if ( &this->m_Recipients.m_Memory.m_FixedMemory != m_pMemory )
    {
      if ( m_pMemory != 0 && v4 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = this->m_Recipients.m_Memory.m_nGrowSize;
      }
      this->m_Recipients.m_Memory.m_pMemory = &this->m_Recipients.m_Memory.m_FixedMemory;
      this->m_Recipients.m_Memory.m_nAllocationCount = 65;
      this->m_Recipients.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_7;
    }
  }
  if ( v4 == 0 )
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_Recipients.m_Memory);
LABEL_7:
  this->_vptr_IRecipientFilter = &off_3FCAC70;
  operator delete(this);
}


