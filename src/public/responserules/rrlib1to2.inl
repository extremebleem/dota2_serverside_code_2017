
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// Crr2Payload::~Crr2Payload  (line 96, @0x0000000003110c00, libserver.so)  // inlines: Base, Destruct<ParserResponse>, Destruct<ResponseGroup>, Element, Purge, RememberAllocSize, RemoveAll, operator[], ~CUtlLeanVector, ~CUtlLeanVectorBase, ~CUtlLeanVectorImpl, ~CUtlVectorBase, ~CUtlVectorConservative, ~IRulePayload, ~ResponseGroup
// calls: ParserResponse::~ParserResponse
void __fastcall Crr2Payload::~Crr2Payload(Crr2Payload *const this)
{
  int v2; // edx
  unsigned __int64 v3; // r13
  ResponseGroup *v4; // rbx
  __int16 m_nAllocated; // ax
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *m_pElements; // r12
  int v7; // r15d
  __int64 v8; // rdi
  unsigned __int64 v9; // [rsp+8h] [rbp-38h]

  this->_vptr_IRulePayload = off_47C4D10;  // vptr: Crr2Payload
  v2 = this->m_Responses.m_Size - 1;
  if ( v2 >= 0 )
  {
    v3 = 20LL * v2;
    v9 = 20 * (v2 - v2) - 20;
    do
    {
      v4 = &this->m_Responses.m_Memory.m_pMemory[v3 / 0x14];
      m_nAllocated = v4->group.m_nAllocated;
      if ( m_nAllocated != 0 )
        m_pElements = v4->group.m_pElements;
      else
        m_pElements = 0;
      if ( v4->group.m_nCount > 0 )
      {
        v7 = 0;
        do
        {
          v8 = v7++;
          ParserResponse::~ParserResponse(&m_pElements[v8]);
        }
        while ( v4->group.m_nCount > v7 );
        m_nAllocated = v4->group.m_nAllocated;
      }
      v4->group.m_nCount = 0;
      if ( m_nAllocated > 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v4->group.m_pElements);
        v4->group.m_pElements = 0;
      }
      v3 -= 20LL;
      v4->group.m_nAllocated = 0;
    }
    while ( v3 != v9 );
  }
  this->m_Responses.m_Size = 0;
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_Responses.m_Memory.m_pMemory);
  this->m_Responses.m_Memory.m_nCurAllocSize = 0;
  this->m_Responses.m_Memory.m_pMemory = 0;
  this->_vptr_IRulePayload = off_3FEAC70;  // vptr: rr2::IRulePayload
}


// Crr2Payload::~Crr2Payload  (line 96, @0x0000000003110d40, libserver.so)  // inlines: Base, Destruct<ParserResponse>, Destruct<ResponseGroup>, Element, Purge, RememberAllocSize, RemoveAll, operator[], ~CUtlLeanVector, ~CUtlLeanVectorBase, ~CUtlLeanVectorImpl, ~CUtlVectorBase, ~CUtlVectorConservative, ~Crr2Payload, ~IRulePayload, ~ResponseGroup
// calls: ParserResponse::~ParserResponse, operator delete
void __fastcall Crr2Payload::~Crr2Payload(Crr2Payload *const this)
{
  int v2; // edx
  unsigned __int64 v3; // r13
  ResponseGroup *v4; // rbx
  __int16 m_nAllocated; // ax
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *m_pElements; // r12
  int v7; // r15d
  __int64 v8; // rdi
  unsigned __int64 v9; // [rsp+8h] [rbp-38h]

  this->_vptr_IRulePayload = off_47C4D10;  // vptr: Crr2Payload
  v2 = this->m_Responses.m_Size - 1;
  if ( v2 >= 0 )
  {
    v3 = 20LL * v2;
    v9 = 20 * (v2 - v2) - 20;
    do
    {
      v4 = &this->m_Responses.m_Memory.m_pMemory[v3 / 0x14];
      m_nAllocated = v4->group.m_nAllocated;
      if ( m_nAllocated != 0 )
        m_pElements = v4->group.m_pElements;
      else
        m_pElements = 0;
      if ( v4->group.m_nCount > 0 )
      {
        v7 = 0;
        do
        {
          v8 = v7++;
          ParserResponse::~ParserResponse(&m_pElements[v8]);
        }
        while ( v4->group.m_nCount > v7 );
        m_nAllocated = v4->group.m_nAllocated;
      }
      v4->group.m_nCount = 0;
      if ( m_nAllocated > 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v4->group.m_pElements);
        v4->group.m_pElements = 0;
      }
      v3 -= 20LL;
      v4->group.m_nAllocated = 0;
    }
    while ( v3 != v9 );
  }
  this->m_Responses.m_Size = 0;
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_Responses.m_Memory.m_pMemory);
  this->m_Responses.m_Memory.m_nCurAllocSize = 0;
  this->m_Responses.m_Memory.m_pMemory = 0;
  this->_vptr_IRulePayload = off_3FEAC70;  // vptr: rr2::IRulePayload
  operator delete(this);
}


