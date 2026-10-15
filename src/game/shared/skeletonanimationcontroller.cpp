
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNetworkedSequenceOperation::AddDatadescMetadataKeys  (line 36, @0x00000000020b5690, libserver.so)
void __fastcall CNetworkedSequenceOperation::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CNetworkedSequenceOperation::GetBaseMap  (line 36, @0x00000000020b56a0, libserver.so)
datamap_t *__cdecl CNetworkedSequenceOperation::GetBaseMap()
{
  return 0;
}


// DataMapInit<CNetworkedSequenceOperation>  (line 36, @0x00000000020b56b0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: __static_initialization_and_destruction_0
// strings: "CNetworkedSequenceOperation"
// globals: `guard variable for'DataMapInit<CNetworkedSequenceOperation>(CNetworkedSequenceOperation *)::nameHolder, CNetworkedSequenceOperation::m_DataMap, DataMapInit<CNetworkedSequenceOperation>(CNetworkedSequenceOperation *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CNetworkedSequenceOperation>(CNetworkedSequenceOperation *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CNetworkedSequenceOperation>(CNetworkedSequenceOperation *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CNetworkedSequenceOperation>(CNetworkedSequenceOperation *)::nameHolder) != 0 )
  {
    DataMapInit<CNetworkedSequenceOperation>(CNetworkedSequenceOperation *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CNetworkedSequenceOperation>(CNetworkedSequenceOperation *)::nameHolder.m_pszBase = "CNetworkedSequenceOperation";
    DataMapInit<CNetworkedSequenceOperation>(CNetworkedSequenceOperation *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CNetworkedSequenceOperation>(CNetworkedSequenceOperation *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CNetworkedSequenceOperation>(CNetworkedSequenceOperation *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CNetworkedSequenceOperation>(CNetworkedSequenceOperation *)::nameHolder.m_nLenBase = 27;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CNetworkedSequenceOperation>(CNetworkedSequenceOperation *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CNetworkedSequenceOperation>(CNetworkedSequenceOperation *)::nameHolder,
      &_dso_handle);
  }
  CNetworkedSequenceOperation::m_DataMap.baseMap = 0;
  CNetworkedSequenceOperation::m_DataMap.dataDesc = &DataMapInit<CNetworkedSequenceOperation>(CNetworkedSequenceOperation *)::dataDesc[1];
  CNetworkedSequenceOperation::m_DataMap.dataNumFields = 5;
  return &CNetworkedSequenceOperation::m_DataMap;
}


// CNetworkedSequenceOperation::CNetworkedSequenceOperation  (line 44, @0x00000000020b5770, libserver.so)  // inlines: CNetworkVarBase, CNetworkedQuantizedFloat, EnsureValidValue<HSequence>, EnsureValidValue<float>, GetEncoder, GetQuantizedFloatEncoderByIndex, Init<true>, NetworkStateChanged, Reset, Set, operator=, operator=<HSequence>, operator=<float>
// calls: FindOrCreateQuantizedFloatEncoder
// callers: CSchemaClassBinding<TransitioningLayer_t>::Allocate, CSchemaClassBinding<TransitioningLayer_t>::ConstructInPlace, CSchemaClassBinding<TransitioningLayer_t>::AllocateAndCopyConstruct, CSchemaClassBinding<CNetworkedSequenceOperation>::Allocate, CSchemaClassBinding<CNetworkedSequenceOperation>::ConstructInPlace, CSchemaClassBinding<CNetworkedSequenceOperation>::AllocateAndCopyConstruct, CAnimationLayer::CAnimationLayer, CBaseAnimatingController::CBaseAnimatingController, CSequenceTransitioner2::CSequenceTransitioner2
// strings: "m_flWeight"
void __fastcall CNetworkedSequenceOperation::CNetworkedSequenceOperation(CNetworkedSequenceOperation *const this)
{
  uint16 QuantizedFloatEncoder; // ax
  __int64 v3; // rdx
  float v4; // xmm0_4
  float v5; // xmm1_4
  int (**vptr_CNetworkedSequenceOperation)(...); // rax
  float m_Value; // xmm0_4
  bool v8; // zf
  __int64 v9; // rax
  float v10; // xmm1_4
  float v11; // [rsp+Ch] [rbp-24h]
  bool v12; // [rsp+16h] [rbp-1Ah]

  this->_vptr_CNetworkedSequenceOperation = off_3FF4370;
  this->m_hSequence.m_Value.m_Data = 0;
  this->m_flPrevCycle.m_Value = 0.0;
  this->m_flCycle.m_Value = 0.0;
  QuantizedFloatEncoder = FindOrCreateQuantizedFloatEncoder(1, "m_flWeight", 12942103, 8, 0, 0.0, 1.0);
  v3 = g_pQuantizedFloatEncoders + 32LL * QuantizedFloatEncoder;
  v4 = *(v3 + 12);
  if ( v4 >= 0.0 )
    v4 = fmaxf(*(v3 + 8), 0.0);
  this->m_flWeight.m_Value.m_nEncoder = QuantizedFloatEncoder;
  this->m_flWeight.m_Value.m_Value = v4;
  this->m_flWeight.m_Value.m_bUnflattened = v12;
  v5 = *(v3 + 12);
  if ( v4 <= v5 )
    v5 = fmaxf(*(v3 + 8), v4);
  vptr_CNetworkedSequenceOperation = this->_vptr_CNetworkedSequenceOperation;
  this->m_flWeight.m_Value.m_Value = v5;
  vptr_CNetworkedSequenceOperation[3](this, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v8 = this->m_hSequence.m_Value.m_Data == -1;
  this->m_bSequenceChangeNetworked = 0;
  this->m_bDiscontinuity = 0;
  if ( !v8 )
  {
    (*(this->_vptr_CNetworkedSequenceOperation + 3))(this, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hSequence.m_Value.m_Data = -1;
  }
  if ( this->m_flWeight.m_Value.m_Value == 1.0 )
  {
    m_Value = this->m_flCycle.m_Value;
    v8 = m_Value == 0.0;
  }
  else
  {
    (*(this->_vptr_CNetworkedSequenceOperation + 3))(this, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v9 = g_pQuantizedFloatEncoders + 32LL * this->m_flWeight.m_Value.m_nEncoder;
    v10 = *(v9 + 12);
    if ( v10 >= 1.0 )
      v10 = fmaxf(*(v9 + 8), 1.0);
    m_Value = this->m_flCycle.m_Value;
    this->m_flWeight.m_Value.m_Value = v10;
    v8 = m_Value == 0.0;
  }
  if ( !v8 )
  {
    (*(this->_vptr_CNetworkedSequenceOperation + 3))(this, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flCycle.m_Value = 0.0;
    m_Value = 0.0;
  }
  if ( m_Value == this->m_flPrevCycle.m_Value )
  {
    this->m_flPrevCycleForAnimEventDetection = 0.0;
  }
  else
  {
    v11 = m_Value;
    (*(this->_vptr_CNetworkedSequenceOperation + 3))(this, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flPrevCycleForAnimEventDetection = 0.0;
    this->m_flPrevCycle.m_Value = v11;
  }
}


// CNetworkedSequenceOperation::Spawn  (line 52, @0x00000000020b5970, libserver.so)  // inlines: AssignTo, Base, CAnimationOperationWriter, Element, FindKeyHash, GetEncoder, GetQuantizedFloatEncoderByIndex, GetValue, GetValue<int>, GetValueString, Init, LatchAnimationOperation, Min<long long unsigned int>, Min<unsigned int>, NetworkStateChanged, Set, SetSequence, TempString, atoi, operator=, operator=<HSequence>, operator=<float>, operator[], ~CAnimationOperationWriter
// calls: CModel::LookupSequence, CModel::IsValidSequence, strtol, VariantFieldTypeName, Warning, CAnimationOperationWriter::LatchAnimationOperation, _Unwind_Resume
// callers: CBaseAnimatingController::Spawn
// strings: "No conversion from %s to int now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_20B5C3A
void __fastcall CNetworkedSequenceOperation::Spawn(
        CNetworkedSequenceOperation *const this,
        CEntityInstance *pOwner,
        const CModel *pModel,
        const CEntityKeyValues *pKeyValues)
{
  __int64 v4; // r9
  float v5; // xmm0_4
  __int64 m_nCount; // r8
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // dx
  __int64 v9; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v11; // rdx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // rsi
  HSequence v14; // r12d
  CNetworkedSequenceOperation *v15; // rbx
  bool v16; // zf
  bool v17; // zf
  int32 v18; // r12d
  float v19; // xmm0_4
  bool v20; // zf
  __int64 v21; // rax
  float v22; // xmm1_4
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v23; // si
  __int64 v24; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v25; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v26; // rdx
  CEntityVariant *v27; // rcx
  int16 m_type; // ax
  uint64 v29; // rax
  const char *v30; // rax
  float v31; // [rsp+Ch] [rbp-34h]
  int32 m_Data; // [rsp+20h] [rbp-20h]
  float m_Value; // [rsp+2Ch] [rbp-14h]

  m_Value = this->m_flWeight.m_Value.m_Value;
  v5 = this->m_flPrevCycle.m_Value;
  m_Data = this->m_hSequence.m_Value.m_Data;
  if ( pKeyValues == 0 )
  {
    if ( m_Data != 0 )
      m_Data = 0;
    v15 = this;
LABEL_43:
    v16 = v5 == 0.0;
    goto LABEL_44;
  }
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_27:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_13;
    goto LABEL_28;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v9 = 0;
  v4 = m_nAllocated;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v9) == -1618663357 )
      goto LABEL_10;
LABEL_7:
    if ( m_nCount <= ++v9 )
      goto LABEL_27;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v9] != -1618663357 )
    goto LABEL_7;
LABEL_10:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v11 = pKeyValues->m_keyValues.m_pElements;
  else
    v11 = 0;
  p_m_value = &v11[v9].m_value;
  if ( p_m_value->m_type == 30 )
  {
LABEL_13:
    m_uint64 = p_m_value->m_uint64;
    if ( p_m_value->m_uint64 != 0 && *m_uint64 != 0 && pModel != 0 )
    {
      v14.m_Data = CModel::LookupSequence(pModel, m_uint64).m_Data;
      if ( CModel::IsValidSequence(pModel, v14) )
      {
        if ( m_Data != v14.m_Data )
          m_Data = v14.m_Data;
      }
      else if ( m_Data != 0 )
      {
        m_Data = 0;
      }
      v15 = this;
      v16 = this->m_flPrevCycle.m_Value == 0.0;
LABEL_44:
      if ( v16 )
      {
        v17 = v15->m_flCycle.m_Value == 0.0;
      }
      else
      {
        (*(v15->_vptr_CNetworkedSequenceOperation + 3))(v15, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v15->m_flPrevCycle.m_Value = 0.0;
        v15 = this;
        v17 = this->m_flCycle.m_Value == 0.0;
      }
      if ( v17 )
      {
        v18 = m_Data;
        if ( v15->m_hSequence.m_Value.m_Data == m_Data )
        {
LABEL_48:
          v19 = m_Value;
          v20 = m_Value == v15->m_flWeight.m_Value.m_Value;
LABEL_49:
          if ( !v20 )
          {
            v31 = v19;
            (*(v15->_vptr_CNetworkedSequenceOperation + 3))(v15, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            goto LABEL_24;
          }
          return;
        }
      }
      else
      {
        (*(v15->_vptr_CNetworkedSequenceOperation + 3))(v15, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v15->m_flCycle.m_Value = 0.0;
        v15 = this;
        v18 = m_Data;
        if ( this->m_hSequence.m_Value.m_Data == m_Data )
          goto LABEL_48;
      }
      (*(v15->_vptr_CNetworkedSequenceOperation + 3))(v15, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v15->m_hSequence.m_Value.m_Data = v18;
      v15 = this;
      v19 = m_Value;
      v20 = m_Value == this->m_flWeight.m_Value.m_Value;
      goto LABEL_49;
    }
  }
LABEL_28:
  if ( m_nCount <= 0 )
  {
LABEL_51:
    v27 = &CEntityKeyValues::sm_EmptyVariant;
    v15 = this;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type == 0 )
      goto LABEL_52;
LABEL_39:
    switch ( m_type )
    {
      case 1:
        v15 = this;
        LODWORD(v29) = v27->m_float;
        goto LABEL_66;
      case 5:
        LODWORD(v29) = v27->m_int;
        v15 = this;
        goto LABEL_66;
      case 6:
        LODWORD(v29) = v27->m_char;
        goto LABEL_72;
      case 26:
        LODWORD(v29) = 0x7FFFFFFF;
        if ( v27->m_int64 <= 0x7FFFFFFF )
        {
          LODWORD(v29) = 0x80000000;
          if ( v27->m_uint64 >= 0xFFFFFFFF80000000LL )
            v29 = v27->m_uint64;
        }
        goto LABEL_65;
      case 30:
        LODWORD(v29) = strtol(v27->m_pszString, 0, 10);
        v15 = this;
        goto LABEL_66;
      case 33:
        LODWORD(v29) = 0x7FFFFFFF;
        if ( v27->m_uint64 <= 0x7FFFFFFE )
          LODWORD(v29) = v27->m_uint64;
        goto LABEL_72;
      case 34:
        LODWORD(v29) = v27->m_float64;
LABEL_65:
        v15 = this;
LABEL_66:
        if ( (v29 & 0x80000000) == 0LL )
          goto LABEL_67;
        goto LABEL_52;
      case 37:
        LODWORD(v29) = 0x7FFFFFFF;
        if ( v27->m_int <= 0x7FFFFFFEu )
          LODWORD(v29) = v27->m_int;
LABEL_72:
        v15 = this;
LABEL_67:
        if ( m_Data != v29 )
          m_Data = v29;
        v5 = v15->m_flPrevCycle.m_Value;
        break;
      default:
        v30 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to int now\n", v30);
        v15 = this;
        goto LABEL_52;
    }
    goto LABEL_43;
  }
  v23 = pKeyValues->m_keyHashes.m_nAllocated;
  v24 = 0;
  v4 = v23;
  while ( v23 == 0 )
  {
    if ( *(4 * v24) == -486601274 )
      goto LABEL_36;
LABEL_33:
    if ( m_nCount <= ++v24 )
      goto LABEL_51;
  }
  v25 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v23 > 9 )
    v25 = pKeyValues->m_keyHashes.m_pElements;
  if ( v25[v24] != -486601274 )
    goto LABEL_33;
LABEL_36:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v26 = pKeyValues->m_keyValues.m_pElements;
  else
    v26 = 0;
  v15 = this;
  v27 = &v26[v24].m_value;
  m_type = v27->m_type;
  if ( m_type != 0 )
    goto LABEL_39;
LABEL_52:
  if ( m_Data != 0 )
    m_Data = 0;
  if ( v15->m_flPrevCycle.m_Value != 0.0 )
  {
    (*(v15->_vptr_CNetworkedSequenceOperation + 3))(v15, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, m_nCount, v4);
    v15->m_flPrevCycle.m_Value = 0.0;
    v15 = this;
  }
  if ( v15->m_flCycle.m_Value != 0.0 )
  {
    (*(v15->_vptr_CNetworkedSequenceOperation + 3))(v15, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL, m_nCount, v4);
    v15->m_flCycle.m_Value = 0.0;
    v15 = this;
  }
  if ( v15->m_hSequence.m_Value.m_Data != m_Data )
  {
    (*(v15->_vptr_CNetworkedSequenceOperation + 3))(v15, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, m_nCount, v4);
    v15->m_hSequence.m_Value.m_Data = m_Data;
    v15 = this;
  }
  if ( m_Value != v15->m_flWeight.m_Value.m_Value )
  {
    v31 = m_Value;
    (*(v15->_vptr_CNetworkedSequenceOperation + 3))(v15, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL, m_nCount, v4);
LABEL_24:
    v21 = g_pQuantizedFloatEncoders + 32LL * v15->m_flWeight.m_Value.m_nEncoder;
    v22 = *(v21 + 12);
    if ( v31 <= v22 )
      v22 = fmaxf(*(v21 + 8), v31);
    v15->m_flWeight.m_Value.m_Value = v22;
  }
}


// CNetworkedSequenceOperation::Advance  (line 94, @0x00000000020b5f00, libserver.so)  // inlines: NetworkStateChanged, Set, operator+=<float>, operator=<CNetworkVarBase<float, CNetworkedSequenceOperation::NetworkVar_m_flCycle> >, operator=<float>
// calls: floorf
float __fastcall CNetworkedSequenceOperation::Advance(
        CNetworkedSequenceOperation *const this,
        CEntityInstance *pOwner,
        float dt,
        bool bClamp,
        const CModel *pModel,
        const float *pPoseParameters)
{
  float v8; // xmm0_4
  float m_Value; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v13; // [rsp+4h] [rbp-1Ch]
  float flCyclesPerSecond; // [rsp+8h] [rbp-18h]
  float dtc; // [rsp+Ch] [rbp-14h]
  float dtb; // [rsp+Ch] [rbp-14h]
  float dtd; // [rsp+Ch] [rbp-14h]

  (*(*g_pAnimationSystem + 144LL))(g_pAnimationSystem, pModel, this->m_hSequence.m_Value.m_Data, pPoseParameters);
  m_Value = this->m_flCycle.m_Value;
  if ( m_Value != this->m_flPrevCycle.m_Value )
  {
    v13 = this->m_flCycle.m_Value;
    flCyclesPerSecond = v8;
    (*(this->_vptr_CNetworkedSequenceOperation + 3))(this, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v8 = flCyclesPerSecond;
    this->m_flPrevCycle.m_Value = v13;
    m_Value = this->m_flCycle.m_Value;
  }
  if ( ((dt * v8) + m_Value) == m_Value )
  {
    v10 = m_Value;
  }
  else
  {
    dtd = (dt * v8) + m_Value;
    (*(this->_vptr_CNetworkedSequenceOperation + 3))(this, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v10 = dtd;
    this->m_flCycle.m_Value = dtd;
  }
  if ( bClamp )
  {
    v11 = 1.0;
    if ( v10 <= 1.0 )
    {
      v11 = 0.0;
      if ( v10 >= 0.0 )
        return v10;
    }
    goto LABEL_7;
  }
  dtb = v10;
  v11 = v10 - floorf(v10);
  if ( v11 != dtb )
  {
LABEL_7:
    dtc = v11;
    (*(this->_vptr_CNetworkedSequenceOperation + 3))(this, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flCycle.m_Value = dtc;
    return dtc;
  }
  return dtb;
}


// CNetworkedSequenceOperation::OnSequenceChangeNetworked  (line 113, @0x00000000020b6080, libserver.so)
void __fastcall CNetworkedSequenceOperation::OnSequenceChangeNetworked(CNetworkedSequenceOperation *const this)
{
  this->m_bSequenceChangeNetworked = 1;
}


// CNetworkedSequenceOperation::OnSequenceCycleChanged  (line 118, @0x00000000020b6090, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, GetCycle, GetPlaybackRate, GetSequence, NetworkStateChanged, Set, String, curtime, operator=<float>
// calls: CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::IsSequenceDebugging, LoggingSystem_IsChannelEnabled, CBaseAnimating::GetSequenceName, Plat_FloatTime, LoggingSystem_Log
// strings: "SV", "%s:  %f tick(%d) curtime(%f) OnSequenceCycleChanged: %s : %d=[%s] : %8.6f -> %8.6f rate %
void __fastcall CNetworkedSequenceOperation::OnSequenceCycleChanged(
        CNetworkedSequenceOperation *const this,
        CEntityInstance *pInstance,
        const float *pflNewCycle)
{
  CBaseAnimating *v5; // rax
  const CBaseAnimating *v6; // r15
  CBaseAnimatingController *BaseAnimatingController; // rax
  const CBaseAnimatingController *v8; // rax
  const CBaseAnimatingController *v9; // rax
  HSequence v10; // eax
  const char *SequenceName; // r13
  const CBaseAnimatingController *v12; // rax
  int v13; // eax
  double v14; // xmm0_8
  const char *m_pAsString; // r9
  double v16; // xmm2_8
  int v17; // r14d
  CEntityIdentity *m_pEntity; // rax
  double v19; // xmm3_8
  double v20; // xmm4_8
  CGlobalVars *v21; // r15
  CGlobalVars *v22; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  double m_flCurrentTime; // xmm1_8
  unsigned int tickcount; // r15d
  double v26; // xmm0_8
  double v27; // [rsp+18h] [rbp-58h]
  const char *v28; // [rsp+20h] [rbp-50h]
  const char *v29; // [rsp+20h] [rbp-50h]
  double m_Value; // [rsp+28h] [rbp-48h]
  double v31; // [rsp+28h] [rbp-48h]
  double v32; // [rsp+28h] [rbp-48h]
  double v33; // [rsp+30h] [rbp-40h]
  double v34; // [rsp+30h] [rbp-40h]
  float v35; // [rsp+38h] [rbp-38h]
  double v36; // [rsp+38h] [rbp-38h]
  double v37; // [rsp+38h] [rbp-38h]
  double v38; // [rsp+38h] [rbp-38h]

  if ( pInstance == 0 || (v5 = (*(pInstance->_vptr_IHandleEntity + 43))(pInstance), v6 = v5, v5 == 0) )
  {
LABEL_6:
    if ( *pflNewCycle != this->m_flCycle.m_Value )
    {
      v35 = *pflNewCycle;
      (*(this->_vptr_CNetworkedSequenceOperation + 3))(this, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flCycle.m_Value = v35;
    }
    return;
  }
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(v5);
  if ( BaseAnimatingController == 0 || !BaseAnimatingController->m_bClientSideAnimation.m_Value )
  {
    if ( CBaseAnimating::IsSequenceDebugging(v6) && LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v8 = CBaseAnimating::GetBaseAnimatingController(v6);
      v33 = *pflNewCycle;
      m_Value = v8->m_flPlaybackRate.m_Value.m_Value;
      v36 = CBaseAnimating::GetBaseAnimatingController(v6)->m_baseLayer.m_flCycle.m_Value;
      v9 = CBaseAnimating::GetBaseAnimatingController(v6);
      v10.m_Data = (*(v9->_vptr_CSkeletonAnimationController + 24))(v9);
      SequenceName = CBaseAnimating::GetSequenceName(v6, v10);
      v12 = CBaseAnimating::GetBaseAnimatingController(v6);
      v13 = (*(v12->_vptr_CSkeletonAnimationController + 24))(v12);
      m_pAsString = "";
      v16 = v36;
      v17 = v13;
      m_pEntity = v6->m_pEntity;
      v19 = v33;
      v20 = m_Value;
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      v21 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        v22 = gpGlobals;
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
          {
            v28 = m_pAsString;
            v31 = v36;
            v37 = v20;
            m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            m_pAsString = v28;
            v16 = v31;
            v19 = v33;
            v22 = gpGlobals;
            v20 = v37;
          }
          else
          {
            v22 = gpGlobals;
          }
        }
        m_flCurrentTime = v21->m_flCurrentTime;
      }
      else
      {
        v22 = 0;
        m_flCurrentTime = 0.0;
      }
      tickcount = v22->tickcount;
      v27 = m_flCurrentTime;
      v29 = m_pAsString;
      v32 = v16;
      v34 = v19;
      v38 = v20;
      v26 = Plat_FloatTime(v14);
      LoggingSystem_Log(
        LOG_SERVER,
        1,
        "%s:  %f tick(%d) curtime(%f) OnSequenceCycleChanged: %s : %d=[%s] : %8.6f -> %8.6f rate %6.3f\n",
        "SV",
        tickcount,
        v29,
        v26,
        v27,
        v32,
        v34,
        v38,
        v17,
        SequenceName);
    }
    goto LABEL_6;
  }
}


// CNetworkedSequenceOperation::IsClamped  (line 152, @0x00000000020b62f0, libserver.so)  // inlines: operator==<float>
__int64 __fastcall CNetworkedSequenceOperation::IsClamped(
        const CNetworkedSequenceOperation *const this,
        float a2,
        float dt,
        __int64 a4,
        unsigned int a5)
{
  __int64 result; // rax

  if ( a2 < 0.0 )
  {
    result = 0;
    LOBYTE(a5) = 1;
    if ( this->m_flCycle.m_Value == 0.0 )
      return a5;
  }
  else
  {
    result = 0;
    LOBYTE(a5) = 1;
    if ( this->m_flCycle.m_Value == 1.0 )
      return a5;
  }
  return result;
}


// CNetworkedSequenceOperation::ReadOpValue  (line 159, @0x00000000020b6330, libserver.so)  // inlines: GetSequence
void __fastcall CNetworkedSequenceOperation::ReadOpValue(
        CNetworkedSequenceOperation *const this,
        AnimationOperationHistory_t *pValue)
{
  pValue->m_hSequence.m_Data = this->m_hSequence.m_Value.m_Data;
  pValue->m_flCycle = this->m_flCycle.m_Value;
  pValue->m_flWeight = this->m_flWeight.m_Value.m_Value;
  pValue->m_flPrevCycle = this->m_flPrevCycle.m_Value;
}


// CNetworkedSequenceOperation::WriteOpValue  (line 168, @0x00000000020b6360, libserver.so)  // inlines: GetEncoder, GetQuantizedFloatEncoderByIndex, GetSequence, NetworkStateChanged, Set, operator!=, operator=, operator=<float>, operator=<int>
int __fastcall CNetworkedSequenceOperation::WriteOpValue(
        CNetworkedSequenceOperation *const this,
        const AnimationOperationHistory_t *pValue,
        IVWriteOpType_t opType)
{
  double v3; // xmm4_8
  double v4; // xmm2_8
  int32 m_Data; // eax
  int32 v9; // r15d
  int v10; // r13d
  float m_flCycle; // xmm0_4
  bool v12; // zf
  double v13; // xmm0_8
  double v14; // xmm1_8
  float m_flPrevCycle; // xmm0_4
  bool v16; // zf
  __int64 v18; // rax
  float v19; // xmm1_4
  float v20; // [rsp-34h] [rbp-3Ch]
  float m_flWeight; // [rsp-34h] [rbp-3Ch]
  float v22; // [rsp-34h] [rbp-3Ch]

  v4 = 0.0;
  m_Data = this->m_hSequence.m_Value.m_Data;
  v9 = pValue->m_hSequence.m_Data;
  if ( pValue->m_flWeight == 0.0 )
  {
    v10 = 0;
  }
  else
  {
    v10 = 64;
    if ( m_Data == v9 )
      v10 = 0;
    if ( pValue->m_flCycle != this->m_flCycle.m_Value )
    {
      v10 |= 0x10u;
      if ( v9 == m_Data )
        goto LABEL_4;
      goto LABEL_22;
    }
  }
  if ( v9 == m_Data )
  {
LABEL_4:
    m_flCycle = pValue->m_flCycle;
    v12 = m_flCycle == this->m_flCycle.m_Value;
    goto LABEL_5;
  }
LABEL_22:
  (*(this->_vptr_CNetworkedSequenceOperation + 3))(this, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_hSequence.m_Value.m_Data = v9;
  m_flCycle = pValue->m_flCycle;
  v12 = m_flCycle == this->m_flCycle.m_Value;
LABEL_5:
  if ( !v12 )
  {
    v20 = m_flCycle;
    (*(this->_vptr_CNetworkedSequenceOperation + 3))(this, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flCycle.m_Value = v20;
  }
  *&v13 = LODWORD(pValue->m_flWeight);
  *&v14 = LODWORD(this->m_flWeight.m_Value.m_Value);
  if ( *&v13 == *&v14 )
  {
    m_flPrevCycle = pValue->m_flPrevCycle;
    v16 = m_flPrevCycle == this->m_flPrevCycle.m_Value;
  }
  else
  {
    if ( *&v13 == 0.0 || (v3 = 0.0, *&v14 == 0.0) )
      v10 = 80;
    else
      v10 |= 0x10u;
    m_flWeight = pValue->m_flWeight;
    (*(this->_vptr_CNetworkedSequenceOperation + 3))(this, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v13, v14, v4, 0.0, v3);
    v18 = g_pQuantizedFloatEncoders + 32LL * this->m_flWeight.m_Value.m_nEncoder;
    v19 = *(v18 + 12);
    if ( m_flWeight <= v19 )
      v19 = fmaxf(*(v18 + 8), m_flWeight);
    this->m_flWeight.m_Value.m_Value = v19;
    m_flPrevCycle = pValue->m_flPrevCycle;
    v16 = m_flPrevCycle == this->m_flPrevCycle.m_Value;
  }
  if ( !v16 )
  {
    v22 = m_flPrevCycle;
    (*(this->_vptr_CNetworkedSequenceOperation + 3))(this, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flPrevCycle.m_Value = v22;
  }
  if ( opType == IVWriteOpType_t::IV_WRITE_INTERPOLATING && pValue->m_bInterpolationHadDiscontinuity != 0 )
  {
    this->m_bDiscontinuity = 1;
    this->m_flPrevCycleFromDiscontinuity = pValue->m_flPrevCycle;
  }
  else
  {
    this->m_bDiscontinuity = 0;
    this->m_flPrevCycleFromDiscontinuity = 0.0;
  }
  return v10;
}


// CSkeletonAnimationHistoryContext::CSkeletonAnimationHistoryContext  (line 215, @0x00000000020d0110, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
void __fastcall CSkeletonAnimationHistoryContext::CSkeletonAnimationHistoryContext(
        CSkeletonAnimationHistoryContext *const this,
        InterpolatedVarPhase_t ivPhase)
{
  this->_vptr_ISkeletonAnimationHistoryContext = &off_3FFC570;
  this->m_interpolatedVars.m_Size = 0;
  this->m_interpolatedVars.m_Memory.m_pMemory = 0;
  this->m_interpolatedVars.m_Memory.m_nAllocationCount = 0;
  this->m_interpolatedVars.m_Memory.m_nGrowSize = 0;
  this->m_wrappedInterpolatedVars.m_Size = 0;
  this->m_wrappedInterpolatedVars.m_Memory.m_pMemory = 0;
  this->m_wrappedInterpolatedVars.m_Memory.m_nAllocationCount = 0;
  this->m_wrappedInterpolatedVars.m_Memory.m_nGrowSize = 0;
  this->m_pCurrentValues = 0;
  this->m_bInitialized = 0;
  this->m_ivPhase = ivPhase;
}


// CSkeletonAnimationHistoryContext::CSkeletonAnimationHistoryContext  (line 226, @0x00000000020d6bc0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CSkeletonAnimationHistoryContext::Init, CUtlVectorBase<IInterpolatedVar*, CUtlMemory<IInterpolatedVar*, int> >::~CUtlVectorBase, _Unwind_Resume, CUtlMemory<IWrappedInterpolatedVarAdapter*, int>::Purge
void __fastcall CSkeletonAnimationHistoryContext::CSkeletonAnimationHistoryContext(
        CSkeletonAnimationHistoryContext *const this,
        double flTime,
        CSkeletonAnimationController *pController,
        InterpolatedVarPhase_t ivPhase,
        float a5)
{
  this->_vptr_ISkeletonAnimationHistoryContext = &off_3FFC570;
  this->m_interpolatedVars.m_Size = 0;
  this->m_interpolatedVars.m_Memory.m_pMemory = 0;
  this->m_interpolatedVars.m_Memory.m_nAllocationCount = 0;
  this->m_interpolatedVars.m_Memory.m_nGrowSize = 0;
  this->m_wrappedInterpolatedVars.m_Size = 0;
  this->m_wrappedInterpolatedVars.m_Memory.m_pMemory = 0;
  this->m_wrappedInterpolatedVars.m_Memory.m_nAllocationCount = 0;
  this->m_wrappedInterpolatedVars.m_Memory.m_nGrowSize = 0;
  this->m_bInitialized = 0;
  this->m_ivPhase = ivPhase;
  CSkeletonAnimationHistoryContext::Init(this, flTime, a5, pController);
}


// CSkeletonAnimationHistoryContext::Init  (line 239, @0x00000000020d69b0, libserver.so)  // inlines: CopyConstruct<CInterpolationTimeContext>, Element, GrowStack, Push, PushInterpolationContext, ResetDbgInfo, operator[]
// calls: malloc, CUtlMemory<CInterpolationTimeContext, int>::Grow
// callers: CSkeletonAnimationHistoryContext::CSkeletonAnimationHistoryContext
// globals: IWrappedInterpolatedVar::s_WrappedInterpolatedVarState
void __fastcall CSkeletonAnimationHistoryContext::Init(
        CSkeletonAnimationHistoryContext *const this,
        double a2,
        float flTime,
        CSkeletonAnimationController *pController)
{
  int m_Size; // r14d
  unsigned __int64 v6; // r13
  int v7; // ebx
  IInterpolatedVar *v8; // rdi
  unsigned __int64 v9; // r13
  IWrappedInterpolatedVarAdapter *v10; // rdi
  __int64 v11; // rax
  size_t v12; // rdi
  uint8 *v13; // rax
  uint8 *m_pCurrentValues; // rsi
  unsigned __int64 v15; // r13
  __int64 v16; // r12
  int v17; // ebx
  IInterpolatedVar *v18; // r14
  unsigned __int64 v19; // r12
  IWrappedInterpolatedVarAdapter *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  InterpolatedVarPhase_t m_ivPhase; // ebx
  CInterpolationTimeContext *v24; // rax
  int v25; // [rsp+8h] [rbp-38h]
  float flTimea; // [rsp+Ch] [rbp-34h]

  this->m_bInitialized = 1;
  flTimea = *&a2;
  (*(pController->_vptr_CSkeletonAnimationController + 16))(pController, this, a2, flTime);
  m_Size = this->m_interpolatedVars.m_Size;
  v25 = this->m_wrappedInterpolatedVars.m_Size;
  if ( m_Size <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = this->m_interpolatedVars.m_Memory.m_pMemory[v6 / 8];
      v6 += 8LL;
      v7 += (*(v8->_vptr_IInterpolatedVar + 34))(v8);
    }
    while ( v6 != 8LL * (m_Size - 1) + 8 );
  }
  if ( v25 > 0 )
  {
    v9 = 0;
    do
    {
      v10 = this->m_wrappedInterpolatedVars.m_Memory.m_pMemory[v9 / 8];
      v9 += 8LL;
      v11 = (*(v10->_vptr_IWrappedInterpolatedVarAdapter + 4))(v10);
      v7 += (*(*v11 + 272LL))(v11);
    }
    while ( v9 != 8LL * (v25 - 1) + 8 );
  }
  v12 = v7;
  if ( v7 < 8 )
    v12 = 8;
  v13 = malloc(v12);
  this->m_pCurrentValues = v13;
  if ( m_Size <= 0 )
  {
    v17 = 0;
  }
  else
  {
    m_pCurrentValues = v13;
    v15 = 0;
    v16 = 8LL * (m_Size - 1) + 8;
    v17 = 0;
    while ( 1 )
    {
      v18 = this->m_interpolatedVars.m_Memory.m_pMemory[v15 / 8];
      v15 += 8LL;
      v17 += (*(v18->_vptr_IInterpolatedVar + 35))(v18, &m_pCurrentValues[v17]);
      (*(v18->_vptr_IInterpolatedVar + 7))(v18, this->m_ivPhase, 1, 1, flTimea);
      if ( v15 == v16 )
        break;
      m_pCurrentValues = this->m_pCurrentValues;
    }
  }
  if ( v25 > 0 )
  {
    v19 = 0;
    do
    {
      v20 = this->m_wrappedInterpolatedVars.m_Memory.m_pMemory[v19 / 8];
      v19 += 8LL;
      v21 = (*(v20->_vptr_IWrappedInterpolatedVarAdapter + 4))(v20);
      v17 += (*(*v21 + 280LL))(v21, &this->m_pCurrentValues[v17]);
    }
    while ( v19 != 8LL * (v25 - 1) + 8 );
  }
  v22 = IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Size;
  m_ivPhase = this->m_ivPhase;
  if ( IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Size >= IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CInterpolationTimeContext,int>::Grow(
      &IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Memory,
      1);
    v22 = IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Size;
  }
  IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Size = v22 + 1;
  v24 = &IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Memory.m_pMemory[v22];
  IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_pElements = IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Memory.m_pMemory;
  if ( v24 != 0 )
  {
    v24->m_nPhase = m_ivPhase;
    v24->m_nContextType = InterpolationTimeContextType_t::INTERPOLATION_CONTEXT_READING_HISTORICAL_SAMPLES;
    v24->m_flInterpolationTime[0] = flTimea;
    v24->m_flInterpolationTime[1] = flTimea;
    v24->m_bIngoreInterpolationAmount = 1;
  }
}


// CSkeletonAnimationHistoryContext::~CSkeletonAnimationHistoryContext  (line 288, @0x00000000020b6590, libserver.so)  // inlines: Pop, PopInterpolationContext, Purge, PurgeAndDeleteElements, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: free, CUtlMemory<IWrappedInterpolatedVarAdapter*, int>::Purge, CUtlMemory<IInterpolatedVar*, int>::Purge
void __fastcall CSkeletonAnimationHistoryContext::~CSkeletonAnimationHistoryContext(
        CSkeletonAnimationHistoryContext *const this)
{
  int m_Size; // r15d
  int v3; // eax
  unsigned __int64 v4; // r13
  int v5; // r12d
  __int64 v6; // r14
  IInterpolatedVar *v7; // rdi
  unsigned __int64 v8; // r13
  IWrappedInterpolatedVarAdapter *v9; // rdi
  __int64 v10; // rax
  uint8 *m_pCurrentValues; // rdi
  __int64 v12; // r13
  int i; // r12d
  IWrappedInterpolatedVarAdapter *v14; // rdi
  bool v15; // zf
  CUtlVectorBase<IWrappedInterpolatedVarAdapter*,CUtlMemory<IWrappedInterpolatedVarAdapter*,int> >::CAllocator *p_m_Memory; // r12

  this->_vptr_ISkeletonAnimationHistoryContext = &off_3FFC570;
  if ( !this->m_bInitialized )
  {
    v15 = (this->m_wrappedInterpolatedVars.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_wrappedInterpolatedVars.m_Size = 0;
    if ( v15 )
    {
      p_m_Memory = &this->m_wrappedInterpolatedVars.m_Memory;
      CUtlMemory<IWrappedInterpolatedVarAdapter *,int>::Purge(&this->m_wrappedInterpolatedVars.m_Memory);
      if ( (this->m_wrappedInterpolatedVars.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<IWrappedInterpolatedVarAdapter *,int>::Purge(p_m_Memory);
    }
    v15 = (this->m_interpolatedVars.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_interpolatedVars.m_Size = 0;
    if ( v15 )
    {
      CUtlMemory<IInterpolatedVar *,int>::Purge(&this->m_interpolatedVars.m_Memory);
      if ( (this->m_interpolatedVars.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        goto LABEL_22;
    }
    return;
  }
  --IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Size;
  this->m_bInitialized = 0;
  m_Size = this->m_wrappedInterpolatedVars.m_Size;
  v3 = this->m_interpolatedVars.m_Size;
  if ( v3 <= 0 )
  {
    v5 = 0;
  }
  else
  {
    v4 = 0;
    v5 = 0;
    v6 = 8LL * (v3 - 1) + 8;
    do
    {
      v7 = this->m_interpolatedVars.m_Memory.m_pMemory[v4 / 8];
      v4 += 8LL;
      v5 += (*(v7->_vptr_IInterpolatedVar + 36))(v7, &this->m_pCurrentValues[v5]);
    }
    while ( v4 != v6 );
  }
  if ( m_Size > 0 )
  {
    v8 = 0;
    do
    {
      v9 = this->m_wrappedInterpolatedVars.m_Memory.m_pMemory[v8 / 8];
      v8 += 8LL;
      v10 = (*(v9->_vptr_IWrappedInterpolatedVarAdapter + 4))(v9);
      v5 += (*(*v10 + 288LL))(v10, &this->m_pCurrentValues[v5]);
    }
    while ( v8 != 8LL * (m_Size - 1) + 8 );
  }
  m_pCurrentValues = this->m_pCurrentValues;
  if ( m_pCurrentValues != 0 )
  {
    free(m_pCurrentValues);
    this->m_pCurrentValues = 0;
  }
  v12 = 0;
  for ( i = 0; i < this->m_wrappedInterpolatedVars.m_Size; ++v12 )
  {
    v14 = this->m_wrappedInterpolatedVars.m_Memory.m_pMemory[v12];
    if ( v14 != 0 )
      (*(v14->_vptr_IWrappedInterpolatedVarAdapter + 1))(v14);
    ++i;
  }
  v15 = (this->m_wrappedInterpolatedVars.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_wrappedInterpolatedVars.m_Size = 0;
  if ( v15 )
  {
    CUtlMemory<IWrappedInterpolatedVarAdapter *,int>::Purge(&this->m_wrappedInterpolatedVars.m_Memory);
    v15 = (this->m_wrappedInterpolatedVars.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_wrappedInterpolatedVars.m_Size = 0;
    if ( v15 )
    {
      CUtlMemory<IWrappedInterpolatedVarAdapter *,int>::Purge(&this->m_wrappedInterpolatedVars.m_Memory);
      if ( (this->m_wrappedInterpolatedVars.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<IWrappedInterpolatedVarAdapter *,int>::Purge(&this->m_wrappedInterpolatedVars.m_Memory);
        v15 = (this->m_interpolatedVars.m_Memory.m_nGrowSize & 0xC0000000) == 0;
        this->m_interpolatedVars.m_Size = 0;
        if ( !v15 )
          return;
        goto LABEL_21;
      }
    }
  }
  else
  {
    this->m_wrappedInterpolatedVars.m_Size = 0;
  }
  v15 = (this->m_interpolatedVars.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_interpolatedVars.m_Size = 0;
  if ( !v15 )
    return;
LABEL_21:
  CUtlMemory<IInterpolatedVar *,int>::Purge(&this->m_interpolatedVars.m_Memory);
  if ( (this->m_interpolatedVars.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_22:
    CUtlMemory<IInterpolatedVar *,int>::Purge(&this->m_interpolatedVars.m_Memory);
}


// CSkeletonAnimationHistoryContext::AddInterpolatedVar  (line 323, @0x00000000020dcf60, libserver.so)  // inlines: AddToTail, CopyConstruct<IInterpolatedVar*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<IInterpolatedVar*, int>::Grow
void __fastcall CSkeletonAnimationHistoryContext::AddInterpolatedVar(
        CSkeletonAnimationHistoryContext *const this,
        IInterpolatedVar *pVar)
{
  __int64 m_Size; // r12
  int v5; // eax
  IInterpolatedVar **v6; // rax

  m_Size = this->m_interpolatedVars.m_Size;
  v5 = this->m_interpolatedVars.m_Size;
  if ( m_Size == this->m_interpolatedVars.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<IInterpolatedVar *,int>::Grow(&this->m_interpolatedVars.m_Memory, 1);
    v5 = this->m_interpolatedVars.m_Size;
  }
  this->m_interpolatedVars.m_Size = v5 + 1;
  v6 = &this->m_interpolatedVars.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = pVar;
}


// CSkeletonAnimationHistoryContext::AddWrappedInterpolatedVar  (line 328, @0x00000000020dcfc0, libserver.so)  // inlines: AddToTail, CopyConstruct<IWrappedInterpolatedVarAdapter*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<IWrappedInterpolatedVarAdapter*, int>::Grow
void __fastcall CSkeletonAnimationHistoryContext::AddWrappedInterpolatedVar(
        CSkeletonAnimationHistoryContext *const this,
        IWrappedInterpolatedVarAdapter *pVar)
{
  __int64 m_Size; // r12
  int v5; // eax
  IWrappedInterpolatedVarAdapter **v6; // rax

  m_Size = this->m_wrappedInterpolatedVars.m_Size;
  v5 = this->m_wrappedInterpolatedVars.m_Size;
  if ( m_Size == this->m_wrappedInterpolatedVars.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<IWrappedInterpolatedVarAdapter *,int>::Grow(&this->m_wrappedInterpolatedVars.m_Memory, 1);
    v5 = this->m_wrappedInterpolatedVars.m_Size;
  }
  this->m_wrappedInterpolatedVars.m_Size = v5 + 1;
  v6 = &this->m_wrappedInterpolatedVars.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = pVar;
}


// CSkeletonAnimationController::GetDataDescMap  (line 338, @0x000000000209c7d0, libserver.so)
// globals: CSkeletonAnimationController::m_DataMap
datamap_t *__fastcall CSkeletonAnimationController::GetDataDescMap(CSkeletonAnimationController *const this)
{
  return &CSkeletonAnimationController::m_DataMap;
}


// CSkeletonAnimationController::AddDatadescMetadataKeys  (line 338, @0x00000000020b67c0, libserver.so)
void __fastcall CSkeletonAnimationController::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CSkeletonAnimationController::GetBaseMap  (line 338, @0x00000000020b67d0, libserver.so)
datamap_t *__cdecl CSkeletonAnimationController::GetBaseMap()
{
  return 0;
}


// DataMapInit<CSkeletonAnimationController>  (line 338, @0x00000000020b67e0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: __static_initialization_and_destruction_0
// strings: "CSkeletonAnimationController"
// globals: `guard variable for'DataMapInit<CSkeletonAnimationController>(CSkeletonAnimationController *)::nameHolder, CSkeletonAnimationController::m_DataMap, DataMapInit<CSkeletonAnimationController>(CSkeletonAnimationController *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CSkeletonAnimationController>(CSkeletonAnimationController *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CSkeletonAnimationController>(CSkeletonAnimationController *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSkeletonAnimationController>(CSkeletonAnimationController *)::nameHolder) != 0 )
  {
    DataMapInit<CSkeletonAnimationController>(CSkeletonAnimationController *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CSkeletonAnimationController>(CSkeletonAnimationController *)::nameHolder.m_pszBase = "CSkeletonAnimationController";
    DataMapInit<CSkeletonAnimationController>(CSkeletonAnimationController *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CSkeletonAnimationController>(CSkeletonAnimationController *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CSkeletonAnimationController>(CSkeletonAnimationController *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CSkeletonAnimationController>(CSkeletonAnimationController *)::nameHolder.m_nLenBase = 28;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSkeletonAnimationController>(CSkeletonAnimationController *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CSkeletonAnimationController>(CSkeletonAnimationController *)::nameHolder,
      &_dso_handle);
  }
  CSkeletonAnimationController::m_DataMap.baseMap = 0;
  CSkeletonAnimationController::m_DataMap.dataDesc = &DataMapInit<CSkeletonAnimationController>(CSkeletonAnimationController *)::dataDesc[1];
  CSkeletonAnimationController::m_DataMap.dataNumFields = 1;
  return &CSkeletonAnimationController::m_DataMap;
}


// CSkeletonAnimationController::CSkeletonAnimationController  (line 342, @0x00000000020b68a0, libserver.so)
// callers: CBaseAnimatingController::CBaseAnimatingController
void __fastcall CSkeletonAnimationController::CSkeletonAnimationController(CSkeletonAnimationController *const this)
{
  this->_vptr_CSkeletonAnimationController = off_3FFC590;
  this->m_pSkeletonInstance = 0;
}


// CSkeletonAnimationController::~CSkeletonAnimationController  (line 347, @0x00000000020b68c0, libserver.so)
// callers: CEntityComponentHelperReferenced<CBodyComponentBaseAnimating>::Free, CBaseAnimatingController::CBaseAnimatingController, CBaseAnimatingController::~CBaseAnimatingController, CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay>::Free, CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay>::Allocate, CEntityComponentHelperReferenced<CBodyComponentBaseAnimating>::Allocate
void __fastcall CSkeletonAnimationController::~CSkeletonAnimationController(CSkeletonAnimationController *const this)
{
  this->_vptr_CSkeletonAnimationController = off_3FFC590;
}


// CSkeletonAnimationController::SetSkeletonInstance  (line 351, @0x00000000020baab0, libserver.so)
// calls: CSkeletonInstance::SetAnimationController
// callers: CBaseAnimatingController::SetSkeletonInstance, CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay>::Allocate, CEntityComponentHelperReferenced<CBodyComponentBaseAnimating>::Allocate
void __fastcall CSkeletonAnimationController::SetSkeletonInstance(
        CSkeletonAnimationController *const this,
        CSkeletonInstance *pSkeletonInstance)
{
  this->m_pSkeletonInstance = pSkeletonInstance;
  if ( pSkeletonInstance != 0 )
    CSkeletonInstance::SetAnimationController(pSkeletonInstance, this);
}


// CSkeletonAnimationController::GetOwnerEntity  (line 360, @0x00000000020b68d0, libserver.so)  // inlines: GetOwnerEntity
// callers: CBaseAnimatingController::Activate, CBaseAnimatingController::UpdateParameters, CBaseAnimatingController::PostDataUpdate, CAnimationLayer::OnAnimationOpChanged, CBaseAnimatingController::ResetClientsideFrame, CBaseAnimatingController::GetAnimTimeInterval, CBaseAnimatingController::IsSequenceDebugging, CBaseAnimatingController::SetPlaybackRate, CBaseAnimatingController::SequenceDuration, CBaseAnimatingController::ResetSequenceInfo, CBaseAnimatingController::Spawn, CBaseAnimatingController::SetupSequences (24 total)
CBaseEntity *__fastcall CSkeletonAnimationController::GetOwnerEntity(const CSkeletonAnimationController *const this)
{
  CSkeletonInstance *m_pSkeletonInstance; // rax

  m_pSkeletonInstance = this->m_pSkeletonInstance;
  if ( m_pSkeletonInstance != 0 )
    return m_pSkeletonInstance->m_pOwner;
  else
    return 0;
}


// CSkeletonAnimationController::SetSequence  (line 365, @0x00000000020bbab0, libserver.so)  // inlines: LookupSequence
// calls: CSkeletonInstance::LookupSequence
// callers: CBodyComponent::SetAnimationSequence
void __fastcall CSkeletonAnimationController::SetSequence(
        CSkeletonAnimationController *const this,
        const char *pSequenceName,
        SetSequenceBehavior_t behavior)
{
  HSequence v5; // eax

  v5.m_Data = CSkeletonInstance::LookupSequence(this->m_pSkeletonInstance, pSequenceName).m_Data;
  if ( v5.m_Data != -1 )
    (*(this->_vptr_CSkeletonAnimationController + 23))(this, v5.m_Data, behavior);
}


// CSkeletonAnimationController::SequenceDuration  (line 374, @0x00000000020bbaf0, libserver.so)  // inlines: LookupSequence
// calls: CSkeletonInstance::LookupSequence
// callers: CBodyComponent::SequenceDuration
float __fastcall CSkeletonAnimationController::SequenceDuration(
        const CSkeletonAnimationController *const this,
        const char *pSequenceName)
{
  HSequence v3; // eax
  float result; // xmm0_4

  v3.m_Data = CSkeletonInstance::LookupSequence(this->m_pSkeletonInstance, pSequenceName).m_Data;
  result = 0.0;
  if ( v3.m_Data != -1 )
    return (*(this->_vptr_CSkeletonAnimationController + 21))(this, v3.m_Data, 0.0);
  return result;
}


// CSkeletonAnimationController::Lerp_NoCopy  (line 387, @0x00000000020b68f0, libserver.so)  // inlines: GetModel, Lerp<float>, operator CWeakHandle<InfoForResourceTypeCModel>, operator const RuntimeClass_t*
// calls: CModel::IsValidSequence, CModel::IsSequenceLooping, LoopingLerp<float>
// callers: CSkeletonAnimationController::LoopingLerp_NoCopy
void __fastcall CSkeletonAnimationController::Lerp_NoCopy(
        CSkeletonAnimationController *const this,
        AnimationOperationHistory_t *const out,
        float flPercent,
        const AnimationOperationHistory_t *const from,
        const AnimationOperationHistory_t *const to)
{
  const CModel *const *m_pBinding; // rax
  const CModel *v7; // r12
  bool IsValidSequence; // al
  float m_flPrevCycle; // xmm1_4
  float v10; // r14d
  bool IsSequenceLooping; // al
  const float *v12; // rdi
  unsigned __int64 m_Data; // rsi
  float m_flCycle; // [rsp+4h] [rbp-3Ch]
  const AnimationOperationHistory_t *toa; // [rsp+8h] [rbp-38h]
  float tob; // [rsp+8h] [rbp-38h]
  const AnimationOperationHistory_t *pDesta; // [rsp+18h] [rbp-28h]

  out->m_bInterpolationHadDiscontinuity = 0;
  if ( flPercent >= 1.0 )
    goto LABEL_2;
  if ( flPercent <= 0.0 )
  {
    *out = *from;
  }
  else
  {
    m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
    if ( m_pBinding == 0
      || (v7 = *m_pBinding, *m_pBinding == 0)
      || (toa = to, IsValidSequence = CModel::IsValidSequence(*m_pBinding, from->m_hSequence),
                    to = toa,
                    !IsValidSequence)
      || toa->m_nOrder == 15 )
    {
LABEL_2:
      *out = *to;
      return;
    }
    m_flPrevCycle = toa->m_flPrevCycle;
    tob = flPercent;
    out->m_flPrevCycle = m_flPrevCycle;
    pDesta = to;
    out->m_hSequence.m_Data = to->m_hSequence.m_Data;
    out->m_nOrder = to->m_nOrder;
    out->m_nSequenceParity = to->m_nSequenceParity;
    v10 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(to->m_flCycle)));
    m_flCycle = from->m_flCycle;
    IsSequenceLooping = CModel::IsSequenceLooping(v7, to->m_hSequence);
    m_Data = from->m_hSequence.m_Data;
    if ( pDesta->m_hSequence.m_Data == m_Data
      && from->m_nOrder != 15
      && (m_Data = pDesta->m_nSequenceParity, from->m_nSequenceParity == m_Data) )
    {
      out->m_flWeight = ((pDesta->m_flWeight - from->m_flWeight) * tob) + from->m_flWeight;
      if ( IsSequenceLooping && fabs(v10 - m_flCycle) >= 0.5 )
        out->m_flCycle = LoopingLerp<float>(tob, v12, m_Data, from->m_flCycle, pDesta->m_flCycle);
      else
        out->m_flCycle = ((pDesta->m_flCycle - from->m_flCycle) * tob) + from->m_flCycle;
    }
    else
    {
      out->m_flWeight = pDesta->m_flWeight;
      if ( IsSequenceLooping )
        out->m_flCycle = LoopingLerp<float>(tob, v12, m_Data, pDesta->m_flPrevCycle, pDesta->m_flCycle);
      else
        out->m_flCycle = ((pDesta->m_flCycle - pDesta->m_flPrevCycle) * tob) + pDesta->m_flPrevCycle;
      out->m_bInterpolationHadDiscontinuity = 1;
    }
  }
}


// CSkeletonAnimationController::Lerp_Hermite_NoCopy  (line 456, @0x00000000020b6af0, libserver.so)  // inlines: GetModel, Lerp<float>, Lerp_Hermite<float>, LoopingLerp_Hermite<float>, abs<float>, operator CWeakHandle<InfoForResourceTypeCModel>, operator const RuntimeClass_t*, operator==
// calls: CModel::IsValidSequence, CModel::IsSequenceLooping, LoopingLerp<float>
// callers: CSkeletonAnimationController::LoopingLerp_Hermite_NoCopy
void __fastcall CSkeletonAnimationController::Lerp_Hermite_NoCopy(
        CSkeletonAnimationController *const this,
        AnimationOperationHistory_t *const out,
        const AnimationOperationHistory_t *const current,
        float t,
        const AnimationOperationHistory_t *const prev,
        const AnimationOperationHistory_t *const from,
        const AnimationOperationHistory_t *const to)
{
  const CModel *const *m_pBinding; // rax
  const CModel *v9; // r12
  bool IsValidSequence; // al
  float m_flPrevCycle; // xmm1_4
  bool IsSequenceLooping; // al
  const float *v13; // rdi
  const float *m_nSequenceParity; // rsi
  const AnimationOperationHistory_t *v15; // rcx
  float m_flCycle; // xmm1_4
  bool v17; // dl
  float v18; // xmm3_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm5_4
  float v24; // xmm6_4
  float v25; // xmm8_4
  float v26; // xmm4_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  float v29; // xmm3_4
  const AnimationOperationHistory_t *toa; // [rsp+0h] [rbp-30h]
  const AnimationOperationHistory_t *tob; // [rsp+0h] [rbp-30h]
  const AnimationOperationHistory_t *fromb; // [rsp+8h] [rbp-28h]
  float prevb; // [rsp+10h] [rbp-20h]
  const AnimationOperationHistory_t *pDesta; // [rsp+18h] [rbp-18h]

  out->m_bInterpolationHadDiscontinuity = 0;
  if ( t >= 1.0 )
    goto LABEL_2;
  if ( t <= 0.0 )
  {
    *out = *from;
    return;
  }
  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0
    || (v9 = *m_pBinding, *m_pBinding == 0)
    || (toa = to, IsValidSequence = CModel::IsValidSequence(*m_pBinding, from->m_hSequence), to = toa, !IsValidSequence)
    || toa->m_nOrder == 15 )
  {
LABEL_2:
    *out = *to;
    return;
  }
  m_flPrevCycle = toa->m_flPrevCycle;
  tob = from;
  fromb = prev;
  out->m_flPrevCycle = m_flPrevCycle;
  prevb = t;
  pDesta = to;
  out->m_hSequence.m_Data = to->m_hSequence.m_Data;
  out->m_nOrder = to->m_nOrder;
  out->m_nSequenceParity = to->m_nSequenceParity;
  IsSequenceLooping = CModel::IsSequenceLooping(v9, to->m_hSequence);
  v15 = fromb;
  if ( pDesta->m_hSequence.m_Data != tob->m_hSequence.m_Data
    || tob->m_nOrder == 15
    || (m_nSequenceParity = pDesta->m_nSequenceParity, tob->m_nSequenceParity != m_nSequenceParity) )
  {
    out->m_flWeight = pDesta->m_flWeight;
    if ( IsSequenceLooping )
      out->m_flCycle = LoopingLerp<float>(prevb, v13, m_nSequenceParity, pDesta->m_flPrevCycle, pDesta->m_flCycle);
    else
      out->m_flCycle = ((pDesta->m_flCycle - pDesta->m_flPrevCycle) * prevb) + pDesta->m_flPrevCycle;
    out->m_bInterpolationHadDiscontinuity = 1;
    return;
  }
  m_flCycle = tob->m_flCycle;
  v17 = 1;
  if ( pDesta->m_hSequence.m_Data != fromb->m_hSequence.m_Data )
    v15 = tob;
  if ( fabs(pDesta->m_flCycle - m_flCycle) < 0.5 )
    v17 = fabs(m_flCycle - v15->m_flCycle) >= 0.5;
  out->m_flWeight = ((pDesta->m_flWeight - tob->m_flWeight) * prevb) + tob->m_flWeight;
  if ( v17 && IsSequenceLooping )
  {
    v21 = tob->m_flCycle;
    v22 = v15->m_flCycle;
    v23 = pDesta->m_flCycle;
    if ( fabs(v21 - v22) > 0.5 )
    {
      if ( v21 <= v22 )
        v21 = v21 + 1.0;
      else
        v22 = v22 + 1.0;
    }
    v24 = v23 - v21;
    if ( fabs(v23 - v21) <= 0.5 )
    {
      v25 = v21 - v22;
      goto LABEL_30;
    }
    if ( v23 <= v21 )
    {
      v23 = v23 + 1.0;
      v25 = v21 - v22;
    }
    else
    {
      v21 = v21 + 1.0;
      v25 = v21 - v22;
      v29 = v21 - v22;
      if ( (v21 - v22) < 0.0 )
        v29 = -v25;
      if ( v29 > 0.5 )
      {
        if ( v21 <= v22 )
          v21 = v21 + 1.0;
        else
          v22 = v22 + 1.0;
        v24 = v23 - v21;
        v25 = v21 - v22;
LABEL_30:
        v26 = prevb * (prevb * prevb);
        v27 = ((((((v26 + v26) - (3.0 * (prevb * prevb))) + 1.0) * v21)
              + (((-2.0 * v26) + (3.0 * (prevb * prevb))) * v23))
             + (((v26 - ((prevb * prevb) + (prevb * prevb))) + prevb) * v25))
            + ((v26 - (prevb * prevb)) * v24);
        v28 = v27 - v27;
        if ( v28 < 0.0 )
          v28 = v28 + 1.0;
        out->m_flCycle = v28;
        return;
      }
    }
    v24 = v23 - v21;
    goto LABEL_30;
  }
  v18 = prevb * (prevb * prevb);
  v19 = ((((((v18 + v18) - (3.0 * (prevb * prevb))) + 1.0) * tob->m_flCycle)
        + (((-2.0 * v18) + (3.0 * (prevb * prevb))) * pDesta->m_flCycle))
       + ((tob->m_flCycle - v15->m_flCycle) * ((v18 - ((prevb * prevb) + (prevb * prevb))) + prevb)))
      + ((pDesta->m_flCycle - tob->m_flCycle) * (v18 - (prevb * prevb)));
  v20 = 1.0;
  if ( v19 <= 1.0 )
    v20 = fmaxf(0.0, v19);
  out->m_flCycle = v20;
}


// CSkeletonAnimationController::LoopingLerp_NoCopy  (line 544, @0x00000000020b6f50, libserver.so)
// calls: CSkeletonAnimationController::Lerp_NoCopy
void __fastcall CSkeletonAnimationController::LoopingLerp_NoCopy(
        CSkeletonAnimationController *const this,
        AnimationOperationHistory_t *const out,
        float flPercent,
        const AnimationOperationHistory_t *const from,
        const AnimationOperationHistory_t *const to)
{
  CSkeletonAnimationController::Lerp_NoCopy(this, out, flPercent, from, to);
}


// CSkeletonAnimationController::LoopingLerp_Hermite_NoCopy  (line 550, @0x00000000020b6f60, libserver.so)
// calls: CSkeletonAnimationController::Lerp_Hermite_NoCopy
void __fastcall CSkeletonAnimationController::LoopingLerp_Hermite_NoCopy(
        CSkeletonAnimationController *const this,
        AnimationOperationHistory_t *const out,
        const AnimationOperationHistory_t *const current,
        float t,
        const AnimationOperationHistory_t *const p0,
        const AnimationOperationHistory_t *const p1,
        const AnimationOperationHistory_t *const p2)
{
  CSkeletonAnimationController::Lerp_Hermite_NoCopy(this, out, current, t, p0, p1, p2);
}


