
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameNetworkFieldSerializerBase<2, 1>::GetDataSize  (line 42, @0x0000000001eeb050, libserver.so)
size_t __fastcall CGameNetworkFieldSerializerBase<2,1>::GetDataSize(const NetworkFieldInfo_t *const info)
{
  return 0;
}


// CGameNetworkFieldSerializerBase<3, 3>::GetDataSize  (line 42, @0x0000000001eeb090, libserver.so)
size_t __fastcall CGameNetworkFieldSerializerBase<3,3>::GetDataSize(const NetworkFieldInfo_t *const info)
{
  return 0;
}


// CGameNetworkFieldSerializerBase<1, 1>::GetDataSize  (line 42, @0x0000000001eeb0d0, libserver.so)
size_t __fastcall CGameNetworkFieldSerializerBase<1,1>::GetDataSize(const NetworkFieldInfo_t *const info)
{
  return 0;
}


// CGameNetworkFieldSerializerBase<3, 1>::GetDataSize  (line 42, @0x0000000001eeb110, libserver.so)
size_t __fastcall CGameNetworkFieldSerializerBase<3,1>::GetDataSize(const NetworkFieldInfo_t *const info)
{
  return 0;
}


// CGameNetworkFieldSerializerBase<2, 1>::ParseData  (line 47, @0x0000000001eeb060, libserver.so)
bool __fastcall CGameNetworkFieldSerializerBase<2,1>::ParseData(
        const FieldMetaInfo_t *const metaInfo,
        const CSchemaClassBindingBase *pBinding,
        const NetworkFieldInfo_t *const info,
        void *pData)
{
  return 1;
}


// CGameNetworkFieldSerializerBase<3, 3>::ParseData  (line 47, @0x0000000001eeb0a0, libserver.so)
bool __fastcall CGameNetworkFieldSerializerBase<3,3>::ParseData(
        const FieldMetaInfo_t *const metaInfo,
        const CSchemaClassBindingBase *pBinding,
        const NetworkFieldInfo_t *const info,
        void *pData)
{
  return 1;
}


// CGameNetworkFieldSerializerBase<1, 1>::ParseData  (line 47, @0x0000000001eeb0e0, libserver.so)
bool __fastcall CGameNetworkFieldSerializerBase<1,1>::ParseData(
        const FieldMetaInfo_t *const metaInfo,
        const CSchemaClassBindingBase *pBinding,
        const NetworkFieldInfo_t *const info,
        void *pData)
{
  return 1;
}


// CGameNetworkFieldSerializerBase<3, 1>::ParseData  (line 47, @0x0000000001eeb120, libserver.so)
bool __fastcall CGameNetworkFieldSerializerBase<3,1>::ParseData(
        const FieldMetaInfo_t *const metaInfo,
        const CSchemaClassBindingBase *pBinding,
        const NetworkFieldInfo_t *const info,
        void *pData)
{
  return 1;
}


// CGameNetworkFieldSerializerBase<2, 1>::GetEntityReportDescString  (line 52, @0x0000000001eeb070, libserver.so)
bool __fastcall CGameNetworkFieldSerializerBase<2,1>::GetEntityReportDescString(
        const NetworkableData_t *pData,
        CUtlString *const desc)
{
  return 0;
}


// CGameNetworkFieldSerializerBase<3, 3>::GetEntityReportDescString  (line 52, @0x0000000001eeb0b0, libserver.so)
bool __fastcall CGameNetworkFieldSerializerBase<3,3>::GetEntityReportDescString(
        const NetworkableData_t *pData,
        CUtlString *const desc)
{
  return 0;
}


// CGameNetworkFieldSerializerBase<1, 1>::GetEntityReportDescString  (line 52, @0x0000000001eeb0f0, libserver.so)
bool __fastcall CGameNetworkFieldSerializerBase<1,1>::GetEntityReportDescString(
        const NetworkableData_t *pData,
        CUtlString *const desc)
{
  return 0;
}


// CGameNetworkFieldSerializerBase<3, 1>::GetEntityReportDescString  (line 52, @0x0000000001eeb130, libserver.so)
bool __fastcall CGameNetworkFieldSerializerBase<3,1>::GetEntityReportDescString(
        const NetworkableData_t *pData,
        CUtlString *const desc)
{
  return 0;
}


