
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CChatLanguageAnalyzer::CChatLanguageAnalyzer  (line 13, @0x000000000246c170, libserver.so)  // inlines: CUtlDict, CUtlMap, CUtlMemory, CUtlRBTree, ResetDbgInfo, SetCompareType, SetLessFunc
// globals: FastCaselessStringLessThan(char const* const&,char const* const&)
void __fastcall CChatLanguageAnalyzer::CChatLanguageAnalyzer(CChatLanguageAnalyzer *const this)
{
  this->m_dictPhraseTable.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_dictPhraseTable.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_dictPhraseTable.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_dictPhraseTable.m_Elements.m_Tree.m_Root = -1;
  this->m_dictPhraseTable.m_Elements.m_Tree.m_NumElements = 0;
  this->m_dictPhraseTable.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_dictPhraseTable.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_dictPhraseTable.m_Elements.m_Tree.m_pElements = 0;
  this->m_dictPhraseTable.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
}


// CChatLanguageAnalyzer::~CChatLanguageAnalyzer  (line 14, @0x0000000002482ef0, libserver.so)  // inlines: Purge, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlDict<ELanguage, int>::Purge, CUtlRBTree<CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge
void __fastcall CChatLanguageAnalyzer::~CChatLanguageAnalyzer(CChatLanguageAnalyzer *const this)
{
  CUtlDict<ELanguage,int>::Purge(&this->m_dictPhraseTable);
  CUtlRBTree<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_dictPhraseTable.m_Elements.m_Tree);
  if ( (this->m_dictPhraseTable.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_dictPhraseTable.m_Elements.m_Tree.m_Elements);
}


// CChatLanguageAnalyzer::BInit  (line 17, @0x0000000002487200, libserver.so)  // inlines: V_strlen
// calls: CUtlDict<ELanguage, int>::Purge, KeyValues::KeyValues, KeyValues::LoadFromFile, CUtlString::Format, KeyValues::~KeyValues, KeyValues::GetFirstValue, CUtlDict<ELanguage, int>::Insert, KeyValues::GetNextValue, KeyValues::GetName, KeyValues::GetString, PchISO639_1ToELanguage, strlen (14 total)
// strings: "phase_table", "scripts/language_identification_phrases.txt", "Can't load %s", "Phrase %s too long"
bool __fastcall CChatLanguageAnalyzer::BInit(CChatLanguageAnalyzer *const this, CUtlString *const sOutErrMsg)
{
  IBaseFileSystem *v3; // rsi
  KeyValues *FirstValue; // rbx
  const char *Name; // r13
  const char *String; // r12
  ELanguage v8; // r13d
  bool v10; // [rsp+17h] [rbp-69h]
  ELanguage eLang; // [rsp+2Ch] [rbp-54h] BYREF
  KeyValues kvTable; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  CUtlDict<ELanguage,int>::Purge(&this->m_dictPhraseTable);
  KeyValues::KeyValues(&kvTable, "phase_table");
  v3 = 0;
  if ( g_pFullFileSystem != 0 )
    v3 = &g_pFullFileSystem->IBaseFileSystem;
  v10 = KeyValues::LoadFromFile(&kvTable, v3, "scripts/language_identification_phrases.txt", 0, 0);
  if ( v10 )
  {
    FirstValue = KeyValues::GetFirstValue(&kvTable);
    if ( FirstValue != 0 )
    {
      while ( 1 )
      {
        Name = KeyValues::GetName(FirstValue);
        String = KeyValues::GetString(FirstValue, 0, "", 0, 0);
        v8 = PchISO639_1ToELanguage(Name, ELanguage::k_Lang_None);
        eLang = v8;
        if ( String != 0 && strlen(String) > 31 )
          break;
        if ( v8 >= ELanguage::k_Lang_First )
          CUtlDict<ELanguage,int>::Insert(&this->m_dictPhraseTable, String, &eLang);
        FirstValue = KeyValues::GetNextValue(FirstValue);
        if ( FirstValue == 0 )
          goto LABEL_5;
      }
      CUtlString::Format(sOutErrMsg, "Phrase %s too long", String);
      v10 = 0;
    }
  }
  else
  {
    CUtlString::Format(sOutErrMsg, "Can't load %s", "scripts/language_identification_phrases.txt");
  }
LABEL_5:
  KeyValues::~KeyValues(&kvTable);
  return v10;
}


