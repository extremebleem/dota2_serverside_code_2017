
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// Log_SequenceDifference  (line 25, @0x0000000002f477a0, libserver.so)
void Log_SequenceDifference(const CStudioHdr *pHdr, const char *pSeqName, const char *pFormat, ...)
{
  ;
}


// Log_ModelDifference  (line 48, @0x0000000002f477b0, libserver.so)
void Log_ModelDifference(const CStudioHdr *pHdr, const char *pFormat, ...)
{
  ;
}


// CStudioHdr::CStudioHdr  (line 75, @0x0000000002f477c0, libserver.so)  // inlines: Init
void __fastcall CStudioHdr::CStudioHdr(CStudioHdr *const this)
{
  this->m_pModel = 0;
}


// CStudioHdr::CStudioHdr  (line 80, @0x0000000002f477d0, libserver.so)  // inlines: Init, numbones
// calls: CModel::NumBones
void __fastcall CStudioHdr::CStudioHdr(CStudioHdr *const this, const CModel *pModel)
{
  this->m_pModel = pModel;
  if ( pModel != 0 )
  {
    CModel::NumBones(pModel);
    this->m_bHasBoneContents = 0;
  }
}


// CStudioHdr::CStudioHdr  (line 85, @0x0000000002f47850, libserver.so)  // inlines: CWeakHandle, Init
// calls: CStudioHdr::Init
// callers: CBasePropDoor::CalcDoorSounds, CPropDoorRotatingBreakable::PrecacheBreakables, CreatePhysicsProp<CPhysicsProp>, CPropDoorRotatingBreakable::Spawn
void __fastcall CStudioHdr::CStudioHdr(CStudioHdr *const this, HModel hModel, IGameModelInfo *pModelInfo)
{
  HModel v3; // [rsp+0h] [rbp-10h] BYREF

  v3.m_pBinding = hModel.m_pBinding->m_pData;
  CStudioHdr::Init(this, &v3, pModelInfo);
}


// CStudioHdr::Init  (line 90, @0x0000000002f47800, libserver.so)  // inlines: Init, ResourceHandleToData<InfoForResourceTypeCModel>, numbones, operator int, operator!=
// calls: CModel::NumBones
// callers: CStudioHdr::CStudioHdr
void __fastcall CStudioHdr::Init(CStudioHdr *const this, HModel hModel, IGameModelInfo *pModelInfo)
{
  const CModel **m_pData; // rax
  const CModel *v5; // rdi
  bool v6; // zf

  m_pData = hModel.m_pBinding->m_pData;
  if ( hModel.m_pBinding->m_pData != 0 && *(m_pData + 6) > 0 )
  {
    v5 = *m_pData;
    v6 = *m_pData == 0;
    this->m_pModel = *m_pData;
    if ( !v6 )
    {
      CModel::NumBones(v5);
      this->m_bHasBoneContents = 0;
    }
  }
  else
  {
    this->m_pModel = 0;
  }
}


// CStudioHdr::Init  (line 101, @0x0000000002f47870, libserver.so)  // inlines: numbones
// calls: CModel::NumBones
void __fastcall CStudioHdr::Init(CStudioHdr *const this, const CModel *pModel)
{
  this->m_pModel = pModel;
  if ( pModel != 0 )
  {
    CModel::NumBones(pModel);
    this->m_bHasBoneContents = 0;
  }
}


// CStudioHdr::Term  (line 125, @0x0000000002f478a0, libserver.so)
// callers: CBasePropDoor::CalcDoorSounds, CPropDoorRotatingBreakable::PrecacheBreakables, CreatePhysicsProp<CPhysicsProp>, CPropDoorRotatingBreakable::Spawn
void __fastcall CStudioHdr::Term(CStudioHdr *const this)
{
  this->m_pModel = 0;
}


// CStudioHdr::pszName  (line 130, @0x0000000002f478b0, libserver.so)
// calls: CModel::pszName
// callers: CBasePropDoor::CalcDoorSounds, CPropDoorRotatingBreakable::Spawn
const char *__fastcall CStudioHdr::pszName(const CStudioHdr *const this)
{
  return CModel::pszName(this->m_pModel);
}


