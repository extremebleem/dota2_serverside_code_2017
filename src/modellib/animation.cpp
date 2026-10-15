// Reconstructed from DWARF by pahole; not original source.

// src/modellib/animation.cpp:622
class CActivityModifierWeight {
	int m_iWeight;  // +0x4
	CActivityModifierWeight();

	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_animation.cpp  (line 0, @0x0000000001a6b200, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Color, SetColor, __static_initialization_and_destruction_0
// calls: CUtlSymbolTable::CUtlSymbolTable, __cxa_atexit
// globals: `guard variable for'g_AnimOpSourceColors, UNSPECIFIED_LOGGING_COLOR, g_AnimOpSourceColors, g_ActivityModifiersTable, __dso_handle, g_ActivityModifierWeights, CUtlVector<CActivityModifierWeight,CUtlMemory<CActivityModifierWeight,int>>::~CUtlVector()
void __cdecl GLOBAL__sub_I_animation_cpp()
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
  CUtlSymbolTable::CUtlSymbolTable(&g_ActivityModifiersTable, 0, 16, 0);
  __cxa_atexit(CUtlSymbolTable::~CUtlSymbolTable, &g_ActivityModifiersTable, &_dso_handle);
  g_ActivityModifierWeights.m_Size = 0;
  g_ActivityModifierWeights.m_Memory.m_pMemory = 0;
  g_ActivityModifierWeights.m_Memory.m_nAllocationCount = 0;
  g_ActivityModifierWeights.m_Memory.m_nGrowSize = 0;
  __cxa_atexit(
    CUtlVector<CActivityModifierWeight,CUtlMemory<CActivityModifierWeight,int>>::~CUtlVector,
    &g_ActivityModifierWeights,
    &_dso_handle);
}


// ExtractBbox  (line 37, @0x00000000031608e0, libserver.so)
// calls: CModel::GetSequenceBounds
// callers: CBaseAnimating::ExtractBbox, CBaseAnimating::SetSequenceBox
int __fastcall ExtractBbox(const CModel *pModel, HSequence hSequence, Vector *const mins, Vector *const maxs)
{
  int result; // eax

  result = 0;
  if ( pModel != 0 )
  {
    CModel::GetSequenceBounds(pModel, hSequence, mins, maxs);
    return 1;
  }
  return result;
}


// SetEventIndexForSequence  (line 50, @0x0000000003160900, libserver.so)  // inlines: GetEventName, String
// calls: EventList_GetEventType, CUtlString::Get, EventList_IndexForName, EventList_RegisterPrivateEvent
// callers: GetEventIndexForSequence, BuildAllAnimationEventIndexes, IndexModelSequences
void __fastcall SetEventIndexForSequence(const ISequence *pSeqDesc)
{
  unsigned int v2; // r12d
  void (__fastcall *v3)(const ISequence *, _QWORD, _QWORD); // r14
  unsigned int EventType; // eax
  const CUtlString *v5; // rax
  const char *v6; // r14
  AnimEventIndex_t v7; // r13d
  int (**vptr_IBaseSequence)(...); // rax
  int (*v9)(...); // r13
  AnimEventIndex_t v10; // eax

  if ( pSeqDesc != 0 )
  {
    v2 = 0;
    (*(pSeqDesc->_vptr_IBaseSequence + 39))(pSeqDesc, 0x2000);
    if ( (*(pSeqDesc->_vptr_IBaseSequence + 22))(pSeqDesc) != 0 )
    {
      while ( v2 < (*(pSeqDesc->_vptr_IBaseSequence + 22))(pSeqDesc) )
      {
        v5 = (*(pSeqDesc->_vptr_IBaseSequence + 23))(pSeqDesc, v2);
        if ( v5 != 0 )
        {
          v6 = CUtlString::Get(v5 + 3);
          v7.m_Data = EventList_IndexForName(v6).m_Data;
          vptr_IBaseSequence = pSeqDesc->_vptr_IBaseSequence;
          if ( v7.m_Data == -1 )
          {
            v9 = vptr_IBaseSequence[50];
            v10.m_Data = EventList_RegisterPrivateEvent(v6, 17).m_Data;
            v9(pSeqDesc, v2, v10.m_Data);
          }
          else
          {
            vptr_IBaseSequence[50](pSeqDesc, v2, v7.m_Data);
            v3 = *(pSeqDesc->_vptr_IBaseSequence + 51);
            EventType = EventList_GetEventType(v7);
            v3(pSeqDesc, v2, EventType);
          }
        }
        ++v2;
      }
    }
  }
}


// GetEventIndexForSequence  (line 81, @0x00000000031609e0, libserver.so)
// calls: SetEventIndexForSequence
// callers: CBaseAnimatingController::HasAnimEvent, HasAnimationEventOfType, GetAnimationEvents
const AnimEvent_t *__fastcall GetEventIndexForSequence(const ISequence *pSeqDesc)
{
  if ( (*(pSeqDesc->_vptr_IBaseSequence + 38))(pSeqDesc, 0x2000) == 0 )
    SetEventIndexForSequence(pSeqDesc);
  return (*(pSeqDesc->_vptr_IBaseSequence + 23))(pSeqDesc, 0);
}


// BuildAllAnimationEventIndexes  (line 92, @0x0000000003160a20, libserver.so)
// calls: CModel::FirstSequence, CModel::pSeqdesc, SetEventIndexForSequence, CModel::NextSequence
void __fastcall BuildAllAnimationEventIndexes(CModel *pModel)
{
  HSequence v2; // ebx
  const ISequence *v3; // rax

  if ( pModel != 0 && (*(pModel->_vptr_CModel + 2))(pModel) != g_nEventListVersion )
  {
    for ( v2.m_Data = CModel::FirstSequence(pModel).m_Data;
          v2.m_Data != -1;
          v2.m_Data = CModel::NextSequence(pModel, v2).m_Data )
    {
      v3 = CModel::pSeqdesc(pModel, v2);
      SetEventIndexForSequence(v3);
    }
    (*(pModel->_vptr_CModel + 3))(pModel, g_nEventListVersion);
  }
}


// ResetEventIndexes  (line 113, @0x0000000003160ab0, libserver.so)
// callers: CBaseAnimatingController::ResetEventIndexes
void __fastcall ResetEventIndexes(const CModel *pModel)
{
  if ( pModel != 0 )
    (*(pModel->_vptr_CModel + 3))(pModel, (g_nEventListVersion - 1));
}


// SetActivityForSequence  (line 125, @0x0000000003161370, libserver.so)  // inlines: ActivityList_IndexForName, ActivityList_RegisterPrivateActivity
// calls: CModel::pSeqdesc, GetSequenceActivityName
// callers: IndexModelSequences, LookupActivity, GetSequenceActivity, CActivityToSequenceMapping::Initialize
void __fastcall SetActivityForSequence(const CModel *pModel, HSequence hSequence)
{
  const ISequence *v4; // rbx
  const char *SequenceActivityName; // r12
  unsigned int v6; // eax
  int (**vptr_IBaseSequence)(...); // rdx
  int (*v8)(...); // r14

  v4 = CModel::pSeqdesc(pModel, hSequence);
  (*(v4->_vptr_IBaseSequence + 39))(v4, 4096);
  SequenceActivityName = GetSequenceActivityName(pModel, hSequence);
  if ( *SequenceActivityName != 0 )
  {
    if ( g_pAnimationSystem != 0 )
    {
      v6 = (*(*g_pAnimationSystem + 304LL))(g_pAnimationSystem, SequenceActivityName);
      vptr_IBaseSequence = v4->_vptr_IBaseSequence;
      if ( v6 != -1 )
      {
        vptr_IBaseSequence[31](v4, v6);
        return;
      }
      v8 = vptr_IBaseSequence[31];
      if ( g_pAnimationSystem != 0 )
        v6 = (*(*g_pAnimationSystem + 296LL))(g_pAnimationSystem, SequenceActivityName);
    }
    else
    {
      v8 = v4->_vptr_IBaseSequence[31];
      v6 = -1;
    }
    v8(v4, v6);
  }
}


// IndexModelSequences  (line 163, @0x0000000003161450, libserver.so)  // inlines: ActivityList_GetVersion
// calls: CModel::FirstSequence, SetActivityForSequence, CModel::pSeqdesc, SetEventIndexForSequence, CModel::NextSequence
// callers: VerifySequenceIndex
void __fastcall IndexModelSequences(const CModel *pModel)
{
  HSequence v2; // ebx
  const ISequence *v3; // rax
  void (__fastcall *v4)(const CModel *, __int64); // rbx
  __int64 v5; // rsi

  if ( pModel != 0 )
  {
    for ( v2.m_Data = CModel::FirstSequence(pModel).m_Data;
          v2.m_Data != -1;
          v2.m_Data = CModel::NextSequence(pModel, v2).m_Data )
    {
      SetActivityForSequence(pModel, v2);
      v3 = CModel::pSeqdesc(pModel, v2);
      SetEventIndexForSequence(v3);
    }
    v4 = *(pModel->_vptr_CModel + 1);
    v5 = (*(*g_pAnimationSystem + 336LL))(g_pAnimationSystem);
    v4(pModel, v5);
  }
}


// ResetActivityIndexes  (line 180, @0x0000000003160ae0, libserver.so)  // inlines: ActivityList_GetVersion
// callers: CBaseAnimatingController::ResetActivityIndexes
void __fastcall ResetActivityIndexes(const CModel *pModel)
{
  void (__fastcall *v2)(const CModel *, _QWORD); // r12
  int v3; // eax

  if ( pModel != 0 )
  {
    v2 = *(pModel->_vptr_CModel + 1);
    v3 = (*(*g_pAnimationSystem + 336LL))(g_pAnimationSystem);
    v2(pModel, (v3 - 1));
  }
}


// VerifySequenceIndex  (line 192, @0x00000000031614e0, libserver.so)  // inlines: ActivityList_GetVersion
// calls: IndexModelSequences
// callers: CBaseEntity::PrecacheModelComponents, SelectHeaviestSequence, CActivityToSequenceMapping::SelectWeightedSequenceFromModifiers, CModel::InitActivityToSequence, SelectWeightedSequence, SelectWeightedSequenceFromModifiers
void __fastcall VerifySequenceIndex(const CModel *pModel)
{
  int v2; // r12d

  if ( pModel != 0 )
  {
    v2 = (*pModel->_vptr_CModel)(pModel);
    if ( v2 != (*(*g_pAnimationSystem + 336LL))(g_pAnimationSystem) )
      IndexModelSequences(pModel);
  }
}


// SelectWeightedSequence  (line 206, @0x0000000003163030, libserver.so)  // inlines: GetActivityToSequenceMapping, HSequence
// calls: CModel::FirstSequence, VerifySequenceIndex, CModel::NextSequence, CModel::InitActivityToSequence, CActivityToSequenceMapping::SelectWeightedSequence, GetSequenceActivity
// callers: CBaseAnimating::SelectWeightedSequence, CBaseAnimatingController::SelectWeightedSequence, CBaseCombatWeapon::SetIdealActivity, CParticleSystemQuery::GetActivityNumber, LookupSequence
HSequence __fastcall SelectWeightedSequence(const CModel *pModel, Activity activity, HSequence hCurSequence)
{
  HSequence result; // eax

  result.m_Data = 0;
  if ( pModel != 0 )
  {
    result.m_Data = CModel::FirstSequence(pModel).m_Data;
    if ( result.m_Data != -1 )
    {
      VerifySequenceIndex(pModel);
      if ( CModel::NextSequence(pModel, 0).m_Data == -1 )
      {
        return ((GetSequenceActivity(pModel, 0, 0) == activity) - 1);
      }
      else
      {
        CModel::InitActivityToSequence(pModel);
        return CActivityToSequenceMapping::SelectWeightedSequence(pModel->m_pActivityToSequence, activity, hCurSequence);
      }
    }
  }
  return result;
}


// SelectWeightedSequenceFromModifiers  (line 240, @0x0000000003163120, libserver.so)  // inlines: GetActivityToSequenceMapping
// calls: CModel::FirstSequence, VerifySequenceIndex, CModel::NextSequence, CModel::InitActivityToSequence, CActivityToSequenceMapping::SelectWeightedSequenceFromModifiers, GetSequenceActivity, CModel::pSeqdesc
// callers: CBaseAnimatingController::SelectWeightedSequenceFromModifiers
// globals: g_ActivityModifiersTable
HSequence __fastcall SelectWeightedSequenceFromModifiers(
        const CModel *pModel,
        Activity activity,
        const CUtlSymbol *pActivityModifiers,
        int iModifierCount)
{
  HSequence v8; // eax
  HSequence v9; // r15d
  const ISequence *v11; // rax
  int v12; // eax

  v8.m_Data = CModel::FirstSequence(pModel).m_Data;
  if ( v8.m_Data == -1 )
    return v8;
  VerifySequenceIndex(pModel);
  v9.m_Data = CModel::NextSequence(pModel, 0).m_Data;
  if ( v9.m_Data == -1 )
  {
    if ( GetSequenceActivity(pModel, 0, 0) != activity )
      return v9;
    v11 = CModel::pSeqdesc(pModel, 0);
    if ( v11 == 0 )
      return 0;
    v12 = (*(v11->_vptr_IBaseSequence + 27))(v11) - 1;
    if ( v12 <= 0 )
      return 0;
    if ( v12 != iModifierCount )
      return v9;
  }
  CModel::InitActivityToSequence(pModel);
  return CActivityToSequenceMapping::SelectWeightedSequenceFromModifiers(
           pModel->m_pActivityToSequence,
           activity,
           &g_ActivityModifiersTable,
           pActivityModifiers,
           iModifierCount);
}


// CActivityToSequenceMapping::Initialize  (line 290, @0x0000000003162800, libserver.so)  // inlines: AddToTail, BuildHandle, CopyConstruct<CActivityToSequenceMapping::HashValueType>, DoFind, Element, Find, GetBucketIndex, GetFirstHandle, GetKeyDataIndex, GetNextHandle, GrowMemory, HSequence, HashInt, Insert, IsValidHandle, SequenceTuple, memset, operator(), operator[]
// calls: CModel::FirstSequence, CModel::pSeqdesc, MurmurHash2, CModel::NextSequence, operator new [], memset, SetActivityForSequence, CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::Grow, __stack_chk_fail
// callers: CModel::InitActivityToSequence
void __fastcall CActivityToSequenceMapping::Initialize(CActivityToSequenceMapping *const this)
{
  HSequence v2; // r12d
  char v3; // r14
  const ISequence *v4; // r13
  float v5; // xmm0_4
  int (**vptr_IBaseSequence)(...); // rax
  int v7; // r14d
  int v8; // r15d
  uint32 v9; // eax
  int m_Size; // r10d
  signed int v11; // edx
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *m_pMemory; // r9
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v13; // rax
  int v14; // edi
  CActivityToSequenceMapping::HashValueType *v15; // rsi
  CActivityToSequenceMapping::HashValueType *v16; // rsi
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  uint32 v20; // eax
  unsigned int v21; // edx
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v22; // r8
  __int64 v23; // rcx
  CActivityToSequenceMapping::HashValueType *v24; // rdx
  CActivityToSequenceMapping::HashValueType *v25; // rdx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  bool v29; // zf
  CActivityToSequenceMapping::HashValueType *v30; // rcx
  int v31; // ecx
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v32; // rax
  int v33; // r12d
  int v34; // r14d
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v35; // rax
  int v36; // r15d
  signed int v37; // r14d
  size_t v38; // rdi
  CActivityToSequenceMapping::SequenceTuple *v39; // r13
  __int64 i; // rax
  size_t v41; // rdx
  void *v42; // rsp
  HSequence v43; // r12d
  const ISequence *v44; // r15
  int v45; // eax
  __int64 v46; // r14
  uint32 v47; // eax
  signed int v48; // edx
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v49; // rdi
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v50; // rax
  int v51; // r8d
  CActivityToSequenceMapping::HashValueType *v52; // rsi
  CActivityToSequenceMapping::HashValueType *v53; // rsi
  int v54; // ecx
  Elf64_Rela *v55; // rdx
  __int64 v56; // rax
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v57; // rdx
  __int64 v58; // rcx
  int *v59; // rax
  __int64 v60; // r14
  int (**v61)(...); // rcx
  float v62; // xmm0_4
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v63; // rax
  int (**v64)(...); // rcx
  float v65; // xmm0_4
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v66; // rax
  int v67; // ecx
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v68; // rdx
  CActivityToSequenceMapping::SequenceTuple *v69; // rdx
  unsigned int v70; // edx
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v71; // rdx
  __int64 v72; // r14
  float v73; // xmm0_4
  double v74; // xmm0_8
  double v75; // xmm0_8
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v76; // rdx
  CActivityToSequenceMapping::HashValueType *v77; // rax
  int activityIdx; // eax
  int v79; // eax
  signed int v80; // edx
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v81; // rsi
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v82; // rax
  unsigned int v83; // eax
  float v84; // xmm0_4
  int *seqsPerAct; // [rsp+10h] [rbp-70h] BYREF
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v86; // [rsp+18h] [rbp-68h]
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v87; // [rsp+20h] [rbp-60h]
  void *key; // [rsp+28h] [rbp-58h]
  int v89; // [rsp+3Ch] [rbp-44h] BYREF
  int v90; // [rsp+40h] [rbp-40h] BYREF
  int v91; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned __int64 v92; // [rsp+48h] [rbp-38h]

  v92 = __readfsqword(0x28u);
  if ( this->m_pSequenceTuples != 0 )
    return;
  if ( CModel::FirstSequence(this->m_pModel).m_Data == -1 )
    return;
  v2.m_Data = CModel::FirstSequence(this->m_pModel).m_Data;
  if ( v2.m_Data == -1 )
    return;
  v3 = 0;
  key = &v89;
  do
  {
    v4 = CModel::pSeqdesc(this->m_pModel, v2);
    if ( (*(v4->_vptr_IBaseSequence + 38))(v4, 4096) == 0 )
      SetActivityForSequence(this->m_pModel, v2);
    if ( (*(v4->_vptr_IBaseSequence + 30))(v4, 0) < 0 )
      goto LABEL_31;
    v5 = (*(v4->_vptr_IBaseSequence + 29))(v4, 0);
    vptr_IBaseSequence = v4->_vptr_IBaseSequence;
    if ( v5 < 0.0 )
    {
      v74 = (vptr_IBaseSequence[29])(v4, 0);
      v7 = -*&v74;
    }
    else
    {
      v7 = (vptr_IBaseSequence[29])(v4, 0);
    }
    v8 = (*(v4->_vptr_IBaseSequence + 30))(v4, 0);
    v89 = v8;
    v9 = MurmurHash2(key, 4, 0x3501A674u);
    m_Size = this->m_ActToSeqHash.m_Buckets.m_Size;
    if ( this->m_ActToSeqHash.m_bPowerOfTwo )
      v11 = this->m_ActToSeqHash.m_ModMask & v9;
    else
      v11 = v9 % m_Size;
    m_pMemory = this->m_ActToSeqHash.m_Buckets.m_Memory.m_pMemory;
    v13 = &m_pMemory[v11];
    v14 = v13->m_Size;
    if ( v13->m_Size <= 0 )
    {
      if ( v14 != 0 )
      {
LABEL_63:
        v17 = 0;
LABEL_64:
        v70 = v17 | (v11 << 16);
        v19 = v70;
        v18 = HIWORD(v70);
        if ( v18 >= m_Size )
        {
LABEL_19:
          v90 = v8;
          v20 = MurmurHash2(&v90, 4, 0x3501A674u);
          if ( this->m_ActToSeqHash.m_bPowerOfTwo )
            v21 = this->m_ActToSeqHash.m_ModMask & v20;
          else
            v21 = v20 % this->m_ActToSeqHash.m_Buckets.m_Size;
          v22 = &this->m_ActToSeqHash.m_Buckets.m_Memory.m_pMemory[v21];
          v23 = v22->m_Size;
          if ( v23 <= 0 )
          {
            if ( v23 == 0 )
              goto LABEL_26;
          }
          else
          {
            v24 = v22->m_Memory.m_pMemory;
            if ( v8 != v24->activityIdx )
            {
              v25 = v24 + 1;
              v26 = 0;
              while ( ++v26 != v23 )
              {
                ++v25;
                if ( v8 == v25[-1].activityIdx )
                  goto LABEL_30;
              }
LABEL_26:
              if ( v23 == v22->m_Memory.m_nAllocationCount )
              {
                LODWORD(v86) = v22->m_Size;
                v87 = v22;
                CUtlMemory<CActivityToSequenceMapping::HashValueType,int>::Grow(&v22->m_Memory, 1);
                v22 = v87;
                v23 = v86;
                v27 = v87->m_Size;
              }
              else
              {
                v27 = v22->m_Size;
              }
              v28 = v23;
              v29 = &v22->m_Memory.m_pMemory[v28] == 0;
              v30 = &v22->m_Memory.m_pMemory[v28];
              v22->m_Size = v27 + 1;
              if ( !v29 )
              {
                v30->activityIdx = v8;
                v30->startingIdx = 0;
                v30->count = 1;
                v30->totalWeight = v7;
              }
            }
          }
LABEL_30:
          v3 = 1;
          goto LABEL_31;
        }
        goto LABEL_65;
      }
    }
    else
    {
      v15 = v13->m_Memory.m_pMemory;
      if ( v8 == v15->activityIdx )
        goto LABEL_63;
      v16 = v15 + 1;
      v17 = 0;
      while ( ++v17 != v14 )
      {
        ++v16;
        if ( v8 == v16[-1].activityIdx )
          goto LABEL_64;
      }
    }
    v18 = 0xFFFF;
    v19 = 0xFFFF;
    if ( m_Size <= 0xFFFF )
      goto LABEL_19;
LABEL_65:
    v71 = &m_pMemory[v18];
    if ( v71->m_Size <= v19 )
      goto LABEL_19;
    v72 = &v71->m_Memory.m_pMemory[v19];
    ++*(v72 + 8);
    if ( (*(v4->_vptr_IBaseSequence + 29))(v4, 0) < 0.0 )
    {
      v75 = (*(v4->_vptr_IBaseSequence + 29))(v4, 0);
      v73 = -*&v75;
    }
    else
    {
      v73 = (*(v4->_vptr_IBaseSequence + 29))(v4, 0);
    }
    *(v72 + 12) = (*(v72 + 12) + v73);
    v3 = 1;
LABEL_31:
    v2.m_Data = CModel::NextSequence(this->m_pModel, v2).m_Data;
  }
  while ( v2.m_Data != -1 );
  if ( v3 != 0 )
  {
    v31 = this->m_ActToSeqHash.m_Buckets.m_Size;
    if ( v31 > 0 )
    {
      v32 = this->m_ActToSeqHash.m_Buckets.m_Memory.m_pMemory;
      v33 = 0;
      v34 = v32->m_Size;
      v35 = v32 + 1;
      if ( v34 <= 0 )
      {
        do
        {
          if ( ++v33 == v31 )
          {
            v2.m_Data = -1;
            goto LABEL_39;
          }
          ++v35;
        }
        while ( v35[-1].m_Size <= 0 );
        v2.m_Data = v33 << 16;
      }
      else
      {
        v2.m_Data = 0;
      }
    }
LABEL_39:
    v36 = 0;
    v37 = 0;
    while ( HIWORD(v2.m_Data) < v31 )
    {
      v76 = &this->m_ActToSeqHash.m_Buckets.m_Memory.m_pMemory[HIWORD(v2.m_Data)];
      if ( LOWORD(v2.m_Data) >= v76->m_Size )
        break;
      v77 = &v76->m_Memory.m_pMemory[LOWORD(v2.m_Data)];
      v77->startingIdx = v37;
      v37 += v77->count;
      activityIdx = v77->activityIdx;
      v31 = this->m_ActToSeqHash.m_Buckets.m_Size;
      if ( v36 < activityIdx )
        v36 = activityIdx;
      v79 = (LOWORD(v2.m_Data) + 1);
      v80 = (v2.m_Data + 1) >> 16;
      v2.m_Data = -1;
      if ( v80 < v31 )
      {
        v81 = this->m_ActToSeqHash.m_Buckets.m_Memory.m_pMemory;
        if ( v81[v80].m_Size > v79 )
        {
LABEL_82:
          v2.m_Data = v79 | (v80 << 16);
        }
        else
        {
          v82 = &v81[v80 + 1];
          while ( ++v80 != v31 )
          {
            ++v82;
            if ( v82[-1].m_Size > 0 )
            {
              v79 = 0;
              goto LABEL_82;
            }
          }
          v2.m_Data = -1;
        }
      }
    }
    v38 = -1;
    if ( v37 <= 0xFE0000000000000LL )
      v38 = 8LL * v37;
    v39 = operator new[](v38);
    for ( i = 0; v37 != i; v39[i++].m_hSequence.m_Data = -1 )
      ;
    this->m_pSequenceTuples = v39;
    v41 = (4 * v36 + 19) & 0xFFFFFFF0;
    this->m_iSequenceTuplesCount = v37;
    v42 = alloca(16 * (((v41 + 16) + 30) >> 4));
    seqsPerAct = (&seqsPerAct & 0xFFFFFFFFFFFFFFEFLL);
    memset((&seqsPerAct & 0xFFFFFFFFFFFFFFEFLL), 0, v41);
    v43.m_Data = CModel::FirstSequence(this->m_pModel).m_Data;
    if ( v43.m_Data != -1 )
    {
      while ( 2 )
      {
        v44 = CModel::pSeqdesc(this->m_pModel, v43);
        v45 = (*(v44->_vptr_IBaseSequence + 30))(v44, 0);
        v46 = v45;
        if ( v45 < 0 )
          goto LABEL_60;
        v91 = v45;
        v47 = MurmurHash2(&v91, 4, 0x3501A674u);
        if ( this->m_ActToSeqHash.m_bPowerOfTwo )
          v48 = this->m_ActToSeqHash.m_ModMask & v47;
        else
          v48 = v47 % this->m_ActToSeqHash.m_Buckets.m_Size;
        v49 = this->m_ActToSeqHash.m_Buckets.m_Memory.m_pMemory;
        v50 = &v49[v48];
        v51 = v50->m_Size;
        if ( v50->m_Size <= 0 )
        {
          if ( v51 == 0 )
            goto LABEL_54;
        }
        else
        {
          v52 = v50->m_Memory.m_pMemory;
          if ( v46 != v52->activityIdx )
          {
            v53 = v52 + 1;
            v54 = 0;
            while ( ++v54 != v51 )
            {
              ++v53;
              if ( v46 == v53[-1].activityIdx )
                goto LABEL_86;
            }
LABEL_54:
            v55 = &stru_FFFF0;
            v56 = &stru_17FFE8;
LABEL_55:
            v57 = (*(&v49->m_Memory.m_pMemory + v56) + v55);
            v58 = *(&v57->m_Size + 1);
            v87 = v57;
            v59 = &seqsPerAct[v46];
            v60 = *v59;
            v86 = v59;
            v39[v60 + v58].m_hSequence = v43;
            v61 = v44->_vptr_IBaseSequence;
            key = &v39[v60 + *(&v57->m_Size + 1)];
            v62 = (v61[29])(v44, 0);
            v63 = v86;
            v64 = v44->_vptr_IBaseSequence;
            v86 = v87;
            v87 = v63;
            if ( v62 < 0.0 )
            {
              v84 = (v64[29])(v44, 0);
              v68 = v86;
              v66 = v87;
              v67 = -v84;
            }
            else
            {
              v65 = (v64[29])(v44, 0);
              v66 = v87;
              v67 = v65;
              v68 = v86;
            }
            *(key + 1) = v67;
            v69 = &v39[*(&v68->m_Size + 1) + v60];
            if ( v69->m_nWeight == 0 )
              v69->m_nWeight = 1;
            ++v66->m_Size;
LABEL_60:
            v43.m_Data = CModel::NextSequence(this->m_pModel, v43).m_Data;
            if ( v43.m_Data == -1 )
              return;
            continue;
          }
        }
        break;
      }
      v54 = 0;
LABEL_86:
      v83 = v54 | (v48 << 16);
      v55 = (16LL * v54);
      v56 = 24LL * HIWORD(v83);
      goto LABEL_55;
    }
  }
}


// CActivityToSequenceMapping::GetSequences  (line 429, @0x0000000003160b30, libserver.so)  // inlines: BuildHandle, DoFind, Element, Find, HashInt, IsValidHandle, operator(), operator[]
// calls: MurmurHash2
// callers: CActivityToSequenceMapping::GetSequenceVariantForActivity, CActivityToSequenceMapping::GetSequenceByVariantForActivity
const CActivityToSequenceMapping::SequenceTuple *__fastcall CActivityToSequenceMapping::GetSequences(
        CActivityToSequenceMapping *const this,
        Activity forActivity,
        int *outSequenceCount,
        int *outTotalWeight)
{
  uint32 v8; // eax
  int m_Size; // r10d
  signed int v10; // edx
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *m_pMemory; // rdi
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v12; // rsi
  int v13; // ecx
  CActivityToSequenceMapping::HashValueType *v14; // r9
  CActivityToSequenceMapping::HashValueType *v15; // r9
  int v16; // r8d
  int v17; // edx
  const CActivityToSequenceMapping::SequenceTuple *result; // rax
  __int64 v19; // rcx
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v20; // rdx
  CActivityToSequenceMapping::SequenceTuple *m_pSequenceTuples; // rax
  int *p_activityIdx; // rcx
  __int64 v23; // rdx
  unsigned int v24; // edx
  Activity key[9]; // [rsp+Ch] [rbp-24h] BYREF

  key[0] = forActivity;
  v8 = MurmurHash2(key, 4, 0x3501A674u);
  m_Size = this->m_ActToSeqHash.m_Buckets.m_Size;
  if ( this->m_ActToSeqHash.m_bPowerOfTwo )
    v10 = this->m_ActToSeqHash.m_ModMask & v8;
  else
    v10 = v8 % m_Size;
  m_pMemory = this->m_ActToSeqHash.m_Buckets.m_Memory.m_pMemory;
  v12 = &m_pMemory[v10];
  v13 = v12->m_Size;
  if ( v12->m_Size <= 0 )
  {
    if ( v13 == 0 )
      goto LABEL_8;
  }
  else
  {
    v14 = v12->m_Memory.m_pMemory;
    if ( forActivity != v14->activityIdx )
    {
      v15 = v14 + 1;
      v16 = 0;
      while ( ++v16 != v13 )
      {
        ++v15;
        if ( forActivity == v15[-1].activityIdx )
          goto LABEL_13;
      }
LABEL_8:
      v17 = 0xFFFF;
      result = 0;
      v19 = 0xFFFF;
      if ( m_Size <= 0xFFFF )
        return result;
      goto LABEL_9;
    }
  }
  v16 = 0;
LABEL_13:
  v24 = v16 | (v10 << 16);
  v19 = v24;
  result = 0;
  v17 = HIWORD(v24);
  if ( v17 < m_Size )
  {
LABEL_9:
    v20 = &m_pMemory[v17];
    if ( v20->m_Size > v19 )
    {
      m_pSequenceTuples = this->m_pSequenceTuples;
      p_activityIdx = &v20->m_Memory.m_pMemory[v19].activityIdx;
      v23 = p_activityIdx[1];
      *outSequenceCount = p_activityIdx[2];
      *outTotalWeight = p_activityIdx[3];
      return &m_pSequenceTuples[v23];
    }
  }
  return result;
}


// CActivityToSequenceMapping::NumSequencesForActivity  (line 453, @0x0000000003160c50, libserver.so)  // inlines: BuildHandle, DoFind, Find, HashInt, IsValidHandle, operator(), operator[]
// calls: MurmurHash2
int __fastcall CActivityToSequenceMapping::NumSequencesForActivity(
        CActivityToSequenceMapping *const this,
        Activity forActivity)
{
  uint32 v4; // eax
  signed int v5; // edx
  int m_Size; // r9d
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *m_pMemory; // r8
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v8; // rcx
  int v9; // esi
  CActivityToSequenceMapping::HashValueType *v10; // rdi
  CActivityToSequenceMapping::HashValueType *v11; // rdi
  int v12; // ecx
  __int64 v13; // rax
  int v14; // edx
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v15; // rdx
  unsigned int v17; // edx
  Activity key[5]; // [rsp+Ch] [rbp-14h] BYREF

  if ( this->m_pSequenceTuples == 0 )
    return 0;
  key[0] = forActivity;
  v4 = MurmurHash2(key, 4, 0x3501A674u);
  if ( this->m_ActToSeqHash.m_bPowerOfTwo )
  {
    m_Size = this->m_ActToSeqHash.m_Buckets.m_Size;
    v5 = this->m_ActToSeqHash.m_ModMask & v4;
  }
  else
  {
    v5 = v4 % this->m_ActToSeqHash.m_Buckets.m_Size;
    m_Size = this->m_ActToSeqHash.m_Buckets.m_Size;
  }
  m_pMemory = this->m_ActToSeqHash.m_Buckets.m_Memory.m_pMemory;
  v8 = &m_pMemory[v5];
  v9 = v8->m_Size;
  if ( v8->m_Size <= 0 )
  {
    if ( v9 == 0 )
    {
LABEL_9:
      v13 = 0xFFFF;
      v14 = 0xFFFF;
      goto LABEL_10;
    }
  }
  else
  {
    v10 = v8->m_Memory.m_pMemory;
    if ( forActivity != v10->activityIdx )
    {
      v11 = v10 + 1;
      v12 = 0;
      while ( ++v12 != v9 )
      {
        ++v11;
        if ( forActivity == v11[-1].activityIdx )
          goto LABEL_16;
      }
      goto LABEL_9;
    }
  }
  v12 = 0;
LABEL_16:
  v17 = v12 | (v5 << 16);
  v13 = v17;
  v14 = HIWORD(v17);
LABEL_10:
  if ( v14 >= m_Size )
    return 0;
  v15 = &m_pMemory[v14];
  if ( v15->m_Size <= v13 )
    return 0;
  return v15->m_Memory.m_pMemory[v13].count;
}


// CModel::GetActivityToSequenceMapping  (line 473, @0x0000000003163010, libserver.so)
// calls: CModel::InitActivityToSequence
// callers: GetSequenceVariantForActivity
CActivityToSequenceMapping *__fastcall CModel::GetActivityToSequenceMapping(const CModel *const this)
{
  CModel::InitActivityToSequence(this);
  return this->m_pActivityToSequence;
}


// CModel::InitActivityToSequence  (line 479, @0x0000000003162f20, libserver.so)  // inlines: CActivityToSequenceMapping, CUtlHash, CUtlMemory, CUtlVector, CUtlVectorBase, SetGrowSize, operator[], ~CUtlVector
// calls: VerifySequenceIndex, operator new, CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> >, CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> >, int> >::SetCount, CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> >::SetCount, CActivityToSequenceMapping::Initialize, CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> >, CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> >, int> >::~CUtlVectorBase, operator delete, _Unwind_Resume
// callers: CModel::GetActivityToSequenceMapping, SelectWeightedSequence, SelectWeightedSequenceFromModifiers
void __fastcall CModel::InitActivityToSequence(const CModel *const this)
{
  CActivityToSequenceMapping *v2; // rax
  CActivityToSequenceMapping *v3; // r12
  __int64 i; // rbx
  __int64 v5; // rdx

  if ( this->m_pActivityToSequence != 0 )
  {
    VerifySequenceIndex(this);
  }
  else
  {
    v2 = operator new(0x38u);
    v2->m_pSequenceTuples = 0;
    v3 = v2;
    v2->m_iSequenceTuplesCount = 0;
    v2->m_ActToSeqHash.m_Buckets.m_Size = 0;
    v2->m_ActToSeqHash.m_Buckets.m_Memory.m_pMemory = 0;
    v2->m_ActToSeqHash.m_Buckets.m_Memory.m_nAllocationCount = 0;
    v2->m_ActToSeqHash.m_Buckets.m_Memory.m_nGrowSize = 0;
    CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int>>,CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int>>,int>>::SetCount(
      &v2->m_ActToSeqHash.m_Buckets,
      8);
    for ( i = 0; i != 8; ++i )
    {
      CUtlVectorBase<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int>>::SetCount(
        &v3->m_ActToSeqHash.m_Buckets.m_Memory.m_pMemory[i],
        0);
      v5 = i * 24;
      *(&v3->m_ActToSeqHash.m_Buckets.m_Memory.m_pMemory->m_Memory.m_nGrowSize + v5) &= 0xC0000000;
    }
    v3->m_ActToSeqHash.m_bPowerOfTwo = 1;
    v3->m_ActToSeqHash.m_ModMask = 7;
    v3->m_pModel = this;
    this->m_pActivityToSequence = v3;
    CActivityToSequenceMapping::Initialize(v3);
  }
}


// CActivityToSequenceMapping::GetSequenceVariantForActivity  (line 492, @0x0000000003160d50, libserver.so)
// calls: CActivityToSequenceMapping::GetSequences, CModel::pszName, Warning
// callers: GetSequenceVariantForActivity
// strings: "unknown activity %d on for activity model %s!\n"
int __fastcall CActivityToSequenceMapping::GetSequenceVariantForActivity(
        CActivityToSequenceMapping *const this,
        HSequence hSequence,
        Activity activity)
{
  const CActivityToSequenceMapping::SequenceTuple *Sequences; // rax
  int v7; // edx
  const char *v9; // rax
  int iSequenceCount; // [rsp+8h] [rbp-28h] BYREF
  int iSequenceWeight[9]; // [rsp+Ch] [rbp-24h] BYREF

  Sequences = CActivityToSequenceMapping::GetSequences(this, activity, &iSequenceCount, iSequenceWeight);
  if ( Sequences != 0 )
  {
    if ( iSequenceCount > 0 && hSequence.m_Data != Sequences->m_hSequence.m_Data )
    {
      v7 = 0;
      while ( 1 )
      {
        ++v7;
        ++Sequences;
        if ( v7 == iSequenceCount )
          break;
        if ( Sequences->m_hSequence.m_Data == hSequence.m_Data )
          return v7;
      }
    }
    return 0;
  }
  else
  {
    v9 = CModel::pszName(this->m_pModel);
    Warning("unknown activity %d on for activity model %s!\n", activity, v9);
    return 0;
  }
}


// CActivityToSequenceMapping::GetSequenceByVariantForActivity  (line 514, @0x0000000003160de0, libserver.so)  // inlines: Clamp<int>
// calls: CActivityToSequenceMapping::GetSequences
HSequence __fastcall CActivityToSequenceMapping::GetSequenceByVariantForActivity(
        CActivityToSequenceMapping *const this,
        int iSequenceVariantIndex,
        Activity activity)
{
  const CActivityToSequenceMapping::SequenceTuple *Sequences; // rax
  __int64 v5; // rdx
  int v6; // edx
  int iSequenceCount; // [rsp+8h] [rbp-18h] BYREF
  int iSequenceWeight[5]; // [rsp+Ch] [rbp-14h] BYREF

  Sequences = CActivityToSequenceMapping::GetSequences(this, activity, &iSequenceCount, iSequenceWeight);
  if ( Sequences != 0 )
  {
    v5 = 0;
    if ( iSequenceVariantIndex >= 0 )
    {
      v6 = iSequenceCount - 1;
      if ( iSequenceVariantIndex <= iSequenceCount - 1 )
        v6 = iSequenceVariantIndex;
      v5 = v6;
    }
    LODWORD(Sequences) = Sequences[v5].m_hSequence.m_Data;
  }
  return Sequences;
}


// CActivityToSequenceMapping::SelectWeightedSequence  (line 534, @0x0000000003160e30, libserver.so)  // inlines: ActivityList_NameForIndex, BuildHandle, DoFind, Element, Find, HashInt, IsValidHandle, operator(), operator[]
// calls: CModel::pSeqdesc, CModel::NextSequence, MurmurHash2, RandomInt, Warning
// callers: SelectWeightedSequence
// strings: "Activity %s has %d sequences with a total weight of %d!"
HSequence __fastcall CActivityToSequenceMapping::SelectWeightedSequence(
        CActivityToSequenceMapping *const this,
        Activity activity,
        HSequence hCurSequence)
{
  const ISequence *v6; // r14
  uint32 v7; // eax
  CActivityToSequenceMapping::HashValueType *v8; // r8
  int m_Size; // r9d
  signed int v10; // edx
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *m_pMemory; // rdi
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v12; // rcx
  int v13; // esi
  int v14; // edx
  int v15; // eax
  HSequence result; // eax
  unsigned int v17; // edx
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v18; // rdx
  int *p_activityIdx; // r13
  int v20; // r14d
  int v21; // eax
  CActivityToSequenceMapping::SequenceTuple *v22; // rdx
  CActivityToSequenceMapping::SequenceTuple *v23; // rsi
  int i; // ecx
  float v25; // xmm0_4
  const char *v26; // rsi
  int v27; // r15d
  Activity key[13]; // [rsp+Ch] [rbp-34h] BYREF

  if ( hCurSequence.m_Data != -1 )
  {
    v6 = CModel::pSeqdesc(this->m_pModel, hCurSequence);
    if ( (*(v6->_vptr_IBaseSequence + 30))(v6, 0) == activity )
    {
      v25 = (*(v6->_vptr_IBaseSequence + 29))(v6, 0);
      result.m_Data = hCurSequence.m_Data;
      if ( v25 < 0.0 )
        return result;
    }
  }
  if ( CModel::NextSequence(this->m_pModel, 0).m_Data == -1 || this->m_pSequenceTuples == 0 )
    return -1;
  key[0] = activity;
  v7 = MurmurHash2(key, 4, 0x3501A674u);
  if ( this->m_ActToSeqHash.m_bPowerOfTwo )
  {
    m_Size = this->m_ActToSeqHash.m_Buckets.m_Size;
    v10 = this->m_ActToSeqHash.m_ModMask & v7;
  }
  else
  {
    v10 = v7 % this->m_ActToSeqHash.m_Buckets.m_Size;
    m_Size = this->m_ActToSeqHash.m_Buckets.m_Size;
  }
  m_pMemory = this->m_ActToSeqHash.m_Buckets.m_Memory.m_pMemory;
  v12 = &m_pMemory[v10];
  v13 = v12->m_Size;
  if ( v12->m_Size <= 0 )
  {
    if ( v13 == 0 )
      goto LABEL_12;
LABEL_15:
    v12 = 0;
LABEL_16:
    v17 = v12 | (v10 << 16);
    v15 = v17;
    v14 = HIWORD(v17);
    if ( m_Size <= v14 )
      return -1;
    goto LABEL_17;
  }
  v8 = v12->m_Memory.m_pMemory;
  if ( activity == v8->activityIdx )
    goto LABEL_15;
  ++v8;
  LODWORD(v12) = 0;
  while ( 1 )
  {
    v12 = (v12 + 1);
    if ( v12 == v13 )
      break;
    ++v8;
    if ( activity == v8[-1].activityIdx )
      goto LABEL_16;
  }
LABEL_12:
  v14 = 0xFFFF;
  v15 = 0xFFFF;
  if ( m_Size <= 0xFFFF )
    return -1;
LABEL_17:
  v18 = &m_pMemory[v14];
  if ( v15 >= v18->m_Size )
    return -1;
  p_activityIdx = &v18->m_Memory.m_pMemory[v15].activityIdx;
  v20 = p_activityIdx[3];
  if ( v20 <= 0 )
  {
    v26 = 0;
    v27 = p_activityIdx[2];
    if ( g_pAnimationSystem != 0 )
      v26 = (*(*g_pAnimationSystem + 312LL))(g_pAnimationSystem, activity, v18, v12, v8);
    Warning("Activity %s has %d sequences with a total weight of %d!", v26, v27, v20);
    return this->m_pSequenceTuples[p_activityIdx[1]].m_hSequence.m_Data;
  }
  else
  {
    v21 = 0;
    if ( v20 != 1 )
      v21 = RandomInt(0, (v20 - 1));
    v22 = &this->m_pSequenceTuples[p_activityIdx[1]];
    v23 = &v22[p_activityIdx[2]];
    for ( i = v22->m_nWeight; i <= v21 && v23 > v22; i = v22->m_nWeight )
    {
      ++v22;
      v21 -= i;
    }
    return v22->m_hSequence.m_Data;
  }
}


// LookupActivityModifier  (line 634, @0x0000000003161040, libserver.so)
// calls: CUtlSymbolTable::Find
// callers: CDOTA_Modifier_Tusk_WalrusPunch::OnAttack
// globals: g_ActivityModifiersTable
unsigned __int16 *__fastcall LookupActivityModifier(unsigned __int16 *a1, const char *pModifierName)
{
  CUtlSymbolTable::Find(a1, &g_ActivityModifiersTable, pModifierName);
  return a1;
}


// FindOrAddActivityModifier  (line 640, @0x0000000003161070, libserver.so)
// calls: CUtlSymbolTable::AddString
// callers: CBaseVRHandAttachment::SelectWeightedSequenceWithHandModifier, CDOTA_BaseNPC::AddActivityModifier
// globals: g_ActivityModifiersTable
unsigned __int16 *__fastcall FindOrAddActivityModifier(unsigned __int16 *a1, const char *pModifierName)
{
  CUtlSymbolTable::AddString(a1, &g_ActivityModifiersTable, pModifierName);
  return a1;
}


// GetActivityModifierName  (line 646, @0x00000000031610a0, libserver.so)  // inlines: CUtlSymbol
// calls: CUtlSymbolTable::String
// callers: CDOTA_BaseNPC::DrawDebugTextOverlays
// globals: g_ActivityModifiersTable
char *__fastcall GetActivityModifierName(UtlSymId_t *modifier)
{
  CUtlSymbol id; // [rsp+0h] [rbp-10h] BYREF

  id.m_Id = *modifier;
  return CUtlSymbolTable::String(&g_ActivityModifiersTable, &id.m_Id);
}


// CalculateActivityModifierWeights  (line 651, @0x0000000003162200, libserver.so)  // inlines: AddToTail, CActivityModifierWeight, CUtlSymbol, Construct<CActivityModifierWeight>, Element, GrowMemory, operator=, operator[]
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::GetFirstSubKey, KeyValues::GetName, CUtlSymbolTable::AddString, KeyValues::GetInt, KeyValues::GetNextKey, CUtlMemory<CActivityModifierWeight, int>::Grow, KeyValues::deleteThis, Warning, KeyValues::operator delete (13 total)
// callers: CActivityToSequenceMapping::SelectWeightedSequenceFromModifiers
// strings: "ACTIVITY WEIGHTS", "scripts/activity_modifier_weights.txt", "Activity Weights keys not allocated!\n"
// globals: CalculateActivityModifierWeights(void)::s_bHasAttemptedToLoadFile, g_ActivityModifierWeights, g_ActivityModifiersTable, s_bHasModifierWeights
void __cdecl CalculateActivityModifierWeights()
{
  KeyValues *v0; // r14
  IBaseFileSystem *v1; // rsi
  KeyValues *i; // rbx
  __int64 v3; // r12
  CActivityModifierWeight *v4; // r12
  const char *Name; // rax
  __int64 m_Size; // r12
  int v7; // eax
  UtlSymId_t v8; // [rsp-38h] [rbp-38h] BYREF

  if ( !CalculateActivityModifierWeights(void)::s_bHasAttemptedToLoadFile )
  {
    CalculateActivityModifierWeights(void)::s_bHasAttemptedToLoadFile = 1;
    v0 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v0, "ACTIVITY WEIGHTS");
    if ( v0 != 0 )
    {
      v1 = 0;
      if ( g_pFullFileSystem != 0 )
        v1 = &g_pFullFileSystem->IBaseFileSystem;
      if ( KeyValues::LoadFromFile(v0, v1, "scripts/activity_modifier_weights.txt", "MOD", 0) )
      {
        for ( i = KeyValues::GetFirstSubKey(v0); i != 0; i = KeyValues::GetNextKey(i) )
        {
          m_Size = g_ActivityModifierWeights.m_Size;
          v7 = g_ActivityModifierWeights.m_Size;
          if ( g_ActivityModifierWeights.m_Size == g_ActivityModifierWeights.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CActivityModifierWeight,int>::Grow(&g_ActivityModifierWeights.m_Memory, 1);
            v7 = g_ActivityModifierWeights.m_Size;
          }
          v3 = m_Size;
          g_ActivityModifierWeights.m_Size = v7 + 1;
          if ( &g_ActivityModifierWeights.m_Memory.m_pMemory[v3] != 0 )
          {
            g_ActivityModifierWeights.m_Memory.m_pMemory[v3].m_symbol.m_Id = -1;
            v4 = &g_ActivityModifierWeights.m_Memory.m_pMemory[v3];
          }
          else
          {
            v4 = 0;
          }
          Name = KeyValues::GetName(i);
          CUtlSymbolTable::AddString(&v8, &g_ActivityModifiersTable, Name);
          v4->m_symbol.m_Id = v8;
          v4->m_iWeight = KeyValues::GetInt(i, 0, 0);
        }
        KeyValues::deleteThis(v0);
        s_bHasModifierWeights = 1;
      }
      else
      {
        KeyValues::deleteThis(v0);
      }
    }
    else
    {
      Warning("Activity Weights keys not allocated!\n");
    }
  }
}


