
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CKV3TransferSaveContext::CreateTargetMember  (line 189, @0x00000000031782e0, libserver.so)
// calls: KeyValues3::FindMember, CKV3TransferContextBase::NoteFailure, KeyValues3::SetMemberToNull
// callers: CAttachment::KV3TransferSave_CAttachment, CHitBox::KV3TransferSave_CHitBox, RenderSkeletonBone_t::KV3TransferSave_RenderSkeletonBone_t, CMaterialDrawDescriptor::KV3TransferSave_CMaterialDrawDescriptor, CRenderSkeleton::KV3TransferSave_CRenderSkeleton, CSceneObjectData::KV3TransferSave_CSceneObjectData
// strings: "Double-save to Member '%s'"
KeyValues3 *__fastcall CKV3TransferSaveContext::CreateTargetMember(
        CKV3TransferSaveContext *const this,
        const char *pMemberName,
        KeyValues3LowercaseHash_t memberNameHash)
{
  KeyValues3 *Member; // r13

  Member = KeyValues3::FindMember(this->m_pTargetObject, pMemberName, memberNameHash);
  if ( Member == 0 )
    return KeyValues3::SetMemberToNull(this->m_pTargetObject, pMemberName, memberNameHash);
  CKV3TransferContextBase::NoteFailure(this, "Double-save to Member '%s'", pMemberName);
  return Member;
}