// CStudioHdr::boneFlags  (line 135, @0x0000000002f478c0, libserver.so)
// calls: CModel::boneFlags
int __fastcall CStudioHdr::boneFlags(const CStudioHdr *const this, int nS2Bone)
{
  return CModel::boneFlags(this->m_pModel, nS2Bone);
}


// CStudioHdr::boneParent  (line 140, @0x0000000002f478d0, libserver.so)
// calls: CModel::boneParent
int __fastcall CStudioHdr::boneParent(const CStudioHdr *const this, int nS2Bone)
{
  return CModel::boneParent(this->m_pModel, nS2Bone);
}


// CStudioHdr::numflexcontrollers  (line 145, @0x0000000002f478e0, libserver.so)
// calls: CModel::NumFlexControllers
LocalFlexController_t __fastcall CStudioHdr::numflexcontrollers(const CStudioHdr *const this)
{
  return CModel::NumFlexControllers(this->m_pModel);
}


// CStudioHdr::pFlexcontroller  (line 150, @0x0000000002f478f0, libserver.so)
// calls: CModel::GetFlexController
const CFlexController *__fastcall CStudioHdr::pFlexcontroller(const CStudioHdr *const this, LocalFlexController_t i)
{
  return CModel::GetFlexController(this->m_pModel, i);
}


// CStudioHdr::numskinfamilies  (line 160, @0x0000000002f47900, libserver.so)
// calls: CModel::numskinfamilies
int __fastcall CStudioHdr::numskinfamilies(const CStudioHdr *const this)
{
  return CModel::numskinfamilies(this->m_pModel);
}


// CStudioHdr::gettokenforskinindex  (line 165, @0x0000000002f47910, libserver.so)
// calls: CModel::GetMaterialGroupTokenForIndex
CUtlStringToken __fastcall CStudioHdr::gettokenforskinindex(const CStudioHdr *const this, int nIndex)
{
  return CModel::GetMaterialGroupTokenForIndex(this->m_pModel, nIndex);
}


// CStudioHdr::getindexforskintoken  (line 170, @0x0000000002f47920, libserver.so)
// calls: CModel::GetMaterialGroupIndex
int __fastcall CStudioHdr::getindexforskintoken(const CStudioHdr *const this, CUtlStringToken nToken)
{
  int MaterialGroupIndex; // eax
  int v3; // edx

  MaterialGroupIndex = CModel::GetMaterialGroupIndex(this->m_pModel, nToken);
  v3 = 0;
  if ( MaterialGroupIndex >= 0 )
    return MaterialGroupIndex;
  return v3;
}


// CStudioHdr::eyeposition  (line 178, @0x0000000002f47940, libserver.so)
// calls: CModel::eyeposition
Vector __fastcall CStudioHdr::eyeposition(const CStudioHdr *const this)
{
  return CModel::eyeposition(this->m_pModel);
}


// CStudioHdr::MaxEyeDeflection  (line 183, @0x0000000002f47960, libserver.so)
// calls: CModel::MaxEyeDeflection
float __fastcall CStudioHdr::MaxEyeDeflection(const CStudioHdr *const this)
{
  return CModel::MaxEyeDeflection(this->m_pModel);
}


// CStudioHdr::flags  (line 188, @0x0000000002f47970, libserver.so)
// calls: CModel::flags
uint32 __fastcall CStudioHdr::flags(const CStudioHdr *const this)
{
  return CModel::flags(this->m_pModel);
}


// CStudioHdr::pszSurfaceProp  (line 193, @0x0000000002f47980, libserver.so)
// calls: CModel::pszSurfaceProp
const char *__fastcall CStudioHdr::pszSurfaceProp(const CStudioHdr *const this)
{
  return CModel::pszSurfaceProp(this->m_pModel);
}