// FindActivityModifierWeight  (line 691, @0x00000000031610d0, libserver.so)  // inlines: operator==, operator[]
// calls: CUtlSymbolTable::AddString
// callers: CActivityToSequenceMapping::SelectWeightedSequenceFromModifiers
// globals: s_bHasModifierWeights, g_ActivityModifiersTable, g_ActivityModifierWeights
int __fastcall FindActivityModifierWeight(const char *pModifierName)
{
  __int64 v1; // rbp
  CActivityModifierWeight *v3; // rax
  CActivityModifierWeight *m_pMemory; // rsi
  CUtlSymbol symbol; // [rsp+0h] [rbp-18h] BYREF
  __int64 v6; // [rsp+10h] [rbp-8h]

  if ( !s_bHasModifierWeights )
    return 10;
  v6 = v1;
  CUtlSymbolTable::AddString(&symbol.m_Id, &g_ActivityModifiersTable, pModifierName);
  if ( g_ActivityModifierWeights.m_Size <= 0 )
    return 10;
  if ( g_ActivityModifierWeights.m_Memory.m_pMemory->m_symbol.m_Id != symbol.m_Id )
  {
    v3 = g_ActivityModifierWeights.m_Memory.m_pMemory + 1;
    while ( v3 != &g_ActivityModifierWeights.m_Memory.m_pMemory[(g_ActivityModifierWeights.m_Size - 1) + 1] )
    {
      m_pMemory = v3++;
      if ( symbol.m_Id == v3[-1].m_symbol.m_Id )
        return m_pMemory->m_iWeight;
    }
    return 10;
  }
  m_pMemory = g_ActivityModifierWeights.m_Memory.m_pMemory;
  return m_pMemory->m_iWeight;
}