// CGameNetworkFieldSerializerBase<2, 1>::GetSerializerName  (line 67, @0x0000000001eeb080, libserver.so)
const char *__cdecl CGameNetworkFieldSerializerBase<2,1>::GetSerializerName()
{
  return "";
}


// CGameNetworkFieldSerializerBase<3, 3>::GetSerializerName  (line 67, @0x0000000001eeb0c0, libserver.so)
const char *__cdecl CGameNetworkFieldSerializerBase<3,3>::GetSerializerName()
{
  return "";
}


// CGameNetworkFieldSerializerBase<1, 1>::GetSerializerName  (line 67, @0x0000000001eeb100, libserver.so)
const char *__cdecl CGameNetworkFieldSerializerBase<1,1>::GetSerializerName()
{
  return "";
}


// CGameNetworkFieldSerializerBase<3, 1>::GetSerializerName  (line 67, @0x0000000001eeb140, libserver.so)
const char *__cdecl CGameNetworkFieldSerializerBase<3,1>::GetSerializerName()
{
  return "";
}


// CValidatingNetworkFieldSerializer<CIntegerWithMinusOneSerializer>::ValidatingUnserialize  (line 76, @0x0000000001eecdc0, libserver.so)  // inlines: Unserialize
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CIntegerWithMinusOneSerializer>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  NetworkFieldResult_t result; // eax

  result = NetworkFieldResult_t::NET_FIELD_FAILED;
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_UINT64 && pIn->m_nNumComponents == 1 )
  {
    *info->m_pFieldData = pIn->m_iVal64 - 1;
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  return result;
}


// CValidatingNetworkFieldSerializer<CCropFlagsToPlayerFlagBitsLength>::ValidatingUnserialize  (line 76, @0x0000000001eecdf0, libserver.so)  // inlines: Unserialize
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CCropFlagsToPlayerFlagBitsLength>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  NetworkFieldResult_t result; // eax

  result = NetworkFieldResult_t::NET_FIELD_FAILED;
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_UINT64 && pIn->m_nNumComponents == 1 )
  {
    *info->m_pFieldData = pIn->m_iVal64;
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  return result;
}


// CValidatingNetworkFieldSerializer<CFuncRotatingSimulationTimeSerializer>::ValidatingUnserialize  (line 76, @0x0000000001eece20, libserver.so)  // inlines: Unserialize
// calls: CFloatToTickSerializerHelper::Unserialize
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CFuncRotatingSimulationTimeSerializer>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_UINT64 && pIn->m_nNumComponents == 1 )
    return CFloatToTickSerializerHelper::Unserialize(info->m_pFieldData, info->m_pStructBase, pIn);
  else
    return NetworkFieldResult_t::NET_FIELD_FAILED;
}


// CValidatingNetworkFieldSerializer<CSimulationTimeSerializer>::ValidatingUnserialize  (line 76, @0x0000000001eece50, libserver.so)  // inlines: Unserialize
// calls: CFloatToTickSerializerHelper::Unserialize
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CSimulationTimeSerializer>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_UINT64 && pIn->m_nNumComponents == 1 )
    return CFloatToTickSerializerHelper::Unserialize(info->m_pFieldData, info->m_pStructBase, pIn);
  else
    return NetworkFieldResult_t::NET_FIELD_FAILED;
}


// CValidatingNetworkFieldSerializer<CAnimTimeSerializer>::ValidatingUnserialize  (line 76, @0x0000000001eece80, libserver.so)  // inlines: Unserialize
// calls: CFloatToTickSerializerHelper::Unserialize
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CAnimTimeSerializer>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_UINT64 && pIn->m_nNumComponents == 1 )
    return CFloatToTickSerializerHelper::Unserialize(info->m_pFieldData, info->m_pStructBase, pIn);
  else
    return NetworkFieldResult_t::NET_FIELD_FAILED;
}


