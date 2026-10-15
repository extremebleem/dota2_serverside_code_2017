
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvLaser::GetDataDescMap  (line 16, @0x00000000021ee5b0, libserver.so)
// globals: CEnvLaser::m_DataMap
datamap_t *__fastcall CEnvLaser::GetDataDescMap(CEnvLaser *const this)
{
  return &CEnvLaser::m_DataMap;
}


// CEnvLaser::AddDatadescMetadataKeys  (line 16, @0x00000000021f8dc0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvLaser::GetEntityClass(void)
void __fastcall CEnvLaser::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvLaser::GetEntityClass);
}


// CEnvLaser::GetBaseMap  (line 16, @0x00000000021f8de0, libserver.so)
datamap_t *__cdecl CEnvLaser::GetBaseMap()
{
  return &CBeam::m_DataMap;
}


// DataMapInit<CEnvLaser>  (line 16, @0x00000000022050a0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CEnvLaser"
// globals: `guard variable for'DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder, `guard variable for'DataMapInit<CEnvLaser>(CEnvLaser *)::dataDesc, CEnvLaser::GetEntityClass(void), CEnvLaser::m_DataMap, DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvLaser>(CEnvLaser *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder.m_pszBase = "CEnvLaser";
    DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder.m_nLenBase = 9;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder,
      &_dso_handle);
  }
  CEnvLaser::m_DataMap.baseMap = &CBeam::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvLaser>(CEnvLaser *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvLaser>(CEnvLaser *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v2, DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder.m_pszBase), "StrikeThink");
    m_Size = DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder.m_Names.m_Size == DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CEnvLaser>(CEnvLaser *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CEnvLaser>(CEnvLaser *)::dataDesc[6].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvLaser>(CEnvLaser *)::dataDesc);
  }
  CEnvLaser::m_DataMap.dataNumFields = 9;
  CEnvLaser::m_DataMap.dataDesc = &DataMapInit<CEnvLaser>(CEnvLaser *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvLaser::m_DataMap, CEnvLaser::GetEntityClass);
  return &CEnvLaser::m_DataMap;
}


// CEnvLaser::Precache  (line 38, @0x00000000021f4540, libserver.so)  // inlines: Base, Element, FindKeyHash, GetModelNameFromKeyValues, GetValue, GetValueString, TempString, operator[]
// calls: CBeam::Precache, GetModelNameFromKeyValues, PrecacheMaterial
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CEnvLaser::Precache(CEnvLaser *const this, const CEntityPrecacheContext *pContext)
{
  const CEntityKeyValues *m_pKeyValues; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::lambda::lambda v5; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // r8
  __int64 v7; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v9; // rdx
  CEntityVariant *p_m_value; // rax
  const char *ModelNameFromKeyValues; // rdi

  CBeam::Precache(this, pContext);
  m_pKeyValues = pContext->m_pKeyValues;
  v5 = pContext->m_pKeyValues->m_keyHashes.0;
  if ( *&v5 <= 0 )
  {
LABEL_15:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_12;
    goto LABEL_16;
  }
  m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
  v7 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v7) == 1622107784 )
      goto LABEL_9;
LABEL_6:
    if ( *&v5 <= ++v7 )
      goto LABEL_15;
  }
  m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v7] != 1622107784 )
    goto LABEL_6;
LABEL_9:
  if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
    v9 = m_pKeyValues->m_keyValues.m_pElements;
  else
    v9 = 0;
  p_m_value = &v9[v7].m_value;
  if ( p_m_value->m_type != 30 )
  {
LABEL_16:
    ModelNameFromKeyValues = GetModelNameFromKeyValues(pContext->m_pKeyValues, "");
    goto LABEL_17;
  }
LABEL_12:
  ModelNameFromKeyValues = p_m_value->m_uint64;
  if ( p_m_value->m_uint64 == 0 || *ModelNameFromKeyValues == 0 )
    goto LABEL_16;