// CActivityToSequenceMapping::SelectWeightedSequenceFromModifiers  (line 706, @0x00000000031623a0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlSymbol, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, GetBucketIndex, GetKeyDataIndex, GrowMemory, HashValueType, IsValidHandle, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: VerifySequenceIndex, CalculateActivityModifierWeights, CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequenceMapping::HashValueType::HashFuncs>::Find, CMemAllocSystemInitialize, CModel::pSeqdesc, CUtlSymbolTable::String, V_stricmp_fast, FindActivityModifierWeight, CUtlMemory<int, int>::Grow, _Unwind_Resume, CUtlMemory<int, int>::Purge, RandomInt
// callers: SelectWeightedSequenceFromModifiers
HSequence __fastcall CActivityToSequenceMapping::SelectWeightedSequenceFromModifiers(
        CActivityToSequenceMapping *const this,
        Activity activity,
        CUtlSymbolTable *pTable,
        const CUtlSymbol *pActivityModifiers,
        int iModifierCount)
{
  UtlHashHandle_t v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rdx
  HSequence v10; // ebx
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v12; // rax
  CActivityToSequenceMapping::HashValueType *m_pMemory; // rax
  const ISequence *v14; // r13
  int v15; // r14d
  const CUtlSymbol *v16; // r15
  int v17; // ebx
  char *v18; // r12
  int v19; // eax
  __int64 m_Size; // rbx
  int v21; // eax
  int *v22; // rax
  int v23; // eax
  __int64 startingIdx; // r8
  CActivityToSequenceMapping::SequenceTuple *v25; // rdx
  int m_nWeight; // esi
  CActivityToSequenceMapping::SequenceTuple *v27; // r9
  __int64 v28; // rcx
  CActivityToSequenceMapping::SequenceTuple *sequenceInfo; // [rsp+10h] [rbp-D0h]
  __int64 v32; // [rsp+28h] [rbp-B8h]
  int top_score; // [rsp+38h] [rbp-A8h]
  int weighttotal; // [rsp+3Ch] [rbp-A4h]
  CActivityToSequenceMapping::HashValueType *v36; // [rsp+40h] [rbp-A0h]
  int iMatched; // [rsp+60h] [rbp-80h]
  int num_modifiers; // [rsp+64h] [rbp-7Ch]
  const char *pActivityname; // [rsp+68h] [rbp-78h]
  CUtlSymbol v41; // [rsp+70h] [rbp-70h] BYREF
  CActivityToSequenceMapping::HashValueType dummy; // [rsp+80h] [rbp-60h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > topScoring; // [rsp+90h] [rbp-50h] BYREF

  VerifySequenceIndex(this->m_pModel);
  if ( this->m_pSequenceTuples == 0 )
    return -1;
  CalculateActivityModifierWeights();
  dummy.activityIdx = activity;
  dummy.startingIdx = 0;
  dummy.count = 0;
  dummy.totalWeight = 0;
  v7 = CUtlHash<CActivityToSequenceMapping::HashValueType,CActivityToSequenceMapping::HashValueType::HashFuncs,CActivityToSequenceMapping::HashValueType::HashFuncs>::Find(
         &this->m_ActToSeqHash,
         &dummy);
  v9 = v7;
  if ( HIWORD(v7) >= this->m_ActToSeqHash.m_Buckets.m_Size )
    return -1;
  v12 = &this->m_ActToSeqHash.m_Buckets.m_Memory.m_pMemory[HIWORD(v7)];
  if ( v9 >= v12->m_Size )
    return -1;
  m_pMemory = v12->m_Memory.m_pMemory;
  topScoring.m_Size = 0;
  v36 = &m_pMemory[v9];
  LODWORD(m_pMemory) = v36->count;
  topScoring.m_Memory.m_pMemory = 0;
  topScoring.m_Memory.m_nAllocationCount = m_pMemory;
  topScoring.m_Memory.m_nGrowSize = m_pMemory & 0x3FFFFFFF;
  if ( m_pMemory != 0 )
  {
    CMemAllocSystemInitialize(v8);
    topScoring.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 4LL * topScoring.m_Memory.m_nAllocationCount);
  }
  if ( v36->count > 0 )
  {
    v32 = 0;
    top_score = -1;
    weighttotal = 0;
    while ( 1 )
    {
      sequenceInfo = &this->m_pSequenceTuples[v32 + v36->startingIdx];
      v14 = CModel::pSeqdesc(this->m_pModel, sequenceInfo->m_hSequence);
      num_modifiers = (*(v14->_vptr_IBaseSequence + 27))(v14) - 1;
      v15 = 2 * (num_modifiers <= 0) - 1;
      if ( iModifierCount <= 0 )
      {
        iMatched = 0;
      }
      else
      {
        v16 = pActivityModifiers;
        iMatched = 0;
        do
        {
          if ( num_modifiers > 0 )
          {
            v17 = 0;
            do
            {
              pActivityname = (*(v14->_vptr_IBaseSequence + 28))(v14, ++v17);
              v41.m_Id = v16->m_Id;
              v18 = CUtlSymbolTable::String(pTable, &v41.m_Id);
              if ( V_stricmp_fast(pActivityname, v18) == 0 )
              {
                if ( v15 == -1 )
                  v15 = 1;
                ++iMatched;
                v15 += FindActivityModifierWeight(v18);
              }
            }
            while ( num_modifiers != v17 );
          }
          ++v16;
        }
        while ( v16 != &pActivityModifiers[iModifierCount - 1 + 1] );
      }
      if ( iMatched != num_modifiers || v15 <= 0 )
        goto LABEL_21;
      if ( v15 > top_score )
        break;
      if ( v15 >= top_score )
      {
        m_Size = topScoring.m_Size;
        v15 = top_score;
        v21 = topScoring.m_Size;
        if ( topScoring.m_Size == topScoring.m_Memory.m_nAllocationCount )
        {
LABEL_31:
          CUtlMemory<int,int>::Grow(&topScoring.m_Memory, 1);
          v21 = topScoring.m_Size;
        }
LABEL_26:
        topScoring.m_Size = v21 + 1;
        v22 = &topScoring.m_Memory.m_pMemory[m_Size];
        if ( v22 != 0 )
          *v22 = v32;
        top_score = v15;
        weighttotal += sequenceInfo->m_nWeight;
      }
LABEL_21:
      v19 = v32++;
      if ( v36->count <= v19 + 1 )
        goto LABEL_33;
    }
    m_Size = 0;
    topScoring.m_Size = 0;
    weighttotal = 0;
    v21 = 0;
    if ( topScoring.m_Memory.m_nAllocationCount == 0 )
      goto LABEL_31;
    goto LABEL_26;
  }
  weighttotal = 0;