// CStudioHdr::GetSurfaceProp  (line 198, @0x0000000002f47990, libserver.so)  // inlines: MakeStringToken, pszSurfaceProp
// calls: CModel::pszSurfaceProp, MurmurHash2LowerCase, RegisterStringToken
CUtlStringToken __fastcall CStudioHdr::GetSurfaceProp(const CStudioHdr *const this)
{
  const char *v1; // rbx
  CUtlStringToken result; // eax
  CUtlStringToken v3; // [rsp+Ch] [rbp-14h]

  v1 = CModel::pszSurfaceProp(this->m_pModel);
  result.m_nHashCode = 0;
  if ( v1 != 0 && *v1 != 0 )
  {
    result.m_nHashCode = MurmurHash2LowerCase(v1, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v3.m_nHashCode = result.m_nHashCode;
      RegisterStringToken(result.m_nHashCode, v1, 0, 1);
      return v3;
    }
  }
  return result;
}


// CStudioHdr::mass  (line 203, @0x0000000002f47a00, libserver.so)
// calls: CModel::mass
float __fastcall CStudioHdr::mass(const CStudioHdr *const this)
{
  return CModel::mass(this->m_pModel);
}


// CStudioHdr::hull_min  (line 208, @0x0000000002f47a10, libserver.so)
// calls: CModel::hull_min
// callers: CreatePhysicsProp<CPhysicsProp>
Vector __fastcall CStudioHdr::hull_min(const CStudioHdr *const this)
{
  return CModel::hull_min(this->m_pModel);
}


// CStudioHdr::hull_max  (line 213, @0x0000000002f47a30, libserver.so)
// calls: CModel::hull_max
// callers: CreatePhysicsProp<CPhysicsProp>
Vector __fastcall CStudioHdr::hull_max(const CStudioHdr *const this)
{
  return CModel::hull_max(this->m_pModel);
}


// CStudioHdr::view_bbmin  (line 218, @0x0000000002f47a50, libserver.so)
// calls: CModel::view_bbmin
Vector __fastcall CStudioHdr::view_bbmin(const CStudioHdr *const this)
{
  return CModel::view_bbmin(this->m_pModel);
}


// CStudioHdr::view_bbmax  (line 223, @0x0000000002f47a70, libserver.so)
// calls: CModel::view_bbmax
Vector __fastcall CStudioHdr::view_bbmax(const CStudioHdr *const this)
{
  return CModel::view_bbmax(this->m_pModel);
}


// CStudioHdr::KeyValueText  (line 228, @0x0000000002f47a90, libserver.so)
// calls: CModel::KeyValueText
// callers: CBasePropDoor::CalcDoorSounds, CPropDoorRotatingBreakable::PrecacheBreakables, CPropDoorRotatingBreakable::Spawn
const char *__fastcall CStudioHdr::KeyValueText(const CStudioHdr *const this)
{
  return CModel::KeyValueText(this->m_pModel);
}


// CStudioHdr::SequencesAvailable  (line 233, @0x0000000002f47aa0, libserver.so)
bool __fastcall CStudioHdr::SequencesAvailable(const CStudioHdr *const this)
{
  return 1;
}


// CStudioHdr::GetNumSeq  (line 242, @0x0000000002f47ab0, libserver.so)
int __fastcall CStudioHdr::GetNumSeq(const CStudioHdr *const this)
{
  return 0;
}


// CStudioHdr::pSeqdesc  (line 249, @0x0000000002f47ac0, libserver.so)
// calls: CModel::pSeqdesc
const ISequence *__fastcall CStudioHdr::pSeqdesc(const CStudioHdr *const this, HSequence iS2Sequence)
{
  return CModel::pSeqdesc(this->m_pModel, iS2Sequence);
}


// CStudioHdr::GetNumPoseParameters  (line 258, @0x0000000002f47ad0, libserver.so)
// calls: CModel::GetNumPoseParameters
int __fastcall CStudioHdr::GetNumPoseParameters(const CStudioHdr *const this)
{
  return CModel::GetNumPoseParameters(this->m_pModel);
}