// CKV3TransferSaveContext::SaveClassPointer<const CRenderBufferBinding>  (line 222, @0x0000000003159280, libserver.so)
// calls: CKV3TransferSaveContext::PrepareTargetForClass, CKV3TransferSaveContext::PushTarget, CRenderBufferBinding::KV3TransferSave, CKV3TransferSaveContext::PopTarget, KeyValues3::SetToNull, __stack_chk_fail
// callers: CMaterialDrawDescriptor::TransferPostSaveFn
void __fastcall CKV3TransferSaveContext::SaveClassPointer<CRenderBufferBinding const>(
        CKV3TransferSaveContext *const this,
        const CRenderBufferBinding *const *const pClassInstance,
        KeyValues3 *pSaveToValue)
{
  char pPolymorphicClassName[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v7; // [rsp+108h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  if ( *pClassInstance != 0 )
  {
    if ( CKV3TransferSaveContext::PrepareTargetForClass(
           this,
           pSaveToValue,
           KV3TransferClassBehavior_t::KV3TRANSFER_CLASS_AS_SIMPLE_TABLE,
           pPolymorphicClassName) )
    {
      CKV3TransferSaveContext::PushTarget(this, pSaveToValue);
      CRenderBufferBinding::KV3TransferSave(*pClassInstance, this);
      CKV3TransferSaveContext::PopTarget(this);
    }
  }
  else
  {
    KeyValues3::SetToNull(pSaveToValue);
  }
}


// CKV3TransferSaveContext::SaveClassPointer<const CAttachment>  (line 222, @0x0000000003159510, libserver.so)
// calls: CKV3TransferSaveContext::PrepareTargetForClass, CKV3TransferSaveContext::PushTarget, CAttachment::KV3TransferSave, CKV3TransferSaveContext::PopTarget, KeyValues3::SetToNull, __stack_chk_fail
// callers: SaveUtlDict<CAttachment>
void __fastcall CKV3TransferSaveContext::SaveClassPointer<CAttachment const>(
        CKV3TransferSaveContext *const this,
        const CAttachment *const *const pClassInstance,
        KeyValues3 *pSaveToValue)
{
  char pPolymorphicClassName[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v7; // [rsp+108h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  if ( *pClassInstance != 0 )
  {
    if ( CKV3TransferSaveContext::PrepareTargetForClass(
           this,
           pSaveToValue,
           KV3TransferClassBehavior_t::KV3TRANSFER_CLASS_AS_SIMPLE_TABLE,
           pPolymorphicClassName) )
    {
      CKV3TransferSaveContext::PushTarget(this, pSaveToValue);
      CAttachment::KV3TransferSave(*pClassInstance, this);
      CKV3TransferSaveContext::PopTarget(this);
    }
  }
  else
  {
    KeyValues3::SetToNull(pSaveToValue);
  }
}


// CKV3TransferSaveContext::SaveClassPointer<const CHitBoxSet>  (line 222, @0x00000000031595b0, libserver.so)
// calls: CKV3TransferSaveContext::PrepareTargetForClass, CKV3TransferSaveContext::PushTarget, CHitBoxSet::KV3TransferSave, CKV3TransferSaveContext::PopTarget, KeyValues3::SetToNull, __stack_chk_fail
// callers: SaveUtlDict<CHitBoxSet>, CHitBoxSetList::KV3TransferSave_CHitBoxSetList
void __fastcall CKV3TransferSaveContext::SaveClassPointer<CHitBoxSet const>(
        CKV3TransferSaveContext *const this,
        const CHitBoxSet *const *const pClassInstance,
        KeyValues3 *pSaveToValue)
{
  char pPolymorphicClassName[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v7; // [rsp+108h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  if ( *pClassInstance != 0 )
  {
    if ( CKV3TransferSaveContext::PrepareTargetForClass(
           this,
           pSaveToValue,
           KV3TransferClassBehavior_t::KV3TRANSFER_CLASS_AS_SIMPLE_TABLE,
           pPolymorphicClassName) )
    {
      CKV3TransferSaveContext::PushTarget(this, pSaveToValue);
      CHitBoxSet::KV3TransferSave(*pClassInstance, this);
      CKV3TransferSaveContext::PopTarget(this);
    }
  }
  else
  {
    KeyValues3::SetToNull(pSaveToValue);
  }
}


// CKV3TransferSaveContext::SaveClassPointer<const SkeletonBoneBounds_t>  (line 222, @0x0000000003179a10, libserver.so)  // inlines: KV3TransferSave
// calls: CKV3TransferSaveContext::PrepareTargetForClass, CKV3TransferSaveContext::PushTarget, SkeletonBoneBounds_t::KV3TransferSave_SkeletonBoneBounds_t, CKV3TransferSaveContext::PopTarget, KeyValues3::SetToNull, __stack_chk_fail
// callers: RenderSkeletonBone_t::KV3TransferSave_RenderSkeletonBone_t
void __fastcall CKV3TransferSaveContext::SaveClassPointer<SkeletonBoneBounds_t const>(
        CKV3TransferSaveContext *const this,
        const SkeletonBoneBounds_t *const *const pClassInstance,
        KeyValues3 *pSaveToValue)
{
  char pPolymorphicClassName[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v7; // [rsp+108h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  if ( *pClassInstance != 0 )
  {
    if ( CKV3TransferSaveContext::PrepareTargetForClass(
           this,
           pSaveToValue,
           KV3TransferClassBehavior_t::KV3TRANSFER_CLASS_AS_SIMPLE_TABLE,
           pPolymorphicClassName) )
    {
      CKV3TransferSaveContext::PushTarget(this, pSaveToValue);
      SkeletonBoneBounds_t::KV3TransferSave_SkeletonBoneBounds_t(*pClassInstance, this);
      CKV3TransferSaveContext::PopTarget(this);
    }
  }
  else
  {
    KeyValues3::SetToNull(pSaveToValue);
  }
}


// CKV3TransferSaveContext::SaveClassPointer<const RenderSkeletonBone_t>  (line 222, @0x0000000003179ba0, libserver.so)  // inlines: KV3TransferSave
// calls: CKV3TransferSaveContext::PrepareTargetForClass, CKV3TransferSaveContext::PushTarget, RenderSkeletonBone_t::KV3TransferSave_RenderSkeletonBone_t, CKV3TransferSaveContext::PopTarget, KeyValues3::SetToNull, __stack_chk_fail
// callers: CRenderSkeleton::KV3TransferSave_CRenderSkeleton
void __fastcall CKV3TransferSaveContext::SaveClassPointer<RenderSkeletonBone_t const>(
        CKV3TransferSaveContext *const this,
        const RenderSkeletonBone_t *const *const pClassInstance,
        KeyValues3 *pSaveToValue)
{
  char pPolymorphicClassName[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v7; // [rsp+108h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  if ( *pClassInstance != 0 )
  {
    if ( CKV3TransferSaveContext::PrepareTargetForClass(
           this,
           pSaveToValue,
           KV3TransferClassBehavior_t::KV3TRANSFER_CLASS_AS_SIMPLE_TABLE,
           pPolymorphicClassName) )
    {
      CKV3TransferSaveContext::PushTarget(this, pSaveToValue);
      RenderSkeletonBone_t::KV3TransferSave_RenderSkeletonBone_t(*pClassInstance, this);
      CKV3TransferSaveContext::PopTarget(this);
    }
  }
  else
  {
    KeyValues3::SetToNull(pSaveToValue);
  }
}


// CKV3TransferSaveContext::SaveClassPointer<const CRenderSkeleton>  (line 222, @0x0000000003179c40, libserver.so)  // inlines: KV3TransferSave
// calls: CKV3TransferSaveContext::PrepareTargetForClass, CKV3TransferSaveContext::PushTarget, CRenderSkeleton::KV3TransferSave_CRenderSkeleton, CKV3TransferSaveContext::PopTarget, KeyValues3::SetToNull, __stack_chk_fail
// callers: CRenderMesh::KV3TransferSave_CRenderMesh
void __fastcall CKV3TransferSaveContext::SaveClassPointer<CRenderSkeleton const>(
        CKV3TransferSaveContext *const this,
        const CRenderSkeleton *const *const pClassInstance,
        KeyValues3 *pSaveToValue)
{
  char pPolymorphicClassName[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v7; // [rsp+108h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  if ( *pClassInstance != 0 )
  {
    if ( CKV3TransferSaveContext::PrepareTargetForClass(
           this,
           pSaveToValue,
           KV3TransferClassBehavior_t::KV3TRANSFER_CLASS_AS_SIMPLE_TABLE,
           pPolymorphicClassName) )
    {
      CKV3TransferSaveContext::PushTarget(this, pSaveToValue);
      CRenderSkeleton::KV3TransferSave_CRenderSkeleton(*pClassInstance, this);
      CKV3TransferSaveContext::PopTarget(this);
    }
  }
  else
  {
    KeyValues3::SetToNull(pSaveToValue);
  }
}


// CKV3TransferSaveContext::SaveClassPointer<const CMaterialDrawDescriptor>  (line 222, @0x0000000003179ce0, libserver.so)  // inlines: KV3TransferSave
// calls: CKV3TransferSaveContext::PrepareTargetForClass, CKV3TransferSaveContext::PushTarget, CMaterialDrawDescriptor::KV3TransferSave_CMaterialDrawDescriptor, CKV3TransferSaveContext::PopTarget, KeyValues3::SetToNull, __stack_chk_fail
// callers: CSceneObjectData::KV3TransferSave_CSceneObjectData
void __fastcall CKV3TransferSaveContext::SaveClassPointer<CMaterialDrawDescriptor const>(
        CKV3TransferSaveContext *const this,
        const CMaterialDrawDescriptor *const *const pClassInstance,
        KeyValues3 *pSaveToValue)
{
  char pPolymorphicClassName[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v7; // [rsp+108h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  if ( *pClassInstance != 0 )
  {
    if ( CKV3TransferSaveContext::PrepareTargetForClass(
           this,
           pSaveToValue,
           KV3TransferClassBehavior_t::KV3TRANSFER_CLASS_AS_SIMPLE_TABLE,
           pPolymorphicClassName) )
    {
      CKV3TransferSaveContext::PushTarget(this, pSaveToValue);
      CMaterialDrawDescriptor::KV3TransferSave_CMaterialDrawDescriptor(*pClassInstance, this);
      CKV3TransferSaveContext::PopTarget(this);
    }
  }
  else
  {
    KeyValues3::SetToNull(pSaveToValue);
  }
}


// CKV3TransferSaveContext::SaveClassPointer<const CHitBox>  (line 222, @0x0000000003179d80, libserver.so)  // inlines: KV3TransferSave
// calls: CKV3TransferSaveContext::PrepareTargetForClass, CKV3TransferSaveContext::PushTarget, CHitBox::KV3TransferSave_CHitBox, CKV3TransferSaveContext::PopTarget, KeyValues3::SetToNull, __stack_chk_fail
// callers: CHitBoxSet::KV3TransferSave_CHitBoxSet
void __fastcall CKV3TransferSaveContext::SaveClassPointer<CHitBox const>(
        CKV3TransferSaveContext *const this,
        const CHitBox *const *const pClassInstance,
        KeyValues3 *pSaveToValue)
{
  char pPolymorphicClassName[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v7; // [rsp+108h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  if ( *pClassInstance != 0 )
  {
    if ( CKV3TransferSaveContext::PrepareTargetForClass(
           this,
           pSaveToValue,
           KV3TransferClassBehavior_t::KV3TRANSFER_CLASS_AS_SIMPLE_TABLE,
           pPolymorphicClassName) )
    {
      CKV3TransferSaveContext::PushTarget(this, pSaveToValue);
      CHitBox::KV3TransferSave_CHitBox(*pClassInstance, this);
      CKV3TransferSaveContext::PopTarget(this);
    }
  }
  else
  {
    KeyValues3::SetToNull(pSaveToValue);
  }
}


// CKV3TransferSaveContext::SaveClassPointer<const CSceneObjectData>  (line 222, @0x000000000317a2b0, libserver.so)  // inlines: KV3TransferSave
// calls: CKV3TransferSaveContext::PrepareTargetForClass, CKV3TransferSaveContext::PushTarget, CSceneObjectData::KV3TransferSave_CSceneObjectData, CKV3TransferSaveContext::PopTarget, KeyValues3::SetToNull, __stack_chk_fail
// callers: CRenderMesh::KV3TransferSave_CRenderMesh
void __fastcall CKV3TransferSaveContext::SaveClassPointer<CSceneObjectData const>(
        CKV3TransferSaveContext *const this,
        const CSceneObjectData *const *const pClassInstance,
        KeyValues3 *pSaveToValue)
{
  char pPolymorphicClassName[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v7; // [rsp+108h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  if ( *pClassInstance != 0 )
  {
    if ( CKV3TransferSaveContext::PrepareTargetForClass(
           this,
           pSaveToValue,
           KV3TransferClassBehavior_t::KV3TRANSFER_CLASS_AS_SIMPLE_TABLE,
           pPolymorphicClassName) )
    {
      CKV3TransferSaveContext::PushTarget(this, pSaveToValue);
      CSceneObjectData::KV3TransferSave_CSceneObjectData(*pClassInstance, this);
      CKV3TransferSaveContext::PopTarget(this);
    }
  }
  else
  {
    KeyValues3::SetToNull(pSaveToValue);
  }
}


// CKV3TransferSaveContext::SaveClassPointer<const CConstraintSlave>  (line 222, @0x0000000003182490, libserver.so)  // inlines: KV3TransferSave
// calls: CKV3TransferSaveContext::PrepareTargetForClass, CKV3TransferSaveContext::PushTarget, CConstraintSlave::KV3TransferSave_CConstraintSlave, CKV3TransferSaveContext::PopTarget, KeyValues3::SetToNull, __stack_chk_fail
// callers: CBaseConstraint::KV3TransferSave_CBaseConstraint
void __fastcall CKV3TransferSaveContext::SaveClassPointer<CConstraintSlave const>(
        CKV3TransferSaveContext *const this,
        const CConstraintSlave *const *const pClassInstance,
        KeyValues3 *pSaveToValue)
{
  char pPolymorphicClassName[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v7; // [rsp+108h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  if ( *pClassInstance != 0 )
  {
    if ( CKV3TransferSaveContext::PrepareTargetForClass(
           this,
           pSaveToValue,
           KV3TransferClassBehavior_t::KV3TRANSFER_CLASS_AS_SIMPLE_TABLE,
           pPolymorphicClassName) )
    {
      CKV3TransferSaveContext::PushTarget(this, pSaveToValue);
      CConstraintSlave::KV3TransferSave_CConstraintSlave(*pClassInstance, this);
      CKV3TransferSaveContext::PopTarget(this);
    }
  }
  else
  {
    KeyValues3::SetToNull(pSaveToValue);
  }
}


// CKV3TransferSaveContext::SaveClassPointer<const CConstraintTarget>  (line 222, @0x0000000003182530, libserver.so)  // inlines: KV3TransferSave
// calls: CKV3TransferSaveContext::PrepareTargetForClass, CKV3TransferSaveContext::PushTarget, CConstraintTarget::KV3TransferSave_CConstraintTarget, CKV3TransferSaveContext::PopTarget, KeyValues3::SetToNull, __stack_chk_fail
// callers: CBaseConstraint::KV3TransferSave_CBaseConstraint
void __fastcall CKV3TransferSaveContext::SaveClassPointer<CConstraintTarget const>(
        CKV3TransferSaveContext *const this,
        const CConstraintTarget *const *const pClassInstance,
        KeyValues3 *pSaveToValue)
{
  char pPolymorphicClassName[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v7; // [rsp+108h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  if ( *pClassInstance != 0 )
  {
    if ( CKV3TransferSaveContext::PrepareTargetForClass(
           this,
           pSaveToValue,
           KV3TransferClassBehavior_t::KV3TRANSFER_CLASS_AS_SIMPLE_TABLE,
           pPolymorphicClassName) )
    {
      CKV3TransferSaveContext::PushTarget(this, pSaveToValue);
      CConstraintTarget::KV3TransferSave_CConstraintTarget(*pClassInstance, this);
      CKV3TransferSaveContext::PopTarget(this);
    }
  }
  else
  {
    KeyValues3::SetToNull(pSaveToValue);
  }
}


// CKV3TransferLoadContext::LoadValueFromMember<Vector>  (line 286, @0x00000000031790d0, libserver.so)  // inlines: FindMember, FindSourceMember, LoadValue<Vector>, LoadValueDirect<Vector>
// calls: KeyValues3::FindMember, KeyValues3::GetArrayElementCount, KeyValues3::GetArrayElement, KeyValues3::GetFloat, KeyValues3::KeyValues3, CKV3TransferValHelperAsFloats<Vector, 3, false>::LoadValue<Vector>, KeyValues3::~KeyValues3, _Unwind_Resume, __stack_chk_fail
// callers: CSceneObjectData::KV3TransferLoad_CSceneObjectData
void __fastcall CKV3TransferLoadContext::LoadValueFromMember<Vector>(
        CKV3TransferLoadContext *const this,
        const char *pMemberName,
        KeyValues3LowercaseHash_t memberNameHash,
        Vector *const destValue)
{
  KeyValues3 *Member; // rax
  const KeyValues3 *v6; // r13
  int v7; // ebx
  Vector *v8; // r12
  int ArrayElementCount; // r14d
  int v10; // esi
  const KeyValues3 *ArrayElement; // rax
  _DWORD *v12; // rax
  Vector *const v13; // rdx
  KeyValues3 nullValue; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  Member = KeyValues3::FindMember(this->m_pSourceObject, pMemberName, memberNameHash);
  v6 = Member;
  if ( Member != 0 )
  {
    v7 = 0;
    v8 = destValue;
    ArrayElementCount = KeyValues3::GetArrayElementCount(Member);
    if ( ArrayElementCount <= 0 )
      goto LABEL_7;
    do
    {
      v10 = v7++;
      ArrayElement = KeyValues3::GetArrayElement(v6, v10);
      v8 = (v8 + 4);
      v8[-1].z = KeyValues3::GetFloat(ArrayElement);
    }
    while ( ArrayElementCount > v7 && v7 <= 2 );
    if ( v7 <= 2 )
    {
LABEL_7:
      v12 = (&destValue->x + v7);
      do
      {
        ++v7;
        *v12++ = 0;
      }
      while ( v7 <= 2 );
    }
  }
  else
  {
    KeyValues3::KeyValues3(&nullValue);
    CKV3TransferValHelperAsFloats<Vector,3,false>::LoadValue<Vector>(&nullValue, destValue, v13);
    KeyValues3::~KeyValues3(&nullValue);
  }
}


// CKV3TransferLoadContext::LoadValueFromMember<CUtlString>  (line 286, @0x00000000031791d0, libserver.so)  // inlines: FindMember, FindSourceMember, LoadValue<CUtlString>, LoadValueDirect<CUtlString>
// calls: KeyValues3::FindMember, KeyValues3::GetString, KeyValues3::KeyValues3, KeyValues3::~KeyValues3, __stack_chk_fail, _Unwind_Resume
// callers: CHitBoxSet::KV3TransferLoad_CHitBoxSet
void __fastcall CKV3TransferLoadContext::LoadValueFromMember<CUtlString>(
        CKV3TransferLoadContext *const this,
        const char *pMemberName,
        KeyValues3LowercaseHash_t memberNameHash,
        CUtlString *const destValue)
{
  KeyValues3 *Member; // rax
  KeyValues3 nullValue; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-18h]

  v7 = __readfsqword(0x28u);
  Member = KeyValues3::FindMember(this->m_pSourceObject, pMemberName, memberNameHash);
  if ( Member != 0 )
  {
    KeyValues3::GetString(Member, destValue);
  }
  else
  {
    KeyValues3::KeyValues3(&nullValue);
    KeyValues3::GetString(&nullValue, destValue);
    KeyValues3::~KeyValues3(&nullValue);
  }
}


// CKV3TransferLoadContext::LoadValueFromMember<Quaternion>  (line 286, @0x0000000003182330, libserver.so)  // inlines: FindMember, FindSourceMember, LoadValue<Quaternion>, LoadValueDirect<Quaternion>
// calls: KeyValues3::FindMember, KeyValues3::GetArrayElementCount, KeyValues3::GetArrayElement, KeyValues3::GetFloat, KeyValues3::KeyValues3, KeyValues3::~KeyValues3, _Unwind_Resume, __stack_chk_fail
// callers: CConstraintTarget::KV3TransferLoad_CConstraintTarget
void __fastcall CKV3TransferLoadContext::LoadValueFromMember<Quaternion>(
        CKV3TransferLoadContext *const this,
        const char *pMemberName,
        KeyValues3LowercaseHash_t memberNameHash,
        Quaternion *const destValue)
{
  KeyValues3 *Member; // rax
  const KeyValues3 *v6; // r13
  int v7; // ebx
  Quaternion *v8; // r12
  int ArrayElementCount; // r15d
  int v10; // esi
  const KeyValues3 *ArrayElement; // rax
  _DWORD *v12; // rax
  int v13; // ebx
  int v14; // r15d
  Quaternion *v15; // r12
  const KeyValues3 *v16; // rax
  _DWORD *v17; // rax
  KeyValues3 nullValue; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  Member = KeyValues3::FindMember(this->m_pSourceObject, pMemberName, memberNameHash);
  v6 = Member;
  if ( Member != 0 )
  {
    v7 = 0;
    v8 = destValue;
    ArrayElementCount = KeyValues3::GetArrayElementCount(Member);
    if ( ArrayElementCount <= 0 )
      goto LABEL_7;
    do
    {
      v10 = v7++;
      ArrayElement = KeyValues3::GetArrayElement(v6, v10);
      v8 = (v8 + 4);
      v8[-1].w = KeyValues3::GetFloat(ArrayElement);
    }
    while ( ArrayElementCount > v7 && v7 <= 3 );
    if ( v7 <= 3 )
    {
LABEL_7:
      v12 = (&destValue->x + v7);
      do
      {
        ++v7;
        *v12++ = 0;
      }
      while ( v7 <= 3 );
    }
  }
  else
  {
    KeyValues3::KeyValues3(&nullValue);
    v13 = 0;
    v14 = KeyValues3::GetArrayElementCount(&nullValue);
    v15 = destValue;
    if ( v14 <= 0 )
      goto LABEL_15;
    do
    {
      v16 = KeyValues3::GetArrayElement(&nullValue, v13++);
      v15->x = KeyValues3::GetFloat(v16);
      v15 = (v15 + 4);
    }
    while ( v14 > v13 && v13 <= 3 );
    if ( v13 <= 3 )
    {
LABEL_15:
      v17 = (&destValue->x + v13);
      do
      {
        ++v13;
        *v17++ = 0;
      }
      while ( v13 <= 3 );
    }
    KeyValues3::~KeyValues3(&nullValue);
  }
}


// CKV3TransferValHelper<CUtlVector<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> > >::SaveValue<CUtlVector<CBaseConstraint*> >  (line 614, @0x00000000031795a0, libserver.so)  // inlines: GetPolymorphicClassName<CBaseConstraint>, KV3TransferPolymorphicClassname, KV3TransferSchema_ClassName<CBaseConstraint>, SaveClassPointer<CBaseConstraint>, SaveValue<CBaseConstraint*>, SaveValueDirect<CBaseConstraint*>, Schema_StaticBinding, V_strcpy_safe<256ul>, operator[]
// calls: KeyValues3::SetArrayElementCount, KeyValues3::GetArrayElement, CBaseConstraint::Schema_VerifyBindingIsRegistered, _V_strncpy, CKV3TransferSaveContext::PrepareTargetForClass, CKV3TransferSaveContext::PushTarget, CKV3TransferSaveContext::PopTarget, KeyValues3::SetToNull, __stack_chk_fail
// callers: CRenderMesh::KV3TransferSave_CRenderMesh
void __fastcall CKV3TransferValHelper<CUtlVector<CBaseConstraint *,CUtlMemory<CBaseConstraint *,int>>>::SaveValue<CUtlVector<CBaseConstraint *,CUtlMemory<CBaseConstraint *,int>>>(
        CKV3TransferSaveContext *pContext,
        KeyValues3 *pSaveToValue,
        const CUtlVector<CBaseConstraint*,CUtlMemory<CBaseConstraint*,int> > *const value)
{
  __int64 v4; // rbx
  int m_Size; // r14d
  KeyValues3 *ArrayElement; // r12
  CBaseConstraint **v7; // r14
  __int64 v8; // rax
  int v10; // [rsp+Ch] [rbp-154h]
  CBaseConstraint *v12; // [rsp+18h] [rbp-148h]
  char pPolymorphicClassName[264]; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v14; // [rsp+128h] [rbp-38h]

  v4 = 0;
  v14 = __readfsqword(0x28u);
  m_Size = value->m_Size;
  v10 = value->m_Size;
  KeyValues3::SetArrayElementCount(pSaveToValue, value->m_Size);
  if ( m_Size > 0 )
  {
    while ( 1 )
    {
      ArrayElement = KeyValues3::GetArrayElement(pSaveToValue, v4);
      v7 = &value->m_Memory.m_pMemory[v4];
      if ( *v7 == 0 )
        break;
      v12 = *v7;
      CBaseConstraint::Schema_VerifyBindingIsRegistered();
      v8 = (*(CBaseConstraint::s_pSchemaBinding->_vptr_ISchemaBinding + 13))(CBaseConstraint::s_pSchemaBinding, v12);
      _V_strncpy(pPolymorphicClassName, *(v8 + 24), 256);
      if ( CKV3TransferSaveContext::PrepareTargetForClass(
             pContext,
             ArrayElement,
             KV3TransferClassBehavior_t::KV3TRANSFER_CLASS_AS_POLYMORPHIC_TABLE,
             pPolymorphicClassName) )
      {
        ++v4;
        CKV3TransferSaveContext::PushTarget(pContext, ArrayElement);
        (*((*v7)->_vptr_CBaseConstraint + 1))(*v7, pContext);
        CKV3TransferSaveContext::PopTarget(pContext);
        if ( v10 <= v4 )
          return;
      }
      else
      {
LABEL_3:
        if ( v10 <= ++v4 )
          return;
      }
    }
    KeyValues3::SetToNull(ArrayElement);
    goto LABEL_3;
  }
}


// CKV3TransferValHelper<CUtlVector<CPhysSurfaceProperties*, CUtlMemory<CPhysSurfaceProperties*, int> > >::SaveValue<CUtlVector<CPhysSurfaceProperties*> >  (line 614, @0x0000000003190d90, libserver.so)  // inlines: KV3TransferSave, SaveClassPointer<CPhysSurfaceProperties>, SaveValue<CPhysSurfaceProperties*>, SaveValueDirect<CPhysSurfaceProperties*>, operator[]
// calls: KeyValues3::SetArrayElementCount, KeyValues3::GetArrayElement, CKV3TransferSaveContext::PrepareTargetForClass, CKV3TransferSaveContext::PushTarget, CPhysSurfaceProperties::KV3TransferSave_CPhysSurfaceProperties, CKV3TransferSaveContext::PopTarget, KeyValues3::SetToNull, __stack_chk_fail
// callers: CVPhysXSurfacePropertiesList::KV3TransferSave_CVPhysXSurfacePropertiesList
void __fastcall CKV3TransferValHelper<CUtlVector<CPhysSurfaceProperties *,CUtlMemory<CPhysSurfaceProperties *,int>>>::SaveValue<CUtlVector<CPhysSurfaceProperties *,CUtlMemory<CPhysSurfaceProperties *,int>>>(
        CKV3TransferSaveContext *pContext,
        KeyValues3 *pSaveToValue,
        const CUtlVector<CPhysSurfaceProperties*,CUtlMemory<CPhysSurfaceProperties*,int> > *const value)
{
  __int64 v5; // rbx
  int m_Size; // r14d
  KeyValues3 *ArrayElement; // r13
  const CPhysSurfaceProperties *const *v8; // r14
  int v10; // [rsp+1Ch] [rbp-144h]
  char v11[264]; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v12; // [rsp+128h] [rbp-38h]

  v5 = 0;
  v12 = __readfsqword(0x28u);
  m_Size = value->m_Size;
  v10 = value->m_Size;
  KeyValues3::SetArrayElementCount(pSaveToValue, value->m_Size);
  if ( m_Size > 0 )
  {
    while ( 1 )
    {
      ArrayElement = KeyValues3::GetArrayElement(pSaveToValue, v5);
      v8 = &value->m_Memory.m_pMemory[v5];
      if ( *v8 == 0 )
        break;
      if ( CKV3TransferSaveContext::PrepareTargetForClass(
             pContext,
             ArrayElement,
             KV3TransferClassBehavior_t::KV3TRANSFER_CLASS_AS_SIMPLE_TABLE,
             v11) )
      {
        ++v5;
        CKV3TransferSaveContext::PushTarget(pContext, ArrayElement);
        CPhysSurfaceProperties::KV3TransferSave_CPhysSurfaceProperties(*v8, pContext);
        CKV3TransferSaveContext::PopTarget(pContext);
        if ( v10 <= v5 )
          return;
      }
      else
      {
LABEL_3:
        if ( v10 <= ++v5 )
          return;
      }
    }
    KeyValues3::SetToNull(ArrayElement);
    goto LABEL_3;
  }
}


// CKV3TransferValHelper<CUtlVector<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> > >::LoadValue<CUtlVector<CBaseConstraint*> >  (line 627, @0x000000000317c240, libserver.so)  // inlines: KV3TransferAllocateClassInstance, LoadClassInstance<CBaseConstraint>, LoadOwningPointer<CBaseConstraint>, LoadValue<CBaseConstraint*>, LoadValueDirect<CBaseConstraint*>, operator[]
// calls: KeyValues3::GetArrayElementCount, CUtlVectorBase<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> >::SetCount, KeyValues3::GetMemberString, CKV3TransferContextBase::NoteFailure, KeyValues3::GetArrayElement, KeyValues3::GetType, KV3TransferSchema_AllocateClassInstance<CBaseConstraint>, CKV3TransferLoadContext::PushSource, CKV3TransferLoadContext::PopSource, __stack_chk_fail
// callers: CRenderMesh::KV3TransferLoad_CRenderMesh
// strings: "Tried to load a polymorphic pointer with no '%s' key", "Failed to allocate an instance of class '%s'"
void __fastcall CKV3TransferValHelper<CUtlVector<CBaseConstraint *,CUtlMemory<CBaseConstraint *,int>>>::LoadValue<CUtlVector<CBaseConstraint *,CUtlMemory<CBaseConstraint *,int>>>(
        CKV3TransferLoadContext *pContext,
        const KeyValues3 *pLoadFromValue,
        CUtlVector<CBaseConstraint*,CUtlMemory<CBaseConstraint*,int> > *const value)
{
  __int64 v5; // rbx
  const KeyValues3 *ArrayElement; // r12
  CBaseConstraint **v7; // r13
  CBaseConstraint *Class; // rax
  CBaseConstraint *v9; // [rsp+0h] [rbp-160h]
  int nCount; // [rsp+1Ch] [rbp-144h]
  char v12[264]; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v13; // [rsp+128h] [rbp-38h]

  v5 = 0;
  v13 = __readfsqword(0x28u);
  nCount = KeyValues3::GetArrayElementCount(pLoadFromValue);
  CUtlVectorBase<CBaseConstraint *,CUtlMemory<CBaseConstraint *,int>>::SetCount(value, nCount);
  if ( nCount > 0 )
  {
    do
    {
      while ( 1 )
      {
        ArrayElement = KeyValues3::GetArrayElement(pLoadFromValue, v5);
        v7 = &value->m_Memory.m_pMemory[v5];
        if ( KeyValues3::GetType(ArrayElement) != KeyValues3Type_t::KEYVALUES3_TYPE_NULL )
          break;
        ++v5;
        *v7 = 0;
        if ( nCount <= v5 )
          return;
      }
      KeyValues3::GetMemberString(ArrayElement, "_class", v12, 256, "", 723732232);
      if ( v12[0] != 0 )
      {
        Class = KV3TransferSchema_AllocateClassInstance<CBaseConstraint>(pContext->m_pBlockAllocator, v12);
        *v7 = Class;
        if ( Class != 0 )
        {
          v9 = Class;
          CKV3TransferLoadContext::PushSource(pContext, ArrayElement);
          (*(v9->_vptr_CBaseConstraint + 2))(v9, pContext);
          CKV3TransferLoadContext::PopSource(pContext);
        }
        else
        {
          CKV3TransferContextBase::NoteFailure(pContext, "Failed to allocate an instance of class '%s'", v12);
        }
      }
      else
      {
        *v7 = 0;
        CKV3TransferContextBase::NoteFailure(pContext, "Tried to load a polymorphic pointer with no '%s' key", "_class");
      }
      ++v5;
    }
    while ( nCount > v5 );
  }
}


// CKV3TransferValHelper<CUtlVector<CPhysSurfaceProperties*, CUtlMemory<CPhysSurfaceProperties*, int> > >::LoadValue<CUtlVector<CPhysSurfaceProperties*> >  (line 627, @0x00000000031910d0, libserver.so)  // inlines: As<CSchemaType_DeclaredClass>, Get, InternalAs, KV3TransferAllocateClassInstance, KV3TransferLoad, KV3TransferSchema_AllocateClassInstance<CPhysSurfaceProperties>, LoadClassInstance<CPhysSurfaceProperties>, LoadOwningPointer<CPhysSurfaceProperties>, LoadValue<CPhysSurfaceProperties*>, LoadValueDirect<CPhysSurfaceProperties*>, SchemaTypeOf<CPhysSurfaceProperties>, SchemaTypeScope, operator[]
// calls: KeyValues3::GetArrayElementCount, CUtlVectorBase<CPhysSurfaceProperties*, CUtlMemory<CPhysSurfaceProperties*, int> >::SetCount, CKV3TransferContextBase::NoteFailure, KeyValues3::GetArrayElement, KeyValues3::GetType, CKV3TransferBlockAllocator::AllocBlockBytes, CKV3TransferLoadContext::PushSource, CPhysSurfaceProperties::KV3TransferLoad_CPhysSurfaceProperties, CKV3TransferLoadContext::PopSource, GetNameOfModule
// callers: CVPhysXSurfacePropertiesList::KV3TransferLoad_CVPhysXSurfacePropertiesList
// strings: "Failed to allocate an instance of a class", "CPhysSurfaceProperties"
// globals: SchemaTypeOf<CPhysSurfaceProperties>(void)::s_pTypeOf
void __fastcall CKV3TransferValHelper<CUtlVector<CPhysSurfaceProperties *,CUtlMemory<CPhysSurfaceProperties *,int>>>::LoadValue<CUtlVector<CPhysSurfaceProperties *,CUtlMemory<CPhysSurfaceProperties *,int>>>(
        CKV3TransferLoadContext *pContext,
        const KeyValues3 *pLoadFromValue,
        CUtlVector<CPhysSurfaceProperties*,CUtlMemory<CPhysSurfaceProperties*,int> > *const value)
{
  __int64 v5; // rbx
  unsigned int (__fastcall ***v6)(_QWORD); // rdx
  _QWORD *v7; // rdx
  int v8; // eax
  __int64 v9; // rsi
  const KeyValues3 *ArrayElement; // r12
  CPhysSurfaceProperties **v11; // r14
  __int64 v12; // rcx
  const char *NameOfModule; // rax
  __int64 v14; // rax
  _QWORD *v15; // [rsp+10h] [rbp-50h]
  __int64 v16; // [rsp+10h] [rbp-50h]
  __int64 (__fastcall *v17)(ISchemaSystem *, const char *); // [rsp+10h] [rbp-50h]
  int nCount; // [rsp+24h] [rbp-3Ch]
  CKV3TransferBlockAllocator *m_pBlockAllocator; // [rsp+28h] [rbp-38h]
  CKV3TransferBlockAllocator *v21; // [rsp+28h] [rbp-38h]

  v5 = 0;
  nCount = KeyValues3::GetArrayElementCount(pLoadFromValue);
  CUtlVectorBase<CPhysSurfaceProperties *,CUtlMemory<CPhysSurfaceProperties *,int>>::SetCount(value, nCount);
  if ( nCount > 0 )
  {
    do
    {
      while ( 1 )
      {
        ArrayElement = KeyValues3::GetArrayElement(pLoadFromValue, v5);
        v11 = &value->m_Memory.m_pMemory[v5];
        if ( KeyValues3::GetType(ArrayElement) != KeyValues3Type_t::KEYVALUES3_TYPE_NULL )
          break;
        ++v5;
        *v11 = 0;
        if ( nCount <= v5 )
          return;
      }
      v6 = SchemaTypeOf<CPhysSurfaceProperties>(void)::s_pTypeOf;
      m_pBlockAllocator = pContext->m_pBlockAllocator;
      if ( SchemaTypeOf<CPhysSurfaceProperties>(void)::s_pTypeOf == 0 )
      {
        v17 = *(*g_pSchemaSystem + 104LL);
        NameOfModule = GetNameOfModule();
        v14 = v17(g_pSchemaSystem, NameOfModule);
        v6 = (*(*v14 + 88LL))(v14, "CPhysSurfaceProperties");
        SchemaTypeOf<CPhysSurfaceProperties>(void)::s_pTypeOf = v6;
      }
      v15 = v6;
      if ( (**v6)(v6) == 5
        && (v8 = (*(*v15 + 48LL))(v15), v7 = v15, v8 == 4)
        && (v12 = v15[6]) != 0
        && (v16 = v15[6], (*(**(v12 + 176) + 120LL))(*(v12 + 176), v9, v7) == 0) )
      {
        if ( m_pBlockAllocator != 0 )
        {
          v21 = CKV3TransferBlockAllocator::AllocBlockBytes(m_pBlockAllocator, *(v16 + 24), *(v16 + 28));
          (*(**(v16 + 176) + 88LL))(*(v16 + 176), v21);
        }
        else
        {
          v21 = (*(**(v16 + 176) + 56LL))(*(v16 + 176));
        }
        *v11 = v21;
        if ( v21 != 0 )
        {
          CKV3TransferLoadContext::PushSource(pContext, ArrayElement);
          CPhysSurfaceProperties::KV3TransferLoad_CPhysSurfaceProperties(v21, pContext);
          CKV3TransferLoadContext::PopSource(pContext);
          goto LABEL_9;
        }
      }
      else
      {
        *v11 = 0;
      }
      CKV3TransferContextBase::NoteFailure(pContext, "Failed to allocate an instance of a class", v7);
LABEL_9:
      ++v5;
    }
    while ( nCount > v5 );
  }
}


// CKV3TransferValHelper<Quaternion [3]>::LoadValue<Quaternion [3]>  (line 772, @0x0000000003170660, libserver.so)  // inlines: LoadValue<Quaternion>, LoadValueDirect<Quaternion>
// calls: KeyValues3::GetArrayElementCount, KeyValues3::GetArrayElement, KeyValues3::GetFloat, KeyValues3::KeyValues3, KeyValues3::~KeyValues3, _Unwind_Resume, __stack_chk_fail
// callers: CAttachment::KV3TransferLoad_CAttachment
void __fastcall CKV3TransferValHelper<Quaternion [3]>::LoadValue<Quaternion [3]>(
        const KeyValues3 *pContext,
        const KeyValues3 *pLoadFromValue,
        Quaternion *value)
{
  int v3; // r15d
  int v4; // r14d
  const KeyValues3 *ArrayElement; // r12
  const KeyValues3 *v6; // r13
  int ArrayElementCount; // ebx
  int v8; // esi
  const KeyValues3 *v9; // rax
  _DWORD *v10; // rax
  int v11; // ebx
  int v12; // r14d
  float *v13; // r12
  const KeyValues3 *v14; // rax
  _DWORD *v15; // rax
  int nCount; // [rsp+Ch] [rbp-64h]
  const KeyValues3 *v19; // [rsp+18h] [rbp-58h]
  const KeyValues3 *v20; // [rsp+18h] [rbp-58h]
  KeyValues3 nullValue; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-38h]

  v3 = 0;
  v22 = __readfsqword(0x28u);
  v19 = pLoadFromValue;
  nCount = KeyValues3::GetArrayElementCount(pContext);
  if ( nCount <= 0 )
    goto LABEL_12;
  do
  {
    v4 = 0;
    ArrayElement = KeyValues3::GetArrayElement(pContext, v3);
    v6 = v19;
    ArrayElementCount = KeyValues3::GetArrayElementCount(ArrayElement);
    if ( ArrayElementCount <= 0 )
      goto LABEL_7;
    do
    {
      v8 = v4++;
      v9 = KeyValues3::GetArrayElement(ArrayElement, v8);
      v6 = (v6 + 4);
      *(&v6[-1].m_pTable + 1) = KeyValues3::GetFloat(v9);
    }
    while ( ArrayElementCount > v4 && v4 <= 3 );
    if ( v4 <= 3 )
    {
LABEL_7:
      v10 = v19 + v4;
      do
      {
        ++v4;
        *v10++ = 0;
      }
      while ( v4 <= 3 );
    }
    ++v19;
    ++v3;
  }
  while ( v3 <= 2 && nCount > v3 );
  if ( v3 <= 2 )
  {
LABEL_12:
    v20 = &pLoadFromValue[v3];
    do
    {
      KeyValues3::KeyValues3(&nullValue);
      v11 = 0;
      v12 = KeyValues3::GetArrayElementCount(&nullValue);
      v13 = v20;
      if ( v12 <= 0 )
        goto LABEL_18;
      do
      {
        v14 = KeyValues3::GetArrayElement(&nullValue, v11++);
        *v13++ = KeyValues3::GetFloat(v14);
      }
      while ( v12 > v11 && v11 <= 3 );
      if ( v11 <= 3 )
      {
LABEL_18:
        v15 = v20 + v11;
        do
        {
          ++v11;
          *v15++ = 0;
        }
        while ( v11 <= 3 );
      }
      ++v3;
      KeyValues3::~KeyValues3(&nullValue);
      ++v20;
    }
    while ( v3 <= 2 );
  }
}


// CKV3TransferValHelper<Vector [3]>::LoadValue<Vector [3]>  (line 772, @0x0000000003170830, libserver.so)  // inlines: LoadValue<Vector>, LoadValueDirect<Vector>
// calls: KeyValues3::GetArrayElementCount, KeyValues3::GetArrayElement, KeyValues3::GetFloat, KeyValues3::KeyValues3, KeyValues3::~KeyValues3, _Unwind_Resume, __stack_chk_fail
// callers: CAttachment::KV3TransferLoad_CAttachment
void __fastcall CKV3TransferValHelper<Vector [3]>::LoadValue<Vector [3]>(
        const KeyValues3 *pContext,
        const KeyValues3 *pLoadFromValue,
        Vector *value)
{
  int v3; // r15d
  int v4; // r14d
  const KeyValues3 *ArrayElement; // r12
  const KeyValues3 *v6; // r13
  int ArrayElementCount; // ebx
  int v8; // esi
  const KeyValues3 *v9; // rax
  _DWORD *v10; // rax
  int v11; // ebx
  int v12; // r14d
  float *v13; // r12
  const KeyValues3 *v14; // rax
  char *v15; // rax
  int nCount; // [rsp+Ch] [rbp-64h]
  const KeyValues3 *v19; // [rsp+18h] [rbp-58h]
  float *v20; // [rsp+18h] [rbp-58h]
  KeyValues3 nullValue; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-38h]

  v3 = 0;
  v22 = __readfsqword(0x28u);
  v19 = pLoadFromValue;
  nCount = KeyValues3::GetArrayElementCount(pContext);
  if ( nCount <= 0 )
    goto LABEL_12;
  do
  {
    v4 = 0;
    ArrayElement = KeyValues3::GetArrayElement(pContext, v3);
    v6 = v19;
    ArrayElementCount = KeyValues3::GetArrayElementCount(ArrayElement);
    if ( ArrayElementCount <= 0 )
      goto LABEL_7;
    do
    {
      v8 = v4++;
      v9 = KeyValues3::GetArrayElement(ArrayElement, v8);
      v6 = (v6 + 4);
      *(&v6[-1].m_pTable + 1) = KeyValues3::GetFloat(v9);
    }
    while ( ArrayElementCount > v4 && v4 <= 2 );
    if ( v4 <= 2 )
    {
LABEL_7:
      v10 = v19 + v4;
      do
      {
        ++v4;
        *v10++ = 0;
      }
      while ( v4 <= 2 );
    }
    v19 = (v19 + 12);
    ++v3;
  }
  while ( v3 <= 2 && nCount > v3 );
  if ( v3 <= 2 )
  {
LABEL_12:
    v20 = pLoadFromValue + 3 * v3;
    do
    {
      KeyValues3::KeyValues3(&nullValue);
      v11 = 0;
      v12 = KeyValues3::GetArrayElementCount(&nullValue);
      v13 = v20;
      if ( v12 <= 0 )
        goto LABEL_18;
      do
      {
        v14 = KeyValues3::GetArrayElement(&nullValue, v11++);
        *v13++ = KeyValues3::GetFloat(v14);
      }
      while ( v12 > v11 && v11 <= 2 );
      if ( v11 <= 2 )
      {
LABEL_18:
        v15 = &v20[v11];
        do
        {
          ++v11;
          *v15 = 0;
          v15 += 4;
        }
        while ( v11 <= 2 );
      }
      ++v3;
      KeyValues3::~KeyValues3(&nullValue);
      v20 += 3;
    }
    while ( v3 <= 2 );
  }
}


// CKV3TransferValHelper<float [3]>::LoadValue<float [3]>  (line 772, @0x00000000031794b0, libserver.so)  // inlines: LoadValue<float>, LoadValueDirect<float>
// calls: KeyValues3::GetArrayElementCount, KeyValues3::GetArrayElement, KeyValues3::GetFloat, KeyValues3::KeyValues3, KeyValues3::~KeyValues3, _Unwind_Resume, __stack_chk_fail
// callers: CAttachment::KV3TransferLoad_CAttachment
void __fastcall CKV3TransferValHelper<float [3]>::LoadValue<float [3]>(
        CKV3TransferLoadContext *pContext,
        const KeyValues3 *pLoadFromValue,
        float *value)
{
  int v5; // r12d
  float *v6; // rbx
  int ArrayElementCount; // r15d
  int v8; // esi
  const KeyValues3 *ArrayElement; // rax
  float *v10; // rbx
  KeyValues3 nullValue; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-38h]

  v5 = 0;
  v6 = value;
  v12 = __readfsqword(0x28u);
  ArrayElementCount = KeyValues3::GetArrayElementCount(pLoadFromValue);
  if ( ArrayElementCount <= 0 )
    goto LABEL_6;
  do
  {
    v8 = v5++;
    ArrayElement = KeyValues3::GetArrayElement(pLoadFromValue, v8);
    *v6++ = KeyValues3::GetFloat(ArrayElement);
  }
  while ( v5 <= 2 && ArrayElementCount > v5 );
  if ( v5 != 3 )
  {
LABEL_6:
    v10 = &value[v5];
    do
    {
      KeyValues3::KeyValues3(&nullValue);
      *v10++ = KeyValues3::GetFloat(&nullValue);
      KeyValues3::~KeyValues3(&nullValue);
    }
    while ( v10 != &value[(2 - v5) + 1 + v5] );
  }
}


// CKV3TransferValHelperAsFloats<Vector, 3, false>::LoadValue<Vector>  (line 915, @0x00000000031703c0, libserver.so)
// calls: KeyValues3::GetArrayElementCount, KeyValues3::GetArrayElement, KeyValues3::GetFloat
// callers: SkeletonBoneBounds_t::KV3TransferLoad_SkeletonBoneBounds_t, CMaterialDrawDescriptor::KV3TransferLoad_CMaterialDrawDescriptor, CHitBox::KV3TransferLoad_CHitBox, CKV3TransferLoadContext::LoadValueFromMember<Vector>
void __fastcall CKV3TransferValHelperAsFloats<Vector,3,false>::LoadValue<Vector>(
        const KeyValues3 *pContext,
        const KeyValues3 *pLoadFromValue,
        Vector *const value)
{
  const KeyValues3 *v5; // r12
  int v6; // ebx
  int ArrayElementCount; // r13d
  int v8; // esi
  const KeyValues3 *ArrayElement; // rax
  _DWORD *v10; // rax

  v5 = pLoadFromValue;
  v6 = 0;
  ArrayElementCount = KeyValues3::GetArrayElementCount(pContext);
  if ( ArrayElementCount <= 0 )
    goto LABEL_6;
  do
  {
    v8 = v6++;
    ArrayElement = KeyValues3::GetArrayElement(pContext, v8);
    v5 = (v5 + 4);
    *(&v5[-1].m_pTable + 1) = KeyValues3::GetFloat(ArrayElement);
  }
  while ( ArrayElementCount > v6 && v6 <= 2 );
  if ( v6 <= 2 )
  {
LABEL_6:
    v10 = pLoadFromValue + v6;
    do
    {
      ++v6;
      *v10++ = 0;
    }
    while ( v6 <= 2 );
  }
}