LABEL_33:
  v10.m_Data = -1;
  if ( topScoring.m_Size != 0 )
  {
    v23 = RandomInt(0, (weighttotal - 1));
    startingIdx = v36->startingIdx;
    v25 = &this->m_pSequenceTuples[startingIdx + *topScoring.m_Memory.m_pMemory];
    m_nWeight = v25->m_nWeight;
    v27 = &v25[v36->count];
    if ( v23 >= m_nWeight && v25 < v27 && topScoring.m_Size > 0 )
    {
      v28 = 0;
      do
      {
        v23 -= m_nWeight;
        v25 = &this->m_pSequenceTuples[startingIdx + topScoring.m_Memory.m_pMemory[v28 + 1]];
        m_nWeight = v25->m_nWeight;
        if ( m_nWeight > v23 )
          break;
        if ( v27 <= v25 )
          break;
        ++v28;
      }
      while ( topScoring.m_Size > v28 );
    }
    v10.m_Data = v25->m_hSequence.m_Data;
  }
  topScoring.m_Size = 0;
  if ( (topScoring.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&topScoring.m_Memory);
    if ( (topScoring.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&topScoring.m_Memory);
  }
  return v10;
}


// SelectHeaviestSequence  (line 838, @0x00000000031620d0, libserver.so)
// calls: VerifySequenceIndex, CModel::FirstSequence, CModel::NextSequence, GetSequenceActivity
// callers: CBaseAnimating::SelectHeaviestSequence, CBaseAnimatingController::SelectHeaviestSequence, CBaseViewModel::SetWeaponModel, CBaseViewModel::SendViewModelMatchingSequence
HSequence __fastcall SelectHeaviestSequence(const CModel *pModel, Activity activity)
{
  HSequence result; // eax
  HSequence v5; // r15d
  signed int v6; // r14d
  signed int v7; // eax
  int32 hResult; // [rsp+Ch] [rbp-44h]
  int weight[13]; // [rsp+1Ch] [rbp-34h] BYREF

  result.m_Data = 0;
  if ( pModel != 0 )
  {
    VerifySequenceIndex(pModel);
    weight[0] = 0;
    hResult = -1;
    v5.m_Data = CModel::FirstSequence(pModel).m_Data;
    if ( v5.m_Data != -1 )
    {
      v6 = 0;
      do
      {
        if ( GetSequenceActivity(pModel, v5, weight) == activity )
        {
          v7 = abs32(weight[0]);
          if ( v7 > v6 )
          {
            hResult = v5.m_Data;
            v6 = v7;
          }
        }
        v5.m_Data = CModel::NextSequence(pModel, v5).m_Data;
      }
      while ( v5.m_Data != -1 );
    }
    return hResult;
  }
  return result;
}


