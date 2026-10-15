
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_responsequery.cpp  (line 0, @0x0000000001a6a900, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_responsequery_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// rr2::CResponseQuery::Sort  (line 19, @0x0000000003112d30, libserver.so)  // inlines: CFact, Compare, Element, RVariant, Sort, V_swap<rr2::CResponseQuery::CFact>, operator const UtlSymId_t, operator int32, operator=, operator[], qsortcompare
// calls: V_qsort
// callers: rr2::CResponseDB::FindBestMatch, rr2::CResponseDB::FindMatches
// globals: rr2::ComparatorBySymbol<rr2::CResponseQuery::CFact,&rr2::CResponseQuery::CFact::key>::qsortcompare(rr2::CResponseQuery::CFact const*,rr2::CResponseQuery::CFact 
void __fastcall rr2::CResponseQuery::Sort(rr2::CResponseQuery *const this)
{
  int m_Size; // eax
  rr2::CResponseQuery::CFact *m_pMemory; // rdi
  int v4; // eax
  unsigned int v5; // r11d
  __int64 v6; // rcx
  __int64 v7; // rdi
  rr2::CResponseQuery::CFact *v8; // rdx
  __int64 v9; // rax
  unsigned __int16 *v10; // rsi
  unsigned __int16 *v11; // rdx
  unsigned __int16 v12; // cx
  int v13; // r10d
  int v14; // r9d

  m_Size = this->m_facts.m_Size;
  if ( this->m_facts.m_Size <= 1 )
    goto LABEL_4;
  m_pMemory = this->m_facts.m_Memory.m_pMemory;
  if ( m_pMemory != 0 )
  {
    V_qsort(
      m_pMemory,
      m_Size,
      12,
      rr2::ComparatorBySymbol<rr2::CResponseQuery::CFact,&rr2::CResponseQuery::CFact::key>::qsortcompare);
LABEL_4:
    this->m_bSorted = 1;
    return;
  }
  v4 = m_Size - 1;
  do
  {
    v5 = v4 - 1;
    if ( v4 > 0 )
    {
      v6 = 0;
      v7 = 4 * (3LL * v5 + 3);
      while ( 1 )
      {
        v8 = this->m_facts.m_Memory.m_pMemory;
        v9 = v6 + 12;
        v10 = (&v8[1].key.m_Sym.m_Id + v6);
        v11 = (&v8->key.m_Sym.m_Id + v6);
        v12 = *v11;
        if ( *v11 >= *v10 )
        {
          if ( v9 == v7 )
            break;
        }
        else
        {
          *v11 = *v10;
          v13 = *(v11 + 1);
          v14 = *(v11 + 2);
          *(v11 + 1) = *(v10 + 1);
          *(v11 + 2) = *(v10 + 2);
          *v10 = v12;
          *(v10 + 1) = v13;
          *(v10 + 2) = v14;
          if ( v9 == v7 )
            break;
        }
        v6 = v9;
      }
    }
    v4 = v5;
  }
  while ( v5 != -1 );
  this->m_bSorted = 1;
}


// rr2::CResponseQuery::GetHumanReadableStringForDebuggingOnly  (line 27, @0x0000000003112e10, libserver.so)  // inlines: CUtlSymbol, IsSymbol, String, Sym, operator const UtlSymId_t, operator int32, operator[]
// calls: CUtlBuffer::PutString, CUtlSymbolTable::String, CUtlBuffer::Printf
// strings: "\t%s : %s\n", "\t%s : %.2f\n", "{}\n"
void __fastcall rr2::CResponseQuery::GetHumanReadableStringForDebuggingOnly(
        const rr2::CResponseQuery *const this,
        CUtlBuffer *const buf)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r12
  char *v6; // rax
  rr2::CResponseQuery::CFact *v7; // r15
  char *v8; // rax
  char *v9; // [rsp+8h] [rbp-48h]
  double m_f; // [rsp+8h] [rbp-48h]
  unsigned __int16 v11[32]; // [rsp+10h] [rbp-40h] BYREF

  if ( this->m_facts.m_Size <= 0 )
  {
    CUtlBuffer::PutString(buf, "{}\n");
  }
  else
  {
    CUtlBuffer::PutString(buf, "{");
    if ( this->m_facts.m_Size > 0 )
    {
      v4 = 0;
      v5 = 4 * (3LL * (this->m_facts.m_Size - 1) + 3);
      do
      {
        while ( 1 )
        {
          v7 = &this->m_facts.m_Memory.m_pMemory[v4 / 0xC];
          if ( (v7->val.m_floatBits & 0x7F800000) != 0x7F800000 )
            break;
          v4 += 12LL;
          v11[0] = v7->val.m_n;
          v9 = CUtlSymbolTable::String(&this->m_db->m_SymTab, v11);
          v11[0] = v7->key.m_Sym.m_Id;
          v6 = CUtlSymbolTable::String(&this->m_db->m_SymTab, v11);
          CUtlBuffer::Printf(buf, "\t%s : %s\n", v6, v9);
          if ( v4 == v5 )
            goto LABEL_7;
        }
        v4 += 12LL;
        m_f = v7->val.m_f;
        v11[0] = v7->key.m_Sym.m_Id;
        v8 = CUtlSymbolTable::String(&this->m_db->m_SymTab, v11);
        CUtlBuffer::Printf(buf, "\t%s : %.2f\n", v8, m_f);
      }
      while ( v4 != v5 );
    }
LABEL_7:
    CUtlBuffer::PutString(buf, "}\n");
  }
}


