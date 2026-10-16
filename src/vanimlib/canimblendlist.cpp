
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_canimblendlist.cpp  (line 0, @0x0000000001a674f0, libserver.so)  // inlines: Color, IntVector2D, SetColor, __static_initialization_and_destruction_0
// globals: `guard variable for'g_AnimOpSourceColors, UNSPECIFIED_LOGGING_COLOR, INT_VECTOR2_ORIGIN, g_AnimOpSourceColors
void __cdecl GLOBAL__sub_I_canimblendlist_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  INT_VECTOR2_ORIGIN.x = 0;
  INT_VECTOR2_ORIGIN.y = 0;
  // init once: g_AnimOpSourceColors
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


// CAnimationBlendList::CAnimationBlendList  (line 28, @0x00000000030679c0, libserver.so)  // inlines: HSequence
// calls: CModel::IsValidSequence, CModel::pSeqdesc
// callers: CBaseAnimatingController::UpdateIK
void __fastcall CAnimationBlendList::CAnimationBlendList(
        CAnimationBlendList *const this,
        const CModel *pModel,
        HSequence hSequence,
        const float *flPoseParameterArray)
{
  const ISequence *v7; // rax

  this->m_pModel = pModel;
  this->m_hSequenceArray[0].m_Data = -1;
  this->m_hSequenceArray[1].m_Data = -1;
  this->m_hSequenceArray[2].m_Data = -1;
  this->m_hSequenceArray[3].m_Data = -1;
  this->m_nCount = 0;
  if ( CModel::IsValidSequence(pModel, hSequence) )
  {
    v7 = CModel::pSeqdesc(this->m_pModel, hSequence);
    (*(v7->_vptr_IBaseSequence + 10))(v7, this, flPoseParameterArray);
  }
}


// CAnimationBlendList::CAnimationBlendList  (line 49, @0x0000000003067a40, libserver.so)  // inlines: HSequence
void __fastcall CAnimationBlendList::CAnimationBlendList(
        CAnimationBlendList *const this,
        const ISequence *pSeqDesc,
        const float *flPoseParameterArray)
{
  const CModel *v6; // rax

  this->m_hSequenceArray[0].m_Data = -1;
  this->m_hSequenceArray[1].m_Data = -1;
  this->m_hSequenceArray[2].m_Data = -1;
  this->m_hSequenceArray[3].m_Data = -1;
  v6 = (*(pSeqDesc->_vptr_IBaseSequence + 12))(pSeqDesc);
  this->m_nCount = 0;
  this->m_pModel = v6;
  (*(pSeqDesc->_vptr_IBaseSequence + 10))(pSeqDesc, this, flPoseParameterArray);
}


// CAnimationBlendList::flScale  (line 56, @0x0000000003067ab0, libserver.so)
// calls: CModel::GetXYMovementScaleAnim
float __fastcall CAnimationBlendList::flScale(const CAnimationBlendList *const this, int nIndex)
{
  return CModel::GetXYMovementScaleAnim(this->m_pModel, this->m_nAnimation[nIndex]);
}


