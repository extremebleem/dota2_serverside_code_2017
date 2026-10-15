
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDamageModifier::CDamageModifier  (line 17, @0x00000000021a1af0, libserver.so)  // inlines: CEntityHandle, CHandle
void __fastcall CDamageModifier::CDamageModifier(CDamageModifier *const this)
{
  this->m_hEnt.m_Index = -1;
  this->m_flModifier = 1.0;
  this->m_bDoneToMe = 0;
}


// CDamageModifier::AddModifierToEntity  (line 26, @0x00000000021b04a0, libserver.so)  // inlines: AddToTail, CopyConstruct<CDamageModifier*>, GetEHandle, GetEntryIndex, GetSerialNumber, InsertBefore, InternalElement, LinkBefore, Set, operator=, operator[]
// calls: CDamageModifier::RemoveModifier, CUtlLinkedList<CDamageModifier*, int, false, int, CUtlMemory<UtlLinkedListElem_t<CDamageModifier*, int>, int> >::AllocInternal, CUtlLinkedList<CDamageModifier*, int, false, int, CUtlMemory<UtlLinkedListElem_t<CDamageModifier*, int>, int> >::Unlink
void __fastcall CDamageModifier::AddModifierToEntity(CDamageModifier *const this, CBaseEntity *pEntity)
{
  int v4; // eax
  int v5; // r13d
  UtlLinkedListElem_t<CDamageModifier*,int> *v6; // rcx
  __int64 m_Tail; // rdx
  UtlLinkedListElem_t<CDamageModifier*,int> *v8; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx

  CDamageModifier::RemoveModifier(this);
  v4 = CUtlLinkedList<CDamageModifier *,int,false,int,CUtlMemory<UtlLinkedListElem_t<CDamageModifier *,int>,int>>::AllocInternal(
         &pEntity->m_DamageModifiers,
         0);
  v5 = v4;
  if ( v4 == -1 )
  {
    if ( pEntity == 0 )
      goto LABEL_11;
  }
  else
  {
    CUtlLinkedList<CDamageModifier *,int,false,int,CUtlMemory<UtlLinkedListElem_t<CDamageModifier *,int>,int>>::Unlink(
      &pEntity->m_DamageModifiers,
      v4);
    v6 = &pEntity->m_DamageModifiers.m_Memory.m_pMemory[v5];
    v6->m_Next = -1;
    m_Tail = pEntity->m_DamageModifiers.m_Tail;
    v6->m_Previous = m_Tail;
    pEntity->m_DamageModifiers.m_Tail = v5;
    if ( m_Tail == -1 )
      pEntity->m_DamageModifiers.m_Head = v5;
    else
      pEntity->m_DamageModifiers.m_Memory.m_pMemory[m_Tail].m_Next = v5;
    ++pEntity->m_DamageModifiers.m_ElementCount;
    v8 = &pEntity->m_DamageModifiers.m_Memory.m_pMemory[v5];
    if ( v8 != 0 )
      v8->m_Element = this;
  }
  m_pEntity = pEntity->m_pEntity;
  if ( m_pEntity == 0 )
  {
LABEL_11:
    this->m_hEnt.m_Index = -1;
    return;
  }
  v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index == -1 )
    v11 = 0x7FFF;
  else
    v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  LOWORD(this->m_hEnt.m_Index) = v11 | this->m_hEnt.m_Index & 0x8000;
  this->m_hEnt.m_Index = (v10 << 15) | this->m_hEnt.m_Index & 0x7FFF;
}


// CDamageModifier::RemoveModifier  (line 37, @0x00000000021b03c0, libserver.so)  // inlines: Element, Find, FindAndRemove, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Next, Remove, Set, operator CEntityInstance*, operator=, operator[]
// calls: CUtlLinkedList<CDamageModifier*, int, false, int, CUtlMemory<UtlLinkedListElem_t<CDamageModifier*, int>, int> >::Unlink
// callers: CDamageModifier::AddModifierToEntity
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDamageModifier::RemoveModifier(CDamageModifier *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CUtlLinkedList<CDamageModifier*,int,false,int,CUtlMemory<UtlLinkedListElem_t<CDamageModifier*,int>,int> > *m_pInstance; // r13
  int m_Head; // esi
  UtlLinkedListElem_t<CDamageModifier*,int> *m_pMemory; // rdx
  __int64 v8; // rbx
  int v9; // r14d

  m_Index = this->m_hEnt.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEnt.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hEnt.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          m_Head = m_pInstance[12].m_Head;
          if ( m_Head != -1 )
          {
            m_pMemory = m_pInstance[12].m_Memory.m_pMemory;
            while ( 1 )
            {
              v8 = m_Head;
              if ( this == m_pMemory[v8].m_Element )
                break;
              m_Head = m_pMemory[v8].m_Next;
              if ( m_Head == -1 )
                goto LABEL_12;
            }
            v9 = m_Head;
            CUtlLinkedList<CDamageModifier *,int,false,int,CUtlMemory<UtlLinkedListElem_t<CDamageModifier *,int>,int>>::Unlink(
              m_pInstance + 12,
              m_Head);
            m_pInstance[12].m_Memory.m_pMemory[v8].m_Next = m_pInstance[12].m_FirstFree;
            m_pInstance[12].m_FirstFree = v9;
          }
LABEL_12:
          this->m_hEnt.m_Index = -1;
        }
      }
    }
  }
}


// CDamageModifier::SetModifier  (line 49, @0x00000000021a1b10, libserver.so)
void __fastcall CDamageModifier::SetModifier(CDamageModifier *const this, float a2, float flScale)
{
  this->m_flModifier = a2;
}


// CDamageModifier::GetModifier  (line 57, @0x00000000021a1b20, libserver.so)
// callers: CBaseEntity::GetAttackDamageScale, CBaseEntity::GetReceivedDamageScale
float __fastcall CDamageModifier::GetModifier(const CDamageModifier *const this)
{
  return this->m_flModifier;
}


// CDamageModifier::GetCharacter  (line 65, @0x00000000021a1b30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CDamageModifier::GetCharacter(const CDamageModifier *const this)
{
  CBaseEntity *result; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  result = 0;
  m_Index = this->m_hEnt.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEnt.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hEnt.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        return v4->m_pInstance;
    }
  }
  return result;
}


// CDamageModifier::SetDoneToMe  (line 73, @0x00000000021a1b90, libserver.so)
void __fastcall CDamageModifier::SetDoneToMe(CDamageModifier *const this, bool bDoneToMe)
{
  this->m_bDoneToMe = bDoneToMe;
}


// CDamageModifier::IsDamageDoneToMe  (line 81, @0x00000000021a1ba0, libserver.so)
// callers: CBaseEntity::GetAttackDamageScale, CBaseEntity::GetReceivedDamageScale
bool __fastcall CDamageModifier::IsDamageDoneToMe(const CDamageModifier *const this)
{
  return this->m_bDoneToMe;
}