// CStudioHdr::pPoseParameter  (line 263, @0x0000000002f47ae0, libserver.so)
// calls: CModel::pPoseParameter
const PoseParamDesc_t *__fastcall CStudioHdr::pPoseParameter(const CStudioHdr *const this, int i)
{
  return CModel::pPoseParameter(this->m_pModel, i);
}


// CStudioHdr::GetPoseParameterName  (line 268, @0x0000000002f47af0, libserver.so)
// calls: CModel::GetPoseParameterName
const char *__fastcall CStudioHdr::GetPoseParameterName(const CStudioHdr *const this, int i)
{
  return CModel::GetPoseParameterName(this->m_pModel, i);
}


// CStudioHdr::numbones  (line 277, @0x0000000002f47b00, libserver.so)
// calls: CModel::NumBones
int __fastcall CStudioHdr::numbones(const CStudioHdr *const this)
{
  return CModel::NumBones(this->m_pModel);
}


// CStudioHdr::boneName  (line 282, @0x0000000002f47b10, libserver.so)
// calls: CModel::boneName
const char *__fastcall CStudioHdr::boneName(const CStudioHdr *const this, int nS2Bone)
{
  return CModel::boneName(this->m_pModel, nS2Bone);
}


// CStudioHdr::bonePosParentSpace  (line 287, @0x0000000002f47b20, libserver.so)
// calls: CModel::bonePosParentSpace
Vector __fastcall CStudioHdr::bonePosParentSpace(const CStudioHdr *const this, int nS2Bone)
{
  return CModel::bonePosParentSpace(this->m_pModel, nS2Bone);
}


// CStudioHdr::boneRotParentSpace  (line 292, @0x0000000002f47b40, libserver.so)
// calls: CModel::boneRotParentSpace
Quaternion __fastcall CStudioHdr::boneRotParentSpace(const CStudioHdr *const this, int nS2Bone)
{
  return CModel::boneRotParentSpace(this->m_pModel, nS2Bone);
}


// CStudioHdr::BoneNameMatches  (line 297, @0x0000000002f47b50, libserver.so)  // inlines: boneName
// calls: CModel::boneName, V_stricmp_fast
bool __fastcall CStudioHdr::BoneNameMatches(const CStudioHdr *const this, int nS2Bone, const char *pTestBoneName)
{
  const char *v4; // rax

  v4 = CModel::boneName(this->m_pModel, nS2Bone);
  return V_stricmp_fast(v4, pTestBoneName) == 0;
}


// CStudioHdr::GetNumAttachments  (line 310, @0x0000000002f47b80, libserver.so)
// calls: CModel::GetNumAttachments
int __fastcall CStudioHdr::GetNumAttachments(const CStudioHdr *const this)
{
  return CModel::GetNumAttachments(this->m_pModel);
}


// CStudioHdr::FirstAttachmentHandle  (line 315, @0x0000000002f47b90, libserver.so)
// calls: CModel::FirstAttachmentHandle
AttachmentHandle_t __fastcall CStudioHdr::FirstAttachmentHandle(const CStudioHdr *const this)
{
  return CModel::FirstAttachmentHandle(this->m_pModel);
}


// CStudioHdr::NextAttachmentHandle  (line 320, @0x0000000002f47ba0, libserver.so)
// calls: CModel::NextAttachmentHandle
AttachmentHandle_t __fastcall CStudioHdr::NextAttachmentHandle(
        const CStudioHdr *const this,
        AttachmentHandle_t hAttachment)
{
  return CModel::NextAttachmentHandle(this->m_pModel, hAttachment);
}


// CStudioHdr::GetAttachmentHandle  (line 325, @0x0000000002f47bc0, libserver.so)
// calls: CModel::GetAttachmentHandle
AttachmentHandle_t __fastcall CStudioHdr::GetAttachmentHandle(
        const CStudioHdr *const this,
        CUtlStringToken nAttachmentToken)
{
  return CModel::GetAttachmentHandle(this->m_pModel, nAttachmentToken);
}