// rr2::CResponseQuery::GetSymbol  (line 52, @0x0000000003112f70, libserver.so)  // inlines: CUtlSymbol, Symbol
// calls: CUtlSymbolTable::AddString
// callers: CRuleScriptBridge::ScriptToResponseQuery
_WORD *__fastcall rr2::CResponseQuery::GetSymbol(_WORD *a1, rr2::CResponseQuery *const this, const char *pszString)
{
  unsigned __int16 v5[16]; // [rsp+0h] [rbp-20h] BYREF

  CUtlSymbolTable::AddString(v5, &this->m_db->m_SymTab, pszString);
  *a1 = v5[0];
  return a1;
}


// rr2::CResponseQuery::AddFact  (line 58, @0x0000000003113070, libserver.so)  // inlines: AddToTail, CFact, CFact<int>, CUtlSymbol, CopyConstruct<rr2::CResponseQuery::CFact>, Element, GrowMemory, RVariant, Symbol, operator[]
// calls: CUtlMemory<rr2::CResponseQuery::CFact, int>::Grow
// callers: CRuleScriptBridge::ScriptToResponseQuery
void __fastcall rr2::CResponseQuery::AddFact(rr2::CResponseQuery *const this, const rr2::Symbol *const key, int n)
{
  __m128i v3; // xmm0
  int v4; // r14d
  __int64 m_Size; // r12
  UtlSymId_t m_Id; // r13
  int v8; // eax
  rr2::CResponseQuery::CFact *v9; // rax
  int v10; // [rsp-24h] [rbp-2Ch]

  *v3.m128i_i32 = n;
  v4 = _mm_cvtsi128_si32(v3);
  m_Size = this->m_facts.m_Size;
  m_Id = key->m_Sym.m_Id;
  v8 = this->m_facts.m_Size;
  if ( m_Size == this->m_facts.m_Memory.m_nAllocationCount )
  {
    v10 = n;
    CUtlMemory<rr2::CResponseQuery::CFact,int>::Grow(&this->m_facts.m_Memory, 1);
    v8 = this->m_facts.m_Size;
    n = v10;
  }
  this->m_facts.m_Size = v8 + 1;
  v9 = &this->m_facts.m_Memory.m_pMemory[m_Size];
  if ( v9 != 0 )
  {
    v9->key.m_Sym.m_Id = m_Id;
    v9->val.m_n = n;
    v9->val.m_floatBits = v4;
  }
  this->m_bSorted = 0;
}