LABEL_17:
  PrecacheMaterial(ModelNameFromKeyValues, pContext->m_pManifest);
  if ( this->m_iszSpriteName.u.m_Id != 0 )
    PrecacheMaterial(this->m_iszSpriteName.u.m_pAsString, pContext->m_pManifest);
}


// CEnvLaser::Spawn  (line 58, @0x000000000220bae0, libserver.so)  // inlines: AssignTo, Base, CStrongHandle, CUtlSymbolLarge, Element, FindKeyHash, FindOrRegisterResourceByName<1952542070ull>, Get<float>, Get<int>, GetEntityName, GetModelNameFromKeyValues, GetValue, GetValue<float>, GetValue<int>, GetValueString, GetWidth, Init, Min<long long unsigned int>, Min<unsigned int>, NetworkStateChanged, Set, SetAlpha, SetBlue, SetColor, SetComponent, SetEndWidth, SetGreen, SetNoise, SetRed, SetRenderColor, SetRenderFX, SetScrollRate, SetTexture, SetTransparency, SetVal, SetWidth, String, TempString, ToCStr, a, atof, atoi, b, g, operator=, operator=<CWeakHandle<InfoForResourceTypeIMaterial2> >, operator=<RenderFx_t>, operator=<float>, operator=<int>, operator[], r, ~CStrongHandle
// calls: CBeam::Spawn, CEntityKeyValues::HasValue, GetModelNameFromKeyValues, CStrongHandle<InfoForResourceTypeIMaterial2>::Init, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseEntity::ThinkSet, CBaseEntity::GetLocalOrigin, CBeam::PointsInit, CEnvLaser::TurnOn, CEnvLaser::TurnOff, CBaseEntity::GetAbsOrigin, CSprite::SpriteCreate (21 total)
// strings: "No conversion from %s to int now\n", "No conversion from %s to float now\n"
// globals: CEnvLaser::StrikeThink(void), CEntityKeyValues::sm_EmptyVariant, jpt_220C0C6, jpt_220C0F6, jpt_220C126
void __fastcall CEnvLaser::Spawn(CEnvLaser *const this, const CEntityKeyValues *pKeyValues)
{
  const char *ModelNameFromKeyValues; // r13
  const ResourceBinding_t<InfoForResourceTypeIMaterial2> *v5; // rax
  __m128 m_Value_low; // xmm1
  __m128 v7; // xmm0
  float v8; // xmm0_4
  const Vector *LocalOrigin; // r12
  const Vector *v10; // rax
  int v11; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v12; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v14; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rdx
  CEntityVariant *v16; // rax
  int v17; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v18; // cx
  __int64 v19; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v20; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v21; // rdx
  CEntityVariant *v22; // rcx
  int v23; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v24; // cx
  __int64 v25; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v26; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v27; // rdx
  CEntityVariant *v28; // rcx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v33; // rdx
  CEntityVariant *p_m_value; // rdx
  const Vector *AbsOrigin; // rax
  const char *m_pAsString; // rdi
  CSprite *v37; // rax
  CBaseEntity *MoveParent; // rax
  CSprite *m_pSprite; // r14
  unsigned __int8 v40; // r15
  RenderFx_t m_Value; // r12
  float v42; // xmm1_4
  unsigned __int8 v43; // r13
  int16 m_type; // ax
  int16 v45; // ax
  int16 v46; // ax
  float m_char; // xmm0_4
  float m_int; // xmm0_4
  float m_float; // xmm1_4
  float v50; // xmm0_4
  const char *v51; // rax
  const char *v52; // rax
  uint64 v53; // rdx
  uint64 v54; // rdx
  const char *m_uint64; // rax
  __m128d v56; // xmm0
  __int64 v57; // rdx
  const char *v58; // rax
  const char *v59; // rax
  const char *v60; // rax
  unsigned __int8 v61; // [rsp+Ah] [rbp-46h]
  unsigned __int8 v62; // [rsp+Bh] [rbp-45h]
  int brightnessa; // [rsp+Ch] [rbp-44h]
  int brightness; // [rsp+Ch] [rbp-44h]
  int brightnessb; // [rsp+Ch] [rbp-44h]
  int brightnessc; // [rsp+Ch] [rbp-44h]
  int brightnessd; // [rsp+Ch] [rbp-44h]
  CStrongHandle<InfoForResourceTypeIMaterial2> src; // [rsp+10h] [rbp-40h] BYREF

  CBeam::Spawn(this, pKeyValues);
  if ( CEntityKeyValues::HasValue(pKeyValues, -123496307) )
  {
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount > 0 )
    {
      m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
      for ( i = 0; m_nCount > i; ++i )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = pKeyValues->m_keyHashes.m_pElements;
          if ( m_pElements[i] == -123496307 )
          {
LABEL_56:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v33 = pKeyValues->m_keyValues.m_pElements;
            else
              v33 = 0;
            p_m_value = &v33[i].m_value;
            goto LABEL_74;
          }
        }
        else if ( *(4 * i) == -123496307 )
        {
          goto LABEL_56;
        }
      }
    }
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
LABEL_74:
    m_type = p_m_value->m_type;
    switch ( m_type )
    {
      case 0:
        m_float = 0.0;
        goto LABEL_89;
      case 1:
        m_float = p_m_value->m_float;
        goto LABEL_95;
      case 5:
        m_float = p_m_value->m_int;
        goto LABEL_95;
      case 6:
        m_float = p_m_value->m_char;
        goto LABEL_95;
      case 26:
        m_float = p_m_value->m_uint64;
        goto LABEL_95;
      case 30:
        v56.m128d_f64[0] = strtod(p_m_value->m_pszString, 0);
        m_float = _mm_movedup_pd(v56).m128d_f64[0];
        goto LABEL_95;
      case 33:
        m_uint64 = p_m_value->m_uint64;
        if ( p_m_value->m_int64 >= 0 )
          goto LABEL_123;
        v57 = p_m_value->m_uint64 & 1 | (p_m_value->m_uint64 >> 1);
        m_float = v57 + v57;
        goto LABEL_95;
      case 34:
        m_float = p_m_value->m_float64;
        goto LABEL_95;
      case 37:
        LODWORD(m_uint64) = p_m_value->m_int;
LABEL_123:
        m_float = m_uint64;
LABEL_95:
        v50 = 102.3;
        if ( m_float <= 102.3 )
          goto LABEL_89;
        goto LABEL_90;
      default:
        v59 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to float now\n", v59);
        m_float = 0.0;
LABEL_89:
        v50 = m_float;
LABEL_90:
        if ( v50 != this->m_fWidth.m_Value )
        {
          brightnessd = LODWORD(v50);
          (*(this->_vptr_IHandleEntity + 22))(this, 1252, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          LODWORD(this->m_fWidth.m_Value) = brightnessd;
        }
        break;
    }
  }
  if ( !CEntityKeyValues::HasValue(pKeyValues, 428981940) )
    goto LABEL_3;
  v23 = pKeyValues->m_keyHashes.m_nCount;
  if ( v23 <= 0 )
  {
LABEL_75:
    v28 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_76;
  }
  v24 = pKeyValues->m_keyHashes.m_nAllocated;
  v25 = 0;
  while ( v24 == 0 )
  {
    if ( *(4 * v25) == 428981940 )
      goto LABEL_45;
LABEL_42:
    if ( v23 <= ++v25 )
      goto LABEL_75;
  }
  v26 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v24 > 9 )
    v26 = pKeyValues->m_keyHashes.m_pElements;
  if ( v26[v25] != 428981940 )
    goto LABEL_42;
