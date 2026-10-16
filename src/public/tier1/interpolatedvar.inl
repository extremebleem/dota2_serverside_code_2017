
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IInterpolatedVar::~IInterpolatedVar  (line 456, @0x0000000001ec1410, libserver.so)
void __fastcall IInterpolatedVar::~IInterpolatedVar(IInterpolatedVar *const this)
{
  this->_vptr_IInterpolatedVar = off_3FB4250;  // vptr: IInterpolatedVar
}


// IInterpolatedVar::~IInterpolatedVar  (line 456, @0x0000000001ec1a50, libserver.so)  // inlines: ~IInterpolatedVar
// calls: operator delete
void __fastcall IInterpolatedVar::~IInterpolatedVar(IInterpolatedVar *const this)
{
  this->_vptr_IInterpolatedVar = off_3FB4250;  // vptr: IInterpolatedVar
  operator delete(this);
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetContext  (line 786, @0x0000000001ec1a10, libserver.so)
void *__fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetContext(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  return 0;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::~CInterpolatedVarArrayBase  (line 934, @0x0000000001ec1ce0, libserver.so)  // inlines: ClearHistory, GetPerPhaseData, GetPhaseCount, Purge, RemoveAll, ~CInterpolatedVarHistory, ~IInterpolatedVar, ~PerPhaseData_t
// calls: free, operator delete []
// callers: CRenderComponent::CRenderComponent
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::~CInterpolatedVarArrayBase(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  int v1; // ecx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *m_pPerPhaseData; // rsi
  char v4; // di
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v5; // rax
  int v6; // edx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v7; // rdi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v8; // rbx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v9; // rbx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *m_pElements; // rdi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v11; // r13
  int v12; // eax
  EnableRenderingInfo_t *m_pValue; // rdi

  v1 = 0;
  this->_vptr_IInterpolatedVar = &off_3FB4690;
  m_pPerPhaseData = this->m_pPerPhaseData;
  v4 = *(this + 32);
  while ( v1 < 2 - ((v4 & 0x20) == 0) )
  {
    v5 = m_pPerPhaseData;
    if ( v1 != 0 )
    {
      if ( (v4 & 0x20) == 0 )
        goto LABEL_7;
      v5 = m_pPerPhaseData + 1;
    }
    if ( v5 != 0 )
    {
      v6 = *(&v5->m_VarHistory + 2);
      v5->m_VarHistory.m_nFreeDataElements = -1;
      v6 &= 0xFFF81FFF;
      *(&v5->m_VarHistory + 2) = v6;
      *(&v5->m_VarHistory + 8) = v6 & 0xC0;
      v4 = *(this + 32);
      m_pPerPhaseData = this->m_pPerPhaseData;
    }
LABEL_7:
    ++v1;
  }
  v7 = m_pPerPhaseData;
  if ( m_pPerPhaseData != 0 )
  {
    v8 = &m_pPerPhaseData[*&m_pPerPhaseData[-1].m_flInterpolationAmount];
    if ( m_pPerPhaseData != v8 )
    {
      v9 = v8 - 1;
      do
      {
        m_pElements = v9->m_VarHistory.m_pElements;
        v11 = v9;
        *(&v9->m_VarHistory + 5) &= 0xFE07u;
        --v9;
        free(m_pElements);
        v12 = *(&v9[1].m_VarHistory + 2);
        v9[1].m_VarHistory.m_pElements = 0;
        v9[1].m_VarHistory.m_nFreeDataElements = -1;
        v12 &= 0xFFF81FFF;
        *(&v9[1].m_VarHistory + 2) = v12;
        *(&v9[1].m_VarHistory + 8) = v12 & 0xC0;
        v7 = this->m_pPerPhaseData;
      }
      while ( v7 != v11 );
    }
    operator delete[](&v7[-1].m_flInterpolationAmount);
  }
  m_pValue = this->m_pValue;
  if ( m_pValue != 0 )
    operator delete[](m_pValue);
  this->_vptr_IInterpolatedVar = off_3FB4250;  // vptr: IInterpolatedVar
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::~CInterpolatedVarArrayBase  (line 934, @0x0000000001ec3980, libserver.so)  // inlines: ClearHistory, GetPerPhaseData, GetPhaseCount, Purge, RemoveAll, ~CInterpolatedVarArrayBase, ~CInterpolatedVarHistory, ~IInterpolatedVar, ~PerPhaseData_t
// calls: free, operator delete [], operator delete
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::~CInterpolatedVarArrayBase(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  int v1; // ecx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *m_pPerPhaseData; // rsi
  char v4; // di
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v5; // rax
  int v6; // edx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v7; // rdi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v8; // rbx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v9; // rbx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *m_pElements; // rdi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v11; // r13
  int v12; // eax
  EnableRenderingInfo_t *m_pValue; // rdi

  v1 = 0;
  this->_vptr_IInterpolatedVar = &off_3FB4690;
  m_pPerPhaseData = this->m_pPerPhaseData;
  v4 = *(this + 32);
  while ( v1 < 2 - ((v4 & 0x20) == 0) )
  {
    v5 = m_pPerPhaseData;
    if ( v1 != 0 )
    {
      if ( (v4 & 0x20) == 0 )
        goto LABEL_7;
      v5 = m_pPerPhaseData + 1;
    }
    if ( v5 != 0 )
    {
      v6 = *(&v5->m_VarHistory + 2);
      v5->m_VarHistory.m_nFreeDataElements = -1;
      v6 &= 0xFFF81FFF;
      *(&v5->m_VarHistory + 2) = v6;
      *(&v5->m_VarHistory + 8) = v6 & 0xC0;
      v4 = *(this + 32);
      m_pPerPhaseData = this->m_pPerPhaseData;
    }
LABEL_7:
    ++v1;
  }
  v7 = m_pPerPhaseData;
  if ( m_pPerPhaseData != 0 )
  {
    v8 = &m_pPerPhaseData[*&m_pPerPhaseData[-1].m_flInterpolationAmount];
    if ( m_pPerPhaseData != v8 )
    {
      v9 = v8 - 1;
      do
      {
        m_pElements = v9->m_VarHistory.m_pElements;
        v11 = v9;
        *(&v9->m_VarHistory + 5) &= 0xFE07u;
        --v9;
        free(m_pElements);
        v12 = *(&v9[1].m_VarHistory + 2);
        v9[1].m_VarHistory.m_pElements = 0;
        v9[1].m_VarHistory.m_nFreeDataElements = -1;
        v12 &= 0xFFF81FFF;
        *(&v9[1].m_VarHistory + 2) = v12;
        *(&v9[1].m_VarHistory + 8) = v12 & 0xC0;
        v7 = this->m_pPerPhaseData;
      }
      while ( v7 != v11 );
    }
    operator delete[](&v7[-1].m_flInterpolationAmount);
  }
  m_pValue = this->m_pValue;
  if ( m_pValue != 0 )
    operator delete[](m_pValue);
  this->_vptr_IInterpolatedVar = off_3FB4250;  // vptr: IInterpolatedVar
  operator delete(this);
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::Setup  (line 962, @0x0000000001ec2ab0, libserver.so)  // inlines: V_memset, memset
// calls: operator delete [], operator new [], memset
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::Setup(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        void *pValue,
        int flags)
{
  EnableRenderingInfo_t *m_pValue; // rdi
  EnableRenderingInfo_t *v5; // rax
  char v6; // dl

  *(this + 32) = flags & 7 | *(this + 32) & 0xF8;
  m_pValue = this->m_pValue;
  if ( m_pValue != 0 )
    operator delete[](m_pValue);
  v5 = operator new[](4LL * (*(this + 33) & 0x3F));
  v6 = *(this + 33);
  this->m_pValue = v5;
  memset(v5, 0, 4LL * (v6 & 0x3F));
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::HasBeenSetup  (line 990, @0x0000000001ec1800, libserver.so)
bool __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::HasBeenSetup(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  return this->m_pValue != 0;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetDebugName  (line 1005, @0x0000000001ec1c80, libserver.so)  // inlines: CUtlString
// calls: CUtlString::Set
CUtlString __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetDebugName(
        CUtlString *a1,
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        int nElement)
{
  a1->m_pString = 0;
  CUtlString::Set(a1, "");
  return a1;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetDebugBaseName  (line 1025, @0x0000000001ec1cb0, libserver.so)  // inlines: CUtlString
// calls: CUtlString::Set
CUtlString __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetDebugBaseName(
        CUtlString *a1,
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  a1->m_pString = 0;
  CUtlString::Set(a1, "");
  return a1;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::IsProcedural  (line 1053, @0x0000000001ec18b0, libserver.so)
bool __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::IsProcedural(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  return 1;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::HasProceduralDelegates  (line 1059, @0x0000000001ec18c0, libserver.so)
bool __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::HasProceduralDelegates(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  return (*(this->_vptr_IInterpolatedVar + 48))(this);
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SetVarTypeBit  (line 1065, @0x0000000001ec18e0, libserver.so)
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::SetVarTypeBit(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        int eVarTypeBit)
{
  *(this + 34) = (8 * (eVarTypeBit & 7)) | *(this + 34) & 0xC7;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetVarTypeBit  (line 1072, @0x0000000001ec1900, libserver.so)
int __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetVarTypeBit(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  return (4 * *(this + 34)) >> 5;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SetDebugPhase  (line 1087, @0x0000000001ec1750, libserver.so)  // inlines: GetDebugMaskForPhase
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::SetDebugPhase(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase)
{
  int v2; // eax

  if ( ivPhase == InterpolatedVarPhase_t::IV_PHASE_RENDERING )
    LOBYTE(v2) = 3;
  else
    v2 = (1 << ivPhase) & 3;
  *(this + 34) = (v2 << 6) | *(this + 34) & 0x3F;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SetDebug  (line 1093, @0x0000000001ec16a0, libserver.so)
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::SetDebug(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        bool bDebug,
        int nSpewIndex)
{
  *(this + 35) = bDebug | *(this + 35) & 0xFE;
  (*(this->_vptr_IInterpolatedVar + 21))(this, nSpewIndex);
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetDebug  (line 1100, @0x0000000001ec1560, libserver.so)  // inlines: GetDebugMaskForPhase
bool __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetDebug(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase)
{
  char v2; // r8
  bool result; // al

  v2 = 3;
  if ( ivPhase != InterpolatedVarPhase_t::IV_PHASE_RENDERING )
    v2 = 1 << ivPhase;
  result = 0;
  if ( ((*(this + 34) >> 6) & v2) != 0 )
    return *(this + 35) & 1;
  return result;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SetAutoSpew  (line 1109, @0x0000000001ec16d0, libserver.so)
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::SetAutoSpew(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        bool bSpew,
        int nSpewIndex)
{
  *(this + 35) = (2 * bSpew) | *(this + 35) & 0xFD;
  (*(this->_vptr_IInterpolatedVar + 21))(this, nSpewIndex);
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SetSpewIndex  (line 1125, @0x0000000001ec1700, libserver.so)
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::SetSpewIndex(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        int nSpewIndex)
{
  unsigned __int8 v2; // al
  char v3; // al
  char v4; // al

  v2 = *(this + 33) & 0x3F;
  if ( v2 <= nSpewIndex )
  {
    v4 = (4 * v2 - 4) >> 2;
  }
  else
  {
    v3 = -1;
    if ( nSpewIndex >= 0 )
      v3 = nSpewIndex;
    v4 = (4 * v3) >> 2;
  }
  *(this + 35) = (4 * v4) | *(this + 35) & 3;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SpewInterpolatedVar  (line 1132, @0x0000000001eca680, libserver.so)  // inlines: String, ~CUtlString
// calls: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SpewInterpolatedVarToString, CUtlString::Get, Msg, CUtlString::FreeMemoryBlock, _Unwind_Resume
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::SpewInterpolatedVar(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase,
        float flTime,
        InterpolationBehavior_t behavior,
        char bSpewAllEntries,
        unsigned int nForceArrayIndex)
{
  const char *v6; // rax
  CUtlString out; // [rsp+0h] [rbp-20h] BYREF

  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::SpewInterpolatedVarToString(
    &out,
    this,
    flTime,
    ivPhase,
    behavior,
    bSpewAllEntries,
    nForceArrayIndex);
  v6 = CUtlString::Get(&out);
  Msg("%s", v6);
  if ( out.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&out);
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SetEntityIndex  (line 1141, @0x0000000001ec1920, libserver.so)
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::SetEntityIndex(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        CEntityIndex entIndex)
{
  this->m_nEntityIndex = entIndex;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetEntityIndex  (line 1147, @0x0000000001ec17b0, libserver.so)
CEntityIndex __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetEntityIndex(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  return this->m_nEntityIndex.m_Data;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SetInterpolationTimeType  (line 1153, @0x0000000001ec2e10, libserver.so)  // inlines: CInterpolatedVarHistory, GetInterpolatedVarPhaseName, GetNameByToken, GetRaw, PerPhaseData_t, Purge, RemoveAll, SetDataArrayCount, SetIsMemcopyableType, String, TransferDataTo, ~CInterpolatedVarHistory, ~CUtlString, ~PerPhaseData_t
// calls: operator new [], free, operator delete [], CUtlString::Get, Msg, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "[%9.9s] (%d)%s SetInterpolationTimeType - changing interpolation phase type\n"
// globals: g_InterpolatedVarPhaseNames, tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)::unknown
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::SetInterpolationTimeType(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        bool bIsClientAuthoritative,
        InterpolatedVarInterpolationTimeType_t wivType)
{
  bool v4; // r12
  char v6; // al
  char v7; // al
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *m_pPerPhaseData; // r12
  char *v9; // rax
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v10; // rbx
  int v11; // edx
  int v12; // eax
  unsigned int v13; // eax
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *i; // rbx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *m_pElements; // rdi
  int v16; // eax
  _QWORD *v17; // rax
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v18; // rsi
  _QWORD *v19; // rbx
  _QWORD *v20; // rdx
  int v21; // ecx
  char v22; // al
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v23; // rcx
  int v24; // r14d
  void *v25; // rdi
  int v26; // eax
  const char *v27; // rax
  char *name; // rsi
  tokenset_t<InterpolatedVarPhase_t> *v29; // r8
  CUtlString v30; // [rsp+10h] [rbp-30h] BYREF

  v4 = !bIsClientAuthoritative;
  v6 = (wivType << 7) | *(this + 32) & 0x7F;
  *(this + 32) = v6;
  if ( ((v6 & 0x20) != 0) == !bIsClientAuthoritative )
    return;
  if ( (*(this->_vptr_IInterpolatedVar + 19))(this, 0xFFFFFFFFLL) != 0 )
  {
    (*(this->_vptr_IInterpolatedVar + 16))(&v30, this, (*(this + 35) >> 2));
    v27 = CUtlString::Get(&v30);
    name = g_InterpolatedVarPhaseNames[0].name;
    if ( g_InterpolatedVarPhaseNames[0].name != 0 )
    {
      if ( v4 == g_InterpolatedVarPhaseNames[0].token )
        goto LABEL_22;
      v29 = g_InterpolatedVarPhaseNames;
      while ( 1 )
      {
        ++v29;
        name = v29->name;
        if ( v29->name == 0 )
          break;
        if ( v4 == v29->token )
          goto LABEL_22;
      }
    }
    name = tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)const::unknown;
LABEL_22:
    Msg(
      "[%9.9s] (%d)%s SetInterpolationTimeType - changing interpolation phase type\n",
      name,
      this->m_nEntityIndex.m_Data,
      v27);
    if ( v30.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v30);
  }
  v7 = (32 * v4) | *(this + 32) & 0xDF;
  m_pPerPhaseData = this->m_pPerPhaseData;
  *(this + 32) = v7;
  if ( bIsClientAuthoritative )
  {
    v9 = operator new[](0x28u);
    v9[16] &= 0xC0u;
    v10 = (v9 + 8);
    *v9 = 1;
    *(v9 + 9) &= 0xFE07u;
    *(v9 + 1) = 0;
    *(v9 + 5) = -1;
    v11 = *(v9 + 4);
    *(v9 + 8) = 0;
    *(v9 + 6) = 0;
    *(v9 + 7) = 0;
    v11 &= 0xFFF81FFF;
    *(v9 + 4) = v11;
    *(v9 + 8) = v11 & 0x103F | 0x40;
    v9[19] = HIBYTE(v11) & 0x81 | 0x10;
    v9[17] = 16;
    this->m_pPerPhaseData = (v9 + 8);
  }
  else
  {
    v17 = operator new[](0x48u);
    v18 = (v17 + 1);
    v19 = v17;
    *v17 = 2;
    v20 = v17 + 1;
    do
    {
      *(v20 + 5) &= 0xFE07u;
      *v20 = 0;
      *(v20 + 8) &= 0xC0u;
      *(v20 + 3) = -1;
      v20 += 4;
      *(v20 - 2) = 0;
      v21 = *(v20 - 6);
      *(v20 - 4) = 0;
      *(v20 - 3) = 0;
      v21 &= 0xFFF81FFF;
      *(v20 - 6) = v21;
      *(v20 - 12) = v21 & 0x103F | 0x40;
      *(v20 - 21) = HIBYTE(v21) & 0x81 | 0x10;
      *(v20 - 23) = 16;
    }
    while ( v20 != v17 + 9 );
    v22 = *(this + 33);
    this->m_pPerPhaseData = v18;
    v23 = v18;
    v24 = v22 & 0x3F;
    if ( (v22 & 0x3F) == 0 )
      v24 = 1;
    if ( v24 != ((*(v19 + 24) >> 6) & 0x3F) )
    {
      v25 = v19[5];
      *(v19 + 25) &= 0xFE07u;
      free(v25);
      v26 = *(v19 + 12);
      v19[5] = 0;
      *(v19 + 13) = -1;
      v26 &= 0xFFF81FFF;
      *(v19 + 12) = v26;
      *(v19 + 48) = v26 & 0xC0;
      *(v19 + 24) = (v24 << 6) | v19[6] & 0xF03F;
      v23 = this->m_pPerPhaseData;
    }
    *(&v23[1].m_VarHistory + 9) = (*(this + 32) >> 2) & 0x10 | *(&v23[1].m_VarHistory + 9) & 0xEF;
    v10 = this->m_pPerPhaseData;
  }
  *(&v10->m_VarHistory + 5) &= 0xFE07u;
  free(v10->m_VarHistory.m_pElements);
  v12 = *(&v10->m_VarHistory + 2);
  v10->m_VarHistory.m_pElements = 0;
  v10->m_VarHistory.m_nFreeDataElements = -1;
  v12 &= 0xFFF81FFF;
  *(&v10->m_VarHistory + 2) = v12;
  *(&v10->m_VarHistory + 8) = v12 & 0xC0;
  v10->m_VarHistory.m_pElements = m_pPerPhaseData->m_VarHistory.m_pElements;
  *(&v10->m_VarHistory + 8) = v12 & 0xC0 | *(&m_pPerPhaseData->m_VarHistory + 8) & 0x3F;
  *(&v10->m_VarHistory + 4) = *(&m_pPerPhaseData->m_VarHistory + 4) & 0xFC0 | *(&v10->m_VarHistory + 4) & 0xF03F;
  *(&v10->m_VarHistory + 9) = *(&m_pPerPhaseData->m_VarHistory + 9) & 0x10 | *(&v10->m_VarHistory + 9) & 0xEF;
  *(&v10->m_VarHistory + 2) = *(&m_pPerPhaseData->m_VarHistory + 2) & 0x7E000 | *(&v10->m_VarHistory + 2) & 0xFFF81FFF;
  *(&v10->m_VarHistory + 5) = *(&m_pPerPhaseData->m_VarHistory + 5) & 0x1F8 | *(&v10->m_VarHistory + 5) & 0xFE07;
  *(&v10->m_VarHistory + 11) = *(&m_pPerPhaseData->m_VarHistory + 11) & 0x7E | *(&v10->m_VarHistory + 11) & 0x81;
  v10->m_VarHistory.m_nFreeDataElements = m_pPerPhaseData->m_VarHistory.m_nFreeDataElements;
  *(&m_pPerPhaseData->m_VarHistory + 5) &= 0xFE07u;
  m_pPerPhaseData->m_VarHistory.m_pElements = 0;
  m_pPerPhaseData->m_VarHistory.m_nFreeDataElements = -1;
  v13 = *(&m_pPerPhaseData->m_VarHistory + 2) & 0xFFF81FFF;
  *(&m_pPerPhaseData->m_VarHistory + 2) = v13;
  *(&m_pPerPhaseData->m_VarHistory + 8) = v13 & 0xC0;
  v10->m_nLastActualChangeTick = m_pPerPhaseData->m_nLastActualChangeTick;
  v10->m_nExpectedLatchIntervalTicks = m_pPerPhaseData->m_nExpectedLatchIntervalTicks;
  v10->m_flInterpolationAmount = m_pPerPhaseData->m_flInterpolationAmount;
  for ( i = &m_pPerPhaseData[*&m_pPerPhaseData[-1].m_flInterpolationAmount];
        m_pPerPhaseData != i;
        *(&i->m_VarHistory + 8) = v16 & 0xC0 )
  {
    --i;
    m_pElements = i->m_VarHistory.m_pElements;
    *(&i->m_VarHistory + 5) &= 0xFE07u;
    free(m_pElements);
    v16 = *(&i->m_VarHistory + 2);
    i->m_VarHistory.m_pElements = 0;
    i->m_VarHistory.m_nFreeDataElements = -1;
    v16 &= 0xFFF81FFF;
    *(&i->m_VarHistory + 2) = v16;
  }
  operator delete[](&m_pPerPhaseData[-1].m_flInterpolationAmount);
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::IsClientAuthoritative  (line 1190, @0x0000000001ec1940, libserver.so)
bool __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::IsClientAuthoritative(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  return ((*(this + 32) >> 5) ^ 1) & 1;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetInterpolationTimeType  (line 1196, @0x0000000001ec1930, libserver.so)
InterpolatedVarInterpolationTimeType_t __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetInterpolationTimeType(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  return *(this + 32) >> 7;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetExpectedLatchInterval  (line 1203, @0x0000000001ec2260, libserver.so)  // inlines: GetPerPhaseData, IsPhaseAvailable
int __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetExpectedLatchInterval(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase)
{
  int result; // eax

  if ( ivPhase == InterpolatedVarPhase_t::IV_PHASE_CLIENT_AUTHORITATIVE )
    return this->m_pPerPhaseData->m_nExpectedLatchIntervalTicks;
  result = 1;
  if ( ivPhase == InterpolatedVarPhase_t::IV_PHASE_SERVER_AUTHORITATIVE && (*(this + 32) & 0x20) != 0 )
    return this->m_pPerPhaseData[1].m_nExpectedLatchIntervalTicks;
  return result;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SetInterpolationAmount  (line 1210, @0x0000000001ec25b0, libserver.so)  // inlines: GetPerPhaseData, IsPhaseAvailable
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::SetInterpolationAmount(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase,
        float seconds,
        int nLatchIntervalTickCount)
{
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *m_pPerPhaseData; // rax

  if ( ivPhase == InterpolatedVarPhase_t::IV_PHASE_CLIENT_AUTHORITATIVE )
  {
    this->m_pPerPhaseData->m_flInterpolationAmount = seconds;
    m_pPerPhaseData = this->m_pPerPhaseData;
LABEL_3:
    m_pPerPhaseData->m_nExpectedLatchIntervalTicks = nLatchIntervalTickCount;
    return;
  }
  if ( ivPhase == InterpolatedVarPhase_t::IV_PHASE_SERVER_AUTHORITATIVE && (*(this + 32) & 0x20) != 0 )
  {
    this->m_pPerPhaseData[1].m_flInterpolationAmount = seconds;
    m_pPerPhaseData = 0;
    if ( (*(this + 32) & 0x20) != 0 )
    {
      this->m_pPerPhaseData[1].m_nExpectedLatchIntervalTicks = nLatchIntervalTickCount;
      return;
    }
    goto LABEL_3;
  }
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetInterpolationAmount  (line 1221, @0x0000000001ec2560, libserver.so)  // inlines: GetPerPhaseData, GetTickInterval, IsPhaseAvailable
float __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetInterpolationAmount(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase)
{
  if ( ivPhase == InterpolatedVarPhase_t::IV_PHASE_CLIENT_AUTHORITATIVE )
    return this->m_pPerPhaseData->m_flInterpolationAmount;
  if ( ivPhase == InterpolatedVarPhase_t::IV_PHASE_SERVER_AUTHORITATIVE && (*(this + 32) & 0x20) != 0 )
    return this->m_pPerPhaseData[1].m_flInterpolationAmount;
  return g_flInterpolatedVarsTickInterval;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetFlags  (line 1227, @0x0000000001ec1610, libserver.so)
int __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetFlags(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  return *(this + 32) & 7;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::HasFlag  (line 1233, @0x0000000001ec1620, libserver.so)
bool __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::HasFlag(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        int nFlag)
{
  return (*(this + 32) & 7 & nFlag) != 0;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::AddFlags  (line 1239, @0x0000000001ec1640, libserver.so)
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::AddFlags(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        int nFlagsToAdd)
{
  *(this + 32) = (*(this + 32) | nFlagsToAdd) & 7 | *(this + 32) & 0xF8;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::RemoveFlags  (line 1245, @0x0000000001ec1660, libserver.so)
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::RemoveFlags(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        int nFlagsToRemove)
{
  *(this + 32) = *(this + 32) & 7 & ~nFlagsToRemove | *(this + 32) & 0xF8;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SetInWrappedVarLatchList  (line 1251, @0x0000000001ec1ef0, libserver.so)
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::SetInWrappedVarLatchList(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase,
        bool bInList)
{
  if ( bInList )
    *(this + 32) = (8 * (((1 << ivPhase) | (*(this + 32) >> 3)) & 3)) | *(this + 32) & 0xE7;
  else
    *(this + 32) = (8 * (__ROL4__(-2, ivPhase) & (*(this + 32) >> 3) & 3)) | *(this + 32) & 0xE7;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::IsInWrappedVarLatchList  (line 1265, @0x0000000001ec1680, libserver.so)
bool __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::IsInWrappedVarLatchList(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase)
{
  return (((*(this + 32) >> 3) & 3) >> ivPhase) & 1;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SetInterpolatedVarContains  (line 1309, @0x0000000001ec4d60, libserver.so)  // inlines: GetInterpolatedVarPhaseName, GetNameByToken, GetRaw, String, ~CUtlString
// calls: CUtlString::Get, CFmtStrN<256, false>::CFmtStrN, CUtlString::FreeMemoryBlock, Msg, __stack_chk_fail, _Unwind_Resume
// strings: "[%9.9s] (%5d)%s:", "%s SetInterpolatedVarContains %s -> %s\n"
// globals: g_InterpolatedVarPhaseNames, tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)::unknown
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::SetInterpolatedVarContains(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase)
{
  const char *v4; // rax
  char *name; // rdx
  tokenset_t<InterpolatedVarPhase_t> *v6; // r9
  char *v7; // rdx
  tokenset_t<InterpolatedVarPhase_t> *v8; // rax
  char *v9; // rcx
  int v10; // esi
  tokenset_t<InterpolatedVarPhase_t> *v11; // rax
  CUtlString v12; // [rsp+0h] [rbp-150h] BYREF
  CFmtStr preString; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v14; // [rsp+128h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  if ( ((32 * *(this + 34)) >> 5) != ivPhase )
  {
    if ( (*(this->_vptr_IInterpolatedVar + 19))(this) == 0 )
    {
LABEL_3:
      *(this + 34) = ivPhase & 7 | *(this + 34) & 0xF8;
      return;
    }
    (*(this->_vptr_IInterpolatedVar + 16))(&v12, this, (*(this + 35) >> 2));
    v4 = CUtlString::Get(&v12);
    name = g_InterpolatedVarPhaseNames[0].name;
    if ( g_InterpolatedVarPhaseNames[0].name != 0 )
    {
      if ( ivPhase == g_InterpolatedVarPhaseNames[0].token )
      {
LABEL_11:
        CFmtStrN<256,false>::CFmtStrN(&preString, "[%9.9s] (%5d)%s:", name, this->m_nEntityIndex.m_Data, v4);
        if ( v12.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v12);
        v7 = g_InterpolatedVarPhaseNames[0].name;
        if ( g_InterpolatedVarPhaseNames[0].name != 0 )
        {
          if ( ivPhase == g_InterpolatedVarPhaseNames[0].token )
          {
            v9 = g_InterpolatedVarPhaseNames[0].name;
          }
          else
          {
            v8 = g_InterpolatedVarPhaseNames;
            while ( 1 )
            {
              ++v8;
              v9 = v8->name;
              if ( v8->name == 0 )
                break;
              if ( ivPhase == v8->token )
                goto LABEL_19;
            }
            v9 = tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)const::unknown;
          }
LABEL_19:
          v10 = (32 * *(this + 34)) >> 5;
          if ( g_InterpolatedVarPhaseNames[0].token != v10 )
          {
            v11 = g_InterpolatedVarPhaseNames;
            while ( 1 )
            {
              ++v11;
              v7 = v11->name;
              if ( v11->name == 0 )
                break;
              if ( v10 == v11->token )
                goto LABEL_24;
            }
            v7 = tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)const::unknown;
          }
        }
        else
        {
          v7 = tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)const::unknown;
          v9 = tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)const::unknown;
        }
LABEL_24:
        Msg("%s SetInterpolatedVarContains %s -> %s\n", preString.m_szBuf, v7, v9);
        goto LABEL_3;
      }
      v6 = g_InterpolatedVarPhaseNames;
      while ( 1 )
      {
        ++v6;
        name = v6->name;
        if ( v6->name == 0 )
          break;
        if ( ivPhase == v6->token )
          goto LABEL_11;
      }
    }
    name = tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)const::unknown;
    goto LABEL_11;
  }
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetInterpolatedVarContains  (line 1325, @0x0000000001ec17c0, libserver.so)
InterpolatedVarPhase_t __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetInterpolatedVarContains(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  return (32 * *(this + 34)) >> 5;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SetNeedsToInterpolate  (line 1331, @0x0000000001ec1f50, libserver.so)
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::SetNeedsToInterpolate(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase,
        bool bNeedsToInterpolate)
{
  if ( bNeedsToInterpolate )
    *(this + 33) = (((1 << ivPhase) | (*(this + 33) >> 6)) << 6) | *(this + 33) & 0x3F;
  else
    *(this + 33) = ((__ROL4__(-2, ivPhase) & (*(this + 33) >> 6)) << 6) | *(this + 33) & 0x3F;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetNeedsToInterpolate  (line 1346, @0x0000000001ec17e0, libserver.so)
bool __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetNeedsToInterpolate(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase)
{
  return (*(this + 33) >> 6 >> ivPhase) & 1;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::RestoreLastSimulationValue  (line 1353, @0x0000000001ec5140, libserver.so)  // inlines: CUtlString, GetDebugString, GetInterpolatedVarPhaseName, GetNameByToken, GetPerPhaseData, GetRaw, GetValue, SetValuePtr, String, Value, operator(), ~CUtlString
// calls: CUtlString::Format, CUtlString::Get, CFmtStrN<256, false>::CFmtStrN, CUtlString::FreeMemoryBlock, Msg, __stack_chk_fail, _Unwind_Resume
// strings: "Enable : %d SplitScreen %X", "[%9.9s] (%5d)%s:", "%s RestoreLastSimulationValue %s\n"
// globals: g_InterpolatedVarPhaseNames, tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)::unknown
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::RestoreLastSimulationValue(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivHistory)
{
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *m_pPerPhaseData; // rax
  __int64 v5; // rcx
  int v6; // edx
  unsigned __int16 *v7; // r13
  char v8; // r14
  _QWORD *v9; // rax
  unsigned int v10; // r14d
  _QWORD *v11; // rdi
  char *v12; // rax
  const char *v13; // rax
  char *name; // rdx
  tokenset_t<InterpolatedVarPhase_t> *v15; // r9
  const char *v16; // rax
  CUtlString valString; // [rsp+10h] [rbp-160h] BYREF
  CUtlString v18; // [rsp+20h] [rbp-150h] BYREF
  CFmtStr preString; // [rsp+30h] [rbp-140h] BYREF
  unsigned __int64 v20; // [rsp+148h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  if ( ivHistory != InterpolatedVarPhase_t::IV_PHASE_CLIENT_AUTHORITATIVE )
  {
    if ( (*(this + 32) & 0x20) == 0 )
      return;
    m_pPerPhaseData = this->m_pPerPhaseData + 1;
  }
  else
  {
    m_pPerPhaseData = this->m_pPerPhaseData;
  }
  if ( m_pPerPhaseData != 0 && (*(&m_pPerPhaseData->m_VarHistory + 2) & 0x7E000) != 0 )
  {
    v5 = (*(&m_pPerPhaseData->m_VarHistory + 5) >> 3) & 0x3F;
    v6 = *(&m_pPerPhaseData->m_VarHistory + 8) & 0x3F;
    if ( v6 >= v5 )
      v6 -= v5;
    v7 = &m_pPerPhaseData->m_VarHistory.m_pElements[v5]
       + 2
       * ((*(&m_pPerPhaseData->m_VarHistory + 4) >> 6) & 0x3F)
       * m_pPerPhaseData->m_VarHistory.m_pElements[v6].m_nIndex;
    v8 = *(this + 33);
    v9 = (*(this->_vptr_IInterpolatedVar + 50))(this);
    v10 = v8 & 0x3F;
    v11 = (v9[2] + *v9);
    v12 = v9[1];
    if ( (v12 & 1) != 0 )
      v12 = *&v12[*v11 - 1];
    (v12)(v11, v7, v10, this, 1);
    if ( (*(this->_vptr_IInterpolatedVar + 19))(this, ivHistory) != 0 )
    {
      valString.m_pString = 0;
      CUtlString::Format(&valString, "Enable : %d SplitScreen %X", *(v7 + 2), *v7);
      (*(this->_vptr_IInterpolatedVar + 16))(&v18, this, (*(this + 35) >> 2));
      v13 = CUtlString::Get(&v18);
      name = g_InterpolatedVarPhaseNames[0].name;
      if ( g_InterpolatedVarPhaseNames[0].name != 0 )
      {
        if ( ivHistory == g_InterpolatedVarPhaseNames[0].token )
        {
LABEL_19:
          CFmtStrN<256,false>::CFmtStrN(&preString, "[%9.9s] (%5d)%s:", name, this->m_nEntityIndex.m_Data, v13);
          if ( v18.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&v18);
          v16 = CUtlString::Get(&valString);
          Msg("%s RestoreLastSimulationValue %s\n", preString.m_szBuf, v16);
          if ( valString.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&valString);
          return;
        }
        v15 = g_InterpolatedVarPhaseNames;
        while ( 1 )
        {
          ++v15;
          name = v15->name;
          if ( v15->name == 0 )
            break;
          if ( ivHistory == v15->token )
            goto LABEL_19;
        }
      }
      name = tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)const::unknown;
      goto LABEL_19;
    }
  }
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::NoteChangedTick  (line 1412, @0x0000000001ecb7b0, libserver.so)  // inlines: GetValuePtr, operator()
// calls: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::LatchChangedTick
bool __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::NoteChangedTick(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase,
        int nChangeTick)
{
  EnableRenderingInfo_t *m_pValue; // r14
  char v7; // r15
  _QWORD *v8; // rax
  unsigned int v9; // r15d
  _QWORD *v10; // rdi
  char *v11; // rax

  m_pValue = this->m_pValue;
  v7 = *(this + 33);
  v8 = (*(this->_vptr_IInterpolatedVar + 49))(this);
  v9 = v7 & 0x3F;
  v10 = (v8[2] + *v8);
  v11 = v8[1];
  if ( (v11 & 1) != 0 )
    v11 = *&v11[*v10 - 1];
  (v11)(v10, m_pValue, v9, this);
  return CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::LatchChangedTick(
           this,
           ivPhase,
           this->m_pValue,
           nChangeTick);
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetInterpolatedVarSize  (line 1420, @0x0000000001ec18a0, libserver.so)
int __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetInterpolatedVarSize(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  return 4 * (*(this + 33) & 0x3F);
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::ReadCurrentValue  (line 1426, @0x0000000001ec2b90, libserver.so)  // inlines: operator()
int __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::ReadCurrentValue(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        void *pValue)
{
  char v4; // r13
  _QWORD *v5; // rax
  unsigned int v6; // r13d
  _QWORD *v7; // rdi
  char *v8; // rax

  v4 = *(this + 33);
  v5 = (*(this->_vptr_IInterpolatedVar + 49))(this);
  v6 = v4 & 0x3F;
  v7 = (v5[2] + *v5);
  v8 = v5[1];
  if ( (v8 & 1) != 0 )
    v8 = *&v8[*v7 - 1];
  (v8)(v7, pValue, v6, this);
  return (*(this->_vptr_IInterpolatedVar + 34))(this);
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::WriteCurrentValue  (line 1451, @0x0000000001ec2b10, libserver.so)  // inlines: SetValuePtr, operator()
int __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::WriteCurrentValue(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        void *pValue)
{
  char v4; // r13
  _QWORD *v5; // rax
  unsigned int v6; // r13d
  _QWORD *v7; // rdi
  char *v8; // rax

  v4 = *(this + 33);
  v5 = (*(this->_vptr_IInterpolatedVar + 50))(this);
  v6 = v4 & 0x3F;
  v7 = (v5[2] + *v5);
  v8 = v5[1];
  if ( (v8 & 1) != 0 )
    v8 = *&v8[*v7 - 1];
  (v8)(v7, pValue, v6, this, 1);
  return (*(this->_vptr_IInterpolatedVar + 34))(this);
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::LatchChangedTick  (line 1458, @0x0000000001eca8f0, libserver.so)  // inlines: AddToHead, AllocateData, CUtlString, CopyIntoElement, Count, EnsureCapacity, FirstBitInWord, FirstBitInWordThatIsKnownToBeNonZero, FreeData, GetDebugString, GetInterpolatedVarPhaseName, GetLastPotentialChangeTick, GetNameByToken, GetPerPhaseData, GetRaw, GetValue, InsertHoldSample, RemoveAtHead, RemoveEntriesPreviousTo, SetEntry, String, Tick, TicksToTime, TimeToTicks, Truncate, V_memcmp, V_memcpy, Value, memcpy, memset, operator==, ~CUtlString
// calls: CUtlString::Format, CUtlString::Get, CFmtStrN<256, false>::CFmtStrN, CUtlString::FreeMemoryBlock, Msg, memcmp, memcpy, malloc, memset, free, CInterpolatedVarHistory<EnableRenderingInfo_t>::EnsureCapacity, _Unwind_Resume (13 total)
// callers: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::NoteChangedTick, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::LatchChangedTick
// strings: "differs", "Enable : %d SplitScreen %X", "[%9.9s] (%5d)%s:", "%s LatchChanged at %f:  %s %s\n", "identical", "%s Introduced extra sample(s) at %f\n"
// globals: g_InterpolatedVarPhaseNames, tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)::unknown, IInterpolatedVar::sm_pLastPotentialChangeTick
bool __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::LatchChangedTick(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase,
        const EnableRenderingInfo_t *pCurrentValue,
        int nChangeTick)
{
  int v7; // eax
  const char *v8; // r12
  char v9; // r13
  __int64 v10; // r8
  int v11; // ecx
  const char *v12; // rax
  char *v13; // rdx
  tokenset_t<InterpolatedVarPhase_t> *v14; // rsi
  const char *v15; // rax
  double v16; // xmm0_8
  double v17; // xmm1_8
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v18; // r12
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *m_pPerPhaseData; // r11
  int v20; // edi
  int v21; // edx
  int v22; // esi
  int v23; // r9d
  int v24; // eax
  int v25; // edx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v26; // rdi
  __int16 v27; // r9
  int v28; // esi
  __int64 v29; // rax
  unsigned __int8 v30; // r10
  char v31; // r11
  unsigned __int8 v32; // r10
  int v33; // eax
  int v34; // eax
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v35; // rcx
  unsigned int v36; // edx
  int v37; // edx
  unsigned __int8 v38; // al
  __int64 v39; // rdx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v40; // rsi
  __int64 v41; // rcx
  int v42; // eax
  unsigned int v43; // ecx
  __int64 m_nExpectedLatchIntervalTicks; // rsi
  unsigned int v45; // edx
  int v46; // eax
  __int16 v47; // dx
  EnableRenderingInfo_t *v48; // rdi
  __int64 v49; // rax
  int v51; // r12d
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *m_pElements; // rcx
  char v53; // r13
  int v54; // eax
  int v55; // eax
  int v56; // eax
  char *v57; // rax
  const EnableRenderingInfo_t *v58; // rdx
  char *v59; // rax
  __int64 v60; // r8
  uint16 m_nSplitscreenFlags; // di
  __int16 v62; // si
  int v63; // eax
  int v64; // edi
  unsigned int v65; // edx
  int v66; // eax
  int32 v67; // eax
  const char *v68; // rax
  char *name; // rdx
  tokenset_t<InterpolatedVarPhase_t> *v70; // rsi
  int v71; // r9d
  int v72; // esi
  __int16 v73; // di
  int v74; // edx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v75; // r10
  int v76; // r13d
  int v77; // eax
  int v78; // esi
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v79; // rcx
  int v80; // r15d
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v81; // rbx
  char *v82; // r14
  unsigned __int8 v83; // cl
  __int16 v84; // dx
  char *v85; // rdi
  __int64 v86; // rax
  int v87; // eax
  unsigned int v88; // eax
  int v89; // eax
  __int16 v90; // dx
  int v91; // ecx
  unsigned __int8 v92; // dl
  __int64 v93; // rsi
  unsigned int v94; // edx
  int v95; // eax
  int v96; // edx
  int v97; // eax
  uint32 m_nFreeDataElements; // r10d
  int v99; // r9d
  int v100; // ecx
  int v101; // ecx
  int v102; // r11d
  int v103; // ecx
  int v104; // ecx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v105; // rax
  __int64 v106; // rcx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v107; // rdi
  char *v108; // rcx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v109; // r8
  int v110; // eax
  int v111; // esi
  int v112; // edx
  unsigned __int16 v113; // ax
  __int64 v114; // rsi
  int v115; // edx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v116; // rax
  __int64 v117; // rsi
  int32 m_nChangeTick; // edx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *history; // [rsp+10h] [rbp-1B0h]
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v120; // [rsp+18h] [rbp-1A8h]
  unsigned __int8 v122; // [rsp+27h] [rbp-199h]
  __int64 v123; // [rsp+28h] [rbp-198h]
  int v124; // [rsp+28h] [rbp-198h]
  unsigned __int8 pCurrentValuea; // [rsp+30h] [rbp-190h]
  int pCurrentValueb; // [rsp+30h] [rbp-190h]
  const EnableRenderingInfo_t *pCurrentValuec; // [rsp+30h] [rbp-190h]
  char pCurrentValued; // [rsp+30h] [rbp-190h]
  unsigned __int16 thisa; // [rsp+38h] [rbp-188h]
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *thisb; // [rsp+38h] [rbp-188h]
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *nMaxToTest; // [rsp+40h] [rbp-180h]
  int nMaxToTesta; // [rsp+40h] [rbp-180h]
  char nMaxToTestb; // [rsp+40h] [rbp-180h]
  char nMaxToTestc; // [rsp+40h] [rbp-180h]
  __int64 nMaxToTeste; // [rsp+40h] [rbp-180h]
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *nMaxToTestd; // [rsp+40h] [rbp-180h]
  unsigned __int8 v137; // [rsp+48h] [rbp-178h]
  int v138; // [rsp+48h] [rbp-178h]
  CUtlString valString; // [rsp+50h] [rbp-170h] BYREF
  CUtlString v140[2]; // [rsp+60h] [rbp-160h] BYREF
  CFmtStr preString; // [rsp+70h] [rbp-150h] BYREF
  unsigned __int64 v142; // [rsp+188h] [rbp-38h]

  v142 = __readfsqword(0x28u);
  if ( ivPhase != InterpolatedVarPhase_t::IV_PHASE_CLIENT_AUTHORITATIVE )
  {
    if ( (*(this + 32) & 0x20) == 0 )
      return 0;
    history = this->m_pPerPhaseData + 1;
  }
  else
  {
    history = this->m_pPerPhaseData;
  }
  if ( history != 0 )
  {
    v7 = (*(&history->m_VarHistory + 2) >> 13) & 0x3F;
    if ( v7 != 0 )
    {
      nMaxToTesta = 1;
      if ( v7 != 1 )
        nMaxToTesta = ((*(this->_vptr_IInterpolatedVar + 10))(this, 1) == 0) + 1;
      v122 = *(this + 33) & 0x3F;
      v137 = *(&history->m_VarHistory + 8) & 0x3F;
      thisa = *(&history->m_VarHistory + 4);
      pCurrentValuea = (*(&history->m_VarHistory + 5) >> 3) & 0x3F;
      v123 = pCurrentValuea;
      v51 = 0;
      m_pElements = history->m_VarHistory.m_pElements;
      v53 = *(this + 32) & 0x40;
      do
      {
        if ( v53 != 0 )
        {
          v120 = m_pElements;
          v54 = v51 + v137;
          if ( v54 >= pCurrentValuea )
            v54 = v51 + v137 - pCurrentValuea;
          v55 = memcmp(
                  pCurrentValue,
                  &m_pElements[v123] + 4 * ((thisa >> 6) & 0x3F) * m_pElements[v54].m_nIndex,
                  4LL * v122);
          m_pElements = v120;
          if ( v55 != 0 )
            goto LABEL_5;
        }
        else
        {
          v56 = v51 + v137;
          if ( v56 >= pCurrentValuea )
            v56 = v51 + v137 - pCurrentValuea;
          v57 = &m_pElements[v123] + 4 * ((thisa >> 6) & 0x3F) * m_pElements[v56].m_nIndex;
          if ( v122 != 0 )
          {
            if ( pCurrentValue->m_bEnableRendering != v57[2] || pCurrentValue->m_nSplitscreenFlags != *v57 )
              goto LABEL_5;
            v58 = pCurrentValue + 1;
            v59 = v57 + 4;
            v60 = 0;
            while ( v60 != 4LL * (v122 - 1) )
            {
              m_nSplitscreenFlags = v58->m_nSplitscreenFlags;
              v62 = *v59;
              if ( v58->m_bEnableRendering == v59[2] )
              {
                ++v58;
                v60 += 4;
                v59 += 4;
                if ( m_nSplitscreenFlags == v62 )
                  continue;
              }
              goto LABEL_5;
            }
          }
        }
        ++v51;
      }
      while ( nMaxToTesta > v51 );
      v8 = "identical";
      v9 = 0;
      if ( (*(this->_vptr_IInterpolatedVar + 19))(this, ivPhase) == 0 )
      {
LABEL_17:
        *&v16 = LODWORD(history->m_flInterpolationAmount);
        *&v17 = LODWORD(g_flInterpolatedVarsTickInterval);
        if ( ivPhase != InterpolatedVarPhase_t::IV_PHASE_CLIENT_AUTHORITATIVE )
        {
          v18 = 0;
          if ( (*(this + 32) & 0x20) == 0 )
            goto LABEL_29;
          m_pPerPhaseData = this->m_pPerPhaseData + 1;
        }
        else
        {
          m_pPerPhaseData = this->m_pPerPhaseData;
        }
        if ( m_pPerPhaseData == 0 )
          goto LABEL_27;
        v20 = (*(&m_pPerPhaseData->m_VarHistory + 2) >> 13) & 0x3F;
        if ( v20 <= 3 )
          goto LABEL_27;
        v21 = 0;
        v10 = m_pPerPhaseData->m_VarHistory.m_pElements;
        v22 = (*(&m_pPerPhaseData->m_VarHistory + 5) >> 3) & 0x3F;
        v23 = *(&m_pPerPhaseData->m_VarHistory + 8) & 0x3F;
        *&v16 = ((*&v16 + 0.050000001) / g_flInterpolatedVarsTickInterval) + 0.5;
        while ( 1 )
        {
          v24 = v21 + v23;
          if ( v21 + v23 >= v22 )
            v24 = v21 + v23 - v22;
          if ( nChangeTick - *&v16 - 1 > *(v10 + 8LL * v24) )
            break;
          if ( v20 <= ++v21 )
            goto LABEL_27;
        }
        nMaxToTestc = v21 + 1;
        v96 = v21 + 1;
        if ( v20 > v96 )
        {
          v97 = v23 + v96;
          m_nFreeDataElements = m_pPerPhaseData->m_VarHistory.m_nFreeDataElements;
          v99 = v23 - v22;
          while ( 1 )
          {
            v100 = v99 + v96;
            if ( v97 < v22 )
              v100 = v97;
            ++v96;
            ++v97;
            v101 = m_nFreeDataElements | (1 << *(v10 + 8LL * v100 + 4));
            m_pPerPhaseData->m_VarHistory.m_nFreeDataElements = v101;
            if ( v20 <= v96 )
              break;
            m_nFreeDataElements = v101;
          }
          *(&m_pPerPhaseData->m_VarHistory + 2) = ((nMaxToTestc & 0x3F) << 13)
                                                | *(&m_pPerPhaseData->m_VarHistory + 2) & 0xFFF81FFF;
          if ( ivPhase != InterpolatedVarPhase_t::IV_PHASE_CLIENT_AUTHORITATIVE )
            goto LABEL_125;
        }
        else
        {
LABEL_27:
          if ( ivPhase != InterpolatedVarPhase_t::IV_PHASE_CLIENT_AUTHORITATIVE )
          {
LABEL_125:
            if ( (*(this + 32) & 0x20) != 0 )
              v18 = this->m_pPerPhaseData + 1;
            else
              v18 = 0;
LABEL_29:
            v25 = (*(&v18->m_VarHistory + 2) >> 13) & 0x3F;
            if ( v25 != 0 )
            {
              v10 = 1;
              v26 = v18->m_VarHistory.m_pElements;
              v27 = (*(&v18->m_VarHistory + 5) >> 3) & 0x3F;
              v28 = (*(&v18->m_VarHistory + 5) >> 3) & 0x3F;
              do
              {
                v31 = *(&v18->m_VarHistory + 8);
                v32 = v31 & 0x3F;
                v33 = v31 & 0x3F;
                if ( v33 >= v28 )
                  v33 = v32 - v28;
                if ( nChangeTick > v26[v33].m_nChangeTick )
                {
                  v34 = v25 + 1;
                  goto LABEL_38;
                }
                v29 = v32;
                v30 = (v32 + 1) & 0x3F;
                v18->m_VarHistory.m_nFreeDataElements |= 1 << v26[v29].m_nIndex;
                if ( v30 >= v28 )
                  v30 = (v30 - v27) & 0x3F;
                LOBYTE(v25) = (v25 + 63) & 0x3F;
                *(&v18->m_VarHistory + 8) = v30 | v31 & 0xC0;
                *(&v18->m_VarHistory + 2) = (v25 << 13) | *(&v18->m_VarHistory + 2) & 0xFFF81FFF;
              }
              while ( v25 != 0 );
              v34 = 1;
            }
            else
            {
              v34 = 1;
              v28 = (*(&v18->m_VarHistory + 5) >> 3) & 0x3F;
            }
LABEL_38:
            if ( v28 < v34 && v28 <= 31 )
            {
              v102 = 32;
              v103 = (*(&v18->m_VarHistory + 11) >> 1) & 0x3F;
              v104 = (v103 + v34 - 1) / v103 * v103;
              if ( v104 <= 32 )
                v102 = v104;
              pCurrentValued = v102;
              nMaxToTeste = v102;
              v105 = malloc(v102 * (4LL * ((*(&v18->m_VarHistory + 4) >> 6) & 0x3F) + 8));
              v106 = nMaxToTeste;
              nMaxToTestd = v105;
              thisb = (8 * v106);
              memset(v105, 0, 8 * v106);
              v107 = v18->m_VarHistory.m_pElements;
              v108 = thisb + nMaxToTestd;
              if ( v18->m_VarHistory.m_pElements != 0 )
              {
                if ( (*(&v18->m_VarHistory + 2) & 0x7E000) != 0 )
                {
                  v109 = nMaxToTestd;
                  v110 = 0;
                  do
                  {
                    v111 = (*(&v18->m_VarHistory + 5) >> 3) & 0x3F;
                    v112 = v110 + (*(&v18->m_VarHistory + 8) & 0x3F);
                    if ( v112 >= v111 )
                      v112 -= v111;
                    ++v110;
                    ++v109;
                    v109[-1] = v107[v112];
                    v107 = v18->m_VarHistory.m_pElements;
                  }
                  while ( v110 < ((*(&v18->m_VarHistory + 2) >> 13) & 0x3F) );
                }
                v113 = *(&v18->m_VarHistory + 5);
                *(&v18->m_VarHistory + 8) &= 0xC0u;
                v114 = (v113 >> 3) & 0x3F;
                v115 = ((*(&v18->m_VarHistory + 4) >> 6) & 0x3F) * v114;
                v116 = &v107[v114];
                if ( v115 != 0 )
                {
                  v117 = &v108[4 * (v115 - 1) + 4];
                  do
                  {
                    m_nChangeTick = v116->m_nChangeTick;
                    v108 += 4;
                    v116 = (v116 + 4);
                    *(v108 - 1) = m_nChangeTick;
                  }
                  while ( v108 != v117 );
                  v107 = v18->m_VarHistory.m_pElements;
                }
              }
              *(&v18->m_VarHistory + 5) = (8 * (pCurrentValued & 0x3F)) | *(&v18->m_VarHistory + 5) & 0xFE07;
              free(v107);
              v18->m_VarHistory.m_pElements = nMaxToTestd;
              v35 = nMaxToTestd;
            }
            else
            {
              v35 = v18->m_VarHistory.m_pElements;
            }
            v36 = ((((*(&v18->m_VarHistory + 2) >> 13) + 1) & 0x3F) << 13) | *(&v18->m_VarHistory + 2) & 0xFFF81FFF;
            *(&v18->m_VarHistory + 2) = v36;
            v37 = v36 & 0x3F;
            if ( v37 == 0 )
              LOWORD(v37) = (*(&v18->m_VarHistory + 5) >> 3) & 0x3F;
            v38 = (v37 + 63) & 0x3F;
            *(&v18->m_VarHistory + 8) = v38 | *(&v18->m_VarHistory + 8) & 0xC0;
            v39 = v18->m_VarHistory.m_nFreeDataElements;
            v40 = &v35[v38];
            v41 = 0xFFFFFFFFLL;
            v42 = -1;
            if ( v39 != 0 )
            {
              _BitScanForward(&v41, v39);
              v41 = v43;
              LOBYTE(v42) = -2;
              v42 = __ROL4__(v42, v43);
            }
            v18->m_VarHistory.m_nFreeDataElements = v39 & v42;
            v40->m_nIndex = v41;
            if ( ivPhase != InterpolatedVarPhase_t::IV_PHASE_CLIENT_AUTHORITATIVE )
            {
              nMaxToTest = 0;
              if ( (*(this + 32) & 0x20) != 0 )
                nMaxToTest = this->m_pPerPhaseData + 1;
            }
            else
            {
              nMaxToTest = this->m_pPerPhaseData;
            }
            m_nExpectedLatchIntervalTicks = nMaxToTest->m_nExpectedLatchIntervalTicks;
            if ( m_nExpectedLatchIntervalTicks <= 0 )
              goto LABEL_49;
            if ( ((*(&nMaxToTest->m_VarHistory + 2) >> 13) & 0x3Fu) <= 1 )
              goto LABEL_49;
            pCurrentValueb = nMaxToTest->m_nExpectedLatchIntervalTicks;
            v63 = IInterpolatedVar::sm_pLastPotentialChangeTick[ivPhase][(*(this->_vptr_IInterpolatedVar + 44))(
                                                                           this,
                                                                           m_nExpectedLatchIntervalTicks,
                                                                           v39,
                                                                           v41,
                                                                           v10,
                                                                           v16,
                                                                           v17)];
            v124 = v63;
            v64 = v63;
            if ( nChangeTick <= v63 || v63 <= 0 )
              goto LABEL_49;
            v65 = (*(&nMaxToTest->m_VarHistory + 5) >> 3) & 0x3F;
            v66 = (*(&nMaxToTest->m_VarHistory + 8) & 0x3F) + 1;
            if ( v66 >= v65 )
              v66 -= v65;
            v67 = nMaxToTest->m_VarHistory.m_pElements[v66].m_nChangeTick;
            if ( v64 <= v67 || v67 >= nChangeTick - pCurrentValueb )
            {
LABEL_49:
              v45 = (*(&v18->m_VarHistory + 5) >> 3) & 0x3F;
              v46 = *(&v18->m_VarHistory + 8) & 0x3F;
              if ( v46 >= v45 )
                v46 -= v45;
              v18->m_VarHistory.m_pElements[v46].m_nChangeTick = nChangeTick;
              v47 = (*(&v18->m_VarHistory + 4) >> 6) & 0x3F;
              v48 = &v18->m_VarHistory.m_pElements[(*(&v18->m_VarHistory + 5) >> 3) & 0x3F]
                  + ((*(&v18->m_VarHistory + 4) >> 6) & 0x3F) * v18->m_VarHistory.m_pElements[v46].m_nIndex;
              if ( (*(&v18->m_VarHistory + 9) & 0x10) != 0 )
              {
                memcpy(v48, pCurrentValue, 4LL * v47);
              }
              else
              {
                v49 = 0;
                if ( v47 != 0 )
                {
                  do
                  {
                    v48[v49] = pCurrentValue[v49];
                    ++v49;
                  }
                  while ( v49 < ((*(&v18->m_VarHistory + 4) >> 6) & 0x3F) );
                }
              }
              if ( v9 != 0 )
              {
                history->m_nLastActualChangeTick = nChangeTick;
                return 1;
              }
              return 0;
            }
            if ( (*(this->_vptr_IInterpolatedVar + 19))(this, ivPhase) == 0 )
            {
LABEL_97:
              v71 = 2 - ((*(this->_vptr_IInterpolatedVar + 10))(this, 1) != 0);
              v72 = ((*(&nMaxToTest->m_VarHistory + 2) >> 13) & 0x3F) + v71;
              v73 = (*(&nMaxToTest->m_VarHistory + 5) >> 3) & 0x3F;
              v74 = (*(&nMaxToTest->m_VarHistory + 5) >> 3) & 0x3F;
              if ( v72 > v74 && ((*(&nMaxToTest->m_VarHistory + 5) >> 3) & 0x3Fu) <= 0x1F )
              {
                v138 = v71;
                CInterpolatedVarHistory<EnableRenderingInfo_t>::EnsureCapacity(&nMaxToTest->m_VarHistory, v72);
                v71 = v138;
                v73 = (*(&nMaxToTest->m_VarHistory + 5) >> 3) & 0x3F;
                v74 = (*(&nMaxToTest->m_VarHistory + 5) >> 3) & 0x3F;
              }
              v75 = nMaxToTest;
              nMaxToTestb = v9;
              v76 = v71;
              pCurrentValuec = pCurrentValue;
              v77 = *(&v75->m_VarHistory + 8) & 0x3F;
              v78 = v77 + 1;
              if ( v77 + 1 >= v74 )
                v78 = v77 + 1 - v74;
              v79 = v75->m_VarHistory.m_pElements;
              v80 = 0;
              v81 = v75;
              v82 = &v75->m_VarHistory.m_pElements[v73]
                  + 4 * ((*(&v75->m_VarHistory + 4) >> 6) & 0x3F) * v75->m_VarHistory.m_pElements[v78].m_nIndex;
              while ( 1 )
              {
                if ( v77 >= v74 )
                  v77 -= v74;
                v79[v77].m_nChangeTick = v124;
                v83 = (*(&v81->m_VarHistory + 4) >> 6) & 0x3F;
                v84 = (*(&v81->m_VarHistory + 5) >> 3) & 0x3F;
                v85 = &v81->m_VarHistory.m_pElements[(*(&v81->m_VarHistory + 5) >> 3) & 0x3F]
                    + 4 * v83 * v81->m_VarHistory.m_pElements[v77].m_nIndex;
                if ( (*(&v81->m_VarHistory + 9) & 0x10) != 0 )
                {
                  memcpy(v85, v82, 4LL * v83);
                  v84 = (*(&v81->m_VarHistory + 5) >> 3) & 0x3F;
                }
                else
                {
                  v86 = 0;
                  if ( v83 != 0 )
                  {
                    do
                    {
                      *&v85[4 * v86] = *&v82[4 * v86];
                      ++v86;
                    }
                    while ( ((*(&v81->m_VarHistory + 4) >> 6) & 0x3F) > v86 );
                    v84 = (*(&v81->m_VarHistory + 5) >> 3) & 0x3F;
                  }
                }
                v87 = (*(&v81->m_VarHistory + 2) >> 13) & 0x3F;
                if ( v87 + 1 > v84 && v84 <= 0x1Fu )
                {
                  CInterpolatedVarHistory<EnableRenderingInfo_t>::EnsureCapacity(&v81->m_VarHistory, v87 + 1);
                  v87 = (*(&v81->m_VarHistory + 2) >> 13) & 0x3F;
                }
                v88 = (((v87 + 1) & 0x3F) << 13) | *(&v81->m_VarHistory + 2) & 0xFFF81FFF;
                *(&v81->m_VarHistory + 2) = v88;
                v89 = v88 & 0x3F;
                if ( v89 != 0 )
                  LOBYTE(v90) = v89;
                else
                  v90 = (*(&v81->m_VarHistory + 5) >> 3) & 0x3F;
                LOWORD(v91) = -1;
                v92 = (v90 + 63) & 0x3F;
                *(&v81->m_VarHistory + 8) = v92 | *(&v81->m_VarHistory + 8) & 0xC0;
                v93 = &v81->m_VarHistory.m_pElements[v92];
                v94 = v81->m_VarHistory.m_nFreeDataElements;
                v95 = -1;
                if ( v94 != 0 )
                {
                  _BitScanForward(&v91, v94);
                  v95 = ~(1 << v91);
                }
                ++v80;
                v81->m_VarHistory.m_nFreeDataElements = v94 & v95;
                *(v93 + 4) = v91;
                if ( v76 <= v80 )
                  break;
                v79 = v81->m_VarHistory.m_pElements;
                v74 = (*(&v81->m_VarHistory + 5) >> 3) & 0x3F;
                v77 = *(&v81->m_VarHistory + 8) & 0x3F;
              }
              v9 = nMaxToTestb;
              pCurrentValue = pCurrentValuec;
              goto LABEL_49;
            }
            (*(this->_vptr_IInterpolatedVar + 16))(v140, this, (*(this + 35) >> 2));
            v68 = CUtlString::Get(v140);
            name = g_InterpolatedVarPhaseNames[0].name;
            if ( g_InterpolatedVarPhaseNames[0].name != 0 )
            {
              if ( ivPhase == g_InterpolatedVarPhaseNames[0].token )
              {
LABEL_94:
                CFmtStrN<256,false>::CFmtStrN(&preString, "[%9.9s] (%5d)%s:", name, this->m_nEntityIndex.m_Data, v68);
                if ( v140[0].m_pString != 0 )
                  CUtlString::FreeMemoryBlock(v140);
                Msg(
                  "%s Introduced extra sample(s) at %f\n",
                  preString.m_szBuf,
                  (v124 * g_flInterpolatedVarsTickInterval));
                goto LABEL_97;
              }
              v70 = g_InterpolatedVarPhaseNames;
              while ( 1 )
              {
                ++v70;
                name = v70->name;
                if ( v70->name == 0 )
                  break;
                if ( ivPhase == v70->token )
                  goto LABEL_94;
              }
            }
            name = tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)const::unknown;
            goto LABEL_94;
          }
        }
        v18 = this->m_pPerPhaseData;
        goto LABEL_29;
      }
    }
    else
    {
LABEL_5:
      v8 = "differs";
      v9 = 1;
      if ( (*(this->_vptr_IInterpolatedVar + 19))(this, ivPhase) == 0 )
        goto LABEL_17;
    }
    v11 = pCurrentValue->m_nSplitscreenFlags;
    valString.m_pString = 0;
    CUtlString::Format(&valString, "Enable : %d SplitScreen %X", pCurrentValue->m_bEnableRendering, v11);
    (*(this->_vptr_IInterpolatedVar + 16))(v140, this, (*(this + 35) >> 2));
    v12 = CUtlString::Get(v140);
    v13 = g_InterpolatedVarPhaseNames[0].name;
    if ( g_InterpolatedVarPhaseNames[0].name != 0 )
    {
      if ( ivPhase == g_InterpolatedVarPhaseNames[0].token )
      {
LABEL_12:
        CFmtStrN<256,false>::CFmtStrN(&preString, "[%9.9s] (%5d)%s:", v13, this->m_nEntityIndex.m_Data, v12);
        if ( v140[0].m_pString != 0 )
          CUtlString::FreeMemoryBlock(v140);
        v15 = CUtlString::Get(&valString);
        Msg(
          "%s LatchChanged at %f:  %s %s\n",
          preString.m_szBuf,
          v8,
          v15,
          (nChangeTick * g_flInterpolatedVarsTickInterval));
        if ( valString.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&valString);
        goto LABEL_17;
      }
      v14 = g_InterpolatedVarPhaseNames;
      while ( 1 )
      {
        ++v14;
        v13 = v14->name;
        if ( v14->name == 0 )
          break;
        if ( ivPhase == v14->token )
          goto LABEL_12;
      }
    }
    v13 = tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)const::unknown;
    goto LABEL_12;
  }
  return 0;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::LatchChangedTick  (line 1543, @0x0000000001ecb830, libserver.so)
// calls: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::LatchChangedTick
bool __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::LatchChangedTick(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase,
        const void *pValue,
        int nChangeTick)
{
  return CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::LatchChangedTick(
           this,
           ivPhase,
           pValue,
           nChangeTick);
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::Reset  (line 1758, @0x0000000001ec4f50, libserver.so)  // inlines: ClearHistory, GetInterpolatedVarPhaseName, GetNameByToken, GetPerPhaseData, GetPhaseCount, GetRaw, RemoveAll, String, ~CUtlString
// calls: CUtlString::Get, CFmtStrN<256, false>::CFmtStrN, CUtlString::FreeMemoryBlock, Msg, _Unwind_Resume, __stack_chk_fail
// callers: CRenderComponent::CRenderComponent
// strings: "[%9.9s] (%5d)%s:", "%s Reset\n"
// globals: g_InterpolatedVarPhaseNames, tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)::unknown
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::Reset(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  int v2; // ebx
  char v3; // cl
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *m_pPerPhaseData; // rax
  int v5; // edx
  const char *v6; // rax
  char *name; // rdx
  tokenset_t<InterpolatedVarPhase_t> *v8; // rsi
  CUtlString v9; // [rsp+0h] [rbp-160h] BYREF
  CFmtStr preString; // [rsp+10h] [rbp-150h] BYREF
  unsigned __int64 v11; // [rsp+128h] [rbp-38h]

  v2 = 0;
  v11 = __readfsqword(0x28u);
  v3 = *(this + 32);
  while ( v2 < 2 - ((v3 & 0x20) == 0) )
  {
    if ( v2 == 0 )
    {
      m_pPerPhaseData = this->m_pPerPhaseData;
      if ( m_pPerPhaseData == 0 )
        goto LABEL_5;
LABEL_3:
      v5 = *(&m_pPerPhaseData->m_VarHistory + 2);
      m_pPerPhaseData->m_VarHistory.m_nFreeDataElements = -1;
      m_pPerPhaseData->m_nLastActualChangeTick = 0;
      v5 &= 0xFFF81FFF;
      *(&m_pPerPhaseData->m_VarHistory + 2) = v5;
      *(&m_pPerPhaseData->m_VarHistory + 8) = v5 & 0xC0;
      if ( (*(this->_vptr_IInterpolatedVar + 19))(this, v2) == 0 )
      {
LABEL_4:
        v3 = *(this + 32);
        goto LABEL_5;
      }
      (*(this->_vptr_IInterpolatedVar + 16))(&v9, this, (*(this + 35) >> 2));
      v6 = CUtlString::Get(&v9);
      name = g_InterpolatedVarPhaseNames[0].name;
      if ( g_InterpolatedVarPhaseNames[0].name != 0 )
      {
        if ( v2 != g_InterpolatedVarPhaseNames[0].token )
        {
          v8 = g_InterpolatedVarPhaseNames;
          do
          {
            ++v8;
            name = v8->name;
            if ( v8->name == 0 )
              goto LABEL_16;
          }
          while ( v2 != v8->token );
        }
      }
      else
      {
LABEL_16:
        name = tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)const::unknown;
      }
      CFmtStrN<256,false>::CFmtStrN(&preString, "[%9.9s] (%5d)%s:", name, this->m_nEntityIndex.m_Data, v6);
      if ( v9.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v9);
      Msg("%s Reset\n", preString.m_szBuf);
      goto LABEL_4;
    }
    if ( (v3 & 0x20) != 0 )
    {
      m_pPerPhaseData = this->m_pPerPhaseData + 1;
      if ( this->m_pPerPhaseData != -32LL )
        goto LABEL_3;
    }
LABEL_5:
    ++v2;
  }
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::CheckIfInterpolationTimeIsBeforeFullInterpolationInterval  (line 1778, @0x0000000001ec1810, libserver.so)  // inlines: Count, GetPerPhaseData, Tick, TicksToTime
bool __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::CheckIfInterpolationTimeIsBeforeFullInterpolationInterval(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase,
        float a3,
        float flInterpolationTime)
{
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *m_pPerPhaseData; // rax
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  bool result; // al
  __int64 v9; // [rsp-8h] [rbp-8h]

  if ( ivPhase != InterpolatedVarPhase_t::IV_PHASE_CLIENT_AUTHORITATIVE )
  {
    result = 1;
    if ( (*(this + 32) & 0x20) == 0 )
      return result;
    m_pPerPhaseData = this->m_pPerPhaseData + 1;
  }
  else
  {
    m_pPerPhaseData = this->m_pPerPhaseData;
  }
  if ( m_pPerPhaseData == 0 )
    return 1;
  v5 = (*(&m_pPerPhaseData->m_VarHistory + 2) >> 13) & 0x3F;
  if ( v5 == 0 )
    return 1;
  *(&v9 - 16) = *(&m_pPerPhaseData->m_VarHistory + 8);
  v6 = v5 + (*(&v9 - 2) & 0x3F) - 1;
  v7 = (*(&m_pPerPhaseData->m_VarHistory + 5) >> 3) & 0x3F;
  if ( v6 >= v7 )
    v6 -= v7;
  return ((m_pPerPhaseData->m_VarHistory.m_pElements[v6].m_nChangeTick * g_flInterpolatedVarsTickInterval)
        + m_pPerPhaseData->m_flInterpolationAmount) > a3;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetInterpolationInfo  (line 1869, @0x0000000001ec8250, libserver.so)  // inlines: CopyRecord, Count, First, GetEntry, GetHistorySampleTime, GetPerPhaseData, IsPhaseAvailable, Next, PeekNext, Tick, TicksToTime
// callers: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::ValueChangesAfterThisTime, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::Interpolate, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::InterpolateInternal, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SpewInterpolatedVarToString
__int64 __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetInterpolationInfo(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase,
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::InterpolationInfo_t *pInfo,
        float currentTime,
        InterpolationBehavior_t behavior,
        InterpolationResult_t *pResult)
{
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *m_pPerPhaseData; // r12
  int v8; // ecx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v9; // r9
  int v10; // r10d
  int v11; // r14d
  __int64 v12; // r15
  int v13; // esi
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v14; // rsi
  int v15; // r13d
  int m_nChangeTick; // r11d
  int v17; // edi
  int v18; // eax
  int v19; // esi
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v20; // rax
  int v21; // r10d
  int v22; // ebx
  const EnableRenderingInfo_t *v23; // r8
  float v24; // xmm2_4
  int v25; // eax
  int v26; // r13d
  float v27; // xmm1_4
  int v28; // ecx
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v32; // rsi
  int m_nIndex; // eax
  int v34; // r8d
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v35; // r8
  const EnableRenderingInfo_t *v36; // rbx
  int v37; // r8d
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v38; // r8
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *m_pElements; // rdi
  int v40; // eax
  __int16 v41; // si
  int v42; // ecx
  int v43; // r9d
  unsigned int v44; // ecx
  int v45; // eax
  float v46; // xmm3_4
  float v47; // xmm0_4
  float v48; // xmm3_4
  float v49; // xmm1_4
  float v50; // xmm0_4
  char v51; // al
  int v52; // ecx
  int v53; // r13d
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v54; // rdi
  unsigned __int16 v55; // si
  int v56; // r13d
  int v57; // eax
  __int64 v58; // r9
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v59; // rax
  int v62; // [rsp+1Ch] [rbp-44h]
  const EnableRenderingInfo_t *newer; // [rsp+28h] [rbp-38h]
  char newera; // [rsp+28h] [rbp-38h]

  if ( ivPhase != InterpolatedVarPhase_t::IV_PHASE_CLIENT_AUTHORITATIVE
    && (ivPhase != InterpolatedVarPhase_t::IV_PHASE_SERVER_AUTHORITATIVE || (*(this + 32) & 0x20) == 0) )
  {
    goto LABEL_3;
  }
  if ( pResult != 0 )
    *pResult = InterpolationResult_t::INTERPOLATION_HAS_FUTURE_SAMPLES;
  if ( ivPhase != InterpolatedVarPhase_t::IV_PHASE_CLIENT_AUTHORITATIVE )
  {
    m_pPerPhaseData = 0;
    if ( (*(this + 32) & 0x20) != 0 )
      m_pPerPhaseData = this->m_pPerPhaseData + 1;
  }
  else
  {
    m_pPerPhaseData = this->m_pPerPhaseData;
  }
  if ( behavior == InterpolationBehavior_t::OFFSET_TIME_BY_INTERPOLATION_AMOUNT )
    currentTime = currentTime - m_pPerPhaseData->m_flInterpolationAmount;
  v8 = (*(&m_pPerPhaseData->m_VarHistory + 2) >> 13) & 0x3F;
  if ( v8 <= 1 )
  {
    if ( v8 != 0 )
    {
      newera = *(&m_pPerPhaseData->m_VarHistory + 8);
      if ( pResult != 0 )
      {
        m_pElements = m_pPerPhaseData->m_VarHistory.m_pElements;
        v40 = newera & 0x3F;
        LOBYTE(v41) = (*(&m_pPerPhaseData->m_VarHistory + 5) >> 3) & 0x3F;
        v42 = v41;
        v43 = v40 - v41;
        if ( v40 < v41 )
          v43 = newera & 0x3F;
        if ( currentTime < (m_pElements[v43].m_nChangeTick * g_flInterpolatedVarsTickInterval) )
        {
LABEL_44:
          if ( v40 >= v42 )
            v40 -= v41;
          pInfo->m_Records[0].m_nChangeTick = m_pElements[v40].m_nChangeTick;
          pInfo->m_Records[0].m_pValue = &m_pPerPhaseData->m_VarHistory.m_pElements[(*(&m_pPerPhaseData->m_VarHistory + 5) >> 3)
                                                                                  & 0x3F]
                                       + ((*(&m_pPerPhaseData->m_VarHistory + 4) >> 6) & 0x3F)
                                       * m_pPerPhaseData->m_VarHistory.m_pElements[v40].m_nIndex;
          v44 = (*(&m_pPerPhaseData->m_VarHistory + 5) >> 3) & 0x3F;
          v45 = *(&m_pPerPhaseData->m_VarHistory + 8) & 0x3F;
          if ( v45 >= v44 )
            v45 -= v44;
          pInfo->m_Records[1].m_nChangeTick = m_pPerPhaseData->m_VarHistory.m_pElements[v45].m_nChangeTick;
          v32 = m_pPerPhaseData->m_VarHistory.m_pElements;
          m_nIndex = m_pPerPhaseData->m_VarHistory.m_pElements[v45].m_nIndex;
LABEL_28:
          pInfo->m_Records[1].m_pValue = &v32[(*(&m_pPerPhaseData->m_VarHistory + 5) >> 3) & 0x3F]
                                       + ((*(&m_pPerPhaseData->m_VarHistory + 4) >> 6) & 0x3F) * m_nIndex;
          return 1;
        }
        *pResult = InterpolationResult_t::INTERPOLATION_HAS_NO_MORE_FUTURE_SAMPLES;
        newera = *(&m_pPerPhaseData->m_VarHistory + 8);
      }
      m_pElements = m_pPerPhaseData->m_VarHistory.m_pElements;
      v41 = (*(&m_pPerPhaseData->m_VarHistory + 5) >> 3) & 0x3F;
      v40 = newera & 0x3F;
      v42 = (*(&m_pPerPhaseData->m_VarHistory + 5) >> 3) & 0x3F;
      goto LABEL_44;
    }
LABEL_3:
    if ( pResult != 0 )
      *pResult = InterpolationResult_t::INTERPOLATION_HAS_NO_MORE_FUTURE_SAMPLES;
    return 0;
  }
  v9 = m_pPerPhaseData->m_VarHistory.m_pElements;
  v10 = *(&m_pPerPhaseData->m_VarHistory + 8) & 0x3F;
  v62 = v10;
  v11 = (*(&m_pPerPhaseData->m_VarHistory + 5) >> 3) & 0x3F;
  v12 = (*(&m_pPerPhaseData->m_VarHistory + 5) >> 3) & 0x3F;
  v13 = v10 - v11;
  if ( v10 < v11 )
    v13 = *(&m_pPerPhaseData->m_VarHistory + 8) & 0x3F;
  v14 = &v9[v13];
  v15 = (*(&m_pPerPhaseData->m_VarHistory + 4) >> 6) & 0x3F;
  m_nChangeTick = v14->m_nChangeTick;
  v17 = v15;
  newer = &v9[v12] + v15 * v14->m_nIndex;
  v18 = v10 + 1;
  if ( v11 <= v10 + 1 )
    v18 = v10 + 1 - v11;
  v19 = v10 + 2;
  v20 = &v9[v18];
  v21 = v10 + 2 - v11;
  v22 = v20->m_nChangeTick;
  v23 = &v9[v12] + v15 * v20->m_nIndex;
  v24 = g_flInterpolatedVarsTickInterval;
  v25 = 0;
  while ( 1 )
  {
    v26 = v25;
    if ( m_nChangeTick == 0 || v22 == 0 )
    {
LABEL_23:
      v28 = v8 - 1;
      v29 = v28 + v62;
      if ( v11 <= v28 + v62 )
        v29 = v28 + v62 - v11;
      pInfo->m_Records[0].m_nChangeTick = v9[v29].m_nChangeTick;
      pInfo->m_Records[0].m_pValue = &m_pPerPhaseData->m_VarHistory.m_pElements[(*(&m_pPerPhaseData->m_VarHistory + 5) >> 3)
                                                                              & 0x3F]
                                   + ((*(&m_pPerPhaseData->m_VarHistory + 4) >> 6) & 0x3F)
                                   * m_pPerPhaseData->m_VarHistory.m_pElements[v29].m_nIndex;
      v30 = (*(&m_pPerPhaseData->m_VarHistory + 8) & 0x3F) + v28;
      v31 = (*(&m_pPerPhaseData->m_VarHistory + 5) >> 3) & 0x3F;
      if ( v30 >= v31 )
        v30 -= v31;
      pInfo->m_Records[1].m_nChangeTick = m_pPerPhaseData->m_VarHistory.m_pElements[v30].m_nChangeTick;
      v32 = m_pPerPhaseData->m_VarHistory.m_pElements;
      m_nIndex = m_pPerPhaseData->m_VarHistory.m_pElements[v30].m_nIndex;
      goto LABEL_28;
    }
    v27 = v22 * g_flInterpolatedVarsTickInterval;
    if ( v27 <= currentTime )
      break;
    if ( v8 <= v25 + 2 )
      goto LABEL_23;
    v34 = v19 - 1;
    if ( v11 <= v19 - 1 )
      v34 = v21 - 1;
    v35 = &v9[v34];
    m_nChangeTick = v35->m_nChangeTick;
    v36 = &v9[v12] + v17 * v35->m_nIndex;
    v37 = v21;
    if ( v11 > v19 )
      v37 = v19;
    newer = v36;
    ++v25;
    ++v19;
    ++v21;
    v38 = &v9[v37];
    v22 = v38->m_nChangeTick;
    v23 = &v9[v12] + v17 * v38->m_nIndex;
  }
  pInfo->m_Records[0].m_nChangeTick = m_nChangeTick;
  pInfo->m_Records[1].m_pValue = v23;
  pInfo->m_Records[1].m_nChangeTick = v22;
  v46 = m_nChangeTick * v24;
  pInfo->m_Records[0].m_pValue = newer;
  if ( currentTime <= v46 )
  {
    if ( m_nChangeTick - v22 > 0 )
    {
      v47 = currentTime - v27;
      v48 = v46 - v27;
      v49 = 2.0;
      v50 = v47 / v48;
      if ( v50 <= 2.0 )
        v49 = fmaxf(0.0, v50);
      pInfo->frac = v49;
      v51 = (*(this->_vptr_IInterpolatedVar + 10))(this, 1);
      v52 = -1;
      if ( v51 == 0 )
      {
        v53 = v26 + 1;
        if ( v53 < ((*(&m_pPerPhaseData->m_VarHistory + 2) >> 13) & 0x3F) )
        {
          v54 = m_pPerPhaseData->m_VarHistory.m_pElements;
          v55 = *(&m_pPerPhaseData->m_VarHistory + 4);
          v56 = (*(&m_pPerPhaseData->m_VarHistory + 8) & 0x3F) + v53;
          v57 = (*(&m_pPerPhaseData->m_VarHistory + 5) >> 3) & 0x3F;
          v58 = (*(&m_pPerPhaseData->m_VarHistory + 5) >> 3) & 0x3F;
          if ( v56 >= v57 )
            v56 -= v57;
          v59 = &v54[v56];
          v52 = v59->m_nChangeTick;
          LODWORD(v59) = v59->m_nIndex;
          pInfo->m_Records[2].m_nChangeTick = v52;
          pInfo->m_Records[2].m_pValue = &v54[v58] + ((v55 >> 6) & 0x3F) * v59;
          if ( v22 - v52 > 0 )
            pInfo->m_bHermite = g_bAllowHermiteInterpolation;
        }
      }
      if ( pResult != 0 )
      {
        if ( pInfo->m_bHermite )
          v22 = v52;
        if ( v22 >= m_pPerPhaseData->m_nLastActualChangeTick )
          *pResult = InterpolationResult_t::INTERPOLATION_HAS_NO_MORE_FUTURE_SAMPLES;
      }
    }
    return 1;
  }
  pInfo->m_bExtrapolated = 1;
  pInfo->frac = 1.0;
  if ( pResult == 0 )
    return 1;
  *pResult = InterpolationResult_t::INTERPOLATION_HAS_NO_MORE_FUTURE_SAMPLES;
  return 1;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::InterpolateInternal  (line 2064, @0x0000000001ec92e0, libserver.so)  // inlines: ExtrapolateInterpolatedVarType_Context<EnableRenderingInfo_t>, GetPerPhaseData, Interpolate_Guts, InterpolationInfoTyped_t, InterpolationRecordTyped_t, Invoke_Lerp_Context_NoCopy, Invoke_Lerp_Hermite_Context_NoCopy, Lerp_Context_NoCopy<EnableRenderingInfo_t>, Lerp_Hermite_Context_NoCopy<EnableRenderingInfo_t>, TicksToTime, TimeFixup_Hermite, _Extrapolate, _Interpolate, _Interpolate_Hermite
// calls: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetInterpolationInfo, CDisableRangeChecks::CDisableRangeChecks, CDisableRangeChecks::~CDisableRangeChecks, _Unwind_Resume
// callers: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SpewInterpolatedVarToString
// globals: CInterpolationContext::s_bAllowExtrapolation, CInterpolationContext::s_nLastServerTick
__int64 __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::InterpolateInternal(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase,
        EnableRenderingInfo_t *pOut,
        float flTime,
        InterpolationBehavior_t behavior)
{
  double v8; // xmm0_8
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v9; // rax
  double v10; // xmm0_8
  __int64 v11; // r13
  EnableRenderingInfo_t *v12; // r14
  __int64 v14; // rax
  int v15; // ecx
  int v16; // edx
  const EnableRenderingInfo_t *v17; // rsi
  const EnableRenderingInfo_t *v18; // rdi
  EnableRenderingInfo_t v19; // r8d
  int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  int v23; // edx
  const EnableRenderingInfo_t *v24; // rsi
  const EnableRenderingInfo_t *v25; // rdi
  EnableRenderingInfo_t v26; // r8d
  __int64 v27; // rax
  int v28; // ecx
  int v29; // edx
  const EnableRenderingInfo_t *m_pValue; // rsi
  const EnableRenderingInfo_t *v31; // rdi
  EnableRenderingInfo_t v32; // r8d
  const EnableRenderingInfo_t *v33; // rsi
  __int64 v34; // rax
  float frac; // [rsp+Ch] [rbp-84h]
  float flTimeb; // [rsp+10h] [rbp-80h]
  float flTimec; // [rsp+10h] [rbp-80h]
  CDisableRangeChecks v39; // [rsp+2Bh] [rbp-65h] BYREF
  InterpolationResult_t v40; // [rsp+2Ch] [rbp-64h] BYREF
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::InterpolationInfo_t info; // [rsp+30h] [rbp-60h] BYREF

  info.m_Records[0].m_pValue = 0;
  info.m_Records[0].m_nChangeTick = 0;
  info.m_Records[1].m_pValue = 0;
  info.m_Records[1].m_nChangeTick = 0;
  info.m_Records[2].m_pValue = 0;
  info.m_Records[2].m_nChangeTick = 0;
  info.frac = 0.0;
  info.m_bHermite = 0;
  info.m_bExtrapolated = 0;
  if ( CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetInterpolationInfo(
         this,
         ivPhase,
         &info,
         flTime,
         behavior,
         &v40) != 0 )
  {
    if ( !info.m_bHermite )
    {
      if ( !info.m_bExtrapolated )
      {
        flTimec = info.frac;
        (*(this->_vptr_IInterpolatedVar + 54))(this);
        if ( (*(this + 33) & 0x3F) != 0 )
        {
          v27 = 0;
          v28 = 0;
          v29 = 1;
          m_pValue = info.m_Records[0].m_pValue;
          v31 = info.m_Records[1].m_pValue;
          do
          {
            if ( flTimec >= 1.0 )
              v32 = m_pValue[v27];
            else
              v32 = v31[v27];
            pOut[v27] = v32;
            ++v28;
            v29 *= 2;
            ++v27;
          }
          while ( v28 < (*(this + 33) & 0x3F) );
        }
        return v40;
      }
      if ( ivPhase != InterpolatedVarPhase_t::IV_PHASE_CLIENT_AUTHORITATIVE )
      {
        v9 = 0;
        if ( (*(this + 32) & 0x20) != 0 )
          v9 = this->m_pPerPhaseData + 1;
        *&v10 = LODWORD(v9->m_flInterpolationAmount);
        if ( !CInterpolationContext::s_bAllowExtrapolation )
          goto LABEL_18;
      }
      else
      {
        *&v10 = LODWORD(this->m_pPerPhaseData->m_flInterpolationAmount);
        if ( !CInterpolationContext::s_bAllowExtrapolation )
          goto LABEL_18;
      }
      if ( info.m_Records[1].m_nChangeTick != 0
        && *&v10 > 0.000001
        && info.m_Records[1].m_nChangeTick >= CInterpolationContext::s_nLastServerTick )
      {
        if ( info.m_Records[1].m_nChangeTick == info.m_Records[0].m_nChangeTick
          || (info.m_Records[0].m_nChangeTick * g_flInterpolatedVarsTickInterval) >= (flTime - *&v10) )
        {
          if ( (*(this + 33) & 0x3F) != 0 )
          {
            v33 = info.m_Records[0].m_pValue;
            v34 = 0;
            do
            {
              pOut[v34] = v33[v34];
              ++v34;
            }
            while ( (*(this + 33) & 0x3F) > v34 );
          }
        }
        else
        {
          v11 = 0;
          if ( (*(this + 33) & 0x3F) != 0 )
          {
            do
            {
              v12 = &info.m_Records[0].m_pValue[v11];
              (*(this->_vptr_IInterpolatedVar + 54))(this);
              pOut[v11++] = *v12;
            }
            while ( (*(this + 33) & 0x3F) > v11 );
          }
        }
        return v40;
      }
LABEL_18:
      flTimeb = info.frac;
      (*(this->_vptr_IInterpolatedVar + 54))(this, v10);
      if ( (*(this + 33) & 0x3F) != 0 )
      {
        v14 = 0;
        v15 = 0;
        v16 = 1;
        v17 = info.m_Records[0].m_pValue;
        v18 = info.m_Records[1].m_pValue;
        do
        {
          if ( flTimeb >= 1.0 )
            v19 = v17[v14];
          else
            v19 = v18[v14];
          pOut[v14] = v19;
          ++v15;
          v16 *= 2;
          ++v14;
        }
        while ( v15 < (*(this + 33) & 0x3F) );
      }
      return v40;
    }
    frac = info.frac;
    CDisableRangeChecks::CDisableRangeChecks(&v39);
    v20 = info.m_Records[0].m_nChangeTick - info.m_Records[1].m_nChangeTick;
    if ( info.m_Records[0].m_nChangeTick - info.m_Records[1].m_nChangeTick != info.m_Records[1].m_nChangeTick
                                                                            - info.m_Records[2].m_nChangeTick
      && v20 > 0 )
    {
      info.m_Records[2].m_nChangeTick = info.m_Records[1].m_nChangeTick - v20;
    }
    (*(this->_vptr_IInterpolatedVar + 54))(this);
    if ( (*(this + 33) & 0x3F) != 0 )
    {
      v21 = 0;
      v22 = 0;
      v23 = 1;
      v24 = info.m_Records[0].m_pValue;
      v25 = info.m_Records[1].m_pValue;
      do
      {
        if ( frac >= 1.0 )
          v26 = v24[v21];
        else
          v26 = v25[v21];
        pOut[v21] = v26;
        ++v22;
        v23 *= 2;
        ++v21;
      }
      while ( v22 < (*(this + 33) & 0x3F) );
    }
    CDisableRangeChecks::~CDisableRangeChecks(&v39);
    return v40;
  }
  else
  {
    (*(this->_vptr_IInterpolatedVar + 35))(this, pOut, v8, flTime);
    return v40;
  }
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::Interpolate  (line 2079, @0x0000000001ec8810, libserver.so)  // inlines: CUtlString, Count, ExtrapolateInterpolatedVarType_Context<EnableRenderingInfo_t>, FreeData, GetAutoSpew, GetDebugMaskForPhase, GetDebugString, GetHistorySampleTime, GetInterpolatedVarPhaseName, GetNameByToken, GetPerPhaseData, GetRaw, GetValue, InterpolateInternal, Interpolate_Guts, InterpolationInfoTyped_t, InterpolationRecordTyped_t, Invoke_Lerp_Context_NoCopy, Invoke_Lerp_Hermite_Context_NoCopy, Lerp_Context_NoCopy<EnableRenderingInfo_t>, Lerp_Hermite_Context_NoCopy<EnableRenderingInfo_t>, RemoveEntriesPreviousTo, RoundToTicks, String, Tick, TicksToTime, TimeFixup_Hermite, TimeToTicks, Truncate, _Extrapolate, _Interpolate, _Interpolate_Hermite, operator(), ~CUtlString
// calls: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetInterpolationInfo, CUtlString::Get, CFmtStrN<256, false>::CFmtStrN, CUtlString::FreeMemoryBlock, CUtlString::Format, Msg, CDisableRangeChecks::CDisableRangeChecks, CDisableRangeChecks::~CDisableRangeChecks, __stack_chk_fail, _Unwind_Resume
// callers: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::Interpolate, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::DoesCurrentValueMatchInterpolatedValue
// strings: "[%9.9s] (%5d)%s:", "Enable : %d SplitScreen %X", " [value will hold]", "%s Interpolate at %f%s value %s\n"
// globals: CInterpolationContext::s_bAllowExtrapolation, CInterpolationContext::s_nLastServerTick, g_InterpolatedVarPhaseNames, tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)::unknown
__int64 __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::Interpolate(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase,
        EnableRenderingInfo_t *pOut,
        float flTime,
        InterpolationBehavior_t behavior,
        uint32 sideEffects)
{
  char v6; // r14
  InterpolatedVarPhase_t v7; // r13d
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v10; // rax
  double v11; // xmm0_8
  __int64 v12; // r15
  EnableRenderingInfo_t *v13; // r13
  char v14; // r15
  _QWORD *v15; // rax
  unsigned int v16; // r15d
  _QWORD *v17; // rdi
  char *v18; // rax
  float v19; // xmm0_4
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *m_pPerPhaseData; // r15
  int v21; // edi
  int v22; // edx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *m_pElements; // r8
  int v24; // esi
  int v25; // r9d
  int v26; // eax
  int v27; // edx
  int v28; // eax
  uint32 m_nFreeDataElements; // r10d
  int v30; // r9d
  int v31; // ecx
  int v32; // ecx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v34; // rax
  const char *v35; // rax
  char *name; // rdx
  tokenset_t<InterpolatedVarPhase_t> *v37; // rsi
  int m_nSplitscreenFlags; // ecx
  _BOOL4 m_bEnableRendering; // edx
  const char *v40; // rax
  const char *v41; // rdx
  char v42; // dl
  __int64 v43; // rax
  int v44; // ecx
  int v45; // edx
  const EnableRenderingInfo_t *v46; // rsi
  const EnableRenderingInfo_t *v47; // rdi
  EnableRenderingInfo_t v48; // r8d
  int v49; // eax
  __int64 v50; // rax
  int v51; // ecx
  int v52; // edx
  const EnableRenderingInfo_t *m_pValue; // rsi
  const EnableRenderingInfo_t *v54; // rdi
  EnableRenderingInfo_t v55; // r8d
  __int64 v56; // rax
  int v57; // ecx
  int v58; // edx
  const EnableRenderingInfo_t *v59; // rsi
  const EnableRenderingInfo_t *v60; // rdi
  EnableRenderingInfo_t v61; // r8d
  const EnableRenderingInfo_t *v62; // rsi
  __int64 v63; // rax
  InterpolatedVarPhase_t flActualTime; // [rsp+Ch] [rbp-1B4h]
  float flActualTimea; // [rsp+Ch] [rbp-1B4h]
  char flActualTimeb; // [rsp+Ch] [rbp-1B4h]
  float flActualTimec; // [rsp+Ch] [rbp-1B4h]
  float flActualTimed; // [rsp+Ch] [rbp-1B4h]
  InterpolationResult_t v71; // [rsp+1Ch] [rbp-1A4h]
  float v72; // [rsp+1Ch] [rbp-1A4h]
  float frac; // [rsp+1Ch] [rbp-1A4h]
  CDisableRangeChecks v74; // [rsp+2Bh] [rbp-195h] BYREF
  InterpolationResult_t pResult; // [rsp+2Ch] [rbp-194h] BYREF
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::InterpolationInfo_t pInfo; // [rsp+30h] [rbp-190h] BYREF
  CFmtStr preString; // [rsp+70h] [rbp-150h] BYREF
  unsigned __int64 v78; // [rsp+188h] [rbp-38h]

  v6 = sideEffects;
  v7 = ivPhase;
  v78 = __readfsqword(0x28u);
  pInfo.m_Records[0].m_pValue = 0;
  pInfo.m_Records[0].m_nChangeTick = 0;
  pInfo.m_Records[1].m_pValue = 0;
  pInfo.m_Records[1].m_nChangeTick = 0;
  pInfo.m_Records[2].m_pValue = 0;
  pInfo.m_Records[2].m_nChangeTick = 0;
  pInfo.frac = 0.0;
  pInfo.m_bHermite = 0;
  pInfo.m_bExtrapolated = 0;
  if ( CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetInterpolationInfo(
         this,
         ivPhase,
         &pInfo,
         flTime,
         behavior,
         &pResult) != 0 )
  {
    if ( pInfo.m_bHermite )
    {
      flActualTimed = pInfo.frac;
      CDisableRangeChecks::CDisableRangeChecks(&v74);
      v49 = pInfo.m_Records[0].m_nChangeTick - pInfo.m_Records[1].m_nChangeTick;
      if ( pInfo.m_Records[0].m_nChangeTick - pInfo.m_Records[1].m_nChangeTick != pInfo.m_Records[1].m_nChangeTick
                                                                                - pInfo.m_Records[2].m_nChangeTick
        && v49 > 0 )
      {
        pInfo.m_Records[2].m_nChangeTick = pInfo.m_Records[1].m_nChangeTick - v49;
      }
      (*(this->_vptr_IInterpolatedVar + 54))(this);
      if ( (*(this + 33) & 0x3F) != 0 )
      {
        v50 = 0;
        v51 = 0;
        v52 = 1;
        m_pValue = pInfo.m_Records[0].m_pValue;
        v54 = pInfo.m_Records[1].m_pValue;
        do
        {
          if ( flActualTimed >= 1.0 )
            v55 = m_pValue[v50];
          else
            v55 = v54[v50];
          pOut[v50] = v55;
          ++v51;
          v52 *= 2;
          ++v50;
        }
        while ( v51 < (*(this + 33) & 0x3F) );
      }
      CDisableRangeChecks::~CDisableRangeChecks(&v74);
      v71 = pResult;
LABEL_18:
      if ( (v6 & 1) == 0 )
        goto LABEL_38;
      goto LABEL_19;
    }
    if ( !pInfo.m_bExtrapolated )
    {
      frac = pInfo.frac;
      (*(this->_vptr_IInterpolatedVar + 54))(this);
      if ( (*(this + 33) & 0x3F) != 0 )
      {
        v56 = 0;
        v57 = 0;
        v58 = 1;
        v59 = pInfo.m_Records[0].m_pValue;
        v60 = pInfo.m_Records[1].m_pValue;
        do
        {
          if ( frac >= 1.0 )
            v61 = v59[v56];
          else
            v61 = v60[v56];
          pOut[v56] = v61;
          ++v57;
          v58 *= 2;
          ++v56;
        }
        while ( v57 < (*(this + 33) & 0x3F) );
      }
      goto LABEL_17;
    }
    if ( v7 != InterpolatedVarPhase_t::IV_PHASE_CLIENT_AUTHORITATIVE )
    {
      v10 = 0;
      if ( (*(this + 32) & 0x20) != 0 )
        v10 = this->m_pPerPhaseData + 1;
      *&v11 = LODWORD(v10->m_flInterpolationAmount);
      if ( !CInterpolationContext::s_bAllowExtrapolation )
        goto LABEL_64;
    }
    else
    {
      *&v11 = LODWORD(this->m_pPerPhaseData->m_flInterpolationAmount);
      if ( !CInterpolationContext::s_bAllowExtrapolation )
        goto LABEL_64;
    }
    if ( pInfo.m_Records[1].m_nChangeTick != 0
      && *&v11 > 0.000001
      && pInfo.m_Records[1].m_nChangeTick >= CInterpolationContext::s_nLastServerTick )
    {
      if ( pInfo.m_Records[1].m_nChangeTick == pInfo.m_Records[0].m_nChangeTick
        || (pInfo.m_Records[0].m_nChangeTick * g_flInterpolatedVarsTickInterval) >= (flTime - *&v11) )
      {
        if ( (*(this + 33) & 0x3F) != 0 )
        {
          v62 = pInfo.m_Records[0].m_pValue;
          v63 = 0;
          do
          {
            pOut[v63] = v62[v63];
            ++v63;
          }
          while ( (*(this + 33) & 0x3F) > v63 );
        }
      }
      else
      {
        v12 = 0;
        if ( (*(this + 33) & 0x3F) != 0 )
        {
          flActualTime = v7;
          do
          {
            v13 = &pInfo.m_Records[0].m_pValue[v12];
            (*(this->_vptr_IInterpolatedVar + 54))(this);
            pOut[v12++] = *v13;
          }
          while ( (*(this + 33) & 0x3F) > v12 );
          v7 = flActualTime;
        }
      }
LABEL_17:
      v71 = pResult;
      goto LABEL_18;
    }
LABEL_64:
    v72 = pInfo.frac;
    (*(this->_vptr_IInterpolatedVar + 54))(this, v11);
    if ( (*(this + 33) & 0x3F) != 0 )
    {
      v43 = 0;
      v44 = 0;
      v45 = 1;
      v46 = pInfo.m_Records[0].m_pValue;
      v47 = pInfo.m_Records[1].m_pValue;
      do
      {
        if ( v72 >= 1.0 )
          v48 = v46[v43];
        else
          v48 = v47[v43];
        pOut[v43] = v48;
        ++v44;
        v45 *= 2;
        ++v43;
      }
      while ( v44 < (*(this + 33) & 0x3F) );
    }
    goto LABEL_17;
  }
  (*(this->_vptr_IInterpolatedVar + 35))(this, pOut);
  v71 = pResult;
  if ( (v6 & 1) == 0 )
    goto LABEL_38;
LABEL_19:
  v14 = *(this + 33);
  v15 = (*(this->_vptr_IInterpolatedVar + 50))(this);
  v16 = v14 & 0x3F;
  v17 = (v15[2] + *v15);
  v18 = v15[1];
  if ( (v18 & 1) != 0 )
    v18 = *&v18[*v17 - 1];
  (v18)(v17, pOut, v16, this, 0);
  flActualTimea = g_flInterpolatedVarsTickInterval;
  (*(this->_vptr_IInterpolatedVar + 4))(this, v7);
  if ( v7 != InterpolatedVarPhase_t::IV_PHASE_CLIENT_AUTHORITATIVE )
  {
    if ( (*(this + 32) & 0x20) == 0 )
      goto LABEL_38;
    m_pPerPhaseData = this->m_pPerPhaseData + 1;
  }
  else
  {
    m_pPerPhaseData = this->m_pPerPhaseData;
  }
  if ( m_pPerPhaseData != 0 )
  {
    v21 = (*(&m_pPerPhaseData->m_VarHistory + 2) >> 13) & 0x3F;
    if ( v21 > 3 )
    {
      v22 = 0;
      m_pElements = m_pPerPhaseData->m_VarHistory.m_pElements;
      v24 = (*(&m_pPerPhaseData->m_VarHistory + 5) >> 3) & 0x3F;
      v25 = *(&m_pPerPhaseData->m_VarHistory + 8) & 0x3F;
      while ( 1 )
      {
        v26 = v22 + v25;
        if ( v24 <= v22 + v25 )
          v26 = v25 - v24 + v22;
        if ( (((((flTime / flActualTimea) + 0.5) * flActualTimea)
             - (((v19 + 0.050000001) / g_flInterpolatedVarsTickInterval) + 0.5))
            - 1.0) > m_pElements[v26].m_nChangeTick )
          break;
        if ( v21 <= ++v22 )
          goto LABEL_38;
      }
      flActualTimeb = v22 + 1;
      v27 = v22 + 1;
      if ( v21 > v27 )
      {
        v28 = v25 + v27;
        m_nFreeDataElements = m_pPerPhaseData->m_VarHistory.m_nFreeDataElements;
        v30 = v25 - v24;
        while ( 1 )
        {
          v31 = v30 + v27;
          if ( v24 > v28 )
            v31 = v28;
          ++v27;
          ++v28;
          v32 = m_nFreeDataElements | (1 << m_pElements[v31].m_nIndex);
          m_pPerPhaseData->m_VarHistory.m_nFreeDataElements = v32;
          if ( v21 <= v27 )
            break;
          m_nFreeDataElements = v32;
        }
        *(&m_pPerPhaseData->m_VarHistory + 2) = ((flActualTimeb & 0x3F) << 13)
                                              | *(&m_pPerPhaseData->m_VarHistory + 2) & 0xFFF81FFF;
      }
    }
  }
LABEL_38:
  if ( (v6 & 2) == 0 )
    return v71;
  if ( (*(this->_vptr_IInterpolatedVar + 19))(this, v7) != 0 )
  {
    if ( v7 != InterpolatedVarPhase_t::IV_PHASE_CLIENT_AUTHORITATIVE )
    {
      flActualTimec = flTime;
      if ( (*(this + 32) & 0x20) == 0 )
        goto LABEL_46;
      v34 = this->m_pPerPhaseData + 1;
    }
    else
    {
      v34 = this->m_pPerPhaseData;
    }
    if ( v34 != 0 )
    {
      flActualTimec = flTime;
      if ( behavior == InterpolationBehavior_t::OFFSET_TIME_BY_INTERPOLATION_AMOUNT )
        flActualTimec = flTime - v34->m_flInterpolationAmount;
    }
    else
    {
      flActualTimec = flTime;
    }
LABEL_46:
    (*(this->_vptr_IInterpolatedVar + 16))(&pInfo, this, (*(this + 35) >> 2));
    v35 = CUtlString::Get(&pInfo);
    name = g_InterpolatedVarPhaseNames[0].name;
    if ( g_InterpolatedVarPhaseNames[0].name != 0 )
    {
      if ( v7 == g_InterpolatedVarPhaseNames[0].token )
      {
LABEL_52:
        CFmtStrN<256,false>::CFmtStrN(&preString, "[%9.9s] (%5d)%s:", name, this->m_nEntityIndex.m_Data, v35);
        if ( pInfo.m_Records[0].m_pValue != 0 )
          CUtlString::FreeMemoryBlock(&pInfo);
        m_nSplitscreenFlags = pOut->m_nSplitscreenFlags;
        m_bEnableRendering = pOut->m_bEnableRendering;
        pInfo.m_Records[0].m_pValue = 0;
        CUtlString::Format(&pInfo, "Enable : %d SplitScreen %X", m_bEnableRendering, m_nSplitscreenFlags);
        v40 = CUtlString::Get(&pInfo);
        v41 = " [value will hold]";
        if ( v71 != InterpolationResult_t::INTERPOLATION_HAS_NO_MORE_FUTURE_SAMPLES )
          v41 = "";
        Msg("%s Interpolate at %f%s value %s\n", preString.m_szBuf, flActualTimec, v41, v40);
        if ( pInfo.m_Records[0].m_pValue != 0 )
          CUtlString::FreeMemoryBlock(&pInfo);
        goto LABEL_58;
      }
      v37 = g_InterpolatedVarPhaseNames;
      while ( 1 )
      {
        ++v37;
        name = v37->name;
        if ( v37->name == 0 )
          break;
        if ( v7 == v37->token )
          goto LABEL_52;
      }
    }
    name = tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)const::unknown;
    goto LABEL_52;
  }
LABEL_58:
  v42 = 3;
  if ( v7 != InterpolatedVarPhase_t::IV_PHASE_RENDERING )
    v42 = 1 << v7;
  if ( ((*(this + 34) >> 6) & v42) != 0 && (*(this + 35) & 2) != 0 )
    (*(this->_vptr_IInterpolatedVar + 24))(this, v7, behavior, 1, 0xFFFFFFFFLL, flTime);
  return v71;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::Interpolate  (line 2124, @0x0000000001ec9140, libserver.so)
// calls: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::Interpolate
__int64 __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::Interpolate(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase,
        float flTime,
        InterpolationBehavior_t behavior,
        uint32 sideEffectFlags)
{
  return CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::Interpolate(
           this,
           ivPhase,
           this->m_pValue,
           flTime,
           behavior,
           sideEffectFlags);
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::DoesCurrentValueMatchInterpolatedValue  (line 2133, @0x0000000001ec9160, libserver.so)  // inlines: GetValuePtr, IsIdenticalWithinTolerance, operator(), operator==
// calls: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::Interpolate, __stack_chk_fail
__int64 __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::DoesCurrentValueMatchInterpolatedValue(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase,
        float flInterpolationTime,
        InterpolationBehavior_t behavior)
{
  EnableRenderingInfo_t *m_pValue; // r12
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  char *v10; // rax
  EnableRenderingInfo_t *v11; // r15
  void *v12; // rsp
  char *v13; // r12
  __int64 result; // rax
  char *v15; // rax
  signed __int64 v16; // rdx
  __int16 v17; // si
  __int16 v18; // cx
  _QWORD v20[10]; // [rsp+10h] [rbp-50h] BYREF

  v20[3] = __readfsqword(0x28u);
  m_pValue = this->m_pValue;
  LOBYTE(v20[0]) = *(this + 33);
  v8 = (*(this->_vptr_IInterpolatedVar + 49))(this);
  v9 = (v8[2] + *v8);
  v10 = v8[1];
  if ( (v10 & 1) != 0 )
    v10 = *&v10[*v9 - 1];
  (v10)(v9, m_pValue, v20[0] & 0x3F, this);
  v11 = this->m_pValue;
  LOBYTE(v20[0]) = *(this + 33);
  v12 = alloca((((4 * (v20[0] & 0x3F) + 31) & 0x3F0) + 30) & 0x7F0);
  v13 = (v20 & 0xFFFFFFFFFFFFFFEFLL);
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::Interpolate(
    this,
    ivPhase,
    (v20 & 0xFFFFFFFFFFFFFFEFLL),
    flInterpolationTime,
    behavior,
    0);
  if ( (*(this + 33) & 0x3F) == 0 )
    return 1;
  result = 0;
  if ( v11->m_bEnableRendering == *(&loc_2 + (v20 & 0xFFFFFFFFFFFFFFEFLL)) && v11->m_nSplitscreenFlags == *v13 )
  {
    v15 = v13 + 4;
    v16 = v11 - v13;
    while ( v15 != &v13[4 * (*(this + 33) & 0x3F)] )
    {
      v17 = *&v15[v16];
      v18 = *v15;
      if ( v15[v16 + 2] != v15[2] )
        return 0;
      v15 += 4;
      if ( v17 != v18 )
        return 0;
    }
    return 1;
  }
  return result;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::ValueChangesAfterThisTime  (line 2153, @0x0000000001ec87b0, libserver.so)  // inlines: InterpolationInfoTyped_t, InterpolationRecordTyped_t
// calls: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetInterpolationInfo
bool __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::ValueChangesAfterThisTime(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        InterpolatedVarPhase_t ivPhase,
        float flInterpolationTime,
        InterpolationBehavior_t behavior)
{
  InterpolationResult_t v5; // [rsp+Ch] [rbp-44h] BYREF
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::InterpolationInfo_t info; // [rsp+10h] [rbp-40h] BYREF

  info.m_Records[0].m_pValue = 0;
  info.m_Records[0].m_nChangeTick = 0;
  info.m_Records[1].m_pValue = 0;
  info.m_Records[1].m_nChangeTick = 0;
  info.m_Records[2].m_pValue = 0;
  info.m_Records[2].m_nChangeTick = 0;
  info.frac = 0.0;
  info.m_bHermite = 0;
  info.m_bExtrapolated = 0;
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetInterpolationInfo(
    this,
    ivPhase,
    &info,
    flInterpolationTime,
    behavior,
    &v5);
  return v5 == InterpolationResult_t::INTERPOLATION_HAS_FUTURE_SAMPLES;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::Copy  (line 2163, @0x0000000001ec3e00, libserver.so)  // inlines: GetPerPhaseData, GetPhaseCount, RemoveAll
void __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::Copy(
        CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        IInterpolatedVar *pInSrc)
{
  int v2; // ecx
  char v3; // dl
  int (**vptr_IInterpolatedVar)(...); // rax
  int v5; // edx

  if ( pInSrc != 0 && ((BYTE1(pInSrc[4]._vptr_IInterpolatedVar) ^ *(this + 33)) & 0x3F) == 0 )
  {
    v2 = 0;
    v3 = *(this + 32);
    this->m_nLooping = pInSrc[3]._vptr_IInterpolatedVar;
    while ( 1 )
    {
      if ( v2 >= 2 - ((v3 & 0x20) == 0) )
        return;
      if ( v2 != 0 )
      {
        if ( (pInSrc[4]._vptr_IInterpolatedVar & 0x20) == 0 )
          goto LABEL_7;
        vptr_IInterpolatedVar = pInSrc[2]._vptr_IInterpolatedVar + 4;
      }
      else
      {
        vptr_IInterpolatedVar = pInSrc[2]._vptr_IInterpolatedVar;
      }
      if ( vptr_IInterpolatedVar != 0 )
      {
        v5 = *(vptr_IInterpolatedVar + 2);
        *(vptr_IInterpolatedVar + 3) = -1;
        v5 &= 0xFFF81FFF;
        *(vptr_IInterpolatedVar + 2) = v5;
        *(vptr_IInterpolatedVar + 8) = v5 & 0xC0;
        v3 = *(this + 32);
      }
LABEL_7:
      ++v2;
    }
  }
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetMaxCount  (line 2302, @0x0000000001ec17a0, libserver.so)
int __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetMaxCount(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  return *(this + 33) & 0x3F;
}


// CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SpewInterpolatedVarToString  (line 2431, @0x0000000001ec97b0, libserver.so)  // inlines: CUtlString, CVarHistoryPairIteratorTyped, Count, First, GetDebugSpeedString, GetDebugString, GetEntry, GetHistorySampleTime, GetInterpolatedVarPhaseName, GetNameByToken, GetPerPhaseData, GetRaw, GetSpeed, GetValue, InterpolationInfoTyped_t, InterpolationRecordTyped_t, Next, String, Tick, TicksToTime, Value, ~CUtlString
// calls: CUtlString::Get, CFmtStrN<256, false>::CFmtStrN, CUtlString::FreeMemoryBlock, CUtlString::operator+=, operator new [], CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::InterpolateInternal, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetInterpolationInfo, CUtlString::Format, EnableRenderingInfo_t::GetDebugString, CFmtStrN<512, true>::CFmtStrN, CUtlString::Set, operator delete [] (15 total)
// callers: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SpewInterpolatedVar
// strings: "[%9.9s] (%5d)%s:", "%s at %.6f (interp %.6f) target %.6f\n", "%s --------------------------------------------------\n", "extrapolated [%.2f]", "%s  > %6.6f : (%s) %s for %.1f msec\n", "[%9.9s] (%d)%s at %.6f phase not supported\n" (14 total)
// globals: g_InterpolatedVarPhaseNames, tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)::unknown
CUtlString __fastcall CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::SpewInterpolatedVarToString(
        const CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        __int64 *ivPhase,
        float flNow,
        InterpolatedVarPhase_t behavior,
        InterpolationBehavior_t bSpewAllEntries,
        char nForceArrayIndex,
        unsigned int a7)
{
  __int64 v9; // r15
  __int64 v10; // rax
  const char *v11; // rax
  char *name; // rdx
  tokenset_t<InterpolatedVarPhase_t> *v13; // rsi
  unsigned int v14; // ecx
  __int64 v15; // r8
  int v16; // esi
  int v17; // eax
  int v18; // edx
  int v19; // r9d
  float v20; // xmm2_4
  int v21; // edx
  int v22; // ebx
  int v23; // esi
  float v24; // xmm1_4
  double v25; // xmm0_8
  float v26; // xmm2_4
  float v27; // xmm0_4
  double v28; // rbx
  const char *v29; // r13
  const char *v30; // rcx
  char v31; // r12
  char v32; // r13
  int v33; // eax
  __int64 v34; // r8
  double v35; // r15
  const char *v36; // rax
  const char *v37; // rdx
  tokenset_t<InterpolatedVarPhase_t> *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rsi
  int v41; // eax
  int v42; // r8d
  __int64 v43; // rdi
  int v44; // r9d
  int v45; // eax
  unsigned int *v46; // r10
  __int64 v47; // rsi
  int v48; // ebx
  bool v49; // r12
  double frac; // xmm0_8
  const char *v51; // r13
  const char *v52; // rcx
  char v53; // r12
  const char *v54; // rax
  int v55; // eax
  const char *v56; // rcx
  char v57; // bl
  __int64 v59; // rdi
  int v60; // r11d
  int v61; // eax
  __int64 v62; // rsi
  int v63; // r10d
  int v64; // edx
  unsigned int *v65; // rax
  __int64 v66; // rdx
  const char *v67; // rax
  EnableRenderingInfo_t *entry; // [rsp+10h] [rbp-4A0h]
  double v70; // [rsp+20h] [rbp-490h]
  const char *v71; // [rsp+28h] [rbp-488h]
  unsigned __int16 *v72; // [rsp+38h] [rbp-478h]
  unsigned __int16 *v73; // [rsp+48h] [rbp-468h]
  bool bIsLast; // [rsp+60h] [rbp-450h]
  int v75; // [rsp+70h] [rbp-440h]
  char bValid; // [rsp+75h] [rbp-43Bh]
  char v77; // [rsp+76h] [rbp-43Ah]
  float behaviorb; // [rsp+78h] [rbp-438h]
  float v81; // [rsp+80h] [rbp-430h]
  float v82; // [rsp+84h] [rbp-42Ch]
  float flNowb; // [rsp+88h] [rbp-428h]
  float flNowc; // [rsp+88h] [rbp-428h]
  InterpolationResult_t infoResult; // [rsp+9Ch] [rbp-414h] BYREF
  CUtlString out; // [rsp+A0h] [rbp-410h] BYREF
  CUtlString desc; // [rsp+B0h] [rbp-400h] BYREF
  CUtlString v89; // [rsp+C0h] [rbp-3F0h] BYREF
  CUtlString v90[2]; // [rsp+D0h] [rbp-3E0h] BYREF
  CUtlString v91; // [rsp+E0h] [rbp-3D0h] BYREF
  CUtlString v92; // [rsp+F0h] [rbp-3C0h] BYREF
  CUtlString vel; // [rsp+100h] [rbp-3B0h] BYREF
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::InterpolationInfo_t info; // [rsp+110h] [rbp-3A0h] BYREF
  CFmtStr preString; // [rsp+150h] [rbp-360h] BYREF
  CFmtStrN<512,true> v96; // [rsp+260h] [rbp-250h] BYREF
  unsigned __int64 v97; // [rsp+478h] [rbp-38h]

  v97 = __readfsqword(0x28u);
  if ( a7 == -1 )
    a7 = *(ivPhase + 35) >> 2;
  if ( behavior != InterpolatedVarPhase_t::IV_PHASE_CLIENT_AUTHORITATIVE )
  {
    if ( (ivPhase[4] & 0x20) == 0 )
      goto LABEL_38;
    v9 = ivPhase[2] + 32;
  }
  else
  {
    v9 = ivPhase[2];
  }
  if ( v9 != 0 )
  {
    v82 = flNow;
    if ( bSpewAllEntries == InterpolationBehavior_t::OFFSET_TIME_BY_INTERPOLATION_AMOUNT )
      v82 = flNow - *(v9 + 24);
    v10 = *ivPhase;
    out.m_pString = 0;
    (*(v10 + 128))(&info, ivPhase, a7);
    v11 = CUtlString::Get(&info);
    name = g_InterpolatedVarPhaseNames[0].name;
    if ( g_InterpolatedVarPhaseNames[0].name != 0 )
    {
      if ( behavior == g_InterpolatedVarPhaseNames[0].token )
        goto LABEL_14;
      v13 = g_InterpolatedVarPhaseNames;
      while ( 1 )
      {
        ++v13;
        name = v13->name;
        if ( v13->name == 0 )
          break;
        if ( behavior == v13->token )
          goto LABEL_14;
      }
    }
    name = tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)const::unknown;
LABEL_14:
    CFmtStrN<256,false>::CFmtStrN(&preString, "[%9.9s] (%5d)%s:", name, *(ivPhase + 7), v11);
    if ( info.m_Records[0].m_pValue != 0 )
      CUtlString::FreeMemoryBlock(&info);
    v70 = v82;
    CFmtStrN<256,false>::CFmtStrN(&v96, "%s at %.6f (interp %.6f) target %.6f\n", preString.m_szBuf, flNow, *(v9 + 24));
    CUtlString::operator+=(&out, v96.m_szBuf);
    CFmtStrN<256,false>::CFmtStrN(&v96, "%s --------------------------------------------------\n", preString.m_szBuf);
    CUtlString::operator+=(&out, v96.m_szBuf);
    if ( (*(v9 + 8) & 0x7E000) == 0 )
    {
LABEL_99:
      CFmtStrN<256,false>::CFmtStrN(&v96, "  x %6.6f  : no samples latched\n", v70);
      CUtlString::operator+=(&out, v96.m_szBuf);
LABEL_86:
      CFmtStrN<256,false>::CFmtStrN(&v96, "%s --------------------------------------------------\n", preString.m_szBuf);
      CUtlString::operator+=(&out, v96.m_szBuf);
      this->_vptr_IInterpolatedVar = out.m_pString;
      return this;
    }
    entry = operator new[](4LL * (*(ivPhase + 33) & 0x3F));
    CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::InterpolateInternal(
      ivPhase,
      behavior,
      entry,
      flNow,
      bSpewAllEntries);
    info.m_Records[0].m_pValue = 0;
    info.m_Records[0].m_nChangeTick = 0;
    info.m_Records[1].m_pValue = 0;
    info.m_Records[1].m_nChangeTick = 0;
    info.m_Records[2].m_pValue = 0;
    info.m_Records[2].m_nChangeTick = 0;
    info.frac = 0.0;
    info.m_bHermite = 0;
    info.m_bExtrapolated = 0;
    bValid = CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetInterpolationInfo(
               ivPhase,
               behavior,
               &info,
               flNow,
               bSpewAllEntries,
               &infoResult);
    v14 = *(v9 + 8);
    v15 = *v9;
    v16 = *(v9 + 8) & 0x3F;
    v17 = (*(v9 + 10) >> 3) & 0x3F;
    v18 = v16 - v17;
    if ( v16 < v17 )
      v18 = *(v9 + 8) & 0x3F;
    v19 = (*(v9 + 8) >> 13) & 0x3F;
    v20 = *(v15 + 8LL * v18);
    v21 = v16 + v19 - 1;
    if ( v17 <= v21 )
      v21 = v16 + v19 - 1 - v17;
    v22 = *(v15 + 8LL * v21);
    desc.m_pString = 0;
    flNowb = v20 * g_flInterpolatedVarsTickInterval;
    v75 = v22;
    v81 = v22 * g_flInterpolatedVarsTickInterval;
    if ( v82 <= (v20 * g_flInterpolatedVarsTickInterval) )
    {
      v32 = 1;
      if ( v19 <= 1u )
      {
LABEL_36:
        v77 = 0;
        v33 = 0;
        v34 = 0;
        v73 = 0;
        v72 = 0;
        goto LABEL_53;
      }
    }
    else
    {
      if ( v19 == 1 )
      {
        CUtlString::operator=(&desc, "extrapolated [1.0] (single sample)");
      }
      else
      {
        v23 = v16 + 1;
        if ( v17 <= v23 )
          v23 -= v17;
        v24 = *(*v9 + 8LL * v23) * g_flInterpolatedVarsTickInterval;
        v25 = 1.0;
        if ( flNowb > v24 )
        {
          v26 = (v82 - flNowb) / (flNowb - v24);
          v25 = 2.0;
          if ( v26 <= 2.0 )
          {
            if ( v26 < 0.0 )
              v25 = 0.0;
            else
              v25 = v26;
          }
        }
        CUtlString::Format(&desc, "extrapolated [%.2f]", v25);
      }
      if ( g_flExtrapolateAmount <= (v82 - flNowb) )
        v27 = g_flExtrapolateAmount * 1000.0;
      else
        v27 = (v82 - flNowb) * 1000.0;
      v28 = v27;
      v29 = CUtlString::Get(&desc);
      if ( bValid != 0 )
      {
        EnableRenderingInfo_t::GetDebugString(&v89, entry);
        v30 = CUtlString::Get(&v89);
        v31 = 1;
      }
      else
      {
        v30 = "invalid";
        v31 = 0;
      }
      CFmtStrN<512,true>::CFmtStrN(&v96, "%s  > %6.6f : (%s) %s for %.1f msec\n", preString.m_szBuf, v30, v29, v70, v28);
      CUtlString::operator+=(&out, v96.m_szBuf);
      if ( v31 != 0 && v89.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v89);
      v14 = *(v9 + 8);
      v32 = 0;
      if ( ((v14 >> 13) & 0x3F) <= 1 )
        goto LABEL_36;
    }
    v77 = 1;
    v39 = *v9;
    v40 = (*(v9 + 10) >> 3) & 0x3F;
    v41 = *(v9 + 8) & 0x3F;
    v42 = v41 - v40;
    if ( v41 < v40 )
      v42 = *(v9 + 8) & 0x3F;
    v43 = 2 * v40;
    v44 = (*(v9 + 8) >> 6) & 0x3F;
    v45 = v41 + 1;
    v46 = (v39 + 8LL * v42);
    v34 = *v46;
    v72 = (v39 + 4 * (2 * v40 + v44 * *(v46 + 2)));
    if ( v40 <= v45 )
      v45 -= v40;
    v47 = v39 + 8LL * v45;
    v33 = *v47;
    v73 = (v39 + 4 * (v44 * *(v47 + 4) + v43));
LABEL_53:
    v48 = 0;
    while ( v77 != 0 )
    {
      bIsLast = v75 == v33;
      v49 = 0;
      behaviorb = v34 * g_flInterpolatedVarsTickInterval;
      flNowc = g_flInterpolatedVarsTickInterval * v33;
      if ( v82 >= flNowc )
        v49 = (v34 * g_flInterpolatedVarsTickInterval) >= v82;
      if ( nForceArrayIndex != 0 )
      {
        vel.m_pString = 0;
        v71 = CUtlString::Get(&vel);
        v90[0].m_pString = 0;
        CUtlString::Format(v90, "Enable : %d SplitScreen %X", *(v72 + 2), *v72);
        v67 = CUtlString::Get(v90);
        CFmtStrN<512,true>::CFmtStrN(
          &v96,
          "%s    %6.6f : (%s), vel: %s [dt %.1f]\n",
          preString.m_szBuf,
          v67,
          v71,
          behaviorb,
          ((behaviorb - flNowc) * 1000.0));
        CUtlString::operator+=(&out, v96.m_szBuf);
        if ( v90[0].m_pString != 0 )
          CUtlString::FreeMemoryBlock(v90);
        if ( vel.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&vel);
      }
      if ( v49 && v32 != 0 )
      {
        frac = info.frac;
        if ( info.m_bHermite )
          CUtlString::Format(&desc, "interpolated hermite [%.2f]", frac);
        else
          CUtlString::Format(&desc, "interpolated [%.2f]", frac);
        v51 = CUtlString::Get(&desc);
        if ( bValid != 0 )
        {
          v91.m_pString = 0;
          CUtlString::Format(&v91, "Enable : %d SplitScreen %X", entry->m_bEnableRendering, entry->m_nSplitscreenFlags);
          v52 = CUtlString::Get(&v91);
          v53 = 1;
        }
        else
        {
          v52 = "invalid";
          v53 = 0;
        }
        CFmtStrN<512,true>::CFmtStrN(
          &v96,
          "%s  > %6.6f : (%s) %s for %.1f msec\n",
          preString.m_szBuf,
          v52,
          v51,
          v70,
          ((v82 - flNowc) * 1000.0));
        CUtlString::operator+=(&out, v96.m_szBuf);
        v32 = 0;
        if ( v53 != 0 )
        {
          if ( v91.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&v91);
          v32 = 0;
        }
      }
      if ( bIsLast && nForceArrayIndex != 0 )
      {
        v92.m_pString = 0;
        CUtlString::Format(&v92, "Enable : %d SplitScreen %X", *(v73 + 2), *v73);
        v54 = CUtlString::Get(&v92);
        CFmtStrN<512,true>::CFmtStrN(&v96, "%s    %6.6f : (%s)\n", preString.m_szBuf, v54, flNowc);
        CUtlString::operator+=(&out, v96.m_szBuf);
        if ( v92.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v92);
      }
      v14 = *(v9 + 8);
      if ( ++v48 + 1 >= ((v14 >> 13) & 0x3F) )
        break;
      v59 = (*(v9 + 10) >> 3) & 0x3F;
      v60 = *(v9 + 8) & 0x3F;
      v61 = v48 + v60;
      if ( v48 + v60 >= v59 )
        v61 = v48 + v60 - v59;
      v62 = *v9;
      v63 = (*(v9 + 8) >> 6) & 0x3F;
      v64 = v60 + v48 + 1;
      v65 = (*v9 + 8LL * v61);
      v34 = *v65;
      v72 = (*v9 + 4 * (2 * v59 + v63 * *(v65 + 2)));
      if ( v59 <= v64 )
        v64 -= v59;
      v66 = v62 + 8LL * v64;
      v33 = *v66;
      v73 = (v62 + 4 * (*(v66 + 4) * v63 + 2 * v59));
    }
    if ( v81 > v82 )
    {
      v55 = ((v14 >> 13) & 0x3F) + (*(v9 + 8) & 0x3F) - 1;
      if ( v55 >= ((*(v9 + 10) >> 3) & 0x3F) )
        v55 -= (*(v9 + 10) >> 3) & 0x3F;
      if ( bValid != 0 )
      {
        EnableRenderingInfo_t::GetDebugString(
          &vel,
          (*v9 + 4 * (((*(v9 + 8) >> 6) & 0x3F) * *(*v9 + 8LL * v55 + 4) + 2LL * ((*(v9 + 10) >> 3) & 0x3F))));
        v56 = CUtlString::Get(&vel);
        v57 = 1;
      }
      else
      {
        v56 = "invalid";
        v57 = 0;
      }
      CFmtStrN<512,true>::CFmtStrN(
        &v96,
        "%s  < %6.6f  : (%s) render time too early\n",
        preString.m_szBuf,
        v56,
        v34,
        v70);
      CUtlString::operator+=(&out, v96.m_szBuf);
      if ( v57 != 0 && vel.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&vel);
    }
    if ( entry != 0 )
      operator delete[](entry);
    if ( desc.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&desc);
    if ( (*(v9 + 8) & 0x7E000) != 0 )
      goto LABEL_86;
    goto LABEL_99;
  }
LABEL_38:
  v35 = flNow;
  (*(*ivPhase + 128))(&info, ivPhase, a7);
  v36 = CUtlString::Get(&info);
  v37 = g_InterpolatedVarPhaseNames[0].name;
  if ( g_InterpolatedVarPhaseNames[0].name != 0 )
  {
    if ( behavior == g_InterpolatedVarPhaseNames[0].token )
      goto LABEL_44;
    v38 = g_InterpolatedVarPhaseNames;
    while ( 1 )
    {
      ++v38;
      v37 = v38->name;
      if ( v38->name == 0 )
        break;
      if ( behavior == v38->token )
        goto LABEL_44;
    }
  }
  v37 = tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t)const::unknown;
LABEL_44:
  CFmtStrN<256,false>::CFmtStrN(&v96, "[%9.9s] (%d)%s at %.6f phase not supported\n", v37, *(ivPhase + 7), v36, v35);
  this->_vptr_IInterpolatedVar = 0;
  CUtlString::Set(this, v96.m_szBuf);
  if ( info.m_Records[0].m_pValue != 0 )
    CUtlString::FreeMemoryBlock(&info);
  return this;
}


// CInterpolatedVarProceduralBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::~CInterpolatedVarProceduralBase  (line 2630, @0x0000000001ec3650, libserver.so)  // inlines: ClearHistory, GetPerPhaseData, GetPhaseCount, Purge, RemoveAll, ~CInterpolatedVarArrayBase, ~CInterpolatedVarHistory, ~IInterpolatedVar, ~PerPhaseData_t
// calls: free, operator delete []
void __fastcall CInterpolatedVarProceduralBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::~CInterpolatedVarProceduralBase(
        CInterpolatedVarProceduralBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  int v1; // ecx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *m_pPerPhaseData; // rsi
  char v4; // di
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v5; // rax
  int v6; // edx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v7; // rdi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v8; // rbx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v9; // rbx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *m_pElements; // rdi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v11; // r13
  int v12; // eax
  EnableRenderingInfo_t *m_pValue; // rdi

  v1 = 0;
  this->_vptr_IInterpolatedVar = &off_3FB4690;
  m_pPerPhaseData = this->m_pPerPhaseData;
  v4 = *(&this->CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
       + 32);
  while ( v1 < 2 - ((v4 & 0x20) == 0) )
  {
    v5 = m_pPerPhaseData;
    if ( v1 != 0 )
    {
      if ( (v4 & 0x20) == 0 )
        goto LABEL_7;
      v5 = m_pPerPhaseData + 1;
    }
    if ( v5 != 0 )
    {
      v6 = *(&v5->m_VarHistory + 2);
      v5->m_VarHistory.m_nFreeDataElements = -1;
      v6 &= 0xFFF81FFF;
      *(&v5->m_VarHistory + 2) = v6;
      *(&v5->m_VarHistory + 8) = v6 & 0xC0;
      v4 = *(&this->CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
           + 32);
      m_pPerPhaseData = this->m_pPerPhaseData;
    }
LABEL_7:
    ++v1;
  }
  v7 = m_pPerPhaseData;
  if ( m_pPerPhaseData != 0 )
  {
    v8 = &m_pPerPhaseData[*&m_pPerPhaseData[-1].m_flInterpolationAmount];
    if ( m_pPerPhaseData != v8 )
    {
      v9 = v8 - 1;
      do
      {
        m_pElements = v9->m_VarHistory.m_pElements;
        v11 = v9;
        *(&v9->m_VarHistory + 5) &= 0xFE07u;
        --v9;
        free(m_pElements);
        v12 = *(&v9[1].m_VarHistory + 2);
        v9[1].m_VarHistory.m_pElements = 0;
        v9[1].m_VarHistory.m_nFreeDataElements = -1;
        v12 &= 0xFFF81FFF;
        *(&v9[1].m_VarHistory + 2) = v12;
        *(&v9[1].m_VarHistory + 8) = v12 & 0xC0;
        v7 = this->m_pPerPhaseData;
      }
      while ( v7 != v11 );
    }
    operator delete[](&v7[-1].m_flInterpolationAmount);
  }
  m_pValue = this->m_pValue;
  if ( m_pValue != 0 )
    operator delete[](m_pValue);
  this->_vptr_IInterpolatedVar = off_3FB4250;  // vptr: IInterpolatedVar
}


// CInterpolatedVarProceduralBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::~CInterpolatedVarProceduralBase  (line 2630, @0x0000000001ec3aa0, libserver.so)  // inlines: ClearHistory, GetPerPhaseData, GetPhaseCount, Purge, RemoveAll, ~CInterpolatedVarArrayBase, ~CInterpolatedVarHistory, ~CInterpolatedVarProceduralBase, ~IInterpolatedVar, ~PerPhaseData_t
// calls: free, operator delete [], operator delete
void __fastcall CInterpolatedVarProceduralBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::~CInterpolatedVarProceduralBase(
        CInterpolatedVarProceduralBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  int v1; // ecx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *m_pPerPhaseData; // rsi
  char v4; // di
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v5; // rax
  int v6; // edx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v7; // rdi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v8; // rbx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v9; // rbx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *m_pElements; // rdi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v11; // r13
  int v12; // eax
  EnableRenderingInfo_t *m_pValue; // rdi

  v1 = 0;
  this->_vptr_IInterpolatedVar = &off_3FB4690;
  m_pPerPhaseData = this->m_pPerPhaseData;
  v4 = *(&this->CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
       + 32);
  while ( v1 < 2 - ((v4 & 0x20) == 0) )
  {
    v5 = m_pPerPhaseData;
    if ( v1 != 0 )
    {
      if ( (v4 & 0x20) == 0 )
        goto LABEL_7;
      v5 = m_pPerPhaseData + 1;
    }
    if ( v5 != 0 )
    {
      v6 = *(&v5->m_VarHistory + 2);
      v5->m_VarHistory.m_nFreeDataElements = -1;
      v6 &= 0xFFF81FFF;
      *(&v5->m_VarHistory + 2) = v6;
      *(&v5->m_VarHistory + 8) = v6 & 0xC0;
      v4 = *(&this->CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
           + 32);
      m_pPerPhaseData = this->m_pPerPhaseData;
    }
LABEL_7:
    ++v1;
  }
  v7 = m_pPerPhaseData;
  if ( m_pPerPhaseData != 0 )
  {
    v8 = &m_pPerPhaseData[*&m_pPerPhaseData[-1].m_flInterpolationAmount];
    if ( m_pPerPhaseData != v8 )
    {
      v9 = v8 - 1;
      do
      {
        m_pElements = v9->m_VarHistory.m_pElements;
        v11 = v9;
        *(&v9->m_VarHistory + 5) &= 0xFE07u;
        --v9;
        free(m_pElements);
        v12 = *(&v9[1].m_VarHistory + 2);
        v9[1].m_VarHistory.m_pElements = 0;
        v9[1].m_VarHistory.m_nFreeDataElements = -1;
        v12 &= 0xFFF81FFF;
        *(&v9[1].m_VarHistory + 2) = v12;
        *(&v9[1].m_VarHistory + 8) = v12 & 0xC0;
        v7 = this->m_pPerPhaseData;
      }
      while ( v7 != v11 );
    }
    operator delete[](&v7[-1].m_flInterpolationAmount);
  }
  m_pValue = this->m_pValue;
  if ( m_pValue != 0 )
    operator delete[](m_pValue);
  this->_vptr_IInterpolatedVar = off_3FB4250;  // vptr: IInterpolatedVar
  operator delete(this);
}


// CInterpolatedVarProceduralBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SetProceduralDelegates  (line 2637, @0x0000000001ec19c0, libserver.so)  // inlines: CopyFrom<FastDelegate3<EnableRenderingInfo_t*, int, const IInterpolatedVar*, void> >, CopyFrom<FastDelegate4<const EnableRenderingInfo_t*, int, const IInterpolatedVar*, IVWriteOpType_t, void> >, SetMementoFrom, operator=
void __fastcall CInterpolatedVarProceduralBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::SetProceduralDelegates(
        CInterpolatedVarProceduralBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        ProceduralDelegates_t<EnableRenderingInfo_t> *pDelegates)
{
  __int64 delta; // rdx
  __int64 v3; // rdx

  delta = pDelegates->m_readDelegate.m_Closure.m_pFunction.__delta;
  this->m_readDelegate.m_Closure.m_pFunction.__pfn = pDelegates->m_readDelegate.m_Closure.m_pFunction.__pfn;
  this->m_readDelegate.m_Closure.m_pFunction.__delta = delta;
  this->m_readDelegate.m_Closure.m_pthis = pDelegates->m_readDelegate.m_Closure.m_pthis;
  v3 = pDelegates->m_writeDelegate.m_Closure.m_pFunction.__delta;
  this->m_writeDelegate.m_Closure.m_pFunction.__pfn = pDelegates->m_writeDelegate.m_Closure.m_pFunction.__pfn;
  this->m_writeDelegate.m_Closure.m_pFunction.__delta = v3;
  this->m_writeDelegate.m_Closure.m_pthis = pDelegates->m_writeDelegate.m_Closure.m_pthis;
}


// CInterpolatedVarProceduralBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::HasReadWriteDelegates  (line 2643, @0x0000000001ec1960, libserver.so)  // inlines: IsEmpty, operator!
bool __fastcall CInterpolatedVarProceduralBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::HasReadWriteDelegates(
        const CInterpolatedVarProceduralBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  if ( this->m_readDelegate.m_Closure.m_pthis == 0 && this->m_readDelegate.m_Closure.m_pFunction.__pfn == 0 )
    return 0;
  return this->m_writeDelegate.m_Closure.m_pthis != 0 || this->m_writeDelegate.m_Closure.m_pFunction.__pfn != 0;
}


// CInterpolatedVarProceduralBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetReadDelegate  (line 2648, @0x0000000001ec19a0, libserver.so)
const CUtlDelegate<void(EnableRenderingInfo_t*,int,const IInterpolatedVar*)> *__fastcall CInterpolatedVarProceduralBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetReadDelegate(
        const CInterpolatedVarProceduralBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  return &this->m_readDelegate;
}


// CInterpolatedVarProceduralBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetWriteDelegate  (line 2653, @0x0000000001ec19b0, libserver.so)
const CUtlDelegate<void(const EnableRenderingInfo_t*,int,const IInterpolatedVar*,IVWriteOpType_t)> *__fastcall CInterpolatedVarProceduralBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetWriteDelegate(
        const CInterpolatedVarProceduralBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  return &this->m_writeDelegate;
}


// CInterpolatedVarBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::~CInterpolatedVarBase  (line 2666, @0x0000000001ec3760, libserver.so)  // inlines: ClearHistory, GetPerPhaseData, GetPhaseCount, Purge, RemoveAll, ~CInterpolatedVarArrayBase, ~CInterpolatedVarHistory, ~CInterpolatedVarProceduralBase, ~IInterpolatedVar, ~PerPhaseData_t
// calls: free, operator delete []
void __fastcall CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::~CInterpolatedVarBase(
        CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  int v1; // ecx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *m_pPerPhaseData; // rsi
  char v4; // di
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v5; // rax
  int v6; // edx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v7; // rdi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v8; // rbx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v9; // rbx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *m_pElements; // rdi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v11; // r13
  int v12; // eax
  EnableRenderingInfo_t *m_pValue; // rdi

  v1 = 0;
  this->_vptr_IInterpolatedVar = &off_3FB4690;
  m_pPerPhaseData = this->m_pPerPhaseData;
  v4 = *(&this->CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
       + 32);
  while ( v1 < 2 - ((v4 & 0x20) == 0) )
  {
    v5 = m_pPerPhaseData;
    if ( v1 != 0 )
    {
      if ( (v4 & 0x20) == 0 )
        goto LABEL_7;
      v5 = m_pPerPhaseData + 1;
    }
    if ( v5 != 0 )
    {
      v6 = *(&v5->m_VarHistory + 2);
      v5->m_VarHistory.m_nFreeDataElements = -1;
      v6 &= 0xFFF81FFF;
      *(&v5->m_VarHistory + 2) = v6;
      *(&v5->m_VarHistory + 8) = v6 & 0xC0;
      v4 = *(&this->CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
           + 32);
      m_pPerPhaseData = this->m_pPerPhaseData;
    }
LABEL_7:
    ++v1;
  }
  v7 = m_pPerPhaseData;
  if ( m_pPerPhaseData != 0 )
  {
    v8 = &m_pPerPhaseData[*&m_pPerPhaseData[-1].m_flInterpolationAmount];
    if ( m_pPerPhaseData != v8 )
    {
      v9 = v8 - 1;
      do
      {
        m_pElements = v9->m_VarHistory.m_pElements;
        v11 = v9;
        *(&v9->m_VarHistory + 5) &= 0xFE07u;
        --v9;
        free(m_pElements);
        v12 = *(&v9[1].m_VarHistory + 2);
        v9[1].m_VarHistory.m_pElements = 0;
        v9[1].m_VarHistory.m_nFreeDataElements = -1;
        v12 &= 0xFFF81FFF;
        *(&v9[1].m_VarHistory + 2) = v12;
        *(&v9[1].m_VarHistory + 8) = v12 & 0xC0;
        v7 = this->m_pPerPhaseData;
      }
      while ( v7 != v11 );
    }
    operator delete[](&v7[-1].m_flInterpolationAmount);
  }
  m_pValue = this->m_pValue;
  if ( m_pValue != 0 )
    operator delete[](m_pValue);
  this->_vptr_IInterpolatedVar = off_3FB4250;  // vptr: IInterpolatedVar
}


// CInterpolatedVarBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::~CInterpolatedVarBase  (line 2666, @0x0000000001ec3bc0, libserver.so)  // inlines: ClearHistory, GetPerPhaseData, GetPhaseCount, Purge, RemoveAll, ~CInterpolatedVarArrayBase, ~CInterpolatedVarBase, ~CInterpolatedVarHistory, ~CInterpolatedVarProceduralBase, ~IInterpolatedVar, ~PerPhaseData_t
// calls: free, operator delete [], operator delete
void __fastcall CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::~CInterpolatedVarBase(
        CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  int v1; // ecx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *m_pPerPhaseData; // rsi
  char v4; // di
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v5; // rax
  int v6; // edx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v7; // rdi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v8; // rbx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v9; // rbx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *m_pElements; // rdi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v11; // r13
  int v12; // eax
  EnableRenderingInfo_t *m_pValue; // rdi

  v1 = 0;
  this->_vptr_IInterpolatedVar = &off_3FB4690;
  m_pPerPhaseData = this->m_pPerPhaseData;
  v4 = *(&this->CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
       + 32);
  while ( v1 < 2 - ((v4 & 0x20) == 0) )
  {
    v5 = m_pPerPhaseData;
    if ( v1 != 0 )
    {
      if ( (v4 & 0x20) == 0 )
        goto LABEL_7;
      v5 = m_pPerPhaseData + 1;
    }
    if ( v5 != 0 )
    {
      v6 = *(&v5->m_VarHistory + 2);
      v5->m_VarHistory.m_nFreeDataElements = -1;
      v6 &= 0xFFF81FFF;
      *(&v5->m_VarHistory + 2) = v6;
      *(&v5->m_VarHistory + 8) = v6 & 0xC0;
      v4 = *(&this->CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
           + 32);
      m_pPerPhaseData = this->m_pPerPhaseData;
    }
LABEL_7:
    ++v1;
  }
  v7 = m_pPerPhaseData;
  if ( m_pPerPhaseData != 0 )
  {
    v8 = &m_pPerPhaseData[*&m_pPerPhaseData[-1].m_flInterpolationAmount];
    if ( m_pPerPhaseData != v8 )
    {
      v9 = v8 - 1;
      do
      {
        m_pElements = v9->m_VarHistory.m_pElements;
        v11 = v9;
        *(&v9->m_VarHistory + 5) &= 0xFE07u;
        --v9;
        free(m_pElements);
        v12 = *(&v9[1].m_VarHistory + 2);
        v9[1].m_VarHistory.m_pElements = 0;
        v9[1].m_VarHistory.m_nFreeDataElements = -1;
        v12 &= 0xFFF81FFF;
        *(&v9[1].m_VarHistory + 2) = v12;
        *(&v9[1].m_VarHistory + 8) = v12 & 0xC0;
        v7 = this->m_pPerPhaseData;
      }
      while ( v7 != v11 );
    }
    operator delete[](&v7[-1].m_flInterpolationAmount);
  }
  m_pValue = this->m_pValue;
  if ( m_pValue != 0 )
    operator delete[](m_pValue);
  this->_vptr_IInterpolatedVar = off_3FB4250;  // vptr: IInterpolatedVar
  operator delete(this);
}


// CInterpolatedVarBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SetArrayIndexNameHelperDelegate  (line 2673, @0x0000000001ec1790, libserver.so)
void __fastcall CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::SetArrayIndexNameHelperDelegate(
        CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this,
        const CUtlDelegate<CUtlString(int)> *const arrayIndexNameHelper)
{
  ;
}


// CInterpolatedVarBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::HasArrayIndexHelperDelegate  (line 2679, @0x0000000001ec1a00, libserver.so)
bool __fastcall CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::HasArrayIndexHelperDelegate(
        const CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  return 0;
}


// CInterpolatedVarBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetArrayIndexNameHelperDelegate  (line 2684, @0x0000000001ec23c0, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate, ClosurePtr, FastDelegate1
// calls: __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetArrayIndexNameHelperDelegate, CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetArrayIndexNameHelperDelegate(void)::badDelegate
const CUtlDelegate<CUtlString(int)> *__fastcall CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetArrayIndexNameHelperDelegate(
        const CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *const this)
{
  if ( `guard variable for'CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetArrayIndexNameHelperDelegate(void)::badDelegate != 0 )
    return &CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetArrayIndexNameHelperDelegate(void)const::badDelegate;
  if ( __cxa_guard_acquire(&`guard variable for'CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetArrayIndexNameHelperDelegate(void)::badDelegate) != 0 )
  {
    CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetArrayIndexNameHelperDelegate(void)const::badDelegate.m_Closure.m_pthis = 0;
    CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetArrayIndexNameHelperDelegate(void)const::badDelegate.m_Closure.m_pFunction.__pfn = 0;
    CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetArrayIndexNameHelperDelegate(void)const::badDelegate.m_Closure.m_pFunction.__delta = 0;
    __cxa_guard_release(&`guard variable for'CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetArrayIndexNameHelperDelegate(void)::badDelegate);
  }
  return &CInterpolatedVarBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::GetArrayIndexNameHelperDelegate(void)const::badDelegate;
}


// CInterpolatedVarProcedural<EnableRenderingInfo_t>::~CInterpolatedVarProcedural  (line 2780, @0x0000000001ec3870, libserver.so)  // inlines: ClearHistory, GetPerPhaseData, GetPhaseCount, Purge, RemoveAll, ~CInterpolatedVarArrayBase, ~CInterpolatedVarBase, ~CInterpolatedVarHistory, ~CInterpolatedVarProceduralBase, ~IInterpolatedVar, ~PerPhaseData_t
// calls: free, operator delete []
void __fastcall CInterpolatedVarProcedural<EnableRenderingInfo_t>::~CInterpolatedVarProcedural(
        CInterpolatedVarProcedural<EnableRenderingInfo_t> *const this)
{
  int v1; // ecx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *m_pPerPhaseData; // rsi
  char v4; // di
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v5; // rax
  int v6; // edx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v7; // rdi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v8; // rbx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v9; // rbx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *m_pElements; // rdi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v11; // r13
  int v12; // eax
  EnableRenderingInfo_t *m_pValue; // rdi

  v1 = 0;
  this->_vptr_IInterpolatedVar = &off_3FB4690;
  m_pPerPhaseData = this->m_pPerPhaseData;
  v4 = *(&this->CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
       + 32);
  while ( v1 < 2 - ((v4 & 0x20) == 0) )
  {
    v5 = m_pPerPhaseData;
    if ( v1 != 0 )
    {
      if ( (v4 & 0x20) == 0 )
        goto LABEL_7;
      v5 = m_pPerPhaseData + 1;
    }
    if ( v5 != 0 )
    {
      v6 = *(&v5->m_VarHistory + 2);
      v5->m_VarHistory.m_nFreeDataElements = -1;
      v6 &= 0xFFF81FFF;
      *(&v5->m_VarHistory + 2) = v6;
      *(&v5->m_VarHistory + 8) = v6 & 0xC0;
      v4 = *(&this->CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
           + 32);
      m_pPerPhaseData = this->m_pPerPhaseData;
    }
LABEL_7:
    ++v1;
  }
  v7 = m_pPerPhaseData;
  if ( m_pPerPhaseData != 0 )
  {
    v8 = &m_pPerPhaseData[*&m_pPerPhaseData[-1].m_flInterpolationAmount];
    if ( m_pPerPhaseData != v8 )
    {
      v9 = v8 - 1;
      do
      {
        m_pElements = v9->m_VarHistory.m_pElements;
        v11 = v9;
        *(&v9->m_VarHistory + 5) &= 0xFE07u;
        --v9;
        free(m_pElements);
        v12 = *(&v9[1].m_VarHistory + 2);
        v9[1].m_VarHistory.m_pElements = 0;
        v9[1].m_VarHistory.m_nFreeDataElements = -1;
        v12 &= 0xFFF81FFF;
        *(&v9[1].m_VarHistory + 2) = v12;
        *(&v9[1].m_VarHistory + 8) = v12 & 0xC0;
        v7 = this->m_pPerPhaseData;
      }
      while ( v7 != v11 );
    }
    operator delete[](&v7[-1].m_flInterpolationAmount);
  }
  m_pValue = this->m_pValue;
  if ( m_pValue != 0 )
    operator delete[](m_pValue);
  this->_vptr_IInterpolatedVar = off_3FB4250;  // vptr: IInterpolatedVar
}


// CInterpolatedVarProcedural<EnableRenderingInfo_t>::~CInterpolatedVarProcedural  (line 2780, @0x0000000001ec3ce0, libserver.so)  // inlines: ClearHistory, GetPerPhaseData, GetPhaseCount, Purge, RemoveAll, ~CInterpolatedVarArrayBase, ~CInterpolatedVarBase, ~CInterpolatedVarHistory, ~CInterpolatedVarProcedural, ~CInterpolatedVarProceduralBase, ~IInterpolatedVar, ~PerPhaseData_t
// calls: free, operator delete [], operator delete
void __fastcall CInterpolatedVarProcedural<EnableRenderingInfo_t>::~CInterpolatedVarProcedural(
        CInterpolatedVarProcedural<EnableRenderingInfo_t> *const this)
{
  int v1; // ecx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *m_pPerPhaseData; // rsi
  char v4; // di
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v5; // rax
  int v6; // edx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v7; // rdi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v8; // rbx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v9; // rbx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *m_pElements; // rdi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v11; // r13
  int v12; // eax
  EnableRenderingInfo_t *m_pValue; // rdi

  v1 = 0;
  this->_vptr_IInterpolatedVar = &off_3FB4690;
  m_pPerPhaseData = this->m_pPerPhaseData;
  v4 = *(&this->CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
       + 32);
  while ( v1 < 2 - ((v4 & 0x20) == 0) )
  {
    v5 = m_pPerPhaseData;
    if ( v1 != 0 )
    {
      if ( (v4 & 0x20) == 0 )
        goto LABEL_7;
      v5 = m_pPerPhaseData + 1;
    }
    if ( v5 != 0 )
    {
      v6 = *(&v5->m_VarHistory + 2);
      v5->m_VarHistory.m_nFreeDataElements = -1;
      v6 &= 0xFFF81FFF;
      *(&v5->m_VarHistory + 2) = v6;
      *(&v5->m_VarHistory + 8) = v6 & 0xC0;
      v4 = *(&this->CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
           + 32);
      m_pPerPhaseData = this->m_pPerPhaseData;
    }
LABEL_7:
    ++v1;
  }
  v7 = m_pPerPhaseData;
  if ( m_pPerPhaseData != 0 )
  {
    v8 = &m_pPerPhaseData[*&m_pPerPhaseData[-1].m_flInterpolationAmount];
    if ( m_pPerPhaseData != v8 )
    {
      v9 = v8 - 1;
      do
      {
        m_pElements = v9->m_VarHistory.m_pElements;
        v11 = v9;
        *(&v9->m_VarHistory + 5) &= 0xFE07u;
        --v9;
        free(m_pElements);
        v12 = *(&v9[1].m_VarHistory + 2);
        v9[1].m_VarHistory.m_pElements = 0;
        v9[1].m_VarHistory.m_nFreeDataElements = -1;
        v12 &= 0xFFF81FFF;
        *(&v9[1].m_VarHistory + 2) = v12;
        *(&v9[1].m_VarHistory + 8) = v12 & 0xC0;
        v7 = this->m_pPerPhaseData;
      }
      while ( v7 != v11 );
    }
    operator delete[](&v7[-1].m_flInterpolationAmount);
  }
  m_pValue = this->m_pValue;
  if ( m_pValue != 0 )
    operator delete[](m_pValue);
  this->_vptr_IInterpolatedVar = off_3FB4250;  // vptr: IInterpolatedVar
  operator delete(this);
}