// CStudioHdr::GetAttachmentName  (line 330, @0x0000000002f47bd0, libserver.so)
// calls: CModel::GetAttachmentName
const char *__fastcall CStudioHdr::GetAttachmentName(const CStudioHdr *const this, AttachmentHandle_t hAttachment)
{
  return CModel::GetAttachmentName(this->m_pModel, hAttachment);
}


// CStudioHdr::SetupAttachmentTransform  (line 335, @0x0000000002f47bf0, libserver.so)
// calls: CModel::SetupAttachmentTransform
bool __fastcall CStudioHdr::SetupAttachmentTransform(
        const CStudioHdr *const this,
        AttachmentHandle_t hAttachment,
        const matrix3x4a_t *pSimWorldMatricesIn,
        matrix3x4a_t *const worldTransformOut)
{
  return CModel::SetupAttachmentTransform(this->m_pModel, hAttachment, pSimWorldMatricesIn, worldTransformOut);
}


// CStudioHdr::GetAttachmentBoneCount  (line 340, @0x0000000002f47c10, libserver.so)
// calls: CModel::GetAttachmentBoneCount
int __fastcall CStudioHdr::GetAttachmentBoneCount(const CStudioHdr *const this, AttachmentHandle_t hAttachment)
{
  return CModel::GetAttachmentBoneCount(this->m_pModel, hAttachment);
}


// CStudioHdr::GetAttachmentBone  (line 345, @0x0000000002f47c30, libserver.so)  // inlines: GetAttachmentBoneCount
// calls: CModel::GetAttachmentBoneCount, CModel::GetAttachmentBone
int __fastcall CStudioHdr::GetAttachmentBone(const CStudioHdr *const this, AttachmentHandle_t hAttachment, int nIndex)
{
  if ( nIndex >= 0 && nIndex <= CModel::GetAttachmentBoneCount(this->m_pModel, hAttachment) )
    return CModel::GetAttachmentBone(this->m_pModel, hAttachment, nIndex);
  else
    return -1;
}


// CStudioHdr::GetTransition  (line 357, @0x0000000002f47c90, libserver.so)
int __fastcall CStudioHdr::GetTransition(const CStudioHdr *const this, int iFrom, int iTo)
{
  return iTo;
}


// CStudioHdr::EntryNode  (line 363, @0x0000000002f47ca0, libserver.so)  // inlines: pSeqdesc
// calls: CModel::pSeqdesc
int __fastcall CStudioHdr::EntryNode(CStudioHdr *const this, HSequence iSequence)
{
  const ISequence *v2; // rax

  v2 = CModel::pSeqdesc(this->m_pModel, iSequence);
  return (*(v2->_vptr_IBaseSequence + 46))(v2);
}


// CStudioHdr::ExitNode  (line 369, @0x0000000002f47cc0, libserver.so)  // inlines: pSeqdesc
// calls: CModel::pSeqdesc
int __fastcall CStudioHdr::ExitNode(CStudioHdr *const this, HSequence iSequence)
{
  const ISequence *v2; // rax

  v2 = CModel::pSeqdesc(this->m_pModel, iSequence);
  return (*(v2->_vptr_IBaseSequence + 47))(v2);
}


// CStudioHdr::numhitboxsets  (line 379, @0x0000000002f47ce0, libserver.so)
// calls: CModel::GetHitboxSetCount
int __fastcall CStudioHdr::numhitboxsets(const CStudioHdr *const this)
{
  return CModel::GetHitboxSetCount(this->m_pModel, 0);
}


// CStudioHdr::pHitboxSet  (line 384, @0x0000000002f47cf0, libserver.so)
// calls: CModel::GetHitboxSetByIndex
const CHitBoxSet *__fastcall CStudioHdr::pHitboxSet(const CStudioHdr *const this, int nIndex)
{
  return CModel::GetHitboxSetByIndex(this->m_pModel, nIndex, 0);
}


// CStudioHdr::FindHitboxSetIndexByName  (line 389, @0x0000000002f47d00, libserver.so)
// calls: CModel::FindHitboxSetIndexByName
int __fastcall CStudioHdr::FindHitboxSetIndexByName(const CStudioHdr *const this, const char *pHitBoxSetName)
{
  return CModel::FindHitboxSetIndexByName(this->m_pModel, pHitBoxSetName, 0);
}