// CValidatingNetworkFieldSerializer<CStepSimulationFuncRotatingAnglesSerializer>::ValidatingUnserialize  (line 76, @0x0000000001eecfa0, libserver.so)  // inlines: Unserialize, operator=
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CStepSimulationFuncRotatingAnglesSerializer>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  NetworkFieldResult_t result; // eax
  _DWORD *m_pFieldData; // rax

  result = NetworkFieldResult_t::NET_FIELD_FAILED;
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_FLOAT32 && pIn->m_nNumComponents == 3 )
  {
    m_pFieldData = info->m_pFieldData;
    *m_pFieldData = pIn->m_iVal64;
    m_pFieldData[2] = LODWORD(pIn->m_flVal32[2]);
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  return result;
}


// CValidatingNetworkFieldSerializer<CClampHealth>::ValidatingUnserialize  (line 76, @0x0000000001eecfe0, libserver.so)  // inlines: Unserialize
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CClampHealth>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  NetworkFieldResult_t result; // eax

  result = NetworkFieldResult_t::NET_FIELD_FAILED;
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_INT64 && pIn->m_nNumComponents == 1 )
  {
    *info->m_pFieldData = pIn->m_iVal64;
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  return result;
}


// CValidatingNetworkFieldSerializer<CNormalizedAngle>::ValidatingUnserialize  (line 76, @0x0000000001eed010, libserver.so)  // inlines: Get<float>, Unserialize
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CNormalizedAngle>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  NetworkFieldResult_t result; // eax

  result = NetworkFieldResult_t::NET_FIELD_FAILED;
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_FLOAT32 && pIn->m_nNumComponents == 1 )
  {
    *info->m_pFieldData = pIn->m_flVal32[0];
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  return result;
}


// CValidatingNetworkFieldSerializer<CGameSceneNodeStepSimulationAnglesSerializer>::ValidatingUnserialize  (line 76, @0x00000000020f8ac0, libserver.so)  // inlines: Unserialize, operator=
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CGameSceneNodeStepSimulationAnglesSerializer>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  NetworkFieldResult_t result; // eax
  _DWORD *m_pFieldData; // rax

  result = NetworkFieldResult_t::NET_FIELD_FAILED;
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_FLOAT32 && pIn->m_nNumComponents == 3 )
  {
    m_pFieldData = info->m_pFieldData;
    *m_pFieldData = pIn->m_iVal64;
    m_pFieldData[2] = LODWORD(pIn->m_flVal32[2]);
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  return result;
}


// CValidatingNetworkFieldSerializer<CGameSceneNodeOriginSerializer<2> >::ValidatingUnserialize  (line 76, @0x00000000020f8b00, libserver.so)  // inlines: GetEncoder, GetQuantizedFloatEncoderByIndex, Set, Unserialize
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CGameSceneNodeOriginSerializer<2>>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  NetworkFieldResult_t result; // eax
  float *m_pStructBase; // rcx
  __int64 v5; // rax
  float v6; // xmm0_4

  result = NetworkFieldResult_t::NET_FIELD_FAILED;
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_FLOAT32 && pIn->m_nNumComponents == 1 )
  {
    m_pStructBase = info->m_pStructBase;
    v5 = g_pQuantizedFloatEncoders + 32LL * *(m_pStructBase + 20);
    v6 = *(v5 + 12);
    if ( pIn->m_flVal32[0] <= v6 )
      v6 = fmaxf(*(v5 + 8), pIn->m_flVal32[0]);
    m_pStructBase[9] = v6;
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  return result;
}


// CValidatingNetworkFieldSerializer<CGameSceneNodeOriginSerializer<1> >::ValidatingUnserialize  (line 76, @0x00000000020f8b50, libserver.so)  // inlines: GetEncoder, GetQuantizedFloatEncoderByIndex, Set, Unserialize
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CGameSceneNodeOriginSerializer<1>>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  NetworkFieldResult_t result; // eax
  float *m_pStructBase; // rcx
  __int64 v5; // rax
  float v6; // xmm0_4

  result = NetworkFieldResult_t::NET_FIELD_FAILED;
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_FLOAT32 && pIn->m_nNumComponents == 1 )
  {
    m_pStructBase = info->m_pStructBase;
    v5 = g_pQuantizedFloatEncoders + 32LL * *(m_pStructBase + 16);
    v6 = *(v5 + 12);
    if ( pIn->m_flVal32[0] <= v6 )
      v6 = fmaxf(*(v5 + 8), pIn->m_flVal32[0]);
    m_pStructBase[7] = v6;
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  return result;
}


