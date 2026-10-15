
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntityScriptFramework::~CEntityScriptFramework  (line 135, @0x00000000030d2810, libserver.so)  // inlines: Count, Free, GetVM, Purge, RemoveAll, Term, ~CScriptAccessorT, ~CScriptScopeT, ~CUtlVectorUltraConservative
void __fastcall CEntityScriptFramework::~CEntityScriptFramework(CEntityScriptFramework *const this)
{
  int v2; // ebx
  IScriptVM *v3; // r14
  __int64 v4; // r13
  HSCRIPT__ **v5; // rdx
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi

  if ( this->m_hScope != 0 )
  {
    v2 = 0;
    v3 = g_pScriptVM;
    if ( g_pScriptVM != 0 )
    {
      while ( 1 )
      {
        m_pData = this->m_FuncHandles.m_pData;
        if ( m_pData != 0 )
        {
          if ( v2 >= m_pData->m_Size )
            goto LABEL_8;
        }
        else if ( v2 >= 0 )
        {
          goto LABEL_8;
        }
        v4 = v2;
        v5 = m_pData->m_Elements[v2++];
        (*(*v3 + 152LL))(v3, *v5);
        *this->m_FuncHandles.m_pData->m_Elements[v4] = 0;
      }
    }
    m_pData = this->m_FuncHandles.m_pData;
LABEL_8:
    if ( m_pData != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_FuncHandles.m_pData = 0;
    }
    if ( this->m_hScope != 0 && v3 != 0 && (this->m_flags & 1) == 0 )
    {
      (*(*v3 + 136LL))(v3);
      this->m_hScope = 0;
    }
    else
    {
      this->m_hScope = 0;
    }
  }
  this->m_flags = 0;
  if ( this->m_FuncHandles.m_pData != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_FuncHandles.m_pData = 0;
  }
  this->m_hScope = 0;
}


