
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_kv3transfer.cpp  (line 0, @0x0000000001a6eeb0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_kv3transfer_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CKV3TransferBlockAllocator::CKV3TransferBlockAllocator  (line 14, @0x000000000326bf90, libserver.so)
void __fastcall CKV3TransferBlockAllocator::CKV3TransferBlockAllocator(CKV3TransferBlockAllocator *const this)
{
  this->m_pBufferBase = 0;
  this->m_pNextAlloc = 0;
  this->m_nBufferSize = 0;
  this->m_bExternalAllocation = 0;
}


// CKV3TransferBlockAllocator::~CKV3TransferBlockAllocator  (line 25, @0x000000000326c010, libserver.so)
// calls: CKV3TransferBlockAllocator::Free
void __fastcall CKV3TransferBlockAllocator::~CKV3TransferBlockAllocator(CKV3TransferBlockAllocator *const this)
{
  CKV3TransferBlockAllocator::Free(this);
}


// CKV3TransferBlockAllocator::Init  (line 33, @0x000000000326c020, libserver.so)
// calls: CKV3TransferBlockAllocator::Free, operator new []
// callers: CKV3TransferLoadContext::SetBlockAllocator
void __fastcall CKV3TransferBlockAllocator::Init(CKV3TransferBlockAllocator *const this, uint nReserveSize)
{
  size_t v2; // r12
  uint8 *v4; // rax

  v2 = nReserveSize;
  CKV3TransferBlockAllocator::Free(this);
  v4 = operator new[](v2);
  this->m_nBufferSize = v2;
  this->m_pBufferBase = v4;
  this->m_pNextAlloc = v4;
  this->m_bExternalAllocation = 0;
}


// CKV3TransferBlockAllocator::Init  (line 45, @0x000000000326c050, libserver.so)
// calls: CKV3TransferBlockAllocator::Free
void __fastcall CKV3TransferBlockAllocator::Init(
        CKV3TransferBlockAllocator *const this,
        void *pExternalAllocation,
        uint nSize)
{
  CKV3TransferBlockAllocator::Free(this);
  this->m_pBufferBase = pExternalAllocation;
  this->m_pNextAlloc = pExternalAllocation;
  this->m_nBufferSize = nSize;
  this->m_bExternalAllocation = 1;
}


// CKV3TransferBlockAllocator::Free  (line 57, @0x000000000326bfc0, libserver.so)  // inlines: FreeAllocation
// calls: operator delete []
// callers: CKV3TransferBlockAllocator::~CKV3TransferBlockAllocator, CKV3TransferBlockAllocator::Init, CKV3TransferLoadContext::~CKV3TransferLoadContext, CKV3TransferLoadContext::SetExternalBlockAllocation
void __fastcall CKV3TransferBlockAllocator::Free(CKV3TransferBlockAllocator *const this)
{
  uint8 *m_pBufferBase; // rdi

  if ( !this->m_bExternalAllocation )
  {
    m_pBufferBase = this->m_pBufferBase;
    if ( m_pBufferBase != 0 )
      operator delete[](m_pBufferBase);
  }
  this->m_pBufferBase = 0;
  this->m_pNextAlloc = 0;
  this->m_nBufferSize = 0;
  this->m_bExternalAllocation = 0;
}


// CKV3TransferBlockAllocator::TakeControlOfAllocaction  (line 72, @0x000000000326c090, libserver.so)
uint8 *__fastcall CKV3TransferBlockAllocator::TakeControlOfAllocaction(CKV3TransferBlockAllocator *const this)
{
  uint8 *result; // rax

  result = this->m_pBufferBase;
  this->m_pBufferBase = 0;
  this->m_pNextAlloc = 0;
  this->m_nBufferSize = 0;
  return result;
}


// CKV3TransferBlockAllocator::FreeAllocation  (line 85, @0x000000000326c0b0, libserver.so)
// calls: operator delete []
void __fastcall CKV3TransferBlockAllocator::FreeAllocation(uint8 *pAlloc)
{
  if ( pAlloc != 0 )
    operator delete[](pAlloc);
}


// CKV3TransferBlockAllocator::AllocBlockBytes  (line 93, @0x000000000326c0d0, libserver.so)  // inlines: AlignValue<unsigned char*>
// callers: KV3TransferSchema_AllocateClassInstance<CBaseConstraint>, CKV3TransferValHelper<CUtlVector<CPhysSurfaceProperties*, CUtlMemory<CPhysSurfaceProperties*, int> > >::LoadValue<CUtlVector<CPhysSurfaceProperties*> >, CVPhysXSurfacePropertiesList::KV3TransferLoad_CVPhysXSurfacePropertiesList
uint8 *__fastcall CKV3TransferBlockAllocator::AllocBlockBytes(
        CKV3TransferBlockAllocator *const this,
        int nSize,
        uintp nAlign)
{
  uint8 *result; // rax

  if ( nSize == 0 )
    return 0;
  result = (&this->m_pNextAlloc[nAlign - 1] & -nAlign);
  this->m_pNextAlloc = &result[nSize];
  return result;
}


// CKV3TransferContextBase::CKV3TransferContextBase  (line 111, @0x000000000326c110, libserver.so)  // inlines: CUtlString
void __fastcall CKV3TransferContextBase::CKV3TransferContextBase(CKV3TransferContextBase *const this)
{
  this->m_ErrorMessage.m_pString = 0;
  this->m_Result = KV3TransferResult_t::KV3TRANSFER_SUCCESS;
  this->m_Interfaces[0].m_nId = -1;
  this->m_Interfaces[0].m_pInterface = 0;
  this->m_Interfaces[1].m_nId = -1;
  this->m_Interfaces[1].m_pInterface = 0;
  this->m_Interfaces[2].m_nId = -1;
  this->m_Interfaces[2].m_pInterface = 0;
  this->m_Interfaces[3].m_nId = -1;
  this->m_Interfaces[3].m_pInterface = 0;
}


// CKV3TransferContextBase::FindInterfaceVoid  (line 125, @0x000000000326c160, libserver.so)
// callers: CRenderMesh::TransferPostSaveFn, CRenderMesh::TransferPostLoadFn, CMaterialDrawDescriptor::KV3TransferLoad_CMaterialDrawDescriptor, CMaterialDrawDescriptor::KV3TransferSave_CMaterialDrawDescriptor
void *__fastcall CKV3TransferContextBase::FindInterfaceVoid(
        CKV3TransferContextBase *const this,
        KV3Transfer_InterfaceId_t nId)
{
  void *result; // rax

  if ( this->m_Interfaces[0].m_nId == nId )
  {
    LODWORD(result) = 0;
  }
  else if ( this->m_Interfaces[1].m_nId == nId )
  {
    LODWORD(result) = 1;
  }
  else if ( this->m_Interfaces[2].m_nId == nId )
  {
    LODWORD(result) = 2;
  }
  else
  {
    result = 0;
    if ( this->m_Interfaces[3].m_nId != nId )
      return result;
    LOBYTE(result) = 3;
  }
  return this->m_Interfaces[result].m_pInterface;
}


// CKV3TransferContextBase::AddInterfaceVoid  (line 147, @0x000000000326c1c0, libserver.so)
void __fastcall CKV3TransferContextBase::AddInterfaceVoid(
        CKV3TransferContextBase *const this,
        KV3Transfer_InterfaceId_t nId,
        void *pInterface)
{
  __int64 v3; // rax
  char *v4; // rax

  if ( this->m_Interfaces[0].m_nId == -1 )
  {
    v3 = 0;
    goto LABEL_7;
  }
  if ( this->m_Interfaces[1].m_nId == -1 )
  {
    v3 = 1;
    goto LABEL_7;
  }
  if ( this->m_Interfaces[2].m_nId == -1 )
  {
    v3 = 2;
    goto LABEL_7;
  }
  v3 = 3;
  if ( this->m_Interfaces[3].m_nId == -1 )
  {
LABEL_7:
    v4 = this + 16 * v3;
    *(v4 + 4) = nId;
    *(v4 + 3) = pInterface;
  }
}


// CKV3TransferContextBase::NoteFailure  (line 171, @0x000000000326c220, libserver.so)
// calls: CUtlString::FormatV
// callers: CRenderMesh::TransferPostSaveFn, CKV3TransferSaveContext::CreateTargetMember, CRenderBufferBinding::KV3TransferSave_CRenderBufferBinding, SkeletonBoneBounds_t::KV3TransferSave_SkeletonBoneBounds_t, RenderSkeletonBone_t::KV3TransferSave_RenderSkeletonBone_t, CMaterialDrawDescriptor::KV3TransferSave_CMaterialDrawDescriptor, CHitBoxSet::KV3TransferSave_CHitBoxSet, CHitBoxSetList::KV3TransferSave_CHitBoxSetList, CRenderMesh::KV3TransferSave_CRenderMesh, CKV3TransferValHelper<CUtlVector<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> > >::LoadValue<CUtlVector<CBaseConstraint*> >, CConstraintTarget::KV3TransferSave_CConstraintTarget, CConstraintSlave::KV3TransferSave_CConstraintSlave (28 total)
void CKV3TransferContextBase::NoteFailure(CKV3TransferContextBase *const this, const char *pFormat, ...)
{
  va_list marker; // [rsp+8h] [rbp-C8h] BYREF

  va_start(marker, pFormat);
  this->m_Result = KV3TransferResult_t::KV3TRANSFER_FAIL;
  CUtlString::FormatV(&this->m_ErrorMessage, pFormat, marker);
}


// CKV3TransferContextBase::GetResult  (line 184, @0x000000000326c2b0, libserver.so)
KV3TransferResult_t __fastcall CKV3TransferContextBase::GetResult(CKV3TransferContextBase *const this)
{
  return this->m_Result;
}


// CKV3TransferLoadContext::CKV3TransferLoadContext  (line 192, @0x000000000326c2c0, libserver.so)  // inlines: CKV3TransferContextBase, CUtlMemory, CUtlStack, CUtlString, ResetDbgInfo
void __fastcall CKV3TransferLoadContext::CKV3TransferLoadContext(CKV3TransferLoadContext *const this)
{
  this->m_ErrorMessage.m_pString = 0;
  this->m_Result = KV3TransferResult_t::KV3TRANSFER_SUCCESS;
  this->m_Interfaces[0].m_nId = -1;
  this->m_Interfaces[0].m_pInterface = 0;
  this->m_Interfaces[1].m_nId = -1;
  this->m_Interfaces[1].m_pInterface = 0;
  this->m_Interfaces[2].m_nId = -1;
  this->m_Interfaces[2].m_pInterface = 0;
  this->m_Interfaces[3].m_nId = -1;
  this->m_Interfaces[3].m_pInterface = 0;
  this->m_pBlockAllocator = 0;
  this->m_SourceStack.m_Memory.m_pMemory = 0;
  this->m_SourceStack.m_Memory.m_nAllocationCount = 0;
  this->m_SourceStack.m_Memory.m_nGrowSize = 0;
  this->m_SourceStack.m_Size = 0;
  this->m_SourceStack.m_pElements = 0;
}


// CKV3TransferLoadContext::~CKV3TransferLoadContext  (line 200, @0x000000000326c340, libserver.so)  // inlines: Clear, Purge, ResetDbgInfo, ~CKV3TransferBlockAllocator, ~CKV3TransferContextBase, ~CUtlMemory, ~CUtlStack, ~CUtlString
// calls: CKV3TransferBlockAllocator::Free, operator delete, CUtlString::FreeMemoryBlock, CUtlMemory<const KeyValues3*, int>::Purge
void __fastcall CKV3TransferLoadContext::~CKV3TransferLoadContext(CKV3TransferLoadContext *const this)
{
  CKV3TransferBlockAllocator *m_pBlockAllocator; // r12
  bool v3; // zf
  CUtlString *p_m_ErrorMessage; // rdi

  m_pBlockAllocator = this->m_pBlockAllocator;
  if ( m_pBlockAllocator != 0 )
  {
    CKV3TransferBlockAllocator::Free(this->m_pBlockAllocator);
    operator delete(m_pBlockAllocator);
    this->m_pBlockAllocator = 0;
  }
  v3 = (this->m_SourceStack.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SourceStack.m_Size = 0;
  if ( !v3 )
  {
    this->m_SourceStack.m_pElements = this->m_SourceStack.m_Memory.m_pMemory;
    goto LABEL_5;
  }
  CUtlMemory<KeyValues3 const*,int>::Purge(&this->m_SourceStack.m_Memory);
  v3 = (this->m_SourceStack.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SourceStack.m_pElements = this->m_SourceStack.m_Memory.m_pMemory;
  if ( !v3 )
  {
LABEL_5:
    p_m_ErrorMessage = &this->m_ErrorMessage;
    if ( this->m_ErrorMessage.m_pString == 0 )
      return;
    goto LABEL_6;
  }
  CUtlMemory<KeyValues3 const*,int>::Purge(&this->m_SourceStack.m_Memory);
  p_m_ErrorMessage = &this->m_ErrorMessage;
  if ( this->m_ErrorMessage.m_pString != 0 )
LABEL_6:
    CUtlString::FreeMemoryBlock(p_m_ErrorMessage);
}


// CKV3TransferLoadContext::SetBlockAllocator  (line 212, @0x000000000326c3e0, libserver.so)
// calls: operator new, CKV3TransferBlockAllocator::Init
void __fastcall CKV3TransferLoadContext::SetBlockAllocator(CKV3TransferLoadContext *const this, uint nReserveSize)
{
  CKV3TransferBlockAllocator *v4; // rax

  v4 = operator new(0x20u);
  v4->m_pBufferBase = 0;
  v4->m_pNextAlloc = 0;
  v4->m_nBufferSize = 0;
  v4->m_bExternalAllocation = 0;
  this->m_pBlockAllocator = v4;
  CKV3TransferBlockAllocator::Init(v4, nReserveSize);
}


// CKV3TransferLoadContext::SetExternalBlockAllocation  (line 222, @0x000000000326c430, libserver.so)  // inlines: Init
// calls: operator new, CKV3TransferBlockAllocator::Free
void __fastcall CKV3TransferLoadContext::SetExternalBlockAllocation(
        CKV3TransferLoadContext *const this,
        void *pAlloc,
        uint nReserveSize)
{
  CKV3TransferBlockAllocator *v6; // rax
  CKV3TransferBlockAllocator *v7; // rbx

  v6 = operator new(0x20u);
  v6->m_pBufferBase = 0;
  v7 = v6;
  v6->m_pNextAlloc = 0;
  v6->m_nBufferSize = 0;
  v6->m_bExternalAllocation = 0;
  this->m_pBlockAllocator = v6;
  CKV3TransferBlockAllocator::Free(v6);
  v7->m_pBufferBase = pAlloc;
  v7->m_pNextAlloc = pAlloc;
  v7->m_nBufferSize = nReserveSize;
  v7->m_bExternalAllocation = 1;
}


// CKV3TransferLoadContext::GetExternalBlockAllocationUsage  (line 232, @0x000000000326c4a0, libserver.so)  // inlines: GetBlockSize
uint64 __fastcall CKV3TransferLoadContext::GetExternalBlockAllocationUsage(CKV3TransferLoadContext *const this)
{
  CKV3TransferBlockAllocator *m_pBlockAllocator; // rdx

  m_pBlockAllocator = this->m_pBlockAllocator;
  if ( m_pBlockAllocator != 0 )
    return m_pBlockAllocator->m_pNextAlloc - m_pBlockAllocator->m_pBufferBase;
  else
    return 0;
}


// CKV3TransferLoadContext::PushSource  (line 243, @0x000000000326c670, libserver.so)  // inlines: CopyConstruct<const KeyValues3*>, Element, GrowStack, Push, ResetDbgInfo, operator[]
// calls: CUtlMemory<const KeyValues3*, int>::Grow
// callers: CMaterialDrawDescriptor::TransferPostLoadFn, LoadUtlDict<CAttachment>, LoadUtlDict<CHitBoxSet>, RenderSkeletonBone_t::KV3TransferLoad_RenderSkeletonBone_t, CMaterialDrawDescriptor::KV3TransferLoad_CMaterialDrawDescriptor, CRenderSkeleton::KV3TransferLoad_CRenderSkeleton, CSceneObjectData::KV3TransferLoad_CSceneObjectData, CHitBoxSet::KV3TransferLoad_CHitBoxSet, CHitBoxSetList::KV3TransferLoad_CHitBoxSetList, CKV3TransferValHelper<CUtlVector<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> > >::LoadValue<CUtlVector<CBaseConstraint*> >, CRenderMesh::KV3TransferLoad_CRenderMesh, CBaseConstraint::KV3TransferLoad_CBaseConstraint (15 total)
void __fastcall CKV3TransferLoadContext::PushSource(CKV3TransferLoadContext *const this, const KeyValues3 *pSource)
{
  __int64 m_Size; // rax
  const KeyValues3 **m_pMemory; // rdx
  const KeyValues3 **v6; // rax

  this->m_pSourceObject = pSource;
  m_Size = this->m_SourceStack.m_Size;
  if ( m_Size >= this->m_SourceStack.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<KeyValues3 const*,int>::Grow(&this->m_SourceStack.m_Memory, 1);
    m_Size = this->m_SourceStack.m_Size;
  }
  this->m_SourceStack.m_Size = m_Size + 1;
  m_pMemory = this->m_SourceStack.m_Memory.m_pMemory;
  v6 = &m_pMemory[m_Size];
  this->m_SourceStack.m_pElements = m_pMemory;
  if ( v6 != 0 )
    *v6 = pSource;
}


// CKV3TransferLoadContext::PopSource  (line 252, @0x000000000326c4d0, libserver.so)  // inlines: Element, Pop, Top, operator[]
// callers: CMaterialDrawDescriptor::TransferPostLoadFn, LoadUtlDict<CAttachment>, LoadUtlDict<CHitBoxSet>, RenderSkeletonBone_t::KV3TransferLoad_RenderSkeletonBone_t, CMaterialDrawDescriptor::KV3TransferLoad_CMaterialDrawDescriptor, CRenderSkeleton::KV3TransferLoad_CRenderSkeleton, CSceneObjectData::KV3TransferLoad_CSceneObjectData, CHitBoxSet::KV3TransferLoad_CHitBoxSet, CHitBoxSetList::KV3TransferLoad_CHitBoxSetList, CKV3TransferValHelper<CUtlVector<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> > >::LoadValue<CUtlVector<CBaseConstraint*> >, CRenderMesh::KV3TransferLoad_CRenderMesh, CBaseConstraint::KV3TransferLoad_CBaseConstraint (15 total)
void __fastcall CKV3TransferLoadContext::PopSource(CKV3TransferLoadContext *const this)
{
  int m_Size; // edx

  m_Size = this->m_SourceStack.m_Size;
  this->m_SourceStack.m_Size = m_Size - 1;
  if ( m_Size - 1 <= 0 )
    this->m_pSourceObject = 0;
  else
    this->m_pSourceObject = this->m_SourceStack.m_Memory.m_pMemory[m_Size - 2];
}


// CKV3TransferSaveContext::CKV3TransferSaveContext  (line 268, @0x000000000326c510, libserver.so)  // inlines: CKV3TransferContextBase, CUtlMemory, CUtlStack, CUtlString, ResetDbgInfo
void __fastcall CKV3TransferSaveContext::CKV3TransferSaveContext(CKV3TransferSaveContext *const this)
{
  this->m_ErrorMessage.m_pString = 0;
  this->m_Result = KV3TransferResult_t::KV3TRANSFER_SUCCESS;
  this->m_Interfaces[0].m_nId = -1;
  this->m_Interfaces[0].m_pInterface = 0;
  this->m_Interfaces[1].m_nId = -1;
  this->m_Interfaces[1].m_pInterface = 0;
  this->m_Interfaces[2].m_nId = -1;
  this->m_Interfaces[2].m_pInterface = 0;
  this->m_Interfaces[3].m_nId = -1;
  this->m_Interfaces[3].m_pInterface = 0;
  this->m_TargetStack.m_Memory.m_pMemory = 0;
  this->m_TargetStack.m_Memory.m_nAllocationCount = 0;
  this->m_TargetStack.m_Memory.m_nGrowSize = 0;
  this->m_TargetStack.m_Size = 0;
  this->m_TargetStack.m_pElements = 0;
}


// CKV3TransferSaveContext::PrepareTargetForClass  (line 275, @0x000000000326c590, libserver.so)
// calls: CKV3TransferContextBase::NoteFailure, KeyValues3::SetToNull, KeyValues3::SetToEmptyTable, KeyValues3::SetMemberString
// callers: CKV3TransferSaveContext::SaveClassPointer<const CRenderBufferBinding>, CKV3TransferSaveContext::SaveClassPointer<const CAttachment>, CKV3TransferSaveContext::SaveClassPointer<const CHitBoxSet>, CKV3TransferValHelper<CUtlVector<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> > >::SaveValue<CUtlVector<CBaseConstraint*> >, CKV3TransferSaveContext::SaveClassPointer<const SkeletonBoneBounds_t>, CMaterialDrawDescriptor::KV3TransferSave_CMaterialDrawDescriptor, CKV3TransferSaveContext::SaveClassPointer<const RenderSkeletonBone_t>, CKV3TransferSaveContext::SaveClassPointer<const CRenderSkeleton>, CKV3TransferSaveContext::SaveClassPointer<const CMaterialDrawDescriptor>, CKV3TransferSaveContext::SaveClassPointer<const CHitBox>, CKV3TransferSaveContext::SaveClassPointer<const CSceneObjectData>, CKV3TransferSaveContext::SaveClassPointer<const CConstraintSlave> (15 total)
// strings: "Failed to save unsupported class"
bool __fastcall CKV3TransferSaveContext::PrepareTargetForClass(
        CKV3TransferSaveContext *const this,
        KeyValues3 *pObjectValue,
        KV3TransferClassBehavior_t nClassBehavior,
        const char *pPolymorphicClassName)
{
  switch ( nClassBehavior )
  {
    case KV3TransferClassBehavior_t::KV3TRANSFER_CLASS_AS_POLYMORPHIC_TABLE:
      KeyValues3::SetToEmptyTable(pObjectValue);
      KeyValues3::SetMemberString(pObjectValue, "_class", pPolymorphicClassName, 723732232);
      return 1;
    case KV3TransferClassBehavior_t::KV3TRANSFER_CLASS_AS_DATA:
      KeyValues3::SetToNull(pObjectValue);
      return 1;
    case KV3TransferClassBehavior_t::KV3TRANSFER_CLASS_AS_SIMPLE_TABLE:
      KeyValues3::SetToEmptyTable(pObjectValue);
      return 1;
    default:
      CKV3TransferContextBase::NoteFailure(
        this,
        "Failed to save unsupported class",
        nClassBehavior,
        pPolymorphicClassName);
      KeyValues3::SetToNull(pObjectValue);
      return 0;
  }
}


// CKV3TransferSaveContext::PushTarget  (line 307, @0x000000000326c6c0, libserver.so)  // inlines: CopyConstruct<KeyValues3*>, Element, GrowStack, Push, ResetDbgInfo, operator[]
// calls: CUtlMemory<KeyValues3*, int>::Grow
// callers: CKV3TransferSaveContext::SaveClassPointer<const CRenderBufferBinding>, CKV3TransferSaveContext::SaveClassPointer<const CAttachment>, CKV3TransferSaveContext::SaveClassPointer<const CHitBoxSet>, CKV3TransferValHelper<CUtlVector<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> > >::SaveValue<CUtlVector<CBaseConstraint*> >, CKV3TransferSaveContext::SaveClassPointer<const SkeletonBoneBounds_t>, CMaterialDrawDescriptor::KV3TransferSave_CMaterialDrawDescriptor, CKV3TransferSaveContext::SaveClassPointer<const RenderSkeletonBone_t>, CKV3TransferSaveContext::SaveClassPointer<const CRenderSkeleton>, CKV3TransferSaveContext::SaveClassPointer<const CMaterialDrawDescriptor>, CKV3TransferSaveContext::SaveClassPointer<const CHitBox>, CKV3TransferSaveContext::SaveClassPointer<const CSceneObjectData>, CKV3TransferSaveContext::SaveClassPointer<const CConstraintSlave> (15 total)
void __fastcall CKV3TransferSaveContext::PushTarget(CKV3TransferSaveContext *const this, KeyValues3 *pTarget)
{
  __int64 m_Size; // rax
  KeyValues3 **m_pMemory; // rdx
  KeyValues3 **v6; // rax

  this->m_pTargetObject = pTarget;
  m_Size = this->m_TargetStack.m_Size;
  if ( m_Size >= this->m_TargetStack.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<KeyValues3 *,int>::Grow(&this->m_TargetStack.m_Memory, 1);
    m_Size = this->m_TargetStack.m_Size;
  }
  this->m_TargetStack.m_Size = m_Size + 1;
  m_pMemory = this->m_TargetStack.m_Memory.m_pMemory;
  v6 = &m_pMemory[m_Size];
  this->m_TargetStack.m_pElements = m_pMemory;
  if ( v6 != 0 )
    *v6 = pTarget;
}


// CKV3TransferSaveContext::PopTarget  (line 316, @0x000000000326c630, libserver.so)  // inlines: Element, Pop, Top, operator[]
// callers: CKV3TransferSaveContext::SaveClassPointer<const CRenderBufferBinding>, CKV3TransferSaveContext::SaveClassPointer<const CAttachment>, CKV3TransferSaveContext::SaveClassPointer<const CHitBoxSet>, CKV3TransferValHelper<CUtlVector<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> > >::SaveValue<CUtlVector<CBaseConstraint*> >, CKV3TransferSaveContext::SaveClassPointer<const SkeletonBoneBounds_t>, CMaterialDrawDescriptor::KV3TransferSave_CMaterialDrawDescriptor, CKV3TransferSaveContext::SaveClassPointer<const RenderSkeletonBone_t>, CKV3TransferSaveContext::SaveClassPointer<const CRenderSkeleton>, CKV3TransferSaveContext::SaveClassPointer<const CMaterialDrawDescriptor>, CKV3TransferSaveContext::SaveClassPointer<const CHitBox>, CKV3TransferSaveContext::SaveClassPointer<const CSceneObjectData>, CKV3TransferSaveContext::SaveClassPointer<const CConstraintSlave> (15 total)
void __fastcall CKV3TransferSaveContext::PopTarget(CKV3TransferSaveContext *const this)
{
  int m_Size; // edx

  m_Size = this->m_TargetStack.m_Size;
  this->m_TargetStack.m_Size = m_Size - 1;
  if ( m_Size - 1 <= 0 )
    this->m_pTargetObject = 0;
  else
    this->m_pTargetObject = this->m_TargetStack.m_Memory.m_pMemory[m_Size - 2];
}


