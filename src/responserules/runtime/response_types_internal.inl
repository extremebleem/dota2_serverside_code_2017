
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ResponseGroup::ResponseGroup  (line 131, @0x00000000030fe170, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, Base, CUtlLeanVector, CUtlLeanVectorBase, CUtlLeanVectorImpl, Construct<ParserResponse>, Destruct<ParserResponse>, Element, EnsureCapacity, LeafCodeInfo_t, operator[], ~CUtlLeanVector, ~CUtlLeanVectorBase, ~CUtlLeanVectorImpl
// calls: ParserResponse::ParserResponse, ParserResponse::operator=, ParserResponse::~ParserResponse, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CUtlLeanVectorBase<ParserResponse, short int>::Purge, _Unwind_Resume
// strings: "../../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow"
void __fastcall ResponseGroup::ResponseGroup(ResponseGroup *const this, const ResponseGroup *const src)
{
  const ResponseGroup *v3; // rax
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *i; // rax
  __int16 m_nAllocated; // bx
  int v6; // edx
  int v7; // eax
  CUtlLeanVectorBase<ParserResponse,short int>::IndexType_t m_nCount; // ax
  __int16 v9; // r12
  __int64 v10; // r13
  ParserResponse *v11; // r14
  ParserResponse *v12; // r13
  CUtlLeanVectorBase<ParserResponse,short int>::IndexType_t v13; // ax
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v14; // rax
  ParserResponse *v15; // rbx
  char v16; // al
  char v17; // al
  char v18; // al
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // [rsp+8h] [rbp-88h]
  ParserResponse *v28; // [rsp+18h] [rbp-78h]
  unsigned __int64 v29; // [rsp+20h] [rbp-70h]
  CUtlLeanVectorBase<ParserResponse,short int>::IndexType_t v30; // [rsp+2Eh] [rbp-62h]
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *m_pElements; // [rsp+30h] [rbp-60h]
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v32; // [rsp+38h] [rbp-58h]
  LeafCodeInfo_t v33; // [rsp+40h] [rbp-50h] BYREF

  this->group.m_nCount = 0;
  this->group.m_nAllocated = 0;
  this->group.m_pElements = 0;
  if ( src->group.m_nCount > 0 )
  {
    v29 = 0;
    v30 = 0;
    v26 = 90 * ((src->group.m_nCount - 1) + 1LL);
    v3 = src;
    if ( src->group.m_nAllocated == 0 )
      goto LABEL_27;
LABEL_3:
    for ( i = v3->group.m_pElements; ; i = 0 )
    {
      v28 = &i[v29 / 0x5A];
      if ( v30 == 0x7FFF )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          goto LABEL_38;
        while ( 1 )
        {
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v22, v23, v20, v21, v24, v25) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
LABEL_38:
          v33.m_szFile = "../../public/tier1/utlleanvector.h";
          v33.m_szFunction = "AddToTailGetPtr";
          v33.m_nLine = 557;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v33,
            "%s allocation count overflow",
            "AddToTailGetPtr");
        }
      }
      m_nAllocated = this->group.m_nAllocated;
      v6 = v30 + 1;
      v7 = m_nAllocated;
      if ( v6 > m_nAllocated )
      {
        while ( v6 > v7 )
        {
          if ( m_nAllocated <= 16382 )
          {
            if ( m_nAllocated <= 0 )
            {
              m_nAllocated = 1;
              v7 = 1;
            }
            else
            {
              m_nAllocated *= 2;
              v7 = m_nAllocated;
            }
          }
          else
          {
            m_nAllocated = 0x7FFF;
            v7 = 0x7FFF;
          }
        }
        v32 = (**g_pMemAlloc)(g_pMemAlloc, 90LL * m_nAllocated);
        if ( this->group.m_nAllocated != 0 )
          m_pElements = this->group.m_pElements;
        else
          m_pElements = 0;
        m_nCount = this->group.m_nCount;
        if ( m_nAllocated <= this->group.m_nCount )
          m_nCount = m_nAllocated;
        v9 = 0;
        if ( m_nCount > 0 )
        {
          do
          {
            v10 = v9;
            v11 = &v32[v10];
            if ( &v32[v10] != 0 )
              ParserResponse::ParserResponse(&v32[v10]);
            v12 = &m_pElements[v10];
            ParserResponse::operator=(v11, v12);
            ++v9;
            ParserResponse::~ParserResponse(v12);
            v13 = this->group.m_nCount;
            if ( m_nAllocated <= this->group.m_nCount )
              v13 = m_nAllocated;
          }
          while ( v9 < v13 );
        }
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->group.m_pElements);
        this->group.m_nAllocated = m_nAllocated;
        this->group.m_pElements = v32;
      }
      v14 = m_nAllocated != 0 ? this->group.m_pElements : 0LL;
      v15 = &v14[v30];
      if ( v15 != 0 )
        ParserResponse::ParserResponse(v15);
      ++this->group.m_nCount;
      ParserResponse::operator=(v15, v28);
      v29 += 90LL;
      if ( v29 == v26 )
        break;
      v30 = this->group.m_nCount;
      v3 = src;
      if ( src->group.m_nAllocated != 0 )
        goto LABEL_3;
LABEL_27:
      ;
    }
  }
  v16 = *(src + 19) & 1 | *(this + 19) & 0xFE;
  *(this + 19) = v16;
  this->m_nDepletionCount = src->m_nDepletionCount;
  v17 = *(src + 19) & 2 | v16 & 0xFD;
  *(this + 19) = v17;
  v18 = *(src + 19) & 4 | v17 & 0xFB;
  *(this + 19) = v18;
  v19 = *(src + 19) & 8 | v18 & 0xF7;
  *(this + 19) = v19;
  *(this + 19) = *(src + 19) & 0x10 | v19 & 0xEF;
  this->m_bEnabled = src->m_bEnabled;
  this->m_nCurrentIndex = src->m_nCurrentIndex;
}