// CChatLanguageAnalyzer::GuessLanguageForSnippet  (line 74, @0x000000000247f4e0, libserver.so)  // inlines: Element, operator[]
// calls: CChatLanguageAnalyzer::IdentifyPhrasesInSnippet
ELanguage __fastcall CChatLanguageAnalyzer::GuessLanguageForSnippet(
        const CChatLanguageAnalyzer *const this,
        const char *pszSnippet)
{
  int v3; // eax
  int v4; // r8d
  UtlRBTreeNode_t<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rcx
  CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::ElemType_t elem; // esi
  ELanguage result; // eax
  int *i; // rdx
  __int64 v9; // rax
  int hPhrases[104]; // [rsp+0h] [rbp-1A0h] BYREF

  v3 = CChatLanguageAnalyzer::IdentifyPhrasesInSnippet(this, pszSnippet, hPhrases, 100);
  v4 = v3;
  if ( v3 <= 0 )
    return ELanguage::k_Lang_None;
  m_pMemory = this->m_dictPhraseTable.m_Elements.m_Tree.m_Elements.m_pMemory;
  elem = m_pMemory[hPhrases[0]].m_Data.elem;
  if ( v3 != 1 )
  {
    result = ELanguage::k_Lang_None;
    if ( elem != m_pMemory[hPhrases[1]].m_Data.elem )
      return result;
    for ( i = &hPhrases[2]; i != &hPhrases[v4 - 2 + 2]; ++i )
    {
      v9 = *i;
      if ( elem != m_pMemory[v9].m_Data.elem )
        return ELanguage::k_Lang_None;
    }
  }
  return m_pMemory[hPhrases[0]].m_Data.elem;
}