LABEL_45:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v27 = pKeyValues->m_keyValues.m_pElements;
  else
    v27 = 0;
  v28 = &v27[v25].m_value;
LABEL_76:
  v45 = v28->m_type;
  switch ( v45 )
  {
    case 0:
      m_int = 0.0;
      break;
    case 1:
      LODWORD(v51) = v28->m_float;
      goto LABEL_93;
    case 5:
      m_int = v28->m_int;
      break;
    case 6:
      m_int = v28->m_char;
      break;
    case 26:
      if ( v28->m_int64 > 0x7FFFFFFF )
      {
        m_int = 2147483600.0;
      }
      else
      {
        LODWORD(v54) = 0x80000000;
        if ( v28->m_uint64 >= 0xFFFFFFFF80000000LL )
          v54 = v28->m_uint64;
        m_int = v54;
      }
      break;
    case 30:
      m_int = strtol(v28->m_pszString, 0, 10);
      break;
    case 33:
      v51 = v28->m_uint64;
      m_int = 2147483600.0;
      if ( v28->m_uint64 <= 0x7FFFFFFE )
        goto LABEL_93;
      break;
    case 34:
      m_int = v28->m_float64;
      break;
    case 37:
      LODWORD(v51) = v28->m_int;
      m_int = 2147483600.0;
      if ( v28->m_int <= 0x7FFFFFFEu )
LABEL_93:
        m_int = v51;
      break;
    default:
      v58 = VariantFieldTypeName(v45);
      Warning("No conversion from %s to int now\n", v58);
      m_int = 0.0;
      break;
  }
  if ( m_int != this->m_fAmplitude.m_Value )
  {
    brightnessc = LODWORD(m_int);
    (*(this->_vptr_IHandleEntity + 22))(this, 1268, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    LODWORD(this->m_fAmplitude.m_Value) = brightnessc;
  }
LABEL_3:
  if ( !CEntityKeyValues::HasValue(pKeyValues, -1084337173) )
    goto LABEL_4;
  v17 = pKeyValues->m_keyHashes.m_nCount;
  if ( v17 <= 0 )
  {
LABEL_77:
    v22 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_78;
  }
  v18 = pKeyValues->m_keyHashes.m_nAllocated;
  v19 = 0;
  while ( 2 )
  {
    if ( v18 == 0 )
    {
      if ( *(4 * v19) == -1084337173 )
        break;
      goto LABEL_31;
    }
    v20 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v18 > 9 )
      v20 = pKeyValues->m_keyHashes.m_pElements;
    if ( v20[v19] != -1084337173 )
    {
LABEL_31:
      if ( v17 <= ++v19 )
        goto LABEL_77;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v21 = pKeyValues->m_keyValues.m_pElements;
  else
    v21 = 0;
  v22 = &v21[v19].m_value;
LABEL_78:
  v46 = v22->m_type;
  switch ( v46 )
  {
    case 0:
      m_char = 0.0;
      break;
    case 1:
      LODWORD(v52) = v22->m_float;
      goto LABEL_98;
    case 5:
      m_char = v22->m_int;
      break;
    case 6:
      m_char = v22->m_char;
      break;
    case 26:
      if ( v22->m_int64 > 0x7FFFFFFF )
      {
        m_char = 2147483600.0;
      }
      else
      {
        LODWORD(v53) = 0x80000000;
        if ( v22->m_uint64 >= 0xFFFFFFFF80000000LL )
          v53 = v22->m_uint64;
        m_char = v53;
      }
      break;
    case 30:
      m_char = strtol(v22->m_pszString, 0, 10);
      break;
    case 33:
      v52 = v22->m_uint64;
      m_char = 2147483600.0;
      if ( v22->m_uint64 <= 0x7FFFFFFE )
        goto LABEL_98;
      break;
    case 34:
      m_char = v22->m_float64;
      break;
    case 37:
      LODWORD(v52) = v22->m_int;
      m_char = 2147483600.0;
      if ( v22->m_int <= 0x7FFFFFFEu )
LABEL_98:
        m_char = v52;
      break;
    default:
      v60 = VariantFieldTypeName(v46);
      Warning("No conversion from %s to int now\n", v60);
      m_char = 0.0;
      break;
  }
  if ( m_char != this->m_fSpeed.m_Value )
  {
    brightnessb = LODWORD(m_char);
    (*(this->_vptr_IHandleEntity + 22))(this, 1276, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    LODWORD(this->m_fSpeed.m_Value) = brightnessb;
  }
LABEL_4:
  ModelNameFromKeyValues = GetModelNameFromKeyValues(pKeyValues, "");
  if ( CEntityKeyValues::HasValue(pKeyValues, 1622107784) )
  {
    v11 = pKeyValues->m_keyHashes.m_nCount;
    if ( v11 > 0 )
    {
      v12 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( j = 0; v11 > j; ++j )
      {
        if ( v12 != 0 )
        {
          v14 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v12 > 9 )
            v14 = pKeyValues->m_keyHashes.m_pElements;
          if ( v14[j] == 1622107784 )
          {
LABEL_23:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v15 = pKeyValues->m_keyValues.m_pElements;
            else
              v15 = 0;
            v16 = &v15[j].m_value;
            goto LABEL_80;
          }
        }
        else if ( *(4 * j) == 1622107784 )
        {
          goto LABEL_23;
        }
      }
    }
    v16 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_80:
    ModelNameFromKeyValues = "";
    if ( v16->m_type == 30 )
      ModelNameFromKeyValues = v16->m_uint64;
  }
  v5 = (*(*g_pResourceSystem + 256LL))(g_pResourceSystem, ModelNameFromKeyValues, 1952542070, 1);
  src.m_pBinding = 0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&src, v5);
  if ( this->m_hBaseMaterial.m_Value.m_pBinding != src.m_pBinding )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_hBaseMaterial.m_Value, &src);
  }
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&src);
  CBaseEntity::ThinkSet(this, CEnvLaser::StrikeThink, 0.0, 0, 0);
  m_Value_low = LODWORD(this->m_fWidth.m_Value);
  v7 = _mm_cmplt_ss(0x42CC999Au, m_Value_low);
  LODWORD(v8) = _mm_andnot_ps(v7, m_Value_low).m128_u32[0] | v7.m128_i32[0] & 0x42CC999A;
  if ( v8 != this->m_fEndWidth.m_Value )
  {
    brightnessa = LODWORD(v8);
    (*(this->_vptr_IHandleEntity + 22))(this, 1256, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    LODWORD(this->m_fEndWidth.m_Value) = brightnessa;
  }
  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  v10 = CBaseEntity::GetLocalOrigin(this);
  CBeam::PointsInit(this, v10, LocalOrigin);
  if ( this->m_pSprite != 0 || this->m_iszSpriteName.u.m_Id == 0 )
  {
    this->m_pSprite = 0;
  }
  else
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    m_pAsString = "";
    if ( this->m_iszSpriteName.u.m_Id != 0 )
      m_pAsString = this->m_iszSpriteName.u.m_pAsString;
    v37 = CSprite::SpriteCreate(m_pAsString, AbsOrigin, 1);
    this->m_pSprite = v37;
    if ( v37 != 0 )
    {
      MoveParent = CBaseEntity::GetMoveParent(this);
      CBaseEntity::SetParent(this->m_pSprite, MoveParent, 0, 0);
      m_pSprite = this->m_pSprite;
      v40 = this->m_clrRender.m_Value._color[0];
      m_Value = this->m_nRenderFX.m_Value;
      brightness = this->m_clrRender.m_Value._color[3];
      v62 = this->m_clrRender.m_Value._color[2];
      v61 = this->m_clrRender.m_Value._color[1];
      CBaseModelEntity::SetRenderMode(m_pSprite, RenderMode_t::kRenderGlow);
      v43 = m_pSprite->m_clrRender.m_Value._color[3];
      if ( v40 != m_pSprite->m_clrRender.m_Value._color[0] )
      {
        (*(m_pSprite->_vptr_IHandleEntity + 22))(m_pSprite, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        m_pSprite->m_clrRender.m_Value._color[0] = v40;
      }
      if ( v61 != m_pSprite->m_clrRender.m_Value._color[1] )
      {
        (*(m_pSprite->_vptr_IHandleEntity + 22))(m_pSprite, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        m_pSprite->m_clrRender.m_Value._color[1] = v61;
      }
      if ( v62 != m_pSprite->m_clrRender.m_Value._color[2] )
      {
        (*(m_pSprite->_vptr_IHandleEntity + 22))(m_pSprite, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        m_pSprite->m_clrRender.m_Value._color[2] = v62;
      }
      if ( v43 != m_pSprite->m_clrRender.m_Value._color[3] )
      {
        (*(m_pSprite->_vptr_IHandleEntity + 22))(m_pSprite, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        m_pSprite->m_clrRender.m_Value._color[3] = v43;
      }
      CSprite::SetBrightness(m_pSprite, brightness, v42);
      if ( m_Value != m_pSprite->m_nRenderFX.m_Value )
      {
        (*(m_pSprite->_vptr_IHandleEntity + 22))(m_pSprite, 814, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        m_pSprite->m_nRenderFX.m_Value = m_Value;
      }
    }
  }
  if ( this->m_pEntity->m_name.u.m_Id != 0 && (this->m_spawnflags.m_Value & 1) == 0 )
    CEnvLaser::TurnOff(this);
  else
    CEnvLaser::TurnOn(this);
}


// CEnvLaser::IsOn  (line 120, @0x00000000021f8df0, libserver.so)
int __fastcall CEnvLaser::IsOn(CEnvLaser *const this)
{
  return ((this->m_fEffects.m_Value >> 5) ^ 1) & 1;
}


// CEnvLaser::InputTurnOn  (line 131, @0x00000000021f9280, libserver.so)  // inlines: IsOn
// calls: CEnvLaser::TurnOn
void __fastcall CEnvLaser::InputTurnOn(CEnvLaser *const this, inputdata_t *const inputdata)
{
  if ( (this->m_fEffects.m_Value & 0x20) != 0 )
    CEnvLaser::TurnOn(this);
}


// CEnvLaser::InputTurnOff  (line 143, @0x00000000021f8e70, libserver.so)  // inlines: IsOn
// calls: CEnvLaser::TurnOff
void __fastcall CEnvLaser::InputTurnOff(CEnvLaser *const this, inputdata_t *const inputdata)
{
  if ( (this->m_fEffects.m_Value & 0x20) == 0 )
    CEnvLaser::TurnOff(this);
}


// CEnvLaser::InputToggle  (line 155, @0x00000000021f92a0, libserver.so)  // inlines: IsOn
// calls: CEnvLaser::TurnOff, CEnvLaser::TurnOn
void __fastcall CEnvLaser::InputToggle(CEnvLaser *const this, inputdata_t *const inputdata)
{
  if ( (this->m_fEffects.m_Value & 0x20) != 0 )
    CEnvLaser::TurnOn(this);
  else
    CEnvLaser::TurnOff(this);
}


// CEnvLaser::TurnOff  (line 171, @0x00000000021f8e10, libserver.so)
// calls: CBaseEntity::AddEffects, CSprite::TurnOff, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet
// callers: CEnvLaser::InputTurnOff, CEnvLaser::InputToggle, CEnvLaser::Spawn
void __fastcall CEnvLaser::TurnOff(CEnvLaser *const this)
{
  double v2; // xmm1_8
  CSprite *m_pSprite; // rdi

  CBaseEntity::AddEffects(this, 32);
  m_pSprite = this->m_pSprite;
  if ( m_pSprite != 0 )
    CSprite::TurnOff(m_pSprite);
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v2, 0);
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
}


// CEnvLaser::TurnOn  (line 185, @0x00000000021f91d0, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects, curtime
// calls: CBaseEntity::DispatchUpdateTransmitState, CSprite::TurnOn, CBaseEntity::ThinkSet, CEnvLaser::StrikeThink
// callers: CEnvLaser::InputTurnOn, CEnvLaser::InputToggle, CEnvLaser::Spawn
// globals: CEnvLaser::StrikeThink(void)
void __fastcall CEnvLaser::TurnOn(CEnvLaser *const this)
{
  CSprite *m_pSprite; // rdi
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(this);
  m_pSprite = this->m_pSprite;
  if ( m_pSprite != 0 )
    CSprite::TurnOn(m_pSprite);
  m_flCurrentTime = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  this->m_flFireTime = m_flCurrentTime;
  CBaseEntity::ThinkSet(this, CEnvLaser::StrikeThink, 0.0, 0, 0);
  CEnvLaser::StrikeThink(this);
}


// CEnvLaser::FireAtPoint  (line 206, @0x00000000021f8e90, libserver.so)  // inlines: curtime
// calls: CBeam::SetAbsEndPos, UTIL_SetOrigin, CBeam::BeamDamage, CBeam::GetAbsStartPos, CBeam::DoSparks
// callers: CEnvLaser::StrikeThink
void __fastcall CEnvLaser::FireAtPoint(CEnvLaser *const this, trace_t *const tr)
{
  Vector *p_endpos; // r13
  double v5; // xmm0_8
  CSprite *m_pSprite; // rdi
  double m_flCurrentTime; // xmm1_8
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const Vector *AbsStartPos; // rax

  p_endpos = &tr->endpos;
  CBeam::SetAbsEndPos(this, &tr->endpos);
  m_pSprite = this->m_pSprite;
  if ( m_pSprite != 0 )
    UTIL_SetOrigin(m_pSprite, p_endpos, 0);
  m_flCurrentTime = 0.0;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, v5, 0.0);
    }
    m_flCurrentTime = v8->m_flCurrentTime;
  }
  if ( m_flCurrentTime >= this->m_flFireTime + 0.1 )
  {
    CBeam::BeamDamage(this, tr);
    AbsStartPos = CBeam::GetAbsStartPos(this);
    CBeam::DoSparks(this, AbsStartPos, p_endpos);
  }
}