// CStudioHdr::GetBoneIndexForHitbox  (line 394, @0x0000000002f47d10, libserver.so)
// calls: CModel::FindBoneIndexByHash
int __fastcall CStudioHdr::GetBoneIndexForHitbox(const CStudioHdr *const this, const CHitBox *pHitBox)
{
  return CModel::FindBoneIndexByHash(this->m_pModel, pHitBox->m_nBoneNameHash);
}


// CStudioHdr::GetSurfacePropForHitbox  (line 399, @0x0000000002f47d20, libserver.so)  // inlines: MakeStringToken, pszSurfaceProp
// calls: CUtlString::Get, CModel::pszSurfaceProp, MurmurHash2LowerCase, RegisterStringToken
CUtlStringToken __fastcall CStudioHdr::GetSurfacePropForHitbox(const CStudioHdr *const this, const CHitBox *pHitBox)
{
  const char *v3; // rax
  const char *v4; // rbx
  const char *v5; // rax
  CUtlStringToken result; // eax
  CUtlStringToken v7; // [rsp+Ch] [rbp-14h]

  if ( pHitBox == 0 || (v3 = CUtlString::Get(&pHitBox->m_sSurfaceProperty), v4 = v3, v3 == 0) || *v3 == 0 )
  {
    v5 = CModel::pszSurfaceProp(this->m_pModel);
    v4 = v5;
    if ( v5 == 0 || *v5 == 0 )
      return 0;
  }
  result.m_nHashCode = MurmurHash2LowerCase(v4, 0x31415926u);
  if ( g_bUpdateStringTokenDatabase )
  {
    v7.m_nHashCode = result.m_nHashCode;
    RegisterStringToken(result.m_nHashCode, v4, 0, 1);
    return v7;
  }
  return result;
}


// CStudioHdr::numbodyparts  (line 412, @0x0000000002f47db0, libserver.so)
// calls: CModel::GetNumBodyParts
int __fastcall CStudioHdr::numbodyparts(const CStudioHdr *const this)
{
  const CModel *m_pModel; // rdi

  m_pModel = this->m_pModel;
  if ( m_pModel != 0 )
    return CModel::GetNumBodyParts(m_pModel);
  else
    return 0;
}


// CStudioHdr::numbodypartmeshes  (line 420, @0x0000000002f47dd0, libserver.so)
// calls: CModel::GetNumBodyPartMeshes
int __fastcall CStudioHdr::numbodypartmeshes(const CStudioHdr *const this, int nPart)
{
  return CModel::GetNumBodyPartMeshes(this->m_pModel, nPart);
}


// CStudioHdr::bodypartmask  (line 425, @0x0000000002f47de0, libserver.so)
// calls: CModel::GetBodyPartMask
MeshGroupMask_t __fastcall CStudioHdr::bodypartmask(const CStudioHdr *const this, int nPart)
{
  return CModel::GetBodyPartMask(this->m_pModel, nPart);
}


// CStudioHdr::bodypartmeshmask  (line 430, @0x0000000002f47df0, libserver.so)
// calls: CModel::GetBodyPartMeshMask
MeshGroupMask_t __fastcall CStudioHdr::bodypartmeshmask(const CStudioHdr *const this, int nPart, int nModel)
{
  return CModel::GetBodyPartMeshMask(this->m_pModel, nPart, nModel);
}


// CStudioHdr::bodypartname  (line 435, @0x0000000002f47e00, libserver.so)
// calls: CModel::GetBodyPartName
const char *__fastcall CStudioHdr::bodypartname(const CStudioHdr *const this, int nPart)
{
  return CModel::GetBodyPartName(this->m_pModel, nPart);
}