// GetEyePosition  (line 864, @0x0000000003161150, libserver.so)  // inlines: operator=
// calls: CModel::eyeposition, Warning
// callers: CGenericFlexCycler::Spawn
// strings: "GetEyePosition() Can't get pstudiohdr ptr!\n"
void __fastcall GetEyePosition(const CModel *pstudiohdr, Vector *const vecEyePosition)
{
  if ( pstudiohdr != 0 )
    *vecEyePosition = CModel::eyeposition(pstudiohdr);
  else
    Warning("GetEyePosition() Can't get pstudiohdr ptr!\n", vecEyePosition);
}


// LookupActivity  (line 881, @0x0000000003161530, libserver.so)
// calls: CModel::FirstSequence, CModel::NextSequence, CModel::pSeqdesc, V_stricmp_fast, SetActivityForSequence
// callers: CBaseAnimating::LookupActivity, CBaseAnimatingController::LookupActivity, CParticleSystemQuery::GetActivityNumber, LookupSequence
Activity __fastcall LookupActivity(const CModel *pModel, const char *label)
{
  HSequence v4; // ebx
  const ISequence *v5; // r12
  __int64 v6; // rax

  if ( pModel == 0 )
    return 0;
  v4.m_Data = CModel::FirstSequence(pModel).m_Data;
  if ( v4.m_Data == -1 )
    return -1;
  while ( 1 )
  {
    v5 = CModel::pSeqdesc(pModel, v4);
    v6 = (*(v5->_vptr_IBaseSequence + 28))(v5, 0);
    if ( V_stricmp_fast(v6, label) == 0 )
      break;
    v4.m_Data = CModel::NextSequence(pModel, v4).m_Data;
    if ( v4.m_Data == -1 )
      return -1;
  }
  if ( (*(v5->_vptr_IBaseSequence + 38))(v5, 4096) == 0 )
    SetActivityForSequence(pModel, v4);
  return (*(v5->_vptr_IBaseSequence + 30))(v5, 0);
}