// CAnimationBlendList::AddSequence  (line 61, @0x0000000003067b10, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, NumFrames, Purge, Purge_FixedGrowable, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CModel::IsValidSequence, CModel::pSeqdesc, CUtlMemory<int, int>::Purge, CModel::pAnimdesc, __stack_chk_fail, CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16ul, int> >::~CUtlVectorBase, _Unwind_Resume
__int64 __fastcall CAnimationBlendList::AddSequence(
        CAnimationBlendList *const this,
        HSequence hSequence,
        float a3,
        float flWeight)
{
  unsigned int v6; // eax
  unsigned int v7; // r12d
  const ISequence *v8; // rax
  const ISequence *v9; // r14
  int v10; // edx
  HSequence *v11; // rax
  uint32 m_nGrowSize; // eax
  int m_nAllocationCount; // ecx
  unsigned int v14; // eax
  int *m_pMemory; // rdx
  HSequence *v17; // rax
  char v18; // al
  __int64 m_nCount; // r13
  __int64 v20; // r13
  float32 fps; // xmm0_4
  int *v22; // rax
  __int64 v23; // r13
  AnimRefVector_t animref; // [rsp+10h] [rbp-90h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  LOBYTE(v6) = CModel::IsValidSequence(this->m_pModel, hSequence);
  v7 = v6;
  if ( v6 != 0 )
  {
    if ( this->m_nCount > 3 || a3 <= 0.00000011920929 )
    {
      return 0;
    }
    else
    {
      v8 = CModel::pSeqdesc(this->m_pModel, hSequence);
      animref.m_Memory.m_nAllocationCount = 16;
      v9 = v8;
      animref.m_Memory.m_nGrowSize = 0x80000000;
      animref.m_Size = 0;
      animref.m_Memory.m_pMemory = &animref.m_Memory.m_FixedMemory;
      if ( (*(v8->_vptr_IBaseSequence + 25))(v8, &animref) != 0 )
      {
        m_pMemory = animref.m_Memory.m_pMemory;
        v17 = (this + 4 * this->m_nCount);
        v17[2].m_Data = hSequence.m_Data;
        LODWORD(m_pMemory) = *m_pMemory;
        *&v17[14].m_Data = a3;
        v17[6].m_Data = m_pMemory;
        v18 = (*(v9->_vptr_IBaseSequence + 2))(v9);
        m_nCount = this->m_nCount;
        if ( v18 != 0 )
        {
          this->m_flFPS[m_nCount] = (*(v9->_vptr_IBaseSequence + 53))(v9, 0);
          v20 = this->m_nCount;
          this->m_nNumFrames[v20] = (*(v9->_vptr_IBaseSequence + 3))(v9, 0) + 1;
        }
        else
        {
          fps = CModel::pAnimdesc(this->m_pModel, *animref.m_Memory.m_pMemory)->fps;
          v22 = animref.m_Memory.m_pMemory;
          this->m_flFPS[m_nCount] = fps;
          v23 = this->m_nCount;
          this->m_nNumFrames[v23] = CModel::pAnimdesc(this->m_pModel, *v22)->m_pData->m_nFrames;
        }
        v10 = this->m_nCount;
      }
      else
      {
        v10 = this->m_nCount;
        v11 = (this + 4 * v10);
        v11[2].m_Data = hSequence.m_Data;
        v11[6].m_Data = 0;
        *&v11[14].m_Data = a3;
        v11[22].m_Data = 0;
        v11[18].m_Data = 0;
      }
      m_nGrowSize = animref.m_Memory.m_nGrowSize;
      animref.m_Size = 0;
      m_nAllocationCount = animref.m_Memory.m_nAllocationCount;
      this->m_nCount = v10 + 1;
      v14 = m_nGrowSize & 0xC0000000;
      if ( m_nAllocationCount < 0 || animref.m_Memory.m_pMemory == &animref.m_Memory.m_FixedMemory )
      {
        if ( v14 == 0 )
          CUtlMemory<int,int>::Purge(&animref.m_Memory);
      }
      else if ( animref.m_Memory.m_pMemory != 0 && v14 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      }
    }
  }
  return v7;
}


// CAnimationBlendList::pAnimdesc  (line 103, @0x0000000003067ad0, libserver.so)
// calls: CModel::pAnimdesc
// callers: CIKContext::AddRule
const CAnimDesc *__fastcall CAnimationBlendList::pAnimdesc(const CAnimationBlendList *const this, int nIndex)
{
  return CModel::pAnimdesc(this->m_pModel, this->m_nAnimation[nIndex]);
}


// CAnimationBlendList::pSeqdesc  (line 108, @0x0000000003067af0, libserver.so)
// calls: CModel::pSeqdesc
const ISequence *__fastcall CAnimationBlendList::pSeqdesc(const CAnimationBlendList *const this, int nIndex)
{
  return CModel::pSeqdesc(this->m_pModel, this->m_hSequenceArray[nIndex]);
}


