
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorAttack::~CDOTABehaviorAttack  (line 7, @0x0000000002883dd0, libserver.so)  // inlines: KillRef, RemoveFromDList<CUtlReference<CDOTA_AttackRecord> >, RemoveNode, ~CUtlReference
// calls: Action<CDOTA_BaseNPC>::~Action
void __fastcall CDOTABehaviorAttack::~CDOTABehaviorAttack(CDOTABehaviorAttack *const this)
{
  CDOTA_AttackRecord *m_pObject; // rdx
  CUtlReference<CDOTA_AttackRecord> *m_pPrev; // rax
  CUtlReference<CDOTA_AttackRecord> *m_pNext; // rax
  CUtlReference<CDOTA_AttackRecord> *v4; // rax

  m_pObject = this->m_pRecord.m_pObject;
  this->_vptr_INextBotEventResponder = &off_42BAED0;
  this->_vptr_IContextualQuery = &off_42BB2F0;
  if ( m_pObject != 0 )
  {
    m_pPrev = this->m_pRecord.m_pPrev;
    if ( m_pPrev != 0 )
    {
      m_pPrev->m_pNext = this->m_pRecord.m_pNext;
      m_pNext = this->m_pRecord.m_pNext;
      if ( m_pNext != 0 )
        m_pNext->m_pPrev = this->m_pRecord.m_pPrev;
    }
    else if ( m_pObject->m_References.m_pHead == &this->m_pRecord )
    {
      v4 = this->m_pRecord.m_pNext;
      m_pObject->m_References.m_pHead = v4;
      if ( v4 != 0 )
        v4->m_pPrev = 0;
    }
    this->m_pRecord.m_pPrev = 0;
    this->m_pRecord.m_pNext = 0;
    this->m_pRecord.m_pObject = 0;
  }
  Action<CDOTA_BaseNPC>::~Action(this);
}


// CDOTABehaviorAttack::~CDOTABehaviorAttack  (line 7, @0x0000000002883f40, libserver.so)  // inlines: KillRef, RemoveFromDList<CUtlReference<CDOTA_AttackRecord> >, RemoveNode, ~CDOTABehaviorAttack, ~CUtlReference
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete
void __fastcall CDOTABehaviorAttack::~CDOTABehaviorAttack(CDOTABehaviorAttack *const this)
{
  CDOTA_AttackRecord *m_pObject; // rdx
  CUtlReference<CDOTA_AttackRecord> *m_pPrev; // rax
  CUtlReference<CDOTA_AttackRecord> *m_pNext; // rax
  CUtlReference<CDOTA_AttackRecord> *v5; // rax

  this->_vptr_INextBotEventResponder = &off_42BAED0;
  m_pObject = this->m_pRecord.m_pObject;
  this->_vptr_IContextualQuery = &off_42BB2F0;
  if ( m_pObject != 0 )
  {
    m_pPrev = this->m_pRecord.m_pPrev;
    if ( m_pPrev != 0 )
    {
      m_pPrev->m_pNext = this->m_pRecord.m_pNext;
      m_pNext = this->m_pRecord.m_pNext;
      if ( m_pNext != 0 )
        m_pNext->m_pPrev = this->m_pRecord.m_pPrev;
    }
    else if ( m_pObject->m_References.m_pHead == &this->m_pRecord )
    {
      v5 = this->m_pRecord.m_pNext;
      m_pObject->m_References.m_pHead = v5;
      if ( v5 != 0 )
        v5->m_pPrev = 0;
    }
    this->m_pRecord.m_pPrev = 0;
    this->m_pRecord.m_pNext = 0;
    this->m_pRecord.m_pObject = 0;
  }
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// CDOTABehaviorAttack::GetName  (line 16, @0x0000000002882430, libserver.so)
const char *__fastcall CDOTABehaviorAttack::GetName(const CDOTABehaviorAttack *const this)
{
  return "Attack";
}