// LookupSequence  (line 915, @0x00000000031630c0, libserver.so)
// calls: CModel::LookupSequence, LookupActivity, SelectWeightedSequence
// callers: CBaseAnimating::LookupSequence, CBaseAnimatingController::LookupSequence, CBaseAnimatingOverlayController::AddGestureSequence, CBaseCombatWeapon::SetIdealActivity
HSequence __fastcall LookupSequence(const CModel *pModel, const char *label)
{
  HSequence result; // eax
  Activity v5; // esi

  result.m_Data = 0;
  if ( pModel != 0 )
  {
    result.m_Data = CModel::LookupSequence(pModel, label).m_Data;
    if ( result.m_Data == -1 )
    {
      v5 = LookupActivity(pModel, label);
      result.m_Data = -1;
      if ( v5 != -1 )
        return SelectWeightedSequence(pModel, v5, -1);
    }
  }
  return result;
}


// GetSequenceLinearMotion  (line 941, @0x00000000031611a0, libserver.so)  // inlines: Init
// calls: CModel::IsValidSequence
// callers: CBaseAnimatingController::GetSequenceMoveYaw, CBaseAnimatingController::GetSequenceMoveDist, CBaseAnimatingController::GetSequenceLinearMotion
void __fastcall GetSequenceLinearMotion(
        const CModel *pModel,
        HSequence hSequence,
        const float *poseParameter,
        Vector *pVec)
{
  QAngle vecAngles; // [rsp+0h] [rbp-38h] BYREF

  pVec->x = 0.0;
  pVec->y = 0.0;
  pVec->z = 0.0;
  if ( pModel != 0 && CModel::IsValidSequence(pModel, hSequence) )
    (*(*g_pAnimationSystem + 160LL))(
      g_pAnimationSystem,
      pModel,
      hSequence.m_Data,
      poseParameter,
      pVec,
      &vecAngles,
      0.0,
      1.0);
}


// GetSequenceLinearMotionAndDuration  (line 954, @0x0000000003161230, libserver.so)  // inlines: Init
// calls: CModel::IsValidSequence
// callers: CBaseAnimatingController::GetBlendedLinearVelocity
float __fastcall GetSequenceLinearMotionAndDuration(
        const CModel *pModel,
        HSequence hSequence,
        const float *poseParameter,
        Vector *pVec)
{
  float result; // xmm0_4
  bool IsValidSequence; // al

  result = 0.0;
  pVec->x = 0.0;
  pVec->y = 0.0;
  pVec->z = 0.0;
  if ( pModel != 0 )
  {
    IsValidSequence = CModel::IsValidSequence(pModel, hSequence);
    result = 0.0;
    if ( IsValidSequence )
      return (*(*g_pAnimationSystem + 176LL))(
               g_pAnimationSystem,
               pModel,
               hSequence.m_Data,
               poseParameter,
               pVec,
               0.0,
               1.0);
  }
  return result;
}


// GetSequenceName  (line 968, @0x00000000031612c0, libserver.so)
// calls: CModel::IsValidSequence, CModel::pSeqdesc
// callers: CBaseAnimatingController::GetSequenceName, CBaseCombatWeapon::SetIdealActivity, CBasePlayerAnimState::DebugShowAnimState, CDOTAAnimState::DebugGestureInfo
// strings: "Unknown"
const char *__fastcall GetSequenceName(const CModel *pModel, HSequence hSequence)
{
  const ISequence *v5; // rax

  if ( pModel == 0 || !CModel::IsValidSequence(pModel, hSequence) )
    return "Unknown";
  v5 = CModel::pSeqdesc(pModel, hSequence);
  return (*(v5->_vptr_IBaseSequence + 11))(v5);
}


// GetSequenceActivityName  (line 978, @0x0000000003161310, libserver.so)
// calls: CModel::IsValidSequence, CModel::pszName, Msg, CModel::pSeqdesc
// callers: CBaseAnimatingController::GetSequenceActivityName, CBasePlayerAnimState::DebugShowAnimState, SetActivityForSequence
// strings: "Bad sequence in GetSequenceActivityName() for model '%s'!\n", "Unknown"
const char *__fastcall GetSequenceActivityName(const CModel *pModel, HSequence hSequence)
{
  const char *v4; // rax
  const ISequence *v6; // rax

  if ( pModel == 0 )
    return "Unknown";
  if ( !CModel::IsValidSequence(pModel, hSequence) )
  {
    v4 = CModel::pszName(pModel);
    Msg("Bad sequence in GetSequenceActivityName() for model '%s'!\n", v4);
    return "Unknown";
  }
  v6 = CModel::pSeqdesc(pModel, hSequence);
  return (*(v6->_vptr_IBaseSequence + 28))(v6, 0);
}