// CChatLanguageAnalyzer::GuessLanguageForText  (line 104, @0x0000000002482f30, libserver.so)  // inlines: CUtlHashtable, CUtlKeyValuePair<int>, CUtlMemory, Construct<CUtlKeyValuePair<int, empty_t>, int>, DoInsert<int>, DoLookup<int>, Element, FirstHandle, GetPhraseLanguage, IdealIndex, Insert, MarkInvalid, NextHandle, Purge, RemoveAll, operator(), operator[], ~CUtlHashtable, ~CUtlMemory
// calls: CChatLanguageAnalyzer::IdentifyPhrasesInSnippet, CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Purge, CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> >::~CUtlHashtable, _Unwind_Resume
ELanguage __fastcall CChatLanguageAnalyzer::GuessLanguageForText(
        const CChatLanguageAnalyzer *const this,
        const char *const *pszSnippets,
        int nSnippets,
        float *pflOutConfidence)
{
  int v4; // eax
  int *v5; // rbx
  int *v6; // r13
  int inserted; // eax
  CUtlHashtableEntry<int,empty_t> *v8; // rax
  int v9; // r12d
  unsigned int v10; // edx
  unsigned int v11; // esi
  int v12; // edi
  CUtlHashtableEntry<int,empty_t>::storage_t flags_and_hash; // ecx
  int i; // eax
  int m_nAllocationCount; // r8d
  CUtlHashtableEntry<int,empty_t> *m_pMemory; // r9
  CUtlHashtableEntry<int,empty_t> *v17; // rdx
  int v18; // eax
  ELanguage v19; // ebx
  int m_nUsed; // ecx
  int v21; // r8d
  CUtlHashtableEntry<int,empty_t> *v22; // rdx
  int v24; // esi
  UtlRBTreeNode_t<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v25; // r11
  __int64 v26; // r10
  ELanguage elem; // edi
  ELanguage *v28; // rcx
  int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // r9
  int v35; // edi
  int v36; // ecx
  float v37; // xmm1_4
  const char *const *v39; // [rsp+10h] [rbp-1020h]
  const char **v41; // [rsp+28h] [rbp-1008h]
  _DWORD aeLangs[4]; // [rsp+30h] [rbp-1000h] BYREF
  CUtlHashtable<int,empty_t,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,empty_t>,int> > hashPhrases; // [rsp+40h] [rbp-FF0h] BYREF
  int hPhrases[1012]; // [rsp+60h] [rbp-FD0h] BYREF

  memset(&hashPhrases, 0, 20);
  hashPhrases.m_nMinSize = 32;
  hashPhrases.m_bSizeLocked = 0;
  if ( nSnippets > 0 )
  {
    v41 = pszSnippets;
    v39 = &pszSnippets[(nSnippets - 1) + 1];
    while ( 1 )
    {
      v4 = CChatLanguageAnalyzer::IdentifyPhrasesInSnippet(this, *v41, hPhrases, 1000);
      if ( v4 > 0 )
        break;
LABEL_17:
      if ( ++v41 == v39 )
        goto LABEL_18;
    }
    v5 = hPhrases;
    v6 = &hPhrases[v4 - 1 + 1];
LABEL_8:
    v9 = *v5;
    v10 = 33 * (((4097 * *v5 + 2127912214) >> 19) ^ (4097 * *v5 + 2127912214) ^ 0xC761C23C);
    v11 = ((9 * ((v10 - 369570787) ^ ((v10 + 374761393) << 9)) - 42973499) >> 16)
        ^ (9 * ((v10 - 369570787) ^ ((v10 + 374761393) << 9)) - 42973499)
        ^ 0xB55A4F09;
    if ( hashPhrases.m_nUsed == 0 )
      goto LABEL_5;
    v12 = hashPhrases.m_table.m_nAllocationCount - 1;
    flags_and_hash = hashPhrases.m_table.m_pMemory[(hashPhrases.m_table.m_nAllocationCount - 1) & v11].flags_and_hash;
    if ( (v12 & v11) != (v12 & hashPhrases.m_table.m_pMemory[v12 & v11].flags_and_hash | (flags_and_hash >> 31)) )
      goto LABEL_5;
    for ( i = (hashPhrases.m_table.m_nAllocationCount - 1) & v11;
          ;
          flags_and_hash = hashPhrases.m_table.m_pMemory[i].flags_and_hash )
    {
      if ( ((hashPhrases.m_table.m_nAllocationCount - 1) & v11) == (v12 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((v11 ^ flags_and_hash) & 0x3FFFFFFF) == 0 && v9 == hashPhrases.m_table.m_pMemory[i].data[0] )
        {
          if ( i == -1 )
          {
LABEL_5:
            inserted = CUtlHashtable<int,empty_t,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,empty_t>,int>>::DoInsertUnconstructed(
                         &hashPhrases,
                         v11,
                         1);
            v8 = &hashPhrases.m_table.m_pMemory[inserted];
            if ( v8 != -4LL )
              v8->data[0] = v9;
          }
          if ( ++v5 == v6 )
            goto LABEL_17;
          goto LABEL_8;
        }
        if ( (flags_and_hash & 0x40000000) != 0 )
          goto LABEL_5;
      }
      i = v12 & (i + 1);
    }
  }
LABEL_18:
  m_nAllocationCount = hashPhrases.m_table.m_nAllocationCount;
  m_pMemory = hashPhrases.m_table.m_pMemory;
  if ( hashPhrases.m_table.m_nAllocationCount <= 0 )
    goto LABEL_23;
  v17 = hashPhrases.m_table.m_pMemory + 1;
  v18 = 0;
  if ( hashPhrases.m_table.m_pMemory->flags_and_hash < 0 )
  {
    do
    {
      if ( ++v18 == hashPhrases.m_table.m_nAllocationCount )
        goto LABEL_23;
      ++v17;
    }
    while ( v17[-1].flags_and_hash < 0 );
    if ( v18 != -1 )
      goto LABEL_37;
LABEL_23:
    v19 = ELanguage::k_Lang_None;
    goto LABEL_24;
  }
  v18 = 0;
LABEL_37:
  v24 = 0;
  v25 = this->m_dictPhraseTable.m_Elements.m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    v26 = v18;
    elem = v25[m_pMemory[v26].data[0]].m_Data.elem;
    if ( v24 == 0 )
      goto LABEL_44;
    v28 = &aeLangs[1];
    v29 = 0;
    if ( aeLangs[0] != elem )
    {
      while ( ++v29 != v24 )
      {
        if ( *(++v28 - 1) == elem )
          goto LABEL_59;
      }
      if ( v24 == 3 )
        goto LABEL_23;
LABEL_44:
      v30 = v24++;
      aeLangs[v30] = elem;
      hPhrases[v30] = 1;
      goto LABEL_45;
    }
    v29 = 0;
LABEL_59:
    ++hPhrases[v29];
LABEL_45:
    if ( m_nAllocationCount <= ++v18 )
      goto LABEL_50;
    v31 = &m_pMemory[v18 + 1];
    if ( m_pMemory[v26 + 1].flags_and_hash < 0 )
      break;
LABEL_60:
    if ( v18 == -1 )
      goto LABEL_50;
  }
  while ( m_nAllocationCount != ++v18 )
  {
    v31 += 8;
    if ( *(v31 - 8) >= 0 )
      goto LABEL_60;
  }