// CValidatingNetworkFieldSerializer<CGameSceneNodeOriginSerializer<0> >::ValidatingUnserialize  (line 76, @0x00000000020f8ba0, libserver.so)  // inlines: GetEncoder, GetQuantizedFloatEncoderByIndex, Set, Unserialize
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CGameSceneNodeOriginSerializer<0>>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  NetworkFieldResult_t result; // eax
  float *m_pStructBase; // rcx
  __int64 v5; // rax
  float v6; // xmm0_4

  result = NetworkFieldResult_t::NET_FIELD_FAILED;
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_FLOAT32 && pIn->m_nNumComponents == 1 )
  {
    m_pStructBase = info->m_pStructBase;
    v5 = g_pQuantizedFloatEncoders + 32LL * *(m_pStructBase + 12);
    v6 = *(v5 + 12);
    if ( pIn->m_flVal32[0] <= v6 )
      v6 = fmaxf(*(v5 + 8), pIn->m_flVal32[0]);
    m_pStructBase[5] = v6;
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  return result;
}


// CValidatingNetworkFieldSerializer<CGameSceneNodeSerializer>::ValidatingUnserialize  (line 76, @0x00000000020fdd50, libserver.so)  // inlines: CEntityHandle, FromNetworkableInt, GetForModify, Init, NetworkStateChanged, Set, Unserialize, operator=<CEntityHandle>
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CGameSceneNodeSerializer>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  NetworkFieldResult_t result; // eax
  int v4; // r13d
  int64 m_iVal64; // r12
  _DWORD *m_pFieldData; // rbx

  result = NetworkFieldResult_t::NET_FIELD_FAILED;
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_UINT64 && pIn->m_nNumComponents == 1 )
  {
    v4 = -1;
    m_iVal64 = pIn->m_iVal64;
    m_pFieldData = info->m_pFieldData;
    if ( pIn->m_iVal64 != 0xFFFFFF )
      v4 = (2 * m_iVal64) & 0x1FF8000 | m_iVal64 & 0x3FFF;
    if ( m_pFieldData[2] != v4 )
    {
      (*(*m_pFieldData + 16LL))(m_pFieldData, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      m_pFieldData[2] = v4;
    }
    (*(*m_pFieldData + 16LL))(m_pFieldData, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_pFieldData[3] = HIDWORD(m_iVal64);
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  return result;
}


// CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<2> >::ValidatingUnserialize  (line 76, @0x000000000210cd60, libserver.so)  // inlines: CoordFromCell, NetworkStateChanged, SetCell, SetElement<float>, Unserialize
// calls: CNetworkOriginCellCoordQuantizedVector::LatchComponent, CNetworkOriginCellCoordQuantizedVector::NetworkComponentChanged
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<2>>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  NetworkFieldResult_t result; // eax
  CNetworkOriginCellCoordQuantizedVector *m_pStructBase; // rbx
  int m_iVal64; // r12d
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  float v7; // xmm0_4

  result = NetworkFieldResult_t::NET_FIELD_FAILED;
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_INT64 && pIn->m_nNumComponents == 1 )
  {
    m_pStructBase = info->m_pStructBase;
    m_iVal64 = pIn->m_iVal64;
    if ( pIn->m_iVal64 != m_pStructBase->m_cellZ )
    {
      m_pStateChanged = m_pStructBase->m_pStateChanged;
      m_pStructBase->m_cellZ = pIn->m_iVal64;
      if ( m_pStateChanged != 0 )
        m_pStateChanged->NetworkStateChanged(m_pStructBase,
          16,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
    }
    v7 = ((m_iVal64 << 8) - 0x4000) + m_pStructBase->m_vecZ.m_Value;
    if ( v7 != m_pStructBase->m_Value.z )
    {
      m_pStructBase->m_Value.z = v7;
      CNetworkOriginCellCoordQuantizedVector::LatchComponent(m_pStructBase, 2);
      CNetworkOriginCellCoordQuantizedVector::NetworkComponentChanged(m_pStructBase, 2);
    }
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  return result;
}


// CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<1> >::ValidatingUnserialize  (line 76, @0x000000000210ce10, libserver.so)  // inlines: CoordFromCell, NetworkStateChanged, SetCell, SetElement<float>, Unserialize
// calls: CNetworkOriginCellCoordQuantizedVector::LatchComponent, CNetworkOriginCellCoordQuantizedVector::NetworkComponentChanged
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<1>>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  NetworkFieldResult_t result; // eax
  CNetworkOriginCellCoordQuantizedVector *m_pStructBase; // rbx
  int m_iVal64; // r12d
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  float v7; // xmm0_4

  result = NetworkFieldResult_t::NET_FIELD_FAILED;
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_INT64 && pIn->m_nNumComponents == 1 )
  {
    m_pStructBase = info->m_pStructBase;
    m_iVal64 = pIn->m_iVal64;
    if ( pIn->m_iVal64 != m_pStructBase->m_cellY )
    {
      m_pStateChanged = m_pStructBase->m_pStateChanged;
      m_pStructBase->m_cellY = pIn->m_iVal64;
      if ( m_pStateChanged != 0 )
        m_pStateChanged->NetworkStateChanged(m_pStructBase,
          14,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
    }
    v7 = ((m_iVal64 << 8) - 0x4000) + m_pStructBase->m_vecY.m_Value;
    if ( v7 != m_pStructBase->m_Value.y )
    {
      m_pStructBase->m_Value.y = v7;
      CNetworkOriginCellCoordQuantizedVector::LatchComponent(m_pStructBase, 1);
      CNetworkOriginCellCoordQuantizedVector::NetworkComponentChanged(m_pStructBase, 1);
    }
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  return result;
}


// CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<0> >::ValidatingUnserialize  (line 76, @0x000000000210cec0, libserver.so)  // inlines: CoordFromCell, NetworkStateChanged, SetCell, SetElement<float>, Unserialize
// calls: CNetworkOriginCellCoordQuantizedVector::LatchComponent, CNetworkOriginCellCoordQuantizedVector::NetworkComponentChanged
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<0>>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  NetworkFieldResult_t result; // eax
  CNetworkOriginCellCoordQuantizedVector *m_pStructBase; // rbx
  int m_iVal64; // r12d
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  float v7; // xmm0_4

  result = NetworkFieldResult_t::NET_FIELD_FAILED;
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_INT64 && pIn->m_nNumComponents == 1 )
  {
    m_pStructBase = info->m_pStructBase;
    m_iVal64 = pIn->m_iVal64;
    if ( pIn->m_iVal64 != m_pStructBase->m_cellX )
    {
      m_pStateChanged = m_pStructBase->m_pStateChanged;
      m_pStructBase->m_cellX = pIn->m_iVal64;
      if ( m_pStateChanged != 0 )
        m_pStateChanged->NetworkStateChanged(m_pStructBase,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
    }
    v7 = ((m_iVal64 << 8) - 0x4000) + m_pStructBase->m_vecX.m_Value;
    if ( v7 != m_pStructBase->m_Value.x )
    {
      m_pStructBase->m_Value.x = v7;
      CNetworkOriginCellCoordQuantizedVector::LatchComponent(m_pStructBase, 0);
      CNetworkOriginCellCoordQuantizedVector::NetworkComponentChanged(m_pStructBase, 0);
    }
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  return result;
}


// CValidatingNetworkFieldSerializer<CGameSceneNodeStepSimulationOriginSerializer>::ValidatingUnserialize  (line 76, @0x000000000210d060, libserver.so)  // inlines: GetElement, NetworkComponentChanged, NetworkStateChanged, Set, Unserialize, operator=<Vector>, operator[]
// calls: CNetworkOriginCellCoordQuantizedVector::LatchComponent
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CGameSceneNodeStepSimulationOriginSerializer>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  NetworkFieldResult_t result; // eax
  CNetworkOriginCellCoordQuantizedVector *m_pFieldData; // r13
  __int64 i; // r14
  float v7; // xmm0_4
  CNetworkedQuantizedFloat *p_m_vecX; // rdx
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  uint16 *p_m_cellX; // rdx
  signed __int64 v11; // rdx

  result = NetworkFieldResult_t::NET_FIELD_FAILED;
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_FLOAT32 && pIn->m_nNumComponents == 3 )
  {
    m_pFieldData = info->m_pFieldData;
    for ( i = 0; i != 3; ++i )
    {
      v7 = pIn->m_flVal32[i];
      if ( v7 != *(&m_pFieldData->m_Value.x + i) )
      {
        *(&m_pFieldData->m_Value.x + i) = v7;
        CNetworkOriginCellCoordQuantizedVector::LatchComponent(m_pFieldData, i);
        p_m_vecX = &m_pFieldData->m_vecX;
        if ( i != 0 )
        {
          p_m_vecX = &m_pFieldData->m_vecY;
          if ( i != 1 )
            p_m_vecX = &m_pFieldData->m_vecZ;
        }
        m_pStateChanged = m_pFieldData->m_pStateChanged;
        if ( m_pStateChanged != 0 )
        {
          m_pStateChanged->NetworkStateChanged(m_pFieldData,
            p_m_vecX - m_pFieldData,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
          m_pStateChanged = m_pFieldData->m_pStateChanged;
        }
        p_m_cellX = &m_pFieldData->m_cellX;
        if ( i != 0 )
        {
          p_m_cellX = &m_pFieldData->m_cellY;
          if ( i != 1 )
            p_m_cellX = &m_pFieldData->m_cellZ;
        }
        v11 = p_m_cellX - m_pFieldData;
        if ( m_pStateChanged != 0 )
          m_pStateChanged->NetworkStateChanged(m_pFieldData,
            v11,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
      }
    }
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  return result;
}


// CValidatingNetworkFieldSerializer<CFishPos0>::ValidatingUnserialize  (line 76, @0x00000000022116f0, libserver.so)  // inlines: Unserialize, operator[]
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CFishPos0>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  NetworkFieldResult_t result; // eax

  result = NetworkFieldResult_t::NET_FIELD_FAILED;
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_FLOAT32 && pIn->m_nNumComponents == 1 )
  {
    *info->m_pFieldData = *(info->m_pStructBase + 317);
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  return result;
}


// CValidatingNetworkFieldSerializer<CFishPos2>::ValidatingUnserialize  (line 76, @0x0000000002211910, libserver.so)  // inlines: Unserialize, operator[]
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CFishPos2>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  NetworkFieldResult_t result; // eax

  result = NetworkFieldResult_t::NET_FIELD_FAILED;
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_FLOAT32 && pIn->m_nNumComponents == 1 )
  {
    *info->m_pFieldData = *(info->m_pStructBase + 319);
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  return result;
}


// CValidatingNetworkFieldSerializer<CFishPos1>::ValidatingUnserialize  (line 76, @0x0000000002211970, libserver.so)  // inlines: Unserialize, operator[]
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CFishPos1>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  NetworkFieldResult_t result; // eax

  result = NetworkFieldResult_t::NET_FIELD_FAILED;
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_FLOAT32 && pIn->m_nNumComponents == 1 )
  {
    *info->m_pFieldData = *(info->m_pStructBase + 318);
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  return result;
}