// HasAnimationEventOfType  (line 1000, @0x0000000003161600, libserver.so)
// calls: CModel::IsValidSequence, CModel::pSeqdesc, GetEventIndexForSequence
bool __fastcall HasAnimationEventOfType(const CModel *pModel, HSequence hSequence, int type)
{
  bool IsValidSequence; // r14
  const ISequence *v8; // r13
  const AnimEvent_t *EventIndexForSequence; // rbx
  int v10; // r12d

  if ( pModel != 0 )
  {
    IsValidSequence = CModel::IsValidSequence(pModel, hSequence);
    if ( IsValidSequence )
    {
      v8 = CModel::pSeqdesc(pModel, hSequence);
      EventIndexForSequence = GetEventIndexForSequence(v8);
      if ( EventIndexForSequence != 0 )
      {
        v10 = 0;
        if ( (*(v8->_vptr_IBaseSequence + 22))(v8) != 0 )
        {
          while ( v10 < (*(v8->_vptr_IBaseSequence + 22))(v8) )
          {
            ++EventIndexForSequence;
            if ( EventIndexForSequence[-1].event == type )
              return IsValidSequence;
            ++v10;
          }
        }
      }
    }
  }
  return 0;
}


// GetAnimationEventCount  (line 1026, @0x00000000031616a0, libserver.so)
// calls: CModel::IsValidSequence, CModel::pSeqdesc
// callers: CAnimationLayer::ComputeMaxAnimEvents, CBaseAnimatingController::DispatchAnimEvents, CBaseAnimatingOverlayController::DispatchAnimEvents
int __fastcall GetAnimationEventCount(const CModel *pModel, HSequence hSequence)
{
  const ISequence *v5; // rax

  if ( pModel == 0 || !CModel::IsValidSequence(pModel, hSequence) )
    return 0;
  v5 = CModel::pSeqdesc(pModel, hSequence);
  return (*(v5->_vptr_IBaseSequence + 22))(v5);
}


// GetAnimationEvents  (line 1040, @0x00000000031616f0, libserver.so)  // inlines: GetOptionsString, String
// calls: CModel::IsValidSequence, CModel::pSeqdesc, GetEventIndexForSequence, CUtlString::Get
// callers: CAnimationLayer::DetectAnimEvents, CBaseAnimatingController::DetectAnimEvents
int __fastcall GetAnimationEvents(const AnimEventDetectionQuery_t *const query, int nEventCount, animevent_t *pEvents)
{
  const CModel *m_pModel; // rbx
  const ISequence *v5; // r15
  __int64 v6; // r12
  __m128 v7; // xmm5
  __m128 v8; // xmm1
  CUtlString *p_m_optionsString; // r14
  int v10; // ebx
  float m_flEndCycle; // xmm1_4
  float m_flStartCycle; // xmm0_4
  float v13; // xmm3_4
  animevent_t *v14; // r12
  int m_nOrder; // eax
  char bIsSequenceLooping; // [rsp+Bh] [rbp-45h]
  float flStartAnimTime; // [rsp+Ch] [rbp-44h]
  int nFoundEventCount; // [rsp+18h] [rbp-38h]

  if ( query->m_flStartCycle == query->m_flEndCycle )
    return 0;
  m_pModel = query->m_pModel;
  if ( m_pModel == 0 )
    return 0;
  if ( !CModel::IsValidSequence(query->m_pModel, query->m_hSequence) )
    return 0;
  v5 = CModel::pSeqdesc(m_pModel, query->m_hSequence);
  if ( (*(v5->_vptr_IBaseSequence + 22))(v5) == 0 )
    return 0;
  v6 = 0;
  v7.m128_i32[0] = LODWORD(query->m_flEndAnimTime);
  v8 = _mm_cmpgt_ss(LODWORD(query->m_flStartAnimTime), v7);
  LODWORD(flStartAnimTime) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v8, LODWORD(query->m_flStartAnimTime)).m128_f32[0])
                           | v7.m128_i32[0] & v8.m128_i32[0];
  p_m_optionsString = &GetEventIndexForSequence(v5)->m_optionsString;
  v10 = 0;
  bIsSequenceLooping = (*(v5->_vptr_IBaseSequence + 13))(v5);
  if ( (*(v5->_vptr_IBaseSequence + 22))(v5) <= 0 )
    return v6;
  while ( query->m_bIsServerDLL )
  {
    if ( (BYTE4(p_m_optionsString[-1].m_pString) & 1) != 0 )
      goto LABEL_8;
LABEL_14:
    ++v10;
    p_m_optionsString += 4;
    if ( v10 >= (*(v5->_vptr_IBaseSequence + 22))(v5) )
      return v6;
  }
  if ( (BYTE4(p_m_optionsString[-1].m_pString) & 0x10) == 0 )
    goto LABEL_14;
LABEL_8:
  m_flEndCycle = query->m_flEndCycle;
  m_flStartCycle = query->m_flStartCycle;
  v13 = *(&p_m_optionsString[-2].m_pString + 1);
  if ( m_flEndCycle <= m_flStartCycle )
  {
    if ( m_flStartCycle <= m_flEndCycle )
      goto LABEL_14;
    if ( v13 >= m_flStartCycle )
    {
      m_flEndCycle = m_flEndCycle + 1.0;
    }
    else
    {
      if ( m_flEndCycle <= v13 )
        goto LABEL_14;
      v13 = v13 + 1.0;
      m_flEndCycle = m_flEndCycle + 1.0;
    }
  }
  else if ( (v13 != 1.0 || bIsSequenceLooping != 0 || m_flEndCycle != 1.0)
         && (v13 < m_flStartCycle || m_flEndCycle <= v13) )
  {
    goto LABEL_14;
  }
  nFoundEventCount = v6 + 1;
  v14 = &pEvents[v6];
  v14->eventtime = ((query->m_flEndAnimTime - flStartAnimTime)
                  * ((v13 - m_flStartCycle) / (m_flEndCycle - m_flStartCycle)))
                 + flStartAnimTime;
  v14->pSource = query->m_pSkeletonInstance;
  v14->cycle = *(&p_m_optionsString[-2].m_pString + 1);
  v14->event = p_m_optionsString[-1].m_pString;
  v14->options = CUtlString::Get(p_m_optionsString);
  v14->type = HIDWORD(p_m_optionsString[-1].m_pString);
  m_nOrder = query->m_nOrder;
  v14->m_bHandledByScript = 0;
  v14->m_nOrder = m_nOrder;
  if ( nFoundEventCount < nEventCount )
  {
    v6 = nFoundEventCount;
    goto LABEL_14;
  }
  return nFoundEventCount;
}


// GetAnimationGraph  (line 1172, @0x0000000003161980, libserver.so)
// calls: CModel::GetAnimationGraph
IAnimationGraph *__fastcall GetAnimationGraph(const CModel *pModel)
{
  if ( pModel != 0 )
    return CModel::GetAnimationGraph(pModel);
  else
    return 0;
}


// FindTransitionSequence  (line 1180, @0x00000000031619a0, libserver.so)
// calls: CModel::IsValidSequence, CModel::EntryNode, CModel::ExitNode, CModel::GetNodeTransition, CModel::FirstSequence, CModel::NextSequence, CModel::pSeqdesc, CModel::pszNodeName, DevMsg
// callers: CBaseAnimatingController::FindTransitionSequence, CBaseCombatWeapon::SetIdealActivity
// strings: "error in transition graph: %s to %s\n"
HSequence __fastcall FindTransitionSequence(
        const CModel *pModel,
        HSequence hCurrentSequence,
        HSequence hGoalSequence,
        int *piDir)
{
  int v9; // r15d
  HSequence v10; // r13d
  int v11; // eax
  const ISequence *v12; // rdx
  int v13; // eax
  const char *v14; // r13
  const char *v15; // rax
  int iInternNode; // [rsp+0h] [rbp-40h]
  int nGoalSequenceEntryNode; // [rsp+4h] [rbp-3Ch]
  const ISequence *pSeqDesc; // [rsp+8h] [rbp-38h]

  if ( pModel == 0
    || !CModel::IsValidSequence(pModel, hCurrentSequence)
    || !CModel::IsValidSequence(pModel, hGoalSequence) )
  {
    return hGoalSequence;
  }
  v9 = CModel::EntryNode(pModel, hCurrentSequence);
  nGoalSequenceEntryNode = CModel::EntryNode(pModel, hGoalSequence);
  if ( nGoalSequenceEntryNode == 0 || v9 == 0 )
    goto LABEL_19;
  if ( *piDir > 0 )
    v9 = CModel::ExitNode(pModel, hCurrentSequence);
  if ( v9 != nGoalSequenceEntryNode )
  {
    iInternNode = CModel::GetNodeTransition(pModel, v9, nGoalSequenceEntryNode);
    if ( iInternNode == 0 )
      return hGoalSequence;
    v10.m_Data = CModel::FirstSequence(pModel).m_Data;
    if ( v10.m_Data == -1 )
    {
LABEL_22:
      v14 = CModel::pszNodeName(pModel, nGoalSequenceEntryNode);
      v15 = CModel::pszNodeName(pModel, v9);
      DevMsg(2, "error in transition graph: %s to %s\n", v15, v14);
      return hGoalSequence;
    }
    while ( 1 )
    {
      pSeqDesc = CModel::pSeqdesc(pModel, v10);
      v11 = CModel::EntryNode(pModel, v10);
      v12 = pSeqDesc;
      if ( v9 == v11 )
      {
        v13 = CModel::ExitNode(pModel, v10);
        v12 = pSeqDesc;
        if ( iInternNode == v13 )
        {
          *piDir = 1;
          return v10;
        }
      }
      if ( (*(v12->_vptr_IBaseSequence + 44))(v12) != 0
        && v9 == CModel::ExitNode(pModel, v10)
        && iInternNode == CModel::EntryNode(pModel, v10) )
      {
        break;
      }
      v10.m_Data = CModel::NextSequence(pModel, v10).m_Data;
      if ( v10.m_Data == -1 )
        goto LABEL_22;
    }
    *piDir = -1;
    return v10;
  }
  else
  {
LABEL_19:
    *piDir = 1;
    return hGoalSequence;
  }
}