LABEL_50:
  v32 = hPhrases[0];
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = hPhrases[0];
  while ( 1 )
  {
    ++v33;
    v35 += v36;
    if ( v24 <= v33 )
      break;
    while ( 1 )
    {
      v36 = hPhrases[v33];
      if ( v32 < v36 )
        break;
      ++v33;
      v35 += v36;
      if ( v24 <= v33 )
        goto LABEL_55;
    }
    v32 = hPhrases[v33];
    v34 = v33;
  }
LABEL_55:
  v37 = v32 / ((((v35 - v32) * 4.0) + v32) + 0.30000001);
  if ( v37 <= 0.5 )
    goto LABEL_23;
  if ( pflOutConfidence != 0 )
    *pflOutConfidence = v37;
  v19 = aeLangs[v34];
LABEL_24:
  m_nUsed = hashPhrases.m_nUsed;
  if ( hashPhrases.m_nUsed != 0 )
  {
    v21 = m_nAllocationCount - 1;
    v22 = &hashPhrases.m_table.m_pMemory[v21];
    if ( v21 >= 0 )
    {
      do
      {
        if ( v22->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v22->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v21;
        --v22;
      }
      while ( v21 != -1 );
    }
    hashPhrases.m_nUsed = 0;
  }
  if ( (hashPhrases.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,empty_t>,int>::Purge(&hashPhrases.m_table);
  return v19;
}


// CChatLanguageAnalyzer::IsDelim  (line 188, @0x000000000246c1c0, libserver.so)
// globals: jpt_246C1DA
bool __fastcall CChatLanguageAnalyzer::IsDelim(uchar32 c)
{
  bool result; // al

  switch ( c )
  {
    case ' ':
    case '!':
    case '"':
    case '#':
    case '(':
    case ')':
    case '+':
    case ',':
    case '-':
    case '.':
    case '/':
    case ':':
    case ';':
    case '<':
    case '=':
    case '>':
    case '?':
    case '@':
    case '[':
    case '\\':
    case ']':
    case '{':
    case '|':
    case '}':
    case '~':
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// CChatLanguageAnalyzer::IdentifyPhrasesInSnippet  (line 223, @0x000000000247ef50, libserver.so)  // inlines: Find, IsDelim, V_strcat_safe<112ul>, V_strcat_safe<80ul>, _V_strcpy, strcpy
// calls: V_UnicodeLength(char const*), V_UTF8ToUTF32, V_UTF32ToUTF8, CUtlRBTree<CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find, V_UChar32ToUTF8, __strcpy_chk, _V_strncat, __stack_chk_fail
// callers: CChatLanguageAnalyzer::GuessLanguageForSnippet, CChatLanguageAnalyzer::GuessLanguageForText
// globals: jpt_247F0CC, jpt_247F20A
int __fastcall CChatLanguageAnalyzer::IdentifyPhrasesInSnippet(
        const CChatLanguageAnalyzer *const this,
        const char *pszSnippet,
        int *pOutPhraseIDs,
        int nMaxOutPhraseIDs)
{
  int result; // eax
  int v6; // eax
  const char *v7; // rdi
  __int64 v8; // rdx
  int v9; // ebx
  void *v10; // rsp
  _DWORD *v11; // r8
  uchar32 v12; // eax
  uchar32 key; // r14d
  char *v14; // r12
  CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t *v15; // r15
  wchar_t v16; // ecx
  int v17; // r13d
  int v18; // eax
  int v19; // edx
  bool v20; // cc
  int v21; // eax
  uchar32 *v22; // rax
  int v23; // eax
  CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t *v24; // r9
  CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t *v25; // r8
  int v26; // eax
  int v27; // r11d
  const char *v28; // rbx
  int v29; // eax
  int v30; // edx
  CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t *v31; // [rsp+0h] [rbp-1E0h] BYREF
  int *pOutPhraseIDsa; // [rsp+8h] [rbp-1D8h]
  int nMaxOutPhraseIDsa; // [rsp+14h] [rbp-1CCh]
  wchar_t *v34; // [rsp+18h] [rbp-1C8h]
  const CChatLanguageAnalyzer *thisa; // [rsp+20h] [rbp-1C0h]
  CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t *search; // [rsp+28h] [rbp-1B8h]
  char *v37; // [rsp+30h] [rbp-1B0h]
  CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t *chPrevNonLatin; // [rsp+38h] [rbp-1A8h]
  char *v39; // [rsp+40h] [rbp-1A0h]
  uchar32 *pwszUnicode; // [rsp+48h] [rbp-198h]
  wchar_t wszWordTwoNonLatinChars[4]; // [rsp+50h] [rbp-190h] BYREF
  CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t v42; // [rsp+60h] [rbp-180h] BYREF
  char szWordPrev2[32]; // [rsp+70h] [rbp-170h] BYREF
  char szWordPrev1[32]; // [rsp+90h] [rbp-150h] BYREF
  char szWord[48]; // [rsp+B0h] [rbp-130h] BYREF
  char szTwoWordPhrase[80]; // [rsp+E0h] [rbp-100h] BYREF
  char szThreeWordPhrase[112]; // [rsp+130h] [rbp-B0h] BYREF
  unsigned __int64 v48; // [rsp+1A8h] [rbp-38h]

  thisa = this;
  v48 = __readfsqword(0x28u);
  result = 0;
  pOutPhraseIDsa = pOutPhraseIDs;
  nMaxOutPhraseIDsa = nMaxOutPhraseIDs;
  if ( nMaxOutPhraseIDs > 0 )
  {
    v6 = V_UnicodeLength(pszSnippet);
    v7 = pszSnippet;
    v8 = (4 * v6 + 32);
    v9 = 0;
    v10 = alloca(v8 + 15LL);
    pwszUnicode = &v31;
    V_UTF8ToUTF32(v7, &v31, v8, 1);
    v11 = pwszUnicode;
    pwszUnicode = szWord;
    v39 = &szWord[32];
    v37 = szThreeWordPhrase;
    v12 = *v11;
    memset(szWordPrev2, 0, sizeof(szWordPrev2));
    memset(szWordPrev1, 0, sizeof(szWordPrev1));
    key = v12;
    memset(szWord, 0, sizeof(szWord));
    v34 = wszWordTwoNonLatinChars;
LABEL_3:
    while ( key != 0 )
    {
      while ( 2 )
      {
        switch ( key )
        {
          case ' ':
          case '!':
          case '"':
          case '#':
          case '(':
          case ')':
          case '+':
          case ',':
          case '-':
          case '.':
          case '/':
          case ':':
          case ';':
          case '<':
          case '=':
          case '>':
          case '?':
          case '@':
          case '[':
          case '\\':
          case ']':
          case '{':
          case '|':
          case '}':
          case '~':
            key = v11[1];
            ++v11;
            if ( key == 0 )
              return v9;
            continue;
          default:
            v14 = pwszUnicode;
            v15 = (v11 + 1);
            v16 = 0;
            v17 = v9;
            search = &v42;
            while ( 2 )
            {
              if ( key == 39 )
                goto LABEL_18;
              if ( (key - 65) <= 0x19 )
                key += 32;
              if ( v14 < v39 )
              {
                LODWORD(chPrevNonLatin) = v16;
                v21 = V_UChar32ToUTF8(key, v14);
                v16 = chPrevNonLatin;
                v14 += v21;
              }
              if ( key <= 255 )
              {
                v16 = 0;
              }
              else
              {
                wszWordTwoNonLatinChars[0] = v16;
                wszWordTwoNonLatinChars[2] = 0;
                wszWordTwoNonLatinChars[1] = key;
                V_UTF32ToUTF8(v34, v37, 32, 1);
                v42.key = v37;
                v18 = CUtlRBTree<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
                        &thisa->m_dictPhraseTable.m_Elements.m_Tree,
                        search);
                if ( v18 < 0 )
                {
                  v19 = v17;
                }
                else
                {
                  v19 = v17 + 1;
                  v20 = nMaxOutPhraseIDsa <= v17 + 1;
                  pOutPhraseIDsa[v17] = v18;
                  if ( v20 )
                    return nMaxOutPhraseIDsa;
                }
                v16 = key;
                v17 = v19;
              }
LABEL_18:
              key = v15->key;
              v11 = v15;
              if ( LODWORD(v15->key) != 0 )
              {
                switch ( key )
                {
                  case ' ':
                  case '!':
                  case '"':
                  case '#':
                  case '(':
                  case ')':
                  case '+':
                  case ',':
                  case '-':
                  case '.':
                  case '/':
                  case ':':
                  case ';':
                  case '<':
                  case '=':
                  case '>':
                  case '?':
                  case '@':
                  case '[':
                  case '\\':
                  case ']':
                  case '{':
                  case '|':
                  case '}':
                  case '~':
                    break;
                  default:
                    v15 = (v15 + 4);
                    continue;
                }
              }
              break;
            }
            v9 = v17;
            if ( v14 <= pwszUnicode )
              goto LABEL_3;
            if ( v14 < v39 )
            {
              v22 = pwszUnicode;
              *v14 = 0;
              search = v15;
              chPrevNonLatin = (v15 - 4);
              v42.key = v22;
              v23 = CUtlRBTree<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
                      &thisa->m_dictPhraseTable.m_Elements.m_Tree,
                      &v42);
              v24 = chPrevNonLatin;
              v25 = search;
              if ( v23 >= 0 )
              {
                v9 = v17 + 1;
                v20 = nMaxOutPhraseIDsa <= v17 + 1;
                pOutPhraseIDsa[v17] = v23;
                if ( v20 )
                  return nMaxOutPhraseIDsa;
              }
              if ( szWordPrev1[0] != 0 )
              {
                search = v25;
                chPrevNonLatin = v24;
                __strcpy_chk(szTwoWordPhrase, szWordPrev1, 80);
                _V_strncat(szTwoWordPhrase, " ", 80, 0xFFFFFFFFLL);
                _V_strncat(szTwoWordPhrase, pwszUnicode, 80, 0xFFFFFFFFLL);
                v42.key = szTwoWordPhrase;
                v26 = CUtlRBTree<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
                        &thisa->m_dictPhraseTable.m_Elements.m_Tree,
                        &v42);
                v24 = chPrevNonLatin;
                v25 = search;
                if ( v26 < 0 )
                {
                  v27 = v9;
                }
                else
                {
                  v27 = v9 + 1;
                  v20 = nMaxOutPhraseIDsa <= v9 + 1;
                  pOutPhraseIDsa[v9] = v26;
                  if ( v20 )
                    return nMaxOutPhraseIDsa;
                }
                if ( szWordPrev2[0] != 0 )
                {
                  v28 = v37;
                  v31 = v25;
                  search = v24;
                  LODWORD(chPrevNonLatin) = v27;
                  __strcpy_chk(v37, szWordPrev2, 112);
                  _V_strncat(v28, " ", 112, 0xFFFFFFFFLL);
                  _V_strncat(v28, szTwoWordPhrase, 112, 0xFFFFFFFFLL);
                  v42.key = v28;
                  v29 = CUtlRBTree<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
                          &thisa->m_dictPhraseTable.m_Elements.m_Tree,
                          &v42);
                  v24 = search;
                  v25 = v31;
                  if ( v29 < 0 )
                  {
                    v30 = chPrevNonLatin;
                  }
                  else
                  {
                    v30 = chPrevNonLatin + 1;
                    v20 = nMaxOutPhraseIDsa <= chPrevNonLatin + 1;
                    pOutPhraseIDsa[chPrevNonLatin] = v29;
                    if ( v20 )
                      return nMaxOutPhraseIDsa;
                  }
                  v27 = v30;
                }
                v9 = v27;
              }
              search = v25;
              chPrevNonLatin = v24;
              __strcpy_chk(szWordPrev2, szWordPrev1, 32);
              __strcpy_chk(szWordPrev1, pwszUnicode, 32);
              v11 = search;
              key = HIDWORD(chPrevNonLatin->key);
            }
            else
            {
              szWordPrev1[0] = 0;
              szWordPrev2[0] = 0;
            }
            break;
        }
        break;
      }
    }
    return v9;
  }
  return result;
}


