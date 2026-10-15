// Reconstructed from DWARF by pahole; not original source.

// src/modellib/modelbuilder.cpp:598
struct RetargetKey_t {
	int32 m_nGroupType;  // +0x0
	int32 m_nChainType;  // +0x4
	int32 m_nIndex;  // +0x8

	// sizeof = 12
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_modelbuilder.cpp  (line 0, @0x0000000001a6af90, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// calls: LoggingSystem_RegisterLoggingChannel
// strings: "modellib"
// globals: `guard variable for'g_AnimOpSourceColors, UNSPECIFIED_LOGGING_COLOR, g_AnimOpSourceColors, LOG_MODELLIB
void __cdecl GLOBAL__sub_I_modelbuilder_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  if ( `guard variable for'g_AnimOpSourceColors == 0 )
  {
    `guard variable for'g_AnimOpSourceColors = 1;
    g_AnimOpSourceColors[0]._color[0] = -1;
    g_AnimOpSourceColors[0]._color[1] = -1;
    g_AnimOpSourceColors[0]._color[2] = 0;
    g_AnimOpSourceColors[0]._color[3] = -1;
    g_AnimOpSourceColors[1]._color[0] = -36;
    g_AnimOpSourceColors[1]._color[1] = -36;
    g_AnimOpSourceColors[1]._color[2] = -36;
    g_AnimOpSourceColors[1]._color[3] = -1;
    g_AnimOpSourceColors[2]._color[0] = 0;
    g_AnimOpSourceColors[2]._color[1] = -1;
    g_AnimOpSourceColors[2]._color[2] = 50;
    g_AnimOpSourceColors[2]._color[3] = -1;
    g_AnimOpSourceColors[3]._color[0] = -1;
    g_AnimOpSourceColors[3]._color[1] = 50;
    g_AnimOpSourceColors[3]._color[2] = 50;
    g_AnimOpSourceColors[3]._color[3] = -1;
  }
  LOG_MODELLIB = LoggingSystem_RegisterLoggingChannel("modellib", 0, 0, 2, *&UNSPECIFIED_LOGGING_COLOR);
}


// CBuilderMaterialGroup::SetName  (line 24, @0x0000000003147e20, libserver.so)
// calls: CUtlString::operator=
void __fastcall CBuilderMaterialGroup::SetName(CBuilderMaterialGroup *const this, const char *pName)
{
  CUtlString::operator=(&this->m_name, pName);
}


// CBuilderMaterialGroup::AddMaterial  (line 29, @0x0000000003148f20, libserver.so)  // inlines: AddToTail, CStrongHandle, Construct<CStrongHandle<InfoForResourceTypeIMaterial2> >, Element, GrowMemory, operator=, operator[]
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Init, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::Grow
void __fastcall CBuilderMaterialGroup::AddMaterial(CBuilderMaterialGroup *const this, HMaterial hMat)
{
  __int64 m_Size; // r12
  int v5; // eax
  CStrongHandle<InfoForResourceTypeIMaterial2> *v6; // rax
  CStrongHandle<InfoForResourceTypeIMaterial2> *v7; // rdi

  m_Size = this->m_materials.m_Size;
  v5 = this->m_materials.m_Size;
  if ( m_Size == this->m_materials.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>,int>::Grow(&this->m_materials.m_Memory, 1);
    v5 = this->m_materials.m_Size;
  }
  this->m_materials.m_Size = v5 + 1;
  v6 = &this->m_materials.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
  {
    v6->m_pBinding = 0;
    v7 = &this->m_materials.m_Memory.m_pMemory[m_Size];
  }
  else
  {
    v7 = 0;
  }
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(v7, hMat.m_pBinding->m_pData);
}


// CBuilderModelInfo::CBuilderModelInfo  (line 39, @0x0000000003147e30, libserver.so)  // inlines: CUtlString, Init
void __fastcall CBuilderModelInfo::CBuilderModelInfo(CBuilderModelInfo *const this)
{
  this->m_nInherentFlags = ModelFlags_t::MODEL_FLAG_NONE;
  this->m_sSurfaceProperty.m_pString = 0;
  this->m_keyValueText.m_pString = 0;
  this->m_vHullMin.x = 0.0;
  this->m_vHullMin.y = 0.0;
  this->m_vHullMin.z = 0.0;
  this->m_vHullMax.x = 0.0;
  this->m_vHullMax.y = 0.0;
  this->m_vHullMax.z = 0.0;
  this->m_vViewMin.x = 0.0;
  this->m_vViewMin.y = 0.0;
  this->m_vViewMin.z = 0.0;
  this->m_vViewMax.x = 0.0;
  this->m_vViewMax.y = 0.0;
  this->m_vViewMax.z = 0.0;
  this->m_flMass = 0.0;
  this->m_vEyePosition.x = 0.0;
  this->m_vEyePosition.y = 0.0;
  this->m_vEyePosition.z = 0.0;
  this->m_flMaxEyeDeflection = 0.0;
}


// CBuilderModelInfo::operator=  (line 51, @0x0000000003147eb0, libserver.so)  // inlines: GetRawPtr, ResolveOffset, operator char const*, operator=
// calls: CUtlString::operator=
// callers: CModelBuilder::InitFromPermData
CBuilderModelInfo *__fastcall CBuilderModelInfo::operator=(
        CBuilderModelInfo *const this,
        const PermModelInfo_t *const info)
{
  __int64 m_nOffset; // rax
  const char *v5; // rsi
  const char *v6; // rax
  __int64 v7; // rax
  const char *v8; // rsi
  const char *v9; // rax

  this->m_nInherentFlags = info->m_nFlags;
  this->m_vHullMin = info->m_vHullMin;
  this->m_vHullMax = info->m_vHullMax;
  this->m_vViewMin = info->m_vViewMin;
  this->m_vViewMax = info->m_vViewMax;
  this->m_flMass = info->m_flMass;
  this->m_vEyePosition = info->m_vEyePosition;
  this->m_flMaxEyeDeflection = info->m_flMaxEyeDeflection;
  m_nOffset = info->m_sSurfaceProperty.m_nOffset;
  v5 = "";
  if ( m_nOffset != 0 )
  {
    v6 = &info->m_sSurfaceProperty + m_nOffset;
    if ( v6 != 0 )
      v5 = v6;
  }
  CUtlString::operator=(&this->m_sSurfaceProperty, v5);
  v7 = info->m_keyValueText.m_nOffset;
  v8 = "";
  if ( v7 != 0 )
  {
    v9 = &info->m_keyValueText + v7;
    if ( v9 != 0 )
      v8 = v9;
  }
  CUtlString::operator=(&this->m_keyValueText, v8);
  return this;
}


// CBuilderModelInfo::FillInPermData  (line 67, @0x0000000003147fc0, libserver.so)  // inlines: Allocate<char>, AllocateUnaligned<char>, CUnlockedResource, GetDataPtr, GetPtr, SetPtr, SetRawPtr, V_strlen, WriteString, memcpy, operator char*, operator=
// calls: CUtlString::Get, strlen, CResourceStream::Align, CResourceStream::AllocateBytes, memcpy
// callers: CModelBuilder::FillInPermData
void __fastcall CBuilderModelInfo::FillInPermData(
        CBuilderModelInfo *const this,
        PermModelInfo_t *pPermData,
        CResourceStream *pResourceStream)
{
  CUtlString *p_m_sSurfaceProperty; // rdi
  const char *v7; // rax
  const char *v8; // r14
  int v9; // eax
  signed int v10; // r15d
  unsigned int Bytes; // eax
  uint8 *m_pData; // rdx
  uint v13; // eax
  void *v14; // rax
  const char *v15; // rax
  const char *v16; // r12
  int v17; // eax
  signed int v18; // r14d
  unsigned int v19; // eax
  uint8 *v20; // rdx
  uint v21; // eax
  void *v22; // rcx

  p_m_sSurfaceProperty = &this->m_sSurfaceProperty;
  pPermData->m_nFlags = p_m_sSurfaceProperty[-9].m_pString;
  pPermData->m_vHullMin = *(&p_m_sSurfaceProperty[-9].m_pString + 4);
  pPermData->m_vHullMax = *&p_m_sSurfaceProperty[-7].m_pString;
  pPermData->m_vViewMin = *(&p_m_sSurfaceProperty[-6].m_pString + 4);
  pPermData->m_vViewMax = *&p_m_sSurfaceProperty[-4].m_pString;
  pPermData->m_flMass = *(&p_m_sSurfaceProperty[-3].m_pString + 1);
  pPermData->m_vEyePosition = *&p_m_sSurfaceProperty[-2].m_pString;
  pPermData->m_flMaxEyeDeflection = *(&p_m_sSurfaceProperty[-1].m_pString + 1);
  v7 = CUtlString::Get(p_m_sSurfaceProperty);
  v8 = v7;
  if ( v7 == 0 )
    goto LABEL_12;
  v9 = strlen(v7);
  if ( v9 == 0 )
    goto LABEL_12;
  v10 = v9 + 1;
  CResourceStream::Align(pResourceStream, 1u, 0);
  Bytes = CResourceStream::AllocateBytes(pResourceStream, v10);
  m_pData = pResourceStream->m_pData;
  v13 = Bytes - m_pData;
  if ( pResourceStream->m_nUsed < v13 )
  {
    memcpy(0, v8, v10);
    goto LABEL_12;
  }
  v14 = memcpy(&m_pData[v13], v8, v10);
  if ( v14 == 0 )
  {
LABEL_12:
    pPermData->m_sSurfaceProperty.m_nOffset = 0;
    goto LABEL_6;
  }
  pPermData->m_sSurfaceProperty.m_nOffset = v14 - (pPermData + 72);
LABEL_6:
  v15 = CUtlString::Get(&this->m_keyValueText);
  v16 = v15;
  if ( v15 != 0 )
  {
    v17 = strlen(v15);
    if ( v17 != 0 )
    {
      v18 = v17 + 1;
      CResourceStream::Align(pResourceStream, 1u, 0);
      v19 = CResourceStream::AllocateBytes(pResourceStream, v18);
      v20 = pResourceStream->m_pData;
      v21 = v19 - v20;
      if ( pResourceStream->m_nUsed < v21 )
      {
        memcpy(0, v16, v18);
      }
      else
      {
        v22 = memcpy(&v20[v21], v16, v18);
        if ( v22 != 0 )
        {
          pPermData->m_keyValueText.m_nOffset = v22 - (pPermData + 76);
          return;
        }
      }
    }
  }
  pPermData->m_keyValueText.m_nOffset = 0;
}


// CModelSkeletonBuilder::CModelSkeletonBuilder  (line 85, @0x000000000314dcf0, libserver.so)  // inlines: BoneDict_t, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHashPairing_t&)>::CUtlHash
// callers: CModelBuilder::CModelBuilder
// globals: BoneHashPairing_KeyFunc(BoneHashPairing_t const&), BoneHashPairing_CompareFunc(BoneHashPairing_t const&,BoneHashPairing_t const&)
void __fastcall CModelSkeletonBuilder::CModelSkeletonBuilder(CModelSkeletonBuilder *const this)
{
  CUtlHash<BoneHashPairing_t,bool (*)(BoneHashPairing_t const&,BoneHashPairing_t const&),unsigned int (*)(BoneHashPairing_t const&)>::CUtlHash(
    &this->m_boneDict,
    32,
    0,
    0,
    BoneHashPairing_CompareFunc,
    BoneHashPairing_KeyFunc);
  this->m_boneName.m_Size = 0;
  this->m_boneName.m_Memory.m_pMemory = 0;
  this->m_boneName.m_Memory.m_nAllocationCount = 0;
  this->m_boneName.m_Memory.m_nGrowSize = 0;
  this->m_nParentHash.m_Size = 0;
  this->m_nParentHash.m_Memory.m_pMemory = 0;
  this->m_nParentHash.m_Memory.m_nAllocationCount = 0;
  this->m_nParentHash.m_Memory.m_nGrowSize = 0;
  this->m_nParentIndices.m_Size = 0;
  this->m_nParentIndices.m_Memory.m_pMemory = 0;
  this->m_nParentIndices.m_Memory.m_nAllocationCount = 0;
  this->m_nParentIndices.m_Memory.m_nGrowSize = 0;
  this->m_boneSphere.m_Size = 0;
  this->m_boneSphere.m_Memory.m_pMemory = 0;
  this->m_boneSphere.m_Memory.m_nAllocationCount = 0;
  this->m_boneSphere.m_Memory.m_nGrowSize = 0;
  this->m_nFlag.m_Size = 0;
  this->m_nFlag.m_Memory.m_pMemory = 0;
  this->m_nFlag.m_Memory.m_nAllocationCount = 0;
  this->m_nFlag.m_Memory.m_nGrowSize = 0;
  this->m_bonePosParent.m_Size = 0;
  this->m_bonePosParent.m_Memory.m_pMemory = 0;
  this->m_bonePosParent.m_Memory.m_nAllocationCount = 0;
  this->m_bonePosParent.m_Memory.m_nGrowSize = 0;
  this->m_boneRotParent.m_Size = 0;
  this->m_boneRotParent.m_Memory.m_pMemory = 0;
  this->m_boneRotParent.m_Memory.m_nAllocationCount = 0;
  this->m_boneRotParent.m_Memory.m_nGrowSize = 0;
  this->m_simBones.m_Size = 0;
  this->m_simBones.m_Memory.m_pMemory = 0;
  this->m_simBones.m_Memory.m_nAllocationCount = 0;
  this->m_simBones.m_Memory.m_nGrowSize = 0;
}


// CModelSkeletonBuilder::Clear  (line 89, @0x0000000003148d40, libserver.so)  // inlines: RemoveAll
// calls: CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll
void __fastcall CModelSkeletonBuilder::Clear(CModelSkeletonBuilder *const this)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx

  if ( this->m_boneDict.m_Buckets.m_Size > 0 )
  {
    v2 = 0;
    v3 = 8 * (3LL * (this->m_boneDict.m_Buckets.m_Size - 1) + 3);
    do
    {
      this->m_boneDict.m_Buckets.m_Memory.m_pMemory[v2 / 0x18].m_Size = 0;
      v2 += 24LL;
    }
    while ( v2 != v3 );
  }
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::RemoveAll(&this->m_boneName);
  this->m_nParentHash.m_Size = 0;
  this->m_nParentIndices.m_Size = 0;
  this->m_boneSphere.m_Size = 0;
  this->m_nFlag.m_Size = 0;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_bonePosParent);
  CUtlVectorBase<Quaternion,CUtlMemory<Quaternion,int>>::RemoveAll(&this->m_boneRotParent);
  this->m_simBones.m_Size = 0;
}


// CModelSkeletonBuilder::NumBones  (line 102, @0x00000000031481e0, libserver.so)
int __fastcall CModelSkeletonBuilder::NumBones(const CModelSkeletonBuilder *const this)
{
  return this->m_boneName.m_Size;
}


// CModelSkeletonBuilder::GetNumParentIndices  (line 107, @0x00000000031481f0, libserver.so)
int __fastcall CModelSkeletonBuilder::GetNumParentIndices(const CModelSkeletonBuilder *const this)
{
  return this->m_nParentIndices.m_Size;
}


// CModelSkeletonBuilder::GetParent  (line 112, @0x0000000003148200, libserver.so)  // inlines: operator[]
int __fastcall CModelSkeletonBuilder::GetParent(const CModelSkeletonBuilder *const this, int nBone)
{
  return this->m_nParentIndices.m_Memory.m_pMemory[nBone];
}


// CModelSkeletonBuilder::GetFlags  (line 118, @0x0000000003148220, libserver.so)  // inlines: operator[]
CModelSkeleton::BoneFlags_t __fastcall CModelSkeletonBuilder::GetFlags(
        const CModelSkeletonBuilder *const this,
        int nBone)
{
  return this->m_nFlag.m_Memory.m_pMemory[nBone];
}


// CModelSkeletonBuilder::GetBoneNameByIndex  (line 123, @0x0000000003148240, libserver.so)  // inlines: operator[]
// calls: CUtlString::Get
// callers: CModelSkeletonSorter::AddBoneAndItsParents
const char *__fastcall CModelSkeletonBuilder::GetBoneNameByIndex(const CModelSkeletonBuilder *const this, int nBone)
{
  return CUtlString::Get(&this->m_boneName.m_Memory.m_pMemory[nBone]);
}


// CModelSkeletonBuilder::GetBonePos  (line 128, @0x0000000003148260, libserver.so)  // inlines: operator[]
const Vector *__fastcall CModelSkeletonBuilder::GetBonePos(const CModelSkeletonBuilder *const this, int nBone)
{
  return &this->m_bonePosParent.m_Memory.m_pMemory[nBone];
}


// CModelSkeletonBuilder::GetBoneRotation  (line 133, @0x0000000003148280, libserver.so)  // inlines: operator[]
const Quaternion *__fastcall CModelSkeletonBuilder::GetBoneRotation(const CModelSkeletonBuilder *const this, int nBone)
{
  return &this->m_boneRotParent.m_Memory.m_pMemory[nBone];
}


// CModelSkeletonBuilder::SetParent  (line 138, @0x00000000031482a0, libserver.so)  // inlines: operator[]
void __fastcall CModelSkeletonBuilder::SetParent(CModelSkeletonBuilder *const this, int nBone, uint32 nParentHash)
{
  this->m_nParentHash.m_Memory.m_pMemory[nBone] = nParentHash;
}


// CModelSkeletonBuilder::SetParent  (line 143, @0x00000000031482b0, libserver.so)  // inlines: CUtlStringToken, MakeStringToken, SetParent
// calls: MurmurHash2LowerCase, RegisterStringToken
void __fastcall CModelSkeletonBuilder::SetParent(CModelSkeletonBuilder *const this, int nBone, const char *pParent)
{
  uint32 v3; // eax
  __int64 v4; // r13
  uint32 v7; // [rsp+Ch] [rbp-24h]

  v3 = 0;
  v4 = nBone;
  if ( pParent != 0 && *pParent != 0 )
  {
    v3 = MurmurHash2LowerCase(pParent, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v7 = v3;
      RegisterStringToken(v3, pParent, 0, 1);
      v3 = v7;
    }
  }
  this->m_nParentHash.m_Memory.m_pMemory[v4] = v3;
}


// CModelSkeletonBuilder::AddFlags  (line 152, @0x0000000003148330, libserver.so)  // inlines: operator[], operator|, operator|=
void __fastcall CModelSkeletonBuilder::AddFlags(
        CModelSkeletonBuilder *const this,
        int nBone,
        CModelSkeleton::BoneFlags_t nFlags)
{
  this->m_nFlag.m_Memory.m_pMemory[nBone] |= nFlags;
}


// CModelSkeletonBuilder::AddBoneSphere  (line 157, @0x0000000003148350, libserver.so)  // inlines: operator[]
// callers: CModelSkeletonBuilder::FindOrAddBone
void __fastcall CModelSkeletonBuilder::AddBoneSphere(
        CModelSkeletonBuilder *const this,
        int nBone,
        float a3,
        float flSphere)
{
  float *v4; // rax

  v4 = &this->m_boneSphere.m_Memory.m_pMemory[nBone];
  *v4 = fmaxf(*v4, a3);
}


// CModelSkeletonBuilder::ClearFlags  (line 162, @0x0000000003148370, libserver.so)  // inlines: operator&, operator&=, operator[], operator~
void __fastcall CModelSkeletonBuilder::ClearFlags(
        CModelSkeletonBuilder *const this,
        int nBone,
        CModelSkeleton::BoneFlags_t nFlags)
{
  this->m_nFlag.m_Memory.m_pMemory[nBone] &= ~nFlags;
}


// CModelSkeletonBuilder::SetPosParent  (line 167, @0x0000000003148390, libserver.so)  // inlines: operator=, operator[]
// callers: CModelSkeletonBuilder::AppendRenderMeshSkeleton
void __fastcall CModelSkeletonBuilder::SetPosParent(
        CModelSkeletonBuilder *const this,
        int nBone,
        const Vector *const vPos)
{
  this->m_bonePosParent.m_Memory.m_pMemory[nBone] = *vPos;
}


// CModelSkeletonBuilder::SetRotParent  (line 172, @0x00000000031483d0, libserver.so)  // inlines: operator=, operator[]
// callers: CModelSkeletonBuilder::AppendRenderMeshSkeleton
void __fastcall CModelSkeletonBuilder::SetRotParent(
        CModelSkeletonBuilder *const this,
        int nBone,
        const Quaternion *const vRot)
{
  this->m_boneRotParent.m_Memory.m_pMemory[nBone] = *vRot;
}


// CModelSkeletonBuilder::FindOrAddBone  (line 177, @0x0000000003149ea0, libserver.so)  // inlines: AddFlags, AddToTail, CUtlString, CopyConstruct<BoneHashPairing_t>, CopyConstruct<CModelSkeleton::BoneFlags_t>, CopyConstruct<CUtlString>, CopyConstruct<Quaternion>, CopyConstruct<Vector>, CopyConstruct<bool>, CopyConstruct<float>, CopyConstruct<unsigned int>, DoFind, Element, GrowMemory, Insert, operator[], operator|, operator|=, ~CUtlString
// calls: CModelSkeletonBuilder::FindBoneIndexByHash, CModelSkeletonBuilder::AddBoneSphere, CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, CUtlMemory<bool, int>::Grow, CUtlMemory<Quaternion, int>::Grow, CUtlMemory<Vector, int>::Grow, CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Grow, CUtlMemory<float, int>::Grow, CUtlMemory<CUtlString, int>::Grow, CUtlMemory<unsigned int, int>::Grow (14 total)
// callers: CModelSkeletonBuilder::FindOrAddBone, CModelSkeletonBuilder::AppendRenderMeshSkeleton, CModelSkeletonBuilder::AppendSkeleton, CModelBuilder::FindOrAddBone
__int64 __fastcall CModelSkeletonBuilder::FindOrAddBone(
        CModelSkeletonBuilder *const this,
        uint32 nBoneHash,
        uint32 nParentHash,
        float flSphere,
        CModelSkeleton::BoneFlags_t nFlags,
        const Vector *const vBoneLocalPos,
        const Quaternion *const vBoneLocalRot,
        const char *pBoneName)
{
  int BoneIndexByHash; // eax
  float v13; // xmm1_4
  unsigned int v14; // r15d
  __int64 v15; // r12
  int m_Size; // eax
  unsigned int *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r15
  int v21; // eax
  CUtlString *v22; // r15
  const char *v23; // rax
  __int64 v24; // r15
  int v25; // eax
  float *v26; // rax
  __int64 v27; // r15
  int v28; // eax
  CModelSkeleton::BoneFlags_t *v29; // rax
  __int64 v30; // r13
  int v31; // eax
  __int64 z_low; // rdx
  Vector *v33; // rax
  int v34; // r13d
  int v35; // eax
  Quaternion *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r13
  int v39; // eax
  bool v40; // zf
  bool *v41; // r13
  unsigned int v42; // eax
  signed int v43; // edx
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v44; // r14
  __int64 v45; // r13
  int v46; // r15d
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v47; // r15
  __int64 v48; // rbx
  BoneHashPairing_t *v49; // rax
  __int64 flSphereb; // [rsp+10h] [rbp-50h]
  unsigned int v54; // [rsp+18h] [rbp-48h]
  bool bSimBone; // [rsp+1Ch] [rbp-44h]
  int bSimBonea; // [rsp+1Ch] [rbp-44h]
  BoneHashPairing_t pairing; // [rsp+20h] [rbp-40h] BYREF

  bSimBone = (nFlags & 0x330) != 0;
  BoneIndexByHash = CModelSkeletonBuilder::FindBoneIndexByHash(this, nBoneHash);
  v14 = BoneIndexByHash;
  if ( BoneIndexByHash < 0 )
  {
    m_Size = this->m_nParentHash.m_Size;
    v54 = m_Size;
    if ( m_Size == this->m_nParentHash.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<unsigned int,int>::Grow(&this->m_nParentHash.m_Memory, 1);
      m_Size = this->m_nParentHash.m_Size;
    }
    this->m_nParentHash.m_Size = m_Size + 1;
    v18 = &this->m_nParentHash.m_Memory.m_pMemory[v54];
    if ( v18 != 0 )
      *v18 = nParentHash;
    pairing = 0;
    CUtlString::Set(&pairing, pBoneName);
    v20 = this->m_boneName.m_Size;
    v21 = this->m_boneName.m_Size;
    if ( v20 == this->m_boneName.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CUtlString,int>::Grow(&this->m_boneName.m_Memory, 1);
      v21 = this->m_boneName.m_Size;
    }
    this->m_boneName.m_Size = v21 + 1;
    v22 = &this->m_boneName.m_Memory.m_pMemory[v20];
    if ( v22 != 0 )
    {
      v22->m_pString = 0;
      v23 = CUtlString::Get(&pairing);
      CUtlString::Set(v22, v23);
    }
    if ( pairing != 0 )
      CUtlString::FreeMemoryBlock(&pairing);
    v24 = this->m_boneSphere.m_Size;
    v25 = this->m_boneSphere.m_Size;
    if ( v24 == this->m_boneSphere.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<float,int>::Grow(&this->m_boneSphere.m_Memory, 1);
      v25 = this->m_boneSphere.m_Size;
    }
    this->m_boneSphere.m_Size = v25 + 1;
    v26 = &this->m_boneSphere.m_Memory.m_pMemory[v24];
    if ( v26 != 0 )
      *v26 = flSphere;
    v27 = this->m_nFlag.m_Size;
    v28 = this->m_nFlag.m_Size;
    if ( v27 == this->m_nFlag.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CModelSkeleton::BoneFlags_t,int>::Grow(&this->m_nFlag.m_Memory, 1);
      v28 = this->m_nFlag.m_Size;
    }
    this->m_nFlag.m_Size = v28 + 1;
    v29 = &this->m_nFlag.m_Memory.m_pMemory[v27];
    if ( v29 != 0 )
      *v29 = nFlags;
    v30 = this->m_bonePosParent.m_Size;
    v31 = this->m_bonePosParent.m_Size;
    if ( v30 == this->m_bonePosParent.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<Vector,int>::Grow(&this->m_bonePosParent.m_Memory, 1);
      v31 = this->m_bonePosParent.m_Size;
    }
    z_low = 3 * v30;
    this->m_bonePosParent.m_Size = v31 + 1;
    v33 = &this->m_bonePosParent.m_Memory.m_pMemory[v30];
    if ( v33 != 0 )
    {
      *&v33->x = *&vBoneLocalPos->x;
      z_low = LODWORD(vBoneLocalPos->z);
      LODWORD(v33->z) = z_low;
    }
    v34 = this->m_boneRotParent.m_Size;
    v35 = v34;
    if ( v34 == this->m_boneRotParent.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<Quaternion,int>::Grow(&this->m_boneRotParent.m_Memory, 1);
      v35 = this->m_boneRotParent.m_Size;
    }
    this->m_boneRotParent.m_Size = v35 + 1;
    v36 = &this->m_boneRotParent.m_Memory.m_pMemory[v34];
    if ( v36 != 0 )
    {
      z_low = *&vBoneLocalRot->z;
      v37 = *&vBoneLocalRot->x;
      *&v36->z = z_low;
      *&v36->x = v37;
    }
    v38 = this->m_simBones.m_Size;
    v39 = this->m_simBones.m_Size;
    if ( v38 == this->m_simBones.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<bool,int>::Grow(&this->m_simBones.m_Memory, 1);
      v39 = this->m_simBones.m_Size;
    }
    v40 = &this->m_simBones.m_Memory.m_pMemory[v38] == 0;
    v41 = &this->m_simBones.m_Memory.m_pMemory[v38];
    this->m_simBones.m_Size = v39 + 1;
    if ( !v40 )
      *v41 = bSimBone;
    pairing.m_nBoneHash = nBoneHash;
    pairing.m_nBoneIndex = v54;
    v42 = (this->m_boneDict.m_KeyFunc)(&pairing, v19, z_low, v36);
    if ( this->m_boneDict.m_bPowerOfTwo )
      v43 = this->m_boneDict.m_ModMask & v42;
    else
      v43 = v42 % this->m_boneDict.m_Buckets.m_Size;
    flSphereb = v43;
    v44 = &this->m_boneDict.m_Buckets.m_Memory.m_pMemory[flSphereb];
    bSimBonea = v44->m_Size;
    if ( v44->m_Size <= 0 )
    {
      v46 = 0;
    }
    else
    {
      v45 = 0;
      v46 = 0;
      while ( !this->m_boneDict.m_CompareFunc(&v44->m_Memory.m_pMemory[v45], &pairing) )
      {
        ++v46;
        ++v45;
        if ( v46 == bSimBonea )
          goto LABEL_42;
      }
    }
    if ( bSimBonea == v46 )
    {
LABEL_42:
      v47 = &this->m_boneDict.m_Buckets.m_Memory.m_pMemory[flSphereb];
      v48 = v47->m_Size;
      if ( v48 == v47->m_Memory.m_nAllocationCount )
        CUtlMemory<BoneHashPairing_t,int>::Grow(&v47->m_Memory, 1);
      ++v47->m_Size;
      v49 = &v47->m_Memory.m_pMemory[v48];
      if ( v49 != 0 )
        *v49 = pairing;
    }
    return v54;
  }
  else
  {
    v15 = BoneIndexByHash;
    this->m_nFlag.m_Memory.m_pMemory[BoneIndexByHash] |= nFlags;
    CModelSkeletonBuilder::AddBoneSphere(this, BoneIndexByHash, flSphere, v13);
    this->m_simBones.m_Memory.m_pMemory[v15] |= bSimBone;
    return v14;
  }
}


// CModelSkeletonBuilder::FindOrAddBone  (line 211, @0x000000000314a2b0, libserver.so)  // inlines: CUtlStringToken, MakeStringToken
// calls: CModelSkeletonBuilder::FindOrAddBone, MurmurHash2LowerCase, RegisterStringToken
// callers: CModelSkeletonBuilder::AppendSkeleton, CModelBuilder::FindOrAddBone, CModelSkeletonBuilder::AppendRetargetSrc
__int64 __fastcall CModelSkeletonBuilder::FindOrAddBone(
        CModelSkeletonBuilder *const this,
        const char *pBoneName,
        const char *pParentName,
        float flSphere,
        CModelSkeleton::BoneFlags_t nFlags,
        const Vector *const vBoneLocalPos,
        const Quaternion *const vBoneLocalRot)
{
  uint32 v9; // r13d
  uint32 v12; // eax
  uint32 v14; // eax
  const Quaternion *v15; // [rsp+10h] [rbp-50h]
  const Quaternion *v16; // [rsp+10h] [rbp-50h]
  const Quaternion *vBoneLocalRota; // [rsp+18h] [rbp-48h]
  const Vector *vBoneLocalRotc; // [rsp+18h] [rbp-48h]
  const Quaternion *vBoneLocalRotb; // [rsp+18h] [rbp-48h]
  const Vector *vBoneLocalRotd; // [rsp+18h] [rbp-48h]
  const Vector *vBoneLocalPosa; // [rsp+20h] [rbp-40h]
  float vBoneLocalPosc; // [rsp+20h] [rbp-40h]
  const Vector *vBoneLocalPosb; // [rsp+20h] [rbp-40h]
  float vBoneLocalPosd; // [rsp+20h] [rbp-40h]
  float flSpherea; // [rsp+2Ch] [rbp-34h]
  uint32 flSpherec; // [rsp+2Ch] [rbp-34h]
  float flSphereb; // [rsp+2Ch] [rbp-34h]
  uint32 flSphered; // [rsp+2Ch] [rbp-34h]

  v9 = 0;
  if ( pBoneName != 0 && *pBoneName != 0 )
  {
    vBoneLocalRota = vBoneLocalRot;
    vBoneLocalPosa = vBoneLocalPos;
    flSpherea = flSphere;
    v14 = MurmurHash2LowerCase(pBoneName, 0x31415926u);
    flSphere = flSpherea;
    vBoneLocalPos = vBoneLocalPosa;
    vBoneLocalRot = vBoneLocalRota;
    if ( g_bUpdateStringTokenDatabase )
    {
      v15 = vBoneLocalRota;
      vBoneLocalRotc = vBoneLocalPosa;
      vBoneLocalPosc = flSpherea;
      flSpherec = v14;
      RegisterStringToken(v14, pBoneName, 0, 1);
      vBoneLocalRot = v15;
      vBoneLocalPos = vBoneLocalRotc;
      flSphere = vBoneLocalPosc;
      v14 = flSpherec;
    }
    v9 = v14;
  }
  v12 = 0;
  if ( pParentName != 0 && *pParentName != 0 )
  {
    vBoneLocalRotb = vBoneLocalRot;
    vBoneLocalPosb = vBoneLocalPos;
    flSphereb = flSphere;
    v12 = MurmurHash2LowerCase(pParentName, 0x31415926u);
    flSphere = flSphereb;
    vBoneLocalPos = vBoneLocalPosb;
    vBoneLocalRot = vBoneLocalRotb;
    if ( g_bUpdateStringTokenDatabase )
    {
      v16 = vBoneLocalRotb;
      vBoneLocalRotd = vBoneLocalPosb;
      vBoneLocalPosd = flSphereb;
      flSphered = v12;
      RegisterStringToken(v12, pParentName, 0, 1);
      vBoneLocalRot = v16;
      vBoneLocalPos = vBoneLocalRotd;
      flSphere = vBoneLocalPosd;
      v12 = flSphered;
    }
  }
  return CModelSkeletonBuilder::FindOrAddBone(this, v9, v12, flSphere, nFlags, vBoneLocalPos, vBoneLocalRot, pBoneName);
}


// CModelSkeletonBuilder::FindBoneIndex  (line 222, @0x0000000003148500, libserver.so)  // inlines: MakeStringToken
// calls: CModelSkeletonBuilder::FindBoneIndexByHash, MurmurHash2LowerCase, RegisterStringToken
// callers: CModelSkeletonBuilder::MarkBonesWithAttachmentsAsSimBones, CModelSkeletonBuilder::AppendRetargetDst, CModelSkeletonBuilder::AppendRetargetSrc
int __fastcall CModelSkeletonBuilder::FindBoneIndex(const CModelSkeletonBuilder *const this, const char *pBoneName)
{
  uint32 v5; // eax
  uint32 v6; // esi
  uint32 v7; // [rsp+Ch] [rbp-14h]

  if ( pBoneName == 0 || *pBoneName == 0 )
    return CModelSkeletonBuilder::FindBoneIndexByHash(this, 0);
  v5 = MurmurHash2LowerCase(pBoneName, 0x31415926u);
  if ( g_bUpdateStringTokenDatabase )
  {
    v7 = v5;
    RegisterStringToken(v5, pBoneName, 0, 1);
    v6 = v7;
  }
  else
  {
    v6 = v5;
  }
  return CModelSkeletonBuilder::FindBoneIndexByHash(this, v6);
}


// CModelSkeletonBuilder::FindBoneIndexByHash  (line 228, @0x0000000003148410, libserver.so)  // inlines: BuildHandle, DoFind, Element, Find, GetBucketIndex, operator[]
// callers: CModelSkeletonBuilder::FindBoneIndex, CModelSkeletonBuilder::AddFlagToAllParentsOfBone, CModelSkeletonBuilder::MarkBonesWithConstraintsAsSimBones, CModelSkeletonBuilder::MarkBonesWithHitboxsAsSimBones, CModelSkeletonBuilder::MarkClothBones, CModelSkeletonBuilder::GetBoneToWorld, CModelSkeletonBuilder::FindOrAddBone, CModelSkeletonBuilder::AppendRenderMeshSkeleton, CModelSkeletonBuilder::FixupFlagsAndParents, CModelSkeletonBuilder::AppendRetargetSrc, CModelBuilder::CreateRemappingTableForMesh
int __fastcall CModelSkeletonBuilder::FindBoneIndexByHash(const CModelSkeletonBuilder *const this, uint32 nHash)
{
  unsigned int v3; // eax
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v4; // r13
  int m_Size; // r12d
  __int64 v6; // r14
  int v7; // r15d
  unsigned int v8; // edx
  int result; // eax
  unsigned int v10; // [rsp+4h] [rbp-4Ch]
  BoneHashPairing_t findPairing; // [rsp+10h] [rbp-40h] BYREF

  findPairing.m_nBoneHash = nHash;
  findPairing.m_nBoneIndex = 0;
  v3 = this->m_boneDict.m_KeyFunc(&findPairing);
  if ( this->m_boneDict.m_bPowerOfTwo )
    v10 = this->m_boneDict.m_ModMask & v3;
  else
    v10 = v3 % this->m_boneDict.m_Buckets.m_Size;
  v4 = &this->m_boneDict.m_Buckets.m_Memory.m_pMemory[v10];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    while ( !this->m_boneDict.m_CompareFunc(&v4->m_Memory.m_pMemory[v6], &findPairing) )
    {
      ++v7;
      ++v6;
      if ( v7 == m_Size )
        return -1;
    }
  }
  if ( m_Size == v7 )
    return -1;
  v8 = v7 | (v10 << 16);
  result = v8;
  if ( v8 != -1 )
    return this->m_boneDict.m_Buckets.m_Memory.m_pMemory[HIWORD(v8)].m_Memory.m_pMemory[v8].m_nBoneIndex;
  return result;
}


// CModelSkeletonBuilder::AddFlagToAllParentsOfBone  (line 241, @0x0000000003148580, libserver.so)  // inlines: operator[], operator|, operator|=
// calls: CModelSkeletonBuilder::FindBoneIndexByHash
void __fastcall CModelSkeletonBuilder::AddFlagToAllParentsOfBone(
        CModelSkeletonBuilder *const this,
        int nBoneIndex,
        CModelSkeleton::BoneFlags_t nFlag)
{
  int i; // eax

  for ( i = CModelSkeletonBuilder::FindBoneIndexByHash(this, this->m_nParentHash.m_Memory.m_pMemory[nBoneIndex]);
        i != -1;
        i = CModelSkeletonBuilder::FindBoneIndexByHash(this, this->m_nParentHash.m_Memory.m_pMemory[i]) )
  {
    this->m_nFlag.m_Memory.m_pMemory[i] |= nFlag;
  }
}


// CModelSkeletonBuilder::AppendRenderMeshSkeleton  (line 252, @0x000000000314a600, libserver.so)  // inlines: AddFlags, GetPtr, GetRawPtr, LODGroupMaskToBoneFlags, LoadAlignedSIMD<(ESIMDLevel)20u>, LoadAndSwizzle, MatrixInvert_Aligned, NegSIMD<(ESIMDLevel)20u>, ResolveOffset, SplatWSIMD<(ESIMDLevel)20u>, StoreAlignedSIMD<(ESIMDLevel)20u>, SubSIMD<(ESIMDLevel)20u>, TransposeSIMD<(ESIMDLevel)20u>, _mm_load_ps, _mm_shuffle_ps, _mm_store_ps, _mm_sub_ps, operator char const*, operator[], operator|, operator|=
// calls: ConcatTransforms, MatrixAngles, CModelSkeletonBuilder::FindBoneIndexByHash, CModelSkeletonBuilder::FindOrAddBone, CModelSkeletonBuilder::SetPosParent, CModelSkeletonBuilder::SetRotParent, RenderSkeletonData_t::FindBoneIndexByHash, CModelSkeletonBuilder::GetBoneToWorld
void __fastcall CModelSkeletonBuilder::AppendRenderMeshSkeleton(
        CModelSkeletonBuilder *const this,
        const RenderSkeletonData_t *pRenderSkeleton,
        LODGroupMask_t nLODGroupMask)
{
  __int64 v5; // r15
  char *v6; // rax
  char *v7; // rdi
  int BoneIndexByHash; // eax
  char *v9; // rdx
  int v10; // r11d
  int32 v11; // eax
  const char *pBoneName; // rax
  char *v13; // rdx
  __int64 v14; // rcx
  const char *v15; // rcx
  int32 v16; // ecx
  char *v17; // rdx
  int v18; // r12d
  int v19; // eax
  int v20; // r13d
  uint32 v21; // r12d
  __int64 m_nOffset; // rsi
  char *v23; // rax
  int32 v24; // edx
  char *v25; // rax
  __int64 v26; // rcx
  unsigned __int16 v27; // r12
  char *v28; // rax
  __m128 *v29; // rax
  __m128 v30; // xmm2
  __m128 v31; // xmm1
  __m128 v32; // xmm5
  __m128 v33; // xmm3
  __m128 v34; // xmm0
  __m128 v35; // xmm4
  int v36; // eax
  __int64 v37; // rdx
  char *v38; // rdi
  int v39; // eax
  __m128 v40; // xmm4
  __m128 v41; // xmm0
  __m128 v42; // xmm5
  CResourceArray<float> *p_m_spheres; // [rsp+18h] [rbp-178h]
  CResourceArray<CResourceString> *p_m_boneNames; // [rsp+20h] [rbp-170h]
  CResourceArray<short unsigned int> *p_m_boneParents; // [rsp+28h] [rbp-168h]
  CResourceArray<unsigned int> *p_m_bonesHash; // [rsp+30h] [rbp-160h]
  CResourceArray<matrix3x4a_t> *p_m_invBindPose; // [rsp+38h] [rbp-158h]
  int nExistingBoneIndex; // [rsp+64h] [rbp-12Ch]
  uint32 nParentHash; // [rsp+78h] [rbp-118h]
  uint32 nBoneHash; // [rsp+7Ch] [rbp-114h]
  Vector vPos; // [rsp+80h] [rbp-110h] BYREF
  Quaternion vRot; // [rsp+90h] [rbp-100h] BYREF
  matrix3x4a_t mBindPose; // [rsp+A0h] [rbp-F0h] BYREF
  matrix3x4a_t mLocalSpace_0; // [rsp+D0h] [rbp-C0h] BYREF
  matrix3x4a_t mBoneToWorld; // [rsp+100h] [rbp-90h] BYREF
  matrix3x4a_t mBoneToWorldInv; // [rsp+130h] [rbp-60h] BYREF

  if ( pRenderSkeleton != 0 && pRenderSkeleton->m_nBoneCount != 0 )
  {
    v5 = 0;
    p_m_bonesHash = &pRenderSkeleton->m_bonesHash;
    p_m_boneParents = &pRenderSkeleton->m_boneParents;
    p_m_invBindPose = &pRenderSkeleton->m_invBindPose;
    p_m_boneNames = &pRenderSkeleton->m_boneNames;
    p_m_spheres = &pRenderSkeleton->m_spheres;
    do
    {
      m_nOffset = pRenderSkeleton->m_bonesHash.m_nOffset;
      v23 = 0;
      if ( m_nOffset != 0 )
        v23 = p_m_bonesHash + m_nOffset;
      v24 = pRenderSkeleton->m_boneParents.m_nOffset;
      nBoneHash = *&v23[4 * v5];
      v25 = 0;
      if ( v24 != 0 )
        v25 = p_m_boneParents + v24;
      v26 = pRenderSkeleton->m_invBindPose.m_nOffset;
      v27 = *&v25[2 * v5];
      v28 = 0;
      if ( v26 != 0 )
        v28 = p_m_invBindPose + v26;
      v29 = &v28[48 * v5];
      v30 = v29[1];
      v31 = v29[2];
      v32 = _mm_sub_ps(
              Four_Zeros,
              _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(*v29, *v29, 255), *v29),
                  _mm_mul_ps(_mm_shuffle_ps(v30, v30, 255), v30)),
                _mm_mul_ps(_mm_shuffle_ps(v31, v31, 255), v31)));
      v33 = _mm_unpackhi_ps(*v29, v30);
      v34 = _mm_unpacklo_ps(*v29, v30);
      v35 = _mm_unpacklo_ps(v31, v32);
      *&mBindPose.m_flMatVal[0][0] = _mm_movelh_ps(v34, v35);
      *&mBindPose.m_flMatVal[1][0] = _mm_movehl_ps(v35, v34);
      *&mBindPose.m_flMatVal[2][0] = _mm_movelh_ps(v33, _mm_unpackhi_ps(v31, v32));
      if ( v27 == v5 )
      {
        MatrixAngles(&mBindPose, &vRot, &vPos);
        nParentHash = 0;
      }
      else
      {
        v6 = 0;
        if ( m_nOffset != 0 )
          v6 = p_m_bonesHash + m_nOffset;
        v7 = 0;
        nParentHash = *&v6[4 * v27];
        if ( v26 != 0 )
          v7 = p_m_invBindPose + v26;
        ConcatTransforms(&v7[48 * v27], &mBindPose, &mBoneToWorldInv);
        MatrixAngles(&mBoneToWorldInv, &vRot, &vPos);
      }
      BoneIndexByHash = CModelSkeletonBuilder::FindBoneIndexByHash(this, nBoneHash);
      v9 = 0;
      v10 = BoneIndexByHash;
      v11 = pRenderSkeleton->m_boneNames.m_nOffset;
      if ( v11 != 0 )
        v9 = p_m_boneNames + v11;
      pBoneName = "";
      v13 = &v9[4 * v5];
      v14 = *v13;
      if ( v14 != 0 )
      {
        v15 = &v13[v14];
        if ( v15 != 0 )
          pBoneName = v15;
      }
      v16 = pRenderSkeleton->m_spheres.m_nOffset;
      v17 = 0;
      if ( v16 != 0 )
        v17 = p_m_spheres + v16;
      nExistingBoneIndex = v10;
      v18 = v27 << 10;
      v19 = CModelSkeletonBuilder::FindOrAddBone(
              this,
              nBoneHash,
              nParentHash,
              *&v17[4 * v5],
              CModelSkeleton::BoneFlags_t::FLAG_MESH,
              &vPos,
              &vRot,
              pBoneName);
      v20 = v19;
      this->m_nFlag.m_Memory.m_pMemory[v19] |= v18;
      if ( nExistingBoneIndex >= 0 && (v18 & 0x400) != 0 )
      {
        v21 = this->m_nParentHash.m_Memory.m_pMemory[v19];
        if ( nParentHash != v21 )
        {
          if ( v21 != 0 )
          {
            v36 = RenderSkeletonData_t::FindBoneIndexByHash(pRenderSkeleton, v21);
            if ( v36 < 0 )
            {
              v39 = CModelSkeletonBuilder::FindBoneIndexByHash(this, v21);
              CModelSkeletonBuilder::GetBoneToWorld(this, &mBoneToWorld, v39);
              v40 = _mm_sub_ps(
                      Four_Zeros,
                      _mm_add_ps(
                        _mm_add_ps(
                          _mm_mul_ps(
                            _mm_shuffle_ps(*&mBoneToWorld.m_flMatVal[0][0], *&mBoneToWorld.m_flMatVal[0][0], 255),
                            *&mBoneToWorld.m_flMatVal[0][0]),
                          _mm_mul_ps(
                            _mm_shuffle_ps(*&mBoneToWorld.m_flMatVal[1][0], *&mBoneToWorld.m_flMatVal[1][0], 255),
                            *&mBoneToWorld.m_flMatVal[1][0])),
                        _mm_mul_ps(
                          _mm_shuffle_ps(*&mBoneToWorld.m_flMatVal[2][0], *&mBoneToWorld.m_flMatVal[2][0], 255),
                          *&mBoneToWorld.m_flMatVal[2][0])));
              v41 = _mm_unpacklo_ps(*&mBoneToWorld.m_flMatVal[0][0], *&mBoneToWorld.m_flMatVal[1][0]);
              v42 = _mm_unpacklo_ps(*&mBoneToWorld.m_flMatVal[2][0], v40);
              *&mBoneToWorldInv.m_flMatVal[0][0] = _mm_movelh_ps(v41, v42);
              *&mBoneToWorldInv.m_flMatVal[1][0] = _mm_movehl_ps(v42, v41);
              *&mBoneToWorldInv.m_flMatVal[2][0] = _mm_movelh_ps(
                                                     _mm_unpackhi_ps(
                                                       *&mBoneToWorld.m_flMatVal[0][0],
                                                       *&mBoneToWorld.m_flMatVal[1][0]),
                                                     _mm_unpackhi_ps(*&mBoneToWorld.m_flMatVal[2][0], v40));
              ConcatTransforms(&mBoneToWorldInv, &mBindPose, &mLocalSpace_0);
            }
            else
            {
              v37 = pRenderSkeleton->m_invBindPose.m_nOffset;
              v38 = 0;
              if ( v37 != 0 )
                v38 = p_m_invBindPose + v37;
              ConcatTransforms(&v38[48 * v36], &mBindPose, &mLocalSpace_0);
            }
            MatrixAngles(&mLocalSpace_0, &vRot, &vPos);
          }
          else
          {
            MatrixAngles(&mBindPose, &vRot, &vPos);
          }
        }
        CModelSkeletonBuilder::SetPosParent(this, v20, &vPos);
        CModelSkeletonBuilder::SetRotParent(this, v20, &vRot);
      }
      ++v5;
    }
    while ( pRenderSkeleton->m_nBoneCount > v5 );
  }
}


// CModelSkeletonBuilder::AppendRenderMeshSkeleton  (line 343, @0x000000000314aa90, libserver.so)  // inlines: AddFlags, LoadAlignedSIMD<(ESIMDLevel)20u>, LoadAndSwizzle, MatrixInvert_Aligned, NegSIMD<(ESIMDLevel)20u>, SplatWSIMD<(ESIMDLevel)20u>, StoreAlignedSIMD<(ESIMDLevel)20u>, SubSIMD<(ESIMDLevel)20u>, TransposeSIMD<(ESIMDLevel)20u>, _mm_load_ps, _mm_shuffle_ps, _mm_store_ps, _mm_sub_ps, matrix3x4a_t, memcpy, operator&, operator=, operator[], operator|, operator|=
// calls: CRenderSkeleton::GetBone, ConcatTransforms, MatrixAngles, CModelSkeletonBuilder::FindBoneIndexByHash, CUtlString::Get, CModelSkeletonBuilder::FindOrAddBone, CModelSkeletonBuilder::SetPosParent, CModelSkeletonBuilder::SetRotParent, CRenderSkeleton::GetBoneCount, CRenderSkeleton::GetParent, CRenderSkeleton::FindBoneIndex, CModelSkeletonBuilder::GetBoneToWorld
// callers: CModelBuilder::AppendSkeletonsFromChildResources
void __fastcall CModelSkeletonBuilder::AppendRenderMeshSkeleton(
        CModelSkeletonBuilder *const this,
        const CRenderSkeleton *pRenderSkeleton,
        LODGroupMask_t nLODGroupMask)
{
  __int64 v5; // rbx
  uint32 m_nHashCode; // r14d
  const RenderSkeletonBone_t *v7; // rax
  const char *pBoneName; // rax
  int v9; // eax
  int v10; // r13d
  uint32 v11; // edx
  const RenderSkeletonBone_t *Bone; // r13
  int Parent; // eax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __m128 v16; // xmm4
  __m128 v17; // xmm0
  __m128 v18; // xmm5
  int BoneIndex; // eax
  const RenderSkeletonBone_t *v20; // rax
  int BoneIndexByHash; // eax
  __m128 v22; // xmm4
  __m128 v23; // xmm0
  __m128 v24; // xmm5
  int v25; // [rsp+18h] [rbp-168h]
  int v26; // [rsp+1Ch] [rbp-164h]
  int nExistingBoneIndex; // [rsp+38h] [rbp-148h]
  uint32 nGlobalParentHash; // [rsp+3Ch] [rbp-144h]
  uint32 nGlobalParentHasha; // [rsp+3Ch] [rbp-144h]
  Vector vPos; // [rsp+40h] [rbp-140h] BYREF
  Quaternion vRot; // [rsp+50h] [rbp-130h] BYREF
  __m128 v32; // [rsp+60h] [rbp-120h]
  __m128 v33; // [rsp+70h] [rbp-110h]
  __m128 v34; // [rsp+80h] [rbp-100h]
  matrix3x4a_t mBindPose; // [rsp+90h] [rbp-F0h] BYREF
  matrix3x4a_t mLocalSpace; // [rsp+C0h] [rbp-C0h] BYREF
  matrix3x4a_t mBoneToWorld; // [rsp+F0h] [rbp-90h] BYREF
  matrix3x4a_t mLocalSpace_0; // [rsp+120h] [rbp-60h] BYREF

  if ( pRenderSkeleton != 0 )
  {
    v5 = 0;
    v26 = nLODGroupMask << 10;
    v25 = (nLODGroupMask << 10) & 0x400;
    while ( v5 < CRenderSkeleton::GetBoneCount(pRenderSkeleton) )
    {
      Bone = CRenderSkeleton::GetBone(pRenderSkeleton, v5);
      nGlobalParentHash = pRenderSkeleton->m_boneHashes.m_Memory.m_pMemory[v5].m_nHashCode;
      Parent = CRenderSkeleton::GetParent(pRenderSkeleton, v5);
      v14 = *&Bone->m_invBindPose.m_flMatVal[2][2];
      v32.m128_u64[0] = *&Bone->m_invBindPose.m_flMatVal[0][0];
      v15 = *&Bone->m_invBindPose.m_flMatVal[0][2];
      v34.m128_u64[1] = v14;
      v32.m128_u64[1] = v15;
      v33 = *&Bone->m_invBindPose.m_flMatVal[1][0];
      v34.m128_u64[0] = *&Bone->m_invBindPose.m_flMatVal[2][0];
      v16 = _mm_sub_ps(
              Four_Zeros,
              _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v32, v32, 255), v32),
                  _mm_mul_ps(_mm_shuffle_ps(v33, v33, 255), v33)),
                _mm_mul_ps(_mm_shuffle_ps(v34, v34, 255), v34)));
      v17 = _mm_unpacklo_ps(v32, v33);
      v18 = _mm_unpacklo_ps(v34, v16);
      *&mBindPose.m_flMatVal[0][0] = _mm_movelh_ps(v17, v18);
      *&mBindPose.m_flMatVal[1][0] = _mm_movehl_ps(v18, v17);
      *&mBindPose.m_flMatVal[2][0] = _mm_movelh_ps(_mm_unpackhi_ps(v32, v33), _mm_unpackhi_ps(v34, v16));
      if ( Parent == -1 || v5 == Parent )
      {
        m_nHashCode = 0;
        MatrixAngles(&mBindPose, &vRot, &vPos);
      }
      else
      {
        m_nHashCode = pRenderSkeleton->m_boneHashes.m_Memory.m_pMemory[Parent].m_nHashCode;
        v7 = CRenderSkeleton::GetBone(pRenderSkeleton, Parent);
        ConcatTransforms(&v7->m_invBindPose, &mBindPose, &mLocalSpace_0);
        MatrixAngles(&mLocalSpace_0, &vRot, &vPos);
      }
      nExistingBoneIndex = CModelSkeletonBuilder::FindBoneIndexByHash(this, nGlobalParentHash);
      pBoneName = CUtlString::Get(&Bone->m_boneName);
      v9 = CModelSkeletonBuilder::FindOrAddBone(
             this,
             nGlobalParentHash,
             m_nHashCode,
             Bone->m_flSphereRadius,
             CModelSkeleton::BoneFlags_t::FLAG_MESH,
             &vPos,
             &vRot,
             pBoneName);
      v10 = v9;
      this->m_nFlag.m_Memory.m_pMemory[v9] |= v26;
      if ( nExistingBoneIndex >= 0 && v25 != 0 )
      {
        v11 = this->m_nParentHash.m_Memory.m_pMemory[v9];
        if ( m_nHashCode != v11 )
        {
          if ( v11 != 0 )
          {
            nGlobalParentHasha = this->m_nParentHash.m_Memory.m_pMemory[v9];
            BoneIndex = CRenderSkeleton::FindBoneIndex(pRenderSkeleton, v11);
            if ( BoneIndex < 0 )
            {
              BoneIndexByHash = CModelSkeletonBuilder::FindBoneIndexByHash(this, nGlobalParentHasha);
              CModelSkeletonBuilder::GetBoneToWorld(this, &mBoneToWorld, BoneIndexByHash);
              v22 = _mm_sub_ps(
                      Four_Zeros,
                      _mm_add_ps(
                        _mm_add_ps(
                          _mm_mul_ps(
                            _mm_shuffle_ps(*&mBoneToWorld.m_flMatVal[0][0], *&mBoneToWorld.m_flMatVal[0][0], 255),
                            *&mBoneToWorld.m_flMatVal[0][0]),
                          _mm_mul_ps(
                            _mm_shuffle_ps(*&mBoneToWorld.m_flMatVal[1][0], *&mBoneToWorld.m_flMatVal[1][0], 255),
                            *&mBoneToWorld.m_flMatVal[1][0])),
                        _mm_mul_ps(
                          _mm_shuffle_ps(*&mBoneToWorld.m_flMatVal[2][0], *&mBoneToWorld.m_flMatVal[2][0], 255),
                          *&mBoneToWorld.m_flMatVal[2][0])));
              v23 = _mm_unpacklo_ps(*&mBoneToWorld.m_flMatVal[0][0], *&mBoneToWorld.m_flMatVal[1][0]);
              v24 = _mm_unpacklo_ps(*&mBoneToWorld.m_flMatVal[2][0], v22);
              *&mLocalSpace_0.m_flMatVal[0][0] = _mm_movelh_ps(v23, v24);
              *&mLocalSpace_0.m_flMatVal[1][0] = _mm_movehl_ps(v24, v23);
              *&mLocalSpace_0.m_flMatVal[2][0] = _mm_movelh_ps(
                                                   _mm_unpackhi_ps(
                                                     *&mBoneToWorld.m_flMatVal[0][0],
                                                     *&mBoneToWorld.m_flMatVal[1][0]),
                                                   _mm_unpackhi_ps(*&mBoneToWorld.m_flMatVal[2][0], v22));
              ConcatTransforms(&mLocalSpace_0, &mBindPose, &mLocalSpace);
            }
            else
            {
              v20 = CRenderSkeleton::GetBone(pRenderSkeleton, BoneIndex);
              ConcatTransforms(&v20->m_invBindPose, &mBindPose, &mLocalSpace);
            }
            MatrixAngles(&mLocalSpace, &vRot, &vPos);
          }
          else
          {
            MatrixAngles(&mBindPose, &vRot, &vPos);
          }
        }
        CModelSkeletonBuilder::SetPosParent(this, v10, &vPos);
        CModelSkeletonBuilder::SetRotParent(this, v10, &vRot);
      }
      ++v5;
    }
  }
}


// CModelSkeletonBuilder::MarkBonesWithHitboxsAsSimBones  (line 433, @0x0000000003149070, libserver.so)  // inlines: AddFlags, First, FirstInorder, IsIdxValid, IsValidIndex, LeftChild, MarkSimBone, Next, NextInorder, operator[], operator|, operator|=
// calls: CModelSkeletonBuilder::FindBoneIndexByHash, CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder
// callers: CModelBuilder::AppendSkeletonsFromChildResources
void __fastcall CModelSkeletonBuilder::MarkBonesWithHitboxsAsSimBones(
        CModelSkeletonBuilder *const this,
        const CRenderMesh *pMeshData)
{
  int m_Root; // eax
  UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdi
  __int64 v6; // rdx
  int m_Left; // esi
  UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v8; // rax
  __int64 v9; // r13
  UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v10; // rdx
  int m_Size; // ebx
  unsigned __int64 v12; // r14
  __int64 v13; // rbx
  int BoneIndexByHash; // eax
  int Inorder; // eax
  int s; // [rsp+Ch] [rbp-34h]

  m_Root = pMeshData->m_hitboxsets.m_Elements.m_Tree.m_Root;
  s = m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = pMeshData->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory;
    v6 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v6 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      s = m_Left;
    }
    if ( v6 >= 0
      && pMeshData->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_nAllocationCount > v6
      && pMeshData->m_hitboxsets.m_Elements.m_Tree.m_LastAlloc.index >= s )
    {
      do
      {
        if ( s == -1 )
          break;
        v8 = pMeshData->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory;
        v9 = v6;
        v10 = &v8[v6];
        if ( v10->m_Left == s )
          break;
        m_Size = v10->m_Data.elem.m_HitBoxes.m_Size;
        if ( m_Size > 0 )
        {
          v12 = 0;
          v13 = 120 * ((m_Size - 1) + 1LL);
          while ( 1 )
          {
            BoneIndexByHash = CModelSkeletonBuilder::FindBoneIndexByHash(
                                this,
                                v8[v9].m_Data.elem.m_HitBoxes.m_Memory.m_pMemory[v12 / 0x78].m_nBoneNameHash);
            if ( BoneIndexByHash != -1 )
            {
              this->m_nFlag.m_Memory.m_pMemory[BoneIndexByHash] |= 0x100u;
              this->m_simBones.m_Memory.m_pMemory[BoneIndexByHash] = 1;
            }
            v12 += 120LL;
            if ( v12 == v13 )
              break;
            v8 = pMeshData->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory;
          }
        }
        Inorder = CUtlRBTree<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                    &pMeshData->m_hitboxsets.m_Elements.m_Tree,
                    s);
        v6 = Inorder;
        s = Inorder;
        if ( Inorder < 0LL )
          break;
      }
      while ( Inorder < pMeshData->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_nAllocationCount
           && Inorder <= pMeshData->m_hitboxsets.m_Elements.m_Tree.m_LastAlloc.index );
    }
  }
}


// CModelSkeletonBuilder::MarkBonesWithConstraintsAsSimBones  (line 452, @0x00000000031485d0, libserver.so)  // inlines: AddFlags, MarkSimBone, operator[], operator|, operator|=
// calls: CModelSkeletonBuilder::FindBoneIndexByHash
// callers: CModelBuilder::AppendSkeletonsFromChildResources
void __fastcall CModelSkeletonBuilder::MarkBonesWithConstraintsAsSimBones(
        CModelSkeletonBuilder *const this,
        const CRenderMesh *pMeshData)
{
  __int64 i; // r14
  __int64 v4; // r15
  int v5; // r13d
  CBaseConstraint *v6; // rbx
  int BoneIndexByHash; // eax
  __int64 v8; // r15
  int j; // r13d
  int v10; // eax

  for ( i = 0; pMeshData->m_constraints.m_Size > i; ++i )
  {
    v4 = 0;
    v5 = 0;
    v6 = pMeshData->m_constraints.m_Memory.m_pMemory[i];
    if ( v6->m_targets.m_Size > 0 )
    {
      do
      {
        BoneIndexByHash = CModelSkeletonBuilder::FindBoneIndexByHash(
                            this,
                            v6->m_targets.m_Memory.m_pMemory[v4].m_nBoneHash);
        if ( BoneIndexByHash >= 0 )
          this->m_simBones.m_Memory.m_pMemory[BoneIndexByHash] = 1;
        ++v5;
        ++v4;
      }
      while ( v6->m_targets.m_Size > v5 );
    }
    v8 = 0;
    for ( j = 0; v6->m_slaves.m_Size > j; ++v8 )
    {
      v10 = CModelSkeletonBuilder::FindBoneIndexByHash(this, v6->m_slaves.m_Memory.m_pMemory[v8].m_nBoneHash);
      if ( v10 >= 0 )
      {
        this->m_simBones.m_Memory.m_pMemory[v10] = 1;
        this->m_nFlag.m_Memory.m_pMemory[v10] |= 0x400000u;
      }
      ++j;
    }
  }
}


// CModelSkeletonBuilder::MarkBonesWithAttachmentsAsSimBones  (line 488, @0x00000000031486d0, libserver.so)  // inlines: AddFlags, GetPtr, GetRawPtr, MarkSimBone, ResolveOffset, operator[], operator|, operator|=
// calls: CModelSkeletonBuilder::FindBoneIndex
void __fastcall CModelSkeletonBuilder::MarkBonesWithAttachmentsAsSimBones(
        CModelSkeletonBuilder *const this,
        const AttachmentData_t *pAttachments,
        int nAttachments)
{
  const AttachmentData_t *v4; // r13
  CResourceString *m_influenceNames; // r12
  const AttachmentData_t *v6; // rbx
  __int64 m_nOffset; // rax
  const char *v8; // rsi
  const char *v9; // rax
  int BoneIndex; // eax
  int v11; // edx
  const AttachmentData_t *v12; // [rsp-40h] [rbp-40h]

  if ( pAttachments != 0 && nAttachments > 0 )
  {
    v4 = pAttachments;
    v12 = &pAttachments[(nAttachments - 1) + 1];
    do
    {
      if ( v4->m_nInfluences != 0 )
      {
        m_influenceNames = v4->m_influenceNames;
        v6 = v4;
        do
        {
          if ( (v6->m_nFlags[0] & 1) == 0 )
          {
            m_nOffset = m_influenceNames->m_nOffset;
            v8 = "";
            if ( m_nOffset != 0 )
            {
              v9 = m_influenceNames + m_nOffset;
              if ( v9 != 0 )
                v8 = v9;
            }
            BoneIndex = CModelSkeletonBuilder::FindBoneIndex(this, v8);
            if ( BoneIndex != -1 )
            {
              this->m_nFlag.m_Memory.m_pMemory[BoneIndex] |= 0x20u;
              this->m_simBones.m_Memory.m_pMemory[BoneIndex] = 1;
            }
          }
          v11 = 1 - v4 + v6;
          ++m_influenceNames;
          v6 = (v6 + 1);
        }
        while ( v11 < v4->m_nInfluences );
      }
      ++v4;
    }
    while ( v4 != v12 );
  }
}


// CModelSkeletonBuilder::MarkBonesWithAttachmentsAsSimBones  (line 511, @0x00000000031491e0, libserver.so)  // inlines: AddFlags, Element, First, FirstInorder, IsIdxValid, IsValidIndex, LeftChild, MarkSimBone, Next, NextInorder, operator[], operator|, operator|=
// calls: CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlString::Get, CModelSkeletonBuilder::FindBoneIndex
// callers: CModelBuilder::AppendSkeletonsFromChildResources
void __fastcall CModelSkeletonBuilder::MarkBonesWithAttachmentsAsSimBones(
        CModelSkeletonBuilder *const this,
        const CRenderMesh *pMeshData)
{
  int m_Root; // r14d
  UtlRBTreeNode_t<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // r15
  __int64 v5; // rax
  int m_Left; // ecx
  __int64 v8; // r9
  UtlRBTreeNode_t<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v9; // rdx
  int v10; // ebx
  const char *v11; // rax
  int BoneIndex; // eax
  CUtlDict<CAttachment,int> *p_m_attachments; // [rsp+0h] [rbp-40h]
  __int64 v14; // [rsp+8h] [rbp-38h]

  if ( pMeshData->m_attachments.m_Elements.m_Tree.m_NumElements != 0 )
  {
    m_Root = pMeshData->m_attachments.m_Elements.m_Tree.m_Root;
    if ( m_Root != -1 )
    {
      m_pMemory = pMeshData->m_attachments.m_Elements.m_Tree.m_Elements.m_pMemory;
      v5 = m_Root;
      m_Left = m_pMemory[m_Root].m_Left;
      if ( m_Left != -1 )
      {
        while ( 1 )
        {
          v5 = m_Left;
          if ( m_pMemory[m_Left].m_Left == -1 )
            break;
          m_Left = m_pMemory[m_Left].m_Left;
        }
        m_Root = m_Left;
      }
      p_m_attachments = &pMeshData->m_attachments;
      if ( v5 >= 0
        && pMeshData->m_attachments.m_Elements.m_Tree.m_Elements.m_nAllocationCount > v5
        && pMeshData->m_attachments.m_Elements.m_Tree.m_LastAlloc.index >= m_Root )
      {
        do
        {
          if ( m_Root == -1 )
            break;
          v8 = 160 * v5;
          v9 = &m_pMemory[v5];
          if ( v9->m_Left == m_Root )
            break;
          v10 = 0;
          if ( v9->m_Data.elem.m_nInfluences != 0 )
          {
            do
            {
              if ( !v9->m_Data.elem.m_bInfluenceRootTransform[v10] )
              {
                v14 = v8;
                v11 = CUtlString::Get(&v9->m_Data.elem.m_influenceNames[v10]);
                BoneIndex = CModelSkeletonBuilder::FindBoneIndex(this, v11);
                v8 = v14;
                if ( BoneIndex != -1 )
                {
                  this->m_nFlag.m_Memory.m_pMemory[BoneIndex] |= 0x20u;
                  this->m_simBones.m_Memory.m_pMemory[BoneIndex] = 1;
                }
                m_pMemory = pMeshData->m_attachments.m_Elements.m_Tree.m_Elements.m_pMemory;
              }
              v9 = (m_pMemory + v8);
              ++v10;
            }
            while ( m_pMemory->m_Data.elem.m_bInfluenceRootTransform[v8 + 3] > v10 );
          }
          m_Root = CUtlRBTree<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                     &p_m_attachments->m_Elements.m_Tree,
                     m_Root);
          v5 = m_Root;
          if ( m_Root < 0LL )
            break;
        }
        while ( m_Root < pMeshData->m_attachments.m_Elements.m_Tree.m_Elements.m_nAllocationCount
             && m_Root <= pMeshData->m_attachments.m_Elements.m_Tree.m_LastAlloc.index );
      }
    }
  }
}


// CModelSkeletonBuilder::AppendSkeleton  (line 536, @0x000000000314a400, libserver.so)  // inlines: AddFlags, Get, GetName, GetPtr, operator[], operator|, operator|=
// calls: CModelSkeletonBuilder::FindOrAddBone
// callers: CModelBuilder::AppendSkeletonsFromChildResources
void __fastcall CModelSkeletonBuilder::AppendSkeleton(
        CModelSkeletonBuilder *const this,
        const CAnimationGroup *pAnimationData)
{
  __int64 v4; // r12
  int v5; // ebx
  CAnimBone *m_pMemory; // rcx
  CAnimBone *v7; // rax
  const char *m_pData; // r10
  __int64 m_parent; // rsi
  const char *v10; // rdx
  int v11; // eax

  if ( pAnimationData != 0 && pAnimationData->m_decodeKey.m_boneArray.m_Size > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      m_pMemory = pAnimationData->m_decodeKey.m_boneArray.m_Memory.m_pMemory;
      v7 = &m_pMemory[v4];
      m_pData = &m_pMemory[v4];
      m_parent = m_pMemory[v4].m_parent;
      if ( (*(&m_pMemory[v4].m_name.m_Inline + 15) & 2) == 0 )
      {
        m_pData = v7->m_name.m_pData;
        if ( v7->m_name.m_pData == 0 )
          m_pData = "";
      }
      v10 = 0;
      if ( m_parent != -1 )
      {
        v10 = &m_pMemory[m_parent];
        if ( (v10[15] & 2) == 0 )
        {
          v10 = *v10;
          if ( v10 == 0 )
            v10 = "";
        }
      }
      ++v5;
      ++v4;
      v11 = CModelSkeletonBuilder::FindOrAddBone(this, m_pData, v10, 0.0, v7->m_flags, &v7->m_pos, &v7->m_quat);
      this->m_nFlag.m_Memory.m_pMemory[v11] |= 0x40u;
    }
    while ( pAnimationData->m_decodeKey.m_boneArray.m_Size > v5 );
  }
}


// CModelSkeletonBuilder::AppendSkeleton  (line 557, @0x000000000314a4c0, libserver.so)  // inlines: AddFlags, GetName, GetPtr, GetRawPtr, ResolveOffset, operator[], operator|, operator|=
// calls: CModelSkeletonBuilder::FindOrAddBone
void __fastcall CModelSkeletonBuilder::AppendSkeleton(
        CModelSkeletonBuilder *const this,
        const AnimationGroupResourceData_t *pAnimationData)
{
  int *v4; // rbx
  signed int v5; // r12d
  CResourceArray<AnimResourceBone_t> *p_m_boneArray; // r13
  int *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  const char *v10; // rsi
  const char *v11; // rdi
  const char *v12; // rdx
  char *v13; // rdi
  char *v14; // rcx
  char *v15; // rax
  const Quaternion *v16; // r9
  const Vector *v17; // r8
  int v18; // eax
  __int64 m_nOffset; // rax

  if ( pAnimationData != 0 && pAnimationData->m_decodeKey.m_boneArray.m_nCount > 0 )
  {
    v4 = 0;
    v5 = 0;
    p_m_boneArray = &pAnimationData->m_decodeKey.m_boneArray;
    do
    {
      m_nOffset = pAnimationData->m_decodeKey.m_boneArray.m_nOffset;
      if ( m_nOffset != 0 )
      {
        v7 = (p_m_boneArray + m_nOffset + v4);
        v8 = v7[1];
      }
      else
      {
        v8 = v4[1];
        v7 = v4;
      }
      v9 = *v7;
      v10 = "";
      if ( v9 != 0 )
      {
        v11 = v7 + v9;
        if ( v11 != 0 )
          v10 = v11;
      }
      v12 = 0;
      if ( v8 != -1 )
      {
        v13 = 0;
        if ( m_nOffset != 0 )
          v13 = p_m_boneArray + m_nOffset;
        v14 = &v13[56 * v8];
        v12 = "";
        if ( *v14 != 0 )
        {
          v12 = &v14[*v14];
          if ( v12 == 0 )
            v12 = "";
        }
      }
      if ( m_nOffset != 0 )
      {
        v15 = p_m_boneArray + m_nOffset + v4;
        v16 = (v15 + 20);
        v17 = (v15 + 8);
      }
      else
      {
        v16 = (v4 + 5);
        v15 = v4;
        v17 = (v4 + 2);
      }
      ++v5;
      v4 += 14;
      v18 = CModelSkeletonBuilder::FindOrAddBone(this, v10, v12, 0.0, *(v15 + 13), v17, v16);
      this->m_nFlag.m_Memory.m_pMemory[v18] |= 0x40u;
    }
    while ( v5 < pAnimationData->m_decodeKey.m_boneArray.m_nCount );
  }
}


// CModelSkeletonBuilder::AppendRetargetDst  (line 579, @0x00000000031487a0, libserver.so)  // inlines: GetPtr, GetRawPtr, MarkSimBone, ResolveOffset, operator char const*, operator[]
// calls: CModelSkeletonBuilder::FindBoneIndex
void __fastcall CModelSkeletonBuilder::AppendRetargetDst(
        CModelSkeletonBuilder *const this,
        const AnimationRetargetData_t *pRetarget)
{
  CResourceArray<AnimationRetargetElementData_t> *p_m_element; // r14
  __int64 v5; // r12
  signed int i; // ebx
  int32 m_nOffset; // eax
  char *v8; // rdx
  const char *v9; // rsi
  char *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  int BoneIndex; // eax

  p_m_element = &pRetarget->m_element;
  v5 = 0;
  for ( i = 0; i < pRetarget->m_element.m_nCount; v5 += 156 )
  {
    m_nOffset = pRetarget->m_element.m_nOffset;
    v8 = 0;
    if ( m_nOffset != 0 )
      v8 = p_m_element + m_nOffset;
    v9 = "";
    v10 = &v8[v5];
    v11 = *(v10 + 6);
    if ( v11 != 0 )
    {
      v12 = &v10[v11 + 24];
      if ( v12 != 0 )
        v9 = v12;
    }
    BoneIndex = CModelSkeletonBuilder::FindBoneIndex(this, v9);
    if ( BoneIndex != -1 )
      this->m_simBones.m_Memory.m_pMemory[BoneIndex] = 1;
    ++i;
  }
}


// CModelSkeletonBuilder::MarkSimBone  (line 592, @0x0000000003148840, libserver.so)  // inlines: operator[]
void __fastcall CModelSkeletonBuilder::MarkSimBone(CModelSkeletonBuilder *const this, int iBone)
{
  this->m_simBones.m_Memory.m_pMemory[iBone] = 1;
}


// RetargetKeyLessFunc  (line 605, @0x00000000031475f0, libserver.so)
bool __fastcall RetargetKeyLessFunc(const RetargetKey_t *const k1_0, const RetargetKey_t *const k2_0)
{
  bool result; // al
  int32 m_nChainType; // ecx

  result = 1;
  if ( k1_0->m_nGroupType >= k2_0->m_nGroupType )
  {
    if ( k1_0->m_nGroupType != k2_0->m_nGroupType )
      return 0;
    m_nChainType = k2_0->m_nChainType;
    if ( k1_0->m_nChainType >= m_nChainType )
    {
      if ( k1_0->m_nChainType != m_nChainType )
        return 0;
      if ( k1_0->m_nIndex >= k2_0->m_nIndex )
        return 0;
    }
  }
  return result;
}


// CModelSkeletonBuilder::AppendRetargetSrc  (line 630, @0x000000000314c920, libserver.so)  // inlines: AddFlags, AddMultipleToTail, AddToTail, CUtlMap, CUtlMemory, CUtlRBTree, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, EnsureCount, Find, GetName, GetPtr, GetRawPtr, GrowMemory, GrowVector, Insert, InsertMultipleBefore, LeftChild, Purge, RemoveAll, ResetDbgInfo, ResolveOffset, RightChild, SetLessFunc, operator char const*, operator(), operator[], operator|, operator|=, ~CUtlMap, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::Format, CUtlString::Get, CUtlString::Set, CModelSkeletonBuilder::FindOrAddBone, CUtlString::FreeMemoryBlock, CModelSkeletonBuilder::FindBoneIndexByHash, CUtlMemory<int, int>::Grow, CUtlMemory<int, int>::Purge, CModelSkeletonBuilder::FindBoneIndex, CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int> >::Insert, CUtlString::operator=, CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree (14 total)
// strings: "RetargetSrc.%llX.%s"
// globals: RetargetKeyLessFunc(RetargetKey_t const&,RetargetKey_t const&)
bool __fastcall CModelSkeletonBuilder::AppendRetargetSrc(
        CModelSkeletonBuilder *const this,
        const AnimationGroupResourceData_t *pAnimationData,
        const AnimationRetargetData_t *pDstRetarget,
        ResourceId_t nId)
{
  signed int m_nCount; // edi
  char *v6; // rbx
  int32 m_nOffset; // edx
  char *v8; // rax
  const char *v9; // rcx
  char *v10; // rax
  __int64 v11; // rdx
  const char *v12; // rdx
  __int64 v13; // rdx
  int v14; // r13d
  char *v15; // rcx
  char *v16; // rax
  __int64 v17; // rdx
  const char *v18; // rcx
  const char *v19; // rax
  const Quaternion *v20; // r14
  char *v21; // r15
  const Vector *v22; // r15
  const char *v23; // rax
  const char *v24; // r13
  const char *v25; // rax
  __int64 v26; // r13
  int v27; // r14d
  int v28; // ecx
  __int64 v29; // rbx
  int j; // r12d
  int BoneIndexByHash; // eax
  CModelSkeleton::BoneFlags_t *v32; // rdx
  bool result; // al
  int m_Size; // ebx
  __int64 v35; // r13
  signed int v36; // ebx
  int32 v37; // edx
  char *v38; // rax
  const char *v39; // rcx
  char *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  const char *v43; // rax
  int BoneIndex; // eax
  int v45; // r15d
  int v46; // r14d
  __int64 v47; // r15
  CUtlMap<RetargetKey_t,int,short unsigned int,bool (*)(const RetargetKey_t&,const RetargetKey_t&)>::ElemType_t v48; // ebx
  int32 v49; // edx
  char *v50; // rax
  char *v51; // rax
  int32 v52; // edx
  int32 v53; // ecx
  signed int v54; // eax
  __int64 v55; // r15
  CUtlMap<RetargetKey_t,int,short unsigned int,bool (*)(const RetargetKey_t&,const RetargetKey_t&)>::ElemType_t v56; // ebx
  int32 v57; // edx
  char *v58; // rax
  char *v59; // rax
  int32 v60; // edx
  int32 v61; // ecx
  signed int v62; // r11d
  __int64 v63; // r14
  int32 v64; // edx
  char *v65; // rax
  const char *v66; // rsi
  char *v67; // rax
  __int64 v68; // rdx
  const char *v69; // rdx
  const char *v70; // rax
  int32 v71; // edx
  char *v72; // rax
  const char *v73; // rcx
  char *v74; // rbx
  __int64 v75; // rax
  const char *v76; // rax
  const char *v77; // rax
  int v78; // eax
  __int64 v79; // r15
  __int64 v80; // rax
  __int64 v81; // rbx
  char *v82; // rax
  const char *v83; // rcx
  __int64 v84; // rbx
  char *v85; // rax
  __int64 v86; // rdx
  const char *v87; // rax
  const char *v88; // rax
  int v89; // eax
  __int64 v90; // rax
  __int64 v91; // rdx
  char *v92; // rdx
  __int64 m_Root; // rbx
  char *v94; // rax
  int v95; // ecx
  int v96; // edx
  UtlRBTreeNode_t<CUtlMap<RetargetKey_t,int>::Node_t,short unsigned int> *m_pMemory; // rax
  __int64 v98; // rax
  char *v99; // rax
  const char *v100; // rsi
  char *v101; // rbx
  __int64 v102; // rax
  const char *v103; // rax
  __int64 v104; // rax
  char *v105; // r15
  const char *v106; // rax
  const char *v107; // rbx
  const char *v108; // rax
  int v109; // ebx
  __int64 v110; // rax
  CModelSkeletonBuilder *v111; // rbx
  __int64 v112; // rax
  __int64 v113; // rbx
  int v114; // eax
  int *v115; // rax
  __int64 v116; // rbx
  int v117; // eax
  int *v118; // rax
  __int64 v119; // rdx
  int v120; // eax
  __int64 v121; // rdx
  char *v122; // rax
  const char *v123; // rsi
  char *v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rax
  int v127; // eax
  __int64 v128; // rax
  char *v129; // rax
  const Vector *v130; // r15
  const char *v131; // rbx
  const char *v132; // rax
  const char *v133; // rdx
  __int64 v134; // [rsp+18h] [rbp-1C8h]
  CUtlMemory<int,int> *v135; // [rsp+20h] [rbp-1C0h]
  CUtlMemory<int,int> *v136; // [rsp+20h] [rbp-1C0h]
  CResourceArray<AnimResourceBone_t> *p_m_boneArray; // [rsp+38h] [rbp-1A8h]
  CModelSkeleton::BoneFlags_t v139[2]; // [rsp+38h] [rbp-1A8h]
  CModelSkeleton::BoneFlags_t v140; // [rsp+38h] [rbp-1A8h]
  CModelSkeleton::BoneFlags_t v141; // [rsp+38h] [rbp-1A8h]
  CModelSkeleton::BoneFlags_t nFlags; // [rsp+40h] [rbp-1A0h]
  const Quaternion *nFlagsa; // [rsp+40h] [rbp-1A0h]
  signed int i; // [rsp+60h] [rbp-180h]
  CResourceArray<CResourceString> *ia; // [rsp+60h] [rbp-180h]
  CUtlString sBoneName; // [rsp+70h] [rbp-170h] BYREF
  CUtlString sParentName; // [rsp+80h] [rbp-160h] BYREF
  CUtlString sSrcBoneName; // [rsp+90h] [rbp-150h] BYREF
  CUtlString sSrcParentName; // [rsp+A0h] [rbp-140h] BYREF
  CUtlString sDstBoneName; // [rsp+B0h] [rbp-130h] BYREF
  CUtlString sDstParentName; // [rsp+C0h] [rbp-120h] BYREF
  CUtlString v154; // [rsp+D0h] [rbp-110h] BYREF
  _DWORD v155[4]; // [rsp+E0h] [rbp-100h] BYREF
  CUtlMap<RetargetKey_t,int,short unsigned int,bool (*)(const RetargetKey_t&,const RetargetKey_t&)>::Node_t insert; // [rsp+F0h] [rbp-F0h] BYREF
  CUtlMap<RetargetKey_t,int,short unsigned int,bool (*)(const RetargetKey_t&,const RetargetKey_t&)>::Node_t v157; // [rsp+100h] [rbp-E0h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > skeletonToSrcBone; // [rsp+110h] [rbp-D0h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > skeletonToSrcElement; // [rsp+130h] [rbp-B0h] BYREF
  CUtlMap<RetargetKey_t,int,short unsigned int,bool (*)(const RetargetKey_t&,const RetargetKey_t&)> dstRetarget; // [rsp+150h] [rbp-90h] BYREF
  CUtlMap<RetargetKey_t,int,short unsigned int,bool (*)(const RetargetKey_t&,const RetargetKey_t&)> srcRetarget; // [rsp+180h] [rbp-60h] BYREF

  if ( pAnimationData == 0 || pAnimationData->m_retarget.m_bEnableRetarget == 0 )
    return 0;
  sBoneName.m_pString = 0;
  m_nCount = pAnimationData->m_decodeKey.m_boneArray.m_nCount;
  sParentName.m_pString = 0;
  skeletonToSrcBone.m_Size = 0;
  skeletonToSrcBone.m_Memory.m_pMemory = 0;
  skeletonToSrcBone.m_Memory.m_nAllocationCount = 0;
  skeletonToSrcBone.m_Memory.m_nGrowSize = 0;
  if ( m_nCount > 0 )
  {
    i = 0;
    v6 = 0;
    p_m_boneArray = &pAnimationData->m_decodeKey.m_boneArray;
    do
    {
      m_nOffset = pAnimationData->m_decodeKey.m_boneArray.m_nOffset;
      v8 = 0;
      if ( m_nOffset != 0 )
        v8 = p_m_boneArray + m_nOffset;
      v9 = "";
      v10 = &v8[v6];
      v11 = *v10;
      if ( v11 != 0 )
      {
        v12 = &v10[v11];
        if ( v12 != 0 )
          v9 = v12;
      }
      CUtlString::Format(&sBoneName, "RetargetSrc.%llX.%s", nId.m_Data, v9);
      v13 = pAnimationData->m_decodeKey.m_boneArray.m_nOffset;
      if ( v13 != 0 )
      {
        v14 = *&v6[p_m_boneArray + v13 + 4];
        if ( v14 == -1 )
          goto LABEL_40;
        v15 = p_m_boneArray + v13;
      }
      else
      {
        v14 = *(v6 + 1);
        v15 = 0;
        if ( v14 == -1 )
          goto LABEL_16;
      }
      v16 = &v15[56 * v14];
      v17 = *v16;
      v18 = "";
      if ( v17 != 0 )
      {
        v19 = &v16[v17];
        if ( v19 != 0 )
          v18 = v19;
      }
      CUtlString::Format(&sParentName, "RetargetSrc.%llX.%s", nId.m_Data, v18);
      v13 = pAnimationData->m_decodeKey.m_boneArray.m_nOffset;
      if ( v13 != 0 )
      {
LABEL_40:
        v21 = p_m_boneArray + v13 + v6;
        v20 = (v21 + 20);
        nFlags = *(v21 + 13);
        goto LABEL_17;
      }
LABEL_16:
      v20 = (v6 + 20);
      v21 = v6;
      nFlags = *(v6 + 13);
LABEL_17:
      v22 = (v21 + 8);
      srcRetarget.m_Tree.m_LessFunc.m_LessFunc = 0;
      if ( v14 == -1 )
      {
        CUtlString::Set(&srcRetarget, 0);
      }
      else
      {
        v23 = CUtlString::Get(&sParentName);
        CUtlString::Set(&srcRetarget, v23);
      }
      v24 = CUtlString::Get(&srcRetarget);
      v25 = CUtlString::Get(&sBoneName);
      v26 = CModelSkeletonBuilder::FindOrAddBone(this, v25, v24, 0.0, nFlags, v22, v20);
      if ( srcRetarget.m_Tree.m_LessFunc.m_LessFunc != 0 )
        CUtlString::FreeMemoryBlock(&srcRetarget);
      v27 = v26 + 1;
      if ( v26 + 1 > skeletonToSrcBone.m_Size )
      {
        if ( v27 > skeletonToSrcBone.m_Memory.m_nAllocationCount )
          CUtlMemory<int,int>::Grow(&skeletonToSrcBone.m_Memory, v27 - skeletonToSrcBone.m_Memory.m_nAllocationCount);
        skeletonToSrcBone.m_Size = v26 + 1;
      }
      v6 += 56;
      v28 = i++;
      skeletonToSrcBone.m_Memory.m_pMemory[v26] = v28;
      this->m_nFlag.m_Memory.m_pMemory[v26] |= 0x40u;
      this->m_nFlag.m_Memory.m_pMemory[v26] |= 0x200u;
    }
    while ( i < pAnimationData->m_decodeKey.m_boneArray.m_nCount );
  }
  if ( pAnimationData->m_retarget.m_replicated.m_nCount != 0 )
  {
    skeletonToSrcElement.m_Size = 0;
    skeletonToSrcElement.m_Memory.m_pMemory = 0;
    skeletonToSrcElement.m_Memory.m_nAllocationCount = 0;
    skeletonToSrcElement.m_Memory.m_nGrowSize = 0;
    m_Size = this->m_boneName.m_Size;
    if ( m_Size > 0 )
    {
      CUtlMemory<int,int>::Grow(&skeletonToSrcElement.m_Memory, m_Size);
      skeletonToSrcElement.m_Size = m_Size;
      if ( this->m_boneName.m_Size > 0 )
      {
        v119 = 0;
        v120 = 0;
        do
        {
          ++v120;
          skeletonToSrcElement.m_Memory.m_pMemory[v119++] = -1;
        }
        while ( v120 < this->m_boneName.m_Size );
      }
    }
    if ( pAnimationData->m_retarget.m_element.m_nCount > 0 )
    {
      v35 = 0;
      v36 = 0;
      do
      {
        v37 = pAnimationData->m_retarget.m_element.m_nOffset;
        v38 = 0;
        if ( v37 != 0 )
          v38 = &pAnimationData->m_retarget.m_element + v37;
        v39 = "";
        v40 = &v38[v35];
        v41 = *(v40 + 6);
        if ( v41 != 0 )
        {
          v42 = &v40[v41 + 24];
          if ( v42 != 0 )
            v39 = v42;
        }
        CUtlString::Format(&sBoneName, "RetargetSrc.%llX.%s", nId.m_Data, v39);
        v43 = CUtlString::Get(&sBoneName);
        BoneIndex = CModelSkeletonBuilder::FindBoneIndex(this, v43);
        v45 = BoneIndex;
        if ( BoneIndex != -1 )
        {
          v46 = BoneIndex + 1;
          if ( BoneIndex + 1 > skeletonToSrcBone.m_Size )
          {
            if ( v46 > skeletonToSrcBone.m_Memory.m_nAllocationCount )
              CUtlMemory<int,int>::Grow(
                &skeletonToSrcBone.m_Memory,
                v46 - skeletonToSrcBone.m_Memory.m_nAllocationCount);
            skeletonToSrcBone.m_Size = v46;
          }
          skeletonToSrcElement.m_Memory.m_pMemory[v45] = v36;
        }
        ++v36;
        v35 += 156;
      }
      while ( v36 < pAnimationData->m_retarget.m_element.m_nCount );
    }
    dstRetarget.m_Tree.m_Elements.m_nAllocationCount = 0;
    dstRetarget.m_Tree.m_Root = -1;
    dstRetarget.m_Tree.m_NumElements = 0;
    dstRetarget.m_Tree.m_FirstFree = -1;
    dstRetarget.m_Tree.m_LastAlloc.index = -1;
    dstRetarget.m_Tree.m_LessFunc.m_LessFunc = RetargetKeyLessFunc;
    dstRetarget.m_Tree.m_Elements.m_pMemory = 0;
    dstRetarget.m_Tree.m_Elements.m_nGrowSize = 0;
    dstRetarget.m_Tree.m_pElements = 0;
    if ( pDstRetarget->m_element.m_nCount > 0 )
    {
      v47 = 0;
      v48 = 0;
      do
      {
        v49 = pDstRetarget->m_element.m_nOffset;
        v50 = 0;
        if ( v49 != 0 )
          v50 = &pDstRetarget->m_element + v49;
        v51 = &v50[v47];
        v52 = *(v51 + 4);
        insert.elem = v48;
        v53 = *(v51 + 2);
        LODWORD(v51) = *(v51 + 1);
        insert.key.m_nIndex = v52;
        insert.key.m_nChainType = v53;
        insert.key.m_nGroupType = v51;
        CUtlRBTree<CUtlMap<RetargetKey_t,int,unsigned short,bool (*)(RetargetKey_t const&,RetargetKey_t const&)>::Node_t,unsigned short,CUtlMap<RetargetKey_t,int,unsigned short,bool (*)(RetargetKey_t const&,RetargetKey_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t,int,unsigned short,bool (*)(RetargetKey_t const&,RetargetKey_t const&)>::Node_t,unsigned short>,unsigned short>>::Insert(
          &dstRetarget.m_Tree,
          &insert,
          ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
        ++v48;
        v47 += 156;
      }
      while ( v48 < pDstRetarget->m_element.m_nCount );
    }
    srcRetarget.m_Tree.m_LessFunc.m_LessFunc = RetargetKeyLessFunc;
    v54 = pAnimationData->m_retarget.m_element.m_nCount;
    srcRetarget.m_Tree.m_Elements.m_pMemory = 0;
    srcRetarget.m_Tree.m_Elements.m_nAllocationCount = 0;
    srcRetarget.m_Tree.m_Elements.m_nGrowSize = 0;
    srcRetarget.m_Tree.m_Root = -1;
    srcRetarget.m_Tree.m_NumElements = 0;
    srcRetarget.m_Tree.m_FirstFree = -1;
    srcRetarget.m_Tree.m_LastAlloc.index = -1;
    srcRetarget.m_Tree.m_pElements = 0;
    if ( v54 > 0 )
    {
      v55 = 0;
      v56 = 0;
      do
      {
        v57 = pAnimationData->m_retarget.m_element.m_nOffset;
        v58 = 0;
        if ( v57 != 0 )
          v58 = &pAnimationData->m_retarget.m_element + v57;
        v59 = &v58[v55];
        v60 = *(v59 + 4);
        v157.elem = v56;
        v61 = *(v59 + 2);
        LODWORD(v59) = *(v59 + 1);
        v157.key.m_nIndex = v60;
        v157.key.m_nChainType = v61;
        v157.key.m_nGroupType = v59;
        CUtlRBTree<CUtlMap<RetargetKey_t,int,unsigned short,bool (*)(RetargetKey_t const&,RetargetKey_t const&)>::Node_t,unsigned short,CUtlMap<RetargetKey_t,int,unsigned short,bool (*)(RetargetKey_t const&,RetargetKey_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t,int,unsigned short,bool (*)(RetargetKey_t const&,RetargetKey_t const&)>::Node_t,unsigned short>,unsigned short>>::Insert(
          &srcRetarget.m_Tree,
          &v157,
          ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
        ++v56;
        v55 += 156;
      }
      while ( v56 < pAnimationData->m_retarget.m_element.m_nCount );
    }
    sSrcBoneName.m_pString = 0;
    v62 = pAnimationData->m_retarget.m_replicated.m_nCount;
    sSrcParentName.m_pString = 0;
    sDstBoneName.m_pString = 0;
    sDstParentName.m_pString = 0;
    if ( v62 <= 0 )
    {
LABEL_128:
      if ( sSrcParentName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&sSrcParentName);
      if ( sSrcBoneName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&sSrcBoneName);
      CUtlRBTree<CUtlMap<RetargetKey_t,int,unsigned short,bool (*)(RetargetKey_t const&,RetargetKey_t const&)>::Node_t,unsigned short,CUtlMap<RetargetKey_t,int,unsigned short,bool (*)(RetargetKey_t const&,RetargetKey_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t,int,unsigned short,bool (*)(RetargetKey_t const&,RetargetKey_t const&)>::Node_t,unsigned short>,unsigned short>>::~CUtlRBTree(&srcRetarget.m_Tree);
      CUtlRBTree<CUtlMap<RetargetKey_t,int,unsigned short,bool (*)(RetargetKey_t const&,RetargetKey_t const&)>::Node_t,unsigned short,CUtlMap<RetargetKey_t,int,unsigned short,bool (*)(RetargetKey_t const&,RetargetKey_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t,int,unsigned short,bool (*)(RetargetKey_t const&,RetargetKey_t const&)>::Node_t,unsigned short>,unsigned short>>::~CUtlRBTree(&dstRetarget.m_Tree);
      CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&skeletonToSrcElement);
      goto LABEL_27;
    }
    v63 = 0;
    ia = &pAnimationData->m_retarget.m_replicated;
    while ( 1 )
    {
      v64 = pAnimationData->m_retarget.m_replicated.m_nOffset;
      v65 = 0;
      if ( v64 != 0 )
        v65 = ia + v64;
      v66 = "";
      v67 = &v65[4 * v63];
      v68 = *v67;
      if ( v68 != 0 )
      {
        v69 = &v67[v68];
        if ( v69 != 0 )
          v66 = v69;
      }
      CUtlString::operator=(&sDstBoneName, v66);
      v70 = CUtlString::Get(&sDstBoneName);
      if ( CModelSkeletonBuilder::FindBoneIndex(this, v70) == -1 )
      {
        v71 = pAnimationData->m_retarget.m_replicated.m_nOffset;
        v72 = 0;
        if ( v71 != 0 )
          v72 = ia + v71;
        v73 = "";
        v74 = &v72[4 * v63];
        v75 = *v74;
        if ( v75 != 0 )
        {
          v76 = &v74[v75];
          if ( v76 != 0 )
            v73 = v76;
        }
        CUtlString::Format(&sSrcBoneName, "RetargetSrc.%llX.%s", nId.m_Data, v73);
        v77 = CUtlString::Get(&sSrcBoneName);
        v78 = CModelSkeletonBuilder::FindBoneIndex(this, v77);
        if ( v78 != -1 && this->m_nParentHash.m_Memory.m_pMemory[v78] != 0 )
        {
          v79 = skeletonToSrcBone.m_Memory.m_pMemory[v78];
          v135 = &pAnimationData->m_decodeKey.m_boneArray;
          v80 = pAnimationData->m_decodeKey.m_boneArray.m_nOffset;
          if ( v80 != 0 )
          {
            v82 = v135 + v80;
            v134 = 56 * v79;
            v81 = *&v82[56 * v79 + 4];
            if ( v81 != -1 )
            {
LABEL_88:
              v83 = "";
              v84 = 56 * v81;
              v85 = &v82[v84];
              v86 = *v85;
              if ( v86 != 0 )
              {
                v87 = &v85[v86];
                if ( v87 != 0 )
                  v83 = v87;
              }
              CUtlString::Format(&sSrcParentName, "RetargetSrc.%llX.%s", nId.m_Data, v83);
              v88 = CUtlString::Get(&sSrcParentName);
              v89 = CModelSkeletonBuilder::FindBoneIndex(this, v88);
              if ( v89 == -1 || (v90 = skeletonToSrcElement.m_Memory.m_pMemory[v89]) == -1 )
              {
                v98 = pAnimationData->m_decodeKey.m_boneArray.m_nOffset;
                if ( v98 != 0 )
                  v99 = v135 + v98;
                else
                  v99 = 0;
                v100 = "";
                v101 = &v99[v84];
                v102 = *v101;
                if ( v102 != 0 )
                {
                  v103 = &v101[v102];
                  if ( v103 != 0 )
                    v100 = v103;
                }
                CUtlString::operator=(&sDstParentName, v100);
                v104 = pAnimationData->m_decodeKey.m_boneArray.m_nOffset;
                if ( v104 != 0 )
                {
                  v105 = v135 + v104 + v134;
                  v140 = *(v105 + 13);
                  v136 = (v105 + 20);
                }
                else
                {
                  v105 = v134;
                  v140 = *(v134 + 52);
                  v136 = (v134 + 20);
                }
                v154.m_pString = 0;
                v106 = CUtlString::Get(&sDstParentName);
                CUtlString::Set(&v154, v106);
                v107 = CUtlString::Get(&v154);
                v108 = CUtlString::Get(&sDstBoneName);
                v109 = CModelSkeletonBuilder::FindOrAddBone(this, v108, v107, 0.0, v140, (v105 + 8), v136);
                if ( v154.m_pString != 0 )
                  CUtlString::FreeMemoryBlock(&v154);
                v110 = v109;
                v111 = this;
                v112 = v110;
LABEL_114:
                v111->m_nFlag.m_Memory.m_pMemory[v112] |= 0x40u;
                v111->m_nFlag.m_Memory.m_pMemory[v112] |= 0x200u;
                v113 = skeletonToSrcElement.m_Size;
                v114 = skeletonToSrcElement.m_Size;
                if ( skeletonToSrcElement.m_Size == skeletonToSrcElement.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<int,int>::Grow(&skeletonToSrcElement.m_Memory, 1);
                  v114 = skeletonToSrcElement.m_Size;
                }
                skeletonToSrcElement.m_Size = v114 + 1;
                v115 = &skeletonToSrcElement.m_Memory.m_pMemory[v113];
                if ( v115 != 0 )
                  *v115 = -1;
                v116 = skeletonToSrcBone.m_Size;
                v117 = skeletonToSrcBone.m_Size;
                if ( skeletonToSrcBone.m_Size == skeletonToSrcBone.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<int,int>::Grow(&skeletonToSrcBone.m_Memory, 1);
                  v117 = skeletonToSrcBone.m_Size;
                }
                skeletonToSrcBone.m_Size = v117 + 1;
                v118 = &skeletonToSrcBone.m_Memory.m_pMemory[v116];
                if ( v118 != 0 )
                  *v118 = -1;
              }
              else
              {
                v91 = pAnimationData->m_retarget.m_element.m_nOffset;
                if ( v91 != 0 )
                  v92 = &pAnimationData->m_retarget.m_element + v91;
                else
                  v92 = 0;
                m_Root = dstRetarget.m_Tree.m_Root;
                v94 = &v92[156 * v90];
                v95 = *(v94 + 2);
                v96 = *(v94 + 4);
                LODWORD(v94) = *(v94 + 1);
                v155[1] = v95;
                v155[2] = v96;
                v155[0] = v94;
                if ( dstRetarget.m_Tree.m_Root != 0xFFFF )
                {
                  m_pMemory = dstRetarget.m_Tree.m_Elements.m_pMemory;
                  do
                  {
                    *v139 = 24 * m_Root;
                    if ( dstRetarget.m_Tree.m_LessFunc.m_LessFunc(v155, &m_pMemory[m_Root].m_Data) != 0 )
                    {
                      m_pMemory = dstRetarget.m_Tree.m_Elements.m_pMemory;
                      m_Root = dstRetarget.m_Tree.m_Elements.m_pMemory[m_Root].m_Left;
                    }
                    else
                    {
                      if ( dstRetarget.m_Tree.m_LessFunc.m_LessFunc(
                             &dstRetarget.m_Tree.m_Elements.m_pMemory->m_Data + *v139,
                             v155) == 0 )
                      {
                        v121 = pDstRetarget->m_element.m_nOffset;
                        v122 = &pDstRetarget->m_element + v121;
                        if ( v121 == 0 )
                          v122 = 0;
                        v123 = "";
                        v124 = &v122[156 * m_Root];
                        v125 = *(v124 + 6);
                        if ( v125 != 0 )
                        {
                          v126 = &v124[v125 + 24];
                          if ( v126 != 0 )
                            v123 = v126;
                        }
                        v127 = CModelSkeletonBuilder::FindBoneIndex(this, v123);
                        CUtlString::operator=(&sDstParentName, &this->m_boneName.m_Memory.m_pMemory[v127]);
                        v128 = pAnimationData->m_decodeKey.m_boneArray.m_nOffset;
                        if ( v128 != 0 )
                        {
                          v129 = v135 + v128 + v134;
                          v141 = *(v129 + 13);
                          nFlagsa = (v129 + 20);
                        }
                        else
                        {
                          v129 = v134;
                          v141 = *(v134 + 52);
                          nFlagsa = (v134 + 20);
                        }
                        v130 = (v129 + 8);
                        v131 = CUtlString::Get(&sDstParentName);
                        v132 = CUtlString::Get(&sDstBoneName);
                        v133 = v131;
                        v111 = this;
                        v112 = CModelSkeletonBuilder::FindOrAddBone(this, v132, v133, 0.0, v141, v130, nFlagsa);
                        goto LABEL_114;
                      }
                      m_pMemory = dstRetarget.m_Tree.m_Elements.m_pMemory;
                      m_Root = *(&dstRetarget.m_Tree.m_Elements.m_pMemory->m_Right + *v139);
                    }
                  }
                  while ( m_Root != 0xFFFF );
                }
              }
            }
          }
          else
          {
            v81 = *(&loc_2 + 56 * v79 + 2);
            v134 = 56LL * v79;
            v82 = 0;
            if ( v81 != -1 )
              goto LABEL_88;
          }
        }
      }
      if ( ++v63 >= pAnimationData->m_retarget.m_replicated.m_nCount )
      {
        if ( sDstParentName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&sDstParentName);
        if ( sDstBoneName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&sDstBoneName);
        goto LABEL_128;
      }
    }
  }
LABEL_27:
  v29 = 0;
  for ( j = 0; j < this->m_boneName.m_Size; ++v29 )
  {
    BoneIndexByHash = CModelSkeletonBuilder::FindBoneIndexByHash(this, this->m_nParentHash.m_Memory.m_pMemory[v29]);
    if ( BoneIndexByHash != -1 )
    {
      v32 = this->m_nFlag.m_Memory.m_pMemory;
      if ( (BYTE1(v32[BoneIndexByHash]) & 2) != 0 )
        v32[v29] |= 0x200u;
    }
    ++j;
  }
  skeletonToSrcBone.m_Size = 0;
  if ( (skeletonToSrcBone.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&skeletonToSrcBone.m_Memory);
    if ( (skeletonToSrcBone.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&skeletonToSrcBone.m_Memory);
  }
  if ( sParentName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&sParentName);
  result = 1;
  if ( sBoneName.m_pString != 0 )
  {
    CUtlString::FreeMemoryBlock(&sBoneName);
    return 1;
  }
  return result;
}


// CModelSkeletonBuilder::AppendSkeleton  (line 794, @0x000000000314ae70, libserver.so)  // inlines: CTransform, ConcatTransforms, MatrixInvert, MatrixTransform, VectorAligned, operator[]
// calls: MatrixTransform, CModelSkeletonBuilder::FindOrAddBone, MatrixInvert, ConcatTransforms, CModelSkeletonBuilder::MarkClothBones
// callers: CModelBuilder::AppendSkeletonsFromChildResources
void __fastcall CModelSkeletonBuilder::AppendSkeleton(
        CModelSkeletonBuilder *const this,
        const CPhysAggregateData *pData,
        bool bBuildClothBoneHierarchy)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  int i; // r12d
  unsigned int *m_pMemory; // rdx
  uint32 v8; // r13d
  __int64 v9; // rcx
  matrix3x4_t *v10; // rdi
  uint32 nParentHash; // [rsp+34h] [rbp-CCh]
  Vector *vBoneLocalPos; // [rsp+38h] [rbp-C8h]
  matrix3x4_t tmBindPose; // [rsp+40h] [rbp-C0h] BYREF
  CTransform tmBind; // [rsp+70h] [rbp-90h] BYREF
  matrix3x4_t v17; // [rsp+A0h] [rbp-60h] BYREF

  if ( pData != 0 )
  {
    v4 = 0;
    v5 = 0;
    for ( i = 0; pData->m_BonesHash.m_nAllocationCount > i; ++v4 )
    {
      m_pMemory = pData->m_BonesHash.m_pMemory;
      v8 = m_pMemory[v4];
      if ( v8 != 0 )
      {
        v9 = pData->m_BoneParents.m_pMemory[v4];
        if ( v9 == i )
        {
          nParentHash = 0;
          tmBindPose = pData->m_BindPose.m_pMemory[v5];
        }
        else
        {
          v10 = pData->m_BindPose.m_pMemory;
          nParentHash = m_pMemory[v9];
          vBoneLocalPos = &v10[v5];
          MatrixInvert(&v10[v9], &tmBind);
          ConcatTransforms(&tmBind, vBoneLocalPos, &v17);
          tmBindPose = v17;
        }
        tmBind.m_vPosition.w = 0.0;
        MatrixTransform(&tmBindPose, &tmBind);
        CModelSkeletonBuilder::FindOrAddBone(
          this,
          v8,
          nParentHash,
          0.0,
          CModelSkeleton::BoneFlags_t::FLAG_PHYSICS,
          &tmBind.m_vPosition,
          &tmBind.m_orientation,
          pData->m_BoneNames.m_pData->m_Elements[i]);
      }
      ++i;
      ++v5;
    }
    CModelSkeletonBuilder::MarkClothBones(this, pData->m_pFeModel, bBuildClothBoneHierarchy);
  }
}


// CModelSkeletonBuilder::MarkClothBones  (line 831, @0x0000000003149350, libserver.so)  // inlines: AddFlags, CUtlMemory, CUtlVector, CUtlVectorBase, CtrlToNode, Purge, RemoveAll, operator[], operator|, operator|=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CModelSkeletonBuilder::FindBoneIndexByHash, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CModelSkeletonBuilder::AppendSkeleton
void __fastcall CModelSkeletonBuilder::MarkClothBones(
        CModelSkeletonBuilder *const this,
        const CFeModel *pFeModel,
        bool bBuildClothBoneHierarchy)
{
  int m_nCtrlCount; // esi
  unsigned int i; // ebx
  int BoneIndexByHash; // eax
  CModelSkeleton::BoneFlags_t *v9; // rdx
  uint16 *m_pCtrlToNode; // rdx
  unsigned int v11; // edx
  unsigned int v12; // edx
  FeCtrlOffset_t *v13; // rax
  __int64 nCtrlParent; // rsi
  __int64 v15; // rax
  unsigned int *v16; // rax
  CUtlVector<int,CUtlMemory<int,int> > ctrlToBone; // [rsp+10h] [rbp-50h] BYREF

  if ( pFeModel != 0 )
  {
    m_nCtrlCount = pFeModel->m_nCtrlCount;
    ctrlToBone.m_Size = 0;
    ctrlToBone.m_Memory.m_pMemory = 0;
    ctrlToBone.m_Memory.m_nAllocationCount = 0;
    ctrlToBone.m_Memory.m_nGrowSize = 0;
    CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&ctrlToBone, m_nCtrlCount);
    for ( i = 0; pFeModel->m_nCtrlCount > i; this->m_simBones.m_Memory.m_pMemory[BoneIndexByHash] = 1 )
    {
      while ( 1 )
      {
        BoneIndexByHash = CModelSkeletonBuilder::FindBoneIndexByHash(this, pFeModel->m_pCtrlHash[i]);
        ctrlToBone.m_Memory.m_pMemory[i] = BoneIndexByHash;
        if ( BoneIndexByHash >= 0 )
        {
          v9 = &this->m_nFlag.m_Memory.m_pMemory[BoneIndexByHash];
          *v9 |= 8u;
          m_pCtrlToNode = pFeModel->m_pCtrlToNode;
          v11 = m_pCtrlToNode != 0 ? m_pCtrlToNode[i] : i;
          if ( pFeModel->m_nRotLockStaticNodes <= v11 )
            break;
        }
        if ( pFeModel->m_nCtrlCount <= ++i )
          goto LABEL_10;
      }
      ++i;
      this->m_nFlag.m_Memory.m_pMemory[BoneIndexByHash] |= 0x400000u;
    }
LABEL_10:
    if ( bBuildClothBoneHierarchy && pFeModel->m_nCtrlOffsets != 0 )
    {
      v12 = 0;
      do
      {
        while ( 1 )
        {
          v13 = &pFeModel->m_pCtrlOffsets[v12];
          nCtrlParent = v13->nCtrlParent;
          v15 = ctrlToBone.m_Memory.m_pMemory[v13->nCtrlChild];
          if ( v15 > 0 && ctrlToBone.m_Memory.m_pMemory[nCtrlParent] > 0 )
          {
            v16 = &this->m_nParentHash.m_Memory.m_pMemory[v15];
            if ( *v16 == 0 )
              break;
          }
          if ( pFeModel->m_nCtrlOffsets <= ++v12 )
            goto LABEL_18;
        }
        ++v12;
        *v16 = pFeModel->m_pCtrlHash[nCtrlParent];
      }
      while ( pFeModel->m_nCtrlOffsets > v12 );
    }
LABEL_18:
    ctrlToBone.m_Size = 0;
    if ( (ctrlToBone.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<int,int>::Purge(&ctrlToBone.m_Memory);
      if ( (ctrlToBone.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<int,int>::Purge(&ctrlToBone.m_Memory);
    }
  }
}


// CModelSkeletonBuilder::FixupFlagsAndParents  (line 874, @0x000000000314b5c0, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<short int, CUtlMemory<short int, int> >::SetCount, CModelSkeletonBuilder::FindBoneIndexByHash
// callers: CModelSkeletonBuilder::Finalize, CModelSkeletonBuilder::FillInPermData, CModelSkeletonBuilder::FillInRuntimeData, CModelBuilder::AppendSkeletonsFromChildResources
void __fastcall CModelSkeletonBuilder::FixupFlagsAndParents(CModelSkeletonBuilder *const this)
{
  CUtlVector<short int,CUtlMemory<short int,int> > *p_m_nParentIndices; // rdi
  int m_Size; // ebx
  __int64 v4; // r14
  unsigned __int64 v5; // rbx
  __int16 *v6; // r13
  uint32 v7; // esi

  p_m_nParentIndices = &this->m_nParentIndices;
  m_Size = p_m_nParentIndices[-2].m_Size;
  CUtlVectorBase<short,CUtlMemory<short,int>>::SetCount(p_m_nParentIndices, m_Size);
  if ( m_Size > 0 )
  {
    v4 = 2LL * (m_Size - 1) + 2;
    v5 = 0;
    do
    {
      v6 = &this->m_nParentIndices.m_Memory.m_pMemory[v5 / 2];
      v7 = this->m_nParentHash.m_Memory.m_pMemory[v5 / 2];
      v5 += 2LL;
      *v6 = CModelSkeletonBuilder::FindBoneIndexByHash(this, v7);
    }
    while ( v5 != v4 );
  }
}


// CModelSkeletonBuilder::Finalize  (line 886, @0x000000000314f4f0, libserver.so)
// calls: CModelSkeletonBuilder::FixupFlagsAndParents, CModelSkeletonBuilder::SortBoneList
void __fastcall CModelSkeletonBuilder::Finalize(CModelSkeletonBuilder *const this, bool bSort)
{
  CModelSkeletonBuilder::FixupFlagsAndParents(this);
  if ( bSort )
    CModelSkeletonBuilder::SortBoneList(this);
}


// CModelSkeletonBuilder::FillInPermData  (line 893, @0x000000000314f520, libserver.so)  // inlines: Allocate<CResourceString>, Allocate<Quaternion>, Allocate<Vector>, Allocate<char>, Allocate<float>, Allocate<short int>, Allocate<unsigned int>, AllocateUnaligned<CResourceString>, AllocateUnaligned<Quaternion>, AllocateUnaligned<Vector>, AllocateUnaligned<char>, AllocateUnaligned<float>, AllocateUnaligned<short int>, AllocateUnaligned<unsigned int>, CResourcePointer, CResourcePointerBase, CResourceString, CUnlockedResource, Construct<CResourceString>, Finalize, GetDataPtr, GetPtr, GetRawPtr, ResolveOffset, SetPtr, SetRawPtr, V_memset, V_strlen, WriteString, memcpy, memset, operator CResourceString*, operator Quaternion*, operator Vector*, operator char*, operator float*, operator short int*, operator unsigned int*, operator=, operator[]
// calls: CResourceStream::Align, CResourceStream::AllocateBytes, strlen, memcpy, CUtlString::Get, CModelSkeletonBuilder::FixupFlagsAndParents, CModelSkeletonBuilder::SortBoneList
// callers: CModelSkeletonBuilder::CompileToPermDataPointer, CModelBuilder::FillInPermData
void __fastcall CModelSkeletonBuilder::FillInPermData(
        CModelSkeletonBuilder *const this,
        ModelSkeletonData_t *pPermData,
        CResourceStream *pResourceStream)
{
  signed int m_Size; // r13d
  uint v7; // r12d
  unsigned int Bytes; // eax
  uint8 *m_pData; // rdx
  uint8 *v10; // rcx
  uint v11; // eax
  uint8 *v12; // rax
  int i; // edx
  int32 v14; // ecx
  unsigned int v15; // eax
  uint8 *v16; // rdx
  uint v17; // ecx
  uint v18; // eax
  int32 v19; // edx
  unsigned int v20; // eax
  uint8 *v21; // rdx
  uint v22; // ecx
  uint v23; // eax
  int32 v24; // edx
  unsigned int v25; // eax
  uint8 *v26; // rdx
  uint v27; // ecx
  uint v28; // eax
  int32 v29; // edx
  unsigned int v30; // eax
  uint8 *v31; // rdx
  uint v32; // ecx
  uint v33; // eax
  int32 v34; // edx
  unsigned int v35; // eax
  uint8 *v36; // rdx
  uint v37; // ecx
  uint v38; // eax
  int32 v39; // edx
  ModelSkeletonData_t *v40; // rax
  unsigned __int64 v41; // r14
  ModelSkeletonData_t *v42; // r13
  int v43; // eax
  void *v44; // rdi
  unsigned int v45; // eax
  uint8 *v46; // rdx
  uint8 *v47; // r11
  uint v48; // eax
  char *v49; // rdx
  char *v50; // rdx
  int m_nOffset; // esi
  char *v52; // rdx
  char *v53; // rdx
  int v54; // esi
  char *v55; // rdx
  int v56; // esi
  char *v57; // rax
  int v58; // edi
  Vector *v59; // rdx
  char *v60; // rax
  char *v61; // rax
  int v62; // edi
  Quaternion *v63; // rdx
  char *v64; // rax
  const char *v65; // rax
  const char *v66; // r12
  CResourceArray<float> *p_m_boneSphere; // [rsp+8h] [rbp-68h]
  CResourceArray<Vector> *p_m_bonePosParent; // [rsp+10h] [rbp-60h]
  CResourceArray<short int> *p_m_nParent; // [rsp+18h] [rbp-58h]
  CResourceArray<unsigned int> *p_m_nFlag; // [rsp+20h] [rbp-50h]
  CResourceArray<Quaternion> *p_m_boneRotParent; // [rsp+28h] [rbp-48h]
  __int64 v72; // [rsp+30h] [rbp-40h]
  signed int numBytes; // [rsp+3Ch] [rbp-34h]

  if ( this->m_nParentIndices.m_Size == 0 )
  {
    CModelSkeletonBuilder::FixupFlagsAndParents(this);
    CModelSkeletonBuilder::SortBoneList(this);
  }
  memset(pPermData, 0, sizeof(ModelSkeletonData_t));
  m_Size = this->m_boneName.m_Size;
  CResourceStream::Align(pResourceStream, 4u, 0);
  v7 = 4 * m_Size;
  Bytes = CResourceStream::AllocateBytes(pResourceStream, 4 * m_Size);
  m_pData = pResourceStream->m_pData;
  v10 = 0;
  v11 = Bytes - m_pData;
  if ( pResourceStream->m_nUsed >= v11 )
    v10 = &m_pData[v11];
  if ( m_Size != 0 )
  {
    v12 = v10;
    for ( i = 0; i != m_Size; ++i )
    {
      if ( v12 != 0 )
        *v12 = 0;
      v12 += 4;
    }
    v14 = v10 - pPermData;
  }
  else
  {
    v14 = 0;
  }
  pPermData->m_boneName.m_nOffset = v14;
  pPermData->m_boneName.m_nCount = m_Size;
  CResourceStream::Align(pResourceStream, 2u, 0);
  v15 = CResourceStream::AllocateBytes(pResourceStream, 2 * m_Size);
  v16 = pResourceStream->m_pData;
  v17 = 0;
  v18 = v15 - v16;
  if ( pResourceStream->m_nUsed >= v18 )
    v17 = v16 + v18;
  v19 = 0;
  if ( m_Size != 0 )
    v19 = v17 - (pPermData + 8);
  pPermData->m_nParent.m_nOffset = v19;
  pPermData->m_nParent.m_nCount = m_Size;
  CResourceStream::Align(pResourceStream, 4u, 0);
  v20 = CResourceStream::AllocateBytes(pResourceStream, v7);
  v21 = pResourceStream->m_pData;
  v22 = 0;
  v23 = v20 - v21;
  if ( pResourceStream->m_nUsed >= v23 )
    v22 = v21 + v23;
  v24 = 0;
  if ( m_Size != 0 )
    v24 = v22 - (pPermData + 16);
  pPermData->m_boneSphere.m_nOffset = v24;
  pPermData->m_boneSphere.m_nCount = m_Size;
  CResourceStream::Align(pResourceStream, 4u, 0);
  v25 = CResourceStream::AllocateBytes(pResourceStream, v7);
  v26 = pResourceStream->m_pData;
  v27 = 0;
  v28 = v25 - v26;
  if ( pResourceStream->m_nUsed >= v28 )
    v27 = v26 + v28;
  v29 = 0;
  if ( m_Size != 0 )
    v29 = v27 - (pPermData + 24);
  pPermData->m_nFlag.m_nOffset = v29;
  pPermData->m_nFlag.m_nCount = m_Size;
  CResourceStream::Align(pResourceStream, 4u, 0);
  v30 = CResourceStream::AllocateBytes(pResourceStream, 12 * m_Size);
  v31 = pResourceStream->m_pData;
  v32 = 0;
  v33 = v30 - v31;
  if ( pResourceStream->m_nUsed >= v33 )
    v32 = v31 + v33;
  v34 = 0;
  if ( m_Size != 0 )
    v34 = v32 - (pPermData + 32);
  pPermData->m_bonePosParent.m_nOffset = v34;
  pPermData->m_bonePosParent.m_nCount = m_Size;
  CResourceStream::Align(pResourceStream, 4u, 0);
  v35 = CResourceStream::AllocateBytes(pResourceStream, 16 * m_Size);
  v36 = pResourceStream->m_pData;
  v37 = 0;
  v38 = v35 - v36;
  if ( pResourceStream->m_nUsed >= v38 )
    v37 = v36 + v38;
  v39 = 0;
  if ( m_Size != 0 )
    v39 = v37 - (pPermData + 40);
  pPermData->m_boneRotParent.m_nOffset = v39;
  pPermData->m_boneRotParent.m_nCount = m_Size;
  if ( m_Size > 0 )
  {
    p_m_nParent = &pPermData->m_nParent;
    p_m_boneSphere = &pPermData->m_boneSphere;
    p_m_nFlag = &pPermData->m_nFlag;
    p_m_bonePosParent = &pPermData->m_bonePosParent;
    p_m_boneRotParent = &pPermData->m_boneRotParent;
    v72 = 2LL * (m_Size - 1) + 2;
    v40 = pPermData;
    v41 = 0;
    v42 = v40;
    do
    {
      v65 = CUtlString::Get(&this->m_boneName.m_Memory.m_pMemory[v41 / 2]);
      v66 = v65;
      if ( v65 != 0 )
      {
        v43 = strlen(v65);
        v44 = 0;
        if ( v43 != 0 )
        {
          numBytes = v43 + 1;
          CResourceStream::Align(pResourceStream, 1u, 0);
          v45 = CResourceStream::AllocateBytes(pResourceStream, numBytes);
          v46 = pResourceStream->m_pData;
          v47 = 0;
          v48 = v45 - v46;
          if ( pResourceStream->m_nUsed >= v48 )
            v47 = &v46[v48];
          v44 = memcpy(v47, v66, numBytes);
        }
      }
      else
      {
        v44 = 0;
      }
      v49 = 0;
      if ( v42->m_boneName.m_nOffset != 0 )
        v49 = v42 + v42->m_boneName.m_nOffset;
      v50 = &v49[2 * v41];
      if ( v44 != 0 )
        *v50 = v44 - v50;
      else
        *v50 = 0;
      m_nOffset = v42->m_nParent.m_nOffset;
      v52 = 0;
      if ( m_nOffset != 0 )
        v52 = p_m_nParent + m_nOffset;
      *&v52[v41] = this->m_nParentIndices.m_Memory.m_pMemory[v41 / 2];
      v53 = 0;
      v54 = v42->m_boneSphere.m_nOffset;
      if ( v54 != 0 )
        v53 = p_m_boneSphere + v54;
      *&v53[2 * v41] = this->m_boneSphere.m_Memory.m_pMemory[v41 / 2];
      v55 = 0;
      v56 = v42->m_nFlag.m_nOffset;
      if ( v56 != 0 )
        v55 = p_m_nFlag + v56;
      *&v55[2 * v41] = this->m_nFlag.m_Memory.m_pMemory[v41 / 2];
      v57 = 0;
      v58 = v42->m_bonePosParent.m_nOffset;
      v59 = &this->m_bonePosParent.m_Memory.m_pMemory[v41 / 2];
      if ( v58 != 0 )
        v57 = p_m_bonePosParent + v58;
      v60 = &v57[6 * v41];
      *v60 = v59->x;
      *(v60 + 1) = LODWORD(v59->y);
      *(v60 + 2) = LODWORD(v59->z);
      v61 = 0;
      v62 = v42->m_boneRotParent.m_nOffset;
      v63 = &this->m_boneRotParent.m_Memory.m_pMemory[v41 / 2];
      if ( v62 != 0 )
        v61 = p_m_boneRotParent + v62;
      v64 = &v61[8 * v41];
      v41 += 2LL;
      *v64 = v63->x;
      *(v64 + 1) = LODWORD(v63->y);
      *(v64 + 2) = LODWORD(v63->z);
      *(v64 + 3) = LODWORD(v63->w);
    }
    while ( v41 != v72 );
  }
}


// CModelSkeletonBuilder::FillInRuntimeData  (line 921, @0x0000000003150ef0, libserver.so)  // inlines: Finalize, operator=, operator[]
// calls: CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::SetCount, CUtlVectorBase<short int, CUtlMemory<short int, int> >::SetCount, CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount, CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::SetCount, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount, CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::SetCount, CUtlString::operator=, CModelSkeleton::Finalize, CModelSkeletonBuilder::FixupFlagsAndParents, CModelSkeletonBuilder::SortBoneList
void __fastcall CModelSkeletonBuilder::FillInRuntimeData(CModelSkeletonBuilder *const this, CModelSkeleton *pData)
{
  int m_Size; // ebx
  __int64 v5; // r15
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  Vector *v9; // rdx
  _DWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  _DWORD *v13; // rax
  _DWORD *v14; // rdx

  if ( this->m_nParentIndices.m_Size == 0 )
  {
    CModelSkeletonBuilder::FixupFlagsAndParents(this);
    CModelSkeletonBuilder::SortBoneList(this);
  }
  m_Size = this->m_boneName.m_Size;
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::SetCount(&pData->m_boneName, m_Size);
  CUtlVectorBase<short,CUtlMemory<short,int>>::SetCount(&pData->m_nParent, m_Size);
  CUtlVectorBase<float,CUtlMemory<float,int>>::SetCount(&pData->m_boneSphere, m_Size);
  CUtlVectorBase<CModelSkeleton::BoneFlags_t,CUtlMemory<CModelSkeleton::BoneFlags_t,int>>::SetCount(
    &pData->m_nFlag,
    m_Size);
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::SetCount(&pData->m_bonePosParent, m_Size);
  CUtlVectorBase<Quaternion,CUtlMemory<Quaternion,int>>::SetCount(&pData->m_boneRotParent, m_Size);
  if ( m_Size > 0 )
  {
    v5 = 0;
    v6 = 2LL * (m_Size - 1) + 2;
    v7 = 0;
    do
    {
      CUtlString::operator=(&pData->m_boneName.m_Memory.m_pMemory[v7 / 2], &this->m_boneName.m_Memory.m_pMemory[v7 / 2]);
      pData->m_nParent.m_Memory.m_pMemory[v7 / 2] = this->m_nParentIndices.m_Memory.m_pMemory[v7 / 2];
      pData->m_boneSphere.m_Memory.m_pMemory[v7 / 2] = this->m_boneSphere.m_Memory.m_pMemory[v7 / 2];
      pData->m_nFlag.m_Memory.m_pMemory[v7 / 2] = this->m_nFlag.m_Memory.m_pMemory[v7 / 2];
      v8 = v5 * 12;
      v9 = &this->m_bonePosParent.m_Memory.m_pMemory[v5++];
      v10 = (&pData->m_bonePosParent.m_Memory.m_pMemory->x + v8);
      *v10 = LODWORD(v9->x);
      v10[1] = LODWORD(v9->y);
      v10[2] = LODWORD(v9->z);
      v11 = 8 * v7;
      v7 += 2LL;
      v12 = v11;
      v13 = (&pData->m_boneRotParent.m_Memory.m_pMemory->x + v11);
      v14 = (&this->m_boneRotParent.m_Memory.m_pMemory->x + v12);
      *v13 = *v14;
      v13[1] = v14[1];
      v13[2] = v14[2];
      v13[3] = v14[3];
    }
    while ( v7 != v6 );
  }
  CModelSkeleton::Finalize(pData);
}


// CModelSkeletonBuilder::CompileToPermDataPointer  (line 949, @0x000000000314f950, libserver.so)  // inlines: Allocate<ModelSkeletonData_t>, AllocateUnaligned<ModelSkeletonData_t>, CResourceArray, CResourceArrayBase, CUnlockedResource, Construct<ModelSkeletonData_t>, GetDataPtr, GetPtr, MemAlloc_AllocAlignedFunc, ModelSkeletonData_t, V_memcpy, memcpy, operator ModelSkeletonData_t*
// calls: CResourceStream::Align, CResourceStream::AllocateBytes, CModelSkeletonBuilder::FillInPermData, memcpy, operator new, CResourceStreamVM::CResourceStreamVM, operator delete, _Unwind_Resume
ModelSkeletonData_t *__fastcall CModelSkeletonBuilder::CompileToPermDataPointer(
        CModelSkeletonBuilder *const this,
        CResourceStream *pResourceStream)
{
  char v3; // r12
  CResourceStreamVM *v4; // rbx
  uint m_nUsed; // r14d
  unsigned int Bytes; // eax
  uint8 *m_pData; // rdx
  ModelSkeletonData_t *v8; // rsi
  uint v9; // eax
  bool v10; // zf
  ModelSkeletonData_t *v11; // rdx
  size_t v13; // rdx
  __int64 v14; // rax
  ModelSkeletonData_t *v15; // r12

  v3 = 0;
  v4 = pResourceStream;
  if ( pResourceStream == 0 )
  {
    v4 = operator new(0x28u);
    CResourceStreamVM::CResourceStreamVM(v4, 0x100000u);
    v3 = 1;
  }
  m_nUsed = v4->m_nUsed;
  CResourceStream::Align(v4, 4u, 0);
  Bytes = CResourceStream::AllocateBytes(v4, 0x30u);
  m_pData = v4->m_pData;
  v8 = 0;
  v9 = Bytes - m_pData;
  if ( v4->m_nUsed >= v9 )
  {
    v10 = &m_pData[v9] == 0;
    v11 = &m_pData[v9];
    v8 = v11;
    if ( !v10 )
    {
      v11->m_boneName.m_nOffset = 0;
      v11->m_boneName.m_nCount = 0;
      v11->m_nParent.m_nOffset = 0;
      v11->m_nParent.m_nCount = 0;
      v11->m_boneSphere.m_nOffset = 0;
      v11->m_boneSphere.m_nCount = 0;
      v11->m_nFlag.m_nOffset = 0;
      v11->m_nFlag.m_nCount = 0;
      v11->m_bonePosParent.m_nOffset = 0;
      v11->m_bonePosParent.m_nCount = 0;
      v11->m_boneRotParent.m_nOffset = 0;
      v11->m_boneRotParent.m_nCount = 0;
    }
  }
  CModelSkeletonBuilder::FillInPermData(this, v8, v4);
  if ( v3 == 0 )
    return &v4->m_pData[m_nUsed];
  v13 = v4->m_nUsed;
  if ( v4->m_nUsed != 0 )
  {
    v14 = (**g_pMemAlloc)(g_pMemAlloc, v13 + 23);
    v15 = ((v14 + 23) & 0xFFFFFFFFFFFFFFF0LL);
    v15[-1].m_boneRotParent = v14;
    v13 = v4->m_nUsed;
  }
  else
  {
    v15 = 0;
  }
  memcpy(v15, v4->m_pData, v13);
  (*(v4->_vptr_CResourceStream + 1))(v4);
  return v15;
}


// CModelSkeletonBuilder::SortBoneList  (line 987, @0x000000000314f3f0, libserver.so)  // inlines: Purge, RemoveAll, ~CModelSkeletonSorter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CModelSkeletonSorter::CModelSkeletonSorter, CModelSkeletonSorter::SortBones, CUtlMemory<bool, int>::Purge, CUtlMemory<int, int>::Purge, CModelSkeletonSorter::~CModelSkeletonSorter, _Unwind_Resume
// callers: CModelSkeletonBuilder::Finalize, CModelSkeletonBuilder::FillInPermData, CModelSkeletonBuilder::FillInRuntimeData, CModelBuilder::AppendSkeletonsFromChildResources
void __fastcall CModelSkeletonBuilder::SortBoneList(CModelSkeletonBuilder *const this)
{
  CModelSkeletonSorter sorter; // [rsp+0h] [rbp-70h] BYREF

  CModelSkeletonSorter::CModelSkeletonSorter(&sorter, this);
  CModelSkeletonSorter::SortBones(&sorter);
  sorter.m_addedOldBone.m_Size = 0;
  if ( (sorter.m_addedOldBone.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<bool,int>::Purge(&sorter.m_addedOldBone.m_Memory),
        (sorter.m_addedOldBone.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    sorter.m_mapOldToNew.m_Size = 0;
    if ( (sorter.m_mapOldToNew.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<bool,int>::Purge(&sorter.m_addedOldBone.m_Memory);
    sorter.m_mapOldToNew.m_Size = 0;
    if ( (sorter.m_mapOldToNew.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_3;
  }
  CUtlMemory<int,int>::Purge(&sorter.m_mapOldToNew.m_Memory);
  if ( (sorter.m_mapOldToNew.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&sorter.m_mapOldToNew.m_Memory);
    sorter.m_arrSorted.m_Size = 0;
    if ( (sorter.m_arrSorted.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return;
    goto LABEL_9;
  }
LABEL_3:
  sorter.m_arrSorted.m_Size = 0;
  if ( (sorter.m_arrSorted.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return;
LABEL_9:
  CUtlMemory<int,int>::Purge(&sorter.m_arrSorted.m_Memory);
  if ( (sorter.m_arrSorted.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<int,int>::Purge(&sorter.m_arrSorted.m_Memory);
}


// CModelSkeletonBuilder::GetBoneToWorld  (line 998, @0x0000000003149660, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, GetBonePos, GetBoneRotation, GrowMemory, Purge, RadianEuler, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: SetIdentityMatrix, CModelSkeletonBuilder::FindBoneIndexByHash, CUtlMemory<int, int>::Grow, QuaternionAngles, AngleMatrix, ConcatTransforms_Aligned, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CModelSkeletonBuilder::AppendRenderMeshSkeleton
void __fastcall CModelSkeletonBuilder::GetBoneToWorld(
        const CModelSkeletonBuilder *const this,
        matrix3x4a_t *const mBoneToWorld,
        int nIndex)
{
  __int64 v3; // r14
  int m_nAllocationCount; // edx
  __int64 v6; // r13
  int *v7; // rax
  int BoneIndexByHash; // eax
  int m_Size; // eax
  int v10; // r13d
  __int64 v11; // r14
  __int64 v12; // rdi
  const Vector *v13; // r15
  RadianEuler v15; // [rsp+20h] [rbp-90h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > inclusivePath; // [rsp+30h] [rbp-80h] BYREF
  matrix3x4a_t mLocal; // [rsp+50h] [rbp-60h] BYREF

  v3 = nIndex;
  SetIdentityMatrix(mBoneToWorld);
  inclusivePath.m_Size = 0;
  inclusivePath.m_Memory.m_pMemory = 0;
  inclusivePath.m_Memory.m_nAllocationCount = 0;
  inclusivePath.m_Memory.m_nGrowSize = 0;
  if ( v3 >= 0 )
  {
    m_nAllocationCount = 0;
    v6 = 0;
    while ( 1 )
    {
      m_Size = v6;
      if ( v6 == m_nAllocationCount )
      {
        CUtlMemory<int,int>::Grow(&inclusivePath.m_Memory, 1);
        m_Size = inclusivePath.m_Size;
      }
      inclusivePath.m_Size = m_Size + 1;
      v7 = &inclusivePath.m_Memory.m_pMemory[v6];
      if ( v7 != 0 )
        *v7 = v3;
      BoneIndexByHash = CModelSkeletonBuilder::FindBoneIndexByHash(this, this->m_nParentHash.m_Memory.m_pMemory[v3]);
      v3 = BoneIndexByHash;
      if ( BoneIndexByHash < 0 )
        break;
      v6 = inclusivePath.m_Size;
      m_nAllocationCount = inclusivePath.m_Memory.m_nAllocationCount;
    }
    v10 = inclusivePath.m_Size - 1;
    if ( inclusivePath.m_Size - 1 >= 0 )
    {
      v11 = v10;
      do
      {
        v12 = inclusivePath.m_Memory.m_pMemory[v11];
        v13 = &this->m_bonePosParent.m_Memory.m_pMemory[v12];
        QuaternionAngles(&this->m_boneRotParent.m_Memory.m_pMemory[v12], &v15);
        AngleMatrix(&v15, v13, &mLocal);
        ConcatTransforms_Aligned(mBoneToWorld, &mLocal, mBoneToWorld);
        --v10;
        --v11;
      }
      while ( v10 != -1 );
    }
  }
  inclusivePath.m_Size = 0;
  if ( (inclusivePath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&inclusivePath.m_Memory);
    if ( (inclusivePath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&inclusivePath.m_Memory);
  }
}


// CModelSkeletonSorter::CModelSkeletonSorter  (line 1022, @0x0000000003148ce0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CModelSkeletonBuilder::SortBoneList
void __fastcall CModelSkeletonSorter::CModelSkeletonSorter(
        CModelSkeletonSorter *const this,
        CModelSkeletonBuilder *const skeleton)
{
  this->m_skeleton = skeleton;
  this->m_arrSorted.m_Size = 0;
  this->m_arrSorted.m_Memory.m_pMemory = 0;
  this->m_arrSorted.m_Memory.m_nAllocationCount = 0;
  this->m_arrSorted.m_Memory.m_nGrowSize = 0;
  this->m_mapOldToNew.m_Size = 0;
  this->m_mapOldToNew.m_Memory.m_pMemory = 0;
  this->m_mapOldToNew.m_Memory.m_nAllocationCount = 0;
  this->m_mapOldToNew.m_Memory.m_nGrowSize = 0;
  this->m_addedOldBone.m_Size = 0;
  this->m_addedOldBone.m_Memory.m_pMemory = 0;
  this->m_addedOldBone.m_Memory.m_nAllocationCount = 0;
  this->m_addedOldBone.m_Memory.m_nGrowSize = 0;
}


// CModelSkeletonSorter::GetBoneCount  (line 1027, @0x0000000003148860, libserver.so)
int __fastcall CModelSkeletonSorter::GetBoneCount(const CModelSkeletonSorter *const this)
{
  return this->m_skeleton->m_boneName.m_Size;
}


// CModelSkeletonSorter::IsIdentity  (line 1032, @0x0000000003148870, libserver.so)
// callers: CModelSkeletonSorter::SortBones
bool __fastcall CModelSkeletonSorter::IsIdentity(const CModelSkeletonSorter *const this)
{
  int m_Size; // eax
  __int64 v2; // rdx
  int v3; // ecx

  m_Size = this->m_arrSorted.m_Size;
  v2 = 4LL * m_Size - 4;
  do
  {
    if ( m_Size-- <= 0 )
      return 1;
    v3 = *(this->m_arrSorted.m_Memory.m_pMemory + v2);
    v2 -= 4;
  }
  while ( m_Size == v3 );
  return 0;
}


// CModelSkeletonSorter::SortBones  (line 1042, @0x000000000314eb40, libserver.so)  // inlines: AddMultipleToTail, CUtlMemory, CUtlVector, CUtlVectorBase, EnsureCapacity, GetBoneCount, InsertMultipleBefore, Purge, RemoveAll, RemoveMultipleFromTail, ReorderArray<CModelSkeleton::BoneFlags_t>, ReorderArray<CUtlString>, ReorderArray<float>, ReorderArray<short int>, ReorderArray<unsigned int>, SetCount, Swap, V_swap<CModelSkeleton::BoneFlags_t*>, V_swap<CUtlString*>, V_swap<float*>, V_swap<int>, V_swap<short int*>, V_swap<unsigned int*>, V_swap<unsigned int>, memcpy, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CModelSkeletonSorter::AddAllBones, CModelSkeletonSorter::IsIdentity, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::SetCount, CUtlString::operator=, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll, CModelSkeletonSorter::RemapArray, CUtlVectorBase<short int, CUtlMemory<short int, int> >::SetCount, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount, CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount, CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::SetCount, CModelSkeletonSorter::ReorderArray<Vector> (28 total)
// callers: CModelSkeletonBuilder::SortBoneList
bool __fastcall CModelSkeletonSorter::SortBones(CModelSkeletonSorter *const this)
{
  CModelSkeletonBuilder *m_skeleton; // rax
  int m_Size; // r12d
  int v5; // esi
  uint32 m_nGrowSize; // eax
  int *v7; // rsi
  __int64 v8; // rax
  CModelSkeletonBuilder *v9; // rax
  CModelSkeletonBuilder *v10; // rdx
  int v11; // r13d
  int v12; // r12d
  int v13; // ecx
  __int64 v14; // rax
  int v15; // esi
  CModelSkeletonBuilder *v16; // r14
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 i; // rdx
  uint32 v20; // eax
  CUtlString *v21; // rax
  int v22; // esi
  CModelSkeletonBuilder *v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 j; // rsi
  uint32 v27; // eax
  CUtlString *v28; // rdx
  int v29; // esi
  CModelSkeletonBuilder *v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdi
  int v34; // ecx
  uint32 v35; // eax
  CUtlString *v36; // rdx
  int v37; // esi
  CModelSkeletonBuilder *v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdi
  int v42; // ecx
  uint32 v43; // eax
  CUtlString *v44; // rdx
  int v45; // esi
  CModelSkeletonBuilder *v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdi
  int v50; // ecx
  uint32 v51; // eax
  CUtlString *v52; // rdx
  int *m_pMemory; // r13
  int *v54; // rax
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int> > v55; // [rsp+0h] [rbp-40h] BYREF

  m_skeleton = this->m_skeleton;
  if ( this->m_skeleton->m_boneName.m_Size != 0 )
  {
    this->m_arrSorted.m_Size = 0;
    m_Size = m_skeleton->m_boneName.m_Size;
    v5 = m_Size;
    if ( m_Size > this->m_arrSorted.m_Memory.m_nAllocationCount )
    {
      m_nGrowSize = this->m_arrSorted.m_Memory.m_nGrowSize;
      if ( (m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (m_nGrowSize & 0xC0000000) != 0 )
        {
          m_pMemory = this->m_arrSorted.m_Memory.m_pMemory;
          v54 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * m_Size);
          this->m_arrSorted.m_Memory.m_pMemory = v54;
          if ( m_pMemory != 0 )
            memcpy(v54, m_pMemory, 4LL * this->m_arrSorted.m_Memory.m_nAllocationCount);
          this->m_arrSorted.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          v7 = this->m_arrSorted.m_Memory.m_pMemory;
          v8 = *g_pMemAlloc;
          if ( v7 != 0 )
            this->m_arrSorted.m_Memory.m_pMemory = (*(v8 + 8))(g_pMemAlloc, v7, 4LL * m_Size);
          else
            this->m_arrSorted.m_Memory.m_pMemory = (*v8)(g_pMemAlloc, 4LL * m_Size);
        }
        v9 = this->m_skeleton;
        this->m_arrSorted.m_Memory.m_nAllocationCount = m_Size;
        v5 = v9->m_boneName.m_Size;
      }
    }
    CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&this->m_mapOldToNew, v5);
    v10 = this->m_skeleton;
    v11 = this->m_addedOldBone.m_Size;
    v12 = this->m_skeleton->m_boneName.m_Size - v11;
    if ( v12 > 0 )
    {
      CUtlVectorBase<bool,CUtlMemory<bool,int>>::GrowVector(&this->m_addedOldBone, v12);
      CUtlVectorBase<bool,CUtlMemory<bool,int>>::ShiftElementsRight(&this->m_addedOldBone, v11, v12);
      v13 = this->m_skeleton->m_boneName.m_Size;
    }
    else
    {
      v13 = this->m_skeleton->m_boneName.m_Size;
      if ( v13 != v11 )
      {
        this->m_addedOldBone.m_Size = this->m_skeleton->m_boneName.m_Size;
        v13 = v10->m_boneName.m_Size;
      }
    }
    v14 = 0;
    if ( v13 > 0 )
    {
      do
      {
        this->m_addedOldBone.m_Memory.m_pMemory[v14] = 0;
        this->m_mapOldToNew.m_Memory.m_pMemory[v14++] = -2;
      }
      while ( this->m_skeleton->m_boneName.m_Size > v14 );
    }
    CModelSkeletonSorter::AddAllBones(this);
    if ( !CModelSkeletonSorter::IsIdentity(this) )
    {
      v15 = this->m_arrSorted.m_Size;
      v55.m_Size = 0;
      v16 = this->m_skeleton;
      v55.m_Memory.m_pMemory = 0;
      v55.m_Memory.m_nAllocationCount = 0;
      v55.m_Memory.m_nGrowSize = 0;
      CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::SetCount(&v55, v15);
      if ( this->m_arrSorted.m_Size > 0 )
      {
        v17 = *this->m_arrSorted.m_Memory.m_pMemory;
        if ( v16->m_boneName.m_Size <= v17 )
        {
LABEL_52:
          CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::RemoveAll(&v55);
          if ( (v55.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CUtlString,int>::Purge(&v55.m_Memory);
            if ( (v55.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              goto LABEL_54;
          }
          goto LABEL_22;
        }
        v18 = 1;
        for ( i = 0; ; i = v18++ )
        {
          CUtlString::operator=(&v55.m_Memory.m_pMemory[i], &v16->m_boneName.m_Memory.m_pMemory[v17]);
          if ( this->m_arrSorted.m_Size <= v18 )
            break;
          v17 = this->m_arrSorted.m_Memory.m_pMemory[v18];
          if ( v17 >= v16->m_boneName.m_Size )
            goto LABEL_52;
        }
      }
      v20 = v16->m_boneName.m_Memory.m_nGrowSize;
      v16->m_boneName.m_Memory.m_nGrowSize = v55.m_Memory.m_nGrowSize;
      v55.m_Memory.m_nGrowSize = v20;
      v21 = v16->m_boneName.m_Memory.m_pMemory;
      v16->m_boneName.m_Memory.m_pMemory = v55.m_Memory.m_pMemory;
      v55.m_Memory.m_pMemory = v21;
      LODWORD(v21) = v16->m_boneName.m_Memory.m_nAllocationCount;
      v16->m_boneName.m_Memory.m_nAllocationCount = v55.m_Memory.m_nAllocationCount;
      v55.m_Memory.m_nAllocationCount = v21;
      LODWORD(v21) = v16->m_boneName.m_Size;
      v16->m_boneName.m_Size = v55.m_Size;
      v55.m_Size = v21;
      CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::RemoveAll(&v55);
      if ( (v55.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CUtlString,int>::Purge(&v55.m_Memory);
        if ( (v55.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_54:
          CUtlMemory<CUtlString,int>::Purge(&v55.m_Memory);
      }
LABEL_22:
      CModelSkeletonSorter::RemapArray(this, &this->m_skeleton->m_nParentIndices);
      v22 = this->m_arrSorted.m_Size;
      v23 = this->m_skeleton;
      v55.m_Size = 0;
      v55.m_Memory.m_pMemory = 0;
      v55.m_Memory.m_nAllocationCount = 0;
      v55.m_Memory.m_nGrowSize = 0;
      CUtlVectorBase<short,CUtlMemory<short,int>>::SetCount(&v55, v22);
      if ( this->m_arrSorted.m_Size > 0 )
      {
        v24 = *this->m_arrSorted.m_Memory.m_pMemory;
        if ( v23->m_nParentIndices.m_Size <= v24 )
        {
LABEL_61:
          v55.m_Size = 0;
          if ( (v55.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<short,int>::Purge(&v55.m_Memory);
            if ( (v55.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              goto LABEL_63;
          }
          goto LABEL_29;
        }
        v25 = 1;
        for ( j = 0; ; j = v25++ )
        {
          *(&v55.m_Memory.m_pMemory->m_pString + j) = v23->m_nParentIndices.m_Memory.m_pMemory[v24];
          if ( this->m_arrSorted.m_Size <= v25 )
            break;
          v24 = this->m_arrSorted.m_Memory.m_pMemory[v25];
          if ( v24 >= v23->m_nParentIndices.m_Size )
            goto LABEL_61;
        }
      }
      v27 = v23->m_nParentIndices.m_Memory.m_nGrowSize;
      v23->m_nParentIndices.m_Memory.m_nGrowSize = v55.m_Memory.m_nGrowSize;
      v55.m_Memory.m_nGrowSize = v27;
      v28 = v23->m_nParentIndices.m_Memory.m_pMemory;
      v23->m_nParentIndices.m_Memory.m_pMemory = v55.m_Memory.m_pMemory;
      v55.m_Memory.m_pMemory = v28;
      LODWORD(v28) = v23->m_nParentIndices.m_Memory.m_nAllocationCount;
      v23->m_nParentIndices.m_Memory.m_nAllocationCount = v55.m_Memory.m_nAllocationCount;
      v55.m_Memory.m_nAllocationCount = v28;
      v23->m_nParentIndices.m_Size = v55.m_Size;
      v55.m_Size = 0;
      if ( (v27 & 0xC0000000) == 0 )
      {
        CUtlMemory<short,int>::Purge(&v55.m_Memory);
        if ( (v55.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_63:
          CUtlMemory<short,int>::Purge(&v55.m_Memory);
      }
LABEL_29:
      v29 = this->m_arrSorted.m_Size;
      v55.m_Size = 0;
      v30 = this->m_skeleton;
      v55.m_Memory.m_pMemory = 0;
      v55.m_Memory.m_nAllocationCount = 0;
      v55.m_Memory.m_nGrowSize = 0;
      CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::SetCount(&v55, v29);
      if ( this->m_arrSorted.m_Size > 0 )
      {
        v31 = *this->m_arrSorted.m_Memory.m_pMemory;
        if ( v30->m_nParentHash.m_Size <= v31 )
        {
LABEL_64:
          v55.m_Size = 0;
          if ( (v55.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<unsigned int,int>::Purge(&v55.m_Memory);
            if ( (v55.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              goto LABEL_66;
          }
          goto LABEL_36;
        }
        v32 = 1;
        v33 = 0;
        v34 = 0;
        while ( 1 )
        {
          ++v34;
          *(&v55.m_Memory.m_pMemory->m_pString + v33) = v30->m_nParentHash.m_Memory.m_pMemory[v31];
          if ( v34 >= this->m_arrSorted.m_Size )
            break;
          v31 = this->m_arrSorted.m_Memory.m_pMemory[v32];
          if ( v31 >= v30->m_nParentHash.m_Size )
            goto LABEL_64;
          v33 = v32 * 4;
          ++v32;
        }
      }
      v35 = v30->m_nParentHash.m_Memory.m_nGrowSize;
      v30->m_nParentHash.m_Memory.m_nGrowSize = v55.m_Memory.m_nGrowSize;
      v55.m_Memory.m_nGrowSize = v35;
      v36 = v30->m_nParentHash.m_Memory.m_pMemory;
      v30->m_nParentHash.m_Memory.m_pMemory = v55.m_Memory.m_pMemory;
      v55.m_Memory.m_pMemory = v36;
      LODWORD(v36) = v30->m_nParentHash.m_Memory.m_nAllocationCount;
      v30->m_nParentHash.m_Memory.m_nAllocationCount = v55.m_Memory.m_nAllocationCount;
      v55.m_Memory.m_nAllocationCount = v36;
      v30->m_nParentHash.m_Size = v55.m_Size;
      v55.m_Size = 0;
      if ( (v35 & 0xC0000000) == 0 )
      {
        CUtlMemory<unsigned int,int>::Purge(&v55.m_Memory);
        if ( (v55.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_66:
          CUtlMemory<unsigned int,int>::Purge(&v55.m_Memory);
      }
LABEL_36:
      v37 = this->m_arrSorted.m_Size;
      v55.m_Size = 0;
      v38 = this->m_skeleton;
      v55.m_Memory.m_pMemory = 0;
      v55.m_Memory.m_nAllocationCount = 0;
      v55.m_Memory.m_nGrowSize = 0;
      CUtlVectorBase<float,CUtlMemory<float,int>>::SetCount(&v55, v37);
      if ( this->m_arrSorted.m_Size > 0 )
      {
        v39 = *this->m_arrSorted.m_Memory.m_pMemory;
        if ( v39 >= v38->m_boneSphere.m_Size )
        {
LABEL_55:
          v55.m_Size = 0;
          if ( (v55.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<float,int>::Purge(&v55.m_Memory);
            if ( (v55.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              goto LABEL_57;
          }
          goto LABEL_43;
        }
        v40 = 1;
        v41 = 0;
        v42 = 0;
        while ( 1 )
        {
          ++v42;
          *(&v55.m_Memory.m_pMemory->m_pString + v41) = v38->m_boneSphere.m_Memory.m_pMemory[v39];
          if ( v42 >= this->m_arrSorted.m_Size )
            break;
          v39 = this->m_arrSorted.m_Memory.m_pMemory[v40];
          if ( v39 >= v38->m_boneSphere.m_Size )
            goto LABEL_55;
          v41 = v40 * 4;
          ++v40;
        }
      }
      v43 = v38->m_boneSphere.m_Memory.m_nGrowSize;
      v38->m_boneSphere.m_Memory.m_nGrowSize = v55.m_Memory.m_nGrowSize;
      v55.m_Memory.m_nGrowSize = v43;
      v44 = v38->m_boneSphere.m_Memory.m_pMemory;
      v38->m_boneSphere.m_Memory.m_pMemory = v55.m_Memory.m_pMemory;
      v55.m_Memory.m_pMemory = v44;
      LODWORD(v44) = v38->m_boneSphere.m_Memory.m_nAllocationCount;
      v38->m_boneSphere.m_Memory.m_nAllocationCount = v55.m_Memory.m_nAllocationCount;
      v55.m_Memory.m_nAllocationCount = v44;
      v38->m_boneSphere.m_Size = v55.m_Size;
      v55.m_Size = 0;
      if ( (v43 & 0xC0000000) == 0 )
      {
        CUtlMemory<float,int>::Purge(&v55.m_Memory);
        if ( (v55.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_57:
          CUtlMemory<float,int>::Purge(&v55.m_Memory);
      }
LABEL_43:
      v45 = this->m_arrSorted.m_Size;
      v55.m_Size = 0;
      v46 = this->m_skeleton;
      v55.m_Memory.m_pMemory = 0;
      v55.m_Memory.m_nAllocationCount = 0;
      v55.m_Memory.m_nGrowSize = 0;
      CUtlVectorBase<CModelSkeleton::BoneFlags_t,CUtlMemory<CModelSkeleton::BoneFlags_t,int>>::SetCount(&v55, v45);
      if ( this->m_arrSorted.m_Size <= 0 )
        goto LABEL_49;
      v47 = *this->m_arrSorted.m_Memory.m_pMemory;
      if ( v47 < v46->m_nFlag.m_Size )
      {
        v48 = 1;
        v49 = 0;
        v50 = 0;
        while ( 1 )
        {
          ++v50;
          *(&v55.m_Memory.m_pMemory->m_pString + v49) = v46->m_nFlag.m_Memory.m_pMemory[v47];
          if ( v50 >= this->m_arrSorted.m_Size )
            break;
          v47 = this->m_arrSorted.m_Memory.m_pMemory[v48];
          if ( v47 >= v46->m_nFlag.m_Size )
            goto LABEL_58;
          v49 = v48 * 4;
          ++v48;
        }
LABEL_49:
        v51 = v46->m_nFlag.m_Memory.m_nGrowSize;
        v46->m_nFlag.m_Memory.m_nGrowSize = v55.m_Memory.m_nGrowSize;
        v55.m_Memory.m_nGrowSize = v51;
        v52 = v46->m_nFlag.m_Memory.m_pMemory;
        v46->m_nFlag.m_Memory.m_pMemory = v55.m_Memory.m_pMemory;
        v55.m_Memory.m_pMemory = v52;
        LODWORD(v52) = v46->m_nFlag.m_Memory.m_nAllocationCount;
        v46->m_nFlag.m_Memory.m_nAllocationCount = v55.m_Memory.m_nAllocationCount;
        v55.m_Memory.m_nAllocationCount = v52;
        v46->m_nFlag.m_Size = v55.m_Size;
        v55.m_Size = 0;
        if ( (v51 & 0xC0000000) != 0 )
          goto LABEL_50;
        CUtlMemory<CModelSkeleton::BoneFlags_t,int>::Purge(&v55.m_Memory);
        if ( (v55.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
          goto LABEL_50;
        goto LABEL_60;
      }
LABEL_58:
      v55.m_Size = 0;
      if ( (v55.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CModelSkeleton::BoneFlags_t,int>::Purge(&v55.m_Memory);
        if ( (v55.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
          goto LABEL_50;
LABEL_60:
        CUtlMemory<CModelSkeleton::BoneFlags_t,int>::Purge(&v55.m_Memory);
      }
LABEL_50:
      CModelSkeletonSorter::ReorderArray<Vector>(this, &this->m_skeleton->m_bonePosParent);
      CModelSkeletonSorter::ReorderArray<Quaternion>(this, &this->m_skeleton->m_boneRotParent);
      CModelSkeletonSorter::RemapBones(this, &this->m_skeleton->m_boneDict);
      return 1;
    }
  }
  return 0;
}


// CModelSkeletonSorter::AddAllBones  (line 1091, @0x000000000314b560, libserver.so)
// calls: CModelSkeletonSorter::AddBoneAndItsParents, CModelSkeletonSorter::ChainBoneFlagsToParents, CModelSkeletonSorter::ForceSimBonesToAllLods, CModelSkeletonSorter::PackLodBonesTogether
// callers: CModelSkeletonSorter::SortBones
void __fastcall CModelSkeletonSorter::AddAllBones(CModelSkeletonSorter *const this)
{
  int v2; // ebx
  int m_Size; // r13d
  int v4; // esi

  v2 = 0;
  m_Size = this->m_skeleton->m_boneName.m_Size;
  this->m_nMaxLodMaskEncountered = CModelSkeleton::BoneFlags_t::FLAG_NO_BONE_FLAGS;
  if ( m_Size > 0 )
  {
    do
    {
      v4 = v2++;
      CModelSkeletonSorter::AddBoneAndItsParents(
        this,
        v4,
        CModelSkeleton::BoneFlags_t::FLAG_NO_BONE_FLAGS,
        CModelSkeleton::BoneFlags_t::FLAG_NO_BONE_FLAGS);
    }
    while ( v2 != m_Size );
  }
  CModelSkeletonSorter::ChainBoneFlagsToParents(this);
  CModelSkeletonSorter::ForceSimBonesToAllLods(this);
  CModelSkeletonSorter::PackLodBonesTogether(this);
}


// CModelSkeletonSorter::ForceSimBonesToAllLods  (line 1161, @0x00000000031488c0, libserver.so)  // inlines: AddFlags, GetBoneCount, operator[], operator|, operator|=
// callers: CModelSkeletonSorter::AddAllBones
void __fastcall CModelSkeletonSorter::ForceSimBonesToAllLods(CModelSkeletonSorter *const this)
{
  CModelSkeletonBuilder *m_skeleton; // rcx
  __int64 v2; // rdx
  int i; // eax
  __int64 v4; // rsi

  m_skeleton = this->m_skeleton;
  v2 = 0;
  for ( i = 0; i < this->m_skeleton->m_boneName.m_Size; m_skeleton = this->m_skeleton )
  {
    while ( 1 )
    {
      v4 = this->m_arrSorted.m_Memory.m_pMemory[v2];
      if ( m_skeleton->m_simBones.m_Memory.m_pMemory[v4] )
        break;
      ++i;
      ++v2;
      if ( i >= m_skeleton->m_boneName.m_Size )
        return;
    }
    ++i;
    ++v2;
    m_skeleton->m_nFlag.m_Memory.m_pMemory[v4] |= this->m_nMaxLodMaskEncountered;
  }
}


// CModelSkeletonSorter::PackLodBonesTogether  (line 1180, @0x000000000314b0c0, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyArray, CopyConstruct<int>, Element, EnsureCapacity, EnsureCount, FillWithValue, GetFlags, GrowMemory, InsertMultipleBefore, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CUtlMemory<int, int>::Grow, CUtlVectorBase<bool, CUtlMemory<bool, int> >::GrowVector, CUtlVectorBase<bool, CUtlMemory<bool, int> >::ShiftElementsRight, CUtlMemory<int, int>::Purge, CUtlMemory<bool, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CModelSkeletonSorter::AddAllBones
void __fastcall CModelSkeletonSorter::PackLodBonesTogether(CModelSkeletonSorter *const this)
{
  int m_Size; // r15d
  int v3; // ebx
  int v4; // r13d
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // r13d
  int v8; // r14d
  int *v9; // rax
  __int64 v10; // rbx
  int v11; // r13d
  int v12; // r14d
  int *v13; // rax
  __int64 v14; // rbx
  int v15; // r13d
  int v16; // r14d
  int *v17; // rax
  int *m_pMemory; // rbx
  unsigned __int64 v19; // rax
  int i; // [rsp+10h] [rbp-90h]
  int *v21; // [rsp+20h] [rbp-80h]
  int *nBoneFlag; // [rsp+28h] [rbp-78h]
  int *nBoneFlaga; // [rsp+28h] [rbp-78h]
  CUtlVector<int,CUtlMemory<int,int> > arrClustered; // [rsp+30h] [rbp-70h] BYREF
  CUtlVector<bool,CUtlMemory<bool,int> > arrAdded; // [rsp+50h] [rbp-50h] BYREF

  arrClustered.m_Size = 0;
  m_Size = this->m_arrSorted.m_Size;
  arrClustered.m_Memory.m_pMemory = 0;
  arrClustered.m_Memory.m_nAllocationCount = 0;
  arrClustered.m_Memory.m_nGrowSize = 0;
  arrAdded.m_Size = 0;
  arrAdded.m_Memory.m_pMemory = 0;
  arrAdded.m_Memory.m_nAllocationCount = 0;
  arrAdded.m_Memory.m_nGrowSize = 0;
  if ( m_Size > 0 )
  {
    v3 = arrAdded.m_Size;
    arrClustered.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 4LL * m_Size);
    arrClustered.m_Memory.m_nAllocationCount = m_Size;
    v4 = m_Size - arrAdded.m_Size;
    CUtlVectorBase<bool,CUtlMemory<bool,int>>::GrowVector(&arrAdded, m_Size - arrAdded.m_Size);
    CUtlVectorBase<bool,CUtlMemory<bool,int>>::ShiftElementsRight(&arrAdded, v3, v4);
    if ( arrAdded.m_Size > 0 )
    {
      v5 = 0;
      do
        arrAdded.m_Memory.m_pMemory[v5++] = 0;
      while ( arrAdded.m_Size > v5 );
    }
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = this->m_arrSorted.m_Memory.m_pMemory[v6];
        if ( !arrAdded.m_Memory.m_pMemory[v6] && this->m_skeleton->m_simBones.m_Memory.m_pMemory[v7] )
          break;
        if ( m_Size <= ++v6 )
          goto LABEL_14;
      }
      v8 = arrClustered.m_Size;
      nBoneFlag = &this->m_mapOldToNew.m_Memory.m_pMemory[v7];
      if ( arrClustered.m_Size == arrClustered.m_Memory.m_nAllocationCount )
        CUtlMemory<int,int>::Grow(&arrClustered.m_Memory, 1);
      ++arrClustered.m_Size;
      v9 = &arrClustered.m_Memory.m_pMemory[v8];
      if ( v9 != 0 )
        *v9 = v7;
      *nBoneFlag = v8;
      arrAdded.m_Memory.m_pMemory[v6++] = 1;
    }
    while ( m_Size > v6 );
  }
LABEL_14:
  for ( i = 17; i != 9; --i )
  {
    while ( m_Size <= 0 )
    {
      if ( --i == 9 )
        goto LABEL_35;
    }
    v10 = 0;
    do
    {
      v11 = this->m_arrSorted.m_Memory.m_pMemory[v10];
      if ( !arrAdded.m_Memory.m_pMemory[v10] && (this->m_skeleton->m_nFlag.m_Memory.m_pMemory[v11] & (1 << i)) != 0 )
      {
        v12 = arrClustered.m_Size;
        v21 = &this->m_mapOldToNew.m_Memory.m_pMemory[v11];
        if ( arrClustered.m_Size == arrClustered.m_Memory.m_nAllocationCount )
          CUtlMemory<int,int>::Grow(&arrClustered.m_Memory, 1);
        ++arrClustered.m_Size;
        v13 = &arrClustered.m_Memory.m_pMemory[v12];
        if ( v13 != 0 )
          *v13 = v11;
        *v21 = v12;
        arrAdded.m_Memory.m_pMemory[v10] = 1;
      }
      ++v10;
    }
    while ( m_Size > v10 );
  }
  v14 = 0;
  do
  {
    v15 = this->m_arrSorted.m_Memory.m_pMemory[v14];
    if ( !arrAdded.m_Memory.m_pMemory[v14] && (this->m_skeleton->m_nFlag.m_Memory.m_pMemory[v15] & 0x3FC00) == 0 )
    {
      v16 = arrClustered.m_Size;
      nBoneFlaga = &this->m_mapOldToNew.m_Memory.m_pMemory[v15];
      if ( arrClustered.m_Size == arrClustered.m_Memory.m_nAllocationCount )
        CUtlMemory<int,int>::Grow(&arrClustered.m_Memory, 1);
      ++arrClustered.m_Size;
      v17 = &arrClustered.m_Memory.m_pMemory[v16];
      if ( v17 != 0 )
        *v17 = v15;
      *nBoneFlaga = v16;
    }
    ++v14;
  }
  while ( m_Size > v14 );
LABEL_35:
  m_pMemory = arrClustered.m_Memory.m_pMemory;
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&this->m_arrSorted, arrClustered.m_Size);
  if ( arrClustered.m_Size > 0 )
  {
    v19 = 0;
    do
    {
      this->m_arrSorted.m_Memory.m_pMemory[v19 / 4] = m_pMemory[v19 / 4];
      v19 += 4LL;
    }
    while ( v19 != 4LL * (arrClustered.m_Size - 1) + 4 );
  }
  arrAdded.m_Size = 0;
  if ( (arrAdded.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<bool,int>::Purge(&arrAdded.m_Memory);
    if ( (arrAdded.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<bool,int>::Purge(&arrAdded.m_Memory);
  }
  if ( (arrClustered.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&arrClustered.m_Memory);
    if ( (arrClustered.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&arrClustered.m_Memory);
  }
}


// CModelSkeletonSorter::ChainBoneFlagsToParents  (line 1240, @0x0000000003148920, libserver.so)  // inlines: GetBoneCount, GetParent, operator&, operator[], operator|, operator|=
// callers: CModelSkeletonSorter::AddAllBones
void __fastcall CModelSkeletonSorter::ChainBoneFlagsToParents(CModelSkeletonSorter *const this)
{
  CModelSkeletonBuilder *m_skeleton; // rdx
  int v2; // ecx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r9
  CModelSkeleton::BoneFlags_t *v5; // r8
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rsi
  bool *m_pMemory; // r8
  CModelSkeleton::BoneFlags_t *v10; // rcx

  m_skeleton = this->m_skeleton;
  v2 = this->m_skeleton->m_boneName.m_Size - 1;
  if ( v2 >= 0 )
  {
    v3 = 4LL * v2;
    v4 = 4 * (v2 - v2);
    while ( 1 )
    {
      v7 = this->m_arrSorted.m_Memory.m_pMemory[v3 / 4];
      v8 = m_skeleton->m_nParentIndices.m_Memory.m_pMemory[v7];
      if ( (v8 & 0x8000u) != 0LL )
        goto LABEL_4;
      m_pMemory = m_skeleton->m_simBones.m_Memory.m_pMemory;
      if ( m_pMemory[v7] )
      {
        m_pMemory[v8] = 1;
        m_skeleton = this->m_skeleton;
      }
      v5 = m_skeleton->m_nFlag.m_Memory.m_pMemory;
      v6 = v5[v7] & 0x3FC00;
      if ( v6 == 0 || (v10 = &v5[v8], v6 == (*v10 & 0x3FC00)) )
      {
LABEL_4:
        if ( v3 == v4 )
          return;
      }
      else
      {
        *v10 |= v6;
        if ( v3 == v4 )
          return;
      }
      m_skeleton = this->m_skeleton;
      v3 -= 4LL;
    }
  }
}


// CModelSkeletonSorter::AddBoneAndItsParents  (line 1272, @0x0000000003149550, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GetFlags, GetParent, GrowMemory, operator&, operator[]
// calls: CModelSkeletonBuilder::GetBoneNameByIndex, CUtlMemory<int, int>::Grow
// callers: CModelSkeletonSorter::AddAllBones
void __fastcall CModelSkeletonSorter::AddBoneAndItsParents(
        CModelSkeletonSorter *const this,
        int nOldBone,
        CModelSkeleton::BoneFlags_t nFlagMask,
        CModelSkeleton::BoneFlags_t nFlagEq)
{
  __int64 v5; // r12
  bool *v7; // rax
  __int64 v8; // rax
  int v9; // r14d
  int m_Size; // r14d
  int v11; // eax
  int *v12; // rax
  CModelSkeleton::BoneFlags_t m_nMaxLodMaskEncountered; // eax

  v5 = nOldBone;
  v7 = &this->m_addedOldBone.m_Memory.m_pMemory[nOldBone];
  if ( !*v7 && nFlagEq == (nFlagMask & this->m_skeleton->m_nFlag.m_Memory.m_pMemory[nOldBone]) )
  {
    *v7 = 1;
    v8 = this->m_skeleton->m_nParentIndices.m_Memory.m_pMemory[nOldBone];
    v9 = v8;
    if ( (v8 & 0x8000u) == 0LL && !this->m_addedOldBone.m_Memory.m_pMemory[v8] )
    {
      CModelSkeletonBuilder::GetBoneNameByIndex(this->m_skeleton, nOldBone);
      CModelSkeletonBuilder::GetBoneNameByIndex(this->m_skeleton, v9);
      CModelSkeletonSorter::AddBoneAndItsParents(this, v9, nFlagMask, nFlagEq);
    }
    m_Size = this->m_arrSorted.m_Size;
    v11 = m_Size;
    if ( m_Size == this->m_arrSorted.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<int,int>::Grow(&this->m_arrSorted.m_Memory, 1);
      v11 = this->m_arrSorted.m_Size;
    }
    this->m_arrSorted.m_Size = v11 + 1;
    v12 = &this->m_arrSorted.m_Memory.m_pMemory[m_Size];
    if ( v12 != 0 )
      *v12 = nOldBone;
    this->m_mapOldToNew.m_Memory.m_pMemory[v5] = m_Size;
    m_nMaxLodMaskEncountered = this->m_skeleton->m_nFlag.m_Memory.m_pMemory[v5] & 0x3FC00;
    if ( m_nMaxLodMaskEncountered < this->m_nMaxLodMaskEncountered )
      m_nMaxLodMaskEncountered = this->m_nMaxLodMaskEncountered;
    this->m_nMaxLodMaskEncountered = m_nMaxLodMaskEncountered;
  }
}


// CModelSkeletonSorter::ReorderArray<Vector>  (line 1295, @0x0000000003152900, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, Swap, V_swap<Vector*>, V_swap<int>, V_swap<unsigned int>, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CUtlMemory<Vector, int>::Purge, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CModelSkeletonSorter::SortBones
void __fastcall CModelSkeletonSorter::ReorderArray<Vector>(
        CModelSkeletonSorter *const this,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *const arr)
{
  int m_Size; // esi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 i; // rsi
  Vector *v8; // rcx
  Vector *v9; // rdx
  uint32 m_nGrowSize; // eax
  Vector *m_pMemory; // rax
  CUtlVector<Vector,CUtlMemory<Vector,int> > mapped; // [rsp+0h] [rbp-40h] BYREF

  mapped.m_Size = 0;
  m_Size = this->m_arrSorted.m_Size;
  mapped.m_Memory.m_pMemory = 0;
  mapped.m_Memory.m_nAllocationCount = 0;
  mapped.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::SetCount(&mapped, m_Size);
  if ( this->m_arrSorted.m_Size > 0 )
  {
    v5 = *this->m_arrSorted.m_Memory.m_pMemory;
    if ( arr->m_Size <= v5 )
    {
LABEL_9:
      CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&mapped);
      if ( (mapped.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<Vector,int>::Purge(&mapped.m_Memory);
        if ( (mapped.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          goto LABEL_13;
      }
      return;
    }
    v6 = 1;
    for ( i = 0; ; i = v6++ )
    {
      v8 = &arr->m_Memory.m_pMemory[v5];
      v9 = &mapped.m_Memory.m_pMemory[i];
      v9->x = v8->x;
      v9->y = v8->y;
      v9->z = v8->z;
      if ( this->m_arrSorted.m_Size <= v6 )
        break;
      v5 = this->m_arrSorted.m_Memory.m_pMemory[v6];
      if ( v5 >= arr->m_Size )
        goto LABEL_9;
    }
  }
  m_nGrowSize = arr->m_Memory.m_nGrowSize;
  arr->m_Memory.m_nGrowSize = mapped.m_Memory.m_nGrowSize;
  mapped.m_Memory.m_nGrowSize = m_nGrowSize;
  m_pMemory = arr->m_Memory.m_pMemory;
  arr->m_Memory.m_pMemory = mapped.m_Memory.m_pMemory;
  mapped.m_Memory.m_pMemory = m_pMemory;
  LODWORD(m_pMemory) = arr->m_Memory.m_nAllocationCount;
  arr->m_Memory.m_nAllocationCount = mapped.m_Memory.m_nAllocationCount;
  mapped.m_Memory.m_nAllocationCount = m_pMemory;
  LODWORD(m_pMemory) = arr->m_Size;
  arr->m_Size = mapped.m_Size;
  mapped.m_Size = m_pMemory;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&mapped);
  if ( (mapped.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&mapped.m_Memory);
    if ( (mapped.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_13:
      CUtlMemory<Vector,int>::Purge(&mapped.m_Memory);
  }
}


// CModelSkeletonSorter::ReorderArray<Quaternion>  (line 1295, @0x0000000003152be0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, Swap, V_swap<Quaternion*>, V_swap<int>, V_swap<unsigned int>, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::SetCount, CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll, CUtlMemory<Quaternion, int>::Purge, CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CModelSkeletonSorter::SortBones
void __fastcall CModelSkeletonSorter::ReorderArray<Quaternion>(
        CModelSkeletonSorter *const this,
        CUtlVector<Quaternion,CUtlMemory<Quaternion,int> > *const arr)
{
  int m_Size; // esi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 i; // rdx
  Quaternion *v8; // rax
  Quaternion *v9; // rdx
  uint32 m_nGrowSize; // eax
  Quaternion *m_pMemory; // rax
  CUtlVector<Quaternion,CUtlMemory<Quaternion,int> > mapped; // [rsp+0h] [rbp-40h] BYREF

  mapped.m_Size = 0;
  m_Size = this->m_arrSorted.m_Size;
  mapped.m_Memory.m_pMemory = 0;
  mapped.m_Memory.m_nAllocationCount = 0;
  mapped.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<Quaternion,CUtlMemory<Quaternion,int>>::SetCount(&mapped, m_Size);
  if ( this->m_arrSorted.m_Size > 0 )
  {
    v5 = *this->m_arrSorted.m_Memory.m_pMemory;
    if ( arr->m_Size <= v5 )
    {
LABEL_9:
      CUtlVectorBase<Quaternion,CUtlMemory<Quaternion,int>>::RemoveAll(&mapped);
      if ( (mapped.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<Quaternion,int>::Purge(&mapped.m_Memory);
        if ( (mapped.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          goto LABEL_13;
      }
      return;
    }
    v6 = 1;
    for ( i = 0; ; i = v6++ )
    {
      v8 = &arr->m_Memory.m_pMemory[v5];
      v9 = &mapped.m_Memory.m_pMemory[i];
      v9->x = v8->x;
      v9->y = v8->y;
      v9->z = v8->z;
      v9->w = v8->w;
      if ( this->m_arrSorted.m_Size <= v6 )
        break;
      v5 = this->m_arrSorted.m_Memory.m_pMemory[v6];
      if ( v5 >= arr->m_Size )
        goto LABEL_9;
    }
  }
  m_nGrowSize = arr->m_Memory.m_nGrowSize;
  arr->m_Memory.m_nGrowSize = mapped.m_Memory.m_nGrowSize;
  mapped.m_Memory.m_nGrowSize = m_nGrowSize;
  m_pMemory = arr->m_Memory.m_pMemory;
  arr->m_Memory.m_pMemory = mapped.m_Memory.m_pMemory;
  mapped.m_Memory.m_pMemory = m_pMemory;
  LODWORD(m_pMemory) = arr->m_Memory.m_nAllocationCount;
  arr->m_Memory.m_nAllocationCount = mapped.m_Memory.m_nAllocationCount;
  mapped.m_Memory.m_nAllocationCount = m_pMemory;
  LODWORD(m_pMemory) = arr->m_Size;
  arr->m_Size = mapped.m_Size;
  mapped.m_Size = m_pMemory;
  CUtlVectorBase<Quaternion,CUtlMemory<Quaternion,int>>::RemoveAll(&mapped);
  if ( (mapped.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Quaternion,int>::Purge(&mapped.m_Memory);
    if ( (mapped.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_13:
      CUtlMemory<Quaternion,int>::Purge(&mapped.m_Memory);
  }
}


// CModelSkeletonSorter::RemapArray  (line 1316, @0x00000000031489e0, libserver.so)  // inlines: operator[]
// callers: CModelSkeletonSorter::SortBones
void __fastcall CModelSkeletonSorter::RemapArray(
        CModelSkeletonSorter *const this,
        CUtlVector<short int,CUtlMemory<short int,int> > *const arr)
{
  __int64 v2; // rdx
  int i; // eax
  __int16 *v4; // rcx
  __int64 v5; // r8

  v2 = 0;
  for ( i = 0; this->m_arrSorted.m_Size > i; ++v2 )
  {
    v4 = &arr->m_Memory.m_pMemory[v2];
    v5 = *v4;
    if ( (v5 & 0x8000u) == 0LL )
      *v4 = this->m_mapOldToNew.m_Memory.m_pMemory[v5];
    ++i;
  }
}


// CModelSkeletonSorter::RemapBones  (line 1330, @0x000000000314e640, libserver.so)  // inlines: AddToTail, BoneDict_t, BuildHandle, CopyConstruct<BoneHashPairing_t>, Destruct<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> > >, DoFind, Element, GetBucketIndex, GetFirstHandle, GetKeyDataIndex, GetNextHandle, GrowMemory, Insert, IsValidHandle, Purge, RemoveAll, Swap, V_swap<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >*>, V_swap<bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&)>, V_swap<bool>, V_swap<int>, V_swap<unsigned int (*)(const BoneHashPairing_t&)>, V_swap<unsigned int>, operator[], ~BoneDict_t, ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHashPairing_t&)>::CUtlHash, CUtlMemory<BoneHashPairing_t, int>::Purge, CUtlMemory<BoneHashPairing_t, int>::Grow, CUtlMemory<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >, int>::Purge, CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHashPairing_t&)>::Purge, CUtlVectorBase<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >, CUtlMemory<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CModelSkeletonSorter::SortBones
// globals: BoneHashPairing_KeyFunc(BoneHashPairing_t const&), BoneHashPairing_CompareFunc(BoneHashPairing_t const&,BoneHashPairing_t const&)
void __fastcall CModelSkeletonSorter::RemapBones(
        CModelSkeletonSorter *const this,
        CUtlHash<BoneHashPairing_t,bool (*)(const BoneHashPairing_t&,const BoneHashPairing_t&),unsigned int (*)(const BoneHashPairing_t&)> *const map)
{
  int m_Size; // ecx
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *m_pMemory; // rsi
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v5; // rdx
  int v6; // eax
  uint32 m_nGrowSize; // edx
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v8; // rax
  int m_nAllocationCount; // edx
  bool (*m_CompareFunc)(const BoneHashPairing_t *, const BoneHashPairing_t *); // rdx
  bool (*v11)(const BoneHashPairing_t *, const BoneHashPairing_t *); // rax
  unsigned int (*m_KeyFunc)(const BoneHashPairing_t *); // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // r12
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v15; // rsi
  bool v16; // zf
  int v17; // ebx
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v18; // rax
  unsigned int v19; // eax
  signed int v20; // edx
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v21; // r15
  int v22; // r14d
  __int64 v23; // rbx
  int v24; // r12d
  int v25; // r8d
  signed int v26; // eax
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v27; // rdx
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v28; // rbx
  __int64 v29; // r12
  int v30; // eax
  BoneHashPairing_t *v31; // rax
  __int64 j; // r13
  char *v33; // r12
  int v34; // r12d
  unsigned __int64 v35; // rbx
  __int64 v36; // r12
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v37; // rax
  __int64 i; // r13
  char *v39; // rbx
  __int64 v40; // [rsp+10h] [rbp-90h]
  UtlHashHandle_t h; // [rsp+24h] [rbp-7Ch]
  BoneHashPairing_t pairing; // [rsp+30h] [rbp-70h] BYREF
  CModelSkeleton::BoneDict_t mapped; // [rsp+40h] [rbp-60h] BYREF

  CUtlHash<BoneHashPairing_t,bool (*)(BoneHashPairing_t const&,BoneHashPairing_t const&),unsigned int (*)(BoneHashPairing_t const&)>::CUtlHash(
    &mapped,
    32,
    0,
    0,
    BoneHashPairing_CompareFunc,
    BoneHashPairing_KeyFunc);
  m_Size = map->m_Buckets.m_Size;
  m_pMemory = map->m_Buckets.m_Memory.m_pMemory;
  if ( map->m_Buckets.m_Size <= 0 )
  {
LABEL_6:
    h = -1;
    goto LABEL_7;
  }
  v5 = m_pMemory + 1;
  v6 = 0;
  if ( m_pMemory->m_Size <= 0 )
  {
    while ( ++v6 != m_Size )
    {
      ++v5;
      if ( v5[-1].m_Size > 0 )
      {
        h = v6 << 16;
        goto LABEL_7;
      }
    }
    goto LABEL_6;
  }
  h = 0;
LABEL_7:
  while ( HIWORD(h) < m_Size )
  {
    v18 = &m_pMemory[HIWORD(h)];
    if ( h >= v18->m_Size )
      break;
    pairing = v18->m_Memory.m_pMemory[h];
    if ( pairing.m_nBoneIndex >= this->m_mapOldToNew.m_Size )
    {
      v34 = mapped.m_Buckets.m_Size;
      if ( mapped.m_Buckets.m_Size > 0 )
      {
        v35 = 0;
        v36 = 8 * (3LL * (mapped.m_Buckets.m_Size - 1) + 3);
        do
        {
          while ( 1 )
          {
            v37 = &mapped.m_Buckets.m_Memory.m_pMemory[v35 / 0x18];
            v16 = (mapped.m_Buckets.m_Memory.m_pMemory[v35 / 0x18].m_Memory.m_nGrowSize & 0xC0000000) == 0;
            mapped.m_Buckets.m_Memory.m_pMemory[v35 / 0x18].m_Size = 0;
            if ( v16 )
              break;
            v35 += 24LL;
            if ( v35 == v36 )
              goto LABEL_53;
          }
          v35 += 24LL;
          CUtlMemory<BoneHashPairing_t,int>::Purge(&v37->m_Memory);
        }
        while ( v35 != v36 );
LABEL_53:
        v34 = mapped.m_Buckets.m_Size;
      }
      for ( i = 24LL * v34 - 24; --v34 >= 0; i -= 24 )
      {
        v39 = mapped.m_Buckets.m_Memory.m_pMemory + i;
        v16 = (*(&mapped.m_Buckets.m_Memory.m_pMemory->m_Memory.m_nGrowSize + i) & 0xC0000000) == 0;
        *(&mapped.m_Buckets.m_Memory.m_pMemory->m_Size + i) = 0;
        if ( v16 )
        {
          CUtlMemory<BoneHashPairing_t,int>::Purge((v39 + 8));
          if ( (*(v39 + 5) & 0xC0000000) == 0 )
            CUtlMemory<BoneHashPairing_t,int>::Purge((v39 + 8));
        }
      }
      mapped.m_Buckets.m_Size = 0;
      if ( (mapped.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int>>,int>::Purge(&mapped.m_Buckets.m_Memory);
        if ( (mapped.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          goto LABEL_62;
      }
      return;
    }
    pairing.m_nBoneIndex = this->m_mapOldToNew.m_Memory.m_pMemory[pairing.m_nBoneIndex];
    v19 = mapped.m_KeyFunc(&pairing);
    if ( mapped.m_bPowerOfTwo )
      v20 = mapped.m_ModMask & v19;
    else
      v20 = v19 % mapped.m_Buckets.m_Size;
    v40 = v20;
    v21 = &mapped.m_Buckets.m_Memory.m_pMemory[v40];
    v22 = mapped.m_Buckets.m_Memory.m_pMemory[v40].m_Size;
    if ( v22 <= 0 )
    {
      v24 = 0;
    }
    else
    {
      v23 = 0;
      do
      {
        v24 = v23;
        if ( mapped.m_CompareFunc(&v21->m_Memory.m_pMemory[v23], &pairing) )
          break;
        v24 = ++v23;
      }
      while ( v22 > v23 );
    }
    if ( v22 == v24 )
    {
      v28 = &mapped.m_Buckets.m_Memory.m_pMemory[v40];
      v29 = mapped.m_Buckets.m_Memory.m_pMemory[v40].m_Size;
      if ( v29 == mapped.m_Buckets.m_Memory.m_pMemory[v40].m_Memory.m_nAllocationCount )
      {
        CUtlMemory<BoneHashPairing_t,int>::Grow(&v28->m_Memory, 1);
        v30 = v28->m_Size;
      }
      else
      {
        v30 = mapped.m_Buckets.m_Memory.m_pMemory[v40].m_Size;
      }
      v28->m_Size = v30 + 1;
      v31 = &v28->m_Memory.m_pMemory[v29];
      if ( v31 != 0 )
        *v31 = pairing;
    }
    m_Size = map->m_Buckets.m_Size;
    m_pMemory = map->m_Buckets.m_Memory.m_pMemory;
    v25 = (h + 1);
    v26 = (h + 1) >> 16;
    if ( v26 >= map->m_Buckets.m_Size )
    {
LABEL_29:
      h = -1;
    }
    else
    {
      v27 = &m_pMemory[v26 + 1];
      if ( m_pMemory[v26].m_Size <= v25 )
      {
        while ( ++v26 != m_Size )
        {
          ++v27;
          if ( v27[-1].m_Size > 0 )
          {
            v25 = 0;
            goto LABEL_32;
          }
        }
        goto LABEL_29;
      }
LABEL_32:
      h = v25 | (v26 << 16);
    }
  }
  m_nGrowSize = mapped.m_Buckets.m_Memory.m_nGrowSize;
  mapped.m_Buckets.m_Memory.m_nGrowSize = map->m_Buckets.m_Memory.m_nGrowSize;
  v8 = mapped.m_Buckets.m_Memory.m_pMemory;
  map->m_Buckets.m_Memory.m_nGrowSize = m_nGrowSize;
  m_nAllocationCount = mapped.m_Buckets.m_Memory.m_nAllocationCount;
  mapped.m_Buckets.m_Memory.m_pMemory = m_pMemory;
  map->m_Buckets.m_Memory.m_pMemory = v8;
  LODWORD(v8) = map->m_Buckets.m_Memory.m_nAllocationCount;
  map->m_Buckets.m_Memory.m_nAllocationCount = m_nAllocationCount;
  m_CompareFunc = mapped.m_CompareFunc;
  mapped.m_Buckets.m_Memory.m_nAllocationCount = v8;
  LODWORD(v8) = mapped.m_Buckets.m_Size;
  mapped.m_Buckets.m_Size = m_Size;
  map->m_Buckets.m_Size = v8;
  v11 = map->m_CompareFunc;
  map->m_CompareFunc = m_CompareFunc;
  mapped.m_CompareFunc = v11;
  m_KeyFunc = map->m_KeyFunc;
  map->m_KeyFunc = mapped.m_KeyFunc;
  mapped.m_KeyFunc = m_KeyFunc;
  LOBYTE(m_KeyFunc) = map->m_bPowerOfTwo;
  map->m_bPowerOfTwo = mapped.m_bPowerOfTwo;
  mapped.m_bPowerOfTwo = m_KeyFunc;
  LODWORD(m_KeyFunc) = map->m_ModMask;
  map->m_ModMask = mapped.m_ModMask;
  mapped.m_ModMask = m_KeyFunc;
  if ( m_Size <= 0 )
  {
    v17 = m_Size;
    goto LABEL_38;
  }
  v13 = 0;
  v14 = 8 * (3LL * (m_Size - 1) + 3);
  while ( 2 )
  {
    v15 = &m_pMemory[v13 / 0x18];
    v16 = (v15->m_Memory.m_nGrowSize & 0xC0000000) == 0;
    v15->m_Size = 0;
    if ( !v16 )
    {
      v13 += 24LL;
      if ( v13 == v14 )
        break;
      goto LABEL_11;
    }
    v13 += 24LL;
    CUtlMemory<BoneHashPairing_t,int>::Purge(&v15->m_Memory);
    if ( v13 != v14 )
    {
LABEL_11:
      m_pMemory = mapped.m_Buckets.m_Memory.m_pMemory;
      continue;
    }
    break;
  }
  v17 = mapped.m_Buckets.m_Size;
LABEL_38:
  for ( j = 24LL * v17 - 24; --v17 >= 0; j -= 24 )
  {
    v33 = mapped.m_Buckets.m_Memory.m_pMemory + j;
    v16 = (*(&mapped.m_Buckets.m_Memory.m_pMemory->m_Memory.m_nGrowSize + j) & 0xC0000000) == 0;
    *(&mapped.m_Buckets.m_Memory.m_pMemory->m_Size + j) = 0;
    if ( v16 )
    {
      CUtlMemory<BoneHashPairing_t,int>::Purge((v33 + 8));
      if ( (*(v33 + 5) & 0xC0000000) == 0 )
        CUtlMemory<BoneHashPairing_t,int>::Purge((v33 + 8));
    }
  }
  mapped.m_Buckets.m_Size = 0;
  if ( (mapped.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int>>,int>::Purge(&mapped.m_Buckets.m_Memory);
    if ( (mapped.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_62:
      CUtlMemory<CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int>>,int>::Purge(&mapped.m_Buckets.m_Memory);
  }
}


// CModelBuilder::CModelBuilder  (line 1350, @0x000000000314de40, libserver.so)  // inlines: CBuilderModelInfo, CStrongHandle, CUtlMemory, CUtlString, CUtlStringMap, CUtlVector, CUtlVectorBase, Init, ~CStrongHandle, ~CUtlString, ~CUtlVector
// calls: CModelSkeletonBuilder::CModelSkeletonBuilder, CMemAllocSystemInitialize, CUtlSymbolTable::CUtlSymbolTable, CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::~CUtlVectorBase, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase, CUtlVectorBase<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >::~CUtlVectorBase, CUtlVectorBase<CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>, CUtlMemory<CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>, int> >::~CUtlVectorBase, CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown, CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase, CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase, CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVectorBase, CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int> >::~CUtlVectorBase (18 total)
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel
void __fastcall CModelBuilder::CModelBuilder(CModelBuilder *const this)
{
  __int64 v2; // rdi

  this->m_name.m_pString = 0;
  this->m_modelInfo.m_sSurfaceProperty.m_pString = 0;
  this->m_modelInfo.m_keyValueText.m_pString = 0;
  this->m_modelInfo.m_nInherentFlags = ModelFlags_t::MODEL_FLAG_NONE;
  this->m_modelInfo.m_vHullMin.x = 0.0;
  this->m_modelInfo.m_vHullMin.y = 0.0;
  this->m_modelInfo.m_vHullMin.z = 0.0;
  this->m_modelInfo.m_vHullMax.x = 0.0;
  this->m_modelInfo.m_vHullMax.y = 0.0;
  this->m_modelInfo.m_vHullMax.z = 0.0;
  this->m_modelInfo.m_vViewMin.x = 0.0;
  this->m_modelInfo.m_vViewMin.y = 0.0;
  this->m_modelInfo.m_vViewMin.z = 0.0;
  this->m_modelInfo.m_vViewMax.x = 0.0;
  this->m_modelInfo.m_vViewMax.y = 0.0;
  this->m_modelInfo.m_vViewMax.z = 0.0;
  this->m_modelInfo.m_flMass = 0.0;
  this->m_modelInfo.m_vEyePosition.x = 0.0;
  this->m_modelInfo.m_vEyePosition.y = 0.0;
  this->m_modelInfo.m_vEyePosition.z = 0.0;
  this->m_modelInfo.m_flMaxEyeDeflection = 0.0;
  this->m_ExtParts.m_Size = 0;
  this->m_ExtParts.m_Memory.m_pMemory = 0;
  this->m_ExtParts.m_Memory.m_nAllocationCount = 0;
  this->m_ExtParts.m_Memory.m_nGrowSize = 0;
  this->m_refMeshes.m_Size = 0;
  this->m_refMeshes.m_Memory.m_pMemory = 0;
  this->m_refMeshes.m_Memory.m_nAllocationCount = 0;
  this->m_refMeshes.m_Memory.m_nGrowSize = 0;
  this->m_refMeshGroupMasks.m_Size = 0;
  this->m_refMeshGroupMasks.m_Memory.m_pMemory = 0;
  this->m_refMeshGroupMasks.m_Memory.m_nAllocationCount = 0;
  this->m_refMeshGroupMasks.m_Memory.m_nGrowSize = 0;
  this->m_refLODGroupMasks.m_Size = 0;
  this->m_refLODGroupMasks.m_Memory.m_pMemory = 0;
  this->m_refLODGroupMasks.m_Memory.m_nAllocationCount = 0;
  this->m_refLODGroupMasks.m_Memory.m_nGrowSize = 0;
  this->m_lodGroupSwitchDistances.m_Size = 0;
  this->m_lodGroupSwitchDistances.m_Memory.m_pMemory = 0;
  this->m_lodGroupSwitchDistances.m_Memory.m_nAllocationCount = 0;
  this->m_lodGroupSwitchDistances.m_Memory.m_nGrowSize = 0;
  this->m_refPhysicsData.m_pBinding = 0;
  this->m_refAnimGroups.m_Size = 0;
  this->m_refAnimGroups.m_Memory.m_pMemory = 0;
  this->m_refAnimGroups.m_Memory.m_nAllocationCount = 0;
  this->m_refAnimGroups.m_Memory.m_nGrowSize = 0;
  this->m_AnimGroups.m_Size = 0;
  this->m_AnimGroups.m_Memory.m_pMemory = 0;
  this->m_AnimGroups.m_Memory.m_nAllocationCount = 0;
  this->m_AnimGroups.m_Memory.m_nGrowSize = 0;
  this->m_meshGroups.m_Size = 0;
  this->m_meshGroups.m_Memory.m_pMemory = 0;
  this->m_meshGroups.m_Memory.m_nAllocationCount = 0;
  this->m_meshGroups.m_Memory.m_nGrowSize = 0;
  this->m_materialGroups.m_Size = 0;
  this->m_materialGroups.m_Memory.m_pMemory = 0;
  this->m_materialGroups.m_Memory.m_nAllocationCount = 0;
  this->m_materialGroups.m_Memory.m_nGrowSize = 0;
  this->m_nDefaultMeshGroupMask = -1;
  CModelSkeletonBuilder::CModelSkeletonBuilder(&this->m_skeletonBuilder);
  this->m_namedFlexControllers.m_Vector.m_Size = 0;
  this->m_namedFlexControllers.m_Vector.m_Memory.m_pMemory = 0;
  this->m_namedFlexControllers.m_Vector.m_Memory.m_nAllocationCount = 32;
  this->m_namedFlexControllers.m_Vector.m_Memory.m_nGrowSize = 0;
  CMemAllocSystemInitialize(v2);
  this->m_namedFlexControllers.m_Vector.m_Memory.m_pMemory = (**g_pMemAlloc)(
                                                               g_pMemAlloc,
                                                               4LL
                                                             * this->m_namedFlexControllers.m_Vector.m_Memory.m_nAllocationCount);
  CUtlSymbolTable::CUtlSymbolTable(&this->m_namedFlexControllers.m_SymbolTable, 0, 32, 1);
  this->m_flexControllers.m_Size = 0;
  this->m_flexControllers.m_Memory.m_pMemory = 0;
  this->m_flexControllers.m_Memory.m_nAllocationCount = 0;
  this->m_flexControllers.m_Memory.m_nGrowSize = 0;
  this->m_remappingTables.m_Size = 0;
  this->m_remappingTables.m_Memory.m_pMemory = 0;
  this->m_remappingTables.m_Memory.m_nAllocationCount = 0;
  this->m_remappingTables.m_Memory.m_nGrowSize = 0;
  this->m_boneFlexDrivers.m_Size = 0;
  this->m_boneFlexDrivers.m_Memory.m_pMemory = 0;
  this->m_boneFlexDrivers.m_Memory.m_nAllocationCount = 0;
  this->m_boneFlexDrivers.m_Memory.m_nGrowSize = 0;
}


// CModelBuilder::CModelBuilder  (line 1354, @0x000000000314e220, libserver.so)  // inlines: CBuilderModelInfo, CStrongHandle, CUtlMemory, CUtlString, CUtlStringMap, CUtlVector, CUtlVectorBase, Init, ~CStrongHandle, ~CUtlString, ~CUtlStringMap, ~CUtlVector
// calls: CModelSkeletonBuilder::CModelSkeletonBuilder, CMemAllocSystemInitialize, CUtlSymbolTable::CUtlSymbolTable, CModelBuilder::InitFromPermData, CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::~CUtlVectorBase, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase, CUtlVectorBase<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >::~CUtlVectorBase, CUtlVectorBase<CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>, CUtlMemory<CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>, int> >::~CUtlVectorBase, CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown, CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase, CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase, CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVectorBase (23 total)
void __fastcall CModelBuilder::CModelBuilder(CModelBuilder *const this, const PermModelData_t *pPermData)
{
  __int64 v4; // rdi

  this->m_name.m_pString = 0;
  this->m_modelInfo.m_sSurfaceProperty.m_pString = 0;
  this->m_modelInfo.m_keyValueText.m_pString = 0;
  this->m_modelInfo.m_nInherentFlags = ModelFlags_t::MODEL_FLAG_NONE;
  this->m_modelInfo.m_vHullMin.x = 0.0;
  this->m_modelInfo.m_vHullMin.y = 0.0;
  this->m_modelInfo.m_vHullMin.z = 0.0;
  this->m_modelInfo.m_vHullMax.x = 0.0;
  this->m_modelInfo.m_vHullMax.y = 0.0;
  this->m_modelInfo.m_vHullMax.z = 0.0;
  this->m_modelInfo.m_vViewMin.x = 0.0;
  this->m_modelInfo.m_vViewMin.y = 0.0;
  this->m_modelInfo.m_vViewMin.z = 0.0;
  this->m_modelInfo.m_vViewMax.x = 0.0;
  this->m_modelInfo.m_vViewMax.y = 0.0;
  this->m_modelInfo.m_vViewMax.z = 0.0;
  this->m_modelInfo.m_flMass = 0.0;
  this->m_modelInfo.m_vEyePosition.x = 0.0;
  this->m_modelInfo.m_vEyePosition.y = 0.0;
  this->m_modelInfo.m_vEyePosition.z = 0.0;
  this->m_modelInfo.m_flMaxEyeDeflection = 0.0;
  this->m_ExtParts.m_Size = 0;
  this->m_ExtParts.m_Memory.m_pMemory = 0;
  this->m_ExtParts.m_Memory.m_nAllocationCount = 0;
  this->m_ExtParts.m_Memory.m_nGrowSize = 0;
  this->m_refMeshes.m_Size = 0;
  this->m_refMeshes.m_Memory.m_pMemory = 0;
  this->m_refMeshes.m_Memory.m_nAllocationCount = 0;
  this->m_refMeshes.m_Memory.m_nGrowSize = 0;
  this->m_refMeshGroupMasks.m_Size = 0;
  this->m_refMeshGroupMasks.m_Memory.m_pMemory = 0;
  this->m_refMeshGroupMasks.m_Memory.m_nAllocationCount = 0;
  this->m_refMeshGroupMasks.m_Memory.m_nGrowSize = 0;
  this->m_refLODGroupMasks.m_Size = 0;
  this->m_refLODGroupMasks.m_Memory.m_pMemory = 0;
  this->m_refLODGroupMasks.m_Memory.m_nAllocationCount = 0;
  this->m_refLODGroupMasks.m_Memory.m_nGrowSize = 0;
  this->m_lodGroupSwitchDistances.m_Size = 0;
  this->m_lodGroupSwitchDistances.m_Memory.m_pMemory = 0;
  this->m_lodGroupSwitchDistances.m_Memory.m_nAllocationCount = 0;
  this->m_lodGroupSwitchDistances.m_Memory.m_nGrowSize = 0;
  this->m_refPhysicsData.m_pBinding = 0;
  this->m_refAnimGroups.m_Size = 0;
  this->m_refAnimGroups.m_Memory.m_pMemory = 0;
  this->m_refAnimGroups.m_Memory.m_nAllocationCount = 0;
  this->m_refAnimGroups.m_Memory.m_nGrowSize = 0;
  this->m_AnimGroups.m_Size = 0;
  this->m_AnimGroups.m_Memory.m_pMemory = 0;
  this->m_AnimGroups.m_Memory.m_nAllocationCount = 0;
  this->m_AnimGroups.m_Memory.m_nGrowSize = 0;
  this->m_meshGroups.m_Size = 0;
  this->m_meshGroups.m_Memory.m_pMemory = 0;
  this->m_meshGroups.m_Memory.m_nAllocationCount = 0;
  this->m_meshGroups.m_Memory.m_nGrowSize = 0;
  this->m_materialGroups.m_Size = 0;
  this->m_materialGroups.m_Memory.m_pMemory = 0;
  this->m_materialGroups.m_Memory.m_nAllocationCount = 0;
  this->m_materialGroups.m_Memory.m_nGrowSize = 0;
  CModelSkeletonBuilder::CModelSkeletonBuilder(&this->m_skeletonBuilder);
  this->m_namedFlexControllers.m_Vector.m_Size = 0;
  this->m_namedFlexControllers.m_Vector.m_Memory.m_pMemory = 0;
  this->m_namedFlexControllers.m_Vector.m_Memory.m_nAllocationCount = 32;
  this->m_namedFlexControllers.m_Vector.m_Memory.m_nGrowSize = 0;
  CMemAllocSystemInitialize(v4);
  this->m_namedFlexControllers.m_Vector.m_Memory.m_pMemory = (**g_pMemAlloc)(
                                                               g_pMemAlloc,
                                                               4LL
                                                             * this->m_namedFlexControllers.m_Vector.m_Memory.m_nAllocationCount);
  CUtlSymbolTable::CUtlSymbolTable(&this->m_namedFlexControllers.m_SymbolTable, 0, 32, 1);
  this->m_flexControllers.m_Size = 0;
  this->m_flexControllers.m_Memory.m_pMemory = 0;
  this->m_flexControllers.m_Memory.m_nAllocationCount = 0;
  this->m_flexControllers.m_Memory.m_nGrowSize = 0;
  this->m_remappingTables.m_Size = 0;
  this->m_remappingTables.m_Memory.m_pMemory = 0;
  this->m_remappingTables.m_Memory.m_nAllocationCount = 0;
  this->m_remappingTables.m_Memory.m_nGrowSize = 0;
  this->m_boneFlexDrivers.m_Size = 0;
  this->m_boneFlexDrivers.m_Memory.m_pMemory = 0;
  this->m_boneFlexDrivers.m_Memory.m_nAllocationCount = 0;
  this->m_boneFlexDrivers.m_Memory.m_nGrowSize = 0;
  CModelBuilder::InitFromPermData(this, pPermData);
}


// CModelBuilder::SetModelInfo  (line 1359, @0x0000000003148a30, libserver.so)  // inlines: CBuilderModelInfo, CUtlString, Init, operator=, ~CBuilderModelInfo, ~CUtlString
// calls: CUtlString::operator=, CUtlString::FreeMemoryBlock, CBuilderModelInfo::~CBuilderModelInfo, _Unwind_Resume
void __fastcall CModelBuilder::SetModelInfo(CModelBuilder *const this, const CBuilderModelInfo *pInfo)
{
  ModelFlags_t m_nInherentFlags; // eax
  const CBuilderModelInfo *p_empty; // r12
  CBuilderModelInfo empty; // [rsp+0h] [rbp-70h] BYREF

  memset(&empty, 0, sizeof(empty));
  if ( pInfo != 0 )
  {
    m_nInherentFlags = pInfo->m_nInherentFlags;
    p_empty = pInfo;
  }
  else
  {
    p_empty = &empty;
    m_nInherentFlags = ModelFlags_t::MODEL_FLAG_NONE;
  }
  this->m_modelInfo.m_nInherentFlags = m_nInherentFlags;
  this->m_modelInfo.m_vHullMin = p_empty->m_vHullMin;
  this->m_modelInfo.m_vHullMax = p_empty->m_vHullMax;
  this->m_modelInfo.m_vViewMin = p_empty->m_vViewMin;
  this->m_modelInfo.m_vViewMax = p_empty->m_vViewMax;
  this->m_modelInfo.m_flMass = p_empty->m_flMass;
  this->m_modelInfo.m_vEyePosition = p_empty->m_vEyePosition;
  this->m_modelInfo.m_flMaxEyeDeflection = p_empty->m_flMaxEyeDeflection;
  CUtlString::operator=(&this->m_modelInfo.m_sSurfaceProperty, &p_empty->m_sSurfaceProperty);
  CUtlString::operator=(&this->m_modelInfo.m_keyValueText, &p_empty->m_keyValueText);
  if ( empty.m_keyValueText.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&empty.m_keyValueText);
  if ( empty.m_sSurfaceProperty.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&empty.m_sSurfaceProperty);
}


// CModelBuilder::SetName  (line 1365, @0x0000000003148c10, libserver.so)
// calls: CUtlString::operator=
void __fastcall CModelBuilder::SetName(CModelBuilder *const this, const char *pName)
{
  CUtlString::operator=(&this->m_name, pName);
}


// CModelBuilder::AddMesh  (line 1370, @0x0000000003149830, libserver.so)  // inlines: AddToTail, CStrongHandle, Construct<CStrongHandle<InfoForResourceTypeCRenderMesh> >, Element, GrowMemory, SetLODGroupMaskForMesh, SetMeshGroupMaskForMesh, operator=, operator[]
// calls: CStrongHandle<InfoForResourceTypeCRenderMesh>::Init, CUtlMemory<long long unsigned int, int>::Grow, CUtlMemory<unsigned char, int>::Grow, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::Grow
// callers: CModelBuilder::AddProceduralMesh
void __fastcall CModelBuilder::AddMesh(
        CModelBuilder *const this,
        HRenderMesh_Internal hMesh,
        MeshGroupMask_t nMeshGroupMask,
        LODGroupMask_t nLODGroupMask)
{
  CStrongHandle<InfoForResourceTypeCRenderMesh>::ResourceHandleTyped_t *m_pBinding; // r8
  __int64 m_Size; // r12
  int v9; // eax
  CStrongHandle<InfoForResourceTypeCRenderMesh> *v10; // rax
  int v11; // eax
  int v12; // eax
  HRenderMesh_Internal hMeshb; // [rsp+8h] [rbp-38h]
  HRenderMesh_Internal hMeshc; // [rsp+8h] [rbp-38h]

  m_pBinding = hMesh.m_pBinding;
  m_Size = this->m_refMeshes.m_Size;
  v9 = this->m_refMeshes.m_Size;
  if ( m_Size == this->m_refMeshes.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>,int>::Grow(&this->m_refMeshes.m_Memory, 1);
    v9 = this->m_refMeshes.m_Size;
    m_pBinding = hMesh.m_pBinding;
  }
  this->m_refMeshes.m_Size = v9 + 1;
  v10 = &this->m_refMeshes.m_Memory.m_pMemory[m_Size];
  if ( v10 != 0 )
    v10->m_pBinding = 0;
  v11 = this->m_refMeshGroupMasks.m_Size;
  if ( v11 == this->m_refMeshGroupMasks.m_Memory.m_nAllocationCount )
  {
    hMeshb.m_pBinding = m_pBinding;
    CUtlMemory<unsigned long long,int>::Grow(&this->m_refMeshGroupMasks.m_Memory, 1);
    v11 = this->m_refMeshGroupMasks.m_Size;
    m_pBinding = hMeshb.m_pBinding;
  }
  this->m_refMeshGroupMasks.m_Size = v11 + 1;
  v12 = this->m_refLODGroupMasks.m_Size;
  if ( v12 == this->m_refLODGroupMasks.m_Memory.m_nAllocationCount )
  {
    hMeshc.m_pBinding = m_pBinding;
    CUtlMemory<unsigned char,int>::Grow(&this->m_refLODGroupMasks.m_Memory, 1);
    v12 = this->m_refLODGroupMasks.m_Size;
    m_pBinding = hMeshc.m_pBinding;
  }
  this->m_refLODGroupMasks.m_Size = v12 + 1;
  CStrongHandle<InfoForResourceTypeCRenderMesh>::Init(&this->m_refMeshes.m_Memory.m_pMemory[m_Size], *m_pBinding);
  this->m_refMeshGroupMasks.m_Memory.m_pMemory[m_Size] = nMeshGroupMask;
  this->m_refLODGroupMasks.m_Memory.m_pMemory[m_Size] = nLODGroupMask;
}


// CModelBuilder::AddProceduralMesh  (line 1381, @0x0000000003149970, libserver.so)  // inlines: CWeakHandle, Init
// calls: CModelBuilder::AddMesh
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel
void __fastcall CModelBuilder::AddProceduralMesh(
        CModelBuilder *const this,
        const char *pResourceName,
        bool bIsAnonymous,
        CRenderMesh *pMeshData,
        MeshGroupMask_t nMeshGroupMask,
        LODGroupMask_t nLODGroupMask)
{
  HRenderMesh_Internal hMesh; // [rsp+0h] [rbp-40h] BYREF
  HRenderMesh_Internal v10; // [rsp+10h] [rbp-30h] BYREF

  (*(*g_pMeshSystem + 88LL))(&hMesh, g_pMeshSystem, pResourceName, bIsAnonymous, pMeshData);
  v10.m_pBinding = hMesh.m_pBinding;
  CModelBuilder::AddMesh(this, &v10, nMeshGroupMask, nLODGroupMask);
}


// CModelBuilder::SetMeshGroupMaskForMesh  (line 1387, @0x0000000003148c20, libserver.so)  // inlines: operator[]
void __fastcall CModelBuilder::SetMeshGroupMaskForMesh(CModelBuilder *const this, int nMesh, MeshGroupMask_t nMask)
{
  this->m_refMeshGroupMasks.m_Memory.m_pMemory[nMesh] = nMask;
}


// CModelBuilder::SetLODGroupMaskForMesh  (line 1392, @0x0000000003148c40, libserver.so)  // inlines: operator[]
void __fastcall CModelBuilder::SetLODGroupMaskForMesh(CModelBuilder *const this, int nMesh, LODGroupMask_t nMask)
{
  this->m_refLODGroupMasks.m_Memory.m_pMemory[nMesh] = nMask;
}


// CModelBuilder::SetDefaultMeshGroupMask  (line 1397, @0x0000000003148c60, libserver.so)
void __fastcall CModelBuilder::SetDefaultMeshGroupMask(CModelBuilder *const this, MeshGroupMask_t nMask)
{
  this->m_nDefaultMeshGroupMask = nMask;
}


// CModelBuilder::AddExtPart  (line 1402, @0x00000000031499d0, libserver.so)  // inlines: AddToTail, BuilderModelExtPart_t, CStrongHandle, CUtlString, CopyConstruct<BuilderModelExtPart_t>, Element, GrowMemory, Init, ModelPart_t, ThreadInterlockedIncrement, operator++, operator=, operator[], ~CStrongHandle, ~CUtlString, ~ModelPart_t
// calls: CUtlString::Get, CUtlString::Set, CUtlMemory<BuilderModelExtPart_t, int>::Grow, CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CUtlString::FreeMemoryBlock, _Unwind_Resume
void __fastcall CModelBuilder::AddExtPart(CModelBuilder *const this, const BuilderModelExtPart_t *const extPart)
{
  __int64 m_Size; // rbx
  int v5; // eax
  __int64 v6; // rbx
  bool v7; // zf
  CUtlString *v8; // rbx
  char *v9; // rax
  const char *v10; // rax
  const char *v11; // rax
  const ResourceBindingBase_t *m_pBinding; // rsi

  m_Size = this->m_ExtParts.m_Size;
  v5 = this->m_ExtParts.m_Size;
  if ( m_Size == this->m_ExtParts.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<BuilderModelExtPart_t,int>::Grow(&this->m_ExtParts.m_Memory, 1);
    v5 = this->m_ExtParts.m_Size;
  }
  v6 = m_Size << 6;
  v7 = (this->m_ExtParts.m_Memory.m_pMemory + v6) == 0;
  v8 = (this->m_ExtParts.m_Memory.m_pMemory + v6);
  this->m_ExtParts.m_Size = v5 + 1;
  if ( !v7 )
  {
    v8->m_pString = *&extPart->m_Transform.m_vPosition.x;
    v8[1].m_pString = *&extPart->m_Transform.m_vPosition.z;
    v8[2].m_pString = *&extPart->m_Transform.m_orientation.x;
    v9 = *&extPart->m_Transform.m_orientation.z;
    v8[4].m_pString = 0;
    v8[3].m_pString = v9;
    v10 = CUtlString::Get(&extPart->m_Name);
    CUtlString::Set(v8 + 4, v10);
    v8[5].m_pString = 0;
    v11 = CUtlString::Get(&extPart->m_ParentName);
    CUtlString::Set(v8 + 5, v11);
    v8[6].m_pString = 0;
    m_pBinding = extPart->m_Model.m_pBinding;
    v8[6].m_pString = m_pBinding;
    if ( m_pBinding != 0 )
    {
      if ( (m_pBinding->m_nFlags & 0x20) != 0 )
      {
        (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, m_pBinding, 2, v8 + 6);
        m_pBinding = v8[6].m_pString;
      }
      _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
    }
  }
}


// CModelBuilder::AddPhysicsBody  (line 1407, @0x0000000003148e90, libserver.so)
// calls: CFmtStrN<256, false>::CFmtStrN, CModelBuilder::AddPhysicsBody, __stack_chk_fail
// strings: "_modelbuilder_phys_%i.vphys"
// globals: CModelBuilder::AddPhysicsBody(CPhysBodyDesc const&)::s_nPhysBodyUnique
void __fastcall CModelBuilder::AddPhysicsBody(CModelBuilder *const this, const CPhysBodyDesc *const physBodyDesc)
{
  int v4; // edx
  CFmtStrN<256,false> v5; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v6; // [rsp+118h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  v4 = CModelBuilder::AddPhysicsBody(CPhysBodyDesc const&)::s_nPhysBodyUnique++;
  CFmtStrN<256,false>::CFmtStrN(&v5, "_modelbuilder_phys_%i.vphys", v4);
  CModelBuilder::AddPhysicsBody(this, v5.m_szBuf, 1, physBodyDesc);
}


// CModelBuilder::AddPhysicsBody  (line 1413, @0x0000000003148df0, libserver.so)  // inlines: AddPhysicsRep_Internal, FindOrCreateProceduralResource<495958126710ull>, MarkDeleted, Release<CPhysAggregateData>, operator=, ~CSmartPtr
// calls: CreateAggregateData, CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init, CPhysAggregateData::Release, _Unwind_Resume
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel, CModelBuilder::AddPhysicsBody
void __fastcall CModelBuilder::AddPhysicsBody(
        CModelBuilder *const this,
        const char *pResourceName,
        bool bIsAnonymous,
        const CPhysBodyDesc *const physBodyDesc)
{
  const ResourceBinding_t<InfoForResourceTypeCPhysAggregateData> *v7; // rax
  CSmartPtr<CPhysAggregateData,CRefCountAccessor> pAggData; // [rsp+0h] [rbp-30h]

  CreateAggregateData(physBodyDesc, 1);
  v7 = (*(*g_pResourceSystem + 240LL))(g_pResourceSystem, pResourceName, 0x7379687076LL, pAggData, !bIsAnonymous);
  CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init(&this->m_refPhysicsData, v7);
}


// CModelBuilder::AddPhysicsRep_Internal  (line 1424, @0x0000000003148dd0, libserver.so)  // inlines: operator=
// calls: CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init
void __fastcall CModelBuilder::AddPhysicsRep_Internal(CModelBuilder *const this, HPhysAggregateData_Internal hPhys)
{
  CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init(&this->m_refPhysicsData, hPhys.m_pBinding->m_pData);
}


// CModelBuilder::AddAnimationGroupRef  (line 1429, @0x0000000003149b30, libserver.so)  // inlines: AddToTail, CStrongHandle, Construct<CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t> >, Element, GrowMemory, operator=, operator[]
// calls: CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>::Init, CUtlMemory<CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>, int>::Grow
void __fastcall CModelBuilder::AddAnimationGroupRef(CModelBuilder *const this, HAnimationGroup_Internal hAnimGroup)
{
  __int64 m_Size; // r12
  int v5; // eax
  CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t> *v6; // rax
  CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t> *v7; // rdi

  m_Size = this->m_refAnimGroups.m_Size;
  v5 = this->m_refAnimGroups.m_Size;
  if ( m_Size == this->m_refAnimGroups.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>,int>::Grow(
      &this->m_refAnimGroups.m_Memory,
      1);
    v5 = this->m_refAnimGroups.m_Size;
  }
  this->m_refAnimGroups.m_Size = v5 + 1;
  v6 = &this->m_refAnimGroups.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
  {
    v6->m_pBinding = 0;
    v7 = &this->m_refAnimGroups.m_Memory.m_pMemory[m_Size];
  }
  else
  {
    v7 = 0;
  }
  CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>::Init(v7, hAnimGroup.m_pBinding->m_pData);
}


// CModelBuilder::AddAnimationGroupRuntime  (line 1435, @0x0000000003149bc0, libserver.so)  // inlines: AddToTail, GrowMemory
// calls: CUtlMemory<CAnimationGroupResource*, int>::Grow
void __fastcall CModelBuilder::AddAnimationGroupRuntime(CModelBuilder *const this, CAnimationGroupResource *pAnimGroup)
{
  __int64 m_Size; // r12
  int v5; // eax

  m_Size = this->m_AnimGroups.m_Size;
  v5 = this->m_AnimGroups.m_Size;
  if ( m_Size == this->m_AnimGroups.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CAnimationGroupResource *,int>::Grow(&this->m_AnimGroups.m_Memory, 1);
    v5 = this->m_AnimGroups.m_Size;
  }
  this->m_AnimGroups.m_Size = v5 + 1;
  this->m_AnimGroups.m_Memory.m_pMemory[m_Size] = pAnimGroup;
}


// CModelBuilder::AddMeshGroup  (line 1441, @0x0000000003148fa0, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, GrowMemory, operator[], ~CUtlString
// calls: CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Grow, _Unwind_Resume
int __fastcall CModelBuilder::AddMeshGroup(CModelBuilder *const this, const char *pMeshGroup)
{
  int m_Size; // ebx
  int v4; // eax
  CUtlString *v5; // r12
  const char *v6; // rax
  CUtlString v8; // [rsp+0h] [rbp-30h] BYREF

  v8.m_pString = 0;
  CUtlString::Set(&v8, pMeshGroup);
  m_Size = this->m_meshGroups.m_Size;
  v4 = m_Size;
  if ( m_Size == this->m_meshGroups.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CUtlString,int>::Grow(&this->m_meshGroups.m_Memory, 1);
    v4 = this->m_meshGroups.m_Size;
  }
  this->m_meshGroups.m_Size = v4 + 1;
  v5 = &this->m_meshGroups.m_Memory.m_pMemory[m_Size];
  if ( v5 != 0 )
  {
    v5->m_pString = 0;
    v6 = CUtlString::Get(&v8);
    CUtlString::Set(v5, v6);
  }
  if ( v8.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v8);
  return m_Size;
}


// CModelBuilder::AddMaterialGroup  (line 1446, @0x0000000003149c30, libserver.so)  // inlines: AddToTail, CBuilderMaterialGroup, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Construct<CBuilderMaterialGroup>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CBuilderMaterialGroup, int>::Grow
CBuilderMaterialGroup *__fastcall CModelBuilder::AddMaterialGroup(CModelBuilder *const this)
{
  int m_Size; // r12d
  int v3; // eax
  CBuilderMaterialGroup *result; // rax
  CBuilderMaterialGroup *v5; // rcx

  m_Size = this->m_materialGroups.m_Size;
  v3 = m_Size;
  if ( m_Size == this->m_materialGroups.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CBuilderMaterialGroup,int>::Grow(&this->m_materialGroups.m_Memory, 1);
    v3 = this->m_materialGroups.m_Size;
  }
  this->m_materialGroups.m_Size = v3 + 1;
  result = 0;
  v5 = &this->m_materialGroups.m_Memory.m_pMemory[m_Size];
  if ( v5 != 0 )
  {
    v5->m_name.m_pString = 0;
    v5->m_materials.m_Size = 0;
    v5->m_materials.m_Memory.m_pMemory = 0;
    v5->m_materials.m_Memory.m_nAllocationCount = 0;
    v5->m_materials.m_Memory.m_nGrowSize = 0;
    return &this->m_materialGroups.m_Memory.m_pMemory[m_Size];
  }
  return result;
}


// CModelBuilder::FindOrAddBone  (line 1452, @0x000000000314b0a0, libserver.so)
// calls: CModelSkeletonBuilder::FindOrAddBone
__int64 __fastcall CModelBuilder::FindOrAddBone(
        CModelBuilder *const this,
        uint32 nBoneHash,
        uint32 nParentHash,
        float flSphere,
        CModelSkeleton::BoneFlags_t nFlags,
        const Vector *const vBoneLocalPos,
        const Quaternion *const vBoneLocalRot,
        const char *pBoneName)
{
  return CModelSkeletonBuilder::FindOrAddBone(
           &this->m_skeletonBuilder,
           nBoneHash,
           nParentHash,
           flSphere,
           nFlags,
           vBoneLocalPos,
           vBoneLocalRot,
           pBoneName);
}


// CModelBuilder::FindOrAddBone  (line 1457, @0x000000000314a5e0, libserver.so)
// calls: CModelSkeletonBuilder::FindOrAddBone
__int64 __fastcall CModelBuilder::FindOrAddBone(
        CModelBuilder *const this,
        const char *pBoneName,
        const char *pParentName,
        float flSphere,
        CModelSkeleton::BoneFlags_t nFlags,
        const Vector *const vBoneLocalPos,
        const Quaternion *const vBoneLocalRot)
{
  return CModelSkeletonBuilder::FindOrAddBone(
           &this->m_skeletonBuilder,
           pBoneName,
           pParentName,
           flSphere,
           nFlags,
           vBoneLocalPos,
           vBoneLocalRot);
}


// CModelBuilder::AddFlexController  (line 1462, @0x0000000003149cc0, libserver.so)  // inlines: AddMultipleToTail, AddString, AddToTail, CopyConstruct<const CFlexController*>, Element, EnsureCount, Find, GrowMemory, GrowVector, InsertMultipleBefore, operator const UtlSymId_t, operator[], pszName
// calls: CUtlString::Get, CUtlSymbolTable::Find, CUtlSymbolTable::AddString, CUtlMemory<const CFlexController*, int>::Grow, CUtlMemory<int, int>::Grow
// callers: CModelBuilder::AppendFlexControllers
void __fastcall CModelBuilder::AddFlexController(CModelBuilder *const this, const CFlexController *pFlexController)
{
  const char *v4; // r14
  int m_Size; // eax
  int v6; // edx
  const CFlexController **v7; // rdx
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // eax
  int v11; // r12d
  int m_nAllocationCount; // ecx
  int v13; // [rsp+Ch] [rbp-44h]
  int v14; // [rsp+Ch] [rbp-44h]
  UtlSymId_t nNameMapIndex[32]; // [rsp+10h] [rbp-40h] BYREF

  v4 = CUtlString::Get(&pFlexController->m_szName);
  CUtlSymbolTable::Find(nNameMapIndex, &this->m_namedFlexControllers.m_SymbolTable, v4);
  if ( nNameMapIndex[0] == 0xFFFF )
  {
    m_Size = this->m_flexControllers.m_Size;
    v6 = m_Size;
    if ( m_Size == this->m_flexControllers.m_Memory.m_nAllocationCount )
    {
      v14 = this->m_flexControllers.m_Size;
      CUtlMemory<CFlexController const*,int>::Grow(&this->m_flexControllers.m_Memory, 1);
      v6 = this->m_flexControllers.m_Size;
      m_Size = v14;
    }
    this->m_flexControllers.m_Size = v6 + 1;
    v7 = &this->m_flexControllers.m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
      *v7 = pFlexController;
    v13 = m_Size;
    CUtlSymbolTable::AddString(nNameMapIndex, &this->m_namedFlexControllers.m_SymbolTable, v4);
    v8 = nNameMapIndex[0];
    v9 = this->m_namedFlexControllers.m_Vector.m_Size;
    v10 = v13;
    if ( nNameMapIndex[0] >= v9 )
    {
      v11 = nNameMapIndex[0] + 1;
      if ( v9 < v11 )
      {
        m_nAllocationCount = this->m_namedFlexControllers.m_Vector.m_Memory.m_nAllocationCount;
        if ( v11 > m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(&this->m_namedFlexControllers.m_Vector.m_Memory, v11 - m_nAllocationCount);
          v8 = nNameMapIndex[0];
          v10 = v13;
        }
        this->m_namedFlexControllers.m_Vector.m_Size = v11;
      }
    }
    this->m_namedFlexControllers.m_Vector.m_Memory.m_pMemory[v8] = v10;
  }
}


// CModelBuilder::CreateRemappingTableForMorphSetData  (line 1476, @0x000000000314b620, libserver.so)  // inlines: AddMultipleToTail, Find, GrowMemory, GrowVector, InsertMultipleBefore, operator const UtlSymId_t, operator[], pszName
// calls: CUtlString::Get, CUtlSymbolTable::Find, Plat_IsInDebugSessionRaw, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CUtlMemory<short int, int>::Grow
// callers: CModelBuilder::CreateRemappingTableForMesh
// strings: "Trying to find a flex controller (%s) that doesn't actually exist in the model.\n"
// globals: LOG_MODELLIB
void __fastcall CModelBuilder::CreateRemappingTableForMorphSetData(
        CModelBuilder *const this,
        CModelBuilder::RemappingTable_t *const remapTable,
        const CMorphSetData *pMorphSetData)
{
  int m_Size; // r12d
  __int64 v6; // r14
  int m_nAllocationCount; // edx
  int v8; // eax
  __int16 *v10; // rbx
  unsigned __int64 v11; // r14
  __int16 v12; // r9
  const char *v13; // r12
  char IsChannelEnabled; // al
  __int64 v15; // [rsp+10h] [rbp-50h]
  unsigned __int16 v16[32]; // [rsp+20h] [rbp-40h] BYREF

  if ( pMorphSetData != 0 )
  {
    m_Size = pMorphSetData->m_FlexControllers.m_Size;
    v6 = remapTable->m_Size;
    if ( m_Size != 0 )
    {
      m_nAllocationCount = remapTable->m_Memory.m_nAllocationCount;
      v8 = m_Size + v6;
      if ( m_Size + v6 > m_nAllocationCount )
      {
        CUtlMemory<short,int>::Grow(&remapTable->m_Memory, v8 - m_nAllocationCount);
        v8 = m_Size + v6;
      }
      remapTable->m_Size = v8;
      v10 = &remapTable->m_Memory.m_pMemory[v6];
      if ( m_Size > 0 )
      {
        v11 = 0;
        v15 = 8 * (3LL * (m_Size - 1) + 3);
        do
        {
          v13 = CUtlString::Get(&pMorphSetData->m_FlexControllers.m_Memory.m_pMemory[v11 / 0x18].m_szName);
          CUtlSymbolTable::Find(v16, &this->m_namedFlexControllers.m_SymbolTable, v13);
          if ( v16[0] == 0xFFFF )
          {
            if ( Plat_IsInDebugSessionRaw() != 0 )
              __debugbreak();
            IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_MODELLIB, 2);
            v12 = 0;
            if ( IsChannelEnabled != 0 )
            {
              LoggingSystem_Log(
                LOG_MODELLIB,
                2,
                "Trying to find a flex controller (%s) that doesn't actually exist in the model.\n",
                v13);
              v12 = 0;
            }
          }
          else
          {
            v12 = this->m_namedFlexControllers.m_Vector.m_Memory.m_pMemory[v16[0]];
          }
          v11 += 24LL;
          *v10++ = v12;
        }
        while ( v11 != v15 );
      }
    }
  }
}


// CModelBuilder::CreateRemappingTableForMesh  (line 1508, @0x000000000314d8c0, libserver.so)  // inlines: AddMultipleToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CUtlVector<short int> >, Element, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, operator[]
// calls: CRenderSkeleton::GetBoneCount, CModelBuilder::CreateRemappingTableForMorphSetData, CUtlMemory<short int, int>::Grow, CModelSkeletonBuilder::FindBoneIndexByHash, Plat_IsInDebugSessionRaw, LoggingSystem_IsChannelEnabled, CUtlString::Get, LoggingSystem_Log, CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::Grow
// callers: CModelBuilder::AppendSkeletonsFromChildResources, CModelBuilder::CreateRemappingTableForMeshFromOldData
// strings: "Hitbox indexing is incorrect for set %s, hitbox %s. Hitboxes will not be setup properly.\
// globals: LOG_MODELLIB
void __fastcall CModelBuilder::CreateRemappingTableForMesh(
        CModelBuilder *const this,
        int nMesh,
        const CRenderMesh *pMeshData,
        const CMorphSetData *pMorphSetData)
{
  CModelBuilder *v4; // r13
  __int64 v6; // rbx
  int v7; // r14d
  __int64 m_Size; // r15
  CUtlVector<short int,CUtlMemory<short int,int> > *m_pMemory; // rax
  int m_NumElements; // eax
  unsigned __int64 v11; // rbx
  int v12; // r14d
  int v13; // eax
  __int64 v14; // r15
  int v15; // edx
  int v16; // eax
  __int64 v17; // r15
  CHitBox *v18; // rax
  __int64 v19; // r13
  const char *v20; // rax
  int v21; // r8d
  int m_nAllocationCount; // eax
  int v23; // edi
  __int64 v24; // rdx
  CUtlVector<short int,CUtlMemory<short int,int> > *v25; // rcx
  int BoneCount; // eax
  __int16 *v27; // r14
  CModelSkeletonBuilder *p_m_skeletonBuilder; // rax
  __int64 v29; // r13
  const CModelSkeletonBuilder *v30; // r15
  int v31; // r14d
  int v32; // eax
  __int64 v33; // [rsp+10h] [rbp-60h]
  CModelBuilder::RemappingTable_t *remapTable; // [rsp+18h] [rbp-58h]
  const char *v35; // [rsp+20h] [rbp-50h]
  CModelSkeletonBuilder *v36; // [rsp+28h] [rbp-48h]
  int thisc; // [rsp+30h] [rbp-40h]
  CModelBuilder *thisa; // [rsp+30h] [rbp-40h]
  CModelBuilder *thisb; // [rsp+30h] [rbp-40h]
  int pMorphSetDatab; // [rsp+38h] [rbp-38h]

  v4 = this;
  v6 = nMesh;
  v7 = nMesh + 1;
  m_Size = this->m_remappingTables.m_Size;
  if ( nMesh + 1 <= m_Size || (v21 = v7 - m_Size, v7 == m_Size) )
  {
    m_pMemory = this->m_remappingTables.m_Memory.m_pMemory;
  }
  else
  {
    m_nAllocationCount = this->m_remappingTables.m_Memory.m_nAllocationCount;
    if ( v7 > m_nAllocationCount )
    {
      CUtlMemory<CUtlVector<short,CUtlMemory<short,int>>,int>::Grow(
        &this->m_remappingTables.m_Memory,
        v7 - m_nAllocationCount);
      v21 = v7 - m_Size;
    }
    v4->m_remappingTables.m_Size = v7;
    m_pMemory = v4->m_remappingTables.m_Memory.m_pMemory;
    if ( v21 > 0 )
    {
      v23 = 0;
      v24 = m_Size;
      do
      {
        v25 = &m_pMemory[v24];
        if ( &m_pMemory[v24] != 0 )
        {
          v25->m_Size = 0;
          v25->m_Memory.m_pMemory = 0;
          v25->m_Memory.m_nAllocationCount = 0;
          v25->m_Memory.m_nGrowSize = 0;
          m_pMemory = v4->m_remappingTables.m_Memory.m_pMemory;
        }
        ++v23;
        ++v24;
      }
      while ( v21 > v23 );
    }
  }
  remapTable = &m_pMemory[v6];
  if ( CRenderSkeleton::GetBoneCount(&pMeshData->m_skeleton) != 0 )
  {
    BoneCount = CRenderSkeleton::GetBoneCount(&pMeshData->m_skeleton);
    if ( BoneCount != 0 )
    {
      v31 = BoneCount + remapTable->m_Size;
      v32 = remapTable->m_Memory.m_nAllocationCount;
      if ( v31 > v32 )
        CUtlMemory<short,int>::Grow(&remapTable->m_Memory, v31 - v32);
      remapTable->m_Size = v31;
    }
    thisb = v4;
    v27 = remapTable->m_Memory.m_pMemory;
    p_m_skeletonBuilder = &v4->m_skeletonBuilder;
    v29 = 0;
    v30 = p_m_skeletonBuilder;
    while ( CRenderSkeleton::GetBoneCount(&pMeshData->m_skeleton) > v29 )
    {
      v27[v29] = CModelSkeletonBuilder::FindBoneIndexByHash(
                   v30,
                   pMeshData->m_skeleton.m_boneHashes.m_Memory.m_pMemory[v29].m_nHashCode);
      ++v29;
    }
    v4 = thisb;
  }
  CModelBuilder::CreateRemappingTableForMorphSetData(v4, remapTable, pMorphSetData);
  m_NumElements = pMeshData->m_hitboxsets.m_Elements.m_Tree.m_NumElements;
  if ( m_NumElements > 0 )
  {
    v11 = 0;
    v12 = 0;
    v33 = 8 * (9LL * (m_NumElements - 1) + 9);
    v36 = &v4->m_skeletonBuilder;
    do
    {
      while ( 1 )
      {
        v13 = pMeshData->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory[v11 / 0x48].m_Data.elem.m_HitBoxes.m_Size;
        v14 = remapTable->m_Size;
        pMorphSetDatab = v13;
        if ( v13 != 0 )
        {
          v15 = remapTable->m_Memory.m_nAllocationCount;
          v16 = v14 + v13;
          if ( v16 > v15 )
          {
            thisc = v16;
            CUtlMemory<short,int>::Grow(&remapTable->m_Memory, v16 - v15);
            v16 = thisc;
          }
          remapTable->m_Size = v16;
          thisa = &remapTable->m_Memory.m_pMemory[v14];
          if ( pMorphSetDatab > 0 )
            break;
        }
        v11 += 72LL;
        if ( v11 == v33 )
          return;
      }
      v17 = 0;
      do
      {
        v19 = v17;
        v18 = &pMeshData->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory[v11 / 0x48].m_Data.elem.m_HitBoxes.m_Memory.m_pMemory[v17];
        if ( v18->m_nHitBoxIndex != v12 + v17 )
        {
          if ( Plat_IsInDebugSessionRaw() != 0 )
            __debugbreak();
          if ( LoggingSystem_IsChannelEnabled(LOG_MODELLIB, 2) != 0 )
          {
            v35 = CUtlString::Get(&pMeshData->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory[v11 / 0x48].m_Data.elem.m_HitBoxes.m_Memory.m_pMemory[v19].m_sBoneName);
            v20 = CUtlString::Get(&pMeshData->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory[v11 / 0x48].m_Data.elem.m_name);
            LoggingSystem_Log(
              LOG_MODELLIB,
              2,
              "Hitbox indexing is incorrect for set %s, hitbox %s. Hitboxes will not be setup properly.\n",
              v20,
              v35);
          }
          v18 = &pMeshData->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory[v11 / 0x48].m_Data.elem.m_HitBoxes.m_Memory.m_pMemory[v19];
        }
        *(&thisa->m_name.m_pString + v17++) = CModelSkeletonBuilder::FindBoneIndexByHash(v36, v18->m_nBoneNameHash);
      }
      while ( pMorphSetDatab > v17 );
      v11 += 72LL;
      v12 += pMorphSetDatab;
    }
    while ( v11 != v33 );
  }
}


// CModelBuilder::CreateRemappingTableForMeshFromOldData  (line 1552, @0x0000000003151760, libserver.so)  // inlines: CConvertOldDiskCtx, CMorphSetData, CStrongHandle, CUtlHashtable, CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CConvertOldDiskCtx, ~CMorphSetData, ~CStrongHandle, ~CUtlHashtable, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlScratchMemoryPool::CUtlScratchMemoryPool, CUtlString::Get, CMorphSetData::InitFromV0Data, CModelBuilder::CreateRemappingTableForMesh, CUtlHashtable<const ResourceBindingBase_t*, empty_t, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunctor<const ResourceBindingBase_t*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int>::Purge, CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::RemoveAll, CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::RemoveAll, CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::RemoveAll, CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown, CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::RemoveAll, CUtlScratchMemoryPool::~CUtlScratchMemoryPool (19 total)
void __fastcall CModelBuilder::CreateRemappingTableForMeshFromOldData(
        CModelBuilder *const this,
        int nMesh,
        const CRenderMesh *pMeshData,
        const MorphSetData_t *pMorphSetData)
{
  CUtlScratchMemoryPool memPool; // [rsp+10h] [rbp-110h] BYREF
  CConvertOldDiskCtx ctx; // [rsp+20h] [rbp-100h] BYREF
  CMorphSetData morphData; // [rsp+60h] [rbp-C0h] BYREF

  if ( pMorphSetData != 0 )
  {
    CUtlScratchMemoryPool::CUtlScratchMemoryPool(&memPool, 4096, 0, 0);
    morphData.m_bundleTypes.m_Size = 0;
    memset(&morphData.m_bundleTypes.m_Memory, 0, 20);
    memset(&morphData.m_morphDatas.m_Memory, 0, 28);
    memset(&morphData.m_FlexDesc.m_Memory, 0, 20);
    memset(&morphData.m_FlexControllers.m_Memory, 0, 20);
    morphData.m_FlexRules.m_Memory.m_pMemory = 0;
    morphData.m_FlexRules.m_Memory.m_nAllocationCount = 0;
    morphData.m_FlexRules.m_Memory.m_nGrowSize = 0;
    CUtlString::Get(&this->m_name);
    ctx.m_bReportPool = 0;
    memset(&ctx.m_HandledSubResources, 0, 20);
    ctx.m_HandledSubResources.m_nMinSize = 32;
    ctx.m_HandledSubResources.m_bSizeLocked = 0;
    ctx.m_pModelPool = 0;
    ctx.m_pPool = &memPool;
    CMorphSetData::InitFromV0Data(&morphData, &ctx, pMorphSetData, 0);
    CModelBuilder::CreateRemappingTableForMesh(this, nMesh, pMeshData, &morphData);
    CUtlHashtable<ResourceBindingBase_t const*,empty_t,DefaultHashFunctor<ResourceBindingBase_t const*>,DefaultEqualFunctor<ResourceBindingBase_t const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceBindingBase_t const*,empty_t>,int>>::RemoveAll(&ctx.m_HandledSubResources);
    CUtlMemory<CUtlHashtableEntry<ResourceBindingBase_t const*,empty_t>,int>::Purge(&ctx.m_HandledSubResources.m_table);
    CUtlVectorBase<CFlexRule,CUtlMemory<CFlexRule,int>>::RemoveAll(&morphData.m_FlexRules);
    if ( (morphData.m_FlexRules.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CFlexRule,int>::Purge(&morphData.m_FlexRules.m_Memory);
      if ( (morphData.m_FlexRules.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CFlexRule,int>::Purge(&morphData.m_FlexRules.m_Memory);
    }
    CUtlVectorBase<CFlexController,CUtlMemory<CFlexController,int>>::RemoveAll(&morphData.m_FlexControllers);
    if ( (morphData.m_FlexControllers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CFlexController,int>::Purge(&morphData.m_FlexControllers.m_Memory);
      if ( (morphData.m_FlexControllers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CFlexController,int>::Purge(&morphData.m_FlexControllers.m_Memory);
    }
    CUtlVectorBase<CFlexDesc,CUtlMemory<CFlexDesc,int>>::RemoveAll(&morphData.m_FlexDesc);
    if ( (morphData.m_FlexDesc.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CFlexDesc,int>::Purge(&morphData.m_FlexDesc.m_Memory);
      if ( (morphData.m_FlexDesc.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CFlexDesc,int>::Purge(&morphData.m_FlexDesc.m_Memory);
    }
    CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(&morphData.m_pTextureAtlas);
    CUtlVectorBase<CMorphData,CUtlMemory<CMorphData,int>>::RemoveAll(&morphData.m_morphDatas);
    if ( (morphData.m_morphDatas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CMorphData,int>::Purge(&morphData.m_morphDatas.m_Memory);
      if ( (morphData.m_morphDatas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CMorphData,int>::Purge(&morphData.m_morphDatas.m_Memory);
    }
    morphData.m_bundleTypes.m_Size = 0;
    if ( (morphData.m_bundleTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<MorphBundleType_t,int>::Purge(&morphData.m_bundleTypes.m_Memory);
      if ( (morphData.m_bundleTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<MorphBundleType_t,int>::Purge(&morphData.m_bundleTypes.m_Memory);
    }
    CUtlScratchMemoryPool::~CUtlScratchMemoryPool(&memPool);
  }
  else
  {
    CModelBuilder::CreateRemappingTableForMesh(this, nMesh, pMeshData, 0);
  }
}


// CModelBuilder::CreateEmptyRemappingTable  (line 1570, @0x000000000314dc10, libserver.so)  // inlines: AddMultipleToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CUtlVector<short int> >, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, operator[]
// calls: CUtlVectorBase<short int, CUtlMemory<short int, int> >::SetCount, CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::Grow
void __fastcall CModelBuilder::CreateEmptyRemappingTable(CModelBuilder *const this, int nMesh)
{
  __int64 v2; // r13
  int v3; // r12d
  __int64 m_Size; // r14
  CUtlVector<short int,CUtlMemory<short int,int> > *m_pMemory; // rdx
  int v7; // r15d
  int m_nAllocationCount; // eax
  int v9; // r8d
  __int64 v10; // rax
  CUtlVector<short int,CUtlMemory<short int,int> > *v11; // rcx

  v2 = nMesh;
  v3 = nMesh + 1;
  m_Size = this->m_remappingTables.m_Size;
  if ( nMesh + 1 <= m_Size || (v7 = v3 - m_Size, v3 == m_Size) )
  {
    m_pMemory = this->m_remappingTables.m_Memory.m_pMemory;
  }
  else
  {
    m_nAllocationCount = this->m_remappingTables.m_Memory.m_nAllocationCount;
    if ( v3 > m_nAllocationCount )
      CUtlMemory<CUtlVector<short,CUtlMemory<short,int>>,int>::Grow(
        &this->m_remappingTables.m_Memory,
        v3 - m_nAllocationCount);
    this->m_remappingTables.m_Size = v3;
    m_pMemory = this->m_remappingTables.m_Memory.m_pMemory;
    if ( v7 > 0 )
    {
      v9 = 0;
      v10 = m_Size;
      do
      {
        v11 = &m_pMemory[v10];
        if ( &m_pMemory[v10] != 0 )
        {
          v11->m_Size = 0;
          v11->m_Memory.m_pMemory = 0;
          v11->m_Memory.m_nAllocationCount = 0;
          v11->m_Memory.m_nGrowSize = 0;
          m_pMemory = this->m_remappingTables.m_Memory.m_pMemory;
        }
        ++v9;
        ++v10;
      }
      while ( v7 > v9 );
    }
  }
  CUtlVectorBase<short,CUtlMemory<short,int>>::SetCount(&m_pMemory[v2], 0);
}


// CModelBuilder::AppendSkeletonsFromChildResources  (line 1579, @0x0000000003151090, libserver.so)  // inlines: CResourceNameGetter<InfoForResourceTypeCRenderMesh>, Finalize, GetData, GetResourceName, GetResourceName<512ul>, ResourceGetName, ResourceHandleToData<InfoForResourceTypeCRenderMesh>, String, V_strncpy<int>, operator CWeakHandle<InfoForResourceTypeCRenderMesh>, operator int
// calls: CModelSkeletonBuilder::AppendSkeleton, CModelSkeletonBuilder::AppendRenderMeshSkeleton, CModelBuilder::AppendFlexControllers, LoggingSystem_IsChannelEnabled, _V_strncpy, LoggingSystem_Log, CModelSkeletonBuilder::MarkBonesWithAttachmentsAsSimBones, CModelSkeletonBuilder::MarkBonesWithHitboxsAsSimBones, CModelSkeletonBuilder::MarkBonesWithConstraintsAsSimBones, CModelSkeletonBuilder::FixupFlagsAndParents, CModelSkeletonBuilder::SortBoneList, CRenderMesh::GetMorphSetData (14 total)
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel
// strings: "unable to load mesh \"%s\"\n"
// globals: LOG_MODELLIB
void __fastcall CModelBuilder::AppendSkeletonsFromChildResources(CModelBuilder *const this)
{
  CModelSkeletonBuilder *p_m_skeletonBuilder; // r13
  int m_Size; // eax
  unsigned __int64 v4; // r12
  __int64 v5; // r14
  CAnimationGroupResource *v6; // rax
  int v7; // r14d
  __int64 i; // r12
  const CRenderMesh *m_pData; // r15
  const ResourceBindingBase_t *m_pBinding; // rdx
  const CPhysAggregateData **v11; // rax
  unsigned __int64 v12; // r15
  const ResourceBindingBase_t *v13; // rdx
  const CRenderMesh *v14; // r12
  __int64 v15; // r12
  const CRenderMesh *v16; // r15
  const CMorphSetData *MorphSetData; // rax
  const ResourceBindingBase_t *v18; // r13
  const char **v19; // rax
  const char *v20; // rsi
  const char **m_Name; // rax
  const char *v22; // rsi
  const ResourceBindingBase_t *v23; // [rsp+0h] [rbp-250h]
  char v24[520]; // [rsp+10h] [rbp-240h] BYREF
  unsigned __int64 v25; // [rsp+218h] [rbp-38h]

  p_m_skeletonBuilder = &this->m_skeletonBuilder;
  v25 = __readfsqword(0x28u);
  m_Size = this->m_AnimGroups.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 8LL * (m_Size - 1) + 8;
    do
    {
      v6 = this->m_AnimGroups.m_Memory.m_pMemory[v4 / 8];
      if ( v6 != 0 )
        CModelSkeletonBuilder::AppendSkeleton(p_m_skeletonBuilder, *(v6 + 2));
      v4 += 8LL;
    }
    while ( v4 != v5 );
  }
  v7 = this->m_refMeshes.m_Size;
  for ( i = 0; v7 > i; ++i )
  {
    while ( 1 )
    {
      m_pBinding = this->m_refMeshes.m_Memory.m_pMemory[i].m_pBinding;
      if ( m_pBinding != 0 )
        break;
      if ( LoggingSystem_IsChannelEnabled(LOG_MODELLIB, 2) != 0 )
        goto LABEL_14;
LABEL_11:
      if ( v7 <= ++i )
        goto LABEL_16;
    }
    if ( m_pBinding->m_nRefCount.m_value > 0 )
    {
      m_pData = m_pBinding->m_pData;
      if ( m_pBinding->m_pData != 0 )
      {
        CModelSkeletonBuilder::AppendRenderMeshSkeleton(
          p_m_skeletonBuilder,
          &m_pData->m_skeleton,
          this->m_refLODGroupMasks.m_Memory.m_pMemory[i]);
        CModelBuilder::AppendFlexControllers(this, m_pData);
        goto LABEL_11;
      }
    }
    v23 = this->m_refMeshes.m_Memory.m_pMemory[i].m_pBinding;
    if ( LoggingSystem_IsChannelEnabled(LOG_MODELLIB, 2) == 0 )
      goto LABEL_11;
    m_Name = v23->m_Name;
    if ( m_Name != 0 )
    {
      v22 = "";
      if ( *m_Name != 0 )
        v22 = *m_Name;
      _V_strncpy(v24, v22, 512);
      goto LABEL_15;
    }
LABEL_14:
    _V_strncpy(v24, "", 512);
LABEL_15:
    LoggingSystem_Log(LOG_MODELLIB, 2, "unable to load mesh \"%s\"\n", v24);
  }
LABEL_16:
  v11 = this->m_refPhysicsData.m_pBinding;
  if ( v11 != 0 && *v11 != 0 )
    CModelSkeletonBuilder::AppendSkeleton(p_m_skeletonBuilder, *v11, 0);
  if ( v7 > 0 )
  {
    v12 = 0;
    do
    {
      v13 = this->m_refMeshes.m_Memory.m_pMemory[v12 / 8].m_pBinding;
      if ( v13 != 0 && v13->m_nRefCount.m_value > 0 )
      {
        v14 = v13->m_pData;
        if ( v13->m_pData != 0 )
        {
          CModelSkeletonBuilder::MarkBonesWithAttachmentsAsSimBones(p_m_skeletonBuilder, v13->m_pData);
          CModelSkeletonBuilder::MarkBonesWithHitboxsAsSimBones(p_m_skeletonBuilder, v14);
          CModelSkeletonBuilder::MarkBonesWithConstraintsAsSimBones(p_m_skeletonBuilder, v14);
        }
      }
      v12 += 8LL;
    }
    while ( v12 != 8LL * (v7 - 1) + 8 );
    v15 = 0;
    CModelSkeletonBuilder::FixupFlagsAndParents(p_m_skeletonBuilder);
    CModelSkeletonBuilder::SortBoneList(p_m_skeletonBuilder);
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = this->m_refMeshes.m_Memory.m_pMemory[v15].m_pBinding;
        if ( v18 != 0 )
          break;
        if ( LoggingSystem_IsChannelEnabled(LOG_MODELLIB, 2) != 0 )
          goto LABEL_33;
LABEL_30:
        if ( v7 <= ++v15 )
          return;
      }
      if ( v18->m_nRefCount.m_value > 0 )
      {
        v16 = v18->m_pData;
        if ( v18->m_pData != 0 )
        {
          MorphSetData = CRenderMesh::GetMorphSetData(v18->m_pData);
          CModelBuilder::CreateRemappingTableForMesh(this, v15, v16, MorphSetData);
          goto LABEL_30;
        }
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_MODELLIB, 2) == 0 )
        goto LABEL_30;
      v19 = v18->m_Name;
      if ( v19 != 0 )
      {
        v20 = "";
        if ( *v19 != 0 )
          v20 = *v19;
        _V_strncpy(v24, v20, 512);
        goto LABEL_34;
      }
LABEL_33:
      _V_strncpy(v24, "", 512);
LABEL_34:
      ++v15;
      LoggingSystem_Log(LOG_MODELLIB, 2, "unable to load mesh \"%s\"\n", v24);
      if ( v7 <= v15 )
        return;
    }
  }
  CModelSkeletonBuilder::FixupFlagsAndParents(p_m_skeletonBuilder);
  CModelSkeletonBuilder::SortBoneList(p_m_skeletonBuilder);
}


// CModelBuilder::AppendFlexControllers  (line 1654, @0x0000000003149e00, libserver.so)  // inlines: operator[]
// calls: CModelBuilder::AddFlexController
// callers: CModelBuilder::AppendFlexControllers, CModelBuilder::AppendFlexControllersFromOldData
void __fastcall CModelBuilder::AppendFlexControllers(CModelBuilder *const this, const CMorphSetData *pMorphSetData)
{
  int m_Size; // eax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi

  if ( pMorphSetData != 0 )
  {
    m_Size = pMorphSetData->m_FlexControllers.m_Size;
    if ( m_Size > 0 )
    {
      v5 = 0;
      v6 = 8 * (3LL * (m_Size - 1) + 3);
      do
      {
        v7 = v5;
        v5 += 24;
        CModelBuilder::AddFlexController(this, (pMorphSetData->m_FlexControllers.m_Memory.m_pMemory + v7));
      }
      while ( v5 != v6 );
    }
  }
}


// CModelBuilder::AppendFlexControllers  (line 1667, @0x0000000003149e60, libserver.so)
// calls: CRenderMesh::GetMorphSet, CModelBuilder::AppendFlexControllers
// callers: CModelBuilder::AppendSkeletonsFromChildResources
void __fastcall CModelBuilder::AppendFlexControllers(CModelBuilder *const this, const CRenderMesh *pMesh)
{
  const CMorphSet *MorphSet; // rax

  if ( pMesh != 0 )
  {
    MorphSet = CRenderMesh::GetMorphSet(pMesh);
    if ( MorphSet != 0 )
      CModelBuilder::AppendFlexControllers(this, MorphSet->m_pMorphSetData);
  }
}


// CModelBuilder::AppendFlexControllersFromOldData  (line 1681, @0x0000000003151420, libserver.so)  // inlines: CConvertOldDiskCtx, CMorphSetData, CStrongHandle, CUtlHashtable, CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CConvertOldDiskCtx, ~CMorphSetData, ~CStrongHandle, ~CUtlHashtable, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlScratchMemoryPool::CUtlScratchMemoryPool, CUtlString::Get, CMorphSetData::InitFromV0Data, CModelBuilder::AppendFlexControllers, CUtlHashtable<const ResourceBindingBase_t*, empty_t, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunctor<const ResourceBindingBase_t*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int>::Purge, CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::RemoveAll, CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::RemoveAll, CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::RemoveAll, CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown, CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::RemoveAll, CUtlScratchMemoryPool::~CUtlScratchMemoryPool (19 total)
void __fastcall CModelBuilder::AppendFlexControllersFromOldData(
        CModelBuilder *const this,
        const MorphSetData_t *pMorphSetData)
{
  CUtlScratchMemoryPool memPool; // [rsp+0h] [rbp-110h] BYREF
  CConvertOldDiskCtx ctx; // [rsp+10h] [rbp-100h] BYREF
  CMorphSetData morphData; // [rsp+50h] [rbp-C0h] BYREF

  CUtlScratchMemoryPool::CUtlScratchMemoryPool(&memPool, 4096, 0, 0);
  morphData.m_bundleTypes.m_Size = 0;
  memset(&morphData.m_bundleTypes.m_Memory, 0, 20);
  memset(&morphData.m_morphDatas.m_Memory, 0, 28);
  memset(&morphData.m_FlexDesc.m_Memory, 0, 20);
  memset(&morphData.m_FlexControllers.m_Memory, 0, 20);
  morphData.m_FlexRules.m_Memory.m_pMemory = 0;
  morphData.m_FlexRules.m_Memory.m_nAllocationCount = 0;
  morphData.m_FlexRules.m_Memory.m_nGrowSize = 0;
  CUtlString::Get(&this->m_name);
  ctx.m_bReportPool = 0;
  memset(&ctx.m_HandledSubResources, 0, 20);
  ctx.m_HandledSubResources.m_nMinSize = 32;
  ctx.m_HandledSubResources.m_bSizeLocked = 0;
  ctx.m_pModelPool = 0;
  ctx.m_pPool = &memPool;
  CMorphSetData::InitFromV0Data(&morphData, &ctx, pMorphSetData, 0);
  CModelBuilder::AppendFlexControllers(this, &morphData);
  CUtlHashtable<ResourceBindingBase_t const*,empty_t,DefaultHashFunctor<ResourceBindingBase_t const*>,DefaultEqualFunctor<ResourceBindingBase_t const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceBindingBase_t const*,empty_t>,int>>::RemoveAll(&ctx.m_HandledSubResources);
  CUtlMemory<CUtlHashtableEntry<ResourceBindingBase_t const*,empty_t>,int>::Purge(&ctx.m_HandledSubResources.m_table);
  CUtlVectorBase<CFlexRule,CUtlMemory<CFlexRule,int>>::RemoveAll(&morphData.m_FlexRules);
  if ( (morphData.m_FlexRules.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CFlexRule,int>::Purge(&morphData.m_FlexRules.m_Memory);
    if ( (morphData.m_FlexRules.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CFlexRule,int>::Purge(&morphData.m_FlexRules.m_Memory);
  }
  CUtlVectorBase<CFlexController,CUtlMemory<CFlexController,int>>::RemoveAll(&morphData.m_FlexControllers);
  if ( (morphData.m_FlexControllers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CFlexController,int>::Purge(&morphData.m_FlexControllers.m_Memory);
    if ( (morphData.m_FlexControllers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CFlexController,int>::Purge(&morphData.m_FlexControllers.m_Memory);
  }
  CUtlVectorBase<CFlexDesc,CUtlMemory<CFlexDesc,int>>::RemoveAll(&morphData.m_FlexDesc);
  if ( (morphData.m_FlexDesc.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CFlexDesc,int>::Purge(&morphData.m_FlexDesc.m_Memory);
    if ( (morphData.m_FlexDesc.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CFlexDesc,int>::Purge(&morphData.m_FlexDesc.m_Memory);
  }
  CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(&morphData.m_pTextureAtlas);
  CUtlVectorBase<CMorphData,CUtlMemory<CMorphData,int>>::RemoveAll(&morphData.m_morphDatas);
  if ( (morphData.m_morphDatas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CMorphData,int>::Purge(&morphData.m_morphDatas.m_Memory);
    if ( (morphData.m_morphDatas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CMorphData,int>::Purge(&morphData.m_morphDatas.m_Memory);
  }
  morphData.m_bundleTypes.m_Size = 0;
  if ( (morphData.m_bundleTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<MorphBundleType_t,int>::Purge(&morphData.m_bundleTypes.m_Memory);
    if ( (morphData.m_bundleTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<MorphBundleType_t,int>::Purge(&morphData.m_bundleTypes.m_Memory);
  }
  CUtlScratchMemoryPool::~CUtlScratchMemoryPool(&memPool);
}


// CModelBuilder::AddBoneFlexDriver  (line 1692, @0x000000000314b760, libserver.so)  // inlines: AddMultipleToTail, AddToTail, BuilderModelBoneFlexDriverControl_t, BuilderModelBoneFlexDriver_t, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Construct<BuilderModelBoneFlexDriverControl_t>, Construct<BuilderModelBoneFlexDriver_t>, CopyConstruct<BuilderModelBoneFlexDriverControl_t>, Element, GrowMemory, InsertMultipleBefore, operator[]
// calls: CUtlString::operator=, CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::GrowVector, CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::ShiftElementsRight, CUtlString::Get, CUtlString::Set, CUtlMemory<BuilderModelBoneFlexDriver_t, int>::Grow
// callers: CModelBuilder::AddBoneFlexDrivers
void __fastcall CModelBuilder::AddBoneFlexDriver(
        CModelBuilder *const this,
        const char *pBoneName,
        int nControlCount,
        const BuilderModelBoneFlexDriverControl_t *pControls)
{
  int m_Size; // r13d
  int v9; // eax
  __int64 v10; // rax
  BuilderModelBoneFlexDriver_t *v11; // r13
  __int64 v12; // rax
  BuilderModelBoneFlexDriver_t *v13; // rdx
  CUtlString *p_m_flexController; // rbx
  CUtlString *v15; // r15
  __int64 v16; // r14
  CUtlString *v17; // r12
  int m_pString; // eax
  const char *v19; // rax
  __int64 v20; // rax
  BuilderModelBoneFlexDriverControl_t *v21; // rdx
  int elem; // [rsp+Ch] [rbp-34h]

  m_Size = this->m_boneFlexDrivers.m_Size;
  v9 = m_Size;
  if ( m_Size == this->m_boneFlexDrivers.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<BuilderModelBoneFlexDriver_t,int>::Grow(&this->m_boneFlexDrivers.m_Memory, 1);
    v9 = this->m_boneFlexDrivers.m_Size;
  }
  this->m_boneFlexDrivers.m_Size = v9 + 1;
  v10 = m_Size;
  v11 = 0;
  v12 = v10;
  v13 = &this->m_boneFlexDrivers.m_Memory.m_pMemory[v12];
  if ( v13 != 0 )
  {
    v13->m_boneName.m_pString = 0;
    v13->m_controls.m_Size = 0;
    v13->m_controls.m_Memory.m_pMemory = 0;
    v13->m_controls.m_Memory.m_nAllocationCount = 0;
    v13->m_controls.m_Memory.m_nGrowSize = 0;
    v11 = &this->m_boneFlexDrivers.m_Memory.m_pMemory[v12];
  }
  CUtlString::operator=(&v11->m_boneName, pBoneName);
  if ( nControlCount != 0 )
  {
    elem = v11->m_controls.m_Size;
    CUtlVectorBase<BuilderModelBoneFlexDriverControl_t,CUtlMemory<BuilderModelBoneFlexDriverControl_t,int>>::GrowVector(
      &v11->m_controls,
      nControlCount);
    CUtlVectorBase<BuilderModelBoneFlexDriverControl_t,CUtlMemory<BuilderModelBoneFlexDriverControl_t,int>>::ShiftElementsRight(
      &v11->m_controls,
      elem,
      nControlCount);
    if ( pControls != 0 )
    {
      if ( nControlCount > 0 )
      {
        p_m_flexController = &pControls->m_flexController;
        v15 = &pControls[(nControlCount - 1) + 1].m_flexController;
        v16 = 24LL * elem - pControls - 8;
        do
        {
          v17 = (v11->m_controls.m_Memory.m_pMemory + p_m_flexController + v16);
          if ( v17 != 0 )
          {
            m_pString = p_m_flexController[-1].m_pString;
            v17[1].m_pString = 0;
            LODWORD(v17->m_pString) = m_pString;
            v19 = CUtlString::Get(p_m_flexController);
            CUtlString::Set(v17 + 1, v19);
            LODWORD(v17[2].m_pString) = p_m_flexController[1].m_pString;
            HIDWORD(v17[2].m_pString) = HIDWORD(p_m_flexController[1].m_pString);
          }
          p_m_flexController += 3;
        }
        while ( p_m_flexController != v15 );
      }
    }
    else if ( nControlCount > 0 )
    {
      v20 = elem;
      do
      {
        v21 = &v11->m_controls.m_Memory.m_pMemory[v20];
        if ( v21 != 0 )
          v21->m_flexController.m_pString = 0;
        ++v20;
      }
      while ( v20 != elem + (nControlCount - 1) + 1 );
    }
  }
}


// CModelBuilder::AddBoneFlexDrivers  (line 1700, @0x000000000314b930, libserver.so)  // inlines: operator[]
// calls: CUtlString::Get, CModelBuilder::AddBoneFlexDriver
void __fastcall CModelBuilder::AddBoneFlexDrivers(
        CModelBuilder *const this,
        const BuilderModelBoneFlexDriverList_t *pList)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rdi
  char *v6; // rdi
  const BuilderModelBoneFlexDriverControl_t *v7; // r15
  int v8; // r12d
  const char *v9; // rax

  if ( pList != 0 && pList->m_drivers.m_Size > 0 )
  {
    v3 = 0;
    v4 = 32 * ((pList->m_drivers.m_Size - 1) + 1LL);
    do
    {
      v5 = v3;
      v3 += 32;
      v6 = pList->m_drivers.m_Memory.m_pMemory + v5;
      v7 = *(v6 + 2);
      v8 = *(v6 + 2);
      v9 = CUtlString::Get(v6);
      CModelBuilder::AddBoneFlexDriver(this, v9, v8, v7);
    }
    while ( v3 != v4 );
  }
}


// CModelBuilder::InitFromPermData  (line 1713, @0x000000000314b9b0, libserver.so)  // inlines: AddMultipleToTail, Base, BuilderModelBoneFlexDriverControl_t, BuilderModelBoneFlexDriver_t, CBuilderMaterialGroup, CStrongHandle, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Construct<BuilderModelBoneFlexDriverControl_t>, Construct<BuilderModelBoneFlexDriver_t>, Construct<CBuilderMaterialGroup>, Construct<CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t> >, Construct<CStrongHandle<InfoForResourceTypeCRenderMesh> >, Construct<CStrongHandle<InfoForResourceTypeIMaterial2> >, Construct<CUtlString>, Count, GetPtr, GetRawPtr, GrowMemory, GrowVector, InsertMultipleBefore, ResolveOffset, ShiftElementsRight, operator char const*, operator=, operator[]
// calls: CUtlString::operator=, CBuilderModelInfo::operator=, CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::Grow, CUtlMemory<long long unsigned int, int>::Grow, CUtlMemory<unsigned char, int>::Grow, CStrongHandle<InfoForResourceTypeCRenderMesh>::Init, CUtlMemory<BuilderModelBoneFlexDriver_t, int>::Grow, CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::GrowVector, CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::ShiftElementsRight, CUtlMemory<CBuilderMaterialGroup, int>::Grow, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::Grow (16 total)
// callers: CModelBuilder::CModelBuilder
void __fastcall CModelBuilder::InitFromPermData(CModelBuilder *const this, const PermModelData_t *pPermData)
{
  __int64 m_nOffset; // rax
  const char *v5; // rsi
  const char *v6; // rax
  signed int m_nCount; // r13d
  int m_Size; // r14d
  __int64 v9; // rdx
  CStrongHandle<InfoForResourceTypeCPhysAggregateData>::ResourceHandleTyped_t *v10; // rax
  signed int v11; // r14d
  int v12; // r13d
  signed int v13; // r14d
  int v14; // r13d
  uint32 v15; // eax
  int v16; // r13d
  uint32 v17; // eax
  int v18; // r13d
  int m_nAllocationCount; // eax
  int v20; // r15d
  signed int v21; // edx
  __int64 v22; // rax
  CStrongHandle<InfoForResourceTypeCRenderMesh> *v23; // rcx
  int v24; // eax
  int v25; // r14d
  int v26; // eax
  int v27; // r14d
  __int64 v28; // r14
  __int64 v29; // rdx
  char *v30; // rcx
  int32 v31; // esi
  char *v32; // rcx
  char *v33; // rdx
  int32 v34; // ecx
  unsigned __int8 *v35; // rsi
  unsigned __int8 v36; // dl
  int v37; // r14d
  int v38; // eax
  BuilderModelBoneFlexDriver_t *v39; // rdi
  int v40; // ecx
  __int64 v41; // rdx
  BuilderModelBoneFlexDriver_t *v42; // rax
  int32 v43; // edx
  char *v44; // rax
  const char *v45; // rsi
  __int64 v46; // r13
  char *v47; // rax
  __int64 v48; // rdx
  const char *v49; // rdx
  __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r15
  int v54; // eax
  BuilderModelBoneFlexDriver_t *v55; // rcx
  __int64 v56; // r13
  __int64 v57; // rdi
  __int64 v58; // rax
  BuilderModelBoneFlexDriverControl_t *v59; // rsi
  int *v60; // r15
  BuilderModelBoneFlexDriverControl_t *v61; // r10
  CUtlString *p_m_flexController; // r14
  __int64 v63; // r13
  const char *v64; // rsi
  __int64 v65; // rax
  const char *v66; // rax
  CUtlString *v67; // rdi
  int v68; // r14d
  int v69; // eax
  CBuilderMaterialGroup *v70; // rdi
  int v71; // ecx
  __int64 v72; // rdx
  CBuilderMaterialGroup *v73; // rax
  int32 v74; // edx
  char *v75; // rax
  const char *v76; // rsi
  char *v77; // rax
  __int64 v78; // rdx
  const char *v79; // rdx
  __int64 v80; // r14
  int32 v81; // edx
  char *v82; // rax
  CBuilderMaterialGroup *v83; // rcx
  int v84; // r13d
  int v85; // r15d
  int v86; // esi
  int v87; // edx
  int v88; // edx
  __int64 v89; // rax
  CStrongHandle<InfoForResourceTypeIMaterial2> *v90; // rsi
  __int64 v91; // r15
  int32 v92; // edx
  char *v93; // rcx
  char *v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rsi
  const ResourceBinding_t<InfoForResourceTypeIMaterial2> *v97; // rsi
  CStrongHandle<InfoForResourceTypeIMaterial2> *v98; // rdi
  int v99; // eax
  int v100; // r15d
  CUtlString *v101; // rax
  signed int v102; // ecx
  __int64 v103; // rdx
  __int64 v104; // r13
  int32 v105; // ecx
  char *v106; // rdx
  char *v107; // rdx
  __int64 v108; // rcx
  const char *v109; // rsi
  const char *v110; // rcx
  CUtlString *v111; // rdi
  int v112; // eax
  int v113; // r15d
  CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t> *m_pMemory; // rax
  signed int v115; // ecx
  __int64 v116; // rdx
  __int64 v117; // r13
  int32 v118; // ecx
  char *v119; // rdx
  const ResourceBinding_t<InfoForResourceTypeAnimationGroupResourceData_t> *v120; // rsi
  CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t> *v121; // rdi
  BuilderModelBoneFlexDriver_t *v122; // [rsp+0h] [rbp-60h]
  CUtlVectorBase<BuilderModelBoneFlexDriverControl_t,CUtlMemory<BuilderModelBoneFlexDriverControl_t,int> > *p_m_controls; // [rsp+8h] [rbp-58h]
  CUtlVectorBase<BuilderModelBoneFlexDriverControl_t,CUtlMemory<BuilderModelBoneFlexDriverControl_t,int> > *v124; // [rsp+8h] [rbp-58h]
  int num; // [rsp+14h] [rbp-4Ch]
  int numa; // [rsp+14h] [rbp-4Ch]
  CResourceArray<ModelBoneFlexDriver_t> *g; // [rsp+18h] [rbp-48h]
  __int64 ga; // [rsp+18h] [rbp-48h]
  int v129; // [rsp+20h] [rbp-40h]
  CResourceArray<MaterialGroup_t> *p_m_materialGroups; // [rsp+20h] [rbp-40h]
  __int64 b; // [rsp+28h] [rbp-38h]
  __int64 ba; // [rsp+28h] [rbp-38h]

  m_nOffset = pPermData->m_name.m_nOffset;
  v5 = "";
  if ( m_nOffset != 0 )
  {
    v6 = pPermData + m_nOffset;
    if ( v6 != 0 )
      v5 = v6;
  }
  CUtlString::operator=(&this->m_name, v5);
  CBuilderModelInfo::operator=(&this->m_modelInfo, &pPermData->m_modelInfo);
  m_nCount = pPermData->m_refMeshes.m_nCount;
  m_Size = this->m_refMeshes.m_Size;
  if ( m_nCount == 0 )
    goto LABEL_5;
  m_nAllocationCount = this->m_refMeshes.m_Memory.m_nAllocationCount;
  v20 = m_nCount + m_Size;
  if ( m_nCount + m_Size > m_nAllocationCount )
    CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>,int>::Grow(
      &this->m_refMeshes.m_Memory,
      v20 - m_nAllocationCount);
  this->m_refMeshes.m_Size = v20;
  if ( m_nCount > 0 )
  {
    v21 = 0;
    v22 = m_Size;
    do
    {
      v23 = &this->m_refMeshes.m_Memory.m_pMemory[v22];
      if ( v23 != 0 )
        v23->m_pBinding = 0;
      ++v21;
      ++v22;
    }
    while ( m_nCount > v21 );
  }
  v24 = this->m_refMeshGroupMasks.m_Memory.m_nAllocationCount;
  v25 = m_nCount + this->m_refMeshGroupMasks.m_Size;
  if ( v25 > v24 )
    CUtlMemory<unsigned long long,int>::Grow(&this->m_refMeshGroupMasks.m_Memory, v25 - v24);
  this->m_refMeshGroupMasks.m_Size = v25;
  v26 = this->m_refLODGroupMasks.m_Memory.m_nAllocationCount;
  v27 = m_nCount + this->m_refLODGroupMasks.m_Size;
  if ( v27 > v26 )
    CUtlMemory<unsigned char,int>::Grow(&this->m_refLODGroupMasks.m_Memory, v27 - v26);
  this->m_refLODGroupMasks.m_Size = v27;
  if ( m_nCount > 0 )
  {
    v28 = 0;
    do
    {
      v29 = pPermData->m_refMeshes.m_nOffset;
      v30 = 0;
      if ( v29 != 0 )
        v30 = &pPermData->m_refMeshes + v29;
      CStrongHandle<InfoForResourceTypeCRenderMesh>::Init(&this->m_refMeshes.m_Memory.m_pMemory[v28], *&v30[8 * v28]);
      v31 = pPermData->m_refMeshGroupMasks.m_nOffset;
      v32 = 0;
      if ( v31 != 0 )
        v32 = &pPermData->m_refMeshGroupMasks + v31;
      this->m_refMeshGroupMasks.m_Memory.m_pMemory[v28] = *&v32[8 * v28];
      v33 = 0;
      v34 = pPermData->m_refLODGroupMasks.m_nOffset;
      v35 = &this->m_refLODGroupMasks.m_Memory.m_pMemory[v28];
      if ( v34 != 0 )
        v33 = &pPermData->m_refLODGroupMasks + v34;
      v36 = v33[v28++];
      *v35 = v36;
    }
    while ( m_nCount > v28 );
    if ( pPermData->m_refPhysicsData.m_nCount == 0 )
      goto LABEL_35;
  }
  else
  {
LABEL_5:
    if ( pPermData->m_refPhysicsData.m_nCount == 0 )
    {
LABEL_35:
      CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init(&this->m_refPhysicsData, 0);
      goto LABEL_9;
    }
  }
  v9 = pPermData->m_refPhysicsData.m_nOffset;
  v10 = 0;
  if ( v9 != 0 )
    v10 = (&pPermData->m_refPhysicsData + v9);
  CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init(&this->m_refPhysicsData, *v10);
LABEL_9:
  v11 = pPermData->m_refAnimGroups.m_nCount;
  v12 = this->m_refAnimGroups.m_Size;
  if ( v11 != 0 )
  {
    v112 = this->m_refAnimGroups.m_Memory.m_nAllocationCount;
    v113 = v11 + v12;
    if ( v11 + v12 > v112 )
      CUtlMemory<CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>,int>::Grow(
        &this->m_refAnimGroups.m_Memory,
        v113 - v112);
    this->m_refAnimGroups.m_Size = v113;
    if ( v11 > 0 )
    {
      m_pMemory = this->m_refAnimGroups.m_Memory.m_pMemory;
      v115 = 0;
      v116 = v12;
      do
      {
        if ( &m_pMemory[v116] != 0 )
        {
          m_pMemory[v116].m_pBinding = 0;
          m_pMemory = this->m_refAnimGroups.m_Memory.m_pMemory;
        }
        ++v115;
        ++v116;
      }
      while ( v11 > v115 );
      v117 = 0;
      while ( 1 )
      {
        v118 = pPermData->m_refAnimGroups.m_nOffset;
        v119 = 0;
        if ( v118 != 0 )
          v119 = &pPermData->m_refAnimGroups + v118;
        v120 = *&v119[8 * v117];
        v121 = &m_pMemory[v117++];
        CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>::Init(v121, v120);
        if ( v11 <= v117 )
          break;
        m_pMemory = this->m_refAnimGroups.m_Memory.m_pMemory;
      }
    }
  }
  v13 = pPermData->m_meshGroups.m_nCount;
  v14 = this->m_meshGroups.m_Size;
  if ( v13 != 0 )
  {
    v99 = this->m_meshGroups.m_Memory.m_nAllocationCount;
    v100 = v13 + v14;
    if ( v13 + v14 > v99 )
      CUtlMemory<CUtlString,int>::Grow(&this->m_meshGroups.m_Memory, v100 - v99);
    this->m_meshGroups.m_Size = v100;
    if ( v13 > 0 )
    {
      v101 = this->m_meshGroups.m_Memory.m_pMemory;
      v102 = 0;
      v103 = v14;
      do
      {
        if ( &v101[v103] != 0 )
        {
          v101[v103].m_pString = 0;
          v101 = this->m_meshGroups.m_Memory.m_pMemory;
        }
        ++v102;
        ++v103;
      }
      while ( v13 > v102 );
      v104 = 0;
      while ( 1 )
      {
        v105 = pPermData->m_meshGroups.m_nOffset;
        v106 = 0;
        if ( v105 != 0 )
          v106 = &pPermData->m_meshGroups + v105;
        v107 = &v106[4 * v104];
        v108 = *v107;
        v109 = "";
        if ( v108 != 0 )
        {
          v110 = &v107[v108];
          if ( v110 != 0 )
            v109 = v110;
        }
        v111 = &v101[v104++];
        CUtlString::operator=(v111, v109);
        if ( v13 <= v104 )
          break;
        v101 = this->m_meshGroups.m_Memory.m_pMemory;
      }
    }
  }
  v15 = pPermData->m_materialGroups.m_nCount;
  v16 = this->m_materialGroups.m_Size;
  num = v15;
  if ( v15 != 0 )
  {
    v68 = v15 + v16;
    v69 = this->m_materialGroups.m_Memory.m_nAllocationCount;
    if ( v68 > v69 )
      CUtlMemory<CBuilderMaterialGroup,int>::Grow(&this->m_materialGroups.m_Memory, v68 - v69);
    this->m_materialGroups.m_Size = v68;
    if ( num > 0 )
    {
      v70 = this->m_materialGroups.m_Memory.m_pMemory;
      v71 = 0;
      v72 = v16;
      do
      {
        v73 = &v70[v72];
        if ( &v70[v72] != 0 )
        {
          v73->m_name.m_pString = 0;
          v73->m_materials.m_Size = 0;
          v73->m_materials.m_Memory.m_pMemory = 0;
          v73->m_materials.m_Memory.m_nAllocationCount = 0;
          v73->m_materials.m_Memory.m_nGrowSize = 0;
          v70 = this->m_materialGroups.m_Memory.m_pMemory;
        }
        ++v71;
        ++v72;
      }
      while ( num > v71 );
      ga = 0;
      p_m_materialGroups = &pPermData->m_materialGroups;
      while ( 1 )
      {
        v74 = pPermData->m_materialGroups.m_nOffset;
        v75 = 0;
        if ( v74 != 0 )
          v75 = p_m_materialGroups + v74;
        v76 = "";
        v77 = &v75[12 * ga];
        ba = 12 * ga;
        v78 = *v77;
        if ( v78 != 0 )
        {
          v79 = &v77[v78];
          if ( v79 != 0 )
            v76 = v79;
        }
        v80 = ga;
        CUtlString::operator=(&v70[ga].m_name, v76);
        v81 = pPermData->m_materialGroups.m_nOffset;
        v82 = 0;
        if ( v81 != 0 )
          v82 = p_m_materialGroups + v81;
        v83 = &this->m_materialGroups.m_Memory.m_pMemory[v80];
        v84 = *&v82[ba + 8];
        v85 = v83->m_materials.m_Size;
        if ( v84 != 0 )
        {
          v86 = v83->m_materials.m_Memory.m_nAllocationCount;
          v87 = v84 + v85;
          if ( v84 + v85 > v86 )
          {
            v124 = &this->m_materialGroups.m_Memory.m_pMemory[v80];
            CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>,int>::Grow(&v83->m_materials.m_Memory, v87 - v86);
            v87 = v84 + v85;
            v83 = v124;
          }
          v83->m_materials.m_Size = v87;
          if ( v84 > 0 )
          {
            v88 = 0;
            v89 = v85;
            do
            {
              v90 = &v83->m_materials.m_Memory.m_pMemory[v89];
              if ( v90 != 0 )
                v90->m_pBinding = 0;
              ++v88;
              ++v89;
            }
            while ( v84 > v88 );
            v91 = 0;
            do
            {
              v92 = pPermData->m_materialGroups.m_nOffset;
              v93 = 0;
              if ( v92 != 0 )
                v93 = p_m_materialGroups + v92;
              v94 = &v93[ba];
              v95 = 0;
              v96 = *(v94 + 1);
              if ( v96 != 0 )
                v95 = &v94[v96 + 4];
              v97 = *(v95 + 8 * v91);
              v98 = &this->m_materialGroups.m_Memory.m_pMemory[v80].m_materials.m_Memory.m_pMemory[v91++];
              CStrongHandle<InfoForResourceTypeIMaterial2>::Init(v98, v97);
            }
            while ( v84 > v91 );
          }
        }
        if ( num <= ++ga )
          break;
        v70 = this->m_materialGroups.m_Memory.m_pMemory;
      }
    }
  }
  v17 = pPermData->m_boneFlexDrivers.m_nCount;
  v18 = this->m_boneFlexDrivers.m_Size;
  v129 = v17;
  if ( v17 != 0 )
  {
    v37 = v17 + v18;
    v38 = this->m_boneFlexDrivers.m_Memory.m_nAllocationCount;
    if ( v37 > v38 )
      CUtlMemory<BuilderModelBoneFlexDriver_t,int>::Grow(&this->m_boneFlexDrivers.m_Memory, v37 - v38);
    this->m_boneFlexDrivers.m_Size = v37;
    if ( v129 > 0 )
    {
      v39 = this->m_boneFlexDrivers.m_Memory.m_pMemory;
      v40 = 0;
      v41 = v18;
      do
      {
        v42 = &v39[v41];
        if ( &v39[v41] != 0 )
        {
          v42->m_boneName.m_pString = 0;
          v42->m_controls.m_Size = 0;
          v42->m_controls.m_Memory.m_pMemory = 0;
          v42->m_controls.m_Memory.m_nAllocationCount = 0;
          v42->m_controls.m_Memory.m_nGrowSize = 0;
          v39 = this->m_boneFlexDrivers.m_Memory.m_pMemory;
        }
        ++v40;
        ++v41;
      }
      while ( v129 > v40 );
      b = 0;
      g = &pPermData->m_boneFlexDrivers;
      while ( 1 )
      {
        v43 = pPermData->m_boneFlexDrivers.m_nOffset;
        v44 = 0;
        if ( v43 != 0 )
          v44 = g + v43;
        v45 = "";
        v46 = 16 * b;
        v47 = &v44[16 * b];
        v48 = *v47;
        if ( v48 != 0 )
        {
          v49 = &v47[v48];
          if ( v49 != 0 )
            v45 = v49;
        }
        v50 = b;
        CUtlString::operator=(&v39[b].m_boneName, v45);
        v51 = pPermData->m_boneFlexDrivers.m_nOffset;
        if ( v51 != 0 )
          v46 += g + v51;
        v52 = *(v46 + 8);
        v53 = 0;
        v54 = *(v46 + 12);
        if ( v52 != 0 )
          v53 = v46 + v52 + 8;
        v55 = &this->m_boneFlexDrivers.m_Memory.m_pMemory[v50];
        v56 = v55->m_controls.m_Size;
        if ( v54 != 0 )
        {
          v122 = &this->m_boneFlexDrivers.m_Memory.m_pMemory[v50];
          numa = v54;
          p_m_controls = &v55->m_controls;
          CUtlVectorBase<BuilderModelBoneFlexDriverControl_t,CUtlMemory<BuilderModelBoneFlexDriverControl_t,int>>::GrowVector(
            &v55->m_controls,
            v54);
          CUtlVectorBase<BuilderModelBoneFlexDriverControl_t,CUtlMemory<BuilderModelBoneFlexDriverControl_t,int>>::ShiftElementsRight(
            p_m_controls,
            v56,
            numa);
          if ( numa > 0 )
          {
            v57 = (numa - 1);
            v58 = v56;
            do
            {
              v59 = &v122->m_controls.m_Memory.m_pMemory[v58];
              if ( v59 != 0 )
                v59->m_flexController.m_pString = 0;
              ++v58;
            }
            while ( v58 != v56 + v57 + 1 );
            v60 = (v53 + 4);
            v61 = &this->m_boneFlexDrivers.m_Memory.m_pMemory[v50].m_controls.m_Memory.m_pMemory[v56];
            p_m_flexController = &v61->m_flexController;
            v63 = &v61[v57 + 1].m_flexController;
            do
            {
              v64 = "";
              LODWORD(p_m_flexController[-1].m_pString) = *(v60 - 1);
              v65 = *v60;
              if ( v65 != 0 )
              {
                v66 = v60 + v65;
                if ( v66 != 0 )
                  v64 = v66;
              }
              v67 = p_m_flexController;
              p_m_flexController += 3;
              v60 += 5;
              CUtlString::operator=(v67, v64);
              LODWORD(p_m_flexController[-2].m_pString) = *(v60 - 3);
              HIDWORD(p_m_flexController[-2].m_pString) = *(v60 - 2);
            }
            while ( p_m_flexController != v63 );
          }
        }
        if ( v129 <= ++b )
          break;
        v39 = this->m_boneFlexDrivers.m_Memory.m_pMemory;
      }
    }
  }
}


// CModelBuilder::InitFromModel  (line 1809, @0x000000000314c1b0, libserver.so)  // inlines: AddMultipleToTail, BuilderModelBoneFlexDriverControl_t, BuilderModelBoneFlexDriver_t, CBuilderMaterialGroup, CStrongHandle, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Construct<BuilderModelBoneFlexDriverControl_t>, Construct<BuilderModelBoneFlexDriver_t>, Construct<CBuilderMaterialGroup>, Construct<CStrongHandle<InfoForResourceTypeCRenderMesh> >, Construct<CStrongHandle<InfoForResourceTypeIMaterial2> >, Construct<CUtlString>, GetHandle, GrowMemory, GrowVector, Init, InsertMultipleBefore, ShiftElementsRight, ThreadInterlockedIncrement, operator++, operator=, operator[]
// calls: CUtlString::operator=, CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::Grow, CUtlMemory<long long unsigned int, int>::Grow, CUtlMemory<unsigned char, int>::Grow, CStrongHandle<InfoForResourceTypeCRenderMesh>::Init, CUtlMemory<BuilderModelBoneFlexDriver_t, int>::Grow, CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::GrowVector, CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::ShiftElementsRight, CUtlMemory<CBuilderMaterialGroup, int>::Grow, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::Grow, CStrongHandle<InfoForResourceTypeIMaterial2>::Init (14 total)
void __fastcall CModelBuilder::InitFromModel(CModelBuilder *const this, const CModel *pModel)
{
  int m_Size; // r14d
  int v5; // r13d
  const ResourceBindingBase_t *m_pBinding; // rsi
  int v7; // r13d
  int v8; // r14d
  int v9; // r13d
  int v10; // eax
  int v11; // r13d
  int v12; // eax
  int v13; // r13d
  int m_nAllocationCount; // eax
  int v15; // r15d
  int v16; // edx
  __int64 v17; // rax
  CStrongHandle<InfoForResourceTypeCRenderMesh> *v18; // rcx
  int v19; // eax
  int v20; // r13d
  int v21; // eax
  int v22; // r13d
  __int64 v23; // r13
  int v24; // r14d
  int v25; // eax
  BuilderModelBoneFlexDriver_t *v26; // rdi
  int v27; // ecx
  __int64 v28; // rdx
  BuilderModelBoneFlexDriver_t *v29; // rax
  CBoneFlexDriver *v30; // r13
  BuilderModelBoneFlexDriver_t *v31; // r8
  int v32; // r15d
  CBoneFlexDriverControl *v33; // rcx
  __int64 v34; // r13
  __int64 v35; // rdi
  __int64 v36; // rax
  BuilderModelBoneFlexDriverControl_t *v37; // rdx
  CUtlString *p_m_flexController; // r15
  BuilderModelBoneFlexDriverControl_t *v39; // r10
  CUtlString *v40; // r14
  __int64 v41; // r13
  int m_pString; // eax
  const CUtlString *v43; // rsi
  CUtlString *v44; // rdi
  int v45; // r14d
  int v46; // eax
  CBuilderMaterialGroup *v47; // rdi
  int v48; // ecx
  __int64 v49; // rdx
  CBuilderMaterialGroup *v50; // rax
  __int64 v51; // r14
  CBuilderMaterialGroup *v52; // r8
  int v53; // r13d
  int v54; // r15d
  int v55; // esi
  int v56; // ecx
  int v57; // ecx
  __int64 v58; // rax
  CStrongHandle<InfoForResourceTypeIMaterial2> *v59; // rsi
  __int64 v60; // r15
  const ResourceBinding_t<InfoForResourceTypeIMaterial2> *v61; // rsi
  CStrongHandle<InfoForResourceTypeIMaterial2> *v62; // rdi
  int v63; // eax
  int v64; // r15d
  CUtlString *m_pMemory; // rax
  int v66; // ecx
  __int64 v67; // rdx
  __int64 v68; // r13
  __int64 v69; // rdi
  int v70; // r14d
  int v71; // eax
  unsigned __int64 v72; // rax
  const CBoneFlexDriverControl *pSrcControls; // [rsp+8h] [rbp-58h]
  BuilderModelBoneFlexDriver_t *v74; // [rsp+10h] [rbp-50h]
  CUtlVectorBase<BuilderModelBoneFlexDriverControl_t,CUtlMemory<BuilderModelBoneFlexDriverControl_t,int> > *p_m_controls; // [rsp+18h] [rbp-48h]
  CUtlVectorBase<BuilderModelBoneFlexDriverControl_t,CUtlMemory<BuilderModelBoneFlexDriverControl_t,int> > *v76; // [rsp+18h] [rbp-48h]
  int v77; // [rsp+24h] [rbp-3Ch]
  int v78; // [rsp+24h] [rbp-3Ch]
  __int64 g; // [rsp+28h] [rbp-38h]
  __int64 ga; // [rsp+28h] [rbp-38h]

  CUtlString::operator=(&this->m_name, &pModel->m_name);
  this->m_modelInfo.m_nInherentFlags = pModel->m_nInherentFlags;
  this->m_modelInfo.m_vHullMin = pModel->m_vHullMin;
  this->m_modelInfo.m_vHullMax = pModel->m_vHullMax;
  this->m_modelInfo.m_vViewMin = pModel->m_vViewMin;
  this->m_modelInfo.m_vViewMax = pModel->m_vViewMax;
  this->m_modelInfo.m_flMass = pModel->m_flMass;
  this->m_modelInfo.m_vEyePosition = pModel->m_vEyePosition;
  this->m_modelInfo.m_flMaxEyeDeflection = pModel->m_flMaxEyeDeflection;
  CUtlString::operator=(&this->m_modelInfo.m_sSurfaceProperty, &pModel->m_sSurfaceProperty);
  CUtlString::operator=(&this->m_modelInfo.m_keyValueText, &pModel->m_keyValueText);
  m_Size = pModel->m_refMeshes.m_Size;
  v5 = this->m_refMeshes.m_Size;
  if ( m_Size != 0 )
  {
    m_nAllocationCount = this->m_refMeshes.m_Memory.m_nAllocationCount;
    v15 = m_Size + v5;
    if ( m_Size + v5 > m_nAllocationCount )
      CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>,int>::Grow(
        &this->m_refMeshes.m_Memory,
        v15 - m_nAllocationCount);
    this->m_refMeshes.m_Size = v15;
    if ( m_Size > 0 )
    {
      v16 = 0;
      v17 = v5;
      do
      {
        v18 = &this->m_refMeshes.m_Memory.m_pMemory[v17];
        if ( v18 != 0 )
          v18->m_pBinding = 0;
        ++v16;
        ++v17;
      }
      while ( m_Size > v16 );
    }
    v19 = this->m_refMeshGroupMasks.m_Memory.m_nAllocationCount;
    v20 = m_Size + this->m_refMeshGroupMasks.m_Size;
    if ( v20 > v19 )
      CUtlMemory<unsigned long long,int>::Grow(&this->m_refMeshGroupMasks.m_Memory, v20 - v19);
    this->m_refMeshGroupMasks.m_Size = v20;
    v21 = this->m_refLODGroupMasks.m_Memory.m_nAllocationCount;
    v22 = m_Size + this->m_refLODGroupMasks.m_Size;
    if ( v22 > v21 )
      CUtlMemory<unsigned char,int>::Grow(&this->m_refLODGroupMasks.m_Memory, v22 - v21);
    this->m_refLODGroupMasks.m_Size = v22;
    if ( m_Size > 0 )
    {
      v23 = 0;
      do
      {
        CStrongHandle<InfoForResourceTypeCRenderMesh>::Init(
          &this->m_refMeshes.m_Memory.m_pMemory[v23],
          pModel->m_refMeshes.m_Memory.m_pMemory[v23].m_pBinding);
        this->m_refMeshGroupMasks.m_Memory.m_pMemory[v23] = pModel->m_refMeshGroupMasks.m_Memory.m_pMemory[v23];
        this->m_refLODGroupMasks.m_Memory.m_pMemory[v23] = pModel->m_refLODGroupMasks.m_Memory.m_pMemory[v23];
        ++v23;
      }
      while ( m_Size > v23 );
    }
  }
  if ( this->m_refPhysicsData.m_pBinding != 0 )
    CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown(&this->m_refPhysicsData);
  m_pBinding = pModel->m_refPhysicsData.m_pBinding;
  this->m_refPhysicsData.m_pBinding = m_pBinding;
  if ( m_pBinding != 0 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, m_pBinding, 2, &this->m_refPhysicsData);
      m_pBinding = this->m_refPhysicsData.m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
  }
  v7 = pModel->m_AnimGroups.m_Size;
  if ( v7 != 0 )
  {
    v70 = v7 + this->m_AnimGroups.m_Size;
    v71 = this->m_AnimGroups.m_Memory.m_nAllocationCount;
    if ( v70 > v71 )
      CUtlMemory<CAnimationGroupResource *,int>::Grow(&this->m_AnimGroups.m_Memory, v70 - v71);
    this->m_AnimGroups.m_Size = v70;
    if ( v7 > 0 )
    {
      v72 = 0;
      do
      {
        this->m_AnimGroups.m_Memory.m_pMemory[v72 / 8] = pModel->m_AnimGroups.m_Memory.m_pMemory[v72 / 8];
        v72 += 8LL;
      }
      while ( v72 != 8LL * (v7 - 1) + 8 );
    }
  }
  v8 = pModel->m_meshGroups.m_Size;
  v9 = this->m_meshGroups.m_Size;
  if ( v8 != 0 )
  {
    v63 = this->m_meshGroups.m_Memory.m_nAllocationCount;
    v64 = v8 + v9;
    if ( v8 + v9 > v63 )
      CUtlMemory<CUtlString,int>::Grow(&this->m_meshGroups.m_Memory, v64 - v63);
    this->m_meshGroups.m_Size = v64;
    if ( v8 > 0 )
    {
      m_pMemory = this->m_meshGroups.m_Memory.m_pMemory;
      v66 = 0;
      v67 = v9;
      do
      {
        if ( &m_pMemory[v67] != 0 )
        {
          m_pMemory[v67].m_pString = 0;
          m_pMemory = this->m_meshGroups.m_Memory.m_pMemory;
        }
        ++v66;
        ++v67;
      }
      while ( v8 > v66 );
      v68 = 0;
      while ( 1 )
      {
        v69 = v68++;
        CUtlString::operator=(&m_pMemory[v69], &pModel->m_meshGroups.m_Memory.m_pMemory[v69]);
        if ( v8 <= v68 )
          break;
        m_pMemory = this->m_meshGroups.m_Memory.m_pMemory;
      }
    }
  }
  v10 = pModel->m_materialGroups.m_Size;
  v11 = this->m_materialGroups.m_Size;
  v77 = v10;
  if ( v10 != 0 )
  {
    v45 = v10 + v11;
    v46 = this->m_materialGroups.m_Memory.m_nAllocationCount;
    if ( v45 > v46 )
      CUtlMemory<CBuilderMaterialGroup,int>::Grow(&this->m_materialGroups.m_Memory, v45 - v46);
    this->m_materialGroups.m_Size = v45;
    if ( v77 > 0 )
    {
      v47 = this->m_materialGroups.m_Memory.m_pMemory;
      v48 = 0;
      v49 = v11;
      do
      {
        v50 = &v47[v49];
        if ( &v47[v49] != 0 )
        {
          v50->m_name.m_pString = 0;
          v50->m_materials.m_Size = 0;
          v50->m_materials.m_Memory.m_pMemory = 0;
          v50->m_materials.m_Memory.m_nAllocationCount = 0;
          v50->m_materials.m_Memory.m_nGrowSize = 0;
          v47 = this->m_materialGroups.m_Memory.m_pMemory;
        }
        ++v48;
        ++v49;
      }
      while ( v77 > v48 );
      ga = 0;
      while ( 1 )
      {
        v51 = ga;
        CUtlString::operator=(&v47[ga].m_name, &pModel->m_materialGroups.m_Memory.m_pMemory[ga].m_name);
        v52 = &this->m_materialGroups.m_Memory.m_pMemory[ga];
        v53 = pModel->m_materialGroups.m_Memory.m_pMemory[ga].m_materials.m_Size;
        v54 = v52->m_materials.m_Size;
        if ( v53 != 0 )
        {
          v55 = v52->m_materials.m_Memory.m_nAllocationCount;
          v56 = v53 + v54;
          if ( v53 + v54 > v55 )
          {
            v76 = &this->m_materialGroups.m_Memory.m_pMemory[ga];
            CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>,int>::Grow(&v52->m_materials.m_Memory, v56 - v55);
            v56 = v53 + v54;
            v52 = v76;
          }
          v52->m_materials.m_Size = v56;
          if ( v53 > 0 )
          {
            v57 = 0;
            v58 = v54;
            do
            {
              v59 = &v52->m_materials.m_Memory.m_pMemory[v58];
              if ( v59 != 0 )
                v59->m_pBinding = 0;
              ++v57;
              ++v58;
            }
            while ( v53 > v57 );
            v60 = 0;
            do
            {
              v61 = pModel->m_materialGroups.m_Memory.m_pMemory[v51].m_materials.m_Memory.m_pMemory[v60].m_pBinding;
              v62 = &this->m_materialGroups.m_Memory.m_pMemory[v51].m_materials.m_Memory.m_pMemory[v60++];
              CStrongHandle<InfoForResourceTypeIMaterial2>::Init(v62, v61);
            }
            while ( v53 > v60 );
          }
        }
        if ( v77 <= ++ga )
          break;
        v47 = this->m_materialGroups.m_Memory.m_pMemory;
      }
    }
  }
  v12 = pModel->m_boneFlexDrivers.m_Size;
  v13 = this->m_boneFlexDrivers.m_Size;
  v78 = v12;
  if ( v12 != 0 )
  {
    v24 = v12 + v13;
    v25 = this->m_boneFlexDrivers.m_Memory.m_nAllocationCount;
    if ( v24 > v25 )
      CUtlMemory<BuilderModelBoneFlexDriver_t,int>::Grow(&this->m_boneFlexDrivers.m_Memory, v24 - v25);
    this->m_boneFlexDrivers.m_Size = v24;
    if ( v78 > 0 )
    {
      v26 = this->m_boneFlexDrivers.m_Memory.m_pMemory;
      v27 = 0;
      v28 = v13;
      do
      {
        v29 = &v26[v28];
        if ( &v26[v28] != 0 )
        {
          v29->m_boneName.m_pString = 0;
          v29->m_controls.m_Size = 0;
          v29->m_controls.m_Memory.m_pMemory = 0;
          v29->m_controls.m_Memory.m_nAllocationCount = 0;
          v29->m_controls.m_Memory.m_nGrowSize = 0;
          v26 = this->m_boneFlexDrivers.m_Memory.m_pMemory;
        }
        ++v27;
        ++v28;
      }
      while ( v78 > v27 );
      g = 0;
      while ( 1 )
      {
        CUtlString::operator=(&v26[g].m_boneName, &pModel->m_boneFlexDrivers.m_Memory.m_pMemory[g].m_boneName);
        v30 = &pModel->m_boneFlexDrivers.m_Memory.m_pMemory[g];
        v31 = &this->m_boneFlexDrivers.m_Memory.m_pMemory[g];
        v32 = v30->m_controls.m_Size;
        v33 = v30->m_controls.m_Memory.m_pMemory;
        v34 = v31->m_controls.m_Size;
        if ( v32 != 0 )
        {
          pSrcControls = v33;
          v74 = &this->m_boneFlexDrivers.m_Memory.m_pMemory[g];
          p_m_controls = &v31->m_controls;
          CUtlVectorBase<BuilderModelBoneFlexDriverControl_t,CUtlMemory<BuilderModelBoneFlexDriverControl_t,int>>::GrowVector(
            &v31->m_controls,
            v32);
          CUtlVectorBase<BuilderModelBoneFlexDriverControl_t,CUtlMemory<BuilderModelBoneFlexDriverControl_t,int>>::ShiftElementsRight(
            p_m_controls,
            v34,
            v32);
          if ( v32 > 0 )
          {
            v35 = (v32 - 1);
            v36 = v34;
            do
            {
              v37 = &v74->m_controls.m_Memory.m_pMemory[v36];
              if ( v37 != 0 )
                v37->m_flexController.m_pString = 0;
              ++v36;
            }
            while ( v36 != v34 + v35 + 1 );
            p_m_flexController = &pSrcControls->m_flexController;
            v39 = &this->m_boneFlexDrivers.m_Memory.m_pMemory[g].m_controls.m_Memory.m_pMemory[v34];
            v40 = &v39->m_flexController;
            v41 = &v39[v35 + 1].m_flexController;
            do
            {
              m_pString = p_m_flexController[-1].m_pString;
              v43 = p_m_flexController;
              v44 = v40;
              v40 += 3;
              p_m_flexController += 4;
              LODWORD(v40[-4].m_pString) = m_pString;
              CUtlString::operator=(v44, v43);
              LODWORD(v40[-2].m_pString) = HIDWORD(p_m_flexController[-3].m_pString);
              HIDWORD(v40[-2].m_pString) = p_m_flexController[-2].m_pString;
            }
            while ( v40 != v41 );
          }
        }
        if ( v78 <= ++g )
          break;
        v26 = this->m_boneFlexDrivers.m_Memory.m_pMemory;
      }
    }
  }
}


// CModelBuilder::FillInPermData  (line 1903, @0x000000000314fab0, libserver.so)  // inlines: Allocate<CResourceExtReference<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> > >, Allocate<CResourceExtReference<CWeakHandle<InfoForResourceTypeCPhysAggregateData> > >, Allocate<CResourceExtReference<CWeakHandle<InfoForResourceTypeCRenderMesh> > >, Allocate<CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > >, Allocate<CResourceString>, Allocate<MaterialGroup_t>, Allocate<ModelBoneFlexDriverControl_t>, Allocate<ModelBoneFlexDriver_t>, Allocate<PermModelExtPart_t>, Allocate<char>, Allocate<float>, Allocate<long long unsigned int>, Allocate<short int>, Allocate<short unsigned int>, Allocate<unsigned char>, AllocateUnaligned<CResourceExtReference<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> > >, AllocateUnaligned<CResourceExtReference<CWeakHandle<InfoForResourceTypeCPhysAggregateData> > >, AllocateUnaligned<CResourceExtReference<CWeakHandle<InfoForResourceTypeCRenderMesh> > >, AllocateUnaligned<CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > >, AllocateUnaligned<CResourceString>, AllocateUnaligned<MaterialGroup_t>, AllocateUnaligned<ModelBoneFlexDriverControl_t>, AllocateUnaligned<ModelBoneFlexDriver_t>, AllocateUnaligned<PermModelExtPart_t>, AllocateUnaligned<char>, AllocateUnaligned<float>, AllocateUnaligned<long long unsigned int>, AllocateUnaligned<short int>, AllocateUnaligned<short unsigned int>, AllocateUnaligned<unsigned char>, CResourceArray, CResourceArrayBase, CResourcePointer, CResourcePointerBase, CResourceString, CTransform, CUnlockedResource, Construct<CResourceString>, Construct<MaterialGroup_t>, Construct<ModelBoneFlexDriverControl_t>, Construct<ModelBoneFlexDriver_t>, Construct<PermModelExtPart_t>, GetDataPtr, GetPtr, GetRawPtr, Init, MakeStringToken, MaterialGroup_t, ModelBoneFlexDriverControl_t, ModelBoneFlexDriver_t, PermModelExtPart_t, ResolveOffset, SetPtr, SetRawPtr, V_memset, V_strlen, VectorAligned, WriteString, memcpy, memset, operator CResourceExtReference<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> >*, operator CResourceExtReference<CWeakHandle<InfoForResourceTypeCPhysAggregateData> >*, operator CResourceExtReference<CWeakHandle<InfoForResourceTypeCRenderMesh> >*, operator CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> >*, operator CResourceString*, operator MaterialGroup_t*, operator ModelBoneFlexDriverControl_t*, operator ModelBoneFlexDriver_t*, operator PermModelExtPart_t*, operator ResourceHandle_t, operator char const*, operator char*, operator float*, operator long long unsigned int*, operator short int*, operator short unsigned int*, operator unsigned char*, operator=, operator[]
// calls: CUtlString::Get, strlen, CResourceStream::Align, CResourceStream::AllocateBytes, memcpy, CBuilderModelInfo::FillInPermData, CModelBuilder::FindExtPartByName, WriteHandleToExtRef, CModelSkeletonBuilder::FillInPermData, MurmurHash2LowerCase, RegisterStringToken
// callers: CModelBuilder::CompileToPermDataPointer
void __fastcall CModelBuilder::FillInPermData(
        CModelBuilder *const this,
        PermModelData_t *pPermData,
        CResourceStream *pResourceStream)
{
  CModelBuilder *v3; // r15
  const char *v4; // rax
  const char *v5; // rbx
  int v6; // eax
  signed int v7; // r12d
  unsigned int Bytes; // eax
  uint8 *m_pData; // rdx
  uint v10; // eax
  void *v11; // rax
  signed int m_Size; // r12d
  unsigned int v13; // eax
  uint8 *v14; // rdx
  uint8 *v15; // rcx
  uint v16; // eax
  uint8 *v17; // rax
  int i; // edx
  int32 v19; // ecx
  __int64 v20; // rbx
  int v21; // eax
  void *v22; // rdi
  signed int v23; // r14d
  unsigned int v24; // eax
  uint8 *v25; // r9
  uint8 *v26; // rdx
  uint v27; // eax
  int32 m_nOffset; // edx
  char *v29; // rax
  __int64 v30; // r15
  char *v31; // rax
  int32 v32; // eax
  char *v33; // r14
  const char *v34; // rax
  char *v35; // rax
  int32 v36; // esi
  char *v37; // rax
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4
  vec_t w; // xmm1_4
  vec_t v41; // xmm3_4
  vec_t x; // xmm0_4
  char *v43; // rax
  int32 v44; // esi
  BuilderModelExtPart_t *v45; // r13
  const char *v46; // rax
  const char *v47; // r15
  signed int v48; // ebx
  unsigned int v49; // eax
  uint8 *v50; // rdx
  uint v51; // ecx
  uint v52; // eax
  int32 v53; // eax
  unsigned int v54; // eax
  uint8 *v55; // rdx
  uint v56; // ecx
  uint v57; // eax
  int32 v58; // eax
  unsigned int v59; // eax
  uint8 *v60; // rdx
  uint v61; // ecx
  uint v62; // eax
  int32 v63; // eax
  __int64 v64; // r12
  __int64 v65; // rax
  char *v66; // rsi
  int32 v67; // edi
  char *v68; // rsi
  char *v69; // rax
  int32 v70; // esi
  bool v71; // bl
  unsigned int v72; // eax
  uint8 *v73; // rdx
  uint v74; // ecx
  uint v75; // eax
  int32 v76; // eax
  unsigned int v77; // eax
  uint8 *v78; // rdx
  uint v79; // ecx
  uint v80; // eax
  int32 v81; // eax
  CResourceExtReferenceBase *v82; // rsi
  int32 v83; // eax
  int32 v84; // edx
  _QWORD *v85; // rax
  signed int v86; // ebx
  unsigned int v87; // eax
  uint8 *v88; // rdx
  uint v89; // ecx
  uint v90; // eax
  __int64 v91; // rax
  unsigned __int64 v92; // r13
  __int64 v93; // rbx
  char *v94; // rsi
  CResourceExtReferenceBase *v95; // rsi
  const ResourceBindingBase_t *m_pBinding; // rdi
  signed int v97; // ebx
  unsigned int v98; // eax
  uint8 *v99; // rdx
  uint8 *v100; // rcx
  uint v101; // eax
  uint8 *v102; // rax
  int j; // edx
  int32 v104; // ecx
  __int64 v105; // r13
  CModelBuilder *v106; // rbx
  int v107; // eax
  void *v108; // rdi
  signed int v109; // r14d
  unsigned int v110; // eax
  uint8 *v111; // rdx
  uint8 *v112; // r8
  uint v113; // eax
  int32 v114; // edx
  char *v115; // rax
  char *v116; // rax
  const char *v117; // rax
  const char *v118; // r13
  signed int v119; // r14d
  unsigned int v120; // eax
  uint8 *v121; // rdx
  uint8 *v122; // rcx
  uint v123; // eax
  uint8 *v124; // rax
  int k; // edx
  int32 v126; // ecx
  __int64 v127; // rbx
  const char *v128; // rax
  const char *v129; // r14
  int v130; // eax
  void *v131; // rdi
  signed int v132; // r12d
  unsigned int v133; // eax
  uint8 *v134; // rcx
  uint8 *v135; // rdx
  uint v136; // eax
  int32 v137; // edx
  char *v138; // rax
  __int64 v139; // r12
  char *v140; // rax
  int v141; // r14d
  unsigned int v142; // eax
  uint v143; // esi
  uint8 *v144; // rdx
  uint v145; // eax
  int32 v146; // ecx
  char *v147; // rdx
  char *v148; // rdx
  uint v149; // ecx
  __int64 v150; // rax
  CModelBuilder *v151; // r14
  int32 v152; // ecx
  char *v153; // rdx
  char *v154; // rdx
  __int64 v155; // rsi
  __int64 v156; // rcx
  CResourceExtReferenceBase *v157; // rsi
  const ResourceBindingBase_t *v158; // rdi
  signed int v159; // ebx
  unsigned int v160; // eax
  uint8 *v161; // rdx
  uint v162; // ecx
  uint v163; // eax
  int32 v164; // edi
  __int64 v165; // rcx
  uint32 v166; // edx
  __int64 v167; // rax
  char *v168; // rsi
  uint v169; // r12d
  uint32 v170; // r13d
  unsigned int v171; // eax
  uint8 *v172; // rdx
  uint v173; // ecx
  uint v174; // eax
  int32 v175; // eax
  int *p_m_Size; // rsi
  unsigned __int64 v177; // r8
  int v178; // r9d
  __int64 v179; // rbx
  int *v180; // rdx
  int v181; // ecx
  __int64 v182; // rax
  int32 v183; // edi
  char *v184; // rsi
  char *v185; // rsi
  __int16 v186; // dx
  uint32 v187; // ebx
  unsigned int v188; // eax
  uint8 *v189; // rdx
  uint v190; // ecx
  uint v191; // eax
  int32 v192; // esi
  __int64 v193; // rax
  int v194; // edx
  char *v195; // rcx
  signed int v196; // ebx
  unsigned int v197; // eax
  uint8 *v198; // rdx
  uint8 *v199; // rcx
  uint v200; // eax
  uint8 *v201; // rax
  int m; // edx
  __int64 v203; // rax
  char *v204; // rdx
  const char *v205; // rax
  const char *v206; // r12
  int v207; // eax
  signed int v208; // ebx
  unsigned int v209; // eax
  uint8 *v210; // rdx
  uint v211; // eax
  void *v212; // rax
  const char *v213; // rbx
  uint32 v214; // eax
  int v215; // r12d
  unsigned int v216; // eax
  uint8 *v217; // rdx
  uint8 *v218; // rbx
  uint v219; // eax
  uint8 *v220; // rax
  int n; // edx
  int32 v222; // eax
  __int64 v223; // rdx
  __int64 v224; // r12
  unsigned int v225; // eax
  uint8 *v226; // rdx
  uint v227; // eax
  void *v228; // rax
  const char *v229; // r14
  uint32 v230; // eax
  __int64 v231; // rbx
  __int64 v232; // r13
  _DWORD *v233; // rbx
  const char *v234; // rax
  const char *v235; // r15
  int v236; // eax
  CModelBuilder *v237; // [rsp+8h] [rbp-88h]
  __int64 v238; // [rsp+10h] [rbp-80h]
  unsigned __int64 v239; // [rsp+18h] [rbp-78h]
  __int64 v241; // [rsp+30h] [rbp-60h]
  signed int numBytes; // [rsp+3Ch] [rbp-54h]
  signed int numBytesa; // [rsp+3Ch] [rbp-54h]
  uint numBytesb; // [rsp+3Ch] [rbp-54h]
  __int64 g; // [rsp+40h] [rbp-50h]
  __int64 ga; // [rsp+40h] [rbp-50h]
  CResourceArray<PermModelExtPart_t> *pDstDriver; // [rsp+48h] [rbp-48h]
  CResourceArray<MaterialGroup_t> *pDstDrivera; // [rsp+48h] [rbp-48h]
  ModelBoneFlexDriver_t *pDstDriverb; // [rsp+48h] [rbp-48h]
  CModelBuilder *thisa; // [rsp+58h] [rbp-38h]
  CModelBuilder *thisb; // [rsp+58h] [rbp-38h]
  CModelBuilder *thisc; // [rsp+58h] [rbp-38h]
  CModelBuilder *thisd; // [rsp+58h] [rbp-38h]
  uint32 thise; // [rsp+58h] [rbp-38h]

  v3 = this;
  memset(pPermData, 0, sizeof(PermModelData_t));
  v4 = CUtlString::Get(&this->m_name);
  v5 = v4;
  if ( v4 != 0 )
  {
    v6 = strlen(v4);
    if ( v6 != 0 )
    {
      v7 = v6 + 1;
      CResourceStream::Align(pResourceStream, 1u, 0);
      Bytes = CResourceStream::AllocateBytes(pResourceStream, v7);
      m_pData = pResourceStream->m_pData;
      v10 = Bytes - m_pData;
      if ( pResourceStream->m_nUsed < v10 )
      {
        memcpy(0, v5, v7);
      }
      else
      {
        v11 = memcpy(&m_pData[v10], v5, v7);
        if ( v11 != 0 )
        {
          pPermData->m_name.m_nOffset = v11 - pPermData;
          goto LABEL_6;
        }
      }
    }
  }
  pPermData->m_name.m_nOffset = 0;
LABEL_6:
  CBuilderModelInfo::FillInPermData(&v3->m_modelInfo, &pPermData->m_modelInfo, pResourceStream);
  m_Size = v3->m_ExtParts.m_Size;
  CResourceStream::Align(pResourceStream, 0x10u, 0);
  v13 = CResourceStream::AllocateBytes(pResourceStream, 48 * m_Size);
  v14 = pResourceStream->m_pData;
  v15 = 0;
  v16 = v13 - v14;
  if ( pResourceStream->m_nUsed >= v16 )
    v15 = &v14[v16];
  if ( m_Size != 0 )
  {
    v17 = v15;
    for ( i = 0; i != m_Size; ++i )
    {
      if ( v17 != 0 )
      {
        *(v17 + 3) = 0;
        *(v17 + 8) = 0;
      }
      v17 += 48;
    }
    v19 = v15 - (pPermData + 84);
  }
  else
  {
    v19 = 0;
  }
  v20 = 0;
  pPermData->m_ExtParts.m_nOffset = v19;
  pPermData->m_ExtParts.m_nCount = m_Size;
  pDstDriver = &pPermData->m_ExtParts;
  if ( m_Size > 0 )
  {
    thisa = v3;
    do
    {
      v45 = &thisa->m_ExtParts.m_Memory.m_pMemory[v20];
      v46 = CUtlString::Get(&v45->m_Name);
      v47 = v46;
      if ( v46 != 0 )
      {
        v21 = strlen(v46);
        v22 = 0;
        if ( v21 != 0 )
        {
          v23 = v21 + 1;
          CResourceStream::Align(pResourceStream, 1u, 0);
          v24 = CResourceStream::AllocateBytes(pResourceStream, v23);
          v25 = 0;
          v26 = pResourceStream->m_pData;
          v27 = v24 - v26;
          if ( pResourceStream->m_nUsed >= v27 )
            v25 = &v26[v27];
          v22 = memcpy(v25, v47, v23);
        }
      }
      else
      {
        v22 = 0;
      }
      m_nOffset = pPermData->m_ExtParts.m_nOffset;
      v29 = 0;
      if ( m_nOffset != 0 )
        v29 = pDstDriver + m_nOffset;
      v30 = 48 * v20;
      v31 = &v29[48 * v20];
      if ( v22 != 0 )
        *(v31 + 8) = v22 - (v31 + 32);
      else
        *(v31 + 8) = 0;
      v32 = pPermData->m_ExtParts.m_nOffset;
      v33 = 0;
      if ( v32 != 0 )
        v33 = pDstDriver + v32;
      v34 = CUtlString::Get(&v45->m_ParentName);
      *&v33[v30 + 36] = CModelBuilder::FindExtPartByName(thisa, v34);
      v35 = 0;
      v36 = pPermData->m_ExtParts.m_nOffset;
      if ( v36 != 0 )
        v35 = pDstDriver + v36;
      v37 = &v35[v30];
      y = v45->m_Transform.m_vPosition.y;
      z = v45->m_Transform.m_vPosition.z;
      *v37 = v45->m_Transform.m_vPosition.x;
      *(v37 + 1) = y;
      *(v37 + 2) = z;
      w = v45->m_Transform.m_orientation.w;
      v41 = v45->m_Transform.m_orientation.y;
      x = v45->m_Transform.m_orientation.x;
      *(v37 + 6) = LODWORD(v45->m_Transform.m_orientation.z);
      *(v37 + 5) = v41;
      *(v37 + 4) = x;
      *(v37 + 7) = w;
      v43 = 0;
      v44 = pPermData->m_ExtParts.m_nOffset;
      if ( v44 != 0 )
        v43 = pDstDriver + v44;
      ++v20;
      WriteHandleToExtRef(v45->m_Model.m_pBinding, &v43[v30 + 40]);
    }
    while ( m_Size > v20 );
    v3 = thisa;
  }
  v48 = v3->m_refMeshes.m_Size;
  CResourceStream::Align(pResourceStream, 8u, 0);
  v49 = CResourceStream::AllocateBytes(pResourceStream, 8 * v48);
  v50 = pResourceStream->m_pData;
  v51 = 0;
  v52 = v49 - v50;
  if ( pResourceStream->m_nUsed >= v52 )
    v51 = v50 + v52;
  v53 = 0;
  if ( v48 != 0 )
    v53 = v51 - (pPermData + 92);
  pPermData->m_refMeshes.m_nOffset = v53;
  pPermData->m_refMeshes.m_nCount = v48;
  CResourceStream::Align(pResourceStream, 8u, 0);
  v54 = CResourceStream::AllocateBytes(pResourceStream, 8 * v48);
  v55 = pResourceStream->m_pData;
  v56 = 0;
  v57 = v54 - v55;
  if ( pResourceStream->m_nUsed >= v57 )
    v56 = v55 + v57;
  v58 = 0;
  if ( v48 != 0 )
    v58 = v56 - (pPermData + 100);
  pPermData->m_refMeshGroupMasks.m_nOffset = v58;
  pPermData->m_refMeshGroupMasks.m_nCount = v48;
  CResourceStream::Align(pResourceStream, 1u, 0);
  v59 = CResourceStream::AllocateBytes(pResourceStream, v48);
  v60 = pResourceStream->m_pData;
  v61 = 0;
  v62 = v59 - v60;
  if ( pResourceStream->m_nUsed >= v62 )
    v61 = v60 + v62;
  v63 = 0;
  if ( v48 != 0 )
    v63 = v61 - (pPermData + 116);
  pPermData->m_refLODGroupMasks.m_nOffset = v63;
  pPermData->m_refLODGroupMasks.m_nCount = v48;
  if ( v48 > 0 )
  {
    v64 = 0;
    do
    {
      v65 = pPermData->m_refMeshes.m_nOffset;
      v66 = 0;
      if ( v65 != 0 )
        v66 = &pPermData->m_refMeshes + v65;
      WriteHandleToExtRef(v3->m_refMeshes.m_Memory.m_pMemory[v64].m_pBinding, &v66[8 * v64]);
      v67 = pPermData->m_refMeshGroupMasks.m_nOffset;
      v68 = 0;
      if ( v67 != 0 )
        v68 = &pPermData->m_refMeshGroupMasks + v67;
      v69 = 0;
      *&v68[8 * v64] = v3->m_refMeshGroupMasks.m_Memory.m_pMemory[v64];
      v70 = pPermData->m_refLODGroupMasks.m_nOffset;
      if ( v70 != 0 )
        v69 = &pPermData->m_refLODGroupMasks + v70;
      v69[v64] = v3->m_refLODGroupMasks.m_Memory.m_pMemory[v64];
      ++v64;
    }
    while ( v48 > v64 );
  }
  v71 = v3->m_refPhysicsData.m_pBinding != 0;
  CResourceStream::Align(pResourceStream, 8u, 0);
  v72 = CResourceStream::AllocateBytes(pResourceStream, 8 * v71);
  v73 = pResourceStream->m_pData;
  v74 = 0;
  v75 = v72 - v73;
  if ( pResourceStream->m_nUsed >= v75 )
    v74 = v73 + v75;
  v76 = 0;
  if ( v71 )
    v76 = v74 - (pPermData + 132);
  pPermData->m_refPhysicsData.m_nOffset = v76;
  pPermData->m_refPhysicsData.m_nCount = v71;
  CResourceStream::Align(pResourceStream, 8u, 0);
  v77 = CResourceStream::AllocateBytes(pResourceStream, 8 * v71);
  v78 = pResourceStream->m_pData;
  v79 = 0;
  v80 = v77 - v78;
  if ( pResourceStream->m_nUsed >= v80 )
    v79 = v78 + v80;
  v81 = 0;
  if ( v71 )
    v81 = v79 - (pPermData + 108);
  pPermData->m_refPhysGroupMasks.m_nOffset = v81;
  pPermData->m_refPhysGroupMasks.m_nCount = v71;
  if ( v71 )
  {
    v82 = 0;
    v83 = pPermData->m_refPhysicsData.m_nOffset;
    if ( v83 != 0 )
      v82 = (&pPermData->m_refPhysicsData + v83);
    WriteHandleToExtRef(v3->m_refPhysicsData.m_pBinding, v82);
    v84 = pPermData->m_refPhysGroupMasks.m_nOffset;
    v85 = 0;
    if ( v84 != 0 )
      v85 = (&pPermData->m_refPhysGroupMasks + v84);
    *v85 = -1;
  }
  CResourceStream::Align(pResourceStream, 8u, 0);
  CResourceStream::AllocateBytes(pResourceStream, 0);
  pPermData->m_refPhysicsHitboxData.m_nOffset = 0;
  pPermData->m_refPhysicsHitboxData.m_nCount = 0;
  v86 = v3->m_refAnimGroups.m_Size;
  CResourceStream::Align(pResourceStream, 8u, 0);
  v87 = CResourceStream::AllocateBytes(pResourceStream, 8 * v86);
  v88 = pResourceStream->m_pData;
  v89 = 0;
  v90 = v87 - v88;
  if ( pResourceStream->m_nUsed >= v90 )
    v89 = v88 + v90;
  v91 = 0;
  if ( v86 != 0 )
    v91 = (v89 - (pPermData + 148));
  pPermData->m_refAnimGroups.m_nOffset = v91;
  pPermData->m_refAnimGroups.m_nCount = v86;
  if ( v86 > 0 )
  {
    v92 = 0;
    v93 = 8LL * (v86 - 1) + 8;
    while ( 1 )
    {
      v94 = 0;
      if ( v91 != 0 )
        v94 = &pPermData->m_refAnimGroups + v91;
      v95 = &v94[v92];
      m_pBinding = v3->m_refAnimGroups.m_Memory.m_pMemory[v92 / 8].m_pBinding;
      v92 += 8LL;
      WriteHandleToExtRef(m_pBinding, v95);
      if ( v92 == v93 )
        break;
      v91 = pPermData->m_refAnimGroups.m_nOffset;
    }
  }
  v97 = v3->m_meshGroups.m_Size;
  CResourceStream::Align(pResourceStream, 4u, 0);
  v98 = CResourceStream::AllocateBytes(pResourceStream, 4 * v97);
  v99 = pResourceStream->m_pData;
  v100 = 0;
  v101 = v98 - v99;
  if ( pResourceStream->m_nUsed >= v101 )
    v100 = &v99[v101];
  if ( v97 != 0 )
  {
    v102 = v100;
    for ( j = 0; j != v97; ++j )
    {
      if ( v102 != 0 )
        *v102 = 0;
      v102 += 4;
    }
    v104 = v100 - (pPermData + 164);
  }
  else
  {
    v104 = 0;
  }
  pPermData->m_meshGroups.m_nOffset = v104;
  pPermData->m_meshGroups.m_nCount = v97;
  if ( v97 > 0 )
  {
    v105 = 4LL * (v97 - 1) + 4;
    v106 = 0;
    thisb = v105;
    do
    {
      while ( 1 )
      {
        v117 = CUtlString::Get((v3->m_meshGroups.m_Memory.m_pMemory + 2 * v106));
        v118 = v117;
        if ( v117 != 0 )
        {
          v107 = strlen(v117);
          v108 = 0;
          if ( v107 != 0 )
          {
            v109 = v107 + 1;
            CResourceStream::Align(pResourceStream, 1u, 0);
            v110 = CResourceStream::AllocateBytes(pResourceStream, v109);
            v111 = pResourceStream->m_pData;
            v112 = 0;
            v113 = v110 - v111;
            if ( pResourceStream->m_nUsed >= v113 )
              v112 = &v111[v113];
            v108 = memcpy(v112, v118, v109);
          }
        }
        else
        {
          v108 = 0;
        }
        v114 = pPermData->m_meshGroups.m_nOffset;
        v115 = 0;
        if ( v114 != 0 )
          v115 = &pPermData->m_meshGroups + v114;
        v116 = &v115[v106];
        if ( v108 == 0 )
          break;
        v106 = (v106 + 4);
        *v116 = v108 - v116;
        if ( v106 == thisb )
          goto LABEL_103;
      }
      v106 = (v106 + 4);
      *v116 = 0;
    }
    while ( v106 != thisb );
  }
LABEL_103:
  pPermData->m_nDefaultMeshGroupMask = v3->m_nDefaultMeshGroupMask;
  v119 = v3->m_materialGroups.m_Size;
  numBytes = v119;
  CResourceStream::Align(pResourceStream, 4u, 0);
  v120 = CResourceStream::AllocateBytes(pResourceStream, 12 * v119);
  v121 = pResourceStream->m_pData;
  v122 = 0;
  v123 = v120 - v121;
  if ( pResourceStream->m_nUsed >= v123 )
    v122 = &v121[v123];
  if ( v119 != 0 )
  {
    v124 = v122;
    for ( k = 0; k != v119; ++k )
    {
      if ( v124 != 0 )
      {
        *v124 = 0;
        *(v124 + 1) = 0;
        *(v124 + 2) = 0;
      }
      v124 += 12;
    }
    v126 = v122 - (pPermData + 172);
  }
  else
  {
    v126 = 0;
  }
  g = 0;
  pPermData->m_materialGroups.m_nOffset = v126;
  pPermData->m_materialGroups.m_nCount = v119;
  pDstDrivera = &pPermData->m_materialGroups;
  if ( v119 > 0 )
  {
    do
    {
      v127 = g;
      v128 = CUtlString::Get(&v3->m_materialGroups.m_Memory.m_pMemory[g].m_name);
      v129 = v128;
      if ( v128 != 0 )
      {
        v130 = strlen(v128);
        v131 = 0;
        if ( v130 != 0 )
        {
          v132 = v130 + 1;
          CResourceStream::Align(pResourceStream, 1u, 0);
          v133 = CResourceStream::AllocateBytes(pResourceStream, v132);
          v134 = 0;
          v135 = pResourceStream->m_pData;
          v136 = v133 - v135;
          if ( pResourceStream->m_nUsed >= v136 )
            v134 = &v135[v136];
          v131 = memcpy(v134, v129, v132);
        }
      }
      else
      {
        v131 = 0;
      }
      v137 = pPermData->m_materialGroups.m_nOffset;
      v138 = 0;
      if ( v137 != 0 )
        v138 = pDstDrivera + v137;
      v139 = 12 * g;
      v140 = &v138[12 * g];
      if ( v131 != 0 )
        *v140 = v131 - v140;
      else
        *v140 = 0;
      v141 = v3->m_materialGroups.m_Memory.m_pMemory[v127].m_materials.m_Size;
      CResourceStream::Align(pResourceStream, 8u, 0);
      v142 = CResourceStream::AllocateBytes(pResourceStream, 8 * v141);
      v143 = 0;
      v144 = pResourceStream->m_pData;
      v145 = v142 - v144;
      if ( pResourceStream->m_nUsed >= v145 )
        v143 = v144 + v145;
      v146 = pPermData->m_materialGroups.m_nOffset;
      v147 = 0;
      if ( v146 != 0 )
        v147 = pDstDrivera + v146;
      v148 = &v147[v139];
      v149 = 0;
      if ( v141 != 0 )
        v149 = v143 - (v148 + 4);
      *(v148 + 1) = v149;
      *(v148 + 2) = v141;
      if ( v141 > 0 )
      {
        v150 = 8LL * (v141 - 1) + 8;
        v151 = 0;
        thisc = v150;
        do
        {
          v152 = pPermData->m_materialGroups.m_nOffset;
          v153 = 0;
          if ( v152 != 0 )
            v153 = pDstDrivera + v152;
          v154 = &v153[v139];
          v155 = 0;
          v156 = *(v154 + 1);
          if ( v156 != 0 )
            v155 = &v154[v156 + 4];
          v157 = (v151 + v155);
          v158 = *(&v3->m_materialGroups.m_Memory.m_pMemory[v127].m_materials.m_Memory.m_pMemory->m_pBinding + v151);
          v151 = (v151 + 8);
          WriteHandleToExtRef(v158, v157);
        }
        while ( v151 != thisc );
      }
      ++g;
    }
    while ( numBytes > g );
  }
  CModelSkeletonBuilder::FillInPermData(&v3->m_skeletonBuilder, &pPermData->m_modelSkeleton, pResourceStream);
  v159 = v3->m_remappingTables.m_Size;
  CResourceStream::Align(pResourceStream, 2u, 0);
  v160 = CResourceStream::AllocateBytes(pResourceStream, 2 * v159);
  v161 = pResourceStream->m_pData;
  v162 = 0;
  v163 = v160 - v161;
  if ( pResourceStream->m_nUsed >= v163 )
    v162 = v161 + v163;
  v164 = 0;
  if ( v159 != 0 )
    v164 = v162 - (pPermData + 248);
  pPermData->m_remappingTableStarts.m_nOffset = v164;
  pPermData->m_remappingTableStarts.m_nCount = v159;
  if ( v159 <= 0 )
  {
    v169 = 0;
    v170 = 0;
  }
  else
  {
    v165 = 0;
    v166 = 0;
    v167 = 0;
    while ( 1 )
    {
      v168 = 0;
      if ( v164 != 0 )
        v168 = &pPermData->m_remappingTableStarts + v164;
      *&v168[v167] = v166;
      v167 += 2;
      v166 += v3->m_remappingTables.m_Memory.m_pMemory[v165++].m_Size;
      if ( v167 == 2LL * (v159 - 1) + 2 )
        break;
      v164 = pPermData->m_remappingTableStarts.m_nOffset;
    }
    v169 = 2 * v166;
    v170 = v166;
  }
  CResourceStream::Align(pResourceStream, 2u, 0);
  v171 = CResourceStream::AllocateBytes(pResourceStream, v169);
  v172 = pResourceStream->m_pData;
  v173 = 0;
  v174 = v171 - v172;
  if ( pResourceStream->m_nUsed >= v174 )
    v173 = v172 + v174;
  v175 = 0;
  if ( v170 != 0 )
    v175 = v173 - (pPermData + 240);
  pPermData->m_remappingTable.m_nOffset = v175;
  pPermData->m_remappingTable.m_nCount = v170;
  if ( v159 > 0 )
  {
    p_m_Size = &v3->m_remappingTables.m_Memory.m_pMemory->m_Size;
    v177 = 0;
    v178 = 0;
    v179 = 8 * (3LL * (v159 - 1) + 3);
    v180 = p_m_Size;
    if ( *p_m_Size <= 0 )
      goto LABEL_158;
    while ( 1 )
    {
      v181 = v178;
      v182 = 0;
      do
      {
        v183 = pPermData->m_remappingTable.m_nOffset;
        ++v181;
        v184 = 0;
        if ( v183 != 0 )
          v184 = &pPermData->m_remappingTable + v183;
        v185 = &v184[v182];
        v186 = *(*(v180 + 1) + v182);
        v182 += 2;
        *&v185[2 * v178] = v186;
        p_m_Size = &v3->m_remappingTables.m_Memory.m_pMemory->m_Size;
        v180 = &p_m_Size[v177 / 4];
      }
      while ( p_m_Size[v177 / 4] > v181 - v178 );
      v177 += 24LL;
      if ( v177 == v179 )
        break;
      while ( 1 )
      {
        v180 = &p_m_Size[v177 / 4];
        v178 = v181;
        if ( p_m_Size[v177 / 4] > 0 )
          break;
LABEL_158:
        v177 += 24LL;
        v181 = v178;
        if ( v177 == v179 )
          goto LABEL_159;
      }
    }
  }
LABEL_159:
  v187 = v3->m_lodGroupSwitchDistances.m_Size;
  CResourceStream::Align(pResourceStream, 4u, 0);
  v188 = CResourceStream::AllocateBytes(pResourceStream, 4 * v187);
  v189 = pResourceStream->m_pData;
  v190 = 0;
  v191 = v188 - v189;
  if ( pResourceStream->m_nUsed >= v191 )
    v190 = v189 + v191;
  v192 = 0;
  if ( v187 != 0 )
    v192 = v190 - (pPermData + 124);
  pPermData->m_lodGroupSwitchDistances.m_nOffset = v192;
  pPermData->m_lodGroupSwitchDistances.m_nCount = v187;
  if ( v3->m_lodGroupSwitchDistances.m_Size > 0 )
  {
    v193 = 0;
    v194 = 0;
    while ( 1 )
    {
      v195 = 0;
      if ( v192 != 0 )
        v195 = &pPermData->m_lodGroupSwitchDistances + v192;
      ++v194;
      *&v195[v193 * 4] = v3->m_lodGroupSwitchDistances.m_Memory.m_pMemory[v193];
      ++v193;
      if ( v3->m_lodGroupSwitchDistances.m_Size <= v194 )
        break;
      v192 = pPermData->m_lodGroupSwitchDistances.m_nOffset;
    }
  }
  v196 = v3->m_boneFlexDrivers.m_Size;
  CResourceStream::Align(pResourceStream, 4u, 0);
  v197 = CResourceStream::AllocateBytes(pResourceStream, 16 * v196);
  v198 = pResourceStream->m_pData;
  v199 = 0;
  v200 = v197 - v198;
  if ( pResourceStream->m_nUsed >= v200 )
    v199 = &v198[v200];
  if ( v196 != 0 )
  {
    v201 = v199;
    for ( m = 0; m != v196; ++m )
    {
      if ( v201 != 0 )
      {
        *v201 = 0;
        *(v201 + 2) = 0;
        *(v201 + 3) = 0;
      }
      v201 += 16;
    }
    v203 = v199 - (pPermData + 256);
  }
  else
  {
    v203 = 0;
  }
  pPermData->m_boneFlexDrivers.m_nOffset = v203;
  pPermData->m_boneFlexDrivers.m_nCount = v196;
  if ( v196 > 0 )
  {
    v239 = 0;
    v238 = 16 * ((v196 - 1) + 1LL);
    v237 = v3;
    while ( 1 )
    {
      v204 = 0;
      ga = &v237->m_boneFlexDrivers.m_Memory.m_pMemory[v239 / 0x10];
      if ( v203 != 0 )
        v204 = &pPermData->m_boneFlexDrivers + v203;
      pDstDriverb = &v204[v239];
      v205 = CUtlString::Get(ga);
      v206 = v205;
      if ( v205 == 0 )
        goto LABEL_218;
      v207 = strlen(v205);
      if ( v207 == 0 )
        goto LABEL_218;
      v208 = v207 + 1;
      CResourceStream::Align(pResourceStream, 1u, 0);
      v209 = CResourceStream::AllocateBytes(pResourceStream, v208);
      v210 = pResourceStream->m_pData;
      v211 = v209 - v210;
      if ( pResourceStream->m_nUsed < v211 )
        break;
      v212 = memcpy(&v210[v211], v206, v208);
      if ( v212 == 0 )
        goto LABEL_218;
      pDstDriverb->m_boneName.m_nOffset = v212 - pDstDriverb;
LABEL_186:
      v213 = CUtlString::Get(ga);
      v214 = 0;
      if ( v213 != 0 && *v213 != 0 )
      {
        v214 = MurmurHash2LowerCase(v213, 0x31415926u);
        if ( g_bUpdateStringTokenDatabase )
        {
          thise = v214;
          RegisterStringToken(v214, v213, 0, 1);
          v214 = thise;
        }
      }
      pDstDriverb->m_boneNameToken = v214;
      v215 = *(ga + 8);
      CResourceStream::Align(pResourceStream, 4u, 0);
      v216 = CResourceStream::AllocateBytes(pResourceStream, 20 * v215);
      v217 = pResourceStream->m_pData;
      v218 = 0;
      v219 = v216 - v217;
      if ( pResourceStream->m_nUsed >= v219 )
        v218 = &v217[v219];
      if ( v215 != 0 )
      {
        v220 = v218;
        for ( n = 0; n != v215; ++n )
        {
          if ( v220 != 0 )
            *(v220 + 1) = 0;
          v220 += 20;
        }
        v222 = v218 - (pDstDriverb + 8);
      }
      else
      {
        v222 = 0;
      }
      pDstDriverb->m_controls.m_nOffset = v222;
      pDstDriverb->m_controls.m_nCount = v215;
      if ( v215 > 0 )
      {
        thisd = 0;
        v223 = 3LL * (v215 - 1) + 3;
        v224 = 0;
        v241 = 8 * v223;
        while ( 1 )
        {
          v231 = 0;
          v232 = *(ga + 16) + v224;
          if ( v222 != 0 )
            v231 = &pDstDriverb->m_controls + v222;
          v233 = (thisd + v231);
          *v233 = *v232;
          v234 = CUtlString::Get((v232 + 8));
          v235 = v234;
          if ( v234 == 0 )
            goto LABEL_209;
          v236 = strlen(v234);
          if ( v236 == 0 )
            goto LABEL_209;
          numBytesa = v236 + 1;
          CResourceStream::Align(pResourceStream, 1u, 0);
          v225 = CResourceStream::AllocateBytes(pResourceStream, numBytesa);
          v226 = pResourceStream->m_pData;
          v227 = v225 - v226;
          if ( pResourceStream->m_nUsed < v227 )
          {
            memcpy(0, v235, numBytesa);
            v233[1] = 0;
            goto LABEL_201;
          }
          v228 = memcpy(&v226[v227], v235, numBytesa);
          if ( v228 != 0 )
            v233[1] = v228 - (v233 + 4);
          else
LABEL_209:
            v233[1] = 0;
LABEL_201:
          v229 = CUtlString::Get((v232 + 8));
          v230 = 0;
          if ( v229 != 0 && *v229 != 0 )
          {
            v230 = MurmurHash2LowerCase(v229, 0x31415926u);
            if ( g_bUpdateStringTokenDatabase )
            {
              numBytesb = v230;
              RegisterStringToken(v230, v229, 0, 1);
              v230 = numBytesb;
            }
          }
          thisd = (thisd + 20);
          v233[2] = v230;
          v224 += 24;
          v233[3] = *(v232 + 16);
          v233[4] = *(v232 + 20);
          if ( v224 == v241 )
            break;
          v222 = pDstDriverb->m_controls.m_nOffset;
        }
      }
      v239 += 16LL;
      if ( v239 == v238 )
        return;
      v203 = pPermData->m_boneFlexDrivers.m_nOffset;
    }
    memcpy(0, v206, v208);
LABEL_218:
    pDstDriverb->m_boneName.m_nOffset = 0;
    goto LABEL_186;
  }
}


// CModelBuilder::FindExtPartByName  (line 2039, @0x0000000003148c70, libserver.so)  // inlines: operator==, operator[]
// calls: CUtlString::IsEqual_CaseSensitive
// callers: CModelBuilder::FillInPermData
int __fastcall CModelBuilder::FindExtPartByName(const CModelBuilder *const this, const char *pName)
{
  __int64 v4; // rbx

  v4 = 0;
  if ( this->m_ExtParts.m_Size <= 0 )
    return -1;
  while ( !CUtlString::IsEqual_CaseSensitive(&this->m_ExtParts.m_Memory.m_pMemory[v4].m_Name, pName) )
  {
    if ( this->m_ExtParts.m_Size <= ++v4 )
      return -1;
  }
  return v4;
}


// CModelBuilder::CompileToPermDataPointer  (line 2049, @0x0000000003150c40, libserver.so)  // inlines: Allocate<PermModelData_t>, AllocateUnaligned<PermModelData_t>, CResourceArray, CResourceArrayBase, CResourcePointer, CResourcePointerBase, CResourceString, CUnlockedResource, Construct<PermModelData_t>, GetDataPtr, GetPtr, MemAlloc_AllocAlignedFunc, ModelSkeletonData_t, PermModelData_t, PermModelInfo_t, V_memcpy, memcpy, operator PermModelData_t*
// calls: CResourceStream::Align, CResourceStream::AllocateBytes, CModelBuilder::FillInPermData, memcpy, operator new, CResourceStreamVM::CResourceStreamVM, operator delete, _Unwind_Resume
PermModelData_t *__fastcall CModelBuilder::CompileToPermDataPointer(
        CModelBuilder *const this,
        CResourceStream *pResourceStream)
{
  char v3; // r12
  CResourceStreamVM *v4; // rbx
  uint m_nUsed; // r14d
  unsigned int Bytes; // eax
  uint8 *m_pData; // rdx
  PermModelData_t *v8; // rsi
  uint v9; // eax
  bool v10; // zf
  PermModelData_t *v11; // rdx
  size_t v13; // rdx
  __int64 v14; // rax
  PermModelData_t *v15; // r12

  v3 = 0;
  v4 = pResourceStream;
  if ( pResourceStream == 0 )
  {
    v4 = operator new(0x28u);
    CResourceStreamVM::CResourceStreamVM(v4, 0x100000u);
    v3 = 1;
  }
  m_nUsed = v4->m_nUsed;
  CResourceStream::Align(v4, 8u, 0);
  Bytes = CResourceStream::AllocateBytes(v4, 0x108u);
  m_pData = v4->m_pData;
  v8 = 0;
  v9 = Bytes - m_pData;
  if ( v4->m_nUsed >= v9 )
  {
    v10 = &m_pData[v9] == 0;
    v11 = &m_pData[v9];
    v8 = v11;
    if ( !v10 )
    {
      v11->m_name.m_nOffset = 0;
      v11->m_modelInfo.m_sSurfaceProperty.m_nOffset = 0;
      v11->m_modelInfo.m_keyValueText.m_nOffset = 0;
      v11->m_ExtParts.m_nOffset = 0;
      v11->m_ExtParts.m_nCount = 0;
      v11->m_refMeshes.m_nOffset = 0;
      v11->m_refMeshes.m_nCount = 0;
      v11->m_refMeshGroupMasks.m_nOffset = 0;
      v11->m_refMeshGroupMasks.m_nCount = 0;
      v11->m_refPhysGroupMasks.m_nOffset = 0;
      v11->m_refPhysGroupMasks.m_nCount = 0;
      v11->m_refLODGroupMasks.m_nOffset = 0;
      v11->m_refLODGroupMasks.m_nCount = 0;
      v11->m_lodGroupSwitchDistances.m_nOffset = 0;
      v11->m_lodGroupSwitchDistances.m_nCount = 0;
      v11->m_refPhysicsData.m_nOffset = 0;
      v11->m_refPhysicsData.m_nCount = 0;
      v11->m_refPhysicsHitboxData.m_nOffset = 0;
      v11->m_refPhysicsHitboxData.m_nCount = 0;
      v11->m_refAnimGroups.m_nOffset = 0;
      v11->m_refAnimGroups.m_nCount = 0;
      v11->m_refSequenceGroups.m_nOffset = 0;
      v11->m_refSequenceGroups.m_nCount = 0;
      v11->m_meshGroups.m_nOffset = 0;
      v11->m_meshGroups.m_nCount = 0;
      v11->m_materialGroups.m_nOffset = 0;
      v11->m_materialGroups.m_nCount = 0;
      v11->m_modelSkeleton.m_boneName.m_nOffset = 0;
      v11->m_modelSkeleton.m_boneName.m_nCount = 0;
      v11->m_modelSkeleton.m_nParent.m_nOffset = 0;
      v11->m_modelSkeleton.m_nParent.m_nCount = 0;
      v11->m_modelSkeleton.m_boneSphere.m_nOffset = 0;
      v11->m_modelSkeleton.m_boneSphere.m_nCount = 0;
      v11->m_modelSkeleton.m_nFlag.m_nOffset = 0;
      v11->m_modelSkeleton.m_nFlag.m_nCount = 0;
      v11->m_modelSkeleton.m_bonePosParent.m_nOffset = 0;
      v11->m_modelSkeleton.m_bonePosParent.m_nCount = 0;
      v11->m_modelSkeleton.m_boneRotParent.m_nOffset = 0;
      v11->m_modelSkeleton.m_boneRotParent.m_nCount = 0;
      v11->m_remappingTable.m_nOffset = 0;
      v11->m_remappingTable.m_nCount = 0;
      v11->m_remappingTableStarts.m_nOffset = 0;
      v11->m_remappingTableStarts.m_nCount = 0;
      v11->m_boneFlexDrivers.m_nOffset = 0;
      v11->m_boneFlexDrivers.m_nCount = 0;
    }
  }
  CModelBuilder::FillInPermData(this, v8, v4);
  if ( v3 == 0 )
    return &v4->m_pData[m_nUsed];
  v13 = v4->m_nUsed;
  if ( v4->m_nUsed != 0 )
  {
    v14 = (**g_pMemAlloc)(g_pMemAlloc, v13 + 23);
    v15 = ((v14 + 23) & 0xFFFFFFFFFFFFFFF0LL);
    v15[-1].m_boneFlexDrivers = v14;
    v13 = v4->m_nUsed;
  }
  else
  {
    v15 = 0;
  }
  memcpy(v15, v4->m_pData, v13);
  (*(v4->_vptr_CResourceStream + 1))(v4);
  return v15;
}