// CEnvLaser::StrikeThink  (line 226, @0x00000000021f8f60, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, String, ToCStr, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, curtime, operator=
// calls: CBeam::RandomTargetname, CBeam::GetAbsEndPos, CBaseEntity::GetAbsOrigin, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CEnvLaser::FireAtPoint, CBaseEntity::SetNextThink
// callers: CEnvLaser::TurnOn
void __fastcall CEnvLaser::StrikeThink(CEnvLaser *const this)
{
  const char *m_pAsString; // rsi
  CBaseEntity *v3; // r12
  const Vector *AbsEndPos; // rax
  vec_t x; // xmm1_4
  vec_t y; // xmm3_4
  vec_t z; // xmm2_4
  const Vector *AbsOrigin; // rax
  const Vector *v9; // rax
  double v10; // xmm1_8
  double v11; // xmm0_8
  CGlobalVars *v12; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v14; // [rsp+4h] [rbp-16Ch]
  float v15; // [rsp+8h] [rbp-168h]
  float v16; // [rsp+Ch] [rbp-164h]
  CTraceFilterSimple v17; // [rsp+10h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+50h] [rbp-120h] BYREF
  trace_t tr; // [rsp+A0h] [rbp-D0h] BYREF

  m_pAsString = "";
  if ( this->m_iszLaserTarget.u.m_Id != 0 )
    m_pAsString = this->m_iszLaserTarget.u.m_pAsString;
  v3 = CBeam::RandomTargetname(this, m_pAsString);
  AbsEndPos = CBeam::GetAbsEndPos(this);
  x = AbsEndPos->x;
  y = AbsEndPos->y;
  z = AbsEndPos->z;
  if ( v3 != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    x = AbsOrigin->x;
    y = AbsOrigin->y;
    z = AbsOrigin->z;
  }
  v14 = z;
  v15 = y;
  v16 = x;
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  v9 = CBaseEntity::GetAbsOrigin(this);
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_flRadius = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Delta.x = v16 - v9->x;
  ray.m_Delta.y = v15 - v9->y;
  ray.m_Delta.z = v14 - v9->z;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Start.Vector = *v9;
  CTraceFilterSimple::CTraceFilterSimple(&v17, 0, 4, 0);
  v17.m_attr.m_nInteractsWith |= 0x87001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v17, &tr);
  CEnvLaser::FireAtPoint(this, &tr);
  v11 = 0.0;
  v12 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v11 = LODWORD(v12->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v11, v10, 0);
}