// CStudioHdr::bodypartmeshname  (line 440, @0x0000000002f47e10, libserver.so)
// calls: CModel::GetBodyPartMeshName
void __fastcall CStudioHdr::bodypartmeshname(
        const CStudioHdr *const this,
        int nPart,
        int nModel,
        char *pResourceName,
        int nSizeResourceName)
{
  CModel::GetBodyPartMeshName(this->m_pModel, nPart, nModel, pResourceName, nSizeResourceName);
}


// CStudioHdr::bodypartbyname  (line 445, @0x0000000002f47e20, libserver.so)
// calls: CModel::GetBodyPartForName
int __fastcall CStudioHdr::bodypartbyname(const CStudioHdr *const this, const char *pName)
{
  return CModel::GetBodyPartForName(this->m_pModel, pName);
}


// CStudioHdr::bodypartmeshindexformask  (line 450, @0x0000000002f47e30, libserver.so)
// calls: CModel::FindMeshIndexForMask
int __fastcall CStudioHdr::bodypartmeshindexformask(const CStudioHdr *const this, int nPart, MeshGroupMask_t nMask)
{
  return CModel::FindMeshIndexForMask(this->m_pModel, nPart, nMask);
}


// CStudioHdr::GetActivityListVersion  (line 458, @0x0000000002f47e40, libserver.so)
int __fastcall CStudioHdr::GetActivityListVersion(CStudioHdr *const this)
{
  return (*this->m_pModel->_vptr_CModel)(this->m_pModel);
}


// CStudioHdr::SetActivityListVersion  (line 464, @0x0000000002f47e50, libserver.so)
void __fastcall CStudioHdr::SetActivityListVersion(CStudioHdr *const this, int version)
{
  (*(this->m_pModel->_vptr_CModel + 1))(this->m_pModel, version);
}


// CStudioHdr::GetEventListVersion  (line 474, @0x0000000002f47e70, libserver.so)
int __fastcall CStudioHdr::GetEventListVersion(CStudioHdr *const this)
{
  return (*(this->m_pModel->_vptr_CModel + 2))(this->m_pModel);
}


// CStudioHdr::SetEventListVersion  (line 480, @0x0000000002f47e90, libserver.so)
void __fastcall CStudioHdr::SetEventListVersion(CStudioHdr *const this, int version)
{
  (*(this->m_pModel->_vptr_CModel + 3))(this->m_pModel, version);
}


// CStudioHdr::GetNumIKAutoplayLocks  (line 489, @0x0000000002f47eb0, libserver.so)
// calls: CModel::GetNumIKAutoplayLocks
int __fastcall CStudioHdr::GetNumIKAutoplayLocks(const CStudioHdr *const this)
{
  return CModel::GetNumIKAutoplayLocks(this->m_pModel);
}


// CStudioHdr::pIKAutoplayLock  (line 494, @0x0000000002f47ec0, libserver.so)
// calls: CModel::pIKAutoplayLock
const CSeqIKLock *__fastcall CStudioHdr::pIKAutoplayLock(const CStudioHdr *const this, int i)
{
  return CModel::pIKAutoplayLock(this->m_pModel, i);
}


// CStudioHdr::numikchains  (line 499, @0x0000000002f47ed0, libserver.so)
// calls: CModel::numikchains
int __fastcall CStudioHdr::numikchains(const CStudioHdr *const this)
{
  return CModel::numikchains(this->m_pModel);
}


// CStudioHdr::GetNumIKChains  (line 504, @0x0000000002f47ee0, libserver.so)
// calls: CModel::GetNumIKChains
int __fastcall CStudioHdr::GetNumIKChains(const CStudioHdr *const this)
{
  return CModel::GetNumIKChains(this->m_pModel);
}


// CStudioHdr::pIKChain  (line 509, @0x0000000002f47ef0, libserver.so)
// calls: CModel::pIKChain
const CAnimIKChain *__fastcall CStudioHdr::pIKChain(const CStudioHdr *const this, int i)
{
  return CModel::pIKChain(this->m_pModel, i);
}


