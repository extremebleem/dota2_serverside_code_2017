// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gamescenenode.cpp:26
struct BoneMergeInfo_t {
	int m_nCount;  // +0x30

	BoneMergeInfo_t();

	// sizeof = 128
};

// src/game/shared/gamescenenode.cpp:285
class CGameSceneNodeSerializer : public CGameNetworkFieldSerializerBase<2, 1> {
public:

	NetworkFieldResult_t Serialize(const NetworkSerializerInfo_t &, int, NetworkableData_t *);
	NetworkFieldResult_t Unserialize(const NetworkUnserializerInfo_t &, int, const NetworkableData_t *);
	bool GetEntityReportDescString(const NetworkableData_t *, CUtlString &);
	const char * GetSerializerName();

	// sizeof = 1
};

// src/game/shared/gamescenenode.cpp:340
class CGameSceneNodeStepSimulationOriginSerializer : public CGameNetworkFieldSerializerBase<3, 3> {
public:

	NetworkFieldResult_t Serialize(const NetworkSerializerInfo_t &, int, NetworkableData_t *);
	NetworkFieldResult_t Unserialize(const NetworkUnserializerInfo_t &, int, const NetworkableData_t *);

	// sizeof = 1
};

// src/game/shared/gamescenenode.cpp:386
class CGameSceneNodeStepSimulationAnglesSerializer : public CGameNetworkFieldSerializerBase<3, 3> {
public:

	NetworkFieldResult_t Serialize(const NetworkSerializerInfo_t &, int, NetworkableData_t *);
	NetworkFieldResult_t Unserialize(const NetworkUnserializerInfo_t &, int, const NetworkableData_t *);

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameSceneNodeHandle::AddDatadescMetadataKeys  (line 59, @0x00000000020aea80, libserver.so)
void __fastcall CGameSceneNodeHandle::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CGameSceneNodeHandle::GetBaseMap  (line 59, @0x00000000020aea90, libserver.so)
datamap_t *__cdecl CGameSceneNodeHandle::GetBaseMap()
{
  return 0;
}


// DataMapInit<CGameSceneNodeHandle>  (line 59, @0x00000000020aeaa0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: __static_initialization_and_destruction_0
// strings: "CGameSceneNodeHandle"
// globals: `guard variable for'DataMapInit<CGameSceneNodeHandle>(CGameSceneNodeHandle *)::nameHolder, CGameSceneNodeHandle::m_DataMap, DataMapInit<CGameSceneNodeHandle>(CGameSceneNodeHandle *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CGameSceneNodeHandle>(CGameSceneNodeHandle *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CGameSceneNodeHandle>(CGameSceneNodeHandle *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGameSceneNodeHandle>(CGameSceneNodeHandle *)::nameHolder) != 0 )
  {
    DataMapInit<CGameSceneNodeHandle>(CGameSceneNodeHandle *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CGameSceneNodeHandle>(CGameSceneNodeHandle *)::nameHolder.m_pszBase = "CGameSceneNodeHandle";
    DataMapInit<CGameSceneNodeHandle>(CGameSceneNodeHandle *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CGameSceneNodeHandle>(CGameSceneNodeHandle *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CGameSceneNodeHandle>(CGameSceneNodeHandle *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CGameSceneNodeHandle>(CGameSceneNodeHandle *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGameSceneNodeHandle>(CGameSceneNodeHandle *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CGameSceneNodeHandle>(CGameSceneNodeHandle *)::nameHolder,
      &_dso_handle);
  }
  CGameSceneNodeHandle::m_DataMap.baseMap = 0;
  CGameSceneNodeHandle::m_DataMap.dataDesc = &DataMapInit<CGameSceneNodeHandle>(CGameSceneNodeHandle *)::dataDesc[1];
  CGameSceneNodeHandle::m_DataMap.dataNumFields = 2;
  return &CGameSceneNodeHandle::m_DataMap;
}


// CGameSceneNode::AddDatadescMetadataKeys  (line 64, @0x00000000020aeb60, libserver.so)
void __fastcall CGameSceneNode::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CGameSceneNode::GetBaseMap  (line 64, @0x00000000020aeb70, libserver.so)
datamap_t *__cdecl CGameSceneNode::GetBaseMap()
{
  return 0;
}


// DataMapInit<CGameSceneNode>  (line 64, @0x00000000020aeb80, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: __static_initialization_and_destruction_0
// strings: "CGameSceneNode"
// globals: `guard variable for'DataMapInit<CGameSceneNode>(CGameSceneNode *)::nameHolder, CGameSceneNode::m_DataMap, DataMapInit<CGameSceneNode>(CGameSceneNode *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CGameSceneNode>(CGameSceneNode *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CGameSceneNode>(CGameSceneNode *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGameSceneNode>(CGameSceneNode *)::nameHolder) != 0 )
  {
    DataMapInit<CGameSceneNode>(CGameSceneNode *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CGameSceneNode>(CGameSceneNode *)::nameHolder.m_pszBase = "CGameSceneNode";
    DataMapInit<CGameSceneNode>(CGameSceneNode *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CGameSceneNode>(CGameSceneNode *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CGameSceneNode>(CGameSceneNode *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CGameSceneNode>(CGameSceneNode *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGameSceneNode>(CGameSceneNode *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CGameSceneNode>(CGameSceneNode *)::nameHolder,
      &_dso_handle);
  }
  CGameSceneNode::m_DataMap.baseMap = 0;
  CGameSceneNode::m_DataMap.dataDesc = &DataMapInit<CGameSceneNode>(CGameSceneNode *)::dataDesc[1];
  CGameSceneNode::m_DataMap.dataNumFields = 31;
  return &CGameSceneNode::m_DataMap;
}


// PositionsAreEqual  (line 114, @0x000000000209d8a0, libserver.so)  // inlines: FuzzyEqual, fpmax
// callers: TransformHistory_t::IsIdenticalWithinTolerance
bool __fastcall PositionsAreEqual(const Vector *const p1, const Vector *const p2)
{
  __m128 x_low; // xmm3
  __m128 v3; // xmm0
  __m128 v4; // xmm4
  float y; // xmm4_4
  __m128 y_low; // xmm3
  __m128 v7; // xmm0
  __m128 v8; // xmm4
  bool result; // al

  x_low = LODWORD(p1->x);
  v3 = _mm_and_ps(x_low, 0x7FFFFFFFu);
  v3.m128_f32[0] = fmaxf(v3.m128_f32[0], fabs(p2->x)) * 0.00000023841858;
  v4 = _mm_cmplt_ss(v3, 0x3B800000u);
  result = COERCE_FLOAT(_mm_andnot_ps(v4, v3).m128_u32[0] | v4.m128_i32[0] & 0x3B800000) >= fabs(x_low.m128_f32[0] - p2->x)
        && (y = p2->y,
            y_low = LODWORD(p1->y),
            v7 = _mm_and_ps(y_low, 0x7FFFFFFFu),
            y_low.m128_i32[0] = fabs(y_low.m128_f32[0] - y),
            v7.m128_f32[0] = fmaxf(v7.m128_f32[0], fabs(y)) * 0.00000023841858,
            v8 = _mm_cmplt_ss(v7, 0x3B800000u),
            COERCE_FLOAT(_mm_andnot_ps(v8, v7).m128_u32[0] | v8.m128_i32[0] & 0x3B800000) >= y_low.m128_f32[0])
        && fmaxf(0.00390625, fmaxf(fabs(p1->z), fabs(p2->z)) * 0.00000023841858) >= fabs(p1->z - p2->z);
  return result;
}


// TransformHistory_t::operator==  (line 142, @0x00000000020aec40, libserver.so)
// calls: CTransform::operator!=
bool __fastcall TransformHistory_t::operator==(
        const TransformHistory_t *const this,
        const TransformHistory_t *const src)
{
  bool m_bRootToParentInvalid; // r13

  if ( this == src )
    return 1;
  m_bRootToParentInvalid = 0;
  if ( this->m_parentGSNHandle == src->m_parentGSNHandle
    && src->m_hierarchyAttachName.m_nHashCode == this->m_hierarchyAttachName.m_nHashCode )
  {
    m_bRootToParentInvalid = this->m_bRootToParentInvalid;
    if ( m_bRootToParentInvalid == src->m_bRootToParentInvalid )
    {
      if ( m_bRootToParentInvalid
        || !CTransform::operator!=(&this->m_rootToParent, &src->m_rootToParent)
        && this->m_flRootToParentScale == src->m_flRootToParentScale )
      {
        m_bRootToParentInvalid = 0;
        if ( !CTransform::operator!=(&this->m_rootToWorld, &src->m_rootToWorld) )
          return this->m_flRootToWorldScale == src->m_flRootToWorldScale;
      }
    }
    else
    {
      return 0;
    }
  }
  return m_bRootToParentInvalid;
}


// TransformHistory_t::IsIdenticalWithinTolerance  (line 172, @0x00000000020aed00, libserver.so)  // inlines: FuzzyEqual, ScalesAreEqual, fpmax
// calls: QuaternionsAreEqual, PositionsAreEqual
bool __fastcall TransformHistory_t::IsIdenticalWithinTolerance(
        const TransformHistory_t *const this,
        const TransformHistory_t *const src)
{
  bool m_bRootToParentInvalid; // al
  float v6; // xmm1_4
  float v7; // xmm1_4

  if ( this->m_parentGSNHandle != src->m_parentGSNHandle )
    return 0;
  if ( src->m_hierarchyAttachName.m_nHashCode != this->m_hierarchyAttachName.m_nHashCode )
    return 0;
  m_bRootToParentInvalid = this->m_bRootToParentInvalid;
  if ( m_bRootToParentInvalid != src->m_bRootToParentInvalid )
    return 0;
  if ( !m_bRootToParentInvalid )
  {
    v6 = fabs(this->m_flRootToParentScale - src->m_flRootToParentScale);
    if ( fmaxf(0.001, fmaxf(fabs(this->m_flRootToParentScale), fabs(src->m_flRootToParentScale)) * 0.000011920929) >= v6
      && QuaternionsAreEqual(&this->m_rootToParent.m_orientation, &src->m_rootToParent.m_orientation, 0x3DCCCCCDu, v6) != 0 )
    {
      return PositionsAreEqual(&this->m_rootToParent.m_vPosition, &src->m_rootToParent.m_vPosition);
    }
    return 0;
  }
  v7 = fabs(this->m_flRootToWorldScale - src->m_flRootToWorldScale);
  if ( fmaxf(0.001, fmaxf(fabs(this->m_flRootToWorldScale), fabs(src->m_flRootToWorldScale)) * 0.000011920929) < v7
    || QuaternionsAreEqual(&this->m_rootToWorld.m_orientation, &src->m_rootToWorld.m_orientation, 0x3DCCCCCDu, v7) == 0 )
  {
    return 0;
  }
  return PositionsAreEqual(&this->m_rootToWorld.m_vPosition, &src->m_rootToWorld.m_vPosition);
}


// TransformHistory_t::GetDebugString  (line 208, @0x00000000020aee20, libserver.so)  // inlines: CUtlString, Get
// calls: CUtlString::Format, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "<unknown>", "[h] %8llx (%s) <%s%s> [o] %8.3f %8.3f %8.3f [a] %6.3f %6.3f %6.3f %6.3f [s] %6.3f", "|w"
CUtlString __fastcall TransformHistory_t::GetDebugString(CUtlString *a1, const TransformHistory_t *const this)
{
  float m_flRootToWorldScale; // xmm0_4
  const TransformHistory_t *p_m_rootToWorld; // rdx
  QuaternionAligned *p_m_orientation; // rax
  double v7; // r15
  const char *v8; // r14
  const char *v9; // r13
  IUtlStringTokenSystem *v10; // rdi
  const char *v11; // rax
  const char *v12; // rcx
  double v14; // [rsp+8h] [rbp-68h]
  double v15; // [rsp+10h] [rbp-60h]
  double v16; // [rsp+18h] [rbp-58h]
  double x; // [rsp+20h] [rbp-50h]
  double y; // [rsp+28h] [rbp-48h]
  double z; // [rsp+30h] [rbp-40h]
  double w; // [rsp+38h] [rbp-38h]

  m_flRootToWorldScale = this->m_flRootToWorldScale;
  if ( this->m_bRootToParentInvalid )
  {
    p_m_rootToWorld = &this->m_rootToWorld;
    p_m_orientation = &this->m_rootToWorld.m_orientation;
  }
  else
  {
    p_m_orientation = &this->m_rootToParent.m_orientation;
    p_m_rootToWorld = this;
    m_flRootToWorldScale = this->m_flRootToParentScale;
  }
  a1->m_pString = 0;
  v7 = m_flRootToWorldScale;
  w = p_m_orientation->w;
  v8 = "  ";
  z = p_m_orientation->z;
  v9 = "w";
  y = p_m_orientation->y;
  x = p_m_orientation->x;
  v16 = p_m_rootToWorld->m_rootToParent.m_vPosition.z;
  v15 = p_m_rootToWorld->m_rootToParent.m_vPosition.y;
  v14 = p_m_rootToWorld->m_rootToParent.m_vPosition.x;
  if ( this->m_bRootToWorldInvalid )
  {
    if ( this->m_bRootToParentInvalid )
      goto LABEL_5;
LABEL_12:
    v9 = "p";
    v10 = g_pStringTokenSystem;
    if ( g_pStringTokenSystem != 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
  if ( !this->m_bRootToParentInvalid )
  {
    v8 = "|w";
    goto LABEL_12;
  }
LABEL_5:
  v10 = g_pStringTokenSystem;
  if ( g_pStringTokenSystem != 0 )
  {
LABEL_6:
    v11 = (*(*v10 + 88LL))(v10, this->m_hierarchyAttachName.m_nHashCode);
    goto LABEL_7;
  }
LABEL_13:
  v11 = "";
LABEL_7:
  v12 = "<unknown>";
  if ( *v11 != 0 )
    v12 = v11;
  CUtlString::Format(
    a1,
    "[h] %8llx (%s) <%s%s> [o] %8.3f %8.3f %8.3f [a] %6.3f %6.3f %6.3f %6.3f [s] %6.3f",
    this->m_parentGSNHandle,
    v12,
    v9,
    v8,
    v14,
    v15,
    v16,
    x,
    y,
    z,
    w,
    v7);
  return a1;
}


// TransformHistory_t::GetDebugSpeedString  (line 223, @0x00000000020aefd0, libserver.so)  // inlines: CUtlString, CalcDistance, Compute, DistTo, FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CUtlString::Format, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "%10.5f"
CUtlString __fastcall TransformHistory_t::GetDebugSpeedString(
        const TransformHistory_t *const this,
        float flPrevTime,
        float flNextTime,
        const TransformHistory_t *pPrevValue,
        float *a5)
{
  float v6; // xmm1_4
  double v7; // xmm0_8

  if ( flPrevTime == -1.0 || a5 == 0 || (v6 = flNextTime - flPrevTime, fabs(v6) <= 0.0000099999997) )
    v7 = 0.0;
  else
    v7 = fabs(
           fsqrt(
             (((pPrevValue->m_rootToParent.m_vPosition.x - *a5) * (pPrevValue->m_rootToParent.m_vPosition.x - *a5))
            + ((pPrevValue->m_rootToParent.m_vPosition.y - a5[1]) * (pPrevValue->m_rootToParent.m_vPosition.y - a5[1])))
           + ((pPrevValue->m_rootToParent.m_vPosition.z - a5[2]) * (pPrevValue->m_rootToParent.m_vPosition.z - a5[2])))
         / v6);
  *&this->m_rootToParent.m_vPosition.x = 0;
  CUtlString::Format(this, "%10.5f", v7);
  return this;
}


// TransformHistory_t::UsesSameParentSpace  (line 231, @0x00000000020af0b0, libserver.so)
// callers: CGameSceneNode::Lerp_NoCopy, CGameSceneNode::Lerp_Hermite_NoCopy
bool __fastcall TransformHistory_t::UsesSameParentSpace(
        const TransformHistory_t *const this,
        const TransformHistory_t *const src)
{
  bool result; // al

  result = 0;
  if ( this->m_parentGSNHandle == src->m_parentGSNHandle
    && src->m_hierarchyAttachName.m_nHashCode == this->m_hierarchyAttachName.m_nHashCode
    && !this->m_bRootToParentInvalid )
  {
    return !src->m_bRootToParentInvalid;
  }
  return result;
}


// CGameSceneNodeHandle::Get  (line 246, @0x00000000020af0e0, libserver.so)  // inlines: GetComponent<CBodyComponent>, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: CBodyComponent::LookupGameSceneNode
// callers: CBodyGameSystem::ComputeHierarchicalDepth, CPhysicsGameSystem::ProcessScaleChanges, CBodyGameSystem::BuildWorkList, CGameSceneNodeSerializer::GetEntityReportDescString, CGameSceneNode::Lerp_NoCopy, CGameSceneNode::Lerp_Hermite_NoCopy, CGameSceneNode::PostDataUpdate, CGameSceneNode::StartHierarchicalAttachment, CGameSceneNode::OnRestore, CGameSceneNode::OnSetDormant, CGameSceneNode::OnHierarchyChanged, CSkeletonInstance::OnHierarchyChanged (15 total)
// globals: CEntityHandle::gm_pEntityList
CGameSceneNode *__fastcall CGameSceneNodeHandle::Get(const CGameSceneNodeHandle *const this)
{
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityIdentity *m_pEntity; // rdx
  CEntityInstance *m_pInstance; // rcx
  __int64 m_nBaseOffset; // rdx
  CBodyComponent *v9; // rdi

  m_Index = this->m_hOwner.m_Value.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOwner.m_Value.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hOwner.m_Value.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0
    && (m_pEntity = v4->m_pInstance->m_pEntity, m_pInstance = m_pEntity->m_pInstance, m_pEntity->m_pInstance != 0)
    && (m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset) != 0xFFFF
    && (v9 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset)) != 0 )
  {
    return CBodyComponent::LookupGameSceneNode(v9, this->m_name.m_Value);
  }
  else
  {
    return 0;
  }
}


// DecomposeMatrixForNode  (line 271, @0x00000000020af180, libserver.so)  // inlines: LargestComponentValue
// calls: MatrixAngles
void __fastcall DecomposeMatrixForNode(
        const matrix3x4a_t *const mat,
        Quaternion *const quat,
        Vector *const vOrigin,
        float *const flScale)
{
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  int v8; // xmm5_4
  Vector vScale; // [rsp+0h] [rbp-20h] BYREF

  MatrixAngles(mat, quat, vOrigin, &vScale);
  v5 = fabs(vScale.x);
  v6 = fabs(vScale.y);
  v7 = fabs(vScale.z);
  if ( v5 > v6 )
  {
    if ( v5 <= v7 )
      goto LABEL_3;
    goto LABEL_8;
  }
  if ( v6 > v7 )
  {
    v7 = v6;
    if ( v5 > v6 )
LABEL_8:
      v7 = v5;
  }
LABEL_3:
  v8 = 1065353216;
  if ( fabs(v7 - 1.0) >= 0.001 )
    v8 = LODWORD(v7);
  *flScale = v8;
}


// CGameSceneNodeSerializer::Serialize  (line 288, @0x00000000020f1660, libserver.so)  // inlines: GetEntryIndex, GetSerialNumber, Set<long long unsigned int>, ToNetworkableInt
NetworkFieldResult_t __fastcall CGameSceneNodeSerializer::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  _WORD *m_pFieldData; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  int64 v6; // rcx

  m_pFieldData = info->m_pFieldData;
  if ( *(m_pFieldData + 2) == -1 )
    v4 = 0xFFFFFF;
  else
    v4 = m_pFieldData[4] & 0x7FFF | (*(m_pFieldData + 2) >> 1) & 0xFFC000u;
  v5 = *(m_pFieldData + 3);
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_UINT64;
  pOut->m_nNumComponents = 1;
  v6 = v4 | (v5 << 32);
  pOut->m_iVal64 = v6;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CGameSceneNodeSerializer::Unserialize  (line 295, @0x00000000020fdca0, libserver.so)  // inlines: CEntityHandle, FromNetworkableInt, GetForModify, Init, NetworkStateChanged, Set, operator=<CEntityHandle>
NetworkFieldResult_t __fastcall CGameSceneNodeSerializer::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  int v3; // r13d
  int64 m_iVal64; // r12
  _DWORD *m_pFieldData; // rbx

  v3 = -1;
  m_iVal64 = pIn->m_iVal64;
  m_pFieldData = info->m_pFieldData;
  if ( pIn->m_iVal64 != 0xFFFFFF )
    v3 = (2 * m_iVal64) & 0x1FF8000 | m_iVal64 & 0x3FFF;
  if ( m_pFieldData[2] != v3 )
  {
    (*(*m_pFieldData + 16LL))(m_pFieldData, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_pFieldData[2] = v3;
  }
  (*(*m_pFieldData + 16LL))(m_pFieldData, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  m_pFieldData[3] = HIDWORD(m_iVal64);
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CGameSceneNodeSerializer::GetEntityReportDescString  (line 303, @0x000000000210bea0, libserver.so)  // inlines: CEntityHandle, CGameSceneNodeHandle, CNetworkVarBase, EnsureValidValue<CEntityHandle>, FromNetworkableInt, GetEntityIndex, GetEntryIndex, Init, IsValid, Set, operator=<CEntityHandle>
// calls: CGameSceneNodeHandle::Get, CUtlString::operator=, CUtlString::Format
bool __fastcall CGameSceneNodeSerializer::GetEntityReportDescString(
        const NetworkableData_t *pData,
        CUtlString *const desc)
{
  int64 m_iVal64; // rdx
  int v5; // edx
  CGameSceneNodeHandle h; // [rsp+20h] [rbp-20h] BYREF

  h._vptr_CGameSceneNodeHandle = off_3FB43F0;
  m_iVal64 = pData->m_iVal64;
  h.m_hOwner.m_Value.m_Index = -1;
  if ( m_iVal64 != 0xFFFFFF )
    h.m_hOwner.m_Value.m_Index = (2 * m_iVal64) & 0x1FF8000 | m_iVal64 & 0x3FFF;
  h.m_name.m_Value.m_nHashCode = HIDWORD(m_iVal64);
  if ( CGameSceneNodeHandle::Get(&h) != 0 && CGameSceneNodeHandle::Get(&h) == 0 )
  {
    v5 = 0x7FFF;
    if ( h.m_hOwner.m_Value.m_Index != -1 )
      v5 = h.m_hOwner.m_Value.m_Index & 0x7FFF;
    CUtlString::Format(desc, "%d", v5);
    return 1;
  }
  else
  {
    CUtlString::operator=(desc, "NULL");
    return 1;
  }
}


// CGameSceneNodeSerializer::GetSerializerName  (line 326, @0x00000000020f16c0, libserver.so)
// strings: "gamescenenodehandle"
const char *__cdecl CGameSceneNodeSerializer::GetSerializerName()
{
  return "gamescenenodehandle";
}


// InitCGameSceneNodeSerializerFieldSerializer  (line 332, @0x000000000209c030, libserver.so)
// strings: "gameSceneNode"
// globals: CValidatingNetworkFieldSerializer<CGameSceneNodeSerializer>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*), CGameSceneNodeSerializer::GetSerializerName(void), CGameSceneNodeSerializer::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CGameSceneNodeSerializer::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<2,1>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<2,1>::GetDataSize(NetworkFieldInfo_t const&), CGameSceneNodeSerializer::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCGameSceneNodeSerializerFieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "gameSceneNode",
    mode,
    2,
    1,
    CGameSceneNodeSerializer::Serialize,
    CGameSceneNodeSerializer::Unserialize,
    CGameNetworkFieldSerializerBase<2,1>::GetDataSize,
    CGameNetworkFieldSerializerBase<2,1>::ParseData,
    CGameSceneNodeSerializer::GetEntityReportDescString,
    CGameSceneNodeSerializer::GetSerializerName,
    CGameSceneNodeSerializer::Serialize,
    CValidatingNetworkFieldSerializer<CGameSceneNodeSerializer>::ValidatingUnserialize);
}


// CGameSceneNodeStepSimulationOriginSerializer::Serialize  (line 343, @0x00000000020f8910, libserver.so)  // inlines: GetOwnerEntity, Set<Vector>, operator=
// calls: CBaseEntity::UseStepSimulationNetworkOrigin
NetworkFieldResult_t __fastcall CGameSceneNodeStepSimulationOriginSerializer::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  char *m_pStructBase; // r12
  CBaseEntity *v5; // rdi
  const Vector *v6; // rax
  float z; // xmm0_4
  const Vector *v; // [rsp+8h] [rbp-18h] BYREF

  m_pStructBase = info->m_pStructBase;
  v5 = *(m_pStructBase + 8);
  if ( v5 != 0 && CBaseEntity::UseStepSimulationNetworkOrigin(v5, &v, 0) )
  {
    v6 = v;
  }
  else
  {
    v6 = (m_pStructBase + 136);
    v = (m_pStructBase + 136);
  }
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_FLOAT32;
  pOut->m_nNumComponents = 3;
  pOut->m_flVal32[0] = v6->x;
  pOut->m_flVal32[1] = v6->y;
  z = v6->z;
  pOut->m_flVal32[2] = z;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CGameSceneNodeStepSimulationOriginSerializer::Unserialize  (line 369, @0x000000000210cf60, libserver.so)  // inlines: GetElement, NetworkComponentChanged, NetworkStateChanged, Set, operator=<Vector>, operator[]
// calls: CNetworkOriginCellCoordQuantizedVector::LatchComponent
NetworkFieldResult_t __fastcall CGameSceneNodeStepSimulationOriginSerializer::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  __int64 v3; // r14
  CNetworkOriginCellCoordQuantizedVector *m_pFieldData; // r13
  float v6; // xmm0_4
  CNetworkedQuantizedFloat *p_m_vecX; // rdx
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  uint16 *p_m_cellX; // rdx
  signed __int64 v11; // rdx

  v3 = 0;
  m_pFieldData = info->m_pFieldData;
  do
  {
    v6 = pIn->m_flVal32[v3];
    if ( v6 != *(&m_pFieldData->m_Value.x + v3) )
    {
      *(&m_pFieldData->m_Value.x + v3) = v6;
      CNetworkOriginCellCoordQuantizedVector::LatchComponent(m_pFieldData, v3);
      p_m_vecX = &m_pFieldData->m_vecX;
      if ( v3 != 0 )
      {
        p_m_vecX = &m_pFieldData->m_vecY;
        if ( v3 != 1 )
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
      if ( v3 != 0 )
      {
        p_m_cellX = &m_pFieldData->m_cellY;
        if ( v3 != 1 )
          p_m_cellX = &m_pFieldData->m_cellZ;
      }
      v11 = p_m_cellX - m_pFieldData;
      if ( m_pStateChanged != 0 )
        m_pStateChanged->NetworkStateChanged(m_pFieldData,
          v11,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
    }
    ++v3;
  }
  while ( v3 != 3 );
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// InitCGameSceneNodeStepSimulationOriginSerializerFieldSerializer  (line 384, @0x000000000209c0c0, libserver.so)
// strings: "gameSceneNodeStepSimulationOriginSerializer"
// globals: CValidatingNetworkFieldSerializer<CGameSceneNodeStepSimulationOriginSerializer>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t co, CGameNetworkFieldSerializerBase<3,3>::GetSerializerName(void), CGameSceneNodeStepSimulationOriginSerializer::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CGameNetworkFieldSerializerBase<3,3>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<3,3>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<3,3>::GetDataSize(NetworkFieldInfo_t const&), CGameSceneNodeStepSimulationOriginSerializer::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCGameSceneNodeStepSimulationOriginSerializerFieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "gameSceneNodeStepSimulationOriginSerializer",
    mode,
    3,
    3,
    CGameSceneNodeStepSimulationOriginSerializer::Serialize,
    CGameSceneNodeStepSimulationOriginSerializer::Unserialize,
    CGameNetworkFieldSerializerBase<3,3>::GetDataSize,
    CGameNetworkFieldSerializerBase<3,3>::ParseData,
    CGameNetworkFieldSerializerBase<3,3>::GetEntityReportDescString,
    CGameNetworkFieldSerializerBase<3,3>::GetSerializerName,
    CGameSceneNodeStepSimulationOriginSerializer::Serialize,
    CValidatingNetworkFieldSerializer<CGameSceneNodeStepSimulationOriginSerializer>::ValidatingUnserialize);
}


// CGameSceneNodeStepSimulationAnglesSerializer::Serialize  (line 389, @0x00000000020f8990, libserver.so)  // inlines: GetOwnerEntity, Set<QAngle>, operator=
// calls: CBaseEntity::UseStepSimulationNetworkAngles
NetworkFieldResult_t __fastcall CGameSceneNodeStepSimulationAnglesSerializer::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  char *m_pStructBase; // r12
  CBaseEntity *v5; // rdi
  const QAngle *v6; // rax
  float z; // xmm0_4
  const QAngle *a; // [rsp+8h] [rbp-18h] BYREF

  m_pStructBase = info->m_pStructBase;
  v5 = *(m_pStructBase + 8);
  if ( v5 != 0 && CBaseEntity::UseStepSimulationNetworkAngles(v5, &a) )
  {
    v6 = a;
  }
  else
  {
    v6 = (m_pStructBase + 200);
    a = (m_pStructBase + 200);
  }
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_FLOAT32;
  pOut->m_nNumComponents = 3;
  pOut->m_flVal32[0] = v6->x;
  pOut->m_flVal32[1] = v6->y;
  z = v6->z;
  pOut->m_flVal32[2] = z;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CGameSceneNodeStepSimulationAnglesSerializer::Unserialize  (line 412, @0x00000000020f16d0, libserver.so)  // inlines: operator=
NetworkFieldResult_t __fastcall CGameSceneNodeStepSimulationAnglesSerializer::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  _DWORD *m_pFieldData; // rax

  m_pFieldData = info->m_pFieldData;
  *m_pFieldData = pIn->m_iVal64;
  m_pFieldData[2] = LODWORD(pIn->m_flVal32[2]);
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// InitCGameSceneNodeStepSimulationAnglesSerializerFieldSerializer  (line 426, @0x000000000209c150, libserver.so)
// strings: "gameSceneNodeStepSimulationAnglesSerializer"
// globals: CValidatingNetworkFieldSerializer<CGameSceneNodeStepSimulationAnglesSerializer>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t co, CGameNetworkFieldSerializerBase<3,3>::GetSerializerName(void), CGameSceneNodeStepSimulationAnglesSerializer::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CGameNetworkFieldSerializerBase<3,3>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<3,3>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<3,3>::GetDataSize(NetworkFieldInfo_t const&), CGameSceneNodeStepSimulationAnglesSerializer::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCGameSceneNodeStepSimulationAnglesSerializerFieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "gameSceneNodeStepSimulationAnglesSerializer",
    mode,
    3,
    3,
    CGameSceneNodeStepSimulationAnglesSerializer::Serialize,
    CGameSceneNodeStepSimulationAnglesSerializer::Unserialize,
    CGameNetworkFieldSerializerBase<3,3>::GetDataSize,
    CGameNetworkFieldSerializerBase<3,3>::ParseData,
    CGameNetworkFieldSerializerBase<3,3>::GetEntityReportDescString,
    CGameNetworkFieldSerializerBase<3,3>::GetSerializerName,
    CGameSceneNodeStepSimulationAnglesSerializer::Serialize,
    CValidatingNetworkFieldSerializer<CGameSceneNodeStepSimulationAnglesSerializer>::ValidatingUnserialize);
}


// CGameSceneNodeCellSerializer<2>::Serialize  (line 432, @0x00000000020fe210, libserver.so)  // inlines: GetCell, GetInstance, IndexToIdentity, IsUsed, LookupEntityByIndex, Set<long long int>
// calls: CBaseEntity::UseStepSimulationNetworkOrigin
NetworkFieldResult_t __fastcall CGameSceneNodeCellSerializer<2>::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  int m_nObjectId; // edx
  CEntityIdentity *v5; // rsi
  CEntityIdentity *v6; // rcx
  unsigned __int16 *m_pStructBase; // rbx
  int64 v8; // rax
  uint16 cell[4]; // [rsp+10h] [rbp-20h] BYREF
  const Vector *v; // [rsp+18h] [rbp-18h] BYREF

  m_nObjectId = info->m_nObjectId;
  if ( m_nObjectId > 0x7FFE
    || (v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[m_nObjectId >> 9]) == 0
    || (v6 = &v5[m_nObjectId & 0x1FF]) == 0
    || (v6->m_EHandle.m_Index & 0x7FFF) != m_nObjectId )
  {
    m_pStructBase = info->m_pStructBase;
LABEL_9:
    v8 = m_pStructBase[8];
    goto LABEL_10;
  }
  m_pStructBase = info->m_pStructBase;
  if ( v6->m_pInstance == 0 || !CBaseEntity::UseStepSimulationNetworkOrigin(v6->m_pInstance, &v, cell) )
    goto LABEL_9;
  v8 = cell[2];
LABEL_10:
  pOut->m_iVal64 = v8;
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_INT64;
  pOut->m_nNumComponents = 1;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CGameSceneNodeCellSerializer<1>::Serialize  (line 432, @0x00000000020fe2d0, libserver.so)  // inlines: GetCell, GetInstance, IndexToIdentity, IsUsed, LookupEntityByIndex, Set<long long int>
// calls: CBaseEntity::UseStepSimulationNetworkOrigin
NetworkFieldResult_t __fastcall CGameSceneNodeCellSerializer<1>::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  int m_nObjectId; // edx
  CEntityIdentity *v5; // rsi
  CEntityIdentity *v6; // rcx
  unsigned __int16 *m_pStructBase; // rbx
  int64 v8; // rax
  uint16 cell[4]; // [rsp+10h] [rbp-20h] BYREF
  const Vector *v; // [rsp+18h] [rbp-18h] BYREF

  m_nObjectId = info->m_nObjectId;
  if ( m_nObjectId > 0x7FFE
    || (v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[m_nObjectId >> 9]) == 0
    || (v6 = &v5[m_nObjectId & 0x1FF]) == 0
    || (v6->m_EHandle.m_Index & 0x7FFF) != m_nObjectId )
  {
    m_pStructBase = info->m_pStructBase;
LABEL_9:
    v8 = m_pStructBase[7];
    goto LABEL_10;
  }
  m_pStructBase = info->m_pStructBase;
  if ( v6->m_pInstance == 0 || !CBaseEntity::UseStepSimulationNetworkOrigin(v6->m_pInstance, &v, cell) )
    goto LABEL_9;
  v8 = cell[1];
LABEL_10:
  pOut->m_iVal64 = v8;
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_INT64;
  pOut->m_nNumComponents = 1;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CGameSceneNodeCellSerializer<0>::Serialize  (line 432, @0x00000000020fe390, libserver.so)  // inlines: GetCell, GetInstance, IndexToIdentity, IsUsed, LookupEntityByIndex, Set<long long int>
// calls: CBaseEntity::UseStepSimulationNetworkOrigin
NetworkFieldResult_t __fastcall CGameSceneNodeCellSerializer<0>::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  int m_nObjectId; // edx
  CEntityIdentity *v5; // rsi
  CEntityIdentity *v6; // rcx
  unsigned __int16 *m_pStructBase; // rbx
  int64 v8; // rax
  uint16 cell[4]; // [rsp+10h] [rbp-20h] BYREF
  const Vector *v; // [rsp+18h] [rbp-18h] BYREF

  m_nObjectId = info->m_nObjectId;
  if ( m_nObjectId > 0x7FFE
    || (v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[m_nObjectId >> 9]) == 0
    || (v6 = &v5[m_nObjectId & 0x1FF]) == 0
    || (v6->m_EHandle.m_Index & 0x7FFF) != m_nObjectId )
  {
    m_pStructBase = info->m_pStructBase;
LABEL_9:
    v8 = m_pStructBase[6];
    goto LABEL_10;
  }
  m_pStructBase = info->m_pStructBase;
  if ( v6->m_pInstance == 0 || !CBaseEntity::UseStepSimulationNetworkOrigin(v6->m_pInstance, &v, cell) )
    goto LABEL_9;
  v8 = cell[0];
LABEL_10:
  pOut->m_iVal64 = v8;
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_INT64;
  pOut->m_nNumComponents = 1;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CGameSceneNodeCellSerializer<1>::Unserialize  (line 462, @0x000000000210caf0, libserver.so)  // inlines: CoordFromCell, NetworkComponentChanged, NetworkStateChanged, SetCell, SetElement<float>
// calls: CNetworkOriginCellCoordQuantizedVector::LatchComponent
NetworkFieldResult_t __fastcall CGameSceneNodeCellSerializer<1>::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  CNetworkOriginCellCoordQuantizedVector *m_pStructBase; // rbx
  int m_iVal64; // r12d
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  float v6; // xmm0_4
  INetworkStateChangedRouter *v8; // rdi
  INetworkStateChangedRouter *v9; // rdi

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
  v6 = ((m_iVal64 << 8) - 0x4000) + m_pStructBase->m_vecY.m_Value;
  if ( v6 == m_pStructBase->m_Value.y )
    return NetworkFieldResult_t::NET_FIELD_OK;
  m_pStructBase->m_Value.y = v6;
  CNetworkOriginCellCoordQuantizedVector::LatchComponent(m_pStructBase, 1);
  v8 = m_pStructBase->m_pStateChanged;
  if ( v8 == 0 )
    return NetworkFieldResult_t::NET_FIELD_OK;
  v8->NetworkStateChanged(m_pStructBase, 28, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v9 = m_pStructBase->m_pStateChanged;
  if ( v9 == 0 )
    return NetworkFieldResult_t::NET_FIELD_OK;
  v9->NetworkStateChanged(m_pStructBase, 14, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CGameSceneNodeCellSerializer<0>::Unserialize  (line 462, @0x000000000210cbc0, libserver.so)  // inlines: CoordFromCell, NetworkComponentChanged, NetworkStateChanged, SetCell, SetElement<float>
// calls: CNetworkOriginCellCoordQuantizedVector::LatchComponent
NetworkFieldResult_t __fastcall CGameSceneNodeCellSerializer<0>::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  CNetworkOriginCellCoordQuantizedVector *m_pStructBase; // rbx
  int m_iVal64; // r12d
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  float v6; // xmm0_4
  INetworkStateChangedRouter *v8; // rdi
  INetworkStateChangedRouter *v9; // rdi

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
  v6 = ((m_iVal64 << 8) - 0x4000) + m_pStructBase->m_vecX.m_Value;
  if ( v6 == m_pStructBase->m_Value.x )
    return NetworkFieldResult_t::NET_FIELD_OK;
  m_pStructBase->m_Value.x = v6;
  CNetworkOriginCellCoordQuantizedVector::LatchComponent(m_pStructBase, 0);
  v8 = m_pStructBase->m_pStateChanged;
  if ( v8 == 0 )
    return NetworkFieldResult_t::NET_FIELD_OK;
  v8->NetworkStateChanged(m_pStructBase, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v9 = m_pStructBase->m_pStateChanged;
  if ( v9 == 0 )
    return NetworkFieldResult_t::NET_FIELD_OK;
  v9->NetworkStateChanged(m_pStructBase, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CGameSceneNodeCellSerializer<2>::Unserialize  (line 462, @0x000000000210cc90, libserver.so)  // inlines: CoordFromCell, NetworkComponentChanged, NetworkStateChanged, SetCell, SetElement<float>
// calls: CNetworkOriginCellCoordQuantizedVector::LatchComponent
NetworkFieldResult_t __fastcall CGameSceneNodeCellSerializer<2>::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  CNetworkOriginCellCoordQuantizedVector *m_pStructBase; // rbx
  int m_iVal64; // r12d
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  float v6; // xmm0_4
  INetworkStateChangedRouter *v8; // rdi
  INetworkStateChangedRouter *v9; // rdi

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
  v6 = ((m_iVal64 << 8) - 0x4000) + m_pStructBase->m_vecZ.m_Value;
  if ( v6 == m_pStructBase->m_Value.z )
    return NetworkFieldResult_t::NET_FIELD_OK;
  m_pStructBase->m_Value.z = v6;
  CNetworkOriginCellCoordQuantizedVector::LatchComponent(m_pStructBase, 2);
  v8 = m_pStructBase->m_pStateChanged;
  if ( v8 == 0 )
    return NetworkFieldResult_t::NET_FIELD_OK;
  v8->NetworkStateChanged(m_pStructBase, 36, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v9 = m_pStructBase->m_pStateChanged;
  if ( v9 == 0 )
    return NetworkFieldResult_t::NET_FIELD_OK;
  v9->NetworkStateChanged(m_pStructBase, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// InitCGameSceneNodeCellSerializerXFieldSerializer  (line 488, @0x000000000209c1e0, libserver.so)
// strings: "cellx"
// globals: CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<0>>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*), CGameNetworkFieldSerializerBase<1,1>::GetSerializerName(void), CGameSceneNodeCellSerializer<0>::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CGameNetworkFieldSerializerBase<1,1>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<1,1>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<1,1>::GetDataSize(NetworkFieldInfo_t const&), CGameSceneNodeCellSerializer<0>::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCGameSceneNodeCellSerializerXFieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "cellx",
    mode,
    1,
    1,
    CGameSceneNodeCellSerializer<0>::Serialize,
    CGameSceneNodeCellSerializer<0>::Unserialize,
    CGameNetworkFieldSerializerBase<1,1>::GetDataSize,
    CGameNetworkFieldSerializerBase<1,1>::ParseData,
    CGameNetworkFieldSerializerBase<1,1>::GetEntityReportDescString,
    CGameNetworkFieldSerializerBase<1,1>::GetSerializerName,
    CGameSceneNodeCellSerializer<0>::Serialize,
    CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<0>>::ValidatingUnserialize);
}


// InitCGameSceneNodeCellSerializerYFieldSerializer  (line 489, @0x000000000209c270, libserver.so)
// strings: "celly"
// globals: CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<1>>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*), CGameNetworkFieldSerializerBase<1,1>::GetSerializerName(void), CGameSceneNodeCellSerializer<1>::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CGameNetworkFieldSerializerBase<1,1>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<1,1>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<1,1>::GetDataSize(NetworkFieldInfo_t const&), CGameSceneNodeCellSerializer<1>::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCGameSceneNodeCellSerializerYFieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "celly",
    mode,
    1,
    1,
    CGameSceneNodeCellSerializer<1>::Serialize,
    CGameSceneNodeCellSerializer<1>::Unserialize,
    CGameNetworkFieldSerializerBase<1,1>::GetDataSize,
    CGameNetworkFieldSerializerBase<1,1>::ParseData,
    CGameNetworkFieldSerializerBase<1,1>::GetEntityReportDescString,
    CGameNetworkFieldSerializerBase<1,1>::GetSerializerName,
    CGameSceneNodeCellSerializer<1>::Serialize,
    CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<1>>::ValidatingUnserialize);
}


// InitCGameSceneNodeCellSerializerZFieldSerializer  (line 490, @0x000000000209c300, libserver.so)
// strings: "cellz"
// globals: CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<2>>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*), CGameNetworkFieldSerializerBase<1,1>::GetSerializerName(void), CGameSceneNodeCellSerializer<2>::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CGameNetworkFieldSerializerBase<1,1>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<1,1>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<1,1>::GetDataSize(NetworkFieldInfo_t const&), CGameSceneNodeCellSerializer<2>::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCGameSceneNodeCellSerializerZFieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "cellz",
    mode,
    1,
    1,
    CGameSceneNodeCellSerializer<2>::Serialize,
    CGameSceneNodeCellSerializer<2>::Unserialize,
    CGameNetworkFieldSerializerBase<1,1>::GetDataSize,
    CGameNetworkFieldSerializerBase<1,1>::ParseData,
    CGameNetworkFieldSerializerBase<1,1>::GetEntityReportDescString,
    CGameNetworkFieldSerializerBase<1,1>::GetSerializerName,
    CGameSceneNodeCellSerializer<2>::Serialize,
    CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<2>>::ValidatingUnserialize);
}


// CGameSceneNodeOriginSerializer<1>::Serialize  (line 498, @0x00000000020fe450, libserver.so)  // inlines: CellInCoord, GetCell, GetInstance, IndexToIdentity, IsUsed, LookupEntityByIndex, Set<float>, operator[]
// calls: CBaseEntity::UseStepSimulationNetworkOrigin
NetworkFieldResult_t __fastcall CGameSceneNodeOriginSerializer<1>::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  int m_nObjectId; // edx
  CEntityIdentity *v5; // rsi
  CEntityIdentity *v6; // rcx
  const Vector *m_pStructBase; // rbx
  int x_high; // eax
  float y; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  uint16 cell[4]; // [rsp+10h] [rbp-20h] BYREF
  const Vector *v; // [rsp+18h] [rbp-18h] BYREF

  m_nObjectId = info->m_nObjectId;
  if ( m_nObjectId <= 0x7FFE
    && (v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[m_nObjectId >> 9]) != 0
    && (v6 = &v5[m_nObjectId & 0x1FF]) != 0
    && (v6->m_EHandle.m_Index & 0x7FFF) == m_nObjectId )
  {
    m_pStructBase = info->m_pStructBase;
    if ( v6->m_pInstance != 0 && CBaseEntity::UseStepSimulationNetworkOrigin(v6->m_pInstance, &v, cell) )
    {
      m_pStructBase = v;
      x_high = cell[1];
      goto LABEL_10;
    }
  }
  else
  {
    m_pStructBase = info->m_pStructBase;
  }
  x_high = HIWORD(m_pStructBase[1].x);
  v = m_pStructBase;
LABEL_10:
  y = m_pStructBase->y;
  v10 = abs32((x_high << 8) - 0x4000);
  if ( y < 0.0 )
    v11 = v10 + y;
  else
    v11 = y - v10;
  if ( v11 > 256.0 )
    v12 = 256.0;
  else
    v12 = fmaxf(0.0, v11);
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_FLOAT32;
  pOut->m_nNumComponents = 1;
  pOut->m_flVal32[0] = v12;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CGameSceneNodeOriginSerializer<0>::Serialize  (line 498, @0x00000000020fe560, libserver.so)  // inlines: CellInCoord, GetCell, GetInstance, IndexToIdentity, IsUsed, LookupEntityByIndex, Set<float>, operator[]
// calls: CBaseEntity::UseStepSimulationNetworkOrigin
NetworkFieldResult_t __fastcall CGameSceneNodeOriginSerializer<0>::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  int m_nObjectId; // edx
  CEntityIdentity *v5; // rsi
  CEntityIdentity *v6; // rcx
  const Vector *m_pStructBase; // rbx
  int x_low; // eax
  float x; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  uint16 cell[4]; // [rsp+10h] [rbp-20h] BYREF
  const Vector *v; // [rsp+18h] [rbp-18h] BYREF

  m_nObjectId = info->m_nObjectId;
  if ( m_nObjectId <= 0x7FFE
    && (v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[m_nObjectId >> 9]) != 0
    && (v6 = &v5[m_nObjectId & 0x1FF]) != 0
    && (v6->m_EHandle.m_Index & 0x7FFF) == m_nObjectId )
  {
    m_pStructBase = info->m_pStructBase;
    if ( v6->m_pInstance != 0 && CBaseEntity::UseStepSimulationNetworkOrigin(v6->m_pInstance, &v, cell) )
    {
      m_pStructBase = v;
      x_low = cell[0];
      goto LABEL_10;
    }
  }
  else
  {
    m_pStructBase = info->m_pStructBase;
  }
  x_low = LOWORD(m_pStructBase[1].x);
  v = m_pStructBase;
  cell[0] = x_low;
LABEL_10:
  x = m_pStructBase->x;
  v10 = abs32((x_low << 8) - 0x4000);
  if ( m_pStructBase->x < 0.0 )
    v11 = v10 + x;
  else
    v11 = x - v10;
  if ( v11 > 256.0 )
    v12 = 256.0;
  else
    v12 = fmaxf(0.0, v11);
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_FLOAT32;
  pOut->m_nNumComponents = 1;
  pOut->m_flVal32[0] = v12;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CGameSceneNodeOriginSerializer<2>::Serialize  (line 498, @0x00000000020fe680, libserver.so)  // inlines: CellInCoord, GetCell, GetInstance, IndexToIdentity, IsUsed, LookupEntityByIndex, Set<float>, operator[]
// calls: CBaseEntity::UseStepSimulationNetworkOrigin
NetworkFieldResult_t __fastcall CGameSceneNodeOriginSerializer<2>::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  int m_nObjectId; // edx
  CEntityIdentity *v5; // rsi
  CEntityIdentity *v6; // rcx
  float *m_pStructBase; // rbx
  int v8; // eax
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  uint16 cell[4]; // [rsp+10h] [rbp-20h] BYREF
  const Vector *v; // [rsp+18h] [rbp-18h] BYREF

  m_nObjectId = info->m_nObjectId;
  if ( m_nObjectId <= 0x7FFE
    && (v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[m_nObjectId >> 9]) != 0
    && (v6 = &v5[m_nObjectId & 0x1FF]) != 0
    && (v6->m_EHandle.m_Index & 0x7FFF) == m_nObjectId )
  {
    m_pStructBase = info->m_pStructBase;
    if ( v6->m_pInstance != 0 && CBaseEntity::UseStepSimulationNetworkOrigin(v6->m_pInstance, &v, cell) )
    {
      m_pStructBase = &v->x;
      v8 = cell[2];
      goto LABEL_10;
    }
  }
  else
  {
    m_pStructBase = info->m_pStructBase;
  }
  v8 = *(m_pStructBase + 8);
LABEL_10:
  v9 = m_pStructBase[2];
  v10 = abs32((v8 << 8) - 0x4000);
  if ( v9 < 0.0 )
    v11 = v10 + v9;
  else
    v11 = v9 - v10;
  if ( v11 > 256.0 )
    v12 = 256.0;
  else
    v12 = fmaxf(0.0, v11);
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_FLOAT32;
  pOut->m_nNumComponents = 1;
  pOut->m_flVal32[0] = v12;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CGameSceneNodeOriginSerializer<0>::Unserialize  (line 541, @0x00000000020f1c30, libserver.so)  // inlines: GetEncoder, GetQuantizedFloatEncoderByIndex, Set
NetworkFieldResult_t __fastcall CGameSceneNodeOriginSerializer<0>::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  float *m_pStructBase; // rcx
  __int64 v4; // rax
  float v5; // xmm0_4

  m_pStructBase = info->m_pStructBase;
  v4 = g_pQuantizedFloatEncoders + 32LL * *(m_pStructBase + 12);
  v5 = *(v4 + 12);
  if ( pIn->m_flVal32[0] <= v5 )
    v5 = fmaxf(*(v4 + 8), pIn->m_flVal32[0]);
  m_pStructBase[5] = v5;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CGameSceneNodeOriginSerializer<1>::Unserialize  (line 541, @0x00000000020f1c70, libserver.so)  // inlines: GetEncoder, GetQuantizedFloatEncoderByIndex, Set
NetworkFieldResult_t __fastcall CGameSceneNodeOriginSerializer<1>::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  float *m_pStructBase; // rcx
  __int64 v4; // rax
  float v5; // xmm0_4

  m_pStructBase = info->m_pStructBase;
  v4 = g_pQuantizedFloatEncoders + 32LL * *(m_pStructBase + 16);
  v5 = *(v4 + 12);
  if ( pIn->m_flVal32[0] <= v5 )
    v5 = fmaxf(*(v4 + 8), pIn->m_flVal32[0]);
  m_pStructBase[7] = v5;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CGameSceneNodeOriginSerializer<2>::Unserialize  (line 541, @0x00000000020f1cb0, libserver.so)  // inlines: GetEncoder, GetQuantizedFloatEncoderByIndex, Set
NetworkFieldResult_t __fastcall CGameSceneNodeOriginSerializer<2>::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  float *m_pStructBase; // rcx
  __int64 v4; // rax
  float v5; // xmm0_4

  m_pStructBase = info->m_pStructBase;
  v4 = g_pQuantizedFloatEncoders + 32LL * *(m_pStructBase + 20);
  v5 = *(v4 + 12);
  if ( pIn->m_flVal32[0] <= v5 )
    v5 = fmaxf(*(v4 + 8), pIn->m_flVal32[0]);
  m_pStructBase[9] = v5;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// InitCGameSceneNodeOriginSerializerXFieldSerializer  (line 562, @0x000000000209c390, libserver.so)
// strings: "posx"
// globals: CValidatingNetworkFieldSerializer<CGameSceneNodeOriginSerializer<0>>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*), CGameNetworkFieldSerializerBase<3,1>::GetSerializerName(void), CGameSceneNodeOriginSerializer<0>::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CGameNetworkFieldSerializerBase<3,1>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<3,1>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<3,1>::GetDataSize(NetworkFieldInfo_t const&), CGameSceneNodeOriginSerializer<0>::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCGameSceneNodeOriginSerializerXFieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "posx",
    mode,
    3,
    1,
    CGameSceneNodeOriginSerializer<0>::Serialize,
    CGameSceneNodeOriginSerializer<0>::Unserialize,
    CGameNetworkFieldSerializerBase<3,1>::GetDataSize,
    CGameNetworkFieldSerializerBase<3,1>::ParseData,
    CGameNetworkFieldSerializerBase<3,1>::GetEntityReportDescString,
    CGameNetworkFieldSerializerBase<3,1>::GetSerializerName,
    CGameSceneNodeOriginSerializer<0>::Serialize,
    CValidatingNetworkFieldSerializer<CGameSceneNodeOriginSerializer<0>>::ValidatingUnserialize);
}


// InitCGameSceneNodeOriginSerializerYFieldSerializer  (line 563, @0x000000000209c420, libserver.so)
// strings: "posy"
// globals: CValidatingNetworkFieldSerializer<CGameSceneNodeOriginSerializer<1>>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*), CGameNetworkFieldSerializerBase<3,1>::GetSerializerName(void), CGameSceneNodeOriginSerializer<1>::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CGameNetworkFieldSerializerBase<3,1>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<3,1>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<3,1>::GetDataSize(NetworkFieldInfo_t const&), CGameSceneNodeOriginSerializer<1>::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCGameSceneNodeOriginSerializerYFieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "posy",
    mode,
    3,
    1,
    CGameSceneNodeOriginSerializer<1>::Serialize,
    CGameSceneNodeOriginSerializer<1>::Unserialize,
    CGameNetworkFieldSerializerBase<3,1>::GetDataSize,
    CGameNetworkFieldSerializerBase<3,1>::ParseData,
    CGameNetworkFieldSerializerBase<3,1>::GetEntityReportDescString,
    CGameNetworkFieldSerializerBase<3,1>::GetSerializerName,
    CGameSceneNodeOriginSerializer<1>::Serialize,
    CValidatingNetworkFieldSerializer<CGameSceneNodeOriginSerializer<1>>::ValidatingUnserialize);
}


// InitCGameSceneNodeOriginSerializerZFieldSerializer  (line 564, @0x000000000209c4b0, libserver.so)
// strings: "posz"
// globals: CValidatingNetworkFieldSerializer<CGameSceneNodeOriginSerializer<2>>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*), CGameNetworkFieldSerializerBase<3,1>::GetSerializerName(void), CGameSceneNodeOriginSerializer<2>::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CGameNetworkFieldSerializerBase<3,1>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<3,1>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<3,1>::GetDataSize(NetworkFieldInfo_t const&), CGameSceneNodeOriginSerializer<2>::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCGameSceneNodeOriginSerializerZFieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "posz",
    mode,
    3,
    1,
    CGameSceneNodeOriginSerializer<2>::Serialize,
    CGameSceneNodeOriginSerializer<2>::Unserialize,
    CGameNetworkFieldSerializerBase<3,1>::GetDataSize,
    CGameNetworkFieldSerializerBase<3,1>::ParseData,
    CGameNetworkFieldSerializerBase<3,1>::GetEntityReportDescString,
    CGameNetworkFieldSerializerBase<3,1>::GetSerializerName,
    CGameSceneNodeOriginSerializer<2>::Serialize,
    CValidatingNetworkFieldSerializer<CGameSceneNodeOriginSerializer<2>>::ValidatingUnserialize);
}


// CGameSceneNode::CGameSceneNode  (line 576, @0x00000000020c5110, libserver.so)  // inlines: BuildFlattenedSerializerInfo_t, CEntityHandle, CGameSceneNodeHandle, CNetworkOriginCellCoordQuantizedVector, CNetworkVarBase, CNetworkVectorBase, CNetworkedQuantizedFloat, CThreadFastMutex, CThreadSyncValue<>, CUtlStringToken, Cm_vecOriginInitializer, EnsureValidValue, EnsureValidValue<float>, FindOrCreateFlattenedSerializer<CGameSceneNode>, GetElement, GetEncoder, GetQuantizedFloatEncoderByIndex, Init, Init<true>, IsUnflattenedField<CGameSceneNode>, NetworkComponentChanged, NetworkStateChanged, NetworkVar_m_hParent, Schema_StaticBinding, Set, SetUnflattened, operator!=, operator=, operator=<Vector>, operator=<float>, operator==
// calls: FindOrCreateQuantizedFloatEncoder, CNetworkOriginCellCoordQuantizedVector::LatchComponent, SetIdentityMatrix, CGameSceneNode::Schema_VerifyBindingIsRegistered
// callers: CEntityComponentHelperReferenced<CBodyComponentPoint>::Allocate, CSkeletonInstance::CSkeletonInstance
// strings: "m_vecX", "m_vecY", "m_vecZ", "m_vecOrigin"
// globals: IFlattenedSerializers::FindOrCreateFlattenedSerializer<CGameSceneNode>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle
void __fastcall CGameSceneNode::CGameSceneNode(CGameSceneNode *const this)
{
  CNetworkOriginCellCoordQuantizedVector *p_m_vecOrigin; // rbx
  uint16 QuantizedFloatEncoder; // ax
  float m_Value; // xmm1_4
  __int64 v5; // rax
  float v6; // xmm0_4
  uint16 v7; // ax
  float v8; // xmm1_4
  __int64 v9; // rax
  float v10; // xmm0_4
  uint16 v11; // ax
  float v12; // xmm1_4
  __int64 v13; // rax
  float v14; // xmm0_4
  __int64 v15; // r15
  __int64 v16; // rsi
  IFlattenedSerializers *v17; // r13
  void (__fastcall **v18)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  IFlattenedSerializers *v19; // rdi
  __int64 v20; // r15
  int v21; // r13d
  char v22; // al
  vec_t y; // xmm1_4
  float x; // xmm0_4
  vec_t z; // xmm1_4
  bool i; // zf
  CNetworkedQuantizedFloat *p_m_vecX; // rdx
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  uint16 *p_m_cellX; // rdx
  signed __int64 v30; // rdx
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  char v34; // al
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD v38[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v39; // [rsp+30h] [rbp-40h]
  char v40; // [rsp+38h] [rbp-38h]
  char v41; // [rsp+39h] [rbp-37h]
  char v42; // [rsp+3Ah] [rbp-36h]

  p_m_vecOrigin = &this->m_vecOrigin;
  this->_vptr_CGameSceneNode = &off_3FF7A10;
  this->m_pOwner = 0;
  this->m_hParent._vptr_CGameSceneNodeHandle = &off_3FF41D0;
  this->m_hParent.m_hOwner.m_Value.m_Index = -1;
  this->m_hParent.m_name.m_Value.m_nHashCode = 0;
  this->m_vecOrigin.m_vecX.m_Value = 0.0;
  this->m_vecOrigin.m_Value = vec3_origin;
  QuantizedFloatEncoder = FindOrCreateQuantizedFloatEncoder(1, "m_vecX", 2524840829LL, 13, 1, 0.0, 256.0);
  this->m_vecOrigin.m_vecX.m_nEncoder = QuantizedFloatEncoder;
  m_Value = this->m_vecOrigin.m_vecX.m_Value;
  v5 = g_pQuantizedFloatEncoders + 32LL * QuantizedFloatEncoder;
  v6 = *(v5 + 12);
  if ( m_Value <= v6 )
    v6 = fmaxf(*(v5 + 8), m_Value);
  this->m_vecOrigin.m_vecX.m_Value = v6;
  this->m_vecOrigin.m_vecY.m_Value = 0.0;
  v7 = FindOrCreateQuantizedFloatEncoder(1, "m_vecY", 2625667396LL, 13, 1, 0.0, 256.0);
  v8 = this->m_vecOrigin.m_vecY.m_Value;
  this->m_vecOrigin.m_vecY.m_nEncoder = v7;
  v9 = g_pQuantizedFloatEncoders + 32LL * v7;
  v10 = *(v9 + 12);
  if ( v8 <= v10 )
    v10 = fmaxf(*(v9 + 8), v8);
  this->m_vecOrigin.m_vecY.m_Value = v10;
  this->m_vecOrigin.m_vecZ.m_Value = 0.0;
  v11 = FindOrCreateQuantizedFloatEncoder(1, "m_vecZ", 1430821094, 13, 1, 0.0, 256.0);
  v12 = this->m_vecOrigin.m_vecZ.m_Value;
  this->m_vecOrigin.m_vecZ.m_nEncoder = v11;
  v13 = g_pQuantizedFloatEncoders + 32LL * v11;
  v14 = *(v13 + 12);
  if ( v12 <= v14 )
    v14 = fmaxf(*(v13 + 8), v12);
  this->m_vecOrigin.m_vecZ.m_Value = v14;
  v15 = 0;
  this->m_vecOrigin.m_nOutsideWorld = 0;
  this->m_vecOrigin.m_pStateChanged = 0;
  do
    ++v15;
  while ( v15 != 3 );
  if ( vec3_origin.x == this->m_vecOrigin.m_Value.x
    && vec3_origin.y == this->m_vecOrigin.m_Value.y
    && vec3_origin.z == this->m_vecOrigin.m_Value.z )
  {
    CNetworkOriginCellCoordQuantizedVector::LatchComponent(p_m_vecOrigin, 0);
    CNetworkOriginCellCoordQuantizedVector::LatchComponent(p_m_vecOrigin, 1);
    CNetworkOriginCellCoordQuantizedVector::LatchComponent(p_m_vecOrigin, 2);
  }
  v16 = IFlattenedSerializers::FindOrCreateFlattenedSerializer<CGameSceneNode>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  this->m_m_vecOriginInitializer._vptr_INetworkStateChangedRouter = &off_3FF4210;
  this->m_vecOrigin.m_pStateChanged = &this->m_m_vecOriginInitializer;
  v17 = g_pFlattenedSerializers;
  if ( v16 == 0 )
  {
    v38[0] = 0;
    v38[1] = 0;
    v39 = 0;
    CGameSceneNode::Schema_VerifyBindingIsRegistered();
    v41 = 0;
    v40 = 0;
    v42 = 0;
    v38[0] = CGameSceneNode::s_pSchemaBinding->m_pClassInfo_N;
    v39 = &IFlattenedSerializers::FindOrCreateFlattenedSerializer<CGameSceneNode>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    (**v17)(
      v17,
      v38,
      1,
      v35,
      v36,
      v37,
      &this->m_vecOrigin.m_vecY,
      &this->m_vecOrigin.m_vecZ,
      &this->m_vecOrigin.m_cellZ,
      &this->m_vecOrigin.m_cellY);
    v16 = IFlattenedSerializers::FindOrCreateFlattenedSerializer<CGameSceneNode>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  v18 = *v17;
  v19 = v17;
  v20 = 0;
  v21 = 0;
  v22 = (v18[37])(v19, v16, "m_vecOrigin");
  y = vec3_origin.y;
  this->m_angRotation.m_Value.x = 0.0;
  *(this + 249) &= 0xFCu;
  this->m_vecOrigin.m_vecX.m_bUnflattened = v22;
  x = vec3_origin.x;
  this->m_vecAbsOrigin.y = y;
  z = vec3_origin.z;
  this->m_angRotation.m_Value.y = 0.0;
  this->m_angRotation.m_Value.z = 0.0;
  this->m_flScale.m_Value = 0.0;
  this->m_name.m_Value.m_nHashCode = 0;
  this->m_bDirtyAbsTransform.m_value = 0;
  this->m_bDirtyAttachments.m_value = 0;
  this->m_calcAbsPositionMutex.m_ownerID = 0;
  this->m_calcAbsPositionMutex.m_depth = 0;
  this->m_animationParentSpaceValidBoneFlags.m_value = CModelSkeleton::BoneFlags_t::FLAG_NO_BONE_FLAGS;
  this->m_compositeParentSpaceValidBoneFlags.m_value = CModelSkeleton::BoneFlags_t::FLAG_NO_BONE_FLAGS;
  this->m_compositeWorldSpaceValidBoneFlags.m_value = CModelSkeleton::BoneFlags_t::FLAG_NO_BONE_FLAGS;
  this->m_hierarchyAttachName.m_Value.m_nHashCode = 0;
  this->m_flZOffset = 0.0;
  this->m_pNextSibling = 0;
  this->m_pChild = 0;
  this->m_pParent = 0;
  this->m_nHierarchicalDepth = 0;
  this->m_vecAbsOrigin.x = x;
  this->m_vecAbsOrigin.z = z;
  for ( i = x == p_m_vecOrigin->m_Value.x; ; i = x == *(&p_m_vecOrigin->m_Value.x + v20) )
  {
    if ( !i )
    {
      *(&p_m_vecOrigin->m_Value.x + v20) = x;
      CNetworkOriginCellCoordQuantizedVector::LatchComponent(p_m_vecOrigin, v21);
      p_m_vecX = &this->m_vecOrigin.m_vecX;
      if ( v21 != 0 )
      {
        p_m_vecX = &this->m_vecOrigin.m_vecY;
        if ( v21 != 1 )
          p_m_vecX = &this->m_vecOrigin.m_vecZ;
      }
      m_pStateChanged = this->m_vecOrigin.m_pStateChanged;
      if ( m_pStateChanged != 0 )
      {
        m_pStateChanged->NetworkStateChanged(p_m_vecOrigin,
          p_m_vecX - p_m_vecOrigin,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        m_pStateChanged = this->m_vecOrigin.m_pStateChanged;
      }
      p_m_cellX = &this->m_vecOrigin.m_cellX;
      if ( v21 != 0 )
      {
        p_m_cellX = &this->m_vecOrigin.m_cellY;
        if ( v21 != 1 )
          p_m_cellX = &this->m_vecOrigin.m_cellZ;
      }
      v30 = p_m_cellX - p_m_vecOrigin;
      if ( m_pStateChanged != 0 )
        break;
    }
    if ( ++v20 == 3 )
      goto LABEL_22;
LABEL_15:
    x = *(&vec3_origin.x + v20);
    v21 = v20;
  }
  ++v20;
  m_pStateChanged->NetworkStateChanged(p_m_vecOrigin, v30, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  if ( v20 != 3 )
    goto LABEL_15;
LABEL_22:
  v31 = vec3_angle.x;
  v32 = vec3_angle.y;
  this->m_angAbsRotation.x = vec3_angle.x;
  v33 = vec3_angle.z;
  i = v31 == this->m_angRotation.m_Value.x;
  this->m_angAbsRotation.y = v32;
  this->m_angAbsRotation.z = v33;
  if ( !i || v32 != this->m_angRotation.m_Value.y || v33 != this->m_angRotation.m_Value.z )
  {
    (*(this->_vptr_CGameSceneNode + 24))(this, 200, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_angRotation.m_Value = vec3_angle;
  }
  SetIdentityMatrix(&this->m_mNodeToWorld);
  v34 = *(this + 248);
  this->m_pBoneMergeList = 0;
  this->m_nParentAttachmentOrBone = -1;
  *(this + 249) &= ~4u;
  this->m_bDirtyAbsTransform.m_value = 0;
  this->m_bDirtyAttachments.m_value = 0;
  i = this->m_flScale.m_Value == 1.0;
  this->m_bForceParentToBeNetworked = 0;
  *(this + 248) = v34 & 0x80;
  this->m_compositeWorldSpaceValidBoneFlags.m_value = CModelSkeleton::BoneFlags_t::FLAG_ALL_BONE_FLAGS;
  this->m_compositeParentSpaceValidBoneFlags.m_value = CModelSkeleton::BoneFlags_t::FLAG_ALL_BONE_FLAGS;
  this->m_animationParentSpaceValidBoneFlags.m_value = CModelSkeleton::BoneFlags_t::FLAG_ALL_BONE_FLAGS;
  this->m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0;
  this->m_bDormant = 0;
  this->m_nCachedInvalidatePhysicsRecursiveFlags = 0;
  if ( !i )
  {
    (*(this->_vptr_CGameSceneNode + 24))(this, 212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flScale.m_Value = 1.0;
  }
  this->m_flAbsScale = 1.0;
}


// CGameSceneNode::~CGameSceneNode  (line 614, @0x000000000209c540, libserver.so)  // inlines: MemAlloc_FreeAlignedFunc
// callers: CBodyComponentPoint::NetworkVar_m_sceneNode::~NetworkVar_m_sceneNode, CEntityComponentHelperReferenced<CBodyComponentPoint>::Free, CGameSceneNode::~CGameSceneNode, CSkeletonInstance::CSkeletonInstance, CSkeletonInstance::~CSkeletonInstance
void __fastcall CGameSceneNode::~CGameSceneNode(CGameSceneNode *const this)
{
  BoneMergeInfo_t *m_pBoneMergeList; // rax

  this->_vptr_CGameSceneNode = &off_3FF7A10;
  m_pBoneMergeList = this->m_pBoneMergeList;
  if ( m_pBoneMergeList != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((m_pBoneMergeList & 0xFFFFFFFFFFFFFFF8LL) - 8));
    this->m_pBoneMergeList = 0;
  }
}


// CGameSceneNode::~CGameSceneNode  (line 614, @0x000000000209c8b0, libserver.so)
// calls: CGameSceneNode::~CGameSceneNode, operator delete
void __fastcall CGameSceneNode::~CGameSceneNode(CGameSceneNode *const this)
{
  CGameSceneNode::~CGameSceneNode(this);
  operator delete(this);
}


// CGameSceneNode::Connect  (line 630, @0x000000000209f810, libserver.so)  // inlines: CUtlStringToken, GetComponent<CBodyComponent>, MakeStringToken, NetworkStateChanged, Set, operator=<CUtlStringToken>, operator[]
// calls: CBodyComponent::DeclareGameSceneNode, MurmurHash2LowerCase, RegisterStringToken
// callers: CSkeletonInstance::Connect
void __fastcall CGameSceneNode::Connect(CGameSceneNode *const this, const char *pName, CEntityInstance *pEntity)
{
  uint32 v5; // r12d
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  CBodyComponent *v10; // rdi
  uint32 v11; // eax
  uint32 v12; // [rsp+Ch] [rbp-24h]

  v5 = 0;
  this->m_pOwner = pEntity;
  if ( pName != 0 && *pName != 0 )
  {
    v11 = MurmurHash2LowerCase(pName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v12 = v11;
      RegisterStringToken(v11, pName, 0, 1);
      v11 = v12;
    }
    v5 = v11;
  }
  if ( v5 != this->m_name.m_Value.m_nHashCode )
  {
    (*(this->_vptr_CGameSceneNode + 24))(this, 256, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_name.m_Value.m_nHashCode = v5;
  }
  m_pEntity = pEntity->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    if ( m_nBaseOffset != 0xFFFF )
    {
      v10 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
      if ( v10 != 0 )
        CBodyComponent::DeclareGameSceneNode(v10, this);
    }
  }
}


// CGameSceneNode::Spawn  (line 643, @0x00000000020ce3b0, libserver.so)  // inlines: AssignTo, Base, CalcAbsolutePosition, ConcatTransforms, Element, FindKeyHash, GeneratePrefixedKeyName<512ul>, Get<float>, GetClassNameAsCStr, GetEntityNameAsCStr, GetForModify, GetValue, GetValue<Vector>, GetValue<bool>, GetValue<float>, LargestComponentValue, Load, MakeEntityKeyId, MakeStringToken, NetworkStateChanged, NodeToWorldTransform, Set, String, VariantFieldTypeName, _MakePrefixedEntityKeyId, _V_strcmp, atof, matrix3x4a_t, memcpy, operator=, operator=<CGameSceneNodeHandle>, operator=<float>, operator[]
// calls: CEntityKeyValues::HasValue, AngleMatrix, V_sprintf_safe<512ul>, CGameSceneNodeHandle::Get, strtod, VariantFieldTypeName, Warning, CGameSceneNode::SetNodeToParentInternal, CGameSceneNode::CalcAbsolutePositionWhenDirty, MatrixInvert, ConcatTransforms, MurmurHash2LowerCase (18 total)
// callers: CSkeletonInstance::Spawn
// strings: "parentname", "useLocalOffset", "No conversion from %s to float now\n", "No free conversion of %s variant to EHANDLE2 right now\n", "Entity %s [%s]: Invalid keyvalue type for 'parentname' key of skeleton instance!\n", "No free conversion of %s variant to Vector right now\n" (29 total)
// globals: jpt_20CE690, CEntityKeyValues::sm_EmptyVariant, jpt_20CE6BE, jpt_20CEF9E, jpt_20CF01C
bool __fastcall CGameSceneNode::Spawn(
        CGameSceneNode *const this,
        CEntityInstance *pEntity,
        const char *pKeyValuePrefix,
        const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v11; // rdx
  CEntityVariant *p_m_value; // rcx
  int v13; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v14; // cx
  __int64 v15; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v16; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // rdx
  CEntityVariant *v18; // rdi
  Vector *p_m_vecAbsOrigin; // r15
  EntityKeyId_t v20; // r13d
  uint32 v21; // ecx
  CGameSceneNode::NetworkVar_m_hParent *v22; // r13
  int v23; // esi
  int v24; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v25; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v27; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v28; // rdx
  CEntityVariant *v29; // rdx
  int16 v30; // ax
  int16 m_type; // ax
  int v32; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v33; // cx
  __int64 v34; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v35; // rdx
  float m_float; // xmm0_4
  __int64 m_uint64; // rax
  const char *v38; // rax
  uint32 m_nHashCode; // eax
  CGameSceneNode *v41; // rax
  int v42; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v43; // si
  __int64 v44; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v45; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v46; // rdx
  CEntityVariant *v47; // rax
  char m_char; // al
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v49; // cx
  __int64 v50; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v51; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v52; // rdx
  CEntityVariant *v53; // rdi
  uint32 v54; // eax
  uint32 v55; // eax
  int16 v56; // dx
  float v57; // eax
  int16 v58; // ax
  double v59; // xmm0_8
  double v60; // xmm1_8
  double v61; // xmm2_8
  int16 v62; // ax
  float v63; // xmm1_4
  float v64; // xmm2_4
  const char *v65; // rax
  const char *m_pAsString; // r8
  CEntityIdentity *m_pEntity; // rax
  const char *v68; // rcx
  const char *v69; // rax
  const char *v70; // rax
  float v71; // xmm2_4
  float v72; // xmm1_4
  float v73; // xmm0_4
  float v74; // xmm0_4
  float v75; // xmm2_4
  float v76; // xmm1_4
  const char *v77; // rax
  int (**vptr_CGameSceneNodeHandle)(...); // rax
  CGameSceneNode::NetworkVar_m_hParent *p_m_hParent; // rdi
  int16 v80; // dx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v81; // rdx
  const char *v82; // rsi
  uint32 v83; // [rsp+0h] [rbp-2F0h]
  EHANDLE2 hParenta; // [rsp+8h] [rbp-2E8h]
  const QAngle *angles; // [rsp+10h] [rbp-2E0h]
  QAngle *anglesa; // [rsp+10h] [rbp-2E0h]
  uint32 anglesb; // [rsp+10h] [rbp-2E0h]
  matrix3x4a_t *in2; // [rsp+18h] [rbp-2D8h]
  float in2a; // [rsp+18h] [rbp-2D8h]
  matrix3x4a_t worldToParent; // [rsp+20h] [rbp-2D0h] BYREF
  matrix3x4_t out; // [rsp+50h] [rbp-2A0h] BYREF
  matrix3x4a_t m; // [rsp+80h] [rbp-270h] BYREF
  char pDest[512]; // [rsp+B0h] [rbp-240h] BYREF
  unsigned __int64 v95; // [rsp+2B8h] [rbp-38h]

  v95 = __readfsqword(0x28u);
  if ( CEntityKeyValues::HasValue(pKeyValues, 1579233963) )
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
          if ( m_pElements[i] == 1579233963 )
          {
LABEL_10:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v11 = pKeyValues->m_keyValues.m_pElements;
            else
              v11 = 0;
            p_m_value = &v11[i].m_value;
            goto LABEL_50;
          }
        }
        else if ( *(4 * i) == 1579233963 )
        {
          goto LABEL_10;
        }
      }
    }
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
LABEL_50:
    m_type = p_m_value->m_type;
    switch ( m_type )
    {
      case 0:
        goto LABEL_59;
      case 1:
        m_float = p_m_value->m_float;
        break;
      case 5:
        m_float = p_m_value->m_int;
        break;
      case 6:
        m_float = p_m_value->m_char;
        break;
      case 26:
        m_float = p_m_value->m_uint64;
        break;
      case 30:
        m_float = strtod(p_m_value->m_pszString, 0);
        break;
      case 33:
        m_uint64 = p_m_value->m_uint64;
        if ( p_m_value->m_int64 < 0 )
          goto LABEL_69;
        goto LABEL_66;
      case 34:
        m_float = p_m_value->m_float64;
        break;
      case 37:
        LODWORD(m_uint64) = p_m_value->m_int;
        goto LABEL_66;
      default:
        v38 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to float now\n", v38);
        m_float = 0.0;
        break;
    }
    goto LABEL_60;
  }
  if ( !CEntityKeyValues::HasValue(pKeyValues, 432137260) )
  {
    if ( CEntityKeyValues::HasValue(pKeyValues, -1985015852) )
    {
      v32 = pKeyValues->m_keyHashes.m_nCount;
      if ( v32 <= 0 )
      {
LABEL_180:
        m_uint64 = &CEntityKeyValues::sm_EmptyVariant;
      }
      else
      {
        v33 = pKeyValues->m_keyHashes.m_nAllocated;
        v34 = 0;
        while ( 1 )
        {
          if ( v33 != 0 )
          {
            v35 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
            if ( v33 > 9 )
              v35 = pKeyValues->m_keyHashes.m_pElements;
          }
          else
          {
            v35 = 0;
          }
          if ( v35[v34] == -1985015852 )
            break;
          if ( v32 <= ++v34 )
            goto LABEL_180;
        }
        if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
          v81 = pKeyValues->m_keyValues.m_pElements;
        else
          v81 = 0;
        m_uint64 = &v81[v34];
      }
      v80 = *(m_uint64 + 8);
      switch ( v80 )
      {
        case 0:
LABEL_59:
          m_float = 0.0;
          break;
        case 1:
          m_float = *m_uint64;
          break;
        case 5:
          m_float = *m_uint64;
          break;
        case 6:
          m_float = *m_uint64;
          break;
        case 26:
          m_float = *m_uint64;
          break;
        case 30:
          m_float = strtod(*m_uint64, 0);
          break;
        case 33:
          m_uint64 = *m_uint64;
          if ( m_uint64 >= 0 )
            goto LABEL_66;
LABEL_69:
          m_float = (m_uint64 & 1 | (m_uint64 >> 1)) + (m_uint64 & 1 | (m_uint64 >> 1));
          break;
        case 34:
          m_float = *m_uint64;
          break;
        case 37:
          LODWORD(m_uint64) = *m_uint64;
LABEL_66:
          m_float = m_uint64;
          break;
        default:
          switch ( v80 )
          {
            case 0:
              v82 = "void";
              break;
            case 1:
              v82 = "float";
              break;
            case 3:
              v82 = "vector";
              break;
            case 4:
              v82 = "quaternion";
              break;
            case 5:
              v82 = "integer";
              break;
            case 6:
              v82 = "boolean";
              break;
            case 8:
              v82 = "character";
              break;
            case 9:
              v82 = "color";
              break;
            case 13:
              v82 = "ehandle";
              break;
            case 25:
              v82 = "vector2d";
              break;
            case 26:
              v82 = "int64";
              break;
            case 27:
              v82 = "vector4d";
              break;
            case 28:
              v82 = "resourcehandle";
              break;
            case 30:
              v82 = "cstring";
              break;
            case 31:
              v82 = "hscript";
              break;
            case 32:
              v82 = "variant";
              break;
            case 33:
              v82 = "uint64";
              break;
            case 34:
              v82 = "float64";
              break;
            case 37:
              v82 = "unsigned";
              break;
            case 38:
              v82 = "utlstringtoken";
              break;
            case 39:
              v82 = "qangle";
              break;
            case 48:
              v82 = "hscript_lightbinding";
              break;
            case 49:
              v82 = "js_value";
              break;
            case 50:
              v82 = "js_object";
              break;
            case 51:
              v82 = "js_array";
              break;
            case 52:
              v82 = "js_raw_args";
              break;
            default:
              v82 = "unknown_variant_type";
              break;
          }
          Warning("No conversion from %s to float now\n", v82);
          m_float = 0.0;
          break;
      }
      goto LABEL_60;
    }
    p_m_vecAbsOrigin = &this->m_vecAbsOrigin;
    in2 = &this->m_mNodeToWorld;
    this->m_flAbsScale = 1.0;
    angles = &this->m_angAbsRotation;
    AngleMatrix(&this->m_angAbsRotation, &this->m_vecAbsOrigin, 1.0, &this->m_mNodeToWorld);
    this->m_bDirtyAttachments.m_value = 1;
    if ( pKeyValues != 0 )
      goto LABEL_27;
    if ( this->m_hParent.m_hOwner.m_Value.m_Index != -1 )
    {
      (*(this->m_hParent._vptr_CGameSceneNodeHandle + 2))(&this->m_hParent, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_hParent.m_hOwner.m_Value.m_Index = -1;
    }
    if ( this->m_hParent.m_name.m_Value.m_nHashCode != 0 )
    {
      (*(this->m_hParent._vptr_CGameSceneNodeHandle + 2))(&this->m_hParent, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_hParent.m_name.m_Value.m_nHashCode = 0;
    }
    vptr_CGameSceneNodeHandle = this->m_hParent._vptr_CGameSceneNodeHandle;
    p_m_hParent = &this->m_hParent;
LABEL_174:
    vptr_CGameSceneNodeHandle[1](p_m_hParent);
    CGameSceneNode::SetNodeToParentInternal(this, p_m_vecAbsOrigin, angles, this->m_flAbsScale);
    (*(this->_vptr_CGameSceneNode + 24))(this, 292, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hierarchyAttachName.m_Value.m_nHashCode = 0;
    return 1;
  }
  v13 = pKeyValues->m_keyHashes.m_nCount;
  if ( v13 <= 0 )
  {
LABEL_125:
    v18 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_126;
  }
  v14 = pKeyValues->m_keyHashes.m_nAllocated;
  v15 = 0;
  while ( v14 == 0 )
  {
    if ( *(4 * v15) == 432137260 )
      goto LABEL_22;
LABEL_19:
    if ( v13 <= ++v15 )
      goto LABEL_125;
  }
  v16 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v14 > 9 )
    v16 = pKeyValues->m_keyHashes.m_pElements;
  if ( v16[v15] != 432137260 )
    goto LABEL_19;
LABEL_22:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v17 = pKeyValues->m_keyValues.m_pElements;
  else
    v17 = 0;
  v18 = &v17[v15].m_value;
LABEL_126:
  v62 = v18->m_type;
  switch ( v62 )
  {
    case 0:
LABEL_127:
      v63 = 1.0;
      v64 = 1.0;
      m_float = 1.0;
      goto LABEL_128;
    case 30:
      if ( V_sscanf(v18->m_uint64, "%g %g %g", &m, &m.m_flMatVal[0][1], &m.m_flMatVal[0][2]) != 3 )
        goto LABEL_127;
      v76 = m.m_flMatVal[0][2];
      v75 = m.m_flMatVal[0][1];
      v74 = m.m_flMatVal[0][0];
      break;
    case 39:
    case 3:
      v74 = *v18->m_pszString;
      v75 = *(v18->m_uint64 + 4);
      v76 = *(v18->m_uint64 + 8);
      break;
    default:
      v70 = VariantFieldTypeName(v62);
      Warning("No free conversion of %s variant to Vector right now\n", v70);
      goto LABEL_127;
  }
  m_float = fabs(v74);
  v64 = fabs(v75);
  v63 = fabs(v76);
  if ( m_float <= v64 )
  {
LABEL_128:
    if ( v64 <= v63 )
      goto LABEL_129;
    if ( m_float <= v64 )
      m_float = v64;
  }
  else if ( m_float <= v63 )
  {
LABEL_129:
    m_float = v63;
  }
LABEL_60:
  this->m_flAbsScale = m_float;
  in2 = &this->m_mNodeToWorld;
  p_m_vecAbsOrigin = &this->m_vecAbsOrigin;
  angles = &this->m_angAbsRotation;
  AngleMatrix(&this->m_angAbsRotation, &this->m_vecAbsOrigin, m_float, &this->m_mNodeToWorld);
  this->m_bDirtyAttachments.m_value = 1;
LABEL_27:
  v20.m_nHashCode = 1166161001;
  if ( pKeyValuePrefix != 0 && *pKeyValuePrefix != 0 )
  {
    V_sprintf_safe<512ul>(pDest, "%s.%s", pKeyValuePrefix, "parentname");
    v21 = 0;
    if ( pDest[0] != 0 )
    {
      v54 = MurmurHash2LowerCase(pDest, 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
      {
        v83 = v54;
        RegisterStringToken(v54, pDest, 0, 1);
        v21 = v83;
      }
      else
      {
        v21 = v54;
      }
    }
    v20.m_nHashCode = v21;
  }
  if ( !CEntityKeyValues::HasValue(pKeyValues, v20) )
  {
LABEL_32:
    v22 = &this->m_hParent;
    goto LABEL_33;
  }
  v42 = pKeyValues->m_keyHashes.m_nCount;
  if ( v42 <= 0 )
  {
LABEL_109:
    v47 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_110;
  }
  v43 = pKeyValues->m_keyHashes.m_nAllocated;
  v44 = 0;
  while ( 2 )
  {
    if ( v43 == 0 )
    {
      if ( v20.m_nHashCode == *(4 * v44) )
        break;
      goto LABEL_85;
    }
    v45 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v43 > 9 )
      v45 = pKeyValues->m_keyHashes.m_pElements;
    if ( v20.m_nHashCode != v45[v44] )
    {
LABEL_85:
      if ( v42 <= ++v44 )
        goto LABEL_109;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v46 = pKeyValues->m_keyValues.m_pElements;
  else
    v46 = 0;
  v47 = &v46[v44].m_value;
LABEL_110:
  v56 = v47->m_type;
  if ( v56 == 30 )
  {
    CEntitySystem::FindFirstEntityHandleByName(g_pEntitySystem, v47->m_pszString);
    v57 = m.m_flMatVal[0][0];
    goto LABEL_112;
  }
  v57 = v47->m_float;
  if ( v56 != 13 )
  {
    v65 = VariantFieldTypeName(v56);
    Warning("No free conversion of %s variant to EHANDLE2 right now\n", v65);
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
    {
      m_pAsString = "";
      m_pEntity = pEntity->m_pEntity;
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      v68 = "";
      if ( m_pEntity->m_name.u.m_Id != 0 )
        v68 = m_pEntity->m_name.u.m_pAsString;
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        2,
        "Entity %s [%s]: Invalid keyvalue type for 'parentname' key of skeleton instance!\n",
        v68,
        m_pAsString);
    }
    goto LABEL_32;
  }
LABEL_112:
  v22 = &this->m_hParent;
  if ( LODWORD(v57) != this->m_hParent.m_hOwner.m_Value.m_Index )
  {
    hParenta.m_Index = LODWORD(v57);
    (*(this->m_hParent._vptr_CGameSceneNodeHandle + 2))(&this->m_hParent, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hParent.m_hOwner.m_Value = hParenta;
  }
  if ( this->m_hParent.m_name.m_Value.m_nHashCode != 0 )
  {
    (*(this->m_hParent._vptr_CGameSceneNodeHandle + 2))(&this->m_hParent, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hParent.m_name.m_Value.m_nHashCode = 0;
  }
  (*(this->m_hParent._vptr_CGameSceneNodeHandle + 1))(&this->m_hParent);
LABEL_33:
  if ( CGameSceneNodeHandle::Get(v22) == 0 )
  {
    if ( this->m_hParent.m_hOwner.m_Value.m_Index != -1 )
    {
      (*(this->m_hParent._vptr_CGameSceneNodeHandle + 2))(v22, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_hParent.m_hOwner.m_Value.m_Index = -1;
    }
    if ( this->m_hParent.m_name.m_Value.m_nHashCode != 0 )
    {
      (*(this->m_hParent._vptr_CGameSceneNodeHandle + 2))(v22, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_hParent.m_name.m_Value.m_nHashCode = 0;
    }
    vptr_CGameSceneNodeHandle = this->m_hParent._vptr_CGameSceneNodeHandle;
    p_m_hParent = v22;
    goto LABEL_174;
  }
  v23 = -618869580;
  if ( pKeyValuePrefix != 0 && *pKeyValuePrefix != 0 )
  {
    V_sprintf_safe<512ul>(pDest, "%s.%s", pKeyValuePrefix, "useLocalOffset");
    v23 = 0;
    if ( pDest[0] != 0 )
    {
      v55 = MurmurHash2LowerCase(pDest, 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
      {
        anglesb = v55;
        RegisterStringToken(v55, pDest, 0, 1);
        v23 = anglesb;
      }
      else
      {
        v23 = v55;
      }
    }
  }
  v24 = pKeyValues->m_keyHashes.m_nCount;
  if ( v24 > 0 )
  {
    v25 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( j = 0; v24 > j; ++j )
    {
      if ( v25 != 0 )
      {
        v27 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v25 > 9 )
          v27 = pKeyValues->m_keyHashes.m_pElements;
        if ( v27[j] == v23 )
        {
LABEL_45:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v28 = pKeyValues->m_keyValues.m_pElements;
          else
            v28 = 0;
          v29 = &v28[j].m_value;
          v30 = v29->m_type;
          if ( v30 != 0 )
            goto LABEL_48;
LABEL_73:
          m_nHashCode = this->m_hierarchyAttachName.m_Value.m_nHashCode;
          if ( m_nHashCode == 0 || m_nHashCode == -454460638 )
          {
            v41 = CGameSceneNodeHandle::Get(v22);
            if ( v41->m_bDirtyAbsTransform.m_value )
            {
              anglesa = v41;
              CGameSceneNode::CalcAbsolutePositionWhenDirty(v41);
              v41 = anglesa;
            }
            MatrixInvert(&v41->m_mNodeToWorld, &worldToParent);
            ConcatTransforms(&worldToParent, in2, &out);
            m = out;
            CGameSceneNode::SetNodeToParentInternal(this, &m);
          }
          else
          {
            CGameSceneNode::SetNodeToParentInternal(this, &vec3_origin, &vec3_angle, 1.0);
          }
          return 1;
        }
      }
      else if ( *(4 * j) == v23 )
      {
        goto LABEL_45;
      }
    }
  }
  v29 = &CEntityKeyValues::sm_EmptyVariant;
  v30 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v30 == 0 )
    goto LABEL_73;
LABEL_48:
  switch ( v30 )
  {
    case 1:
      m_char = v29->m_float != 0.0;
      goto LABEL_92;
    case 5:
    case 37:
      m_char = v29->m_int != 0;
      goto LABEL_92;
    case 6:
      m_char = v29->m_char;
      goto LABEL_92;
    case 26:
    case 33:
      m_char = v29->m_uint64 != 0;
      goto LABEL_92;
    case 30:
      if ( strcmp(v29->m_pszString, "0") == 0
        || strcmp(v29->m_pszString, "false") == 0
        || strcmp(v29->m_pszString, "no") == 0 )
      {
        goto LABEL_73;
      }
      if ( strcmp(v29->m_pszString, "1") == 0
        || strcmp(v29->m_pszString, "true") == 0
        || strcmp(v29->m_pszString, "yes") == 0 )
      {
        goto LABEL_93;
      }
      Warning("Invalid conversion : CString '%s' to bool\n", v29->m_pszString);
      goto LABEL_73;
    case 34:
      m_char = v29->m_float64 != 0.0;
LABEL_92:
      if ( m_char == 0 )
        goto LABEL_73;
LABEL_93:
      if ( v24 <= 0 )
        goto LABEL_117;
      v49 = pKeyValues->m_keyHashes.m_nAllocated;
      v50 = 0;
      break;
    default:
      v77 = VariantFieldTypeName(v30);
      Warning("No conversion from %s to bool now\n", v77);
      goto LABEL_73;
  }
  while ( 2 )
  {
    if ( v49 == 0 )
    {
      if ( *(4 * v50) == -1547964064 )
        break;
      goto LABEL_98;
    }
    v51 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v49 > 9 )
      v51 = pKeyValues->m_keyHashes.m_pElements;
    if ( v51[v50] != -1547964064 )
    {
LABEL_98:
      if ( v24 <= ++v50 )
      {
LABEL_117:
        v53 = &CEntityKeyValues::sm_EmptyVariant;
        goto LABEL_118;
      }
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v52 = pKeyValues->m_keyValues.m_pElements;
  else
    v52 = 0;
  v53 = &v52[v50].m_value;
LABEL_118:
  v58 = v53->m_type;
  switch ( v58 )
  {
    case 0:
LABEL_119:
      *&v59 = 1065353216;
      *&v60 = 1065353216;
      *&v61 = 1065353216;
      goto LABEL_120;
    case 30:
      if ( V_sscanf(v53->m_uint64, "%g %g %g", &m, &m.m_flMatVal[0][1], &m.m_flMatVal[0][2]) != 3 )
        goto LABEL_119;
      v73 = m.m_flMatVal[0][2];
      v72 = m.m_flMatVal[0][1];
      v71 = m.m_flMatVal[0][0];
      break;
    case 39:
    case 3:
      v71 = *v53->m_pszString;
      v72 = *(v53->m_uint64 + 4);
      v73 = *(v53->m_uint64 + 8);
      break;
    default:
      v69 = VariantFieldTypeName(v58);
      Warning("No free conversion of %s variant to Vector right now\n", v69);
      goto LABEL_119;
  }
  *&v61 = COERCE_UNSIGNED_INT(fabs(v71));
  *&v60 = COERCE_UNSIGNED_INT(fabs(v72));
  *&v59 = COERCE_UNSIGNED_INT(fabs(v73));
  if ( *&v61 <= *&v60 )
  {
LABEL_120:
    if ( *&v60 <= *&v59 )
      goto LABEL_123;
    v59 = v60;
    if ( *&v61 <= *&v60 )
      goto LABEL_123;
  }
  else if ( *&v61 <= *&v59 )
  {
    goto LABEL_123;
  }
  v59 = v61;
LABEL_123:
  if ( *&v59 != this->m_flScale.m_Value )
  {
    in2a = *&v59;
    (*(this->_vptr_CGameSceneNode + 24))(this, 212, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v59, v60, v61);
    this->m_flScale.m_Value = in2a;
  }
  return 1;
}


// CGameSceneNode::PreInstanceSpawn  (line 768, @0x00000000020cd0a0, libserver.so)  // inlines: MatrixSetColumn, NetworkStateChanged, Set, SetColumn, operator=, operator=<CGameSceneNodeHandle>, operator=<CUtlStringToken>, operator==, operator==<float>
// calls: CGameSceneNodeHandle::Get, AngleMatrix, CGameSceneNode::AttachToParent, SetIdentityMatrix
void __fastcall CGameSceneNode::PreInstanceSpawn(CGameSceneNode *const this)
{
  CGameSceneNode::NetworkVar_m_hParent *p_m_hParent; // r12
  CGameSceneNode *v3; // r13
  uint32 m_nHashCode; // r14d
  float m_Value; // xmm0_4
  matrix3x4a_t mNodeToParent; // [rsp+0h] [rbp-50h] BYREF

  p_m_hParent = &this->m_hParent;
  v3 = CGameSceneNodeHandle::Get(&this->m_hParent);
  m_nHashCode = this->m_hierarchyAttachName.m_Value.m_nHashCode;
  if ( this->m_hParent.m_hOwner.m_Value.m_Index != -1 )
  {
    (*(this->m_hParent._vptr_CGameSceneNodeHandle + 2))(p_m_hParent, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hParent.m_hOwner.m_Value.m_Index = -1;
  }
  if ( this->m_hParent.m_name.m_Value.m_nHashCode != 0 )
  {
    (*(this->m_hParent._vptr_CGameSceneNodeHandle + 2))(p_m_hParent, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hParent.m_name.m_Value.m_nHashCode = 0;
  }
  (*(this->m_hParent._vptr_CGameSceneNodeHandle + 1))(p_m_hParent);
  if ( this->m_hierarchyAttachName.m_Value.m_nHashCode != 0 )
  {
    (*(this->_vptr_CGameSceneNode + 24))(this, 292, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hierarchyAttachName.m_Value.m_nHashCode = 0;
  }
  if ( v3 != 0 )
  {
    if ( this->m_angRotation.m_Value.x == vec3_angle.x
      && vec3_angle.y == this->m_angRotation.m_Value.y
      && vec3_angle.z == this->m_angRotation.m_Value.z )
    {
      m_Value = this->m_flScale.m_Value;
      if ( m_Value == 1.0 )
      {
        SetIdentityMatrix(&mNodeToParent);
        mNodeToParent.m_flMatVal[0][3] = this->m_vecOrigin.m_Value.x;
        mNodeToParent.m_flMatVal[1][3] = this->m_vecOrigin.m_Value.y;
        mNodeToParent.m_flMatVal[2][3] = this->m_vecOrigin.m_Value.z;
        goto LABEL_11;
      }
    }
    else
    {
      m_Value = this->m_flScale.m_Value;
    }
    AngleMatrix(&this->m_angRotation.m_Value, &this->m_vecOrigin.m_Value, m_Value, &mNodeToParent);
LABEL_11:
    CGameSceneNode::AttachToParent(this, v3, m_nHashCode, &mNodeToParent);
  }
}


// CGameSceneNode::FinalizeHierarchyRecursive  (line 822, @0x00000000020cafc0, libserver.so)  // inlines: UpdateHierarchyBoneFlags
// calls: CGameSceneNode::FinalizeHierarchyUpdaterPostSpawn, CSkeletonInstance::DirtyHierarchyBoneFlags, CModelState::ComputeHierarchyBoneFlags, CGameSceneNode::DetachFromParent
// callers: CGameSceneNode::PostInstanceSpawn
void __fastcall CGameSceneNode::FinalizeHierarchyRecursive(CGameSceneNode *const this)
{
  CGameSceneNode *i; // rbx
  CSkeletonInstance *v3; // rax
  CSkeletonInstance *v4; // rbx

  if ( !CGameSceneNode::FinalizeHierarchyUpdaterPostSpawn(this) )
    CGameSceneNode::DetachFromParent(this);
  for ( i = this->m_pChild; i != 0; i = i->m_pNextSibling )
    CGameSceneNode::FinalizeHierarchyRecursive(i);
  v3 = (*(this->_vptr_CGameSceneNode + 9))(this);
  v4 = v3;
  if ( v3 != 0 )
  {
    CSkeletonInstance::DirtyHierarchyBoneFlags(v3);
    CModelState::ComputeHierarchyBoneFlags(&v4->m_modelState);
  }
}


// CGameSceneNode::PostInstanceSpawn  (line 850, @0x00000000020cb040, libserver.so)  // inlines: UpdateHierarchyBoneFlags
// calls: CGameSceneNode::FinalizeHierarchyRecursive, CSkeletonInstance::DirtyHierarchyBoneFlags, CModelState::ComputeHierarchyBoneFlags
// callers: CSkeletonInstance::PostInstanceSpawn
void __fastcall CGameSceneNode::PostInstanceSpawn(
        CGameSceneNode *const this,
        CUtlVector<CSkeletonAnimationController*,CUtlMemory<CSkeletonAnimationController*,int> > *const animationSetupWork)
{
  CGameSceneNode *m_pParent; // rdi
  CSkeletonInstance *v4; // rax
  CSkeletonInstance *v5; // rbx

  CGameSceneNode::FinalizeHierarchyRecursive(this);
  m_pParent = this->m_pParent;
  if ( m_pParent != 0 )
  {
    v4 = (*(m_pParent->_vptr_CGameSceneNode + 9))(m_pParent);
    v5 = v4;
    if ( v4 != 0 )
    {
      CSkeletonInstance::DirtyHierarchyBoneFlags(v4);
      CModelState::ComputeHierarchyBoneFlags(&v5->m_modelState);
    }
  }
}


// CGameSceneNode::OnRestore  (line 866, @0x00000000020bb150, libserver.so)
// calls: CGameSceneNodeHandle::Get, CGameSceneNode::StartHierarchicalAttachment
// callers: CSkeletonInstance::OnRestore
void __fastcall CGameSceneNode::OnRestore(
        CGameSceneNode *const this,
        CUtlVector<CSkeletonAnimationController*,CUtlMemory<CSkeletonAnimationController*,int> > *const animationSetupWork)
{
  if ( CGameSceneNodeHandle::Get(&this->m_hParent) != 0 )
    CGameSceneNode::StartHierarchicalAttachment(this);
}


// CGameSceneNode::PostDataUpdate  (line 875, @0x00000000020b8f50, libserver.so)
// calls: CGameSceneNodeHandle::Get, CGameSceneNode::UpdateEntityForHierarchyChange, CGameSceneNode::SetNodeToWorldInternal
// callers: CSkeletonInstance::PostDataUpdate
void __fastcall CGameSceneNode::PostDataUpdate(
        CGameSceneNode *const this,
        DataUpdateType_t type,
        CUtlVector<CSkeletonAnimationController*,CUtlMemory<CSkeletonAnimationController*,int> > *const animationSetupWork)
{
  char v4; // al
  char v5; // al
  unsigned int v6; // r12d
  char v7; // al
  CGameSceneNode::NetworkVar_m_hParent *p_m_hParent; // rdi
  int (**vptr_CGameSceneNode)(...); // rax
  CGameSceneNode *m_pParent; // r12

  v4 = *(this + 248) & 0xDF;
  *(this + 248) = v4;
  if ( type == DataUpdateType_t::DATA_UPDATE_CREATED
    && (p_m_hParent = &this->m_hParent,
        LOBYTE(p_m_hParent[8]._vptr_CGameSceneNodeHandle) = v4 | 0x1C,
        CGameSceneNodeHandle::Get(p_m_hParent) != 0)
    || ((v5 = *(this + 248)) & 1) != 0 )
  {
    vptr_CGameSceneNode = this->_vptr_CGameSceneNode;
    m_pParent = this->m_pParent;
    *(this + 248) &= ~1u;
    vptr_CGameSceneNode[16](this, 1, animationSetupWork);
    CGameSceneNode::UpdateEntityForHierarchyChange(this, m_pParent);
    v5 = *(this + 248);
  }
  v6 = 0;
  if ( (v5 & 4) != 0 )
  {
    v5 &= ~4u;
    LOBYTE(v6) = 1;
    *(this + 248) = v5;
  }
  if ( (v5 & 8) == 0 )
  {
    if ( (v5 & 0x10) == 0 )
    {
      if ( v6 == 0 )
        return;
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  v7 = v5 & 0xF7;
  v6 |= 2u;
  *(this + 248) = v7;
  if ( (v7 & 0x10) != 0 )
  {
LABEL_7:
    *(this + 248) &= ~0x10u;
    v6 |= 4u;
  }
LABEL_8:
  if ( this->m_nHierarchyType == 0 )
  {
    v6 |= 0x100u;
    CGameSceneNode::SetNodeToWorldInternal(
      this,
      &this->m_vecOrigin.m_Value,
      &this->m_angRotation.m_Value,
      this->m_flScale.m_Value);
  }
  (*(this->_vptr_CGameSceneNode + 11))(this, v6, animationSetupWork);
}


// CGameSceneNode::ReadTransformValue  (line 955, @0x00000000020c9b50, libserver.so)  // inlines: CalcAbsolutePosition, GetAbsAngles, GetAbsOrigin, GetAbsScale, GetLocalScale, Init, Load, ToInt, operator=
// calls: AngleQuaternion, CGameSceneNode::CalcAbsolutePositionWhenDirty
void __fastcall CGameSceneNode::ReadTransformValue(
        CGameSceneNode *const this,
        TransformHistory_t *pValue,
        int nCount,
        const IInterpolatedVar *pVar)
{
  CNetworkVectorBase<QAngle,CGameSceneNode::NetworkVar_m_angRotation> *p_m_angRotation; // rdi
  QuaternionAligned *p_m_orientation; // rsi
  vec_t x; // xmm2_4
  vec_t z; // xmm0_4
  QuaternionAligned *v10; // rsi
  vec_t y; // xmm2_4
  vec_t v12; // xmm0_4

  p_m_angRotation = &this->m_angRotation;
  p_m_orientation = &pValue->m_rootToParent.m_orientation;
  BYTE1(p_m_orientation[4].y) = 1;
  *&p_m_orientation[3].z = *&p_m_angRotation[-6].m_Value.x;
  p_m_orientation[4].x = p_m_angRotation[7].m_Value.z;
  p_m_orientation[3].x = p_m_angRotation[1].m_Value.x;
  x = p_m_angRotation[-5].m_Value.x;
  z = p_m_angRotation[-6].m_Value.z;
  p_m_orientation[-1].z = p_m_angRotation[-5].m_Value.y;
  p_m_orientation[-1].y = x;
  p_m_orientation[-1].x = z;
  p_m_orientation[-1].w = 0.0;
  AngleQuaternion(&p_m_angRotation->m_Value, p_m_orientation);
  if ( !pValue->m_bRootToWorldInvalid )
  {
    if ( this->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
    pValue->m_flRootToWorldScale = this->m_flAbsScale;
    if ( this->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
    v10 = &pValue->m_rootToWorld.m_orientation;
    y = this->m_vecAbsOrigin.y;
    v12 = this->m_vecAbsOrigin.x;
    pValue->m_rootToWorld.m_vPosition.z = this->m_vecAbsOrigin.z;
    pValue->m_rootToWorld.m_vPosition.y = y;
    pValue->m_rootToWorld.m_vPosition.x = v12;
    pValue->m_rootToWorld.m_vPosition.w = 0.0;
    if ( this->m_bDirtyAbsTransform.m_value )
    {
      CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
      v10 = &pValue->m_rootToWorld.m_orientation;
    }
    AngleQuaternion(&this->m_angAbsRotation, v10);
  }
  pValue->m_bRootToParentInvalid = 0;
}


// CGameSceneNode::WriteTransformValue  (line 1042, @0x00000000020cc0c0, libserver.so)  // inlines: AnglesAreEqual, CellFromCoord, CellInCoord, CoordFromCell, DecomposeMatrixForNode, Float2Int, FuzzyEqual, GetElement, GetEncoder, GetQuantizedFloatEncoderByIndex, LargestComponentValue, LatchComponent, MatrixAngles, MatrixInvert, NetworkComponentChanged, NetworkStateChanged, PositionsAreEqual, ScalesAreEqual, Set, TransformMatrix, Vector, fpmax, matrix3x4a_t, memcpy, operator!=, operator=, operator=<Vector>, operator=<float>
// calls: CGameSceneNode::ComputeBoneOrAttachmentToWorld, MatrixInvert, QuaternionMatrix, ConcatTransforms, MatrixAngles, AnglesAreEqual, QuaternionAngles, CFmtStrN<256, false>::CFmtStrN, Warning, __stack_chk_fail
// strings: "CNetworkOriginCellCoordQuantizedVector m_cell%c cell %d is outside of cell bounds (0->%d)
void __fastcall CGameSceneNode::WriteTransformValue(
        CGameSceneNode *const this,
        const TransformHistory_t *pValue,
        int nCount,
        const IInterpolatedVar *pVar,
        IVWriteOpType_t opType)
{
  CGameSceneNode *m_pParent; // rdi
  __m128 v8; // xmm3
  float v9; // xmm1_4
  float v10; // xmm0_4
  float m_flRootToParentScale; // xmm4_4
  float x; // xmm5_4
  __m128 x_low; // xmm2
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm6
  __m128 y_low; // xmm2
  __m128 v18; // xmm0
  __m128 v19; // xmm6
  unsigned int v20; // r12d
  bool v21; // al
  float v22; // xmm4_4
  float v23; // xmm3_4
  float m_Value; // xmm2_4
  bool v25; // al
  bool v26; // al
  __int64 v27; // r12
  int v28; // r13d
  CNetworkOriginCellCoordQuantizedVector *p_m_vecOrigin; // r15
  bool i; // zf
  CNetworkedQuantizedFloat *p_m_vecX; // r9
  int v32; // r14d
  int v33; // r14d
  int v34; // eax
  uint16 *p_m_cellX; // rax
  uint16 *p_m_cellY; // r11
  int v37; // r14d
  int v38; // edx
  float v39; // xmm0_4
  float v40; // xmm1_4
  __int64 v41; // rdx
  float v42; // xmm0_4
  CNetworkedQuantizedFloat *p_m_vecY; // rdx
  INetworkStateChangedRouter *v44; // rdi
  INetworkStateChangedRouter *v45; // rdi
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  INetworkStateChangedRouter *v47; // rdi
  int v48; // eax
  uint16 *v49; // [rsp+10h] [rbp-290h]
  float v50; // [rsp+10h] [rbp-290h]
  uint16 *v51; // [rsp+18h] [rbp-288h]
  float v52; // [rsp+18h] [rbp-288h]
  float v53; // [rsp+18h] [rbp-288h]
  CNetworkedQuantizedFloat *v54; // [rsp+18h] [rbp-288h]
  uint16 *p_m_cellZ; // [rsp+30h] [rbp-270h]
  CNetworkedQuantizedFloat *v56; // [rsp+30h] [rbp-270h]
  CNetworkedQuantizedFloat *v57; // [rsp+30h] [rbp-270h]
  float v58; // [rsp+3Ch] [rbp-264h]
  float flScale; // [rsp+40h] [rbp-260h]
  float flScalea; // [rsp+40h] [rbp-260h]
  float flScaleb; // [rsp+40h] [rbp-260h]
  float v62; // [rsp+50h] [rbp-250h]
  __int32 v63; // [rsp+50h] [rbp-250h]
  float v64; // [rsp+50h] [rbp-250h]
  float v65; // [rsp+50h] [rbp-250h]
  Vector vOrigin; // [rsp+60h] [rbp-240h] BYREF
  QAngle angles; // [rsp+70h] [rbp-230h] BYREF
  Vector vScale; // [rsp+80h] [rbp-220h] BYREF
  matrix3x4a_t nodeToParent; // [rsp+90h] [rbp-210h] BYREF
  matrix3x4a_t parentToWorld; // [rsp+C0h] [rbp-1E0h] BYREF
  matrix3x4a_t worldToParent; // [rsp+F0h] [rbp-1B0h] BYREF
  matrix3x4a_t nodeToWorld; // [rsp+120h] [rbp-180h] BYREF
  CFmtStrN<256,false> v73; // [rsp+150h] [rbp-150h] BYREF
  unsigned __int64 v74; // [rsp+268h] [rbp-38h]

  v74 = __readfsqword(0x28u);
  if ( !pValue->m_bRootToParentInvalid )
  {
    vOrigin = pValue->m_rootToParent.m_vPosition.Vector;
    QuaternionAngles(&pValue->m_rootToParent.m_orientation, &angles);
    m_flRootToParentScale = pValue->m_flRootToParentScale;
    v8 = 0x7FFFFFFFu;
    v58 = fabs(m_flRootToParentScale);
    goto LABEL_8;
  }
  m_pParent = this->m_pParent;
  if ( m_pParent == 0 )
  {
    vOrigin = pValue->m_rootToWorld.m_vPosition.Vector;
    QuaternionAngles(&pValue->m_rootToWorld.m_orientation, &angles);
    m_flRootToParentScale = pValue->m_flRootToWorldScale;
    v8 = 0x7FFFFFFFu;
    v58 = fabs(m_flRootToParentScale);
    goto LABEL_8;
  }
  CGameSceneNode::ComputeBoneOrAttachmentToWorld(m_pParent, this->m_hierarchyAttachName.m_Value, &parentToWorld);
  MatrixInvert(&parentToWorld, &nodeToWorld);
  nodeToParent.m_flMatVal[0][0] = pValue->m_flRootToWorldScale;
  worldToParent = nodeToWorld;
  nodeToParent.m_flMatVal[0][1] = nodeToParent.m_flMatVal[0][0];
  nodeToParent.m_flMatVal[0][2] = nodeToParent.m_flMatVal[0][0];
  QuaternionMatrix(
    &pValue->m_rootToWorld.m_orientation,
    &pValue->m_rootToWorld.m_vPosition,
    &nodeToParent,
    &nodeToWorld);
  ConcatTransforms(&worldToParent, &nodeToWorld, &nodeToParent);
  MatrixAngles(&nodeToParent, &angles, &vOrigin, &vScale);
  v8 = 0x7FFFFFFFu;
  v9 = fabs(vScale.x);
  v10 = fabs(vScale.y);
  m_flRootToParentScale = fabs(vScale.z);
  if ( v9 <= v10 )
  {
    if ( v10 <= m_flRootToParentScale )
      goto LABEL_6;
    m_flRootToParentScale = v10;
    if ( v9 <= v10 )
      goto LABEL_6;
  }
  else if ( v9 <= m_flRootToParentScale )
  {
    goto LABEL_6;
  }
  m_flRootToParentScale = v9;
LABEL_6:
  if ( fabs(m_flRootToParentScale - 1.0) < 0.001 )
  {
    m_flRootToParentScale = 1.0;
    v58 = 1.0;
  }
  else
  {
    v58 = fabs(m_flRootToParentScale);
  }
LABEL_8:
  x = vOrigin.x;
  x_low = LODWORD(this->m_vecOrigin.m_Value.x);
  v14 = _mm_and_ps(x_low, v8);
  v15.m128_i32[0] = 998244352;
  v14.m128_f32[0] = fmaxf(v14.m128_f32[0], COERCE_FLOAT(LODWORD(vOrigin.x) & v8.m128_i32[0])) * 0.00000023841858;
  v16 = _mm_cmplt_ss(v14, 0x3B800000u);
  if ( COERCE_FLOAT(_mm_andnot_ps(v16, v14).m128_u32[0] | v16.m128_i32[0] & 0x3B800000) < COERCE_FLOAT(
                                                                                            COERCE_UNSIGNED_INT(
                                                                                              x_low.m128_f32[0]
                                                                                            - vOrigin.x)
                                                                                          & v8.m128_i32[0])
    || (y_low = LODWORD(this->m_vecOrigin.m_Value.y),
        v18 = _mm_and_ps(y_low, v8),
        v18.m128_f32[0] = fmaxf(v18.m128_f32[0], COERCE_FLOAT(LODWORD(vOrigin.y) & v8.m128_i32[0])) * 0.00000023841858,
        v19 = _mm_cmplt_ss(v18, v15),
        COERCE_FLOAT(_mm_andnot_ps(v19, v18).m128_u32[0] | v19.m128_i32[0] & 0x3B800000) < COERCE_FLOAT(
                                                                                             COERCE_UNSIGNED_INT(
                                                                                               y_low.m128_f32[0]
                                                                                             - vOrigin.y)
                                                                                           & v8.m128_i32[0]))
    || fmaxf(
         0.00390625,
         fmaxf(
           COERCE_FLOAT(LODWORD(this->m_vecOrigin.m_Value.z) & v8.m128_i32[0]),
           COERCE_FLOAT(LODWORD(vOrigin.z) & v8.m128_i32[0]))
       * 0.00000023841858) < COERCE_FLOAT(COERCE_UNSIGNED_INT(this->m_vecOrigin.m_Value.z - vOrigin.z) & v8.m128_i32[0]) )
  {
    v27 = 0;
    flScalea = m_flRootToParentScale;
    v63 = v8.m128_i32[0];
    v28 = 0;
    p_m_vecOrigin = &this->m_vecOrigin;
    for ( i = vOrigin.x == this->m_vecOrigin.m_Value.x; ; i = x == *(&p_m_vecOrigin->m_Value.x + v27) )
    {
      if ( i )
      {
LABEL_30:
        if ( ++v27 == 3 )
          goto LABEL_58;
        goto LABEL_31;
      }
      *(&p_m_vecOrigin->m_Value.x + v27) = x;
      p_m_vecX = &this->m_vecOrigin.m_vecX;
      if ( v28 != 0 )
      {
        p_m_vecX = &this->m_vecOrigin.m_vecY;
        if ( v28 != 1 )
          p_m_vecX = &this->m_vecOrigin.m_vecZ;
      }
      if ( x < 0.0 )
      {
        v33 = (x + 16384.0) / 256;
      }
      else
      {
        v32 = x + 255;
        if ( x >= 0 )
          v32 = x;
        v33 = (v32 >> 8) + 64;
      }
      v34 = 1 << v28;
      if ( x < -16384.0 || x > 16384.0 )
      {
        if ( (this->m_vecOrigin.m_nOutsideWorld & v34) == 0 )
        {
          m_pStateChanged = this->m_vecOrigin.m_pStateChanged;
          this->m_vecOrigin.m_nOutsideWorld |= v34;
          if ( m_pStateChanged != 0 )
          {
            v53 = x;
            v57 = p_m_vecX;
            m_pStateChanged->NetworkStateChanged(&this->m_vecOrigin,
              18,
              0xFFFFFFFFLL,
              0xFFFFFFFFLL);
            p_m_vecX = v57;
            x = v53;
          }
          qmemcpy(&nodeToWorld, "XYZ", 3);
          v50 = x;
          v54 = p_m_vecX;
          CFmtStrN<256,false>::CFmtStrN(
            &v73,
            "CNetworkOriginCellCoordQuantizedVector m_cell%c cell %d is outside of cell bounds (0->%d) @(%f %f %f)\n",
            *(nodeToWorld.m_flMatVal[0] + v27),
            v33,
            128,
            this->m_vecOrigin.m_Value.x,
            this->m_vecOrigin.m_Value.y,
            this->m_vecOrigin.m_Value.z);
          v47 = this->m_vecOrigin.m_pStateChanged;
          if ( v47 != 0 )
          {
            (*(v47->_vptr_INetworkStateChangedRouter + 1))(v47, v73.m_szBuf);
            p_m_vecX = v54;
            x = v50;
          }
          else
          {
            Warning("%s", v73.m_szBuf);
            x = v50;
            p_m_vecX = v54;
          }
        }
        v48 = 0;
        if ( v33 >= 0 )
          v48 = v33;
        v33 = 127;
        if ( v48 <= 127 )
          v33 = v48;
        if ( x > 16384.0 )
        {
          x = 16384.0;
          p_m_cellX = &this->m_vecOrigin.m_cellX;
          *&nodeToWorld.m_flMatVal[1][0] = &this->m_vecOrigin.m_cellZ;
          p_m_cellY = &this->m_vecOrigin.m_cellY;
          *&nodeToWorld.m_flMatVal[0][0] = &this->m_vecOrigin.m_cellX;
          *&nodeToWorld.m_flMatVal[0][2] = &this->m_vecOrigin.m_cellY;
          p_m_cellZ = &this->m_vecOrigin.m_cellZ;
          **&nodeToWorld.m_flMatVal[0][2 * v27] = v33;
          v37 = (v33 << 8) - 0x4000;
          v38 = abs32(v37);
LABEL_43:
          v39 = x - v38;
          goto LABEL_44;
        }
        if ( x < -16384.0 )
        {
          x = -16384.0;
          p_m_cellX = &this->m_vecOrigin.m_cellX;
          *&nodeToWorld.m_flMatVal[1][0] = &this->m_vecOrigin.m_cellZ;
          p_m_cellY = &this->m_vecOrigin.m_cellY;
          *&nodeToWorld.m_flMatVal[0][0] = &this->m_vecOrigin.m_cellX;
          *&nodeToWorld.m_flMatVal[0][2] = &this->m_vecOrigin.m_cellY;
          p_m_cellZ = &this->m_vecOrigin.m_cellZ;
          **&nodeToWorld.m_flMatVal[0][2 * v27] = v33;
          v37 = (v33 << 8) - 0x4000;
          v38 = abs32(v37);
          goto LABEL_79;
        }
      }
      else if ( (this->m_vecOrigin.m_nOutsideWorld & v34) != 0 && 16384.0 - COERCE_FLOAT(v63 & LODWORD(x)) > 1.0 )
      {
        v45 = this->m_vecOrigin.m_pStateChanged;
        this->m_vecOrigin.m_nOutsideWorld &= ~v34;
        if ( v45 != 0 )
        {
          v52 = x;
          v56 = p_m_vecX;
          v45->NetworkStateChanged(&this->m_vecOrigin, 18, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          p_m_vecX = v56;
          x = v52;
        }
      }
      p_m_cellX = &this->m_vecOrigin.m_cellX;
      *&nodeToWorld.m_flMatVal[1][0] = &this->m_vecOrigin.m_cellZ;
      p_m_cellY = &this->m_vecOrigin.m_cellY;
      *&nodeToWorld.m_flMatVal[0][0] = &this->m_vecOrigin.m_cellX;
      *&nodeToWorld.m_flMatVal[0][2] = &this->m_vecOrigin.m_cellY;
      p_m_cellZ = &this->m_vecOrigin.m_cellZ;
      **&nodeToWorld.m_flMatVal[0][2 * v27] = v33;
      v37 = (v33 << 8) - 0x4000;
      v38 = abs32(v37);
      if ( x >= 0.0 )
        goto LABEL_43;
LABEL_79:
      v39 = v38 + x;
LABEL_44:
      v40 = 256.0;
      if ( v39 <= 256.0 )
        v40 = fmaxf(0.0, v39);
      v41 = g_pQuantizedFloatEncoders + 32LL * p_m_vecX->m_nEncoder;
      v42 = *(v41 + 12);
      if ( v40 <= v42 )
        v42 = fmaxf(*(v41 + 8), v40);
      p_m_vecX->m_Value = v42;
      p_m_vecY = &this->m_vecOrigin.m_vecX;
      *(&p_m_vecOrigin->m_Value.x + v27) = v37 + v42;
      if ( v28 != 0 )
      {
        p_m_vecY = &this->m_vecOrigin.m_vecY;
        if ( v28 != 1 )
          p_m_vecY = &this->m_vecOrigin.m_vecZ;
      }
      v44 = this->m_vecOrigin.m_pStateChanged;
      if ( v44 != 0 )
      {
        v49 = p_m_cellY;
        v51 = p_m_cellX;
        v44->NetworkStateChanged(&this->m_vecOrigin,
          p_m_vecY - p_m_vecOrigin,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        v44 = this->m_vecOrigin.m_pStateChanged;
        p_m_cellY = v49;
        p_m_cellX = v51;
      }
      if ( v28 != 0 )
      {
        p_m_cellX = p_m_cellZ;
        if ( v28 == 1 )
          p_m_cellX = p_m_cellY;
      }
      if ( v44 == 0 )
        goto LABEL_30;
      ++v27;
      v44->NetworkStateChanged(&this->m_vecOrigin,
        p_m_cellX - p_m_vecOrigin,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      if ( v27 == 3 )
      {
LABEL_58:
        m_flRootToParentScale = flScalea;
        v20 = 1;
        v8.m128_i32[0] = v63;
        goto LABEL_12;
      }
LABEL_31:
      x = *(&vOrigin.x + v27);
      v28 = v27;
    }
  }
  v20 = 0;
LABEL_12:
  flScale = v8.m128_f32[0];
  v62 = m_flRootToParentScale;
  v21 = AnglesAreEqual(angles.x, 0.001, v8.m128_f32[0]);
  v22 = v62;
  v23 = flScale;
  if ( !v21
    || (v25 = AnglesAreEqual(angles.y, 0.001, flScale), v22 = v62, v23 = flScale, !v25)
    || (v26 = AnglesAreEqual(angles.z, 0.001, flScale), v22 = v62, v23 = flScale, !v26) )
  {
    v20 |= 2u;
    if ( angles.x != this->m_angRotation.m_Value.x
      || angles.y != this->m_angRotation.m_Value.y
      || angles.z != this->m_angRotation.m_Value.z )
    {
      flScaleb = v23;
      v64 = v22;
      (*(this->_vptr_CGameSceneNode + 24))(this, 200, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v23 = flScaleb;
      this->m_angRotation.m_Value = angles;
      v22 = v64;
    }
  }
  m_Value = this->m_flScale.m_Value;
  if ( fmaxf(0.001, fmaxf(COERCE_FLOAT(LODWORD(v23) & LODWORD(m_Value)), v58) * 0.000011920929) < COERCE_FLOAT(COERCE_UNSIGNED_INT(m_Value - v22) & LODWORD(v23)) )
  {
    v20 |= 4u;
    if ( m_Value != v22 )
    {
      v65 = v22;
      (*(this->_vptr_CGameSceneNode + 24))(this, 212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flScale.m_Value = v65;
    }
    goto LABEL_19;
  }
  if ( v20 != 0 )
LABEL_19:
    (*(this->_vptr_CGameSceneNode + 11))(this, v20);
}


// CGameSceneNode::Lerp_NoCopy  (line 1104, @0x00000000020af210, libserver.so)  // inlines: GetHierarchyAttachName, Init, LerpNoCopy<CTransform>, LerpNoCopy<float>, LerpNoCopy_CheckForEqual<float>, ToInt, VectorAdd, VectorMultiply, operator*, operator+, operator=
// calls: TransformHistory_t::UsesSameParentSpace, CGameSceneNodeHandle::Get, QuaternionSlerp
// callers: CGameSceneNode::LoopingLerp_NoCopy
void __fastcall CGameSceneNode::Lerp_NoCopy(
        CGameSceneNode *const this,
        TransformHistory_t *const out,
        float flPercent,
        const TransformHistory_t *const A,
        const TransformHistory_t *const B)
{
  __int64 m_nHashCode; // rax
  __int64 m_Index; // rdx
  bool v11; // al
  float v12; // xmm1_4
  bool v13; // al
  vec_t v14; // xmm2_4
  vec_t v15; // xmm1_4
  vec_t v16; // xmm1_4
  vec_t v17; // xmm2_4
  vec_t v18; // xmm3_4
  CGameSceneNode *v19; // r14
  float v20; // xmm5_4
  vec_t v21; // xmm0_4
  float v22; // xmm4_4
  float m_flRootToParentScale; // xmm0_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm5_4
  vec_t v27; // xmm0_4
  float v28; // xmm4_4
  float m_flRootToWorldScale; // xmm0_4
  float v30; // xmm3_4
  float v31; // xmm5_4
  vec_t v32; // xmm0_4
  float v33; // xmm4_4
  float v34; // xmm3_4
  float v35; // xmm0_4
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  vec_t w; // xmm0_4
  vec_t z; // xmm1_4
  vec_t v40; // xmm2_4
  vec_t v41; // xmm3_4
  float v42; // xmm0_4
  float v43; // [rsp+8h] [rbp-28h]
  float flPercentb; // [rsp+Ch] [rbp-24h]

  out->m_hierarchyAttachName.m_nHashCode = this->m_hierarchyAttachName.m_Value.m_nHashCode;
  m_nHashCode = this->m_hParent.m_name.m_Value.m_nHashCode;
  m_Index = this->m_hParent.m_hOwner.m_Value.m_Index;
  out->m_bRootToParentInvalid = 0;
  out->m_bRootToWorldInvalid = 1;
  out->m_parentGSNHandle = m_Index | (m_nHashCode << 32);
  v11 = TransformHistory_t::UsesSameParentSpace(A, B);
  v12 = flPercent;
  if ( v11 && (v13 = TransformHistory_t::UsesSameParentSpace(A, out), v12 = flPercent, v13) )
  {
    v19 = CGameSceneNodeHandle::Get(&this->m_hParent);
    v20 = B->m_rootToParent.m_vPosition.x * flPercent;
    v21 = (A->m_rootToParent.m_vPosition.z * (1.0 - flPercent)) + (B->m_rootToParent.m_vPosition.z * flPercent);
    v22 = (1.0 - flPercent) * A->m_rootToParent.m_vPosition.x;
    out->m_rootToParent.m_vPosition.y = (A->m_rootToParent.m_vPosition.y * (1.0 - flPercent))
                                      + (B->m_rootToParent.m_vPosition.y * flPercent);
    out->m_rootToParent.m_vPosition.w = 0.0;
    out->m_rootToParent.m_vPosition.z = v21;
    out->m_rootToParent.m_vPosition.x = v22 + v20;
    QuaternionSlerp(
      &A->m_rootToParent.m_orientation,
      &B->m_rootToParent.m_orientation,
      flPercent,
      &out->m_rootToParent.m_orientation);
    m_flRootToParentScale = A->m_flRootToParentScale;
    v24 = B->m_flRootToParentScale;
    v25 = 1.0 - flPercent;
    if ( m_flRootToParentScale == v24 )
      out->m_flRootToParentScale = m_flRootToParentScale;
    else
      out->m_flRootToParentScale = (v24 * flPercent) + (m_flRootToParentScale * v25);
    if ( v19 != 0 )
    {
      v26 = B->m_rootToWorld.m_vPosition.x * flPercent;
      v27 = (A->m_rootToWorld.m_vPosition.z * v25) + (B->m_rootToWorld.m_vPosition.z * flPercent);
      v28 = v25 * A->m_rootToWorld.m_vPosition.x;
      out->m_rootToWorld.m_vPosition.y = (A->m_rootToWorld.m_vPosition.y * v25)
                                       + (B->m_rootToWorld.m_vPosition.y * flPercent);
      out->m_rootToWorld.m_vPosition.w = 0.0;
      out->m_rootToWorld.m_vPosition.z = v27;
      out->m_rootToWorld.m_vPosition.x = v28 + v26;
      QuaternionSlerp(
        &A->m_rootToWorld.m_orientation,
        &B->m_rootToWorld.m_orientation,
        flPercent,
        &out->m_rootToWorld.m_orientation);
      m_flRootToWorldScale = A->m_flRootToWorldScale;
      v30 = B->m_flRootToWorldScale;
      if ( m_flRootToWorldScale == v30 )
        out->m_flRootToWorldScale = m_flRootToWorldScale;
      else
        out->m_flRootToWorldScale = (flPercent * v30) + ((1.0 - flPercent) * m_flRootToWorldScale);
    }
    else
    {
      y = out->m_rootToParent.m_vPosition.y;
      x = out->m_rootToParent.m_vPosition.x;
      out->m_rootToWorld.m_vPosition.z = out->m_rootToParent.m_vPosition.z;
      w = out->m_rootToParent.m_orientation.w;
      out->m_rootToWorld.m_vPosition.y = y;
      out->m_rootToWorld.m_vPosition.x = x;
      z = out->m_rootToParent.m_orientation.z;
      v40 = out->m_rootToParent.m_orientation.y;
      out->m_rootToWorld.m_orientation.w = w;
      v41 = out->m_rootToParent.m_orientation.x;
      out->m_rootToWorld.m_orientation.z = z;
      v42 = out->m_flRootToParentScale;
      out->m_rootToWorld.m_orientation.y = v40;
      out->m_rootToWorld.m_orientation.x = v41;
      out->m_flRootToWorldScale = v42;
    }
  }
  else
  {
    if ( v12 == 1.0 )
    {
      v14 = B->m_rootToWorld.m_vPosition.y;
      v15 = B->m_rootToWorld.m_vPosition.z;
      out->m_rootToWorld.m_vPosition.x = B->m_rootToWorld.m_vPosition.x;
      out->m_rootToWorld.m_vPosition.y = v14;
      out->m_rootToWorld.m_vPosition.z = v15;
      v16 = B->m_rootToWorld.m_orientation.w;
      v17 = B->m_rootToWorld.m_orientation.z;
      v18 = B->m_rootToWorld.m_orientation.y;
      out->m_rootToWorld.m_orientation.x = B->m_rootToWorld.m_orientation.x;
      out->m_rootToWorld.m_orientation.z = v17;
      out->m_rootToWorld.m_orientation.y = v18;
      out->m_rootToWorld.m_orientation.w = v16;
      out->m_flRootToWorldScale = B->m_flRootToWorldScale;
    }
    else
    {
      flPercentb = v12;
      v43 = 1.0 - v12;
      v31 = B->m_rootToWorld.m_vPosition.x * v12;
      v32 = (A->m_rootToWorld.m_vPosition.z * (1.0 - v12)) + (B->m_rootToWorld.m_vPosition.z * v12);
      v33 = (1.0 - v12) * A->m_rootToWorld.m_vPosition.x;
      out->m_rootToWorld.m_vPosition.y = (A->m_rootToWorld.m_vPosition.y * (1.0 - v12))
                                       + (B->m_rootToWorld.m_vPosition.y * v12);
      out->m_rootToWorld.m_vPosition.w = 0.0;
      out->m_rootToWorld.m_vPosition.z = v32;
      out->m_rootToWorld.m_vPosition.x = v33 + v31;
      QuaternionSlerp(
        &A->m_rootToWorld.m_orientation,
        &B->m_rootToWorld.m_orientation,
        v12,
        &out->m_rootToWorld.m_orientation);
      v34 = A->m_flRootToWorldScale;
      v35 = B->m_flRootToWorldScale;
      if ( v34 == v35 )
        out->m_flRootToWorldScale = v34;
      else
        out->m_flRootToWorldScale = (flPercentb * v35) + (v43 * v34);
    }
    out->m_bRootToParentInvalid = 1;
    out->m_bRootToWorldInvalid = 0;
  }
}


// CGameSceneNode::LoopingLerp_NoCopy  (line 1152, @0x00000000020af600, libserver.so)
// calls: CGameSceneNode::Lerp_NoCopy
void __fastcall CGameSceneNode::LoopingLerp_NoCopy(
        CGameSceneNode *const this,
        TransformHistory_t *const out,
        float flPercent,
        const TransformHistory_t *const A,
        const TransformHistory_t *const B)
{
  CGameSceneNode::Lerp_NoCopy(this, out, flPercent, A, B);
}


// CGameSceneNode::Lerp_Hermite_NoCopy  (line 1158, @0x00000000020af610, libserver.so)  // inlines: CTransform, GetHierarchyAttachName, Init, Lerp<CTransform>, Lerp_Hermite<CTransform>, Lerp_Hermite<float>, Lerp_Hermite_CheckForEqual<float>, ToInt, VectorAdd, VectorAligned, VectorMultiply, operator*, operator+, operator=
// calls: TransformHistory_t::UsesSameParentSpace, CGameSceneNodeHandle::Get, QuaternionSlerp
// callers: CGameSceneNode::LoopingLerp_Hermite_NoCopy
void __fastcall CGameSceneNode::Lerp_Hermite_NoCopy(
        CGameSceneNode *const this,
        TransformHistory_t *const out,
        const TransformHistory_t *const current,
        float t,
        const TransformHistory_t *const p0,
        const TransformHistory_t *const p1,
        const TransformHistory_t *const p2)
{
  __int64 m_nHashCode; // rax
  __int64 m_Index; // rdx
  bool v14; // al
  float v15; // xmm1_4
  bool v16; // al
  bool v17; // al
  vec_t x; // ecx
  vec_t w; // xmm14_4
  vec_t z; // xmm15_4
  vec_t y; // xmm4_4
  float v22; // xmm7_4
  float m_flRootToParentScale; // xmm0_4
  float v24; // xmm8_4
  float v25; // xmm9_4
  float v26; // xmm5_4
  float m_flRootToWorldScale; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm7_4
  float v30; // xmm5_4
  float v31; // xmm0_4
  float v32; // xmm3_4
  float v33; // xmm7_4
  float v34; // xmm6_4
  CGameSceneNode *pParent; // [rsp+8h] [rbp-68h]
  float v36; // [rsp+18h] [rbp-58h]
  float v37; // [rsp+18h] [rbp-58h]
  float v39; // [rsp+20h] [rbp-50h]
  vec_t v40; // [rsp+20h] [rbp-50h]
  vec_t v41; // [rsp+20h] [rbp-50h]
  float v42; // [rsp+24h] [rbp-4Ch]
  vec_t v43; // [rsp+24h] [rbp-4Ch]
  vec_t v44; // [rsp+24h] [rbp-4Ch]
  float v45; // [rsp+28h] [rbp-48h]
  vec_t v46; // [rsp+28h] [rbp-48h]
  vec_t v47; // [rsp+28h] [rbp-48h]
  Quaternion qt; // [rsp+30h] [rbp-40h] BYREF

  out->m_hierarchyAttachName.m_nHashCode = this->m_hierarchyAttachName.m_Value.m_nHashCode;
  m_nHashCode = this->m_hParent.m_name.m_Value.m_nHashCode;
  m_Index = this->m_hParent.m_hOwner.m_Value.m_Index;
  out->m_bRootToParentInvalid = 0;
  out->m_bRootToWorldInvalid = 1;
  out->m_parentGSNHandle = m_Index | (m_nHashCode << 32);
  v14 = TransformHistory_t::UsesSameParentSpace(p0, p1);
  v15 = t;
  if ( v14
    && (v16 = TransformHistory_t::UsesSameParentSpace(p0, p2), v15 = t, v16)
    && (v17 = TransformHistory_t::UsesSameParentSpace(p0, out), v15 = t, v17) )
  {
    v36 = t;
    pParent = CGameSceneNodeHandle::Get(&this->m_hParent);
    v42 = (p1->m_rootToParent.m_vPosition.y * (1.0 - v36)) + (p2->m_rootToParent.m_vPosition.y * v36);
    v45 = (p1->m_rootToParent.m_vPosition.z * (1.0 - v36)) + (p2->m_rootToParent.m_vPosition.z * v36);
    v39 = ((1.0 - v36) * p1->m_rootToParent.m_vPosition.x) + (p2->m_rootToParent.m_vPosition.x * v36);
    QuaternionSlerp(&p1->m_rootToParent.m_orientation, &p2->m_rootToParent.m_orientation, t, &qt);
    x = qt.x;
    out->m_rootToParent.m_vPosition.x = v39;
    w = qt.w;
    out->m_rootToParent.m_vPosition.y = v42;
    z = qt.z;
    out->m_rootToParent.m_vPosition.z = v45;
    y = qt.y;
    out->m_rootToParent.m_orientation.x = x;
    out->m_rootToParent.m_orientation.z = z;
    out->m_rootToParent.m_orientation.y = y;
    v22 = 1.0 - t;
    out->m_rootToParent.m_orientation.w = w;
    m_flRootToParentScale = p0->m_flRootToParentScale;
    v24 = p1->m_flRootToParentScale;
    v25 = p2->m_flRootToParentScale;
    if ( m_flRootToParentScale != v24 || m_flRootToParentScale != v25 )
    {
      v26 = t * (t * t);
      m_flRootToParentScale = (((v24 - m_flRootToParentScale) * ((v26 - ((t * t) + (t * t))) + t))
                             + (((((v26 + v26) - (3.0 * (t * t))) + 1.0) * v24)
                              + (((-2.0 * v26) + (3.0 * (t * t))) * v25)))
                            + ((v25 - v24) * (v26 - (t * t)));
    }
    out->m_flRootToParentScale = m_flRootToParentScale;
    if ( pParent != 0 )
    {
      v43 = (p1->m_rootToWorld.m_vPosition.y * v22) + (p2->m_rootToWorld.m_vPosition.y * t);
      v46 = (p1->m_rootToWorld.m_vPosition.z * v22) + (p2->m_rootToWorld.m_vPosition.z * t);
      v40 = (p1->m_rootToWorld.m_vPosition.x * v22) + (p2->m_rootToWorld.m_vPosition.x * t);
      QuaternionSlerp(&p1->m_rootToWorld.m_orientation, &p2->m_rootToWorld.m_orientation, t, &qt);
      out->m_rootToWorld.m_vPosition.x = v40;
      out->m_rootToWorld.m_vPosition.y = v43;
      out->m_rootToWorld.m_vPosition.z = v46;
      out->m_rootToWorld.m_orientation = qt;
      m_flRootToWorldScale = p0->m_flRootToWorldScale;
      v28 = p1->m_flRootToWorldScale;
      v29 = p2->m_flRootToWorldScale;
      if ( m_flRootToWorldScale != v28 || m_flRootToWorldScale != v29 )
      {
        v30 = t * (t * t);
        m_flRootToWorldScale = (((v28 - m_flRootToWorldScale) * ((v30 - ((t * t) + (t * t))) + t))
                              + (((((v30 + v30) - (3.0 * (t * t))) + 1.0) * v28)
                               + (((-2.0 * v30) + (3.0 * (t * t))) * v29)))
                             + ((v29 - v28) * (v30 - (t * t)));
      }
      out->m_flRootToWorldScale = m_flRootToWorldScale;
    }
    else
    {
      out->m_rootToWorld.m_vPosition.x = v39;
      out->m_rootToWorld.m_vPosition.y = v42;
      out->m_rootToWorld.m_vPosition.z = v45;
      out->m_rootToWorld.m_orientation.x = x;
      out->m_rootToWorld.m_orientation.y = y;
      out->m_rootToWorld.m_orientation.z = z;
      out->m_rootToWorld.m_orientation.w = w;
      out->m_flRootToWorldScale = m_flRootToParentScale;
    }
  }
  else
  {
    v37 = v15;
    v44 = (p1->m_rootToWorld.m_vPosition.y * (1.0 - v15)) + (p2->m_rootToWorld.m_vPosition.y * v15);
    v47 = (p1->m_rootToWorld.m_vPosition.z * (1.0 - v15)) + (p2->m_rootToWorld.m_vPosition.z * v15);
    v41 = ((1.0 - v15) * p1->m_rootToWorld.m_vPosition.x) + (p2->m_rootToWorld.m_vPosition.x * v15);
    QuaternionSlerp(&p1->m_rootToWorld.m_orientation, &p2->m_rootToWorld.m_orientation, v15, &qt);
    out->m_rootToWorld.m_vPosition.x = v41;
    out->m_rootToWorld.m_vPosition.y = v44;
    out->m_rootToWorld.m_vPosition.z = v47;
    out->m_rootToWorld.m_orientation = qt;
    v31 = p0->m_flRootToWorldScale;
    v32 = p1->m_flRootToWorldScale;
    v33 = p2->m_flRootToWorldScale;
    if ( v31 != v32 || v31 != v33 )
    {
      v34 = v37 * (v37 * v37);
      v31 = (((v32 - v31) * ((v34 - ((v37 * v37) + (v37 * v37))) + v37))
           + (((((v34 + v34) - (3.0 * (v37 * v37))) + 1.0) * v32) + (((-2.0 * v34) + (3.0 * (v37 * v37))) * v33)))
          + ((v33 - v32) * (v34 - (v37 * v37)));
    }
    out->m_flRootToWorldScale = v31;
    out->m_bRootToParentInvalid = 1;
    out->m_bRootToWorldInvalid = 0;
  }
}


// CGameSceneNode::LoopingLerp_Hermite_NoCopy  (line 1201, @0x00000000020afc20, libserver.so)
// calls: CGameSceneNode::Lerp_Hermite_NoCopy
void __fastcall CGameSceneNode::LoopingLerp_Hermite_NoCopy(
        CGameSceneNode *const this,
        TransformHistory_t *const out,
        const TransformHistory_t *const current,
        float t,
        const TransformHistory_t *const p0,
        const TransformHistory_t *const p1,
        const TransformHistory_t *const p2)
{
  CGameSceneNode::Lerp_Hermite_NoCopy(this, out, current, t, p0, p1, p2);
}


// CGameSceneNode::Activate  (line 1207, @0x000000000209c590, libserver.so)
void __fastcall CGameSceneNode::Activate(
        CGameSceneNode *const this,
        CEntityInstance *pEntity,
        ActivateType_t activateType)
{
  ;
}


// CGameSceneNode::OnSetDormant  (line 1241, @0x00000000020bb900, libserver.so)  // inlines: UpdateHierarchyBoneFlags
// calls: CGameSceneNode::EndHierarchicalAttachment, CSkeletonInstance::DirtyHierarchyBoneFlags, CModelState::ComputeHierarchyBoneFlags, CGameSceneNodeHandle::Get
// callers: CSkeletonInstance::OnSetDormant
void __fastcall CGameSceneNode::OnSetDormant(
        CGameSceneNode *const this,
        CEntityInstance *pEntity,
        EntityDormancyType_t nPrevDormancyType,
        EntityDormancyType_t nDormancyType)
{
  bool v5; // r12
  uint8 m_nHierarchyType; // r13
  CGameSceneNode *m_pParent; // rdi
  CSkeletonInstance *v8; // rax
  CSkeletonInstance *v9; // r13
  CSkeletonInstance *v10; // rax
  CSkeletonInstance *v11; // r13

  v5 = nDormancyType != EntityDormancyType_t::ENTITY_NOT_DORMANT;
  if ( this->m_bDormant != (nDormancyType != EntityDormancyType_t::ENTITY_NOT_DORMANT) )
  {
    if ( nDormancyType != EntityDormancyType_t::ENTITY_NOT_DORMANT )
    {
      m_nHierarchyType = this->m_nHierarchyType;
      CGameSceneNode::EndHierarchicalAttachment(this, 1);
      if ( m_nHierarchyType == 1 )
      {
        v10 = (*(this->_vptr_CGameSceneNode + 9))(this);
        v11 = v10;
        if ( v10 != 0 )
        {
          CSkeletonInstance::DirtyHierarchyBoneFlags(v10);
          CModelState::ComputeHierarchyBoneFlags(&v11->m_modelState);
        }
      }
      m_pParent = this->m_pParent;
      if ( m_pParent != 0 )
      {
        v8 = (*(m_pParent->_vptr_CGameSceneNode + 9))(m_pParent);
        v9 = v8;
        if ( v8 != 0 )
        {
          CSkeletonInstance::DirtyHierarchyBoneFlags(v8);
          CModelState::ComputeHierarchyBoneFlags(&v9->m_modelState);
          this->m_bDormant = v5;
          return;
        }
      }
    }
    else if ( CGameSceneNodeHandle::Get(&this->m_hParent) != 0 )
    {
      (*(this->_vptr_CGameSceneNode + 16))(this, 1);
    }
    this->m_bDormant = v5;
  }
}


// CGameSceneNode::UpdateOnRemove  (line 1282, @0x00000000020cb090, libserver.so)  // inlines: GetComponent<CBodyComponent>, operator[]
// calls: CGameSceneNode::DetachFromParent, CBodyComponent::UndeclareGameSceneNode
// callers: CSkeletonInstance::UpdateOnRemove
void __fastcall CGameSceneNode::UpdateOnRemove(CGameSceneNode *const this, CEntityInstance *pEntity)
{
  CGameSceneNode *m_pChild; // rdi
  CGameSceneNode *m_pNextSibling; // rbx
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  CBodyComponent *v9; // rdi

  CGameSceneNode::DetachFromParent(this);
  m_pChild = this->m_pChild;
  if ( m_pChild != 0 )
  {
    while ( 1 )
    {
      m_pNextSibling = m_pChild->m_pNextSibling;
      CGameSceneNode::DetachFromParent(m_pChild);
      if ( m_pNextSibling == 0 )
        break;
      m_pChild = m_pNextSibling;
    }
  }
  m_pEntity = pEntity->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    if ( m_nBaseOffset != 0xFFFF )
    {
      v9 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
      if ( v9 != 0 )
        CBodyComponent::UndeclareGameSceneNode(v9, this);
    }
  }
}


// CGameSceneNode::GetOwnerGameEntity  (line 1326, @0x00000000020afc30, libserver.so)
CGameEntity *__fastcall CGameSceneNode::GetOwnerGameEntity(const CGameSceneNode *const this)
{
  return this->m_pOwner;
}


// CGameSceneNode::GetOwnerEntity  (line 1331, @0x00000000020afc40, libserver.so)
// callers: CBaseEntity::StartTouch, CBaseEntity::Touch, CBaseEntity::EndTouch, CInfoParticleTarget::UpdateTransmitState, CBaseEntity::GetRootMoveParent, CBaseEntity::ComputeAbsPosition, CBaseEntity::ComputeAbsDirection, CPointEntity::ShouldTransmit, CBaseEntity::GetMoveParent, CBaseEntity::FirstMoveChild, CBaseEntity::NextMovePeer, CBaseEntity::GetFollowedEntity (135 total)
CBaseEntity *__fastcall CGameSceneNode::GetOwnerEntity(const CGameSceneNode *const this)
{
  return this->m_pOwner;
}


// CGameSceneNode::GetWorldGroupId  (line 1336, @0x00000000020afc50, libserver.so)  // inlines: GetOwnerEntity
// callers: CPhysicsGameSystem::DestroyHierarchyConstraint, CPhysicsGameSystem::CreateHierarchyConstraint
WorldGroupId_t __fastcall CGameSceneNode::GetWorldGroupId(const CGameSceneNode *const this)
{
  CEntityInstance *m_pOwner; // rdx
  WorldGroupId_t result; // eax

  m_pOwner = this->m_pOwner;
  result.m_nHashCode = 0;
  if ( m_pOwner != 0 )
    return m_pOwner->m_worldGroupId.m_nHashCode;
  return result;
}


// CGameSceneNode::HasFutureInterpolatedData  (line 1346, @0x00000000020afc70, libserver.so)
// callers: CLightComponent::UpdateSceneObjects
__int64 __fastcall CGameSceneNode::HasFutureInterpolatedData(const CGameSceneNode *const this, double a2, float flTime)
{
  return 0;
}


// CGameSceneNode::ResetPositionInterpolators  (line 1356, @0x00000000020afc80, libserver.so)
void __fastcall CGameSceneNode::ResetPositionInterpolators(CGameSceneNode *const this)
{
  ;
}


// CGameSceneNode::CreateInitialPositionHistorySamples  (line 1365, @0x00000000020afc90, libserver.so)
void __fastcall CGameSceneNode::CreateInitialPositionHistorySamples(
        CGameSceneNode *const this,
        int nPrevTick,
        const Vector *const vPrevLocalPosition,
        int nNextTick,
        const Vector *const vNextLocalPosition)
{
  ;
}


// CGameSceneNode::EstimateAbsVelocity  (line 1392, @0x00000000020afca0, libserver.so)  // inlines: operator=
void __fastcall CGameSceneNode::EstimateAbsVelocity(CGameSceneNode *const this, Vector *pVelocity)
{
  *pVelocity = vec3_origin;
}


// CGameSceneNode::FinalizeHierarchyUpdaterPostSpawn  (line 1469, @0x00000000020bb4e0, libserver.so)
// calls: CGameSceneNode::BuildBoneMergeWork, CSkeletonInstance::DirtyHierarchyBoneFlags
// callers: CGameSceneNode::FinalizeHierarchyRecursive
bool __fastcall CGameSceneNode::FinalizeHierarchyUpdaterPostSpawn(CGameSceneNode *const this)
{
  CGameSceneNode *m_pParent; // rsi
  CSkeletonInstance *v4; // rax

  m_pParent = this->m_pParent;
  if ( m_pParent == 0 || this->m_nHierarchyType != 1 || (m_pParent->m_pOwner->m_pEntity->m_flags & 2) != 0 )
    return 1;
  CGameSceneNode::BuildBoneMergeWork(this, m_pParent);
  if ( (*(this->m_pParent->_vptr_CGameSceneNode + 9))(this->m_pParent) != 0 )
  {
    v4 = (*(this->m_pParent->_vptr_CGameSceneNode + 9))(this->m_pParent);
    CSkeletonInstance::DirtyHierarchyBoneFlags(v4);
  }
  (*(this->_vptr_CGameSceneNode + 11))(this, 135);
  return 1;
}


// CGameSceneNode::ComputeBoneOrAttachmentToWorld  (line 1497, @0x00000000020cbf70, libserver.so)  // inlines: CalcAbsolutePosition, GetModelData, Load, NodeToWorldTransform, operator const RuntimeClass_t*
// calls: CModel::MasterSkeleton, CModelSkeleton::FindBoneIndexByHash, CSkeletonInstance::GetWorldSpaceTransform, CSkeletonInstance::LookupAttachment, CSkeletonInstance::GetAttachment, CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: CBodyComponent::ComputeBoneOrAttachmentToWorld, CGameSceneNode::WriteTransformValue, CGameSceneNode::AttachToParent
void __fastcall CGameSceneNode::ComputeBoneOrAttachmentToWorld(
        const CGameSceneNode *const this,
        CUtlStringToken nBoneOrAttachName,
        matrix3x4a_t *pBoneToWorld)
{
  int v6; // eax
  const CSkeletonInstance *v7; // rbx
  const CModel **m_pBinding; // rax
  const CModel *v9; // rdi
  const CModelSkeleton *v10; // rax
  int BoneIndexByHash; // eax
  const CSkeletonInstance *v12; // rbx
  AttachmentHandle_t v13; // al

  v6 = (*(this->_vptr_CGameSceneNode + 21))(this);
  if ( v6 == 2 )
  {
    v12 = (*(this->_vptr_CGameSceneNode + 10))(this);
    v13 = CSkeletonInstance::LookupAttachment(v12, nBoneOrAttachName);
    CSkeletonInstance::GetAttachment(v12, v13, pBoneToWorld);
  }
  else if ( v6 == 4 )
  {
    v7 = (*(this->_vptr_CGameSceneNode + 10))(this);
    m_pBinding = v7->m_modelState.m_hModel.m_Value.m_pBinding;
    if ( m_pBinding != 0 )
      v9 = *m_pBinding;
    else
      v9 = 0;
    v10 = CModel::MasterSkeleton(v9);
    BoneIndexByHash = CModelSkeleton::FindBoneIndexByHash(v10, nBoneOrAttachName.m_nHashCode);
    *pBoneToWorld = *CSkeletonInstance::GetWorldSpaceTransform(v7, BoneIndexByHash);
  }
  else
  {
    if ( this->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
    *&pBoneToWorld->m_flMatVal[0][0] = *&this->m_mNodeToWorld.m_flMatVal[0][0];
    *&pBoneToWorld->m_flMatVal[0][2] = *&this->m_mNodeToWorld.m_flMatVal[0][2];
    *&pBoneToWorld->m_flMatVal[1][0] = *&this->m_mNodeToWorld.m_flMatVal[1][0];
    *&pBoneToWorld->m_flMatVal[1][2] = *&this->m_mNodeToWorld.m_flMatVal[1][2];
    *&pBoneToWorld->m_flMatVal[2][0] = *&this->m_mNodeToWorld.m_flMatVal[2][0];
    *&pBoneToWorld->m_flMatVal[2][2] = *&this->m_mNodeToWorld.m_flMatVal[2][2];
  }
}


// CGameSceneNode::BuildBoneMergeWork  (line 1537, @0x00000000020afcd0, libserver.so)  // inlines: GetEntityNameAsCStr, GetModelData, MemAlloc_AllocAlignedFunc, String, V_memcpy, memcpy, operator const RuntimeClass_t*
// calls: CModel::MasterSkeleton, CModelSkeleton::NumBones, CModelSkeleton::BuildBoneMergeList, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CEntityInstance::GetEntityIndex, memcpy, __stack_chk_fail
// callers: CGameSceneNode::StartHierarchicalAttachment, CGameSceneNode::FinalizeHierarchyUpdaterPostSpawn
// strings: "CGameSceneNode::BuildBoneMergeWork: Invalid use of bonemerge-based hierarchy in non-skele, "CGameSceneNode::BuildBoneMergeWork: Tried to bone merge an entity that has no model or no
bool __fastcall CGameSceneNode::BuildBoneMergeWork(CGameSceneNode *const this, CGameSceneNode *pParent)
{
  __int64 v4; // r13
  __int64 v5; // rax
  const CModel **v6; // rax
  bool v7; // r14
  const CModel *v8; // rdi
  _QWORD *v9; // rax
  const CModelSkeleton *v10; // r14
  const CModel **v11; // rax
  const CModel *v12; // rdi
  const CModelSkeleton *v13; // r13
  int v14; // eax
  void *v15; // rsp
  int v16; // eax
  int v17; // r13d
  const char *m_pAsString; // r8
  CEntityIdentity *m_pEntity; // rax
  const char *v21; // rcx
  CEntityIdentity *v22; // rax
  CEntityInstance *m_pOwner; // rdi
  const char *v24; // rbx
  CEntityIdentity *v25; // rax
  CEntityIndex v26; // eax
  CEntityInstance *v27; // rdi
  const char *v28; // r12
  int32 m_Data; // r15d
  CEntityIdentity *v30; // rax
  CEntityIndex v31; // eax
  __int64 v32; // r14
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  size_t v36; // rdx
  _BYTE v37[48]; // [rsp+20h] [rbp-30h] BYREF

  *(this + 248) &= ~2u;
  *(this + 249) &= ~4u;
  v4 = (*(pParent->_vptr_CGameSceneNode + 9))(pParent);
  v5 = (*(this->_vptr_CGameSceneNode + 9))(this);
  if ( v4 == 0 || v5 == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
    {
      m_pAsString = "";
      m_pEntity = this->m_pOwner->m_pEntity;
      if ( m_pEntity->m_name.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_name.u.m_pAsString;
      v21 = "";
      v22 = pParent->m_pOwner->m_pEntity;
      if ( v22->m_name.u.m_Id != 0 )
        v21 = v22->m_name.u.m_pAsString;
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        2,
        "CGameSceneNode::BuildBoneMergeWork: Invalid use of bonemerge-based hierarchy in non-skeleton instance based enti"
        "ty %s / entity %s!\n",
        v21,
        m_pAsString);
    }
    return 0;
  }
  v6 = *(v5 + 480);
  v7 = 0;
  if ( v6 != 0 && (v8 = *v6, *v6 != 0) && (v9 = *(v4 + 480)) != 0 && *v9 != 0 )
  {
    v10 = CModel::MasterSkeleton(v8);
    v11 = *(v4 + 480);
    if ( v11 != 0 )
      v12 = *v11;
    else
      v12 = 0;
    v13 = CModel::MasterSkeleton(v12);
    v14 = CModelSkeleton::NumBones(v10);
    v15 = alloca((v14 << 6) + 32);
    v16 = CModelSkeleton::BuildBoneMergeList(v13, v10, (v37 & 0xFFFFFFFFFFFFFFEFLL), v14);
    v17 = v16;
    if ( v16 == 0 )
      return 0;
    v32 = (v16 - 1) << 6;
    if ( v32 == -128 )
    {
      v34 = 0;
    }
    else
    {
      v33 = (**g_pMemAlloc)(g_pMemAlloc, v32 + 151);
      v34 = (v33 + 23) & 0xFFFFFFFFFFFFFFF0LL;
      *(v34 - 8) = v33;
    }
    this->m_pBoneMergeList = v34;
    *v34 = *&g_MatrixIdentity.m_flMatVal[0][0];
    *(v34 + 8) = *&g_MatrixIdentity.m_flMatVal[0][2];
    *(v34 + 16) = *&g_MatrixIdentity.m_flMatVal[1][0];
    *(v34 + 24) = *&g_MatrixIdentity.m_flMatVal[1][2];
    v35 = *&g_MatrixIdentity.m_flMatVal[2][2];
    *(v34 + 32) = *&g_MatrixIdentity.m_flMatVal[2][0];
    v36 = v32 + 64;
    v7 = 1;
    *(v34 + 40) = v35;
    this->m_pBoneMergeList->m_nCount = v17;
    memcpy(this->m_pBoneMergeList->m_pList, (v37 & 0xFFFFFFFFFFFFFFEFLL), v36);
    *(this + 249) |= 4u;
  }
  else
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) == 0 )
      return 0;
    m_pOwner = this->m_pOwner;
    v24 = "";
    v25 = m_pOwner->m_pEntity;
    if ( v25->m_name.u.m_Id != 0 )
      v24 = v25->m_name.u.m_pAsString;
    v26.m_Data = CEntityInstance::GetEntityIndex(m_pOwner).m_Data;
    v27 = pParent->m_pOwner;
    v28 = "";
    m_Data = v26.m_Data;
    v30 = v27->m_pEntity;
    if ( v30->m_name.u.m_Id != 0 )
      v28 = v30->m_name.u.m_pAsString;
    v31.m_Data = CEntityInstance::GetEntityIndex(v27).m_Data;
    LoggingSystem_Log(
      LOG_ENTITY_SYSTEM,
      2,
      "CGameSceneNode::BuildBoneMergeWork: Tried to bone merge an entity that has no model or no parent model : [%d] \"%s"
      "\" / parent [%d] \"%s\"!\n",
      v31.m_Data,
      v28,
      m_Data,
      v24);
  }
  return v7;
}


// CGameSceneNode::GetBoneMergeCount  (line 1592, @0x00000000020affb0, libserver.so)
int __fastcall CGameSceneNode::GetBoneMergeCount(const CGameSceneNode *const this)
{
  BoneMergeInfo_t *m_pBoneMergeList; // rdx
  int result; // eax

  m_pBoneMergeList = this->m_pBoneMergeList;
  result = 0;
  if ( m_pBoneMergeList != 0 && this->m_nHierarchyType == 1 )
    return m_pBoneMergeList->m_nCount;
  return result;
}


// CGameSceneNode::GetBoneMergeInfo  (line 1599, @0x00000000020affe0, libserver.so)
const bone_merge_list_t *__fastcall CGameSceneNode::GetBoneMergeInfo(const CGameSceneNode *const this)
{
  BoneMergeInfo_t *m_pBoneMergeList; // rax
  const bone_merge_list_t *m_pList; // rdx
  const bone_merge_list_t *result; // rax

  m_pBoneMergeList = this->m_pBoneMergeList;
  if ( m_pBoneMergeList == 0 )
    return 0;
  m_pList = m_pBoneMergeList->m_pList;
  result = 0;
  if ( this->m_nHierarchyType == 1 )
    return m_pList;
  return result;
}


// CGameSceneNode::GetRootToBoneMergeTransformForModify  (line 1606, @0x00000000020b0010, libserver.so)
matrix3x4a_t *__fastcall CGameSceneNode::GetRootToBoneMergeTransformForModify(CGameSceneNode *const this)
{
  matrix3x4a_t *result; // rax

  result = 0;
  if ( this->m_nHierarchyType == 1 )
    return &this->m_pBoneMergeList->m_boneMergeBoneToRoot;
  return result;
}


// CGameSceneNode::StartHierarchicalAttachment  (line 1613, @0x00000000020bad30, libserver.so)  // inlines: AdjustChildHierarchyDepth_R, GetEntityNameAsCStr, GetHierarchyDepth, GetModelData, GetOwnerEntity, IncrementTransmitStateOwnedCounter, LinkIntoHierarchyTree, String, curtime, operator const RuntimeClass_t*
// calls: CGameSceneNodeHandle::Get, CModel::MasterSkeleton, CModelSkeleton::FindBoneIndexByHash, CGameSceneNode::AdjustChildHierarchyDepth_R, CNetworkTransmitComponent::IncrementTransmitStateOwnedCounter, CBaseEntity::SetTransmitState, CBaseEntity::SetAnimTime, CSkeletonInstance::LookupAttachment, LoggingSystem_IsChannelEnabled, CModel::pszName, LoggingSystem_Log, CGameSceneNode::BuildBoneMergeWork
// callers: CGameSceneNode::OnRestore, CGameSceneNode::OnHierarchyChanged, CSkeletonInstance::SetModel
// strings: "CGameSceneNode::StartHierarchicalAttachment: Encountered unknown attachment in parent ent, "CGameSceneNode::StartHierarchicalAttachment: Cannot specify a skeleton instance that has , "CGameSceneNode::StartHierarchicalAttachment: Invalid use of attachment-based hierarchy in, "CGameSceneNode::AddHierarchyUpdate: Encountered unknown bone in parent entity %s (model %, "CGameSceneNode::StartHierarchicalAttachment: Invalid use of bone-based hierarchy in non-s
bool __fastcall CGameSceneNode::StartHierarchicalAttachment(CGameSceneNode *const this)
{
  CGameSceneNode *v2; // rax
  CGameSceneNode *v3; // rbx
  CEntityInstance *m_pOwner; // r15
  int v5; // eax
  float v6; // xmm1_4
  uint8 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  const CModel **v10; // rax
  const CModel *v11; // rdi
  const CModelSkeleton *v12; // rax
  int BoneIndexByHash; // eax
  int16 v14; // dx
  unsigned int v15; // r14d
  int m_nHierarchicalDepth; // r13d
  CGameSceneNode *m_pChild; // rbx
  uint8 v18; // al
  int v19; // r13d
  CGameSceneNode *m_pParent; // rax
  CBaseEntity *v21; // rbx
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v24; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const CSkeletonInstance *v26; // rax
  AttachmentHandle_t v27; // al
  const CModel **m_pBinding; // rax
  const CModel *v29; // rdi
  const char *v30; // rax
  CEntityIdentity *m_pEntity; // rdx
  const char *m_pAsString; // rcx
  CEntityIdentity *v33; // rax
  const char *v34; // rcx
  const CModel **v35; // rax
  const CModel *v36; // rdi
  const char *v37; // rax
  CEntityIdentity *v38; // rdx
  const char *v39; // rcx
  CEntityIdentity *v40; // rax
  const char *v41; // rcx
  const CSkeletonInstance *v42; // [rsp+8h] [rbp-38h]

  v2 = CGameSceneNodeHandle::Get(&this->m_hParent);
  *(this + 248) &= ~2u;
  v3 = v2;
  m_pOwner = v2->m_pOwner;
  if ( m_pOwner == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
    {
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        2,
        "CGameSceneNode::StartHierarchicalAttachment: Cannot specify a skeleton instance that has no owner!\n");
      return 0;
    }
    return 0;
  }
  v5 = (*(v2->_vptr_CGameSceneNode + 21))(v2, this->m_hierarchyAttachName.m_Value.m_nHashCode);
  v7 = v5;
  if ( v5 == 2 )
  {
    v26 = (*(v3->_vptr_CGameSceneNode + 9))(v3);
    if ( v26 != 0 )
    {
      v42 = v26;
      v15 = 3;
      v27 = CSkeletonInstance::LookupAttachment(v26, this->m_hierarchyAttachName.m_Value);
      v14 = v27;
      if ( v27 != 0 )
        goto LABEL_11;
      if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
      {
        m_pBinding = v42->m_modelState.m_hModel.m_Value.m_pBinding;
        if ( m_pBinding != 0 )
          v29 = *m_pBinding;
        else
          v29 = 0;
        v30 = CModel::pszName(v29);
        m_pEntity = m_pOwner->m_pEntity;
        m_pAsString = "";
        if ( m_pEntity->m_name.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_name.u.m_pAsString;
        LoggingSystem_Log(
          LOG_ENTITY_SYSTEM,
          2,
          "CGameSceneNode::StartHierarchicalAttachment: Encountered unknown attachment in parent entity \"%s\" (model \"%s\")!\n",
          m_pAsString,
          v30);
      }
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
    {
      v33 = m_pOwner->m_pEntity;
      v34 = "";
      if ( v33->m_name.u.m_Id != 0 )
        v34 = v33->m_name.u.m_pAsString;
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        2,
        "CGameSceneNode::StartHierarchicalAttachment: Invalid use of attachment-based hierarchy in non-skeleton instance "
        "based entity %s!\n",
        v34);
    }
    return 0;
  }
  if ( v5 <= 2 )
  {
    if ( v5 == 1 )
    {
      *(this + 248) |= 2u;
      if ( (v3->m_pOwner->m_pEntity->m_flags & 2) == 0 && (this->m_pOwner->m_pEntity->m_flags & 2) == 0 )
        CGameSceneNode::BuildBoneMergeWork(this, v3);
      m_flCurrentTime = 0.0;
      v24 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            (m_pfnWarningFunc)(1, 0.0);
        }
        m_flCurrentTime = v24->m_flCurrentTime;
      }
      v15 = 131;
      CBaseEntity::SetAnimTime(this->m_pOwner, m_flCurrentTime, v6, 0);
      v14 = -1;
      goto LABEL_11;
    }
    return 0;
  }
  if ( v5 == 3 )
  {
    v15 = 3;
    v14 = -1;
    goto LABEL_11;
  }
  if ( v5 != 4 )
    return 0;
  v8 = (*(v3->_vptr_CGameSceneNode + 9))(v3);
  v9 = v8;
  if ( v8 == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
    {
      v40 = m_pOwner->m_pEntity;
      v41 = "";
      if ( v40->m_name.u.m_Id != 0 )
        v41 = v40->m_name.u.m_pAsString;
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        2,
        "CGameSceneNode::StartHierarchicalAttachment: Invalid use of bone-based hierarchy in non-skeleton instance based entity %s!\n",
        v41);
    }
    return 0;
  }
  v10 = *(v8 + 480);
  if ( v10 != 0 )
    v11 = *v10;
  else
    v11 = 0;
  v12 = CModel::MasterSkeleton(v11);
  BoneIndexByHash = CModelSkeleton::FindBoneIndexByHash(v12, this->m_hierarchyAttachName.m_Value.m_nHashCode);
  if ( BoneIndexByHash >= 0 )
  {
    v14 = BoneIndexByHash;
    v15 = 3;
LABEL_11:
    this->m_pParent = v3;
    this->m_nHierarchyType = v7;
    this->m_nParentAttachmentOrBone = v14;
    this->m_pNextSibling = v3->m_pChild;
    v3->m_pChild = this;
    m_nHierarchicalDepth = v3->m_nHierarchicalDepth;
    m_pChild = this->m_pChild;
    v18 = m_nHierarchicalDepth + 1;
    v19 = m_nHierarchicalDepth + 2;
    for ( this->m_nHierarchicalDepth = v18; m_pChild != 0; m_pChild = m_pChild->m_pNextSibling )
      CGameSceneNode::AdjustChildHierarchyDepth_R(m_pChild, v19);
    if ( this->m_bForceParentToBeNetworked )
    {
      m_pParent = this->m_pParent;
      if ( m_pParent != 0 )
        v21 = m_pParent->m_pOwner;
      else
        v21 = 0;
      CNetworkTransmitComponent::IncrementTransmitStateOwnedCounter(&v21->m_NetworkTransmitComponent);
      CBaseEntity::SetTransmitState(v21, 4);
    }
    (*(this->_vptr_CGameSceneNode + 11))(this, v15);
    return 1;
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) == 0 )
    return 0;
  v35 = *(v9 + 480);
  if ( v35 != 0 )
    v36 = *v35;
  else
    v36 = 0;
  v37 = CModel::pszName(v36);
  v38 = m_pOwner->m_pEntity;
  v39 = "";
  if ( v38->m_name.u.m_Id != 0 )
    v39 = v38->m_name.u.m_pAsString;
  LoggingSystem_Log(
    LOG_ENTITY_SYSTEM,
    2,
    "CGameSceneNode::AddHierarchyUpdate: Encountered unknown bone in parent entity %s (model %s)!\n",
    v39,
    v37);
  return 0;
}


// CGameSceneNode::ComputeAbsTransformForPreviousLatchSamples  (line 1755, @0x00000000020b0030, libserver.so)
void __fastcall CGameSceneNode::ComputeAbsTransformForPreviousLatchSamples(
        CGameSceneNode *const this,
        InterpolatedVarPhase_t ivPhase)
{
  ;
}


// CGameSceneNode::EndHierarchicalAttachment  (line 1861, @0x00000000020b08f0, libserver.so)  // inlines: DecrementTransmitStateOwnedCounter, GetOwnerEntity, MemAlloc_FreeAlignedFunc, curtime
// calls: CNetworkTransmitComponent::DecrementTransmitStateOwnedCounter, CBaseEntity::DispatchUpdateTransmitState, CGameSceneNode::UnlinkFromHierarchyTree, CBaseEntity::SetAnimTime
// callers: CGameSceneNode::OnSetDormant, CGameSceneNode::OnHierarchyChanged, CSkeletonInstance::SetModel, CSkeletonInstance::PostDataUpdate
// local variable allocation has failed, the output may be wrong!
void __fastcall CGameSceneNode::EndHierarchicalAttachment(CGameSceneNode *const this, bool bInPostDataUpdate)
{
  float v2; // xmm1_4
  CGameSceneNode *m_pParent; // rax
  CBaseEntity *m_pOwner; // r12
  BoneMergeInfo_t *m_pBoneMergeList; // rax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( this->m_bForceParentToBeNetworked )
  {
    m_pParent = this->m_pParent;
    if ( m_pParent != 0 )
    {
      m_pOwner = m_pParent->m_pOwner;
      CNetworkTransmitComponent::DecrementTransmitStateOwnedCounter(&m_pOwner->m_NetworkTransmitComponent);
      CBaseEntity::DispatchUpdateTransmitState(m_pOwner);
    }
  }
  if ( this->m_nHierarchyType == 1 )
  {
    m_flCurrentTime = 0.0;
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, bInPostDataUpdate, 0.0);
      }
      m_flCurrentTime = v8->m_flCurrentTime;
    }
    CBaseEntity::SetAnimTime(this->m_pOwner, m_flCurrentTime, v2, 0);
    (*(this->_vptr_CGameSceneNode + 11))(this, 128);
  }
  m_pBoneMergeList = this->m_pBoneMergeList;
  if ( m_pBoneMergeList != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((m_pBoneMergeList & 0xFFFFFFFFFFFFFFF8LL) - 8));
    this->m_pBoneMergeList = 0;
  }
  this->m_nHierarchyType = 0;
  *(this + 248) &= ~2u;
  this->m_nParentAttachmentOrBone = -1;
  this->m_nHierarchicalDepth = 0;
  CGameSceneNode::UnlinkFromHierarchyTree(this);
}


// CGameSceneNode::ComputeNodeToWorldForHierarchy  (line 1924, @0x00000000020cb960, libserver.so)  // inlines: GetModelData, operator const RuntimeClass_t*, operator[]
// calls: CModel::SetupAttachmentTransform, ConcatTransforms, CSkeletonInstance::GetBoneMergeBoneToRoot, CSkeletonInstance::GetAttachment
// callers: CGameSceneNode::PerformHierarchySetupWork
void __fastcall CGameSceneNode::ComputeNodeToWorldForHierarchy(
        CGameSceneNode *const this,
        const matrix3x4a_t *const mParentNodeToWorld,
        const CBoneAccessor<matrix3x4a_t> *const parentWorldSpaceBones,
        const matrix3x4a_t *const mChildNodeToParent,
        matrix3x4a_t *pChildNodeToWorld)
{
  uint8 m_nHierarchyType; // al
  const matrix3x4a_t *p_slaveBoneMergeBoneToRoot; // rdi
  const CSkeletonInstance *v12; // rax
  const CModel **m_pBinding; // rax
  const CModel *v14; // rdi
  const CSkeletonInstance *v15; // rax
  BoneMergeInfo_t *m_pBoneMergeList; // rdx
  unsigned int m_nCount; // r14d
  matrix3x4a_t slaveBoneMergeBoneToRoot; // [rsp+0h] [rbp-60h] BYREF

  m_nHierarchyType = this->m_nHierarchyType;
  if ( m_nHierarchyType == 1 )
  {
    v15 = (*(this->_vptr_CGameSceneNode + 9))(this, mParentNodeToWorld, parentWorldSpaceBones, mChildNodeToParent);
    m_pBoneMergeList = this->m_pBoneMergeList;
    if ( m_pBoneMergeList != 0 )
    {
      if ( parentWorldSpaceBones->m_pBones != 0 )
      {
        m_nCount = m_pBoneMergeList->m_nCount;
        CSkeletonInstance::GetBoneMergeBoneToRoot(v15, &slaveBoneMergeBoneToRoot);
        (*(*g_pAnimationSystem + 248LL))(
          g_pAnimationSystem,
          m_nCount,
          this->m_pBoneMergeList->m_pList,
          parentWorldSpaceBones->m_pBones,
          &slaveBoneMergeBoneToRoot,
          pChildNodeToWorld);
      }
    }
    else
    {
      *&pChildNodeToWorld->m_flMatVal[0][0] = *&mParentNodeToWorld->m_flMatVal[0][0];
      *&pChildNodeToWorld->m_flMatVal[0][2] = *&mParentNodeToWorld->m_flMatVal[0][2];
      *&pChildNodeToWorld->m_flMatVal[1][0] = *&mParentNodeToWorld->m_flMatVal[1][0];
      *&pChildNodeToWorld->m_flMatVal[1][2] = *&mParentNodeToWorld->m_flMatVal[1][2];
      *&pChildNodeToWorld->m_flMatVal[2][0] = *&mParentNodeToWorld->m_flMatVal[2][0];
      *&pChildNodeToWorld->m_flMatVal[2][2] = *&mParentNodeToWorld->m_flMatVal[2][2];
    }
    return;
  }
  if ( m_nHierarchyType == 3 )
  {
    p_slaveBoneMergeBoneToRoot = mParentNodeToWorld;
LABEL_14:
    if ( p_slaveBoneMergeBoneToRoot != 0 )
      goto LABEL_15;
    return;
  }
  if ( m_nHierarchyType != 4 )
  {
    if ( m_nHierarchyType != 2 )
      return;
    v12 = (*(this->m_pParent->_vptr_CGameSceneNode + 9))(this->m_pParent);
    if ( parentWorldSpaceBones->m_pBones != 0 )
    {
      m_pBinding = v12->m_modelState.m_hModel.m_Value.m_pBinding;
      if ( m_pBinding != 0 )
        v14 = *m_pBinding;
      else
        v14 = 0;
      CModel::SetupAttachmentTransform(
        v14,
        this->m_nParentAttachmentOrBone,
        mParentNodeToWorld,
        parentWorldSpaceBones->m_pBones,
        &slaveBoneMergeBoneToRoot);
    }
    else
    {
      CSkeletonInstance::GetAttachment(v12, this->m_nParentAttachmentOrBone, &slaveBoneMergeBoneToRoot);
    }
    p_slaveBoneMergeBoneToRoot = &slaveBoneMergeBoneToRoot;
LABEL_15:
    ConcatTransforms(p_slaveBoneMergeBoneToRoot, mChildNodeToParent, pChildNodeToWorld);
    return;
  }
  if ( parentWorldSpaceBones->m_pBones != 0 )
  {
    p_slaveBoneMergeBoneToRoot = &parentWorldSpaceBones->m_pBones[this->m_nParentAttachmentOrBone];
    goto LABEL_14;
  }
}


// CGameSceneNode::PerformHierarchySetupWork  (line 2034, @0x00000000020c7e00, libserver.so)  // inlines: CBoneAccessor, CalcAbsolutePosition, Cleanup, ComputeNodeToParent, GetWorldSpaceBones, GetWorldSpaceState, Init, Load, NodeToWorldTransform, operator=, ~CBoneAccessor
// calls: CSkeletonInstance::CalcWorldSpaceBones, operator delete [], AngleMatrix, CGameSceneNode::ComputeNodeToWorldForHierarchy, CGameSceneNode::SetNodeToWorldInternal, CGameSceneNode::CalcAbsolutePositionWhenDirty, CBoneAccessor<matrix3x4a_t>::Cleanup, _Unwind_Resume
// callers: CGameSceneNode::CalcAbsolutePositionWhenDirty
void __fastcall CGameSceneNode::PerformHierarchySetupWork(CGameSceneNode *const this)
{
  uint8 m_nHierarchyType; // al
  CSkeletonInstance *v3; // r13
  const uint32 *m_pReadableBones; // r14
  const matrix3x4a_t *m_pTransforms; // r15
  int m_nBoneCount; // r12d
  CGameSceneNode *m_pParent; // r13
  CGameSceneNode *v8; // r13
  CBoneAccessor<matrix3x4a_t> parentWorldSpaceBones; // [rsp+0h] [rbp-B0h] BYREF
  matrix3x4a_t mNodeToParent; // [rsp+20h] [rbp-90h] BYREF
  matrix3x4a_t mChildToWorld; // [rsp+50h] [rbp-60h] BYREF

  m_nHierarchyType = this->m_nHierarchyType;
  memset(&parentWorldSpaceBones, 0, 19);
  if ( m_nHierarchyType != 1 )
  {
    if ( m_nHierarchyType != 4 )
    {
LABEL_5:
      if ( m_nHierarchyType != 1 )
        AngleMatrix(&this->m_angRotation.m_Value, &this->m_vecOrigin.m_Value, this->m_flScale.m_Value, &mNodeToParent);
      m_pParent = this->m_pParent;
      if ( m_pParent->m_bDirtyAbsTransform.m_value )
        CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pParent);
      CGameSceneNode::ComputeNodeToWorldForHierarchy(
        this,
        &m_pParent->m_mNodeToWorld,
        &parentWorldSpaceBones,
        &mNodeToParent,
        &mChildToWorld);
      CGameSceneNode::SetNodeToWorldInternal(this, &mChildToWorld);
      goto LABEL_10;
    }
    v3 = (*(this->m_pParent->_vptr_CGameSceneNode + 9))(this->m_pParent);
    CSkeletonInstance::CalcWorldSpaceBones(v3, CModelSkeleton::BoneFlags_t::FLAG_ALL_BONE_FLAGS);
LABEL_4:
    m_pReadableBones = v3->m_modelState.m_simulationState.m_pReadableBones;
    m_pTransforms = v3->m_modelState.m_simulationState.m_pTransforms;
    m_nBoneCount = v3->m_modelState.m_simulationState.m_nBoneCount;
    m_nHierarchyType = this->m_nHierarchyType;
    parentWorldSpaceBones.m_bOwnsMemory = 0;
    parentWorldSpaceBones.m_pBones = m_pTransforms;
    parentWorldSpaceBones.m_pReadableBones = m_pReadableBones;
    parentWorldSpaceBones.m_nBones = m_nBoneCount;
    goto LABEL_5;
  }
  v8 = this->m_pParent;
  if ( (this->m_pOwner->m_pEntity->m_flags & 2) == 0 && (v8->m_pOwner->m_pEntity->m_flags & 2) == 0 )
  {
    v3 = (*(v8->_vptr_CGameSceneNode + 9))(this->m_pParent);
    CSkeletonInstance::CalcWorldSpaceBones(v3, CModelSkeleton::BoneFlags_t::FLAG_BONE_MERGE_READ);
    goto LABEL_4;
  }
  if ( v8->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pParent);
  CGameSceneNode::SetNodeToWorldInternal(this, &v8->m_mNodeToWorld);
LABEL_10:
  if ( parentWorldSpaceBones.m_bOwnsMemory )
  {
    if ( parentWorldSpaceBones.m_pBones != 0 )
      operator delete[](parentWorldSpaceBones.m_pBones);
    if ( parentWorldSpaceBones.m_pReadableBones != 0 )
      operator delete[](parentWorldSpaceBones.m_pReadableBones);
  }
}


// CGameSceneNode::SetNodeToParentInternal  (line 2089, @0x00000000020c4c00, libserver.so)  // inlines: AnglesAreEqual, FuzzyEqual, GetElement, NetworkComponentChanged, NetworkStateChanged, PositionsAreEqual, ScalesAreEqual, Set, curtime, fpmax, operator!=, operator=, operator=<Vector>, operator=<float>, operator[]
// calls: AnglesAreEqual, CBaseEntity::SetSimulationTime, CNetworkOriginCellCoordQuantizedVector::LatchComponent
// callers: CGameSceneNode::SetNodeToParentInternal, CGameSceneNode::Spawn
void __fastcall CGameSceneNode::SetNodeToParentInternal(
        CGameSceneNode *const this,
        const Vector *const vOrigin,
        const QAngle *const angles,
        float flScale)
{
  const QAngle *v4; // r13
  CGameSceneNode *v5; // rbx
  __int128 v6; // xmm3
  __m128 x_low; // xmm2
  __m128 v8; // xmm0
  __m128 v9; // xmm4
  float y; // xmm4_4
  __m128 y_low; // xmm2
  __m128 v12; // xmm0
  __m128 v13; // xmm4
  char v14; // r12
  bool v15; // al
  float v16; // xmm3_4
  float m_Value; // xmm2_4
  double v18; // xmm1_8
  CGlobalVars *v19; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v21; // xmm0_8
  __int64 v22; // r12
  CNetworkOriginCellCoordQuantizedVector *p_m_vecOrigin; // r14
  float v26; // xmm0_4
  bool v27; // al
  bool v28; // al
  CNetworkedQuantizedFloat *p_m_vecX; // rdx
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  uint16 *p_m_cellX; // rdx
  signed __int64 v32; // rdx
  CNetworkedQuantizedFloat *p_m_vecY; // [rsp+8h] [rbp-78h]
  CNetworkedQuantizedFloat *p_m_vecZ; // [rsp+10h] [rbp-70h]
  uint16 *p_m_cellZ; // [rsp+18h] [rbp-68h]
  __int128 v36; // [rsp+20h] [rbp-60h]
  __int128 v37; // [rsp+20h] [rbp-60h]
  float anglesa; // [rsp+30h] [rbp-50h]
  float anglesc; // [rsp+30h] [rbp-50h]
  uint16 *p_m_cellY; // [rsp+40h] [rbp-40h]

  v4 = angles;
  v5 = this;
  v6 = 0x7FFFFFFFu;
  x_low = LODWORD(this->m_vecOrigin.m_Value.x);
  v8 = _mm_and_ps(x_low, 0x7FFFFFFFu);
  v8.m128_f32[0] = fmaxf(v8.m128_f32[0], fabs(vOrigin->x)) * 0.00000023841858;
  v9 = _mm_cmplt_ss(v8, 0x3B800000u);
  if ( COERCE_FLOAT(_mm_andnot_ps(v9, v8).m128_u32[0] | v9.m128_i32[0] & 0x3B800000) < fabs(x_low.m128_f32[0] - vOrigin->x)
    || (y = vOrigin->y,
        y_low = LODWORD(this->m_vecOrigin.m_Value.y),
        v12 = _mm_and_ps(y_low, 0x7FFFFFFFu),
        y_low.m128_i32[0] = fabs(y_low.m128_f32[0] - y),
        v12.m128_f32[0] = fmaxf(v12.m128_f32[0], fabs(y)) * 0.00000023841858,
        v13 = _mm_cmplt_ss(v12, 0x3B800000u),
        COERCE_FLOAT(_mm_andnot_ps(v13, v12).m128_u32[0] | v13.m128_i32[0] & 0x3B800000) < y_low.m128_f32[0])
    || fmaxf(0.00390625, fmaxf(fabs(this->m_vecOrigin.m_Value.z), fabs(vOrigin->z)) * 0.00000023841858) < fabs(this->m_vecOrigin.m_Value.z - vOrigin->z) )
  {
    v22 = 0;
    p_m_cellY = &this->m_vecOrigin.m_cellY;
    p_m_cellZ = &this->m_vecOrigin.m_cellZ;
    p_m_vecZ = &this->m_vecOrigin.m_vecZ;
    p_m_vecOrigin = &this->m_vecOrigin;
    p_m_vecY = &this->m_vecOrigin.m_vecY;
    do
    {
      v26 = *(&vOrigin->x + v22);
      if ( v26 != *(&p_m_vecOrigin->m_Value.x + v22) )
      {
        *(&p_m_vecOrigin->m_Value.x + v22) = v26;
        v36 = v6;
        CNetworkOriginCellCoordQuantizedVector::LatchComponent(p_m_vecOrigin, v22);
        v6 = v36;
        p_m_vecX = &this->m_vecOrigin.m_vecX;
        if ( v22 != 0 )
        {
          p_m_vecX = p_m_vecY;
          if ( v22 != 1 )
            p_m_vecX = p_m_vecZ;
        }
        m_pStateChanged = this->m_vecOrigin.m_pStateChanged;
        if ( m_pStateChanged != 0 )
        {
          m_pStateChanged->NetworkStateChanged(p_m_vecOrigin,
            p_m_vecX - p_m_vecOrigin,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
          m_pStateChanged = this->m_vecOrigin.m_pStateChanged;
          v6 = v36;
        }
        p_m_cellX = &this->m_vecOrigin.m_cellX;
        if ( v22 != 0 )
        {
          p_m_cellX = p_m_cellY;
          if ( v22 != 1 )
            p_m_cellX = p_m_cellZ;
        }
        v32 = p_m_cellX - p_m_vecOrigin;
        if ( m_pStateChanged != 0 )
        {
          v37 = v6;
          m_pStateChanged->NetworkStateChanged(p_m_vecOrigin,
            v32,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
          v6 = v37;
        }
      }
      ++v22;
    }
    while ( v22 != 3 );
    v5 = this;
    v14 = 1;
    v4 = angles;
  }
  else
  {
    v14 = 0;
  }
  anglesa = *&v6;
  v15 = AnglesAreEqual(v4->x, 0.001, *&v6);
  v16 = anglesa;
  if ( !v15
    || (v27 = AnglesAreEqual(v4->y, 0.001, anglesa), v16 = anglesa, !v27)
    || (v28 = AnglesAreEqual(v4->z, 0.001, anglesa), v16 = anglesa, !v28) )
  {
    if ( v4->x == v5->m_angRotation.m_Value.x
      && v4->y == v5->m_angRotation.m_Value.y
      && v4->z == v5->m_angRotation.m_Value.z )
    {
      v14 = 1;
    }
    else
    {
      anglesc = v16;
      v14 = 1;
      (*(v5->_vptr_CGameSceneNode + 24))(v5, 200, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v16 = anglesc;
      v5->m_angRotation.m_Value.x = v4->x;
      v5->m_angRotation.m_Value.y = v4->y;
      v5->m_angRotation.m_Value.z = v4->z;
    }
  }
  m_Value = v5->m_flScale.m_Value;
  HIDWORD(v18) = 0;
  *&v18 = fmaxf(
            0.001,
            fmaxf(COERCE_FLOAT(LODWORD(v16) & LODWORD(m_Value)), COERCE_FLOAT(LODWORD(flScale) & LODWORD(v16)))
          * 0.000011920929);
  if ( *&v18 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(m_Value - flScale) & LODWORD(v16)) )
  {
    if ( v14 == 0 )
      return;
  }
  else if ( m_Value != flScale )
  {
    (*(v5->_vptr_CGameSceneNode + 24))(v5, 212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v5->m_flScale.m_Value = flScale;
  }
  v19 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    *&v21 = LODWORD(v19->m_flCurrentTime);
  }
  else
  {
    v21 = 0.0;
  }
  CBaseEntity::SetSimulationTime(v5->m_pOwner, v21, v18);
}


// CGameSceneNode::SetNodeToParentInternal  (line 2120, @0x00000000020c5050, libserver.so)  // inlines: DecomposeMatrixForNode, LargestComponentValue, MatrixAngles
// calls: MatrixAngles, CGameSceneNode::SetNodeToParentInternal
// callers: CGameSceneNode::SetNodeToWorldTransform, CGameSceneNode::DetachFromParent, CGameSceneNode::AttachToParent, CGameSceneNode::Spawn
void __fastcall CGameSceneNode::SetNodeToParentInternal(CGameSceneNode *const this, const matrix3x4a_t *const m)
{
  vec_t v3; // xmm0_4
  Vector vOrigin; // [rsp+0h] [rbp-50h] BYREF
  QAngle angles; // [rsp+10h] [rbp-40h] BYREF
  Vector vScale; // [rsp+20h] [rbp-30h] BYREF

  MatrixAngles(m, &angles, &vOrigin, &vScale);
  v3 = fabs(vScale.z);
  if ( fabs(vScale.x) <= fabs(vScale.y) )
  {
    if ( fabs(vScale.y) > fabs(vScale.z) )
    {
      v3 = fabs(vScale.y);
      if ( fabs(vScale.x) > fabs(vScale.y) )
        v3 = fabs(vScale.x);
    }
  }
  else if ( fabs(vScale.x) > fabs(vScale.z) )
  {
    v3 = fabs(vScale.x);
  }
  if ( fabs(v3 - 1.0) < 0.001 )
    v3 = 1.0;
  CGameSceneNode::SetNodeToParentInternal(this, &vOrigin, &angles, v3);
}


// CGameSceneNode::ComputeNodeToParent  (line 2129, @0x00000000020b0040, libserver.so)
// calls: AngleMatrix
void __fastcall CGameSceneNode::ComputeNodeToParent(const CGameSceneNode *const this, matrix3x4a_t *pNodeToParent)
{
  AngleMatrix(&this->m_angRotation.m_Value, &this->m_vecOrigin.m_Value, this->m_flScale.m_Value, pNodeToParent);
}


// CGameSceneNode::PerformPostInvalidatePhysicsWork  (line 2159, @0x00000000020b0070, libserver.so)  // inlines: RemoveAll, curtime, memcpy
// calls: memcpy, CBaseEntity::SetAnimTime, ReportPositionChanged, __stack_chk_fail
// callers: CGameSceneNode::MarkInInvalidatePhysicsRecursive
// globals: s_animTimeSets, s_reportPositionChangedCalls
void __cdecl CGameSceneNode::PerformPostInvalidatePhysicsWork()
{
  int m_Size; // r12d
  size_t v1; // rdx
  void *v2; // rsp
  __m128i m_flCurrentTime_low; // xmm1
  CGlobalVars *v4; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int v6; // r14d
  __int64 v7; // rbx
  CBaseEntity *v8; // rdi
  int v9; // r12d
  __int64 v10; // rbx
  size_t v11; // rdx
  void *v12; // rsp
  CBaseEntity *v13; // rdi
  _BYTE v14[32]; // [rsp+10h] [rbp-20h] BYREF

  m_Size = s_animTimeSets.m_Size;
  if ( s_animTimeSets.m_Size > 0 )
  {
    v1 = 8LL * s_animTimeSets.m_Size;
    v2 = alloca(((v1 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    memcpy((v14 & 0xFFFFFFFFFFFFFFEFLL), s_animTimeSets.m_Memory.m_pMemory, v1);
    s_animTimeSets.m_Size = 0;
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      m_flCurrentTime_low = LODWORD(v4->m_flCurrentTime);
      v6 = _mm_cvtsi128_si32(m_flCurrentTime_low);
    }
    else
    {
      v6 = _mm_cvtsi128_si32(0LL);
    }
    v7 = 0;
    do
    {
      v8 = *((v14 & 0xFFFFFFFFFFFFFFEFLL) + 8 * v7++);
      CBaseEntity::SetAnimTime(v8, *&v6, *m_flCurrentTime_low.m128i_i32, 0);
    }
    while ( m_Size > v7 );
  }
  v9 = s_reportPositionChangedCalls.m_Size;
  if ( s_reportPositionChangedCalls.m_Size > 0 )
  {
    v10 = 0;
    v11 = 8LL * s_reportPositionChangedCalls.m_Size;
    v12 = alloca(((v11 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    memcpy((v14 & 0xFFFFFFFFFFFFFFEFLL), s_reportPositionChangedCalls.m_Memory.m_pMemory, v11);
    s_reportPositionChangedCalls.m_Size = 0;
    do
    {
      v13 = *((v14 & 0xFFFFFFFFFFFFFFEFLL) + 8 * v10++);
      ReportPositionChanged(v13);
    }
    while ( v9 > v10 );
  }
}


// CGameSceneNode::MarkInInvalidatePhysicsRecursive  (line 2193, @0x00000000020b01e0, libserver.so)  // inlines: ThreadInterlockedDecrement, ThreadInterlockedIncrement, operator++, operator--, operator==
// calls: CGameSceneNode::PerformPostInvalidatePhysicsWork
// callers: CGameSceneNode::BatchCallsToInvalidatePhysicsRecursive, CGameSceneNode::InvalidatePhysicsRecursive
// globals: CGameSceneNode::sm_nInvalidatePhysicsRecursiveInProgress
void __fastcall CGameSceneNode::MarkInInvalidatePhysicsRecursive(bool bInInvalidate)
{
  if ( bInInvalidate )
  {
    _InterlockedAdd(&CGameSceneNode::sm_nInvalidatePhysicsRecursiveInProgress.m_value, 1u);
  }
  else
  {
    _InterlockedSub(&CGameSceneNode::sm_nInvalidatePhysicsRecursiveInProgress.m_value, 1u);
    if ( CGameSceneNode::sm_nInvalidatePhysicsRecursiveInProgress.m_value == 0 )
      CGameSceneNode::PerformPostInvalidatePhysicsWork();
  }
}


// CGameSceneNode::BatchCallsToInvalidatePhysicsRecursive  (line 2213, @0x00000000020b0220, libserver.so)  // inlines: CInvalidatePhysicsRecursiveScopeGuard, MarkInInvalidatePhysicsRecursive, PerformInvalidatePhysicsRecursiveInternal, RemoveAll, ThreadInterlockedIncrement, operator++, ~CInvalidatePhysicsRecursiveScopeGuard
// calls: CGameSceneNode::MarkInInvalidatePhysicsRecursive, _Unwind_Resume
// callers: CBaseAnimatingController::UpdateGameAnimations
// globals: CGameSceneNode::sm_nBatchCallsToInvalidatePhysicsRecursive, s_batchInvalidatePhyicsRecursiveCalls, CGameSceneNode::sm_nInvalidatePhysicsRecursiveInProgress
void __fastcall CGameSceneNode::BatchCallsToInvalidatePhysicsRecursive(bool bBatch)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // r12
  CGameSceneNode *v3; // rdi

  if ( bBatch )
  {
    ++CGameSceneNode::sm_nBatchCallsToInvalidatePhysicsRecursive;
  }
  else if ( --CGameSceneNode::sm_nBatchCallsToInvalidatePhysicsRecursive == 0
         && s_batchInvalidatePhyicsRecursiveCalls.m_Size > 0 )
  {
    _InterlockedAdd(&CGameSceneNode::sm_nInvalidatePhysicsRecursiveInProgress.m_value, 1u);
    v1 = 0;
    v2 = 8LL * (s_batchInvalidatePhyicsRecursiveCalls.m_Size - 1) + 8;
    do
    {
      while ( 1 )
      {
        v3 = s_batchInvalidatePhyicsRecursiveCalls.m_Memory.m_pMemory[v1 / 8];
        if ( v3->m_nCachedInvalidatePhysicsRecursiveFlags != 0 )
          break;
        v1 += 8LL;
        if ( v1 == v2 )
          goto LABEL_8;
      }
      v3->m_nCachedInvalidatePhysicsRecursiveFlags = 0;
      (*(v3->_vptr_CGameSceneNode + 15))(v3);
      v1 += 8LL;
    }
    while ( v1 != v2 );
LABEL_8:
    s_batchInvalidatePhyicsRecursiveCalls.m_Size = 0;
    CGameSceneNode::MarkInInvalidatePhysicsRecursive(0);
  }
}


// CGameSceneNode::CalcAbsolutePositionWhenDirty  (line 2240, @0x00000000020c8040, libserver.so)  // inlines: CAutoLockT, Load, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator=, ~CAutoLockT
// calls: ThreadGetCurrentId, CGameSceneNode::PerformHierarchySetupWork, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), AngleMatrix, _Unwind_Resume
// callers: CBodyComponent::GetAbsAngles, CBodyComponent::WorldSpaceCenter, CBodyComponent::CollisionToWorldTransform, CLightComponent::UpdateSceneObjects, CLightComponent::UpdateQueryLight, Physics_CreateAggregate, CNetworkTransmitComponent::IsInPVS, CBaseEntity::GetVectors, CFogController::Activate, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsScale (69 total)
void __fastcall CGameSceneNode::CalcAbsolutePositionWhenDirty(CGameSceneNode *const this)
{
  CThreadFastMutex *p_m_calcAbsPositionMutex; // r12
  signed __int64 CurrentId; // rsi
  int m_depth; // eax
  float m_Value; // xmm0_4

  p_m_calcAbsPositionMutex = &this->m_calcAbsPositionMutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_calcAbsPositionMutex.m_ownerID
    && _InterlockedCompareExchange64(p_m_calcAbsPositionMutex, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(p_m_calcAbsPositionMutex, CurrentId, 0);
  }
  else
  {
    ++this->m_calcAbsPositionMutex.m_depth;
  }
  if ( !this->m_bDirtyAbsTransform.m_value )
  {
    if ( --this->m_calcAbsPositionMutex.m_depth != 0 )
      return;
LABEL_10:
    ThreadInterlockedExchange64(p_m_calcAbsPositionMutex, 0);
    return;
  }
  if ( this->m_pParent != 0 )
  {
    CGameSceneNode::PerformHierarchySetupWork(this);
  }
  else
  {
    this->m_vecAbsOrigin.x = this->m_vecOrigin.m_Value.x;
    this->m_vecAbsOrigin.y = this->m_vecOrigin.m_Value.y;
    this->m_vecAbsOrigin.z = this->m_vecOrigin.m_Value.z;
    this->m_angAbsRotation.x = this->m_angRotation.m_Value.x;
    this->m_angAbsRotation.y = this->m_angRotation.m_Value.y;
    this->m_angAbsRotation.z = this->m_angRotation.m_Value.z;
    m_Value = this->m_flScale.m_Value;
    this->m_flAbsScale = m_Value;
    AngleMatrix(&this->m_angAbsRotation, &this->m_vecAbsOrigin, m_Value, &this->m_mNodeToWorld);
  }
  m_depth = this->m_calcAbsPositionMutex.m_depth;
  this->m_bDirtyAbsTransform.m_value = 0;
  this->m_calcAbsPositionMutex.m_depth = m_depth - 1;
  if ( this->m_calcAbsPositionMutex.m_depth == 0 )
    goto LABEL_10;
}


// CGameSceneNode::SetNodeToWorldInternal  (line 2276, @0x00000000020b02e0, libserver.so)  // inlines: DecomposeMatrixForNode, LargestComponentValue, MatrixAngles
// calls: MatrixAngles
// callers: CGameSceneNode::PerformHierarchySetupWork, CGameSceneNode::SetNodeToWorldTransform
void __fastcall CGameSceneNode::SetNodeToWorldInternal(
        CGameSceneNode *const this,
        const matrix3x4a_t *const rootToWorld)
{
  Vector *p_m_vecAbsOrigin; // rdx
  __int64 v4; // rax
  QAngle *p_m_angAbsRotation; // rsi
  matrix3x4a_t *p_m_mNodeToWorld; // rdi
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  Vector vScale; // [rsp+0h] [rbp-20h] BYREF

  p_m_vecAbsOrigin = &this->m_vecAbsOrigin;
  *&this->m_mNodeToWorld.m_flMatVal[0][0] = *&rootToWorld->m_flMatVal[0][0];
  *&this->m_mNodeToWorld.m_flMatVal[1][0] = *&rootToWorld->m_flMatVal[1][0];
  *&this->m_mNodeToWorld.m_flMatVal[2][0] = *&rootToWorld->m_flMatVal[2][0];
  v4 = *&rootToWorld->m_flMatVal[2][2];
  p_m_angAbsRotation = &this->m_angAbsRotation;
  p_m_mNodeToWorld = &this->m_mNodeToWorld;
  *&p_m_mNodeToWorld->m_flMatVal[2][2] = v4;
  MatrixAngles(p_m_mNodeToWorld, p_m_angAbsRotation, p_m_vecAbsOrigin, &vScale);
  v7 = fabs(vScale.x);
  v8 = fabs(vScale.y);
  v9 = fabs(vScale.z);
  if ( v7 > v8 )
  {
    if ( v7 > v9 )
    {
      v8 = v7;
      goto LABEL_4;
    }
    goto LABEL_10;
  }
  if ( v8 <= v9 )
  {
LABEL_10:
    v8 = v9;
    goto LABEL_4;
  }
  if ( v7 > v8 )
    v8 = v7;
LABEL_4:
  v10 = 1.0;
  if ( fabs(v8 - 1.0) >= 0.001 )
    v10 = v8;
  this->m_flAbsScale = v10;
}


// CGameSceneNode::SetNodeToWorldInternal  (line 2288, @0x00000000020b03c0, libserver.so)  // inlines: operator=
// calls: AngleMatrix
// callers: CGameSceneNode::SetLocalAngles, CGameSceneNode::SetLocalScale, CGameSceneNode::PostDataUpdate, CGameSceneNode::SetAbsScale
void __fastcall CGameSceneNode::SetNodeToWorldInternal(
        CGameSceneNode *const this,
        const Vector *const vOrigin,
        const QAngle *const angles,
        float flScale)
{
  vec_t z; // xmm1_4
  Vector *p_m_vecAbsOrigin; // rsi
  vec_t v6; // xmm1_4
  matrix3x4a_t *p_m_mNodeToWorld; // rdx
  QAngle *p_m_angAbsRotation; // rdi

  this->m_vecAbsOrigin.x = vOrigin->x;
  this->m_vecAbsOrigin.y = vOrigin->y;
  z = vOrigin->z;
  p_m_vecAbsOrigin = &this->m_vecAbsOrigin;
  this->m_vecAbsOrigin.z = z;
  this->m_angAbsRotation.x = angles->x;
  this->m_angAbsRotation.y = angles->y;
  v6 = angles->z;
  this->m_flAbsScale = flScale;
  p_m_mNodeToWorld = &this->m_mNodeToWorld;
  p_m_angAbsRotation = &this->m_angAbsRotation;
  p_m_angAbsRotation->z = v6;
  AngleMatrix(p_m_angAbsRotation, p_m_vecAbsOrigin, flScale, p_m_mNodeToWorld);
}


// CGameSceneNode::SetNodeToWorldTransform  (line 2303, @0x00000000020caae0, libserver.so)  // inlines: AnglesAreEqual, CalcAbsolutePosition, ConcatTransforms, FuzzyEqual, Load, NodeToWorldTransform, PositionsAreEqual, ScalesAreEqual, fpmax, matrix3x4a_t, memcpy, operator=
// calls: CGameSceneNode::SetNodeToWorldInternal, MatrixInvert, ConcatTransforms, CGameSceneNode::SetNodeToParentInternal, AnglesAreEqual, CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: CBodyComponent::SetEntityToWorldTransform, CPhysicsGameSystem::PushDynamicTransformsWorker
void __fastcall CGameSceneNode::SetNodeToWorldTransform(
        CGameSceneNode *const this,
        const matrix3x4a_t *const nodeToWorld,
        uint32 nFlags)
{
  CGameSceneNode *m_pParent; // r13
  vec_t x; // xmm1_4
  float v7; // r15d
  __m128 v8; // xmm1
  float v9; // xmm2_4
  float v10; // xmm4_4
  __m128 v11; // xmm1
  __m128 v12; // xmm5
  __m128 v13; // xmm1
  __m128 v14; // xmm5
  unsigned int v15; // ebx
  float z; // [rsp+10h] [rbp-E0h]
  float y; // [rsp+18h] [rbp-D8h]
  vec_t v18; // [rsp+1Ch] [rbp-D4h]
  vec_t v19; // [rsp+1Ch] [rbp-D4h]
  vec_t v20; // [rsp+1Ch] [rbp-D4h]
  matrix3x4a_t worldToParent; // [rsp+30h] [rbp-C0h] BYREF
  matrix3x4_t out; // [rsp+60h] [rbp-90h] BYREF
  matrix3x4a_t m; // [rsp+90h] [rbp-60h] BYREF

  CGameSceneNode::SetNodeToWorldInternal(this, nodeToWorld);
  m_pParent = this->m_pParent;
  y = this->m_vecOrigin.m_Value.y;
  z = this->m_vecOrigin.m_Value.z;
  x = this->m_vecOrigin.m_Value.x;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(this->m_flScale.m_Value)));
  if ( m_pParent != 0 )
  {
    if ( m_pParent->m_bDirtyAbsTransform.m_value )
    {
      v19 = this->m_vecOrigin.m_Value.x;
      CGameSceneNode::CalcAbsolutePositionWhenDirty(m_pParent);
      x = v19;
    }
    v18 = x;
    MatrixInvert(&m_pParent->m_mNodeToWorld, &worldToParent);
    ConcatTransforms(&worldToParent, nodeToWorld, &out);
    m = out;
    CGameSceneNode::SetNodeToParentInternal(this, &m);
    v8 = LODWORD(v18);
  }
  else
  {
    v20 = this->m_vecOrigin.m_Value.x;
    CGameSceneNode::SetNodeToParentInternal(this, nodeToWorld);
    v8 = LODWORD(v20);
  }
  v9 = this->m_vecOrigin.m_Value.x;
  v10 = v8.m128_f32[0];
  v11 = _mm_and_ps(v8, 0x7FFFFFFFu);
  v11.m128_f32[0] = fmaxf(v11.m128_f32[0], fabs(v9)) * 0.00000023841858;
  v12 = _mm_cmplt_ss(v11, 0x3B800000u);
  v15 = COERCE_FLOAT(_mm_andnot_ps(v12, v11).m128_u32[0] | v12.m128_i32[0] & 0x3B800000) < fabs(v10 - v9)
     || (v13 = _mm_and_ps(LODWORD(y), 0x7FFFFFFFu),
         v13.m128_f32[0] = fmaxf(v13.m128_f32[0], fabs(this->m_vecOrigin.m_Value.y)) * 0.00000023841858,
         v14 = _mm_cmplt_ss(v13, 0x3B800000u),
         COERCE_FLOAT(_mm_andnot_ps(v14, v13).m128_u32[0] | v14.m128_i32[0] & 0x3B800000) < fabs(
                                                                                              y
                                                                                            - this->m_vecOrigin.m_Value.y))
     || fmaxf(0.00390625, fmaxf(fabs(z), fabs(this->m_vecOrigin.m_Value.z)) * 0.00000023841858) < fabs(z - this->m_vecOrigin.m_Value.z);
  if ( !AnglesAreEqual(this->m_angRotation.m_Value.x, 0.001, NAN)
    || !AnglesAreEqual(this->m_angRotation.m_Value.y, 0.001, NAN)
    || !AnglesAreEqual(this->m_angRotation.m_Value.z, 0.001, NAN) )
  {
    v15 |= 2u;
  }
  if ( fmaxf(0.001, fmaxf(fabs(v7), fabs(this->m_flScale.m_Value)) * 0.000011920929) < fabs(v7 - this->m_flScale.m_Value) )
  {
    v15 |= 4u;
LABEL_13:
    BYTE1(v15) |= 1u;
    (*(this->_vptr_CGameSceneNode + 11))(this, v15);
    return;
  }
  if ( v15 != 0 )
    goto LABEL_13;
  this->m_bDirtyAbsTransform.m_value = 0;
}


// CGameSceneNode::SetLocalOrigin  (line 2352, @0x00000000020c4600, libserver.so)  // inlines: GetElement, MatrixSetColumn, NetworkComponentChanged, NetworkStateChanged, Set, SetColumn, curtime, operator!=, operator!=<Vector>, operator=, operator=<Vector>, operator[]
// calls: CBaseEntity::SetSimulationTime, CNetworkOriginCellCoordQuantizedVector::LatchComponent
// callers: CBodyComponent::SetLocalPosition, CBaseEntity::SetLocalTransform, CBaseEntity::SetLocalOrigin, CBaseEntity::FollowEntity, CGameSceneNode::AttachToParent
void __fastcall CGameSceneNode::SetLocalOrigin(CGameSceneNode *const this, const Vector *const parentSpacePosition)
{
  double v2; // xmm1_8
  __int64 v5; // r12
  CNetworkOriginCellCoordQuantizedVector *p_m_vecOrigin; // r15
  float v7; // xmm0_4
  unsigned int v8; // r13d
  double v9; // xmm0_8
  CGlobalVars *v10; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CNetworkedQuantizedFloat *p_m_vecX; // rdx
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  uint16 *p_m_cellX; // rdx
  signed __int64 v15; // rdx
  float x; // xmm2_4
  float z; // xmm0_4
  CNetworkedQuantizedFloat *p_m_vecY; // [rsp+0h] [rbp-50h]
  CNetworkedQuantizedFloat *p_m_vecZ; // [rsp+8h] [rbp-48h]
  uint16 *p_m_cellZ; // [rsp+10h] [rbp-40h]
  uint16 *p_m_cellY; // [rsp+18h] [rbp-38h]

  if ( parentSpacePosition->x != this->m_vecOrigin.m_Value.x
    || parentSpacePosition->y != this->m_vecOrigin.m_Value.y
    || parentSpacePosition->z != this->m_vecOrigin.m_Value.z )
  {
    v5 = 0;
    p_m_cellY = &this->m_vecOrigin.m_cellY;
    p_m_cellZ = &this->m_vecOrigin.m_cellZ;
    p_m_vecZ = &this->m_vecOrigin.m_vecZ;
    p_m_vecOrigin = &this->m_vecOrigin;
    p_m_vecY = &this->m_vecOrigin.m_vecY;
    do
    {
      v7 = *(&parentSpacePosition->x + v5);
      if ( v7 != *(&p_m_vecOrigin->m_Value.x + v5) )
      {
        *(&p_m_vecOrigin->m_Value.x + v5) = v7;
        CNetworkOriginCellCoordQuantizedVector::LatchComponent(&this->m_vecOrigin, v5);
        p_m_vecX = &this->m_vecOrigin.m_vecX;
        if ( v5 != 0 )
        {
          p_m_vecX = p_m_vecY;
          if ( v5 != 1 )
            p_m_vecX = p_m_vecZ;
        }
        m_pStateChanged = this->m_vecOrigin.m_pStateChanged;
        if ( m_pStateChanged != 0 )
        {
          m_pStateChanged->NetworkStateChanged(&this->m_vecOrigin,
            p_m_vecX - p_m_vecOrigin,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
          m_pStateChanged = this->m_vecOrigin.m_pStateChanged;
        }
        p_m_cellX = &this->m_vecOrigin.m_cellX;
        if ( v5 != 0 )
        {
          p_m_cellX = p_m_cellY;
          if ( v5 != 1 )
            p_m_cellX = p_m_cellZ;
        }
        v15 = p_m_cellX - p_m_vecOrigin;
        if ( m_pStateChanged != 0 )
          m_pStateChanged->NetworkStateChanged(&this->m_vecOrigin,
            v15,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
      }
      ++v5;
    }
    while ( v5 != 3 );
    v8 = 1;
    if ( this->m_nHierarchyType == 0 )
    {
      x = this->m_vecOrigin.m_Value.x;
      LOWORD(v8) = 257;
      *&v2 = LODWORD(this->m_vecOrigin.m_Value.y);
      z = this->m_vecOrigin.m_Value.z;
      this->m_vecAbsOrigin.x = x;
      this->m_vecAbsOrigin.y = *&v2;
      this->m_vecAbsOrigin.z = z;
      this->m_mNodeToWorld.m_flMatVal[0][3] = x;
      this->m_mNodeToWorld.m_flMatVal[1][3] = *&v2;
      this->m_mNodeToWorld.m_flMatVal[2][3] = z;
    }
    v9 = 0.0;
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v9 = LODWORD(v10->m_flCurrentTime);
    }
    CBaseEntity::SetSimulationTime(this->m_pOwner, v9, v2);
    (*(this->_vptr_CGameSceneNode + 11))(this, v8);
  }
}


// CGameSceneNode::SetLocalAngles  (line 2382, @0x00000000020b0430, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator!=, operator=
// calls: CBaseEntity::SetSimulationTime, CGameSceneNode::SetNodeToWorldInternal
// callers: CBodyComponent::SetLocalAngles, CBaseEntity::SetLocalTransform, CBaseEntity::SetLocalAngles, CBaseEntity::FollowEntity, CGameSceneNode::SetLocalOrientation, CGameSceneNode::AttachToParent
void __fastcall CGameSceneNode::SetLocalAngles(CGameSceneNode *const this, const QAngle *const parentSpaceAngles)
{
  double v4; // xmm0_8
  double v5; // xmm1_8
  double v6; // xmm2_8
  unsigned int v7; // r13d
  double v8; // xmm0_8
  CGlobalVars *v9; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  bool v11; // zf

  *&v4 = LODWORD(parentSpaceAngles->x);
  *&v5 = LODWORD(parentSpaceAngles->y);
  *&v6 = LODWORD(parentSpaceAngles->z);
  if ( *&v4 != this->m_angRotation.m_Value.x )
    goto LABEL_14;
  if ( *&v5 == this->m_angRotation.m_Value.y && *&v6 == this->m_angRotation.m_Value.z )
    return;
  if ( *&v5 != this->m_angRotation.m_Value.y || *&v6 != this->m_angRotation.m_Value.z )
  {
LABEL_14:
    v7 = 2;
    (*(this->_vptr_CGameSceneNode + 24))(this, 200, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v4, v5, v6);
    v11 = this->m_nHierarchyType == 0;
    this->m_angRotation.m_Value.x = parentSpaceAngles->x;
    this->m_angRotation.m_Value.y = parentSpaceAngles->y;
    this->m_angRotation.m_Value.z = parentSpaceAngles->z;
    if ( !v11 )
      goto LABEL_7;
LABEL_15:
    LOWORD(v7) = 258;
    this->m_angAbsRotation.x = this->m_angRotation.m_Value.x;
    this->m_angAbsRotation.y = this->m_angRotation.m_Value.y;
    this->m_angAbsRotation.z = this->m_angRotation.m_Value.z;
    CGameSceneNode::SetNodeToWorldInternal(
      this,
      &this->m_vecOrigin.m_Value,
      &this->m_angRotation.m_Value,
      this->m_flScale.m_Value);
    goto LABEL_7;
  }
  v7 = 2;
  if ( this->m_nHierarchyType == 0 )
    goto LABEL_15;
LABEL_7:
  v8 = 0.0;
  v9 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v8 = LODWORD(v9->m_flCurrentTime);
  }
  CBaseEntity::SetSimulationTime(this->m_pOwner, v8, v5);
  (*(this->_vptr_CGameSceneNode + 11))(this, v7);
}


// CGameSceneNode::SetLocalOrientation  (line 2408, @0x00000000020b05f0, libserver.so)
// calls: QuaternionAngles, CGameSceneNode::SetLocalAngles
// callers: CBodyComponent::SetLocalOrientation
void __fastcall CGameSceneNode::SetLocalOrientation(
        CGameSceneNode *const this,
        const Quaternion *const parentSpaceOrientation)
{
  QAngle parentSpaceAngles; // [rsp+0h] [rbp-20h] BYREF

  QuaternionAngles(parentSpaceOrientation, &parentSpaceAngles);
  CGameSceneNode::SetLocalAngles(this, &parentSpaceAngles);
}


// CGameSceneNode::SetLocalScale  (line 2415, @0x00000000020b0630, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator=<float>
// calls: CBaseEntity::SetSimulationTime, CGameSceneNode::SetNodeToWorldInternal
// callers: CBaseEntity::SetLocalScale, ent_scale, CBaseAnimating::SetModelScale, CBaseAnimating::UpdateModelScale, CGameSceneNode::AttachToParent
void __fastcall CGameSceneNode::SetLocalScale(CGameSceneNode *const this, float a2, float flScale)
{
  unsigned int v4; // r13d
  double v5; // xmm1_8
  bool v6; // zf
  double v7; // xmm0_8
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( a2 != this->m_flScale.m_Value )
  {
    v4 = 4;
    (*(this->_vptr_CGameSceneNode + 24))(this, 212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v6 = this->m_nHierarchyType == 0;
    this->m_flScale.m_Value = a2;
    if ( v6 )
    {
      this->m_flAbsScale = a2;
      LOWORD(v4) = 260;
      CGameSceneNode::SetNodeToWorldInternal(this, &this->m_vecOrigin.m_Value, &this->m_angRotation.m_Value, a2);
    }
    v7 = 0.0;
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v7 = LODWORD(v8->m_flCurrentTime);
    }
    CBaseEntity::SetSimulationTime(this->m_pOwner, v7, v5);
    (*(this->_vptr_CGameSceneNode + 11))(this, v4);
  }
}


// CGameSceneNode::SetAbsOrigin  (line 2438, @0x00000000020ca4a0, libserver.so)  // inlines: CalcAbsolutePosition, GetElement, Load, MatrixSetColumn, NetworkComponentChanged, NetworkStateChanged, NodeToWorldTransform, Set, SetColumn, VectorITransform, curtime, operator!=, operator!=<Vector>, operator=, operator=<Vector>, operator==
// calls: VectorITransform, CNetworkOriginCellCoordQuantizedVector::LatchComponent, CBaseEntity::SetSimulationTime, CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: CBaseEntity::SetEntityToWorldTransform, CBaseEntity::SetAbsOrigin
void __fastcall CGameSceneNode::SetAbsOrigin(CGameSceneNode *const this, const Vector *const worldSpacePosition)
{
  signed __int64 v2; // rdx
  CGameSceneNode *m_pParent; // r13
  double v6; // xmm1_8
  float x; // xmm0_4
  CNetworkOriginCellCoordQuantizedVector *p_m_vecOrigin; // r14
  __int64 v9; // r13
  bool v10; // zf
  int v11; // r15d
  CNetworkedQuantizedFloat *p_m_vecX; // rdx
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  uint16 *p_m_cellX; // rdx
  double v15; // xmm0_8
  CGlobalVars *v16; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  Vector vecNewOrigin; // [rsp+20h] [rbp-50h] BYREF
  Vector vShiftedWorldSpacePosition; // [rsp+30h] [rbp-40h] BYREF

  if ( this->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
  if ( worldSpacePosition->x != this->m_vecAbsOrigin.x
    || worldSpacePosition->y != this->m_vecAbsOrigin.y
    || worldSpacePosition->z != this->m_vecAbsOrigin.z )
  {
    this->m_vecAbsOrigin.x = worldSpacePosition->x;
    m_pParent = this->m_pParent;
    this->m_vecAbsOrigin.y = worldSpacePosition->y;
    this->m_vecAbsOrigin.z = worldSpacePosition->z;
    this->m_mNodeToWorld.m_flMatVal[0][3] = worldSpacePosition->x;
    this->m_mNodeToWorld.m_flMatVal[1][3] = worldSpacePosition->y;
    this->m_mNodeToWorld.m_flMatVal[2][3] = worldSpacePosition->z;
    if ( m_pParent != 0 )
    {
      if ( m_pParent->m_bDirtyAbsTransform.m_value )
        CGameSceneNode::CalcAbsolutePositionWhenDirty(m_pParent);
      vShiftedWorldSpacePosition = *worldSpacePosition;
      vShiftedWorldSpacePosition.z = vShiftedWorldSpacePosition.z - this->m_flZOffset;
      VectorITransform(&vShiftedWorldSpacePosition.x, &m_pParent->m_mNodeToWorld, &vecNewOrigin.x);
      x = vecNewOrigin.x;
    }
    else
    {
      x = worldSpacePosition->x;
      vecNewOrigin.y = worldSpacePosition->y;
      *&v6 = LODWORD(worldSpacePosition->z);
      vecNewOrigin.x = x;
      *&v6 = *&v6 - this->m_flZOffset;
      vecNewOrigin.z = *&v6;
    }
    if ( x != this->m_vecOrigin.m_Value.x
      || (*&v6 = LODWORD(vecNewOrigin.y), vecNewOrigin.y != this->m_vecOrigin.m_Value.y)
      || (*&v6 = LODWORD(vecNewOrigin.z), vecNewOrigin.z != this->m_vecOrigin.m_Value.z) )
    {
      p_m_vecOrigin = &this->m_vecOrigin;
      v9 = 0;
      v10 = x == this->m_vecOrigin.m_Value.x;
      v11 = 0;
      while ( 1 )
      {
        if ( v10 )
          goto LABEL_10;
        *(&p_m_vecOrigin->m_Value.x + v9) = x;
        CNetworkOriginCellCoordQuantizedVector::LatchComponent(&this->m_vecOrigin, v11);
        p_m_vecX = &this->m_vecOrigin.m_vecX;
        if ( v11 != 0 )
        {
          p_m_vecX = &this->m_vecOrigin.m_vecY;
          if ( v11 != 1 )
            p_m_vecX = &this->m_vecOrigin.m_vecZ;
        }
        m_pStateChanged = this->m_vecOrigin.m_pStateChanged;
        if ( m_pStateChanged != 0 )
        {
          m_pStateChanged->NetworkStateChanged(&this->m_vecOrigin,
            p_m_vecX - p_m_vecOrigin,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
          m_pStateChanged = this->m_vecOrigin.m_pStateChanged;
        }
        p_m_cellX = &this->m_vecOrigin.m_cellX;
        if ( v11 != 0 )
        {
          p_m_cellX = &this->m_vecOrigin.m_cellY;
          if ( v11 != 1 )
            p_m_cellX = &this->m_vecOrigin.m_cellZ;
        }
        v2 = p_m_cellX - p_m_vecOrigin;
        if ( m_pStateChanged == 0 )
        {
LABEL_10:
          if ( ++v9 == 3 )
            goto LABEL_22;
        }
        else
        {
          ++v9;
          m_pStateChanged->NetworkStateChanged(&this->m_vecOrigin,
            v2,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
          if ( v9 == 3 )
          {
LABEL_22:
            v15 = 0.0;
            v16 = gpGlobals;
            if ( gpGlobals != 0 )
            {
              if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
              {
                m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
                if ( m_pfnWarningFunc != 0 )
                  (m_pfnWarningFunc)(1, worldSpacePosition, v2, 0.0);
              }
              *&v15 = LODWORD(v16->m_flCurrentTime);
            }
            CBaseEntity::SetSimulationTime(this->m_pOwner, v15, v6);
            break;
          }
        }
        x = *(&vecNewOrigin.x + v9);
        v11 = v9;
        v10 = x == *(&p_m_vecOrigin->m_Value.x + v9);
      }
    }
    (*(this->_vptr_CGameSceneNode + 11))(this, 257);
  }
}


// CGameSceneNode::SetAbsAngles  (line 2483, @0x00000000020ca7c0, libserver.so)  // inlines: CalcAbsolutePosition, GetAbsAngles, Init, Load, NetworkStateChanged, NodeToWorldTransform, Set, curtime, operator!=, operator=, operator==
// calls: AngleMatrix, MatrixInvert, ConcatTransforms, MatrixAngles, CGameSceneNode::CalcAbsolutePositionWhenDirty, CBaseEntity::SetSimulationTime
// callers: CBaseEntity::SetEntityToWorldTransform, CBaseEntity::SetAbsAngles, CFogController::InputSetAngles
void __fastcall CGameSceneNode::SetAbsAngles(CGameSceneNode *const this, const QAngle *const worldSpaceAngles)
{
  CGameSceneNode *m_pParent; // r13
  double v5; // xmm0_8
  double v6; // xmm1_8
  double v7; // xmm2_8
  CGameSceneNode *v8; // r12
  double v9; // xmm0_8
  CGlobalVars *v10; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  QAngle angNewRotation; // [rsp+0h] [rbp-90h] BYREF
  matrix3x4a_t worldToParent; // [rsp+10h] [rbp-80h] BYREF
  matrix3x4a_t mNodeToParent; // [rsp+40h] [rbp-50h] BYREF

  if ( this->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
  if ( worldSpaceAngles->x != this->m_angAbsRotation.x
    || worldSpaceAngles->y != this->m_angAbsRotation.y
    || worldSpaceAngles->z != this->m_angAbsRotation.z )
  {
    this->m_angAbsRotation.x = worldSpaceAngles->x;
    this->m_angAbsRotation.y = worldSpaceAngles->y;
    this->m_angAbsRotation.z = worldSpaceAngles->z;
    AngleMatrix(worldSpaceAngles, &this->m_vecAbsOrigin, this->m_flAbsScale, &this->m_mNodeToWorld);
    m_pParent = this->m_pParent;
    if ( m_pParent != 0 )
    {
      if ( m_pParent->m_bDirtyAbsTransform.m_value )
        CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pParent);
      if ( m_pParent->m_angAbsRotation.x == this->m_angAbsRotation.x
        && m_pParent->m_angAbsRotation.y == this->m_angAbsRotation.y
        && m_pParent->m_angAbsRotation.z == this->m_angAbsRotation.z )
      {
        v5 = 0.0;
        angNewRotation.x = 0.0;
        v6 = 0.0;
        angNewRotation.y = 0.0;
        v7 = 0.0;
        angNewRotation.z = 0.0;
      }
      else
      {
        v8 = this->m_pParent;
        if ( v8->m_bDirtyAbsTransform.m_value )
          CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pParent);
        MatrixInvert(&v8->m_mNodeToWorld, &worldToParent);
        ConcatTransforms(&worldToParent, &this->m_mNodeToWorld, &mNodeToParent);
        MatrixAngles(&mNodeToParent, &angNewRotation);
        *&v7 = LODWORD(angNewRotation.z);
        *&v6 = LODWORD(angNewRotation.y);
        *&v5 = LODWORD(angNewRotation.x);
      }
    }
    else
    {
      *&v5 = LODWORD(worldSpaceAngles->x);
      *&v6 = LODWORD(worldSpaceAngles->y);
      *&v7 = LODWORD(worldSpaceAngles->z);
      angNewRotation.x = worldSpaceAngles->x;
      angNewRotation.y = *&v6;
      angNewRotation.z = *&v7;
    }
    if ( *&v5 != this->m_angRotation.m_Value.x )
      goto LABEL_31;
    if ( *&v6 == this->m_angRotation.m_Value.y && *&v7 == this->m_angRotation.m_Value.z )
    {
LABEL_20:
      (*(this->_vptr_CGameSceneNode + 11))(this, 258);
      return;
    }
    if ( *&v6 != this->m_angRotation.m_Value.y || *&v7 != this->m_angRotation.m_Value.z )
    {
LABEL_31:
      (*(this->_vptr_CGameSceneNode + 24))(this, 200, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v5, v6, v7);
      this->m_angRotation.m_Value = angNewRotation;
    }
    v9 = 0.0;
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v9 = LODWORD(v10->m_flCurrentTime);
    }
    CBaseEntity::SetSimulationTime(this->m_pOwner, v9, v6);
    goto LABEL_20;
  }
}


// CGameSceneNode::SetAbsScale  (line 2532, @0x00000000020cb410, libserver.so)  // inlines: CalcAbsolutePosition, GetAbsScale, Load, NetworkStateChanged, Set, curtime, operator=<float>
// calls: CGameSceneNode::SetNodeToWorldInternal, CBaseEntity::SetSimulationTime, CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: CBaseEntity::InputSetScale, CBaseEntity::SetAbsScale
void __fastcall CGameSceneNode::SetAbsScale(CGameSceneNode *const this, float a2, float flAbsScale)
{
  double v4; // xmm1_8
  bool v5; // zf
  CGameSceneNode *m_pParent; // r12
  float v7; // xmm0_4
  unsigned int v8; // r13d
  float m_Value; // xmm0_4
  double v10; // xmm0_8
  CGlobalVars *v11; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float flAbsScalea; // [rsp+Ch] [rbp-24h]
  float flAbsScalec; // [rsp+Ch] [rbp-24h]
  float flAbsScaled; // [rsp+Ch] [rbp-24h]
  float flAbsScaleb; // [rsp+Ch] [rbp-24h]

  if ( this->m_bDirtyAbsTransform.m_value )
  {
    flAbsScalea = a2;
    CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
    a2 = flAbsScalea;
  }
  *&v4 = COERCE_UNSIGNED_INT(fabs(this->m_flAbsScale - a2));
  if ( *&v4 > 0.00000011920929 )
  {
    v5 = this->m_nHierarchyType == 0;
    this->m_flAbsScale = a2;
    if ( v5 )
    {
      if ( a2 == this->m_flScale.m_Value )
      {
        m_Value = this->m_flScale.m_Value;
      }
      else
      {
        flAbsScalec = a2;
        (*(this->_vptr_CGameSceneNode + 24))(this, 212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        m_Value = flAbsScalec;
        this->m_flScale.m_Value = flAbsScalec;
      }
      v8 = 260;
      CGameSceneNode::SetNodeToWorldInternal(this, &this->m_vecOrigin.m_Value, &this->m_angRotation.m_Value, m_Value);
    }
    else
    {
      m_pParent = this->m_pParent;
      if ( m_pParent->m_bDirtyAbsTransform.m_value )
      {
        flAbsScaleb = a2;
        CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pParent);
        a2 = flAbsScaleb;
      }
      v7 = a2 / m_pParent->m_flAbsScale;
      if ( v7 == this->m_flScale.m_Value )
      {
        v8 = 4;
      }
      else
      {
        flAbsScaled = v7;
        v8 = 4;
        (*(this->_vptr_CGameSceneNode + 24))(this, 212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_flScale.m_Value = flAbsScaled;
      }
    }
    v10 = 0.0;
    v11 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v10 = LODWORD(v11->m_flCurrentTime);
    }
    CBaseEntity::SetSimulationTime(this->m_pOwner, v10, v4);
    (*(this->_vptr_CGameSceneNode + 11))(this, v8);
  }
}


// CGameSceneNode::ForceDirtyOriginAngles  (line 2559, @0x00000000020c4850, libserver.so)  // inlines: GetElement, NetworkComponentChanged, NetworkStateChanged, Set, operator!=, operator=, operator=<Vector>, operator[]
// calls: CNetworkOriginCellCoordQuantizedVector::LatchComponent
// callers: CBaseEntity::CheckStepSimulationChanged, CBaseEntity::StepSimulationThink
void __fastcall CGameSceneNode::ForceDirtyOriginAngles(
        CGameSceneNode *const this,
        const Vector *const vAltOrigin,
        const QAngle *const qAltAngle)
{
  __int64 v3; // r15
  CNetworkOriginCellCoordQuantizedVector *p_m_vecOrigin; // r14
  float v7; // xmm0_4
  float v8; // xmm0_4
  CGameSceneNode *v9; // rbx
  const QAngle *v10; // r13
  float x; // xmm0_4
  float y; // xmm1_4
  float z; // xmm2_4
  bool v14; // zf
  CNetworkedQuantizedFloat *v15; // rdx
  INetworkStateChangedRouter *v16; // rdi
  uint16 *v17; // rdx
  signed __int64 v18; // rdx
  CNetworkedQuantizedFloat *p_m_vecX; // rdx
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  uint16 *p_m_cellX; // rdx
  signed __int64 v22; // rdx
  float v23; // xmm3_4
  CNetworkedQuantizedFloat *p_m_vecY; // [rsp+8h] [rbp-68h]
  CNetworkedQuantizedFloat *p_m_vecZ; // [rsp+10h] [rbp-60h]
  uint16 *p_m_cellZ; // [rsp+18h] [rbp-58h]
  vec_t v27; // [rsp+18h] [rbp-58h]
  float v28; // [rsp+18h] [rbp-58h]
  uint16 *p_m_cellY; // [rsp+20h] [rbp-50h]
  vec_t v30; // [rsp+20h] [rbp-50h]
  float v31; // [rsp+20h] [rbp-50h]
  float qAltAngleb; // [rsp+28h] [rbp-48h]
  float qAltAnglec; // [rsp+28h] [rbp-48h]
  Vector vCurrentOrigin; // [rsp+30h] [rbp-40h]

  v3 = 0;
  p_m_vecOrigin = &this->m_vecOrigin;
  vCurrentOrigin = this->m_vecOrigin.m_Value;
  p_m_cellY = &this->m_vecOrigin.m_cellY;
  p_m_cellZ = &this->m_vecOrigin.m_cellZ;
  p_m_vecZ = &this->m_vecOrigin.m_vecZ;
  p_m_vecY = &this->m_vecOrigin.m_vecY;
  do
  {
    v7 = *(&vAltOrigin->x + v3);
    if ( v7 != *(&p_m_vecOrigin->m_Value.x + v3) )
    {
      *(&p_m_vecOrigin->m_Value.x + v3) = v7;
      CNetworkOriginCellCoordQuantizedVector::LatchComponent(p_m_vecOrigin, v3);
      p_m_vecX = &this->m_vecOrigin.m_vecX;
      if ( v3 != 0 )
      {
        p_m_vecX = p_m_vecY;
        if ( v3 != 1 )
          p_m_vecX = p_m_vecZ;
      }
      m_pStateChanged = this->m_vecOrigin.m_pStateChanged;
      if ( m_pStateChanged != 0 )
      {
        m_pStateChanged->NetworkStateChanged(p_m_vecOrigin,
          p_m_vecX - p_m_vecOrigin,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        m_pStateChanged = this->m_vecOrigin.m_pStateChanged;
      }
      p_m_cellX = &this->m_vecOrigin.m_cellX;
      if ( v3 != 0 )
      {
        p_m_cellX = p_m_cellY;
        if ( v3 != 1 )
          p_m_cellX = p_m_cellZ;
      }
      v22 = p_m_cellX - p_m_vecOrigin;
      if ( m_pStateChanged != 0 )
        m_pStateChanged->NetworkStateChanged(p_m_vecOrigin,
          v22,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
    }
    ++v3;
  }
  while ( v3 != 3 );
  LOBYTE(v3) = 0;
  do
  {
    v8 = *(&vCurrentOrigin.x + v3);
    if ( v8 != *(&p_m_vecOrigin->m_Value.x + v3) )
    {
      *(&p_m_vecOrigin->m_Value.x + v3) = v8;
      CNetworkOriginCellCoordQuantizedVector::LatchComponent(p_m_vecOrigin, v3);
      v15 = &this->m_vecOrigin.m_vecX;
      if ( v3 != 0 )
      {
        v15 = &this->m_vecOrigin.m_vecY;
        if ( v3 != 1 )
          v15 = &this->m_vecOrigin.m_vecZ;
      }
      v16 = this->m_vecOrigin.m_pStateChanged;
      if ( v16 != 0 )
      {
        v16->NetworkStateChanged(p_m_vecOrigin, v15 - p_m_vecOrigin, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v16 = this->m_vecOrigin.m_pStateChanged;
      }
      v17 = &this->m_vecOrigin.m_cellX;
      if ( v3 != 0 )
      {
        v17 = &this->m_vecOrigin.m_cellY;
        if ( v3 != 1 )
          v17 = &this->m_vecOrigin.m_cellZ;
      }
      v18 = v17 - p_m_vecOrigin;
      if ( v16 != 0 )
        v16->NetworkStateChanged(p_m_vecOrigin, v18, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    }
    ++v3;
  }
  while ( v3 != 3 );
  v9 = this;
  v10 = qAltAngle;
  x = v9->m_angRotation.m_Value.x;
  y = v9->m_angRotation.m_Value.y;
  z = v9->m_angRotation.m_Value.z;
  if ( x == qAltAngle->x && y == qAltAngle->y && z == qAltAngle->z )
  {
    v14 = 1;
  }
  else
  {
    v27 = v9->m_angRotation.m_Value.y;
    v30 = v9->m_angRotation.m_Value.z;
    qAltAngleb = v9->m_angRotation.m_Value.x;
    (*(v9->_vptr_CGameSceneNode + 24))(v9, 200, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v23 = v10->x;
    x = qAltAngleb;
    v9->m_angRotation.m_Value.x = v10->x;
    z = v30;
    v14 = qAltAngleb == v23;
    y = v27;
    v9->m_angRotation.m_Value.y = v10->y;
    v9->m_angRotation.m_Value.z = v10->z;
  }
  if ( !v14 || y != v9->m_angRotation.m_Value.y || z != v9->m_angRotation.m_Value.z )
  {
    v28 = y;
    v31 = z;
    qAltAnglec = x;
    (*(v9->_vptr_CGameSceneNode + 24))(v9, 200, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v9->m_angRotation.m_Value.x = qAltAnglec;
    v9->m_angRotation.m_Value.y = v28;
    v9->m_angRotation.m_Value.z = v31;
  }
}


// ShouldWatch  (line 2570, @0x00000000020b0730, libserver.so)
bool __fastcall ShouldWatch(CEntityInstance *pEntity)
{
  return 0;
}


// CGameSceneNode::SetAnimationParentSpaceStateDirty  (line 2586, @0x000000000209c5a0, libserver.so)
void __fastcall CGameSceneNode::SetAnimationParentSpaceStateDirty(CGameSceneNode *const this)
{
  this->m_animationParentSpaceValidBoneFlags.m_value = CModelSkeleton::BoneFlags_t::FLAG_NO_BONE_FLAGS;
}


// CGameSceneNode::SetCompositeParentSpaceStateDirty  (line 2592, @0x000000000209c5b0, libserver.so)
void __fastcall CGameSceneNode::SetCompositeParentSpaceStateDirty(CGameSceneNode *const this)
{
  this->m_compositeParentSpaceValidBoneFlags.m_value = CModelSkeleton::BoneFlags_t::FLAG_NO_BONE_FLAGS;
}


// CGameSceneNode::SetCompositeWorldSpaceStateDirty  (line 2598, @0x000000000209c5c0, libserver.so)
void __fastcall CGameSceneNode::SetCompositeWorldSpaceStateDirty(CGameSceneNode *const this)
{
  this->m_compositeWorldSpaceValidBoneFlags.m_value = CModelSkeleton::BoneFlags_t::FLAG_NO_BONE_FLAGS;
}


// CGameSceneNode::InvalidatePhysicsRecursive  (line 2604, @0x00000000020dc490, libserver.so)  // inlines: AddToTail, CInvalidatePhysicsRecursiveScopeGuard, CopyConstruct<CGameSceneNode*>, Element, GetHierarchyAttachType, GetModelData, GrowMemory, MarkInInvalidatePhysicsRecursive, PerformInvalidatePhysicsRecursiveInternal, ThreadInterlockedIncrement, operator const RuntimeClass_t*, operator++, operator[], ~CInvalidatePhysicsRecursiveScopeGuard
// calls: CGameSceneNode::MarkInInvalidatePhysicsRecursive, CUtlMemory<CGameSceneNode*, int>::Grow, _Unwind_Resume
// callers: CSkeletonInstance::InvalidatePhysicsRecursive
// globals: CGameSceneNode::sm_nInvalidatePhysicsRecursiveInProgress, CGameSceneNode::sm_nBatchCallsToInvalidatePhysicsRecursive, s_batchInvalidatePhyicsRecursiveCalls
void __fastcall CGameSceneNode::InvalidatePhysicsRecursive(CGameSceneNode *const this, uint32 nChangeFlags)
{
  __int64 v4; // rax
  _QWORD *v5; // rax
  uint32 v6; // eax
  uint32 m_nCachedInvalidatePhysicsRecursiveFlags; // r15d
  uint32 v8; // r12d
  uint32 v9; // eax
  int v10; // eax
  uint32 v11; // ebx
  bool v12; // r13
  CGameSceneNode *m_pChild; // rbx
  int m_nHierarchyType; // eax
  __int64 v15; // rsi
  __int64 m_Size; // rbx
  int v17; // eax
  CGameSceneNode **v18; // rax
  int (**vptr_CGameSceneNode)(...); // rax

  _InterlockedAdd(&CGameSceneNode::sm_nInvalidatePhysicsRecursiveInProgress.m_value, 1u);
  v4 = (*(this->_vptr_CGameSceneNode + 9))(this);
  if ( v4 == 0 || (v5 = *(v4 + 480)) == 0 || *v5 == 0 )
    LOBYTE(nChangeFlags) = nChangeFlags & 0x2F;
  if ( (nChangeFlags & 0x50) != 0 )
  {
    v6 = nChangeFlags;
    if ( this->m_nDoNotSetAnimTimeInInvalidatePhysicsCount != 0 )
    {
      BYTE1(v6) = BYTE1(nChangeFlags) | 2;
      nChangeFlags = v6;
    }
  }
  m_nCachedInvalidatePhysicsRecursiveFlags = this->m_nCachedInvalidatePhysicsRecursiveFlags;
  if ( m_nCachedInvalidatePhysicsRecursiveFlags != (m_nCachedInvalidatePhysicsRecursiveFlags | nChangeFlags) )
  {
    this->m_nCachedInvalidatePhysicsRecursiveFlags = m_nCachedInvalidatePhysicsRecursiveFlags | nChangeFlags;
    v8 = nChangeFlags & 0xFFFFFD2F;
    if ( (nChangeFlags & 0x100) != 0 )
      v8 = nChangeFlags & 0xFFFFFC2F;
    if ( (nChangeFlags & 7) != 0 )
    {
      v9 = v8;
      v8 |= 9u;
      v10 = v9 | 1;
      if ( this->m_name.m_Value.m_nHashCode != 0 )
        v8 = v10;
    }
    v11 = nChangeFlags & 0x4D0;
    v12 = v11 != 0;
    if ( v8 != 0 || v11 != 0 )
    {
      m_pChild = this->m_pChild;
      if ( m_pChild != 0 )
      {
        while ( 1 )
        {
          if ( v12 )
          {
            m_nHierarchyType = m_pChild->m_nHierarchyType;
            if ( m_nHierarchyType == 3 || m_pChild->m_nHierarchyType == 0 )
            {
              LODWORD(v15) = v8;
            }
            else
            {
              v15 = v8 | 3;
              if ( m_nHierarchyType == 1 )
              {
                LOBYTE(v15) = v8 | 0x83;
                (*(m_pChild->_vptr_CGameSceneNode + 11))(m_pChild, v15);
                goto LABEL_25;
              }
            }
            if ( v15 == 0 )
              goto LABEL_21;
LABEL_24:
            (*(m_pChild->_vptr_CGameSceneNode + 11))(m_pChild);
LABEL_25:
            m_pChild = m_pChild->m_pNextSibling;
            if ( m_pChild == 0 )
              break;
          }
          else
          {
            if ( v8 != 0 )
              goto LABEL_24;
LABEL_21:
            m_pChild = m_pChild->m_pNextSibling;
            if ( m_pChild == 0 )
              break;
          }
        }
      }
    }
    if ( CGameSceneNode::sm_nBatchCallsToInvalidatePhysicsRecursive != 0 )
    {
      if ( m_nCachedInvalidatePhysicsRecursiveFlags == 0 )
      {
        m_Size = s_batchInvalidatePhyicsRecursiveCalls.m_Size;
        v17 = s_batchInvalidatePhyicsRecursiveCalls.m_Size;
        if ( s_batchInvalidatePhyicsRecursiveCalls.m_Size == s_batchInvalidatePhyicsRecursiveCalls.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CGameSceneNode *,int>::Grow(&s_batchInvalidatePhyicsRecursiveCalls.m_Memory, 1);
          v17 = s_batchInvalidatePhyicsRecursiveCalls.m_Size;
        }
        s_batchInvalidatePhyicsRecursiveCalls.m_Size = v17 + 1;
        v18 = &s_batchInvalidatePhyicsRecursiveCalls.m_Memory.m_pMemory[m_Size];
        if ( v18 != 0 )
          *v18 = this;
      }
    }
    else if ( this->m_nCachedInvalidatePhysicsRecursiveFlags != 0 )
    {
      vptr_CGameSceneNode = this->_vptr_CGameSceneNode;
      this->m_nCachedInvalidatePhysicsRecursiveFlags = 0;
      vptr_CGameSceneNode[15](this);
    }
  }
  CGameSceneNode::MarkInInvalidatePhysicsRecursive(0);
}


// CGameSceneNode::PerformInvalidatePhysicsRecursiveInternal  (line 2702, @0x00000000020b0740, libserver.so)
void __fastcall CGameSceneNode::PerformInvalidatePhysicsRecursiveInternal(CGameSceneNode *const this)
{
  if ( this->m_nCachedInvalidatePhysicsRecursiveFlags != 0 )
  {
    this->m_nCachedInvalidatePhysicsRecursiveFlags = 0;
    (*(this->_vptr_CGameSceneNode + 15))(this);
  }
}


// CGameSceneNode::PerformInvalidatePhysicsRecursive  (line 2713, @0x00000000020da5a0, libserver.so)  // inlines: AddEFlags, AddToTail, CopyConstruct<CBaseEntity*>, Element, GetBoneMergeInfo, GetOwnerEntity, GrowMemory, MarkPVSInformationDirty, curtime, operator[]
// calls: CRenderGameSystem::IsSuppressingLatchSimulationState, CBaseEntity::SetSimulationTime, CEntityInstance::GetEntityIndex, CUtlMemory<CBaseEntity*, int>::Grow
// callers: CSkeletonInstance::PerformInvalidatePhysicsRecursive
// globals: s_animTimeSets, s_reportPositionChangedCalls
void __fastcall CGameSceneNode::PerformInvalidatePhysicsRecursive(CGameSceneNode *const this, uint32 nChangeFlags)
{
  CBaseEntity *m_pOwner; // r13
  __int16 v3; // r12
  bool IsSuppressingLatchSimulationState; // r15
  char v6; // r14
  uint8 m_nHierarchyType; // al
  int (**v8)(...); // rax
  __int64 v9; // rax
  __int64 v10; // rax
  CEntityInstance *v11; // r13
  CEntityInstance *v12; // rdi
  int m_Size; // r15d
  int v14; // edx
  CBaseEntity **v15; // rax
  int (**vptr_CGameSceneNode)(...); // rax
  double v17; // xmm1_8
  __int64 v18; // rax
  __int64 v19; // rax
  double v20; // xmm0_8
  CGlobalVars *v21; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CCollisionProperty *m_pCollision; // rdi
  __int64 v24; // r14
  int v25; // eax
  CBaseEntity **v26; // rax

  m_pOwner = 0;
  v3 = nChangeFlags;
  if ( this->m_name.m_Value.m_nHashCode == 0 )
  {
    m_pOwner = this->m_pOwner;
    if ( (nChangeFlags & 8) != 0 && m_pOwner != 0 )
      m_pOwner->m_iEFlags |= 0x1000u;
  }
  IsSuppressingLatchSimulationState = CRenderGameSystem::IsSuppressingLatchSimulationState();
  if ( (v3 & 7) == 0 )
    goto LABEL_4;
  vptr_CGameSceneNode = this->_vptr_CGameSceneNode;
  this->m_bDirtyAbsTransform.m_value = 1;
  this->m_bDirtyAttachments.m_value = 1;
  vptr_CGameSceneNode[14](this);
  if ( m_pOwner == 0 )
    goto LABEL_4;
  if ( !IsSuppressingLatchSimulationState )
  {
    v20 = 0.0;
    v21 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v20 = LODWORD(v21->m_flCurrentTime);
    }
    CBaseEntity::SetSimulationTime(m_pOwner, v20, v17);
  }
  if ( (v3 & 5) != 0 )
  {
    m_pOwner->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    if ( CEntityInstance::GetEntityIndex(m_pOwner).m_Data != 0 )
    {
      m_pCollision = m_pOwner->m_pCollision;
      if ( m_pCollision != 0 )
        (*(m_pCollision->_vptr_ICollideable + 21))(m_pCollision);
    }
  }
  if ( (v3 & 2) != 0
    && m_pOwner->m_pCollision != 0
    && (v18 = (*(m_pOwner->_vptr_IHandleEntity + 29))(m_pOwner), (*(*v18 + 176LL))(v18) != 0) )
  {
    v6 = 1;
    v19 = (*(m_pOwner->_vptr_IHandleEntity + 29))(m_pOwner);
    (*(*v19 + 200LL))(v19);
  }
  else
  {
LABEL_4:
    v6 = 0;
  }
  if ( (v3 & 0x50) != 0 )
  {
    if ( m_pOwner != 0 && !IsSuppressingLatchSimulationState && (v3 & 0x200) == 0 )
    {
      m_Size = s_animTimeSets.m_Size;
      v14 = s_animTimeSets.m_Size;
      if ( s_animTimeSets.m_Size == s_animTimeSets.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CBaseEntity *,int>::Grow(&s_animTimeSets.m_Memory, 1);
        v14 = s_animTimeSets.m_Size;
      }
      s_animTimeSets.m_Size = v14 + 1;
      v15 = &s_animTimeSets.m_Memory.m_pMemory[m_Size];
      if ( v15 != 0 )
        *v15 = m_pOwner;
    }
    (*(this->_vptr_CGameSceneNode + 12))(this);
    m_nHierarchyType = this->m_nHierarchyType;
    if ( this->m_pBoneMergeList != 0 && m_nHierarchyType == 1 )
    {
      *(this + 249) |= 4u;
    }
    else if ( m_nHierarchyType != 1 )
    {
LABEL_10:
      (*(this->_vptr_CGameSceneNode + 13))(this);
LABEL_11:
      v8 = this->_vptr_CGameSceneNode;
      this->m_bDirtyAttachments.m_value = 1;
      v8[14](this);
      goto LABEL_12;
    }
    this->m_bDirtyAbsTransform.m_value = 1;
    goto LABEL_10;
  }
  if ( (v3 & 0x80u) != 0 )
    goto LABEL_10;
  if ( (v3 & 0x400) != 0 )
    goto LABEL_11;
LABEL_12:
  if ( (v3 & 0x100) != 0 )
    this->m_bDirtyAbsTransform.m_value = 0;
  if ( (v3 & 0x40) != 0 && v6 == 0 && m_pOwner != 0 && m_pOwner->m_pCollision != 0 )
  {
    v9 = (*(m_pOwner->_vptr_IHandleEntity + 29))(m_pOwner);
    if ( (*(*v9 + 192LL))(v9) != 0 )
    {
      v10 = (*(m_pOwner->_vptr_IHandleEntity + 29))(m_pOwner);
      (*(*v10 + 200LL))(v10);
    }
  }
  if ( this->m_name.m_Value.m_nHashCode == 0 )
  {
    v11 = this->m_pOwner;
    if ( v11 != 0 && (v11->m_pEntity->m_fDataObjectTypes & 0x10) != 0 && (v3 & 7) != 0 )
    {
      v24 = s_reportPositionChangedCalls.m_Size;
      v25 = s_reportPositionChangedCalls.m_Size;
      if ( s_reportPositionChangedCalls.m_Size == s_reportPositionChangedCalls.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CBaseEntity *,int>::Grow(&s_reportPositionChangedCalls.m_Memory, 1);
        v25 = s_reportPositionChangedCalls.m_Size;
      }
      s_reportPositionChangedCalls.m_Size = v25 + 1;
      v26 = &s_reportPositionChangedCalls.m_Memory.m_pMemory[v24];
      if ( v26 != 0 )
        *v26 = v11;
    }
  }
  if ( (*(this + 248) & 0x40) != 0 && (v3 & 0xD7) != 0 )
  {
    v12 = this->m_pOwner;
    if ( v12 != 0 )
      (*(v12->_vptr_IHandleEntity + 69))(v12);
  }
}


// CGameSceneNode::OnLocalOriginNetworkChangeReceived  (line 2925, @0x00000000020b0770, libserver.so)
void __fastcall CGameSceneNode::OnLocalOriginNetworkChangeReceived(CGameSceneNode *const this)
{
  *(this + 248) |= 4u;
}


// CGameSceneNode::OnLocalAnglesNetworkChangeReceived  (line 2932, @0x00000000020b0780, libserver.so)
void __fastcall CGameSceneNode::OnLocalAnglesNetworkChangeReceived(CGameSceneNode *const this)
{
  *(this + 248) |= 8u;
}


// CGameSceneNode::OnLocalScaleNetworkChangeReceived  (line 2942, @0x00000000020b0790, libserver.so)
void __fastcall CGameSceneNode::OnLocalScaleNetworkChangeReceived(CGameSceneNode *const this)
{
  *(this + 248) |= 0x10u;
}


// CGameSceneNode::OnHierarchyParentChanged  (line 2952, @0x00000000020b07a0, libserver.so)
void __fastcall CGameSceneNode::OnHierarchyParentChanged(CGameSceneNode *const this)
{
  *(this + 248) |= 1u;
}


// CGameSceneNode::OnHierarchyAttachmentChanged  (line 2958, @0x00000000020b07b0, libserver.so)
void __fastcall CGameSceneNode::OnHierarchyAttachmentChanged(CGameSceneNode *const this)
{
  *(this + 248) |= 1u;
}


// CGameSceneNode::OnHierarchyChanged  (line 2964, @0x00000000020cb1a0, libserver.so)
// calls: CGameSceneNode::EndHierarchicalAttachment, CGameSceneNodeHandle::Get, CGameSceneNode::StartHierarchicalAttachment, CGameSceneNode::DetachFromParent
// callers: CSkeletonInstance::OnHierarchyChanged
void __fastcall CGameSceneNode::OnHierarchyChanged(CGameSceneNode *const this, bool bInPostDataUpdate)
{
  CGameSceneNode::EndHierarchicalAttachment(this, bInPostDataUpdate);
  if ( CGameSceneNodeHandle::Get(&this->m_hParent) != 0 && !CGameSceneNode::StartHierarchicalAttachment(this) )
    CGameSceneNode::DetachFromParent(this);
}


// CGameSceneNode::ForceParentToBeNetworked  (line 3005, @0x00000000020b07c0, libserver.so)  // inlines: DecrementTransmitStateOwnedCounter, GetOwnerEntity, IncrementTransmitStateOwnedCounter
// calls: CNetworkTransmitComponent::DecrementTransmitStateOwnedCounter, CBaseEntity::DispatchUpdateTransmitState, CNetworkTransmitComponent::IncrementTransmitStateOwnedCounter, CBaseEntity::SetTransmitState
// callers: CRopeKeyframe::Activate
void __fastcall CGameSceneNode::ForceParentToBeNetworked(CGameSceneNode *const this, bool bEnable)
{
  CGameSceneNode *m_pParent; // rax
  CBaseEntity *m_pOwner; // rbx
  CNetworkTransmitComponent *p_m_NetworkTransmitComponent; // rdi

  if ( this->m_bForceParentToBeNetworked != bEnable )
  {
    m_pParent = this->m_pParent;
    this->m_bForceParentToBeNetworked = bEnable;
    if ( m_pParent != 0 )
    {
      m_pOwner = m_pParent->m_pOwner;
      if ( m_pOwner != 0 )
      {
        p_m_NetworkTransmitComponent = &m_pOwner->m_NetworkTransmitComponent;
        if ( bEnable )
        {
          CNetworkTransmitComponent::IncrementTransmitStateOwnedCounter(p_m_NetworkTransmitComponent);
          CBaseEntity::SetTransmitState(m_pOwner, 4);
        }
        else
        {
          CNetworkTransmitComponent::DecrementTransmitStateOwnedCounter(p_m_NetworkTransmitComponent);
          CBaseEntity::DispatchUpdateTransmitState(m_pOwner);
        }
      }
    }
  }
}


// CGameSceneNode::UpdateEntityForHierarchyChange  (line 3031, @0x00000000020b8df0, libserver.so)  // inlines: GetOwnerEntity
// calls: CBaseEntity::TransformStepData_ParentToParent, CSkeletonInstance::CollisionRulesChanged, CBaseEntity::TransformStepData_WorldToParent, CBaseEntity::TransformStepData_ParentToWorld
// callers: CGameSceneNode::PostDataUpdate, CGameSceneNode::AttachToParent
void __fastcall CGameSceneNode::UpdateEntityForHierarchyChange(
        CGameSceneNode *const this,
        CGameSceneNode *pOldParentNode)
{
  CBaseEntity *m_pOwner; // r12
  __int64 v5; // rax
  __int64 v6; // rax
  const RnCollisionAttr_t *v7; // r12
  CSkeletonInstance *v8; // rax
  CGameSceneNode *m_pParent; // rax
  void (__fastcall *v10)(CEntitySystem *, CEntityInstance *, CEntityInstance *); // rcx
  __int64 v11; // rax
  CBaseEntity *v12; // rsi

  m_pOwner = this->m_pOwner;
  if ( this->m_pParent != 0 )
  {
    if ( m_pOwner->m_pCollision != 0
      && (v5 = (*(m_pOwner->_vptr_IHandleEntity + 29))(this->m_pOwner), (*(*v5 + 56LL))(v5) == 1) )
    {
      v11 = (*(m_pOwner->_vptr_IHandleEntity + 29))(m_pOwner);
      (*(*v11 + 208LL))(v11, 6);
      if ( pOldParentNode != 0 )
        goto LABEL_5;
    }
    else if ( pOldParentNode != 0 )
    {
LABEL_5:
      CBaseEntity::TransformStepData_ParentToParent(m_pOwner, pOldParentNode->m_pOwner, m_pOwner);
      goto LABEL_6;
    }
    CBaseEntity::TransformStepData_WorldToParent(m_pOwner, m_pOwner);
    goto LABEL_6;
  }
  if ( pOldParentNode != 0 )
    v12 = pOldParentNode->m_pOwner;
  else
    v12 = 0;
  CBaseEntity::TransformStepData_ParentToWorld(this->m_pOwner, v12);
LABEL_6:
  if ( (*(this->_vptr_CGameSceneNode + 9))(this) != 0 && m_pOwner->m_pCollision != 0 )
  {
    v6 = (*(m_pOwner->_vptr_IHandleEntity + 29))(m_pOwner);
    v7 = (*(*v6 + 160LL))(v6);
    v8 = (*(this->_vptr_CGameSceneNode + 9))(this);
    CSkeletonInstance::CollisionRulesChanged(v8, v7);
  }
  m_pParent = this->m_pParent;
  v10 = *(g_pEntitySystem->_vptr_IEntityResourceManifestBuilder + 14);
  if ( m_pParent != 0 )
    v10(g_pEntitySystem, this->m_pOwner, m_pParent->m_pOwner);
  else
    v10(g_pEntitySystem, this->m_pOwner, 0);
}


// CGameSceneNode::AttachToParent  (line 3076, @0x00000000020ccc70, libserver.so)  // inlines: CEntityHandle, CGameSceneNodeHandle, CNetworkVarBase, CUtlStringToken, CalcAbsolutePosition, ConcatTransforms, DecomposeMatrixForNode, EnsureValidValue<CEntityHandle>, GetEHandle, GetEntryIndex, GetName, GetSerialNumber, Init, LargestComponentValue, Load, MatrixAngles, MatrixInvert, NetworkStateChanged, NodeToWorldTransform, Set, matrix3x4a_t, memcpy, operator=, operator=<CEntityInstance*>, operator=<CGameSceneNode*>, operator=<CUtlStringToken>
// calls: CGameSceneNode::DetachFromParent, CGameSceneNode::SetNodeToParentInternal, CGameSceneNode::UpdateEntityForHierarchyChange, CGameSceneNode::CalcAbsolutePositionWhenDirty, MatrixAngles, CGameSceneNode::SetLocalOrigin, CGameSceneNode::SetLocalAngles, CGameSceneNode::SetLocalScale, CGameSceneNode::ComputeBoneOrAttachmentToWorld, MatrixInvert, ConcatTransforms
// callers: CBodyComponent::AttachToParent, CGameSceneNode::PreInstanceSpawn
// local variable allocation has failed, the output may be wrong!
AttachToParentResult_t __fastcall CGameSceneNode::AttachToParent(
        CGameSceneNode *const this,
        CGameSceneNode *pParent,
        CUtlStringToken nBoneOrAttachName,
        const matrix3x4a_t *pOffsetTransform)
{
  const matrix3x4a_t *v5; // r14
  uint32 m_nHashCode; // r12d
  CGameSceneNode *m_pParent; // r13
  CEntityInstance *m_pOwner; // rdx
  CGameSceneNode::NetworkVar_m_hParent *p_m_hParent; // r9
  int v11; // eax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v13; // cx
  uint32 v14; // r10d
  uint32 v15; // eax
  AttachToParentResult_t result; // eax
  float v17; // xmm0_4
  float v18; // xmm1_4
  CGameSceneNode::NetworkVar_m_hParent *v19; // [rsp+8h] [rbp-108h]
  uint32 v20; // [rsp+8h] [rbp-108h]
  uint32 v21; // [rsp+10h] [rbp-100h]
  uint32 v22; // [rsp+10h] [rbp-100h]
  uint32 v23; // [rsp+18h] [rbp-F8h]
  int flScale; // [rsp+1Ch] [rbp-F4h]
  float flScalea; // [rsp+1Ch] [rbp-F4h]
  matrix3x4a_t initialAttachPosition; // [rsp+20h] [rbp-F0h] BYREF
  matrix3x4a_t worldToInitialAttachmentPosition; // [rsp+50h] [rbp-C0h] BYREF
  matrix3x4_t angles; // [rsp+80h] [rbp-90h] OVERLAPPED BYREF
  matrix3x4_t vScale[2]; // [rsp+B0h] [rbp-60h] BYREF

  v5 = pOffsetTransform;
  m_nHashCode = 0;
  if ( nBoneOrAttachName.m_nHashCode != -454460638 )
    m_nHashCode = nBoneOrAttachName.m_nHashCode;
  m_pParent = this->m_pParent;
  if ( m_pParent != pParent || m_nHashCode != this->m_hierarchyAttachName.m_Value.m_nHashCode )
  {
    CGameSceneNode::DetachFromParent(this);
    if ( pParent == 0 )
    {
LABEL_25:
      CGameSceneNode::UpdateEntityForHierarchyChange(this, m_pParent);
      return AttachToParentResult_t::ATTACH_TO_PARENT_SUCCEEDED;
    }
    flScale = (*(pParent->_vptr_CGameSceneNode + 21))(pParent, m_nHashCode);
    if ( flScale == 0 )
    {
      CGameSceneNode::UpdateEntityForHierarchyChange(this, m_pParent);
      return AttachToParentResult_t::ATTACH_TO_PARENT_FAILED;
    }
    if ( this->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
    m_pOwner = pParent->m_pOwner;
    p_m_hParent = &this->m_hParent;
    v11 = -1;
    if ( m_pOwner != 0 )
    {
      m_pEntity = m_pOwner->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v13 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v11 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v13 & 0x7FFF;
        LODWORD(vScale[0].m_flMatVal[0][0]) = v11;
      }
    }
    v14 = pParent->m_name.m_Value.m_nHashCode;
    if ( v11 != this->m_hParent.m_hOwner.m_Value.m_Index )
    {
      v23 = pParent->m_name.m_Value.m_nHashCode;
      v20 = v11;
      (*(this->m_hParent._vptr_CGameSceneNodeHandle + 2))(&this->m_hParent, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v14 = v23;
      p_m_hParent = &this->m_hParent;
      this->m_hParent.m_hOwner.m_Value.m_Index = v20;
    }
    v21 = v14;
    if ( v14 != this->m_hParent.m_name.m_Value.m_nHashCode )
    {
      v19 = p_m_hParent;
      (*(this->m_hParent._vptr_CGameSceneNodeHandle + 2))(p_m_hParent, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      p_m_hParent = v19;
      this->m_hParent.m_name.m_Value.m_nHashCode = v21;
    }
    (*(this->m_hParent._vptr_CGameSceneNodeHandle + 1))(p_m_hParent);
    v15 = 0;
    if ( flScale != 3 )
      v15 = m_nHashCode;
    v22 = v15;
    if ( v15 != this->m_hierarchyAttachName.m_Value.m_nHashCode )
    {
      (*(this->_vptr_CGameSceneNode + 24))(this, 292, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_hierarchyAttachName.m_Value.m_nHashCode = v22;
    }
    if ( flScale == 1 )
    {
      v5 = &g_MatrixIdentity;
    }
    else if ( v5 == 0 )
    {
      CGameSceneNode::ComputeBoneOrAttachmentToWorld(pParent, m_nHashCode, &initialAttachPosition);
      MatrixInvert(&initialAttachPosition, vScale);
      worldToInitialAttachmentPosition = vScale[0];
      if ( this->m_bDirtyAbsTransform.m_value )
        CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
      ConcatTransforms(&worldToInitialAttachmentPosition, &this->m_mNodeToWorld, &angles);
      vScale[0] = angles;
      CGameSceneNode::SetNodeToParentInternal(this, vScale);
      goto LABEL_24;
    }
    CGameSceneNode::SetNodeToParentInternal(this, v5);
LABEL_24:
    (*(this->_vptr_CGameSceneNode + 16))(this, 0);
    goto LABEL_25;
  }
  result = AttachToParentResult_t::ATTACH_TO_PARENT_SUCCEEDED;
  if ( pOffsetTransform == 0 || this->m_nHierarchyType == 1 )
    return result;
  MatrixAngles(pOffsetTransform, &angles, &worldToInitialAttachmentPosition, vScale);
  v17 = fabs(vScale[0].m_flMatVal[0][2]);
  if ( fabs(vScale[0].m_flMatVal[0][0]) <= fabs(vScale[0].m_flMatVal[0][1]) )
  {
    if ( fabs(vScale[0].m_flMatVal[0][1]) <= fabs(vScale[0].m_flMatVal[0][2]) )
      goto LABEL_34;
    v17 = fabs(vScale[0].m_flMatVal[0][1]);
    if ( fabs(vScale[0].m_flMatVal[0][0]) <= fabs(vScale[0].m_flMatVal[0][1]) )
      goto LABEL_34;
  }
  else if ( fabs(vScale[0].m_flMatVal[0][0]) <= fabs(vScale[0].m_flMatVal[0][2]) )
  {
LABEL_34:
    if ( fabs(v17 - 1.0) < 0.001 )
      v17 = 1.0;
    flScalea = v17;
    CGameSceneNode::SetLocalOrigin(this, &worldToInitialAttachmentPosition);
    CGameSceneNode::SetLocalAngles(this, &angles);
    CGameSceneNode::SetLocalScale(this, flScalea, v18);
    return AttachToParentResult_t::ATTACH_TO_PARENT_SUCCEEDED;
  }
  v17 = fabs(vScale[0].m_flMatVal[0][0]);
  goto LABEL_34;
}


// CGameSceneNode::DetermineHierarchyAttachType  (line 3174, @0x000000000209c5d0, libserver.so)
HierarchyType_t __fastcall CGameSceneNode::DetermineHierarchyAttachType(
        const CGameSceneNode *const this,
        CUtlStringToken nBoneOrAttachName)
{
  if ( nBoneOrAttachName.m_nHashCode == 0 || nBoneOrAttachName.m_nHashCode == -454460638 )
    return HierarchyType_t::HIERARCHY_ABSORIGIN;
  else
    return HierarchyType_t::HIERARCHY_NONE;
}


// CGameSceneNode::AdjustChildHierarchyDepth_R  (line 3183, @0x00000000020b0830, libserver.so)
// callers: CGameSceneNode::StartHierarchicalAttachment
void __fastcall CGameSceneNode::AdjustChildHierarchyDepth_R(CGameSceneNode *const this, int nDepth)
{
  int v2; // r12d
  CGameSceneNode *m_pChild; // rbx

  v2 = nDepth + 1;
  m_pChild = this->m_pChild;
  for ( this->m_nHierarchicalDepth = nDepth; m_pChild != 0; m_pChild = m_pChild->m_pNextSibling )
    CGameSceneNode::AdjustChildHierarchyDepth_R(m_pChild, v2);
}


// CGameSceneNode::LinkIntoHierarchyTree  (line 3192, @0x00000000020b0870, libserver.so)
void __fastcall CGameSceneNode::LinkIntoHierarchyTree(CGameSceneNode *const this, CGameSceneNode *pParent)
{
  if ( pParent != 0 )
  {
    this->m_pParent = pParent;
    this->m_pNextSibling = pParent->m_pChild;
    pParent->m_pChild = this;
  }
}


// CGameSceneNode::UnlinkFromHierarchyTree  (line 3203, @0x00000000020b0890, libserver.so)
// callers: CGameSceneNode::EndHierarchicalAttachment
void __fastcall CGameSceneNode::UnlinkFromHierarchyTree(CGameSceneNode *const this)
{
  CGameSceneNode *m_pParent; // rax
  CGameSceneNode *m_pChild; // rdx
  CGameSceneNode *m_pNextSibling; // rax

  m_pParent = this->m_pParent;
  if ( m_pParent != 0 )
  {
    m_pChild = m_pParent->m_pChild;
    if ( m_pChild != 0 )
    {
      if ( this == m_pChild )
      {
        m_pParent->m_pChild = this->m_pNextSibling;
LABEL_10:
        this->m_pParent = 0;
        this->m_pNextSibling = 0;
      }
      else
      {
        while ( 1 )
        {
          m_pNextSibling = m_pChild->m_pNextSibling;
          if ( m_pNextSibling == 0 )
            break;
          if ( this == m_pNextSibling )
          {
            m_pChild->m_pNextSibling = this->m_pNextSibling;
            goto LABEL_10;
          }
          m_pChild = m_pChild->m_pNextSibling;
        }
      }
    }
  }
}


// CGameSceneNode::DetachFromParent  (line 3234, @0x00000000020cae70, libserver.so)  // inlines: CalcAbsolutePosition, IsNull, Load, NetworkStateChanged, NodeToWorldTransform, Set, operator=, operator=<CGameSceneNodeHandle>, operator=<CUtlStringToken>
// calls: CGameSceneNode::SetNodeToParentInternal, CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: CBodyComponent::DetachFromParent, CGameSceneNode::FinalizeHierarchyRecursive, CGameSceneNode::UpdateOnRemove, CGameSceneNode::OnHierarchyChanged, CGameSceneNode::AttachToParent
void __fastcall CGameSceneNode::DetachFromParent(CGameSceneNode *const this)
{
  uint32 m_nHashCode; // eax

  if ( this->m_hParent.m_hOwner.m_Value.m_Index != -1 || this->m_hParent.m_name.m_Value.m_nHashCode != 0 )
  {
    if ( this->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
    if ( this->m_hParent.m_hOwner.m_Value.m_Index == -1 )
    {
      if ( this->m_hParent.m_name.m_Value.m_nHashCode == 0 )
        goto LABEL_7;
    }
    else
    {
      (*(this->m_hParent._vptr_CGameSceneNodeHandle + 2))(&this->m_hParent, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      m_nHashCode = this->m_hParent.m_name.m_Value.m_nHashCode;
      this->m_hParent.m_hOwner.m_Value.m_Index = -1;
      if ( m_nHashCode == 0 )
      {
LABEL_7:
        (*(this->m_hParent._vptr_CGameSceneNodeHandle + 1))(&this->m_hParent);
        if ( this->m_hierarchyAttachName.m_Value.m_nHashCode != 0 )
        {
          (*(this->_vptr_CGameSceneNode + 24))(this, 292, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_hierarchyAttachName.m_Value.m_nHashCode = 0;
          if ( !this->m_bDirtyAbsTransform.m_value )
            goto LABEL_9;
        }
        else if ( !this->m_bDirtyAbsTransform.m_value )
        {
LABEL_9:
          CGameSceneNode::SetNodeToParentInternal(this, &this->m_mNodeToWorld);
          (*(this->_vptr_CGameSceneNode + 16))(this, 0);
          return;
        }
        CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
        goto LABEL_9;
      }
    }
    (*(this->m_hParent._vptr_CGameSceneNodeHandle + 2))(&this->m_hParent, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hParent.m_name.m_Value.m_nHashCode = 0;
    goto LABEL_7;
  }
}


// CGameSceneNode::CreateContinuousVelocityInterpolationHistory  (line 3258, @0x00000000020c9b30, libserver.so)  // inlines: CalcAbsolutePosition, GetAbsOrigin, Load
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty
void __fastcall CGameSceneNode::CreateContinuousVelocityInterpolationHistory(
        CGameSceneNode *const this,
        const Vector *const vecVelocity)
{
  if ( this->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
}


// CGameSceneNode::MarkNetworkStateChangedForLocalAngles  (line 3266, @0x00000000020b09f0, libserver.so)  // inlines: NetworkStateChanged
// callers: Physics_UpdateStepSimulation
void __fastcall CGameSceneNode::MarkNetworkStateChangedForLocalAngles(CGameSceneNode *const this)
{
  (*(this->_vptr_CGameSceneNode + 24))(this, 200, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
}


// CGameSceneNode::MarkNetworkStateChangedForOrigin  (line 3271, @0x00000000020b0a10, libserver.so)  // inlines: GetElement, NetworkComponentChanged, NetworkStateChanged
// callers: Physics_UpdateStepSimulation
void __fastcall CGameSceneNode::MarkNetworkStateChangedForOrigin(CGameSceneNode *const this, int nComponent)
{
  CNetworkedQuantizedFloat *p_m_vecX; // rdx
  CNetworkOriginCellCoordQuantizedVector *p_m_vecOrigin; // r13
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  uint16 *p_m_cellX; // rdx
  uint16 *p_m_cellZ; // rbx
  signed __int64 v9; // rdx

  p_m_vecX = &this->m_vecOrigin.m_vecX;
  p_m_vecOrigin = &this->m_vecOrigin;
  if ( nComponent != 0 )
  {
    p_m_vecX = &this->m_vecOrigin.m_vecY;
    if ( nComponent != 1 )
      p_m_vecX = &this->m_vecOrigin.m_vecZ;
  }
  m_pStateChanged = this->m_vecOrigin.m_pStateChanged;
  if ( m_pStateChanged != 0 )
  {
    m_pStateChanged->NetworkStateChanged(p_m_vecOrigin,
      p_m_vecX - p_m_vecOrigin,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    m_pStateChanged = this->m_vecOrigin.m_pStateChanged;
  }
  p_m_cellX = &this->m_vecOrigin.m_cellX;
  if ( nComponent != 0 )
  {
    p_m_cellX = &this->m_vecOrigin.m_cellY;
    p_m_cellZ = &this->m_vecOrigin.m_cellZ;
    if ( nComponent != 1 )
      p_m_cellX = p_m_cellZ;
  }
  v9 = p_m_cellX - p_m_vecOrigin;
  if ( m_pStateChanged != 0 )
    m_pStateChanged->NetworkStateChanged(p_m_vecOrigin, v9, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
}


// CGameSceneNode::SetZOffset  (line 3280, @0x00000000020b0ac0, libserver.so)
void __fastcall CGameSceneNode::SetZOffset(CGameSceneNode *const this, double a2, float flZOffset)
{
  ;
}


// CGameSceneNode::GetZOffset  (line 3304, @0x00000000020b0ad0, libserver.so)
float __fastcall CGameSceneNode::GetZOffset(const CGameSceneNode *const this)
{
  return 0.0;
}


// CGameSceneNode::ReadOffsetValue  (line 3313, @0x00000000020b0ae0, libserver.so)
void __fastcall CGameSceneNode::ReadOffsetValue(
        CGameSceneNode *const this,
        float *pValue,
        int nCount,
        const IInterpolatedVar *pVar)
{
  *pValue = 0.0;
}


// CGameSceneNode::WriteOffsetValue  (line 3319, @0x00000000020b0af0, libserver.so)
void __fastcall CGameSceneNode::WriteOffsetValue(
        CGameSceneNode *const this,
        const float *pValue,
        int nCount,
        const IInterpolatedVar *pVar,
        IVWriteOpType_t opType)
{
  ;
}