// CValidatingNetworkFieldSerializer<CEHandleSerializer>::ValidatingUnserialize  (line 76, @0x00000000030bf0e0, libserver.so)  // inlines: CEntityHandle, FromNetworkableInt, Init, Unserialize
NetworkFieldResult_t __fastcall CValidatingNetworkFieldSerializer<CEHandleSerializer>::ValidatingUnserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  NetworkFieldResult_t result; // eax
  int64 m_iVal64; // rdx
  _DWORD *m_pFieldData; // rcx
  __int64 v6; // [rsp-8h] [rbp-8h]

  result = NetworkFieldResult_t::NET_FIELD_FAILED;
  if ( pIn->m_nType == NetworkableDataType_t::NET_DATA_TYPE_UINT64 && pIn->m_nNumComponents == 1 )
  {
    m_iVal64 = pIn->m_iVal64;
    m_pFieldData = info->m_pFieldData;
    if ( m_iVal64 == 0xFFFFFF )
    {
      *(&v6 - 4) = -1;
    }
    else
    {
      *(&v6 - 8) = m_iVal64 & 0x3FFF | *(&v6 - 2) & 0x8000;
      *(&v6 - 4) = (2 * m_iVal64) & 0x1FF8000 | *(&v6 - 2) & 0x7FFF;
    }
    *m_pFieldData = *(&v6 - 4);
    return NetworkFieldResult_t::NET_FIELD_OK;
  }
  return result;
}