// Studio_CPS  (line 516, @0x0000000002f47f00, libserver.so)
// calls: CModel::pSeqdesc
float __fastcall Studio_CPS(const CStudioHdr *pStudioHdr, HSequence iS2Sequence, const float *poseParameter)
{
  const ISequence *v4; // rax

  v4 = CModel::pSeqdesc(pStudioHdr->m_pModel, iS2Sequence);
  return (*(v4->_vptr_IBaseSequence + 54))(v4, poseParameter);
}


// Studio_SeqMovement  (line 521, @0x0000000002f47f30, libserver.so)
// calls: CModel::pSeqdesc
bool __fastcall Studio_SeqMovement(
        const CStudioHdr *pStudioHdr,
        HSequence iS2Sequence,
        float flCycleFrom,
        float flCycleTo,
        const float *poseParameter,
        Vector *const deltaPos,
        QAngle *const deltaAngles)
{
  const ISequence *v10; // rax

  v10 = CModel::pSeqdesc(pStudioHdr->m_pModel, iS2Sequence);
  return (*(v10->_vptr_IBaseSequence + 58))(v10, poseParameter, deltaPos, deltaAngles, flCycleFrom, flCycleTo);
}


// Studio_Duration  (line 526, @0x0000000002f47f90, libserver.so)
// calls: CModel::pSeqdesc
float __fastcall Studio_Duration(const CStudioHdr *pStudioHdr, HSequence iSequence, const float *poseParameter)
{
  const ISequence *v4; // rax

  v4 = CModel::pSeqdesc(pStudioHdr->m_pModel, iSequence);
  return (*(v4->_vptr_IBaseSequence + 55))(v4, poseParameter);
}


// Studio_FindAttachment  (line 531, @0x0000000002f47fc0, libserver.so)  // inlines: MakeStringToken
// calls: CModel::GetAttachmentHandle, MurmurHash2LowerCase, RegisterStringToken
int __fastcall Studio_FindAttachment(const CStudioHdr *pStudioHdr, const char *pAttachmentName)
{
  CUtlStringToken v4; // esi
  AttachmentHandle_t AttachmentHandle; // al
  uint32 v7; // eax
  uint32 v8; // [rsp+Ch] [rbp-14h]

  if ( pStudioHdr == 0 )
    return -1;
  v4.m_nHashCode = 0;
  if ( pAttachmentName != 0 && *pAttachmentName != 0 )
  {
    v7 = MurmurHash2LowerCase(pAttachmentName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v8 = v7;
      RegisterStringToken(v7, pAttachmentName, 0, 1);
      v4.m_nHashCode = v8;
    }
    else
    {
      v4.m_nHashCode = v7;
    }
  }
  AttachmentHandle = CModel::GetAttachmentHandle(pStudioHdr->m_pModel, v4);
  if ( AttachmentHandle != 0 )
    return AttachmentHandle - 1;
  else
    return -1;
}


// Studio_FindRandomAttachment  (line 545, @0x0000000002f48050, libserver.so)
// calls: Model_FindRandomAttachment
int __fastcall Studio_FindRandomAttachment(const CStudioHdr *pStudioHdr, const char *pAttachmentName)
{
  AttachmentHandle_t RandomAttachment; // al

  RandomAttachment = Model_FindRandomAttachment(pStudioHdr->m_pModel, pAttachmentName);
  if ( RandomAttachment != 0 )
    return RandomAttachment - 1;
  else
    return -1;
}


// Studio_BoneIndexByName  (line 555, @0x0000000002f48080, libserver.so)
// calls: CModel::FindBoneIndex
int __fastcall Studio_BoneIndexByName(const CStudioHdr *pStudioHdr, const char *pName)
{
  return CModel::FindBoneIndex(pStudioHdr->m_pModel, pName);
}


// Studio_GetKeyValueText  (line 560, @0x0000000002f48090, libserver.so)
// calls: CModel::pSeqdesc
const char *__fastcall Studio_GetKeyValueText(const CStudioHdr *pStudioHdr, HSequence iSequence)
{
  const ISequence *v2; // rax

  v2 = CModel::pSeqdesc(pStudioHdr->m_pModel, iSequence);
  return (*(v2->_vptr_IBaseSequence + 21))(v2);
}