// GotoSequence  (line 1262, @0x0000000003161b60, libserver.so)
// calls: CModel::IsValidSequence, CModel::EntryNode, CModel::ExitNode, CModel::GetNodeTransition, CModel::FirstSequence, CModel::NextSequence, CModel::pSeqdesc
// callers: CBaseAnimating::GotoSequence, CBaseAnimatingController::GotoSequence
__int64 __fastcall GotoSequence(
        const CModel *pModel,
        HSequence hCurrentSequence,
        float flCurrentCycle,
        float flCurrentRate,
        HSequence hGoalSequence,
        HSequence *const hNextSequence,
        float *const flNextCycle,
        int *const iNextDir)
{
  unsigned int v13; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int NodeTransition; // eax
  HSequence v24; // eax
  unsigned int v25; // ecx
  HSequence v26; // r12d
  int v27; // eax
  int v28; // eax
  HSequence v29; // eax
  const ISequence *v30; // r13
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // [rsp+4h] [rbp-4Ch]
  int v36; // [rsp+8h] [rbp-48h]
  int iEndNode; // [rsp+Ch] [rbp-44h]
  int iEndNodea; // [rsp+Ch] [rbp-44h]
  int iInternNodea; // [rsp+10h] [rbp-40h]
  unsigned int flCurrentRateb; // [rsp+14h] [rbp-3Ch]
  unsigned int flCurrentRatec; // [rsp+14h] [rbp-3Ch]
  unsigned int flCurrentRatee; // [rsp+14h] [rbp-3Ch]
  unsigned int flCurrentRated; // [rsp+14h] [rbp-3Ch]

  if ( pModel == 0 )
    return 0;
  if ( !CModel::IsValidSequence(pModel, hCurrentSequence) )
    return 0;
  LOBYTE(v15) = CModel::IsValidSequence(pModel, hGoalSequence);
  if ( v15 == 0 )
    return 0;
  iEndNode = v15;
  v16 = CModel::EntryNode(pModel, hCurrentSequence);
  v13 = iEndNode;
  if ( v16 != 0 )
  {
    v17 = CModel::EntryNode(pModel, hGoalSequence);
    v13 = iEndNode;
    if ( v17 != 0 )
    {
      v35 = iEndNode;
      iEndNodea = CModel::ExitNode(pModel, hCurrentSequence);
      v36 = CModel::EntryNode(pModel, hCurrentSequence);
      v18 = CModel::ExitNode(pModel, hCurrentSequence);
      v19 = v35;
      if ( v36 != v18 )
      {
        if ( flCurrentRate > 0.0 && flCurrentCycle >= 0.999 )
        {
          v33 = CModel::ExitNode(pModel, hCurrentSequence);
          v19 = v35;
          iEndNodea = v33;
        }
        else
        {
          if ( flCurrentRate >= 0.0 || flCurrentCycle > 0.001 )
            return 0;
          v20 = CModel::EntryNode(pModel, hCurrentSequence);
          v19 = v35;
          iEndNodea = v20;
        }
      }
      flCurrentRateb = v19;
      v21 = CModel::EntryNode(pModel, hGoalSequence);
      v13 = flCurrentRateb;
      if ( iEndNodea != v21 )
      {
        v22 = CModel::EntryNode(pModel, hGoalSequence);
        NodeTransition = CModel::GetNodeTransition(pModel, iEndNodea, v22);
        v13 = flCurrentRateb;
        iInternNodea = NodeTransition;
        if ( NodeTransition != 0 )
        {
          v24.m_Data = CModel::FirstSequence(pModel).m_Data;
          v25 = flCurrentRateb;
          v26.m_Data = v24.m_Data;
          if ( v24.m_Data == -1 )
            return 0;
          while ( 1 )
          {
            flCurrentRated = v25;
            v30 = CModel::pSeqdesc(pModel, v26);
            v31 = CModel::EntryNode(pModel, v26);
            v13 = flCurrentRated;
            if ( iEndNodea == v31 )
            {
              v32 = CModel::ExitNode(pModel, v26);
              v13 = flCurrentRated;
              if ( iInternNodea == v32 )
              {
                *iNextDir = 1;
                *flNextCycle = 0.0;
                hNextSequence->m_Data = v26.m_Data;
                return v13;
              }
            }
            flCurrentRatec = v13;
            v27 = (*(v30->_vptr_IBaseSequence + 44))(v30);
            v13 = flCurrentRatec;
            if ( v27 != 0 )
            {
              v28 = CModel::ExitNode(pModel, v26);
              v13 = flCurrentRatec;
              if ( iEndNodea == v28 )
              {
                v34 = CModel::EntryNode(pModel, v26);
                v13 = flCurrentRatec;
                if ( iInternNodea == v34 )
                  break;
              }
            }
            flCurrentRatee = v13;
            v29.m_Data = CModel::NextSequence(pModel, v26).m_Data;
            v25 = flCurrentRatee;
            v26.m_Data = v29.m_Data;
            if ( v29.m_Data == -1 )
              return 0;
          }
          *iNextDir = -1;
          *flNextCycle = 0.99900001;
          hNextSequence->m_Data = v26.m_Data;
          return v13;
        }
      }
    }
  }
  *iNextDir = 1;
  *flNextCycle = 0.0;
  hNextSequence->m_Data = hGoalSequence.m_Data;
  return v13;
}


// SetBodygroup  (line 1360, @0x0000000003161df0, libserver.so)
// calls: CModel::GetNumBodyParts, CModel::GetNumBodyPartMeshes, CModel::GetBodyPartMask, CModel::GetBodyPartMeshMask
// callers: CBaseAnimating::SetBodygroup
void __fastcall SetBodygroup(const CModel *pModel, MeshGroupMask_t *const mask, int iGroup, int iValue)
{
  MeshGroupMask_t BodyPartMask; // r15

  if ( pModel != 0 && CModel::GetNumBodyParts(pModel) > iGroup && CModel::GetNumBodyPartMeshes(pModel, iGroup) > iValue )
  {
    BodyPartMask = CModel::GetBodyPartMask(pModel, iGroup);
    *mask = CModel::GetBodyPartMeshMask(pModel, iGroup, iValue) | *mask & ~BodyPartMask;
  }
}


// GetBodygroup  (line 1382, @0x0000000003161e80, libserver.so)
// calls: CModel::GetNumBodyParts, CModel::FindMeshIndexForMask
// callers: CBaseAnimating::GetBodygroup
int __fastcall GetBodygroup(const CModel *pModel, MeshGroupMask_t mask, int iGroup)
{
  if ( pModel != 0 && CModel::GetNumBodyParts(pModel) > iGroup )
    return CModel::FindMeshIndexForMask(pModel, iGroup, mask);
  else
    return 0;
}


// GetBodygroupName  (line 1393, @0x0000000003161ed0, libserver.so)
// calls: CModel::GetNumBodyParts, CModel::GetBodyPartName
// callers: CBaseAnimating::GetBodygroupName
const char *__fastcall GetBodygroupName(const CModel *pModel, int iGroup)
{
  if ( pModel != 0 && CModel::GetNumBodyParts(pModel) > iGroup )
    return CModel::GetBodyPartName(pModel, iGroup);
  else
    return "";
}


// GetBodygroupPartName  (line 1404, @0x0000000003161f10, libserver.so)
// calls: CModel::GetNumBodyParts, CModel::GetNumBodyPartMeshes, CModel::GetBodyPartMeshName
// callers: CBaseAnimating::GetBodygroupPartName
void __fastcall GetBodygroupPartName(
        const CModel *pModel,
        int iGroup,
        int iPart,
        char *pResourceName,
        int nSizeResourceName)
{
  *pResourceName = 0;
  if ( pModel != 0
    && CModel::GetNumBodyParts(pModel) > iGroup
    && (CModel::GetNumBodyPartMeshes(pModel, iGroup) > iPart || iPart >= 0) )
  {
    CModel::GetBodyPartMeshName(pModel, iGroup, iPart, pResourceName, nSizeResourceName);
  }
}


// FindBodygroupByName  (line 1423, @0x0000000003161fa0, libserver.so)
// calls: CModel::GetBodyPartForName
// callers: CBaseAnimating::SetBodygroupByName, CBaseAnimating::FindBodygroupByName, CBaseAnimating::RandomizeBodygroups
int __fastcall FindBodygroupByName(const CModel *pModel, const char *name)
{
  if ( pModel != 0 )
    return CModel::GetBodyPartForName(pModel, name);
  else
    return -1;
}


// GetBodygroupCount  (line 1431, @0x0000000003161fc0, libserver.so)
// calls: CModel::GetNumBodyParts, CModel::GetNumBodyPartMeshes
// callers: CBaseAnimating::GetBodygroupCount, CBaseAnimating::CountBodyGroupVariants, CBaseAnimating::RandomizeBodygroups, CBaseAnimating::FindDamagedBodyGroupVariant
int __fastcall GetBodygroupCount(const CModel *pModel, int iGroup)
{
  if ( pModel != 0 && CModel::GetNumBodyParts(pModel) > iGroup )
    return CModel::GetNumBodyPartMeshes(pModel, iGroup);
  else
    return 0;
}


// GetNumBodyGroups  (line 1442, @0x0000000003162000, libserver.so)
// calls: CModel::GetNumBodyParts
// callers: CBaseAnimating::GetNumBodyGroups, CBaseAnimating::FindDamagedBodyGroupVariant
int __fastcall GetNumBodyGroups(const CModel *pModel)
{
  if ( pModel != 0 )
    return CModel::GetNumBodyParts(pModel);
  else
    return 0;
}


// GetSequenceActivity  (line 1450, @0x0000000003162020, libserver.so)
// calls: CModel::IsValidSequence, CModel::pSeqdesc, SetActivityForSequence
// callers: CBaseAnimatingController::GetSequenceActivity, SelectHeaviestSequence, SelectWeightedSequence, SelectWeightedSequenceFromModifiers
Activity __fastcall GetSequenceActivity(const CModel *pModel, HSequence hSequence, int *pweight)
{
  const ISequence *v6; // r14

  if ( pModel != 0 && CModel::IsValidSequence(pModel, hSequence) )
  {
    v6 = CModel::pSeqdesc(pModel, hSequence);
    if ( (*(v6->_vptr_IBaseSequence + 38))(v6, 4096) == 0 )
      SetActivityForSequence(pModel, hSequence);
    if ( pweight != 0 )
      *pweight = (*(v6->_vptr_IBaseSequence + 29))(v6, 0);
    return (*(v6->_vptr_IBaseSequence + 30))(v6, 0);
  }
  else
  {
    if ( pweight != 0 )
      *pweight = 0;
    return 0;
  }
}


// FindHitboxSetByName  (line 1479, @0x0000000003162180, libserver.so)
// calls: CModel::FindHitboxSetIndexByName
// callers: CBaseAnimating::HasSelectionBoxes, CSkeletonInstance::SetHitboxSetByName, CBaseServerVehicle::GetEntryAnimForPoint
int __fastcall FindHitboxSetByName(const CModel *pModel, const char *pName)
{
  if ( pModel != 0 )
    return CModel::FindHitboxSetIndexByName(pModel, pName, 0);
  else
    return -1;
}


// GetHitboxSetName  (line 1493, @0x00000000031621a0, libserver.so)
// calls: CModel::GetHitboxSetByIndex, CUtlString::Get
// callers: CSkeletonInstance::GetHitboxSetName
const char *__fastcall GetHitboxSetName(const CModel *pModel, int nSetNumber)
{
  const CHitBoxSet *HitboxSetByIndex; // rax

  if ( pModel == 0 )
    return "";
  HitboxSetByIndex = CModel::GetHitboxSetByIndex(pModel, nSetNumber, 0);
  if ( HitboxSetByIndex != 0 )
    return CUtlString::Get(&HitboxSetByIndex->m_name);
  else
    return "";
}


// GetHitboxSetCount  (line 1510, @0x00000000031621e0, libserver.so)
// calls: CModel::GetHitboxSetCount
// callers: CSkeletonInstance::GetHitboxSetCount
int __fastcall GetHitboxSetCount(const CModel *pModel)
{
  if ( pModel != 0 )
    return CModel::GetHitboxSetCount(pModel, 0);
  else
    return 0;
}