// rr2::CResponseQuery::AddFact  (line 64, @0x0000000003112ff0, libserver.so)  // inlines: AddToTail, CFact, CFact<float>, CUtlSymbol, CopyConstruct<rr2::CResponseQuery::CFact>, Element, GrowMemory, RVariant, Symbol, operator[]
// calls: CUtlMemory<rr2::CResponseQuery::CFact, int>::Grow
// callers: CSpeechScriptBridge::MapOldToNewQuery, CRuleScriptBridge::ScriptToResponseQuery, Crr2LibPort::MapOldToNewQuery
void __fastcall rr2::CResponseQuery::AddFact(
        rr2::CResponseQuery *const this,
        const rr2::Symbol *const key,
        __m128i a3,
        float f)
{
  int v4; // r13d
  __int64 m_Size; // r12
  UtlSymId_t m_Id; // r14
  int v8; // eax
  rr2::CResponseQuery::CFact *v9; // rax
  unsigned __int32 fa; // [rsp+0h] [rbp-24h]

  v4 = *a3.m128i_i32;
  m_Size = this->m_facts.m_Size;
  m_Id = key->m_Sym.m_Id;
  v8 = this->m_facts.m_Size;
  if ( m_Size == this->m_facts.m_Memory.m_nAllocationCount )
  {
    fa = a3.m128i_i32[0];
    CUtlMemory<rr2::CResponseQuery::CFact,int>::Grow(&this->m_facts.m_Memory, 1);
    v8 = this->m_facts.m_Size;
    a3 = fa;
  }
  this->m_facts.m_Size = v8 + 1;
  v9 = &this->m_facts.m_Memory.m_pMemory[m_Size];
  if ( v9 != 0 )
  {
    v9->key.m_Sym.m_Id = m_Id;
    v9->val.m_n = v4;
    v9->val.m_floatBits = _mm_cvtsi128_si32(a3);
  }
  this->m_bSorted = 0;
}


// rr2::CResponseQuery::AddFact  (line 70, @0x00000000031130f0, libserver.so)  // inlines: AddToTail, CFact, CFact<rr2::Symbol>, CUtlSymbol, CopyConstruct<rr2::CResponseQuery::CFact>, Element, GrowMemory, RVariant, Symbol, operator int32, operator[]
// calls: CUtlMemory<rr2::CResponseQuery::CFact, int>::Grow
// callers: CSpeechScriptBridge::MapOldToNewQuery, CRuleScriptBridge::ScriptToResponseQuery, Crr2LibPort::MapOldToNewQuery
void __fastcall rr2::CResponseQuery::AddFact(
        rr2::CResponseQuery *const this,
        const rr2::Symbol *const key,
        const rr2::Symbol *const s)
{
  __int64 m_Size; // r12
  UtlSymId_t m_Id; // r14
  int v6; // r13d
  int v7; // eax
  rr2::CResponseQuery::CFact *v8; // rax

  m_Size = this->m_facts.m_Size;
  m_Id = key->m_Sym.m_Id;
  v6 = s->m_Sym.m_Id;
  v7 = this->m_facts.m_Size;
  if ( m_Size == this->m_facts.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<rr2::CResponseQuery::CFact,int>::Grow(&this->m_facts.m_Memory, 1);
    v7 = this->m_facts.m_Size;
  }
  this->m_facts.m_Size = v7 + 1;
  v8 = &this->m_facts.m_Memory.m_pMemory[m_Size];
  if ( v8 != 0 )
  {
    v8->key.m_Sym.m_Id = m_Id;
    v8->val.m_n = v6;
    v8->val.m_floatBits = 2143289343;
  }
  this->m_bSorted = 0;
}


// rr2::CResponseQuery::TestIsSorted  (line 77, @0x0000000003112fa0, libserver.so)
bool __fastcall rr2::CResponseQuery::TestIsSorted(const rr2::CResponseQuery *const this)
{
  rr2::CResponseQuery::CFact *m_pMemory; // rax
  rr2::CResponseQuery::CFact *v2; // rcx
  rr2::CResponseQuery::CFact *v3; // rdx

  if ( this->m_facts.m_Size <= 1 )
    return 1;
  m_pMemory = this->m_facts.m_Memory.m_pMemory;
  if ( m_pMemory->key.m_Sym.m_Id <= m_pMemory[1].key.m_Sym.m_Id )
  {
    v2 = &m_pMemory[this->m_facts.m_Size - 2];
    while ( m_pMemory != v2 )
    {
      v3 = m_pMemory++;
      if ( v3[1].key.m_Sym.m_Id > v3[2].key.m_Sym.m_Id )
        return 0;
    }
    return 1;
  }
  return 0;
}


